#include <iostream>
#include <cstring>
#include <cstdint>
#include <stdlib.h>
#include <assert.h>
#include <unistd.h>
#include <vta/runtime.h>

#include <time.h>
#include <cmath>
#include <VTADWC.h>

#include <iostream>
#include <cstring>
#include <cstdint>
#include <stdlib.h>
#include <unistd.h>
#include <assert.h>

using namespace std;

namespace DWC{
struct DWC_addcontext{
	uint32_t dst_;
	uint32_t size_;
	uint32_t src_;
	uint32_t OHW16;
	uint32_t channel_before;
	uint32_t ischannel_before;
	uint32_t channel_after;
	uint32_t channel_ii;
	uint32_t nchannel;
};

struct DWC_resetacc{
	uint32_t base_;
	uint32_t size_;
};

int DWC_reset_acc(void *param)
{
	DWC_resetacc *p = (DWC_resetacc *) (param);
	VTAUopLoopBegin(p->size_, 1,0,0);
	VTAUopPush(0,1,p->base_,0,0,0,0,0);
	VTAUopLoopEnd();
	return 0;
}
int DWC_alu_max(void *param) {
  DWC_resetacc *p = (DWC_resetacc *) (param);
  VTAUopLoopBegin(p->size_, 1, 1, 0);
  VTAUopPush(1, 0, p->base_, 0, 0, 1, 1, -128);
  VTAUopLoopEnd();
  return 0;
}

int DWC_alu_relu(void *param) {
  DWC_resetacc *p = (DWC_resetacc *) (param);
  VTAUopLoopBegin(p->size_, 1, 1, 0);
  VTAUopPush(1, 0, p->base_, 0, 0, 1, 1, 0);
  VTAUopLoopEnd();
  return 0;
}

int DWC_alu_min(void *param) {
  DWC_resetacc *p = (DWC_resetacc *) (param);
  VTAUopLoopBegin(p->size_, 1, 1, 0);
  VTAUopPush(1, 0, p->base_, 0, 0, 0, 1, 127);
  VTAUopLoopEnd();
  return 0;
}

// alu func
struct ShiftContext {
  uint32_t base_;
  uint32_t size_;
  int8_t shift_;
};

int DWC_alu_shr(void *param) {
  ShiftContext *p = (ShiftContext *) (param);
  VTAUopLoopBegin(p->size_, 1, 1, 0);
  VTAUopPush(1, 0, p->base_, 0, 0, 3, 1, p->shift_);
  VTAUopLoopEnd();

  return 0;
}


int DWC_alu_add(void *param) {
  DWC_addcontext *p = (DWC_addcontext *) (param);
  VTAUopLoopBegin(p->channel_before, 1, 0, 0);
  VTAUopPush(1, 0, 0, p->src_, 0, 2, 0, 0);
  VTAUopLoopEnd();
  /*
	for(int i=0; i<p->channel_before;i++)
		VTAUopPush(1,0, i, p->src_,0, 2,0,0);
	for(int i=p->channel_before; i<p->channel_ii+p->channel_before;i++)
		VTAUopPush(1,0, i, p->src_+(i-p->channel_before)/p->OHW16+p->ischannel_before,0, 2,0,0);
	for(int i=p->channel_before+p->channel_ii; i<p->channel_before+p->channel_ii+p->channel_after;i++)
		VTAUopPush(1,0, i, p->src_+p->nchannel-1, 0,2,0,0);
  */

  return 0;
}

struct DWC_gemmop_mxn {
  uint32_t TileK;
//  uint32_t Tile;
//  uint32_t OH;
//  uint32_t OW;
  uint32_t OHW16;
//  uint32_t vta_K;
  uint32_t channel_before;
  uint32_t ischannel_before;
  uint32_t channel_after;
  uint32_t channel_ii;
  uint32_t nchannel;
};

int DWC_gemmop_mxn(void *param)
{
	struct DWC_gemmop_mxn *ctx = (struct DWC_gemmop_mxn *) (param);
	VTAUopLoopBegin(ctx->TileK, 0,1,1);
	/*
	for(int i=0; i<ctx->channel_before;i++)
		VTAUopPush(0,0, i,0,i*ctx->TileK, 0,0,0);
	for(int i=ctx->channel_before; i<ctx->channel_ii+ctx->channel_before;i++)
		VTAUopPush(0,0, i,((i-ctx->channel_before)/ctx->OHW16+ctx->ischannel_before)*ctx->TileK,i*ctx->TileK, 0,0,0);
	for(int i=ctx->channel_before+ctx->channel_ii; i<ctx->channel_before+ctx->channel_ii+ctx->channel_after;i++)
		VTAUopPush(0,0, i,(ctx->nchannel-1)*ctx->TileK,i*ctx->TileK, 0,0,0);
	//dst, src, wgt
		*/
	VTAUopLoopBegin(ctx->channel_before, 1, 0,ctx->TileK);
	VTAUopPush(0,0, 0,0,0, 0,0,0);
	VTAUopLoopEnd();

	VTAUopLoopEnd();
	return 0;
}


void dwc_kernel(uint32_t ntile,
				uint32_t TileK,
				uint32_t Tile,
				uint32_t OH,
				uint32_t OW,
				uint32_t C,
				uint32_t vta_OHW,
				uint32_t vta_K,
				void *vta_input_buf,
				void *vta_filter_buf, 
				void *vta_output_buf,
				void *vta_bias_buf,
				uint32_t doBias,
				uint32_t doRelu,
				int32_t shift,
				void* vtaCmdH
				)
{
//		VTACommandHandle vtaCmdH{nullptr};
//		vtaCmdH = VTATLSCommandHandle(); //Error 
		VTASetDebugMode(vtaCmdH,0);


	int ohw16 = vta_OHW/16;
	int Boundary_tile = Tile;

	for(int tile=0; tile < ntile; tile++)
	{
//		printf("%d/%d\n",tile,ntile);
		if(tile+1 == ntile && ((C*vta_OHW/16)%Tile)!=0)
		{
			Boundary_tile = (C*vta_OHW/16)%Tile;
		}

		int channel_idx = tile*Tile/ohw16;
		//ceil
		int nchannel; //num of channel 
		int channel_before; // first channel width of nchannel
		int channel_after; //last channel width of nchannel
		int channel_ii; // some channel between first and last channel width of nchannel
		int ischannel_before;
		int ischannel_after;


		if(int(tile*Tile/ohw16) == int((tile*Tile+Boundary_tile)/ohw16))
		{
			channel_before = Tile;
			channel_after=0;
			channel_ii=0;
			nchannel=1;
			ischannel_before = 1;
			ischannel_after = 0;
		}
		else
		{
			nchannel =  ceil((float)(Boundary_tile+(Tile*tile)%ohw16)/ohw16);
			channel_before= (Tile*tile)%ohw16 ? ohw16-(Tile*tile)%ohw16 :0;
			channel_after= Boundary_tile>ohw16 ? (Tile*tile+Boundary_tile)%ohw16 :0;
			ischannel_before = channel_before ? 1:0;
			ischannel_after = channel_after ? 1:0;
			channel_ii= (nchannel-ischannel_before-ischannel_after)*ohw16;

			nchannel =1;
			channel_before = Boundary_tile;
			channel_after = 0;
			ischannel_before = channel_before ? 1:0;
			ischannel_after = channel_after ? 1:0;
			channel_ii= (nchannel-ischannel_before-ischannel_after)*ohw16;


		}



		//acc buffer reset
		void *uopHandle_reset[2];
		uopHandle_reset[0] = nullptr;

		DWC_resetacc reset;
		reset.base_ = 0;
		reset.size_ = Boundary_tile;
		VTAPushGEMMOp(uopHandle_reset, &DWC_reset_acc, &reset, 0);

		VTADepPush(vtaCmdH, 2, 1);
		VTADepPop(vtaCmdH, 2, 1);

		uint32_t filter_offset = channel_idx * vta_K/16;
		VTALoadBuffer2D(vtaCmdH, vta_filter_buf,
						filter_offset,
						TileK*nchannel,
						1,
						TileK*nchannel,
						0, 0, 0, 0, 0, 2);


		uint32_t input_offset= tile*Tile*vta_K/16;
		VTALoadBuffer2D(vtaCmdH, vta_input_buf,
						input_offset,
						TileK,
						Boundary_tile,
						vta_K/16,
						0, 0, 0, 0,	0, 1);

		VTADepPush(vtaCmdH, 1,2);
		VTADepPop(vtaCmdH, 1,2);

		void *uopHandle_gemm[2];
		uopHandle_gemm[0] = nullptr;


		struct DWC_gemmop_mxn  dwc_ctx;
		dwc_ctx.TileK =TileK;
		dwc_ctx.OHW16 =ohw16;
		dwc_ctx.channel_before =channel_before;
		dwc_ctx.ischannel_before =ischannel_before;
		dwc_ctx.channel_after =channel_after;
		dwc_ctx.nchannel =nchannel;
		dwc_ctx.channel_ii =channel_ii;

		VTAPushGEMMOp(uopHandle_gemm, &DWC_gemmop_mxn, &dwc_ctx, 0);
		if(doBias){
		  VTALoadBuffer2D(vtaCmdH, (int32_t*)vta_bias_buf,
						  channel_idx,
						  nchannel,
						  1,
						  1,
						  0,
						  0,
						  0,
						  0,
						  Boundary_tile,        //index
						  3);    //type


		  DWC_addcontext add_ctx;
		  add_ctx.dst_ = 0;
		  add_ctx.size_ = Boundary_tile;
		  add_ctx.src_ = Boundary_tile;

			add_ctx.OHW16 =ohw16;
			add_ctx.channel_before =channel_before;
			add_ctx.ischannel_before =ischannel_before;
			add_ctx.channel_after =channel_after;
			add_ctx.nchannel =nchannel;
			add_ctx.channel_ii =channel_ii;


		  void *uopHandle_add[2];
		  uopHandle_add[0] = nullptr;
		  VTAPushALUOp(uopHandle_add, &DWC_alu_add, &add_ctx, 0);
		}


		ShiftContext shift_ctx;
		shift_ctx.base_ = 0;
		shift_ctx.size_ = Boundary_tile;
		shift_ctx.shift_ = shift;

		void *uopHandle_shr[2];
		uopHandle_shr[0] = nullptr;
		VTAPushALUOp(uopHandle_shr, &DWC_alu_shr, &shift_ctx, 0);


		void *uopHandle_max[2];
		uopHandle_max[0] = nullptr;
		if(!doRelu) {
		  VTAPushALUOp(uopHandle_max, &DWC_alu_max, &reset, 0);
		}
		else{
			
		  VTAPushALUOp(uopHandle_max, &DWC_alu_relu, &reset, 0);
		}

		void *uopHandle_min[2];
		uopHandle_min[0] = nullptr;
		VTAPushALUOp(uopHandle_min, &DWC_alu_min, &reset, 0);


		//store
		VTADepPush(vtaCmdH, 2,3);
		VTADepPop(vtaCmdH, 2,3);

		uint32_t output_offset = tile*Tile;
		VTAStoreBuffer2D(vtaCmdH,
						0,
						4,
						vta_output_buf,
						output_offset,
						Boundary_tile,
						1,
						1
						);


		VTASynchronize(vtaCmdH, 1<<31);
	}
//	    VTARuntimeShutdown();


}

}//namespace DWC
using namespace DWC;
void depthwise_convolution(int8_t* input, int8_t *kernel, int32_t *bias, int8_t *output, int N, int H, int W, int C, int KH, int KW, int pad_size, int stride_size, bool doRelu, bool doBias, int8_t shift, int OH, int OW, int vta_K, int vta_OHW, void* vtaCmdH)
{
	uint32_t TileK = vta_K/16;
	uint32_t Tile =vta_OHW/16;
	uint32_t ntileHW;

	ntileHW = ceil((float)(C*vta_OHW/16)/Tile);
	void *vta_output_buf = VTABufferAlloc(N*C*vta_OHW);
	for(int n=0; n< N; n++)
	{
		dwc_kernel(ntileHW, TileK, Tile, OH, OW, C, vta_OHW, vta_K,
				input, kernel, vta_output_buf, bias,
//				input, kernel, output, bias,
				doBias, doRelu, shift,
				vtaCmdH
				);
	}
	VTABufferCopy(vta_output_buf, 0, output, 0, N*C*vta_OHW, 2);
	VTABufferFree(vta_output_buf);

//	int8_t * after_output = (int8_t *)malloc(N*C*OH*OW);
//	DWC_transpose_vtaio2nhwc(output, after_output, N, C, OH, OW, vta_OHW);

//	int8_t * nonvta_output = (int8_t *)malloc(N*C*OH*OW);
//	nonVTAdepthwise_convolution(input, kernel, bias, nonvta_output, N, H, W, C, KH, KW, pad_size, stride_size, doRelu, doBias, shift, OH, OW);


}
void diff(int8_t *ref, int8_t *vta, int N, int OH, int OW, int C)
{
	for(int n=0;n<N;n++)
	{
		for(int h=0;h<OH;h++)
		{

			for(int w=0;w<OW;w++)
			{
				for(int c=0;c<C;c++)
				{
					int8_t ref_out=*(ref+n*OH*OW*C + h*OW*C + w*C + c);
					int8_t vta_out=*(vta+n*OH*OW*C + h*OW*C + w*C + c);
					if(ref_out != vta_out)
					{
						printf("NHCW(%d %d %d %d): %d(ref) %d(vta)\n",n,h,w,c,ref_out,vta_out);
					}
				}
			}
		}
	}
}

