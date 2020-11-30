void depthwise_convolution(int8_t* input, int8_t *kernel, int32_t *bias, int8_t *output, int N, int H, int W, int C, int KH, int KW, int pad_size, int stride_size, bool doRelu, bool doBias, int8_t shift, int OH, int OW, int vta_K, int vta_OHW, void* vtaCmdH);

void nonVTAdepthwise_convolution(int8_t* input, int8_t *kernel, int32_t *bias, int8_t *output, int N, int H, int W, int C, int KH, int KW, int pad_size, int stride_size, bool doRelu, bool doBias, int8_t shift, int OH, int OW);

void DWC_transpose_nhwc2vtaio(int8_t *input, int8_t* oput, int N, int IH, int IW, int C, int KH, int KW, int OH, int OW, int vta_K, int vta_OHW, int pad_size, int stride_size);

void DWC_transpose_nchw2vtak(int8_t *input, int8_t *output, int C, int KH, int KW, int vta_K);

void DWC_transpose_bias(int32_t *input, int32_t *output, int C);

void DWC_transpose_vtaio2nchw(int8_t *input, int8_t *output,int N, int C, int OH, int OW, int vta_OHW);

void DWC_transpose_vtaio2nhwc(int8_t *input, int8_t *output,int N, int C, int OH, int OW, int vta_OHW);

void diff(int8_t *ref, int8_t *vta, int N, int OH, int OW, int C);