void nonVTAdepthwise_convolution(int8_t* input, int8_t *kernel, int32_t *bias, int8_t *output, int N, int H, int W, int C, int KH, int KW, int pad_size, int stride_size, bool doRelu, bool doBias, int8_t shift, int OH, int OW)
{
  clock_t start, end;
  double result;
    	//input transform 
 
  start = clock();

	//reference output
	int ih, iw;
	for(int n=0; n< N;n++)
	{
		for(int c=0; c<C; c++)
		{
			for(int oh=0; oh < OH; oh++)
			{
				for(int ow=0; ow< OW; ow++)
				{
					int32_t total=0;
					for(int kh=0; kh<KH;kh++)
					{
						for(int kw=0; kw<KW;kw++)
						{
							ih=oh*stride_size+kh;
							iw=ow*stride_size+kw;
							if(ih<pad_size||iw<pad_size||ih>=H+pad_size||iw>=W+pad_size)
								total+=0;
							else
//								total += inW[n][ih-pad_size][iw-pad_size][c]*filterW[c][kh][kw];
								total += (*(input + n*H*W*C + (ih-pad_size)*W*C + (iw-pad_size)*C + c)) * (*(kernel + c*KH*KW + kh*KW + kw));
			
						}
					}

					if(doBias)
						total+= bias[c];

					total = total >>shift;

					if(total >= 127) total=127;

					if(doRelu)
					{
						if(total<0) total =0;
					}
					else
					{
						if(total<-128) total=-128;
					}

					*(output+n*OH*OW*C + oh*OW*C + ow*C + c)=total;

				}
			}
		}
	}
	end = clock();
  result = (double)(end-start)/CLOCKS_PER_SEC*1000;
//  std::cout<<"VTA ref output time: "<<result<<"ms\n";


}

void DWC_transpose_nhwc2vtaio(int8_t *input, int8_t* output, int N, int IH, int IW, int C, int KH, int KW, int OH, int OW, int vta_K, int vta_OHW, int pad_size, int stride_size)
{ 
  clock_t start, end;
  double result;


  start = clock();
	int8_t *temp_input = (int8_t *) malloc(N*C*vta_OHW*vta_K);
	end = clock();
  result = (double)(end-start)/CLOCKS_PER_SEC*1000;
//  std::cout<<"vta input malloc time: "<<result<<"ms\n";


	int ih,iw;
	int ih2,iw2;
	int d1, d2, d3, d4;
	int Id1, Id2, Id3;

	for(int n=0;n<N;n++)
	{
//		d1 = n*C*vta_OHW*vta_K;
//		Id1 = n*IH*IW*C;
		for(int c=0; c<C;c++)
		{
//			d2 = d1 + c*vta_OHW*vta_K;
//			Id2 = Id1 + c;
			for(int oh=0; oh<OH;oh++)
			{
//				d3 = d2 + oh*OW*vta_K;
				for(int ow=0;ow<OW;ow++)
				{
//					d4 = d3 + ow*vta_K;

					for(int kh=0; kh<KH;kh++)
					{
						for(int kw=0;kw<KW;kw++)
						{

							ih = oh*stride_size-pad_size+kh;
							iw = ow*stride_size-pad_size+kw;
/*
							if(ih<0||iw<0||ih>=IH||iw>=IW)
								*(temp_input+n*C*vta_OHW*vta_K +(c*vta_OHW+oh*OW+ow)*vta_K + kh*KW + kw) = 0;
							else
								*(temp_input+n*C*vta_OHW*vta_K +(c*vta_OHW+oh*OW+ow)*vta_K + kh*KW + kw) = *(input + n*IH*IW*C + ih*IW*C + iw*C + c);
*/

//							if(ih>=0&&iw>=0&&ih<IH&&iw<IW)
//								*(temp_input + d4 + kh*KW + kw) = *(input + Id2 + ih*IW*C + iw*C);

							if(ih>=0&&iw>=0&&ih<IH&&iw<IW)
								*(temp_input+n*C*vta_OHW*vta_K +(c*vta_OHW+oh*OW+ow)*vta_K + kh*KW + kw) = *(input + n*IH*IW*C + ih*IW*C + iw*C + c);

//								*(temp_input + d4 + kh*KW + kw) = *(input + Id2 + ih*IW*C + iw*C);
						}
					}
					for(int remain_k=0; remain_k<vta_K-KH*KW;remain_k++)
						*(temp_input+n*C*vta_OHW*vta_K+(c*vta_OHW+oh*OW+ow)*vta_K+KH*KW+remain_k)=0;
				}
			}
			for(int remain_ohw=0; remain_ohw<vta_OHW-OH*OW;remain_ohw++)
				for(int k=0; k<vta_K;k++)
					*(temp_input+n*C*vta_OHW*vta_K+(c*vta_OHW+OH*OW+remain_ohw)*vta_K+k)=0;
		}
	}
    	//input transform 

 

	for(int n=0;n<N;n++)
	{
		d1 = n*C*vta_OHW*vta_K;
		Id1 = n*C*vta_OHW*vta_K;
		for(int chw=0; chw<C*vta_OHW/16;chw++)
		{
			Id2 = Id1 + chw*16*vta_K;
			d2 = d1 + chw*vta_K*16;
			for(int i=0; i< 16;i++)
			{
				Id3 = Id2 + i*vta_K;
				d3 = d2 + i*16;
				for(int khw=0; khw< vta_K/16;khw++)
				{
					for(int j=0; j<16;j++)
					{
						*(output + n*C*vta_OHW*vta_K + chw*vta_K*16 + khw*16*16 + i*16 + j) = *(temp_input + n*C*vta_OHW*vta_K + chw*16*vta_K + i*vta_K+ khw*16 +j);
					}
				}
			}
		}
	}

}

void DWC_transpose_nchw2vtak(int8_t *input, int8_t *output, int C, int KH, int KW, int vta_K)
{

  //kernel transform
  for(int c=0;c<C;c++)
  {
	  for(int kh=0;kh<KH;kh++)
	  {
		  for(int kw=0;kw<KW;kw++)
		  {
			  *(output + c*vta_K + kh*KW + kw) = *(input + c*KH*KW + kh*KW + kw);
		  }
	  }
	  for(int remain_k=0; remain_k<vta_K-KH*KW;remain_k++)
		  *(output + c*vta_K + KH*KW + remain_k) = 0;
  }

}

void DWC_transpose_bias(int32_t *input, int32_t *output, int C)
//void DWC_transpose_bias(int8_t *input, int8_t *output, int C)
{

	for(unsigned long i=0; i< C; i++)
	{
		for(int j=0; j<16 ; j++)
		{

			output[i*16+j] = input[i];
//			*(output+i*16+j) = *(input+i);
//			*(output+i*16+j) = *(input+i);
//			*(output+i*16+j) = i;
		}
	}
}


void DWC_transpose_vtaio2nchw(int8_t *input, int8_t *output,int N, int C, int OH, int OW, int vta_OHW)
{

	for(int n=0;n<N;n++)
	{
		for(int c=0; c<C;c++)
		{
			for(int ohw=0; ohw<OH*OW;ohw++)
			{
				*(output+n*C*OH*OW + c*OH*OW + (int(ohw/OW)*OW) + (ohw%OW)) = *(input + c*vta_OHW+ohw);
			}
		}
	}
}

//this
void DWC_transpose_vtaio2nhwc(int8_t *input, int8_t *output,int N, int C, int OH, int OW, int vta_OHW)
{

	for(int n=0;n<N;n++)
	{
		for(int c=0; c<C;c++)
		{
			for(int ohw=0; ohw<OH*OW;ohw++)
			{
				*(output+n*C*OH*OW + (int(ohw/OW)*OW)*C + (ohw%OW)*C + c) = *(input + c*vta_OHW+ohw);
			}
		}
	}
}
