

#include "vta/runtime.h"
#include "VTABundle.h"
#include "VTADWC.h"
#include <time.h>
#include <iostream>
#include <fstream>
#include "Mnv.h"
SymbolTableEntry symbolTableEntry_Mnv[2]={{"data",0,150528,'1'},{"softmax",602112,1000,'1'}};
BundleConfig Mnv_config = {3543136, 606112, 0, 64, 2, symbolTableEntry_Mnv};
int8_t* conv0_conv_w__1;
int8_t* conv0_bn_b;
int8_t* mnc0_0_pw_conv_w__1;
int8_t* mnc0_0_pw_bn_b;
int8_t* mnc0_0_dw_conv_w__1;
int8_t* mnc0_0_dw_bn_b;
int8_t* mnc0_0_conv_w__1;
int8_t* mnc0_0_b;
int8_t* mnc1_0_pw_conv_w__1;
int8_t* mnc1_0_pw_bn_b;
int8_t* mnc1_0_dw_conv_w__1;
int8_t* mnc1_0_dw_bn_b;
int8_t* mnc1_0_conv_w__1;
int8_t* mnc1_0_b;
int8_t* mnc1_1_pw_conv_w__1;
int8_t* mnc1_1_pw_bn_b;
int8_t* mnc1_1_dw_conv_w__1;
int8_t* mnc1_1_dw_bn_b;
int8_t* mnc1_1_pwl_conv_w__1;
int8_t* mnc1_1_pwl_b;
int8_t* mnc2_0_pw_conv_w__1;
int8_t* mnc2_0_pw_bn_b;
int8_t* mnc2_0_dw_conv_w__1;
int8_t* mnc2_0_dw_bn_b;
int8_t* mnc2_0_conv_w__1;
int8_t* mnc2_0_b;
int8_t* mnc2_1_pw_conv_w__1;
int8_t* mnc2_1_pw_bn_b;
int8_t* mnc2_1_dw_conv_w__1;
int8_t* mnc2_1_dw_bn_b;
int8_t* mnc2_1_pwl_conv_w__1;
int8_t* mnc2_1_pwl_b;
int8_t* mnc2_2_pw_conv_w__1;
int8_t* mnc2_2_pw_bn_b;
int8_t* mnc2_2_dw_conv_w__1;
int8_t* mnc2_2_dw_bn_b;
int8_t* mnc2_2_pwl_conv_w__1;
int8_t* mnc2_2_pwl_b;
int8_t* mnc3_0_pw_conv_w__1;
int8_t* mnc3_0_pw_bn_b;
int8_t* mnc3_0_dw_conv_w__1;
int8_t* mnc3_0_dw_bn_b;
int8_t* mnc3_0_conv_w__1;
int8_t* mnc3_0_b;
int8_t* mnc3_1_pw_conv_w__1;
int8_t* mnc3_1_pw_bn_b;
int8_t* mnc3_1_dw_conv_w__1;
int8_t* mnc3_1_dw_bn_b;
int8_t* mnc3_1_pwl_conv_w__1;
int8_t* mnc3_1_pwl_b;
int8_t* mnc3_2_pw_conv_w__1;
int8_t* mnc3_2_pw_bn_b;
int8_t* mnc3_2_dw_conv_w__1;
int8_t* mnc3_2_dw_bn_b;
int8_t* mnc3_2_pwl_conv_w__1;
int8_t* mnc3_2_pwl_b;
int8_t* mnc3_3_pw_conv_w__1;
int8_t* mnc3_3_pw_bn_b;
int8_t* mnc3_3_dw_conv_w__1;
int8_t* mnc3_3_dw_bn_b;
int8_t* mnc3_3_pwl_conv_w__1;
int8_t* mnc3_3_pwl_b;
int8_t* mnc3_4_pw_conv_w__1;
int8_t* mnc3_4_pw_bn_b;
int8_t* mnc3_4_dw_conv_w__1;
int8_t* mnc3_4_dw_bn_b;
int8_t* mnc3_4_conv_w__1;
int8_t* mnc3_4_b;
int8_t* mnc3_5_pw_conv_w__1;
int8_t* mnc3_5_pw_bn_b;
int8_t* mnc3_5_dw_conv_w__1;
int8_t* mnc3_5_dw_bn_b;
int8_t* mnc3_5_pwl_conv_w__1;
int8_t* mnc3_5_pwl_b;
int8_t* mnc3_6_pw_conv_w__1;
int8_t* mnc3_6_pw_bn_b;
int8_t* mnc3_6_dw_conv_w__1;
int8_t* mnc3_6_dw_bn_b;
int8_t* mnc3_6_pwl_conv_w__1;
int8_t* mnc3_6_pwl_b;
int8_t* mnc4_0_pw_conv_w__1;
int8_t* mnc4_0_pw_bn_b;
int8_t* mnc4_0_dw_conv_w__1;
int8_t* mnc4_0_dw_bn_b;
int8_t* mnc4_0_conv_w__1;
int8_t* mnc4_0_b;
int8_t* mnc4_1_pw_conv_w__1;
int8_t* mnc4_1_pw_bn_b;
int8_t* mnc4_1_dw_conv_w__1;
int8_t* mnc4_1_dw_bn_b;
int8_t* mnc4_1_pwl_conv_w__1;
int8_t* mnc4_1_pwl_b;
int8_t* mnc4_2_pw_conv_w__1;
int8_t* mnc4_2_pw_bn_b;
int8_t* mnc4_2_dw_conv_w__1;
int8_t* mnc4_2_dw_bn_b;
int8_t* mnc4_2_pwl_conv_w__1;
int8_t* mnc4_2_pwl_b;
int8_t* mnc4_3_pw_conv_w__1;
int8_t* mnc4_3_pw_bn_b;
int8_t* mnc4_3_dw_conv_w__1;
int8_t* mnc4_3_dw_bn_b;
int8_t* mnc4_3_conv_w__1;
int8_t* mnc4_3_b;
int8_t* mnc4_3_1x1_conv_w__1;
int8_t* mnc4_3_1x1_bn_b;
int8_t* pred_w__2;
int8_t* pred_b;
extern VTACommandHandle vtaCmdH;

void Mnv_load_module(uint8_t *constantWeight){
  conv0_conv_w__1 = (int8_t *)VTABufferAlloc(864);
  VTABufferCopy((int8_t *)(constantWeight + 0), 0, conv0_conv_w__1, 0, 864, 1);
  conv0_bn_b = (int8_t *)VTABufferAlloc(128);
  VTABufferCopy((int8_t *)(constantWeight + 864), 0, conv0_bn_b, 0, 128, 1);
  mnc0_0_pw_conv_w__1 = (int8_t *)VTABufferAlloc(1024);
  VTABufferCopy((int8_t *)(constantWeight + 992), 0, mnc0_0_pw_conv_w__1, 0, 1024, 1);
  mnc0_0_pw_bn_b = (int8_t *)VTABufferAlloc(128);
  VTABufferCopy((int8_t *)(constantWeight + 2016), 0, mnc0_0_pw_bn_b, 0, 128, 1);
  mnc0_0_dw_conv_w__1 = (int8_t *)VTABufferAlloc(288);
  VTABufferCopy((int8_t *)(constantWeight + 2144), 0, mnc0_0_dw_conv_w__1, 0, 288, 1);
  mnc0_0_dw_bn_b = (int8_t *)VTABufferAlloc(128);
  VTABufferCopy((int8_t *)(constantWeight + 2432), 0, mnc0_0_dw_bn_b, 0, 128, 1);
  mnc0_0_conv_w__1 = (int8_t *)VTABufferAlloc(512);
  VTABufferCopy((int8_t *)(constantWeight + 2560), 0, mnc0_0_conv_w__1, 0, 512, 1);
  mnc0_0_b = (int8_t *)VTABufferAlloc(64);
  VTABufferCopy((int8_t *)(constantWeight + 3072), 0, mnc0_0_b, 0, 64, 1);
  mnc1_0_pw_conv_w__1 = (int8_t *)VTABufferAlloc(1536);
  VTABufferCopy((int8_t *)(constantWeight + 3136), 0, mnc1_0_pw_conv_w__1, 0, 1536, 1);
  mnc1_0_pw_bn_b = (int8_t *)VTABufferAlloc(384);
  VTABufferCopy((int8_t *)(constantWeight + 4672), 0, mnc1_0_pw_bn_b, 0, 384, 1);
  mnc1_0_dw_conv_w__1 = (int8_t *)VTABufferAlloc(864);
  VTABufferCopy((int8_t *)(constantWeight + 5056), 0, mnc1_0_dw_conv_w__1, 0, 864, 1);
  mnc1_0_dw_bn_b = (int8_t *)VTABufferAlloc(384);
  VTABufferCopy((int8_t *)(constantWeight + 5920), 0, mnc1_0_dw_bn_b, 0, 384, 1);
  mnc1_0_conv_w__1 = (int8_t *)VTABufferAlloc(2304);
  VTABufferCopy((int8_t *)(constantWeight + 6304), 0, mnc1_0_conv_w__1, 0, 2304, 1);
  mnc1_0_b = (int8_t *)VTABufferAlloc(96);
  VTABufferCopy((int8_t *)(constantWeight + 8608), 0, mnc1_0_b, 0, 96, 1);
  mnc1_1_pw_conv_w__1 = (int8_t *)VTABufferAlloc(3456);
  VTABufferCopy((int8_t *)(constantWeight + 8704), 0, mnc1_1_pw_conv_w__1, 0, 3456, 1);
  mnc1_1_pw_bn_b = (int8_t *)VTABufferAlloc(576);
  VTABufferCopy((int8_t *)(constantWeight + 12160), 0, mnc1_1_pw_bn_b, 0, 576, 1);
  mnc1_1_dw_conv_w__1 = (int8_t *)VTABufferAlloc(1296);
  VTABufferCopy((int8_t *)(constantWeight + 12736), 0, mnc1_1_dw_conv_w__1, 0, 1296, 1);
  mnc1_1_dw_bn_b = (int8_t *)VTABufferAlloc(576);
  VTABufferCopy((int8_t *)(constantWeight + 14032), 0, mnc1_1_dw_bn_b, 0, 576, 1);
  mnc1_1_pwl_conv_w__1 = (int8_t *)VTABufferAlloc(3456);
  VTABufferCopy((int8_t *)(constantWeight + 14608), 0, mnc1_1_pwl_conv_w__1, 0, 3456, 1);
  mnc1_1_pwl_b = (int8_t *)VTABufferAlloc(96);
  VTABufferCopy((int8_t *)(constantWeight + 18064), 0, mnc1_1_pwl_b, 0, 96, 1);
  mnc2_0_pw_conv_w__1 = (int8_t *)VTABufferAlloc(3456);
  VTABufferCopy((int8_t *)(constantWeight + 18160), 0, mnc2_0_pw_conv_w__1, 0, 3456, 1);
  mnc2_0_pw_bn_b = (int8_t *)VTABufferAlloc(576);
  VTABufferCopy((int8_t *)(constantWeight + 21616), 0, mnc2_0_pw_bn_b, 0, 576, 1);
  mnc2_0_dw_conv_w__1 = (int8_t *)VTABufferAlloc(1296);
  VTABufferCopy((int8_t *)(constantWeight + 22192), 0, mnc2_0_dw_conv_w__1, 0, 1296, 1);
  mnc2_0_dw_bn_b = (int8_t *)VTABufferAlloc(576);
  VTABufferCopy((int8_t *)(constantWeight + 23488), 0, mnc2_0_dw_bn_b, 0, 576, 1);
  mnc2_0_conv_w__1 = (int8_t *)VTABufferAlloc(4608);
  VTABufferCopy((int8_t *)(constantWeight + 24064), 0, mnc2_0_conv_w__1, 0, 4608, 1);
  mnc2_0_b = (int8_t *)VTABufferAlloc(128);
  VTABufferCopy((int8_t *)(constantWeight + 28672), 0, mnc2_0_b, 0, 128, 1);
  mnc2_1_pw_conv_w__1 = (int8_t *)VTABufferAlloc(6144);
  VTABufferCopy((int8_t *)(constantWeight + 28800), 0, mnc2_1_pw_conv_w__1, 0, 6144, 1);
  mnc2_1_pw_bn_b = (int8_t *)VTABufferAlloc(768);
  VTABufferCopy((int8_t *)(constantWeight + 34944), 0, mnc2_1_pw_bn_b, 0, 768, 1);
  mnc2_1_dw_conv_w__1 = (int8_t *)VTABufferAlloc(1728);
  VTABufferCopy((int8_t *)(constantWeight + 35712), 0, mnc2_1_dw_conv_w__1, 0, 1728, 1);
  mnc2_1_dw_bn_b = (int8_t *)VTABufferAlloc(768);
  VTABufferCopy((int8_t *)(constantWeight + 37440), 0, mnc2_1_dw_bn_b, 0, 768, 1);
  mnc2_1_pwl_conv_w__1 = (int8_t *)VTABufferAlloc(6144);
  VTABufferCopy((int8_t *)(constantWeight + 38208), 0, mnc2_1_pwl_conv_w__1, 0, 6144, 1);
  mnc2_1_pwl_b = (int8_t *)VTABufferAlloc(128);
  VTABufferCopy((int8_t *)(constantWeight + 44352), 0, mnc2_1_pwl_b, 0, 128, 1);
  mnc2_2_pw_conv_w__1 = (int8_t *)VTABufferAlloc(6144);
  VTABufferCopy((int8_t *)(constantWeight + 44480), 0, mnc2_2_pw_conv_w__1, 0, 6144, 1);
  mnc2_2_pw_bn_b = (int8_t *)VTABufferAlloc(768);
  VTABufferCopy((int8_t *)(constantWeight + 50624), 0, mnc2_2_pw_bn_b, 0, 768, 1);
  mnc2_2_dw_conv_w__1 = (int8_t *)VTABufferAlloc(1728);
  VTABufferCopy((int8_t *)(constantWeight + 51392), 0, mnc2_2_dw_conv_w__1, 0, 1728, 1);
  mnc2_2_dw_bn_b = (int8_t *)VTABufferAlloc(768);
  VTABufferCopy((int8_t *)(constantWeight + 53120), 0, mnc2_2_dw_bn_b, 0, 768, 1);
  mnc2_2_pwl_conv_w__1 = (int8_t *)VTABufferAlloc(6144);
  VTABufferCopy((int8_t *)(constantWeight + 53888), 0, mnc2_2_pwl_conv_w__1, 0, 6144, 1);
  mnc2_2_pwl_b = (int8_t *)VTABufferAlloc(128);
  VTABufferCopy((int8_t *)(constantWeight + 60032), 0, mnc2_2_pwl_b, 0, 128, 1);
  mnc3_0_pw_conv_w__1 = (int8_t *)VTABufferAlloc(6144);
  VTABufferCopy((int8_t *)(constantWeight + 60160), 0, mnc3_0_pw_conv_w__1, 0, 6144, 1);
  mnc3_0_pw_bn_b = (int8_t *)VTABufferAlloc(768);
  VTABufferCopy((int8_t *)(constantWeight + 66304), 0, mnc3_0_pw_bn_b, 0, 768, 1);
  mnc3_0_dw_conv_w__1 = (int8_t *)VTABufferAlloc(1728);
  VTABufferCopy((int8_t *)(constantWeight + 67072), 0, mnc3_0_dw_conv_w__1, 0, 1728, 1);
  mnc3_0_dw_bn_b = (int8_t *)VTABufferAlloc(768);
  VTABufferCopy((int8_t *)(constantWeight + 68800), 0, mnc3_0_dw_bn_b, 0, 768, 1);
  mnc3_0_conv_w__1 = (int8_t *)VTABufferAlloc(12288);
  VTABufferCopy((int8_t *)(constantWeight + 69568), 0, mnc3_0_conv_w__1, 0, 12288, 1);
  mnc3_0_b = (int8_t *)VTABufferAlloc(256);
  VTABufferCopy((int8_t *)(constantWeight + 81856), 0, mnc3_0_b, 0, 256, 1);
  mnc3_1_pw_conv_w__1 = (int8_t *)VTABufferAlloc(24576);
  VTABufferCopy((int8_t *)(constantWeight + 82112), 0, mnc3_1_pw_conv_w__1, 0, 24576, 1);
  mnc3_1_pw_bn_b = (int8_t *)VTABufferAlloc(1536);
  VTABufferCopy((int8_t *)(constantWeight + 106688), 0, mnc3_1_pw_bn_b, 0, 1536, 1);
  mnc3_1_dw_conv_w__1 = (int8_t *)VTABufferAlloc(3456);
  VTABufferCopy((int8_t *)(constantWeight + 108224), 0, mnc3_1_dw_conv_w__1, 0, 3456, 1);
  mnc3_1_dw_bn_b = (int8_t *)VTABufferAlloc(1536);
  VTABufferCopy((int8_t *)(constantWeight + 111680), 0, mnc3_1_dw_bn_b, 0, 1536, 1);
  mnc3_1_pwl_conv_w__1 = (int8_t *)VTABufferAlloc(24576);
  VTABufferCopy((int8_t *)(constantWeight + 113216), 0, mnc3_1_pwl_conv_w__1, 0, 24576, 1);
  mnc3_1_pwl_b = (int8_t *)VTABufferAlloc(256);
  VTABufferCopy((int8_t *)(constantWeight + 137792), 0, mnc3_1_pwl_b, 0, 256, 1);
  mnc3_2_pw_conv_w__1 = (int8_t *)VTABufferAlloc(24576);
  VTABufferCopy((int8_t *)(constantWeight + 138048), 0, mnc3_2_pw_conv_w__1, 0, 24576, 1);
  mnc3_2_pw_bn_b = (int8_t *)VTABufferAlloc(1536);
  VTABufferCopy((int8_t *)(constantWeight + 162624), 0, mnc3_2_pw_bn_b, 0, 1536, 1);
  mnc3_2_dw_conv_w__1 = (int8_t *)VTABufferAlloc(3456);
  VTABufferCopy((int8_t *)(constantWeight + 164160), 0, mnc3_2_dw_conv_w__1, 0, 3456, 1);
  mnc3_2_dw_bn_b = (int8_t *)VTABufferAlloc(1536);
  VTABufferCopy((int8_t *)(constantWeight + 167616), 0, mnc3_2_dw_bn_b, 0, 1536, 1);
  mnc3_2_pwl_conv_w__1 = (int8_t *)VTABufferAlloc(24576);
  VTABufferCopy((int8_t *)(constantWeight + 169152), 0, mnc3_2_pwl_conv_w__1, 0, 24576, 1);
  mnc3_2_pwl_b = (int8_t *)VTABufferAlloc(256);
  VTABufferCopy((int8_t *)(constantWeight + 193728), 0, mnc3_2_pwl_b, 0, 256, 1);
  mnc3_3_pw_conv_w__1 = (int8_t *)VTABufferAlloc(24576);
  VTABufferCopy((int8_t *)(constantWeight + 193984), 0, mnc3_3_pw_conv_w__1, 0, 24576, 1);
  mnc3_3_pw_bn_b = (int8_t *)VTABufferAlloc(1536);
  VTABufferCopy((int8_t *)(constantWeight + 218560), 0, mnc3_3_pw_bn_b, 0, 1536, 1);
  mnc3_3_dw_conv_w__1 = (int8_t *)VTABufferAlloc(3456);
  VTABufferCopy((int8_t *)(constantWeight + 220096), 0, mnc3_3_dw_conv_w__1, 0, 3456, 1);
  mnc3_3_dw_bn_b = (int8_t *)VTABufferAlloc(1536);
  VTABufferCopy((int8_t *)(constantWeight + 223552), 0, mnc3_3_dw_bn_b, 0, 1536, 1);
  mnc3_3_pwl_conv_w__1 = (int8_t *)VTABufferAlloc(24576);
  VTABufferCopy((int8_t *)(constantWeight + 225088), 0, mnc3_3_pwl_conv_w__1, 0, 24576, 1);
  mnc3_3_pwl_b = (int8_t *)VTABufferAlloc(256);
  VTABufferCopy((int8_t *)(constantWeight + 249664), 0, mnc3_3_pwl_b, 0, 256, 1);
  mnc3_4_pw_conv_w__1 = (int8_t *)VTABufferAlloc(24576);
  VTABufferCopy((int8_t *)(constantWeight + 249920), 0, mnc3_4_pw_conv_w__1, 0, 24576, 1);
  mnc3_4_pw_bn_b = (int8_t *)VTABufferAlloc(1536);
  VTABufferCopy((int8_t *)(constantWeight + 274496), 0, mnc3_4_pw_bn_b, 0, 1536, 1);
  mnc3_4_dw_conv_w__1 = (int8_t *)VTABufferAlloc(3456);
  VTABufferCopy((int8_t *)(constantWeight + 276032), 0, mnc3_4_dw_conv_w__1, 0, 3456, 1);
  mnc3_4_dw_bn_b = (int8_t *)VTABufferAlloc(1536);
  VTABufferCopy((int8_t *)(constantWeight + 279488), 0, mnc3_4_dw_bn_b, 0, 1536, 1);
  mnc3_4_conv_w__1 = (int8_t *)VTABufferAlloc(36864);
  VTABufferCopy((int8_t *)(constantWeight + 281024), 0, mnc3_4_conv_w__1, 0, 36864, 1);
  mnc3_4_b = (int8_t *)VTABufferAlloc(384);
  VTABufferCopy((int8_t *)(constantWeight + 317888), 0, mnc3_4_b, 0, 384, 1);
  mnc3_5_pw_conv_w__1 = (int8_t *)VTABufferAlloc(55296);
  VTABufferCopy((int8_t *)(constantWeight + 318272), 0, mnc3_5_pw_conv_w__1, 0, 55296, 1);
  mnc3_5_pw_bn_b = (int8_t *)VTABufferAlloc(2304);
  VTABufferCopy((int8_t *)(constantWeight + 373568), 0, mnc3_5_pw_bn_b, 0, 2304, 1);
  mnc3_5_dw_conv_w__1 = (int8_t *)VTABufferAlloc(5184);
  VTABufferCopy((int8_t *)(constantWeight + 375872), 0, mnc3_5_dw_conv_w__1, 0, 5184, 1);
  mnc3_5_dw_bn_b = (int8_t *)VTABufferAlloc(2304);
  VTABufferCopy((int8_t *)(constantWeight + 381056), 0, mnc3_5_dw_bn_b, 0, 2304, 1);
  mnc3_5_pwl_conv_w__1 = (int8_t *)VTABufferAlloc(55296);
  VTABufferCopy((int8_t *)(constantWeight + 383360), 0, mnc3_5_pwl_conv_w__1, 0, 55296, 1);
  mnc3_5_pwl_b = (int8_t *)VTABufferAlloc(384);
  VTABufferCopy((int8_t *)(constantWeight + 438656), 0, mnc3_5_pwl_b, 0, 384, 1);
  mnc3_6_pw_conv_w__1 = (int8_t *)VTABufferAlloc(55296);
  VTABufferCopy((int8_t *)(constantWeight + 439040), 0, mnc3_6_pw_conv_w__1, 0, 55296, 1);
  mnc3_6_pw_bn_b = (int8_t *)VTABufferAlloc(2304);
  VTABufferCopy((int8_t *)(constantWeight + 494336), 0, mnc3_6_pw_bn_b, 0, 2304, 1);
  mnc3_6_dw_conv_w__1 = (int8_t *)VTABufferAlloc(5184);
  VTABufferCopy((int8_t *)(constantWeight + 496640), 0, mnc3_6_dw_conv_w__1, 0, 5184, 1);
  mnc3_6_dw_bn_b = (int8_t *)VTABufferAlloc(2304);
  VTABufferCopy((int8_t *)(constantWeight + 501824), 0, mnc3_6_dw_bn_b, 0, 2304, 1);
  mnc3_6_pwl_conv_w__1 = (int8_t *)VTABufferAlloc(55296);
  VTABufferCopy((int8_t *)(constantWeight + 504128), 0, mnc3_6_pwl_conv_w__1, 0, 55296, 1);
  mnc3_6_pwl_b = (int8_t *)VTABufferAlloc(384);
  VTABufferCopy((int8_t *)(constantWeight + 559424), 0, mnc3_6_pwl_b, 0, 384, 1);
  mnc4_0_pw_conv_w__1 = (int8_t *)VTABufferAlloc(55296);
  VTABufferCopy((int8_t *)(constantWeight + 559808), 0, mnc4_0_pw_conv_w__1, 0, 55296, 1);
  mnc4_0_pw_bn_b = (int8_t *)VTABufferAlloc(2304);
  VTABufferCopy((int8_t *)(constantWeight + 615104), 0, mnc4_0_pw_bn_b, 0, 2304, 1);
  mnc4_0_dw_conv_w__1 = (int8_t *)VTABufferAlloc(5184);
  VTABufferCopy((int8_t *)(constantWeight + 617408), 0, mnc4_0_dw_conv_w__1, 0, 5184, 1);
  mnc4_0_dw_bn_b = (int8_t *)VTABufferAlloc(2304);
  VTABufferCopy((int8_t *)(constantWeight + 622592), 0, mnc4_0_dw_bn_b, 0, 2304, 1);
  mnc4_0_conv_w__1 = (int8_t *)VTABufferAlloc(92160);
  VTABufferCopy((int8_t *)(constantWeight + 624896), 0, mnc4_0_conv_w__1, 0, 92160, 1);
  mnc4_0_b = (int8_t *)VTABufferAlloc(640);
  VTABufferCopy((int8_t *)(constantWeight + 717056), 0, mnc4_0_b, 0, 640, 1);
  mnc4_1_pw_conv_w__1 = (int8_t *)VTABufferAlloc(153600);
  VTABufferCopy((int8_t *)(constantWeight + 717696), 0, mnc4_1_pw_conv_w__1, 0, 153600, 1);
  mnc4_1_pw_bn_b = (int8_t *)VTABufferAlloc(3840);
  VTABufferCopy((int8_t *)(constantWeight + 871296), 0, mnc4_1_pw_bn_b, 0, 3840, 1);
  mnc4_1_dw_conv_w__1 = (int8_t *)VTABufferAlloc(8640);
  VTABufferCopy((int8_t *)(constantWeight + 875136), 0, mnc4_1_dw_conv_w__1, 0, 8640, 1);
  mnc4_1_dw_bn_b = (int8_t *)VTABufferAlloc(3840);
  VTABufferCopy((int8_t *)(constantWeight + 883776), 0, mnc4_1_dw_bn_b, 0, 3840, 1);
  mnc4_1_pwl_conv_w__1 = (int8_t *)VTABufferAlloc(153600);
  VTABufferCopy((int8_t *)(constantWeight + 887616), 0, mnc4_1_pwl_conv_w__1, 0, 153600, 1);
  mnc4_1_pwl_b = (int8_t *)VTABufferAlloc(640);
  VTABufferCopy((int8_t *)(constantWeight + 1041216), 0, mnc4_1_pwl_b, 0, 640, 1);
  mnc4_2_pw_conv_w__1 = (int8_t *)VTABufferAlloc(153600);
  VTABufferCopy((int8_t *)(constantWeight + 1041856), 0, mnc4_2_pw_conv_w__1, 0, 153600, 1);
  mnc4_2_pw_bn_b = (int8_t *)VTABufferAlloc(3840);
  VTABufferCopy((int8_t *)(constantWeight + 1195456), 0, mnc4_2_pw_bn_b, 0, 3840, 1);
  mnc4_2_dw_conv_w__1 = (int8_t *)VTABufferAlloc(8640);
  VTABufferCopy((int8_t *)(constantWeight + 1199296), 0, mnc4_2_dw_conv_w__1, 0, 8640, 1);
  mnc4_2_dw_bn_b = (int8_t *)VTABufferAlloc(3840);
  VTABufferCopy((int8_t *)(constantWeight + 1207936), 0, mnc4_2_dw_bn_b, 0, 3840, 1);
  mnc4_2_pwl_conv_w__1 = (int8_t *)VTABufferAlloc(153600);
  VTABufferCopy((int8_t *)(constantWeight + 1211776), 0, mnc4_2_pwl_conv_w__1, 0, 153600, 1);
  mnc4_2_pwl_b = (int8_t *)VTABufferAlloc(640);
  VTABufferCopy((int8_t *)(constantWeight + 1365376), 0, mnc4_2_pwl_b, 0, 640, 1);
  mnc4_3_pw_conv_w__1 = (int8_t *)VTABufferAlloc(153600);
  VTABufferCopy((int8_t *)(constantWeight + 1366016), 0, mnc4_3_pw_conv_w__1, 0, 153600, 1);
  mnc4_3_pw_bn_b = (int8_t *)VTABufferAlloc(3840);
  VTABufferCopy((int8_t *)(constantWeight + 1519616), 0, mnc4_3_pw_bn_b, 0, 3840, 1);
  mnc4_3_dw_conv_w__1 = (int8_t *)VTABufferAlloc(8640);
  VTABufferCopy((int8_t *)(constantWeight + 1523456), 0, mnc4_3_dw_conv_w__1, 0, 8640, 1);
  mnc4_3_dw_bn_b = (int8_t *)VTABufferAlloc(3840);
  VTABufferCopy((int8_t *)(constantWeight + 1532096), 0, mnc4_3_dw_bn_b, 0, 3840, 1);
  mnc4_3_conv_w__1 = (int8_t *)VTABufferAlloc(307200);
  VTABufferCopy((int8_t *)(constantWeight + 1535936), 0, mnc4_3_conv_w__1, 0, 307200, 1);
  mnc4_3_b = (int8_t *)VTABufferAlloc(1280);
  VTABufferCopy((int8_t *)(constantWeight + 1843136), 0, mnc4_3_b, 0, 1280, 1);
  mnc4_3_1x1_conv_w__1 = (int8_t *)VTABufferAlloc(409600);
  VTABufferCopy((int8_t *)(constantWeight + 1844416), 0, mnc4_3_1x1_conv_w__1, 0, 409600, 1);
  mnc4_3_1x1_bn_b = (int8_t *)VTABufferAlloc(5120);
  VTABufferCopy((int8_t *)(constantWeight + 2254016), 0, mnc4_3_1x1_bn_b, 0, 5120, 1);
  pred_w__2 = (int8_t *)VTABufferAlloc(1280000);
  VTABufferCopy((int8_t *)(constantWeight + 2259136), 0, pred_w__2, 0, 1280000, 1);
  pred_b = (int8_t *)VTABufferAlloc(4000);
  VTABufferCopy((int8_t *)(constantWeight + 3539136), 0, pred_b, 0, 4000, 1);
}

void Mnv_destroy_module(){
  VTABufferFree(conv0_conv_w__1);
  VTABufferFree(conv0_bn_b);
  VTABufferFree(mnc0_0_pw_conv_w__1);
  VTABufferFree(mnc0_0_pw_bn_b);
  VTABufferFree(mnc0_0_dw_conv_w__1);
  VTABufferFree(mnc0_0_dw_bn_b);
  VTABufferFree(mnc0_0_conv_w__1);
  VTABufferFree(mnc0_0_b);
  VTABufferFree(mnc1_0_pw_conv_w__1);
  VTABufferFree(mnc1_0_pw_bn_b);
  VTABufferFree(mnc1_0_dw_conv_w__1);
  VTABufferFree(mnc1_0_dw_bn_b);
  VTABufferFree(mnc1_0_conv_w__1);
  VTABufferFree(mnc1_0_b);
  VTABufferFree(mnc1_1_pw_conv_w__1);
  VTABufferFree(mnc1_1_pw_bn_b);
  VTABufferFree(mnc1_1_dw_conv_w__1);
  VTABufferFree(mnc1_1_dw_bn_b);
  VTABufferFree(mnc1_1_pwl_conv_w__1);
  VTABufferFree(mnc1_1_pwl_b);
  VTABufferFree(mnc2_0_pw_conv_w__1);
  VTABufferFree(mnc2_0_pw_bn_b);
  VTABufferFree(mnc2_0_dw_conv_w__1);
  VTABufferFree(mnc2_0_dw_bn_b);
  VTABufferFree(mnc2_0_conv_w__1);
  VTABufferFree(mnc2_0_b);
  VTABufferFree(mnc2_1_pw_conv_w__1);
  VTABufferFree(mnc2_1_pw_bn_b);
  VTABufferFree(mnc2_1_dw_conv_w__1);
  VTABufferFree(mnc2_1_dw_bn_b);
  VTABufferFree(mnc2_1_pwl_conv_w__1);
  VTABufferFree(mnc2_1_pwl_b);
  VTABufferFree(mnc2_2_pw_conv_w__1);
  VTABufferFree(mnc2_2_pw_bn_b);
  VTABufferFree(mnc2_2_dw_conv_w__1);
  VTABufferFree(mnc2_2_dw_bn_b);
  VTABufferFree(mnc2_2_pwl_conv_w__1);
  VTABufferFree(mnc2_2_pwl_b);
  VTABufferFree(mnc3_0_pw_conv_w__1);
  VTABufferFree(mnc3_0_pw_bn_b);
  VTABufferFree(mnc3_0_dw_conv_w__1);
  VTABufferFree(mnc3_0_dw_bn_b);
  VTABufferFree(mnc3_0_conv_w__1);
  VTABufferFree(mnc3_0_b);
  VTABufferFree(mnc3_1_pw_conv_w__1);
  VTABufferFree(mnc3_1_pw_bn_b);
  VTABufferFree(mnc3_1_dw_conv_w__1);
  VTABufferFree(mnc3_1_dw_bn_b);
  VTABufferFree(mnc3_1_pwl_conv_w__1);
  VTABufferFree(mnc3_1_pwl_b);
  VTABufferFree(mnc3_2_pw_conv_w__1);
  VTABufferFree(mnc3_2_pw_bn_b);
  VTABufferFree(mnc3_2_dw_conv_w__1);
  VTABufferFree(mnc3_2_dw_bn_b);
  VTABufferFree(mnc3_2_pwl_conv_w__1);
  VTABufferFree(mnc3_2_pwl_b);
  VTABufferFree(mnc3_3_pw_conv_w__1);
  VTABufferFree(mnc3_3_pw_bn_b);
  VTABufferFree(mnc3_3_dw_conv_w__1);
  VTABufferFree(mnc3_3_dw_bn_b);
  VTABufferFree(mnc3_3_pwl_conv_w__1);
  VTABufferFree(mnc3_3_pwl_b);
  VTABufferFree(mnc3_4_pw_conv_w__1);
  VTABufferFree(mnc3_4_pw_bn_b);
  VTABufferFree(mnc3_4_dw_conv_w__1);
  VTABufferFree(mnc3_4_dw_bn_b);
  VTABufferFree(mnc3_4_conv_w__1);
  VTABufferFree(mnc3_4_b);
  VTABufferFree(mnc3_5_pw_conv_w__1);
  VTABufferFree(mnc3_5_pw_bn_b);
  VTABufferFree(mnc3_5_dw_conv_w__1);
  VTABufferFree(mnc3_5_dw_bn_b);
  VTABufferFree(mnc3_5_pwl_conv_w__1);
  VTABufferFree(mnc3_5_pwl_b);
  VTABufferFree(mnc3_6_pw_conv_w__1);
  VTABufferFree(mnc3_6_pw_bn_b);
  VTABufferFree(mnc3_6_dw_conv_w__1);
  VTABufferFree(mnc3_6_dw_bn_b);
  VTABufferFree(mnc3_6_pwl_conv_w__1);
  VTABufferFree(mnc3_6_pwl_b);
  VTABufferFree(mnc4_0_pw_conv_w__1);
  VTABufferFree(mnc4_0_pw_bn_b);
  VTABufferFree(mnc4_0_dw_conv_w__1);
  VTABufferFree(mnc4_0_dw_bn_b);
  VTABufferFree(mnc4_0_conv_w__1);
  VTABufferFree(mnc4_0_b);
  VTABufferFree(mnc4_1_pw_conv_w__1);
  VTABufferFree(mnc4_1_pw_bn_b);
  VTABufferFree(mnc4_1_dw_conv_w__1);
  VTABufferFree(mnc4_1_dw_bn_b);
  VTABufferFree(mnc4_1_pwl_conv_w__1);
  VTABufferFree(mnc4_1_pwl_b);
  VTABufferFree(mnc4_2_pw_conv_w__1);
  VTABufferFree(mnc4_2_pw_bn_b);
  VTABufferFree(mnc4_2_dw_conv_w__1);
  VTABufferFree(mnc4_2_dw_bn_b);
  VTABufferFree(mnc4_2_pwl_conv_w__1);
  VTABufferFree(mnc4_2_pwl_b);
  VTABufferFree(mnc4_3_pw_conv_w__1);
  VTABufferFree(mnc4_3_pw_bn_b);
  VTABufferFree(mnc4_3_dw_conv_w__1);
  VTABufferFree(mnc4_3_dw_bn_b);
  VTABufferFree(mnc4_3_conv_w__1);
  VTABufferFree(mnc4_3_b);
  VTABufferFree(mnc4_3_1x1_conv_w__1);
  VTABufferFree(mnc4_3_1x1_bn_b);
  VTABufferFree(pred_w__2);
  VTABufferFree(pred_b);
}
int Mnv(uint8_t *constantWeight, uint8_t *mutableWeight, uint8_t *activations){

  //Run allocactivation : conv0_bn_quantize_res
  int8_t *conv0_bn_quantize_res = (int8_t *)malloc(150528);

  //Run quantize : conv0_bn_quantize
  int8_t* data = (int8_t*)mutableWeight + 0;
  quantize(data, conv0_bn_quantize_res, 150528, 1/0.250000, 0 );

  //Run allocactivation : conv0_bn__8_res
  int8_t *conv0_bn__8_res = (int8_t *)malloc(150528);

  //Run transpose : conv0_bn__8
  transpose(conv0_bn_quantize_res, conv0_bn__8_res, 1, 3, 224, 224, 1, 224, 224, 3, 0, 2, 3, 1 );

  //Run deallocactivation : dealloc_conv0_bn_quantize_res
  free(conv0_bn_quantize_res);

  //Run allocactivation : conv0_bn__1_res
  int8_t *conv0_bn__1_res = (int8_t *)malloc(401408);

  //Run convolution : conv0_bn__1
  nonvtaconvolution(conv0_bn__8_res, 1.0/0.250000, 0, (int8_t *)VTABufferGetVirtAddr(conv0_conv_w__1), 1.0/64.000000, 0, (int8_t *)VTABufferGetVirtAddr(conv0_bn_b), 1.0/16.000000, 0, conv0_bn__1_res, 1.0/0.125000, 0, 1, 224, 224, 3, 32, 3, 3, 1, 2, 1, 1, 1, 1, 112, 112 );

  //Run deallocactivation : dealloc_conv0_bn__8_res
  free(conv0_bn__8_res);

  //Run allocactivation : mnc0_0_pw_bn__1_res
  int8_t *mnc0_0_pw_bn__1_res = (int8_t *)malloc(401408);

  //Run convolution : mnc0_0_pw_bn__1
  int8_t* mnc0_0_pw_bn__1_input_transpose = (int8_t *)VTABufferAlloc(401408);
  transpose_nhwc2vtaio(conv0_bn__1_res, (int8_t* )VTABufferGetVirtAddr(mnc0_0_pw_bn__1_input_transpose), 1, 112, 112, 32);
  int8_t* mnc0_0_pw_bn__1_output_bef_transpose = (int8_t *)VTABufferAlloc(401408);
  convolution_wo_tr(mnc0_0_pw_bn__1_input_transpose, mnc0_0_pw_conv_w__1, (int32_t *)mnc0_0_pw_bn_b, mnc0_0_pw_bn__1_output_bef_transpose, 1, 112, 112, 32, 32, 1, 1, 0, 1, 1, 1, 7, 112, 112, vtaCmdH);
  transpose_vtaio2nhwc((int8_t* )VTABufferGetVirtAddr(mnc0_0_pw_bn__1_output_bef_transpose), mnc0_0_pw_bn__1_res, 1, 112, 112, 32 );
  VTABufferFree(mnc0_0_pw_bn__1_input_transpose);
  free(mnc0_0_pw_bn__1_output_bef_transpose);

  //Run deallocactivation : dealloc_conv0_bn__1_res
  free(conv0_bn__1_res);

  //Run allocactivation : mnc0_0_dw_bn__1_res
  int8_t *mnc0_0_dw_bn__1_res = (int8_t *)malloc(401408);

  //Run convolution : mnc0_0_dw_bn__1
  nonvtaconvolution(mnc0_0_pw_bn__1_res, 1.0/0.062500, 0, (int8_t *)VTABufferGetVirtAddr(mnc0_0_dw_conv_w__1), 1.0/16.000000, 0, (int8_t *)VTABufferGetVirtAddr(mnc0_0_dw_bn_b), 1.0/1.000000, 0, mnc0_0_dw_bn__1_res, 1.0/0.015625, 0, 1, 112, 112, 32, 32, 3, 3, 1, 1, 32, 1, 1, 1, 112, 112 );

  //Run deallocactivation : dealloc_mnc0_0_pw_bn__1_res
  free(mnc0_0_pw_bn__1_res);

  //Run allocactivation : mnc0_0__1_res
  int8_t *mnc0_0__1_res = (int8_t *)malloc(200704);

  //Run convolution : mnc0_0__1
  int8_t* mnc0_0__1_input_transpose = (int8_t *)VTABufferAlloc(401408);
  transpose_nhwc2vtaio(mnc0_0_dw_bn__1_res, (int8_t* )VTABufferGetVirtAddr(mnc0_0__1_input_transpose), 1, 112, 112, 32);
  int8_t* mnc0_0__1_output_bef_transpose = (int8_t *)VTABufferAlloc(200704);
  convolution_wo_tr(mnc0_0__1_input_transpose, mnc0_0_conv_w__1, (int32_t *)mnc0_0_b, mnc0_0__1_output_bef_transpose, 1, 112, 112, 32, 16, 1, 1, 0, 1, 0, 1, 5, 112, 112, vtaCmdH);
  transpose_vtaio2nhwc((int8_t* )VTABufferGetVirtAddr(mnc0_0__1_output_bef_transpose), mnc0_0__1_res, 1, 112, 112, 16 );
  VTABufferFree(mnc0_0__1_input_transpose);
  free(mnc0_0__1_output_bef_transpose);

  //Run deallocactivation : dealloc_mnc0_0_dw_bn__1_res
  free(mnc0_0_dw_bn__1_res);

  //Run allocactivation : mnc1_0_pw_bn__1_res
  int8_t *mnc1_0_pw_bn__1_res = (int8_t *)malloc(1204224);

  //Run convolution : mnc1_0_pw_bn__1
  int8_t* mnc1_0_pw_bn__1_input_transpose = (int8_t *)VTABufferAlloc(200704);
  transpose_nhwc2vtaio(mnc0_0__1_res, (int8_t* )VTABufferGetVirtAddr(mnc1_0_pw_bn__1_input_transpose), 1, 112, 112, 16);
  int8_t* mnc1_0_pw_bn__1_output_bef_transpose = (int8_t *)VTABufferAlloc(1204224);
  convolution_wo_tr(mnc1_0_pw_bn__1_input_transpose, mnc1_0_pw_conv_w__1, (int32_t *)mnc1_0_pw_bn_b, mnc1_0_pw_bn__1_output_bef_transpose, 1, 112, 112, 16, 96, 1, 1, 0, 1, 1, 1, 6, 112, 112, vtaCmdH);
  transpose_vtaio2nhwc((int8_t* )VTABufferGetVirtAddr(mnc1_0_pw_bn__1_output_bef_transpose), mnc1_0_pw_bn__1_res, 1, 112, 112, 96 );
  VTABufferFree(mnc1_0_pw_bn__1_input_transpose);
  free(mnc1_0_pw_bn__1_output_bef_transpose);

  //Run deallocactivation : dealloc_mnc0_0__1_res
  free(mnc0_0__1_res);

  //Run allocactivation : mnc1_0_dw_bn__1_res
  int8_t *mnc1_0_dw_bn__1_res = (int8_t *)malloc(301056);

  //Run convolution : mnc1_0_dw_bn__1
  nonvtaconvolution(mnc1_0_pw_bn__1_res, 1.0/0.062500, 0, (int8_t *)VTABufferGetVirtAddr(mnc1_0_dw_conv_w__1), 1.0/16.000000, 0, (int8_t *)VTABufferGetVirtAddr(mnc1_0_dw_bn_b), 1.0/1.000000, 0, mnc1_0_dw_bn__1_res, 1.0/0.015625, 0, 1, 112, 112, 96, 96, 3, 3, 1, 2, 96, 1, 1, 1, 56, 56 );

  //Run deallocactivation : dealloc_mnc1_0_pw_bn__1_res
  free(mnc1_0_pw_bn__1_res);

  //Run allocactivation : mnc1_0__1_res
  int8_t *mnc1_0__1_res = (int8_t *)malloc(75264);

  //Run convolution : mnc1_0__1
  nonvtaconvolution(mnc1_0_dw_bn__1_res, 1.0/0.015625, 0, (int8_t *)VTABufferGetVirtAddr(mnc1_0_conv_w__1), 1.0/512.000000, 0, (int8_t *)VTABufferGetVirtAddr(mnc1_0_b), 1.0/8.000000, 0, mnc1_0__1_res, 1.0/0.250000, 0, 1, 56, 56, 96, 24, 1, 1, 0, 1, 1, 1, 0, 1, 56, 56 );

  //Run deallocactivation : dealloc_mnc1_0_dw_bn__1_res
  free(mnc1_0_dw_bn__1_res);

  //Run allocactivation : mnc1_1_pw_bn__1_res
  int8_t *mnc1_1_pw_bn__1_res = (int8_t *)malloc(451584);

  //Run convolution : mnc1_1_pw_bn__1
  nonvtaconvolution(mnc1_0__1_res, 1.0/0.250000, 0, (int8_t *)VTABufferGetVirtAddr(mnc1_1_pw_conv_w__1), 1.0/32.000000, 0, (int8_t *)VTABufferGetVirtAddr(mnc1_1_pw_bn_b), 1.0/8.000000, 0, mnc1_1_pw_bn__1_res, 1.0/0.062500, 0, 1, 56, 56, 24, 144, 1, 1, 0, 1, 1, 1, 1, 1, 56, 56 );

  //Run allocactivation : mnc1_1_dw_bn__1_res
  int8_t *mnc1_1_dw_bn__1_res = (int8_t *)malloc(451584);

  //Run convolution : mnc1_1_dw_bn__1
  nonvtaconvolution(mnc1_1_pw_bn__1_res, 1.0/0.062500, 0, (int8_t *)VTABufferGetVirtAddr(mnc1_1_dw_conv_w__1), 1.0/16.000000, 0, (int8_t *)VTABufferGetVirtAddr(mnc1_1_dw_bn_b), 1.0/1.000000, 0, mnc1_1_dw_bn__1_res, 1.0/0.031250, 0, 1, 56, 56, 144, 144, 3, 3, 1, 1, 144, 1, 1, 1, 56, 56 );

  //Run deallocactivation : dealloc_mnc1_1_pw_bn__1_res
  free(mnc1_1_pw_bn__1_res);

  //Run allocactivation : mnc1_1_pwl__1_res
  int8_t *mnc1_1_pwl__1_res = (int8_t *)malloc(75264);

  //Run convolution : mnc1_1_pwl__1
  nonvtaconvolution(mnc1_1_dw_bn__1_res, 1.0/0.031250, 0, (int8_t *)VTABufferGetVirtAddr(mnc1_1_pwl_conv_w__1), 1.0/256.000000, 0, (int8_t *)VTABufferGetVirtAddr(mnc1_1_pwl_b), 1.0/8.000000, 0, mnc1_1_pwl__1_res, 1.0/0.250000, 0, 1, 56, 56, 144, 24, 1, 1, 0, 1, 1, 1, 0, 1, 56, 56 );

  //Run deallocactivation : dealloc_mnc1_1_dw_bn__1_res
  free(mnc1_1_dw_bn__1_res);

  //Run allocactivation : mnc1_1__1_res
  int8_t *mnc1_1__1_res = (int8_t *)malloc(75264);

  //Run elementadd : mnc1_1__1
  elemadd(mnc1_1_pwl__1_res, 1.0/0.250000, 0, mnc1_0__1_res, 1.0/0.250000, 0, mnc1_1__1_res, 1.0/0.125000, 0, 75264 );

  //Run deallocactivation : dealloc_mnc1_0__1_res
  free(mnc1_0__1_res);

  //Run deallocactivation : dealloc_mnc1_1_pwl__1_res
  free(mnc1_1_pwl__1_res);

  //Run allocactivation : mnc2_0_pw_bn__1_res
  int8_t *mnc2_0_pw_bn__1_res = (int8_t *)malloc(451584);

  //Run convolution : mnc2_0_pw_bn__1
  nonvtaconvolution(mnc1_1__1_res, 1.0/0.125000, 0, (int8_t *)VTABufferGetVirtAddr(mnc2_0_pw_conv_w__1), 1.0/32.000000, 0, (int8_t *)VTABufferGetVirtAddr(mnc2_0_pw_bn_b), 1.0/4.000000, 0, mnc2_0_pw_bn__1_res, 1.0/0.031250, 0, 1, 56, 56, 24, 144, 1, 1, 0, 1, 1, 1, 1, 1, 56, 56 );

  //Run deallocactivation : dealloc_mnc1_1__1_res
  free(mnc1_1__1_res);

  //Run allocactivation : mnc2_0_dw_bn__1_res
  int8_t *mnc2_0_dw_bn__1_res = (int8_t *)malloc(112896);

  //Run convolution : mnc2_0_dw_bn__1
  nonvtaconvolution(mnc2_0_pw_bn__1_res, 1.0/0.031250, 0, (int8_t *)VTABufferGetVirtAddr(mnc2_0_dw_conv_w__1), 1.0/32.000000, 0, (int8_t *)VTABufferGetVirtAddr(mnc2_0_dw_bn_b), 1.0/1.000000, 0, mnc2_0_dw_bn__1_res, 1.0/0.015625, 0, 1, 56, 56, 144, 144, 3, 3, 1, 2, 144, 1, 1, 1, 28, 28 );

  //Run deallocactivation : dealloc_mnc2_0_pw_bn__1_res
  free(mnc2_0_pw_bn__1_res);

  //Run allocactivation : mnc2_0__1_res
  int8_t *mnc2_0__1_res = (int8_t *)malloc(25088);

  //Run convolution : mnc2_0__1
  int8_t* mnc2_0__1_input_transpose = (int8_t *)VTABufferAlloc(112896);
  transpose_nhwc2vtaio(mnc2_0_dw_bn__1_res, (int8_t* )VTABufferGetVirtAddr(mnc2_0__1_input_transpose), 1, 28, 28, 144);
  int8_t* mnc2_0__1_output_bef_transpose = (int8_t *)VTABufferAlloc(25088);
  convolution_wo_tr(mnc2_0__1_input_transpose, mnc2_0_conv_w__1, (int32_t *)mnc2_0_b, mnc2_0__1_output_bef_transpose, 1, 28, 28, 144, 32, 1, 1, 0, 1, 0, 1, 5, 28, 28, vtaCmdH);
  transpose_vtaio2nhwc((int8_t* )VTABufferGetVirtAddr(mnc2_0__1_output_bef_transpose), mnc2_0__1_res, 1, 28, 28, 32 );
  VTABufferFree(mnc2_0__1_input_transpose);
  free(mnc2_0__1_output_bef_transpose);

  //Run deallocactivation : dealloc_mnc2_0_dw_bn__1_res
  free(mnc2_0_dw_bn__1_res);

  //Run allocactivation : mnc2_1_pw_bn__1_res
  int8_t *mnc2_1_pw_bn__1_res = (int8_t *)malloc(150528);

  //Run convolution : mnc2_1_pw_bn__1
  int8_t* mnc2_1_pw_bn__1_input_transpose = (int8_t *)VTABufferAlloc(25088);
  transpose_nhwc2vtaio(mnc2_0__1_res, (int8_t* )VTABufferGetVirtAddr(mnc2_1_pw_bn__1_input_transpose), 1, 28, 28, 32);
  int8_t* mnc2_1_pw_bn__1_output_bef_transpose = (int8_t *)VTABufferAlloc(150528);
  convolution_wo_tr(mnc2_1_pw_bn__1_input_transpose, mnc2_1_pw_conv_w__1, (int32_t *)mnc2_1_pw_bn_b, mnc2_1_pw_bn__1_output_bef_transpose, 1, 28, 28, 32, 192, 1, 1, 0, 1, 1, 1, 8, 28, 28, vtaCmdH);
  transpose_vtaio2nhwc((int8_t* )VTABufferGetVirtAddr(mnc2_1_pw_bn__1_output_bef_transpose), mnc2_1_pw_bn__1_res, 1, 28, 28, 192 );
  VTABufferFree(mnc2_1_pw_bn__1_input_transpose);
  free(mnc2_1_pw_bn__1_output_bef_transpose);

  //Run allocactivation : mnc2_1_dw_bn__1_res
  int8_t *mnc2_1_dw_bn__1_res = (int8_t *)malloc(150528);

  //Run convolution : mnc2_1_dw_bn__1
  nonvtaconvolution(mnc2_1_pw_bn__1_res, 1.0/0.062500, 0, (int8_t *)VTABufferGetVirtAddr(mnc2_1_dw_conv_w__1), 1.0/16.000000, 0, (int8_t *)VTABufferGetVirtAddr(mnc2_1_dw_bn_b), 1.0/1.000000, 0, mnc2_1_dw_bn__1_res, 1.0/0.062500, 0, 1, 28, 28, 192, 192, 3, 3, 1, 1, 192, 1, 1, 1, 28, 28 );

  //Run deallocactivation : dealloc_mnc2_1_pw_bn__1_res
  free(mnc2_1_pw_bn__1_res);

  //Run allocactivation : mnc2_1_pwl__1_res
  int8_t *mnc2_1_pwl__1_res = (int8_t *)malloc(25088);

  //Run convolution : mnc2_1_pwl__1
  int8_t* mnc2_1_pwl__1_input_transpose = (int8_t *)VTABufferAlloc(150528);
  transpose_nhwc2vtaio(mnc2_1_dw_bn__1_res, (int8_t* )VTABufferGetVirtAddr(mnc2_1_pwl__1_input_transpose), 1, 28, 28, 192);
  int8_t* mnc2_1_pwl__1_output_bef_transpose = (int8_t *)VTABufferAlloc(25088);
  convolution_wo_tr(mnc2_1_pwl__1_input_transpose, mnc2_1_pwl_conv_w__1, (int32_t *)mnc2_1_pwl_b, mnc2_1_pwl__1_output_bef_transpose, 1, 28, 28, 192, 32, 1, 1, 0, 1, 0, 1, 6, 28, 28, vtaCmdH);
  transpose_vtaio2nhwc((int8_t* )VTABufferGetVirtAddr(mnc2_1_pwl__1_output_bef_transpose), mnc2_1_pwl__1_res, 1, 28, 28, 32 );
  VTABufferFree(mnc2_1_pwl__1_input_transpose);
  free(mnc2_1_pwl__1_output_bef_transpose);

  //Run deallocactivation : dealloc_mnc2_1_dw_bn__1_res
  free(mnc2_1_dw_bn__1_res);

  //Run elementadd : mnc2_1__1
  elemadd(mnc2_1_pwl__1_res, 1.0/0.500000, 0, mnc2_0__1_res, 1.0/0.250000, 0, mnc2_0__1_res, 1.0/0.250000, 0, 25088 );

  //Run deallocactivation : dealloc_mnc2_1_pwl__1_res
  free(mnc2_1_pwl__1_res);

  //Run allocactivation : mnc2_2_pw_bn__1_res
  int8_t *mnc2_2_pw_bn__1_res = (int8_t *)malloc(150528);

  //Run convolution : mnc2_2_pw_bn__1
  int8_t* mnc2_2_pw_bn__1_input_transpose = (int8_t *)VTABufferAlloc(25088);
  transpose_nhwc2vtaio(mnc2_0__1_res, (int8_t* )VTABufferGetVirtAddr(mnc2_2_pw_bn__1_input_transpose), 1, 28, 28, 32);
  int8_t* mnc2_2_pw_bn__1_output_bef_transpose = (int8_t *)VTABufferAlloc(150528);
  convolution_wo_tr(mnc2_2_pw_bn__1_input_transpose, mnc2_2_pw_conv_w__1, (int32_t *)mnc2_2_pw_bn_b, mnc2_2_pw_bn__1_output_bef_transpose, 1, 28, 28, 32, 192, 1, 1, 0, 1, 1, 1, 8, 28, 28, vtaCmdH);
  transpose_vtaio2nhwc((int8_t* )VTABufferGetVirtAddr(mnc2_2_pw_bn__1_output_bef_transpose), mnc2_2_pw_bn__1_res, 1, 28, 28, 192 );
  VTABufferFree(mnc2_2_pw_bn__1_input_transpose);
  free(mnc2_2_pw_bn__1_output_bef_transpose);

  //Run allocactivation : mnc2_2_dw_bn__1_res
  int8_t *mnc2_2_dw_bn__1_res = (int8_t *)malloc(150528);

  //Run convolution : mnc2_2_dw_bn__1
  nonvtaconvolution(mnc2_2_pw_bn__1_res, 1.0/0.062500, 0, (int8_t *)VTABufferGetVirtAddr(mnc2_2_dw_conv_w__1), 1.0/16.000000, 0, (int8_t *)VTABufferGetVirtAddr(mnc2_2_dw_bn_b), 1.0/1.000000, 0, mnc2_2_dw_bn__1_res, 1.0/0.031250, 0, 1, 28, 28, 192, 192, 3, 3, 1, 1, 192, 1, 1, 1, 28, 28 );

  //Run deallocactivation : dealloc_mnc2_2_pw_bn__1_res
  free(mnc2_2_pw_bn__1_res);

  //Run allocactivation : mnc2_2_pwl__1_res
  int8_t *mnc2_2_pwl__1_res = (int8_t *)malloc(25088);

  //Run convolution : mnc2_2_pwl__1
  int8_t* mnc2_2_pwl__1_input_transpose = (int8_t *)VTABufferAlloc(150528);
  transpose_nhwc2vtaio(mnc2_2_dw_bn__1_res, (int8_t* )VTABufferGetVirtAddr(mnc2_2_pwl__1_input_transpose), 1, 28, 28, 192);
  int8_t* mnc2_2_pwl__1_output_bef_transpose = (int8_t *)VTABufferAlloc(25088);
  convolution_wo_tr(mnc2_2_pwl__1_input_transpose, mnc2_2_pwl_conv_w__1, (int32_t *)mnc2_2_pwl_b, mnc2_2_pwl__1_output_bef_transpose, 1, 28, 28, 192, 32, 1, 1, 0, 1, 0, 1, 5, 28, 28, vtaCmdH);
  transpose_vtaio2nhwc((int8_t* )VTABufferGetVirtAddr(mnc2_2_pwl__1_output_bef_transpose), mnc2_2_pwl__1_res, 1, 28, 28, 32 );
  VTABufferFree(mnc2_2_pwl__1_input_transpose);
  free(mnc2_2_pwl__1_output_bef_transpose);

  //Run deallocactivation : dealloc_mnc2_2_dw_bn__1_res
  free(mnc2_2_dw_bn__1_res);

  //Run elementadd : mnc2_2__1
  elemadd(mnc2_2_pwl__1_res, 1.0/0.250000, 0, mnc2_0__1_res, 1.0/0.250000, 0, mnc2_2_pwl__1_res, 1.0/0.250000, 0, 25088 );

  //Run deallocactivation : dealloc_mnc2_0__1_res
  free(mnc2_0__1_res);

  //Run allocactivation : mnc3_0_pw_bn__1_res
  int8_t *mnc3_0_pw_bn__1_res = (int8_t *)malloc(150528);

  //Run convolution : mnc3_0_pw_bn__1
  int8_t* mnc3_0_pw_bn__1_input_transpose = (int8_t *)VTABufferAlloc(25088);
  transpose_nhwc2vtaio(mnc2_2_pwl__1_res, (int8_t* )VTABufferGetVirtAddr(mnc3_0_pw_bn__1_input_transpose), 1, 28, 28, 32);
  int8_t* mnc3_0_pw_bn__1_output_bef_transpose = (int8_t *)VTABufferAlloc(150528);
  convolution_wo_tr(mnc3_0_pw_bn__1_input_transpose, mnc3_0_pw_conv_w__1, (int32_t *)mnc3_0_pw_bn_b, mnc3_0_pw_bn__1_output_bef_transpose, 1, 28, 28, 32, 192, 1, 1, 0, 1, 1, 1, 7, 28, 28, vtaCmdH);
  transpose_vtaio2nhwc((int8_t* )VTABufferGetVirtAddr(mnc3_0_pw_bn__1_output_bef_transpose), mnc3_0_pw_bn__1_res, 1, 28, 28, 192 );
  VTABufferFree(mnc3_0_pw_bn__1_input_transpose);
  free(mnc3_0_pw_bn__1_output_bef_transpose);

  //Run deallocactivation : dealloc_mnc2_2_pwl__1_res
  free(mnc2_2_pwl__1_res);

  //Run allocactivation : mnc3_0_dw_bn__1_res
  int8_t *mnc3_0_dw_bn__1_res = (int8_t *)malloc(37632);

  //Run convolution : mnc3_0_dw_bn__1
  nonvtaconvolution(mnc3_0_pw_bn__1_res, 1.0/0.062500, 0, (int8_t *)VTABufferGetVirtAddr(mnc3_0_dw_conv_w__1), 1.0/32.000000, 0, (int8_t *)VTABufferGetVirtAddr(mnc3_0_dw_bn_b), 1.0/2.000000, 0, mnc3_0_dw_bn__1_res, 1.0/0.062500, 0, 1, 28, 28, 192, 192, 3, 3, 1, 2, 192, 1, 1, 1, 14, 14 );

  //Run deallocactivation : dealloc_mnc3_0_pw_bn__1_res
  free(mnc3_0_pw_bn__1_res);

  //Run allocactivation : mnc3_2__1_res
  int8_t *mnc3_2__1_res = (int8_t *)malloc(12544);

  //Run convolution : mnc3_0__1
  int8_t* mnc3_0__1_input_transpose = (int8_t *)VTABufferAlloc(37632);
  transpose_nhwc2vtaio(mnc3_0_dw_bn__1_res, (int8_t* )VTABufferGetVirtAddr(mnc3_0__1_input_transpose), 1, 14, 14, 192);
  int8_t* mnc3_0__1_output_bef_transpose = (int8_t *)VTABufferAlloc(12544);
  convolution_wo_tr(mnc3_0__1_input_transpose, mnc3_0_conv_w__1, (int32_t *)mnc3_0_b, mnc3_0__1_output_bef_transpose, 1, 14, 14, 192, 64, 1, 1, 0, 1, 0, 1, 8, 14, 14, vtaCmdH);
  transpose_vtaio2nhwc((int8_t* )VTABufferGetVirtAddr(mnc3_0__1_output_bef_transpose), mnc3_2__1_res, 1, 14, 14, 64 );
  VTABufferFree(mnc3_0__1_input_transpose);
  free(mnc3_0__1_output_bef_transpose);

  //Run deallocactivation : dealloc_mnc3_0_dw_bn__1_res
  free(mnc3_0_dw_bn__1_res);

  //Run allocactivation : mnc3_1_pw_bn__1_res
  int8_t *mnc3_1_pw_bn__1_res = (int8_t *)malloc(75264);

  //Run convolution : mnc3_1_pw_bn__1
  int8_t* mnc3_1_pw_bn__1_input_transpose = (int8_t *)VTABufferAlloc(12544);
  transpose_nhwc2vtaio(mnc3_2__1_res, (int8_t* )VTABufferGetVirtAddr(mnc3_1_pw_bn__1_input_transpose), 1, 14, 14, 64);
  int8_t* mnc3_1_pw_bn__1_output_bef_transpose = (int8_t *)VTABufferAlloc(75264);
  convolution_wo_tr(mnc3_1_pw_bn__1_input_transpose, mnc3_1_pw_conv_w__1, (int32_t *)mnc3_1_pw_bn_b, mnc3_1_pw_bn__1_output_bef_transpose, 1, 14, 14, 64, 384, 1, 1, 0, 1, 1, 1, 7, 14, 14, vtaCmdH);
  transpose_vtaio2nhwc((int8_t* )VTABufferGetVirtAddr(mnc3_1_pw_bn__1_output_bef_transpose), mnc3_1_pw_bn__1_res, 1, 14, 14, 384 );
  VTABufferFree(mnc3_1_pw_bn__1_input_transpose);
  free(mnc3_1_pw_bn__1_output_bef_transpose);

  //Run allocactivation : mnc3_1_dw_bn__1_res
  int8_t *mnc3_1_dw_bn__1_res = (int8_t *)malloc(75264);

  //Run convolution : mnc3_1_dw_bn__1
  nonvtaconvolution(mnc3_1_pw_bn__1_res, 1.0/0.125000, 0, (int8_t *)VTABufferGetVirtAddr(mnc3_1_dw_conv_w__1), 1.0/16.000000, 0, (int8_t *)VTABufferGetVirtAddr(mnc3_1_dw_bn_b), 1.0/2.000000, 0, mnc3_1_dw_bn__1_res, 1.0/0.125000, 0, 1, 14, 14, 384, 384, 3, 3, 1, 1, 384, 1, 1, 1, 14, 14 );

  //Run deallocactivation : dealloc_mnc3_1_pw_bn__1_res
  free(mnc3_1_pw_bn__1_res);

  //Run allocactivation : mnc3_1_pwl__1_res
  int8_t *mnc3_1_pwl__1_res = (int8_t *)malloc(12544);

  //Run convolution : mnc3_1_pwl__1
  int8_t* mnc3_1_pwl__1_input_transpose = (int8_t *)VTABufferAlloc(75264);
  transpose_nhwc2vtaio(mnc3_1_dw_bn__1_res, (int8_t* )VTABufferGetVirtAddr(mnc3_1_pwl__1_input_transpose), 1, 14, 14, 384);
  int8_t* mnc3_1_pwl__1_output_bef_transpose = (int8_t *)VTABufferAlloc(12544);
  convolution_wo_tr(mnc3_1_pwl__1_input_transpose, mnc3_1_pwl_conv_w__1, (int32_t *)mnc3_1_pwl_b, mnc3_1_pwl__1_output_bef_transpose, 1, 14, 14, 384, 64, 1, 1, 0, 1, 0, 1, 6, 14, 14, vtaCmdH);
  transpose_vtaio2nhwc((int8_t* )VTABufferGetVirtAddr(mnc3_1_pwl__1_output_bef_transpose), mnc3_1_pwl__1_res, 1, 14, 14, 64 );
  VTABufferFree(mnc3_1_pwl__1_input_transpose);
  free(mnc3_1_pwl__1_output_bef_transpose);

  //Run deallocactivation : dealloc_mnc3_1_dw_bn__1_res
  free(mnc3_1_dw_bn__1_res);

  //Run elementadd : mnc3_1__1
  elemadd(mnc3_1_pwl__1_res, 1.0/1.000000, 0, mnc3_2__1_res, 1.0/0.250000, 0, mnc3_2__1_res, 1.0/0.250000, 0, 12544 );

  //Run deallocactivation : dealloc_mnc3_1_pwl__1_res
  free(mnc3_1_pwl__1_res);

  //Run allocactivation : mnc3_2_pw_bn__1_res
  int8_t *mnc3_2_pw_bn__1_res = (int8_t *)malloc(75264);

  //Run convolution : mnc3_2_pw_bn__1
  int8_t* mnc3_2_pw_bn__1_input_transpose = (int8_t *)VTABufferAlloc(12544);
  transpose_nhwc2vtaio(mnc3_2__1_res, (int8_t* )VTABufferGetVirtAddr(mnc3_2_pw_bn__1_input_transpose), 1, 14, 14, 64);
  int8_t* mnc3_2_pw_bn__1_output_bef_transpose = (int8_t *)VTABufferAlloc(75264);
  convolution_wo_tr(mnc3_2_pw_bn__1_input_transpose, mnc3_2_pw_conv_w__1, (int32_t *)mnc3_2_pw_bn_b, mnc3_2_pw_bn__1_output_bef_transpose, 1, 14, 14, 64, 384, 1, 1, 0, 1, 1, 1, 6, 14, 14, vtaCmdH);
  transpose_vtaio2nhwc((int8_t* )VTABufferGetVirtAddr(mnc3_2_pw_bn__1_output_bef_transpose), mnc3_2_pw_bn__1_res, 1, 14, 14, 384 );
  VTABufferFree(mnc3_2_pw_bn__1_input_transpose);
  free(mnc3_2_pw_bn__1_output_bef_transpose);

  //Run allocactivation : mnc3_2_dw_bn__1_res
  int8_t *mnc3_2_dw_bn__1_res = (int8_t *)malloc(75264);

  //Run convolution : mnc3_2_dw_bn__1
  nonvtaconvolution(mnc3_2_pw_bn__1_res, 1.0/0.250000, 0, (int8_t *)VTABufferGetVirtAddr(mnc3_2_dw_conv_w__1), 1.0/16.000000, 0, (int8_t *)VTABufferGetVirtAddr(mnc3_2_dw_bn_b), 1.0/4.000000, 0, mnc3_2_dw_bn__1_res, 1.0/0.125000, 0, 1, 14, 14, 384, 384, 3, 3, 1, 1, 384, 1, 1, 1, 14, 14 );

  //Run deallocactivation : dealloc_mnc3_2_pw_bn__1_res
  free(mnc3_2_pw_bn__1_res);

  //Run allocactivation : mnc3_2_pwl__1_res
  int8_t *mnc3_2_pwl__1_res = (int8_t *)malloc(12544);

  //Run convolution : mnc3_2_pwl__1
  int8_t* mnc3_2_pwl__1_input_transpose = (int8_t *)VTABufferAlloc(75264);
  transpose_nhwc2vtaio(mnc3_2_dw_bn__1_res, (int8_t* )VTABufferGetVirtAddr(mnc3_2_pwl__1_input_transpose), 1, 14, 14, 384);
  int8_t* mnc3_2_pwl__1_output_bef_transpose = (int8_t *)VTABufferAlloc(12544);
  convolution_wo_tr(mnc3_2_pwl__1_input_transpose, mnc3_2_pwl_conv_w__1, (int32_t *)mnc3_2_pwl_b, mnc3_2_pwl__1_output_bef_transpose, 1, 14, 14, 384, 64, 1, 1, 0, 1, 0, 1, 6, 14, 14, vtaCmdH);
  transpose_vtaio2nhwc((int8_t* )VTABufferGetVirtAddr(mnc3_2_pwl__1_output_bef_transpose), mnc3_2_pwl__1_res, 1, 14, 14, 64 );
  VTABufferFree(mnc3_2_pwl__1_input_transpose);
  free(mnc3_2_pwl__1_output_bef_transpose);

  //Run deallocactivation : dealloc_mnc3_2_dw_bn__1_res
  free(mnc3_2_dw_bn__1_res);

  //Run elementadd : mnc3_2__1
  elemadd(mnc3_2_pwl__1_res, 1.0/1.000000, 0, mnc3_2__1_res, 1.0/0.250000, 0, mnc3_2__1_res, 1.0/0.250000, 0, 12544 );

  //Run deallocactivation : dealloc_mnc3_2_pwl__1_res
  free(mnc3_2_pwl__1_res);

  //Run allocactivation : mnc3_3_pw_bn__1_res
  int8_t *mnc3_3_pw_bn__1_res = (int8_t *)malloc(75264);

  //Run convolution : mnc3_3_pw_bn__1
  int8_t* mnc3_3_pw_bn__1_input_transpose = (int8_t *)VTABufferAlloc(12544);
  transpose_nhwc2vtaio(mnc3_2__1_res, (int8_t* )VTABufferGetVirtAddr(mnc3_3_pw_bn__1_input_transpose), 1, 14, 14, 64);
  int8_t* mnc3_3_pw_bn__1_output_bef_transpose = (int8_t *)VTABufferAlloc(75264);
  convolution_wo_tr(mnc3_3_pw_bn__1_input_transpose, mnc3_3_pw_conv_w__1, (int32_t *)mnc3_3_pw_bn_b, mnc3_3_pw_bn__1_output_bef_transpose, 1, 14, 14, 64, 384, 1, 1, 0, 1, 1, 1, 7, 14, 14, vtaCmdH);
  transpose_vtaio2nhwc((int8_t* )VTABufferGetVirtAddr(mnc3_3_pw_bn__1_output_bef_transpose), mnc3_3_pw_bn__1_res, 1, 14, 14, 384 );
  VTABufferFree(mnc3_3_pw_bn__1_input_transpose);
  free(mnc3_3_pw_bn__1_output_bef_transpose);

  //Run allocactivation : mnc3_3_dw_bn__1_res
  int8_t *mnc3_3_dw_bn__1_res = (int8_t *)malloc(75264);

  //Run convolution : mnc3_3_dw_bn__1
  nonvtaconvolution(mnc3_3_pw_bn__1_res, 1.0/0.125000, 0, (int8_t *)VTABufferGetVirtAddr(mnc3_3_dw_conv_w__1), 1.0/2.000000, 0, (int8_t *)VTABufferGetVirtAddr(mnc3_3_dw_bn_b), 1.0/0.250000, 0, mnc3_3_dw_bn__1_res, 1.0/0.062500, 0, 1, 14, 14, 384, 384, 3, 3, 1, 1, 384, 1, 1, 1, 14, 14 );

  //Run deallocactivation : dealloc_mnc3_3_pw_bn__1_res
  free(mnc3_3_pw_bn__1_res);

  //Run allocactivation : mnc3_3_pwl__1_res
  int8_t *mnc3_3_pwl__1_res = (int8_t *)malloc(12544);

  //Run convolution : mnc3_3_pwl__1
  int8_t* mnc3_3_pwl__1_input_transpose = (int8_t *)VTABufferAlloc(75264);
  transpose_nhwc2vtaio(mnc3_3_dw_bn__1_res, (int8_t* )VTABufferGetVirtAddr(mnc3_3_pwl__1_input_transpose), 1, 14, 14, 384);
  int8_t* mnc3_3_pwl__1_output_bef_transpose = (int8_t *)VTABufferAlloc(12544);
  convolution_wo_tr(mnc3_3_pwl__1_input_transpose, mnc3_3_pwl_conv_w__1, (int32_t *)mnc3_3_pwl_b, mnc3_3_pwl__1_output_bef_transpose, 1, 14, 14, 384, 64, 1, 1, 0, 1, 0, 1, 5, 14, 14, vtaCmdH);
  transpose_vtaio2nhwc((int8_t* )VTABufferGetVirtAddr(mnc3_3_pwl__1_output_bef_transpose), mnc3_3_pwl__1_res, 1, 14, 14, 64 );
  VTABufferFree(mnc3_3_pwl__1_input_transpose);
  free(mnc3_3_pwl__1_output_bef_transpose);

  //Run deallocactivation : dealloc_mnc3_3_dw_bn__1_res
  free(mnc3_3_dw_bn__1_res);

  //Run elementadd : mnc3_3__1
  elemadd(mnc3_3_pwl__1_res, 1.0/0.500000, 0, mnc3_2__1_res, 1.0/0.250000, 0, mnc3_2__1_res, 1.0/0.250000, 0, 12544 );

  //Run deallocactivation : dealloc_mnc3_3_pwl__1_res
  free(mnc3_3_pwl__1_res);

  //Run allocactivation : mnc3_4_pw_bn__1_res
  int8_t *mnc3_4_pw_bn__1_res = (int8_t *)malloc(75264);

  //Run convolution : mnc3_4_pw_bn__1
  int8_t* mnc3_4_pw_bn__1_input_transpose = (int8_t *)VTABufferAlloc(12544);
  transpose_nhwc2vtaio(mnc3_2__1_res, (int8_t* )VTABufferGetVirtAddr(mnc3_4_pw_bn__1_input_transpose), 1, 14, 14, 64);
  int8_t* mnc3_4_pw_bn__1_output_bef_transpose = (int8_t *)VTABufferAlloc(75264);
  convolution_wo_tr(mnc3_4_pw_bn__1_input_transpose, mnc3_4_pw_conv_w__1, (int32_t *)mnc3_4_pw_bn_b, mnc3_4_pw_bn__1_output_bef_transpose, 1, 14, 14, 64, 384, 1, 1, 0, 1, 1, 1, 5, 14, 14, vtaCmdH);
  transpose_vtaio2nhwc((int8_t* )VTABufferGetVirtAddr(mnc3_4_pw_bn__1_output_bef_transpose), mnc3_4_pw_bn__1_res, 1, 14, 14, 384 );
  VTABufferFree(mnc3_4_pw_bn__1_input_transpose);
  free(mnc3_4_pw_bn__1_output_bef_transpose);

  //Run deallocactivation : dealloc_mnc3_2__1_res
  free(mnc3_2__1_res);

  //Run allocactivation : mnc3_4_dw_bn__1_res
  int8_t *mnc3_4_dw_bn__1_res = (int8_t *)malloc(75264);

  //Run convolution : mnc3_4_dw_bn__1
  nonvtaconvolution(mnc3_4_pw_bn__1_res, 1.0/0.250000, 0, (int8_t *)VTABufferGetVirtAddr(mnc3_4_dw_conv_w__1), 1.0/16.000000, 0, (int8_t *)VTABufferGetVirtAddr(mnc3_4_dw_bn_b), 1.0/4.000000, 0, mnc3_4_dw_bn__1_res, 1.0/0.125000, 0, 1, 14, 14, 384, 384, 3, 3, 1, 1, 384, 1, 1, 1, 14, 14 );

  //Run deallocactivation : dealloc_mnc3_4_pw_bn__1_res
  free(mnc3_4_pw_bn__1_res);

  //Run allocactivation : mnc3_4__1_res
  int8_t *mnc3_4__1_res = (int8_t *)malloc(18816);

  //Run convolution : mnc3_4__1
  int8_t* mnc3_4__1_input_transpose = (int8_t *)VTABufferAlloc(75264);
  transpose_nhwc2vtaio(mnc3_4_dw_bn__1_res, (int8_t* )VTABufferGetVirtAddr(mnc3_4__1_input_transpose), 1, 14, 14, 384);
  int8_t* mnc3_4__1_output_bef_transpose = (int8_t *)VTABufferAlloc(18816);
  convolution_wo_tr(mnc3_4__1_input_transpose, mnc3_4_conv_w__1, (int32_t *)mnc3_4_b, mnc3_4__1_output_bef_transpose, 1, 14, 14, 384, 96, 1, 1, 0, 1, 0, 1, 7, 14, 14, vtaCmdH);
  transpose_vtaio2nhwc((int8_t* )VTABufferGetVirtAddr(mnc3_4__1_output_bef_transpose), mnc3_4__1_res, 1, 14, 14, 96 );
  VTABufferFree(mnc3_4__1_input_transpose);
  free(mnc3_4__1_output_bef_transpose);

  //Run deallocactivation : dealloc_mnc3_4_dw_bn__1_res
  free(mnc3_4_dw_bn__1_res);

  //Run allocactivation : mnc3_5_pw_bn__1_res
  int8_t *mnc3_5_pw_bn__1_res = (int8_t *)malloc(112896);

  //Run convolution : mnc3_5_pw_bn__1
  int8_t* mnc3_5_pw_bn__1_input_transpose = (int8_t *)VTABufferAlloc(18816);
  transpose_nhwc2vtaio(mnc3_4__1_res, (int8_t* )VTABufferGetVirtAddr(mnc3_5_pw_bn__1_input_transpose), 1, 14, 14, 96);
  int8_t* mnc3_5_pw_bn__1_output_bef_transpose = (int8_t *)VTABufferAlloc(112896);
  convolution_wo_tr(mnc3_5_pw_bn__1_input_transpose, mnc3_5_pw_conv_w__1, (int32_t *)mnc3_5_pw_bn_b, mnc3_5_pw_bn__1_output_bef_transpose, 1, 14, 14, 96, 576, 1, 1, 0, 1, 1, 1, 8, 14, 14, vtaCmdH);
  transpose_vtaio2nhwc((int8_t* )VTABufferGetVirtAddr(mnc3_5_pw_bn__1_output_bef_transpose), mnc3_5_pw_bn__1_res, 1, 14, 14, 576 );
  VTABufferFree(mnc3_5_pw_bn__1_input_transpose);
  free(mnc3_5_pw_bn__1_output_bef_transpose);

  //Run allocactivation : mnc3_5_dw_bn__1_res
  int8_t *mnc3_5_dw_bn__1_res = (int8_t *)malloc(112896);

  //Run convolution : mnc3_5_dw_bn__1
  nonvtaconvolution(mnc3_5_pw_bn__1_res, 1.0/0.250000, 0, (int8_t *)VTABufferGetVirtAddr(mnc3_5_dw_conv_w__1), 1.0/1.000000, 0, (int8_t *)VTABufferGetVirtAddr(mnc3_5_dw_bn_b), 1.0/0.250000, 0, mnc3_5_dw_bn__1_res, 1.0/0.125000, 0, 1, 14, 14, 576, 576, 3, 3, 1, 1, 576, 1, 1, 1, 14, 14 );

  //Run deallocactivation : dealloc_mnc3_5_pw_bn__1_res
  free(mnc3_5_pw_bn__1_res);

  //Run allocactivation : mnc3_5_pwl__1_res
  int8_t *mnc3_5_pwl__1_res = (int8_t *)malloc(18816);

  //Run convolution : mnc3_5_pwl__1
  int8_t* mnc3_5_pwl__1_input_transpose = (int8_t *)VTABufferAlloc(112896);
  transpose_nhwc2vtaio(mnc3_5_dw_bn__1_res, (int8_t* )VTABufferGetVirtAddr(mnc3_5_pwl__1_input_transpose), 1, 14, 14, 576);
  int8_t* mnc3_5_pwl__1_output_bef_transpose = (int8_t *)VTABufferAlloc(18816);
  convolution_wo_tr(mnc3_5_pwl__1_input_transpose, mnc3_5_pwl_conv_w__1, (int32_t *)mnc3_5_pwl_b, mnc3_5_pwl__1_output_bef_transpose, 1, 14, 14, 576, 96, 1, 1, 0, 1, 0, 1, 6, 14, 14, vtaCmdH);
  transpose_vtaio2nhwc((int8_t* )VTABufferGetVirtAddr(mnc3_5_pwl__1_output_bef_transpose), mnc3_5_pwl__1_res, 1, 14, 14, 96 );
  VTABufferFree(mnc3_5_pwl__1_input_transpose);
  free(mnc3_5_pwl__1_output_bef_transpose);

  //Run deallocactivation : dealloc_mnc3_5_dw_bn__1_res
  free(mnc3_5_dw_bn__1_res);

  //Run allocactivation : mnc3_5__1_res
  int8_t *mnc3_5__1_res = (int8_t *)malloc(18816);

  //Run elementadd : mnc3_5__1
  elemadd(mnc3_5_pwl__1_res, 1.0/1.000000, 0, mnc3_4__1_res, 1.0/1.000000, 0, mnc3_5__1_res, 1.0/0.500000, 0, 18816 );

  //Run deallocactivation : dealloc_mnc3_4__1_res
  free(mnc3_4__1_res);

  //Run deallocactivation : dealloc_mnc3_5_pwl__1_res
  free(mnc3_5_pwl__1_res);

  //Run allocactivation : mnc3_6_pw_bn__1_res
  int8_t *mnc3_6_pw_bn__1_res = (int8_t *)malloc(112896);

  //Run convolution : mnc3_6_pw_bn__1
  int8_t* mnc3_6_pw_bn__1_input_transpose = (int8_t *)VTABufferAlloc(18816);
  transpose_nhwc2vtaio(mnc3_5__1_res, (int8_t* )VTABufferGetVirtAddr(mnc3_6_pw_bn__1_input_transpose), 1, 14, 14, 96);
  int8_t* mnc3_6_pw_bn__1_output_bef_transpose = (int8_t *)VTABufferAlloc(112896);
  convolution_wo_tr(mnc3_6_pw_bn__1_input_transpose, mnc3_6_pw_conv_w__1, (int32_t *)mnc3_6_pw_bn_b, mnc3_6_pw_bn__1_output_bef_transpose, 1, 14, 14, 96, 576, 1, 1, 0, 1, 1, 1, 7, 14, 14, vtaCmdH);
  transpose_vtaio2nhwc((int8_t* )VTABufferGetVirtAddr(mnc3_6_pw_bn__1_output_bef_transpose), mnc3_6_pw_bn__1_res, 1, 14, 14, 576 );
  VTABufferFree(mnc3_6_pw_bn__1_input_transpose);
  free(mnc3_6_pw_bn__1_output_bef_transpose);

  //Run allocactivation : mnc3_6_dw_bn__1_res
  int8_t *mnc3_6_dw_bn__1_res = (int8_t *)malloc(112896);

  //Run convolution : mnc3_6_dw_bn__1
  nonvtaconvolution(mnc3_6_pw_bn__1_res, 1.0/0.250000, 0, (int8_t *)VTABufferGetVirtAddr(mnc3_6_dw_conv_w__1), 1.0/16.000000, 0, (int8_t *)VTABufferGetVirtAddr(mnc3_6_dw_bn_b), 1.0/4.000000, 0, mnc3_6_dw_bn__1_res, 1.0/0.125000, 0, 1, 14, 14, 576, 576, 3, 3, 1, 1, 576, 1, 1, 1, 14, 14 );

  //Run deallocactivation : dealloc_mnc3_6_pw_bn__1_res
  free(mnc3_6_pw_bn__1_res);

  //Run allocactivation : mnc3_6_pwl__1_res
  int8_t *mnc3_6_pwl__1_res = (int8_t *)malloc(18816);

  //Run convolution : mnc3_6_pwl__1
  int8_t* mnc3_6_pwl__1_input_transpose = (int8_t *)VTABufferAlloc(112896);
  transpose_nhwc2vtaio(mnc3_6_dw_bn__1_res, (int8_t* )VTABufferGetVirtAddr(mnc3_6_pwl__1_input_transpose), 1, 14, 14, 576);
  int8_t* mnc3_6_pwl__1_output_bef_transpose = (int8_t *)VTABufferAlloc(18816);
  convolution_wo_tr(mnc3_6_pwl__1_input_transpose, mnc3_6_pwl_conv_w__1, (int32_t *)mnc3_6_pwl_b, mnc3_6_pwl__1_output_bef_transpose, 1, 14, 14, 576, 96, 1, 1, 0, 1, 0, 1, 6, 14, 14, vtaCmdH);
  transpose_vtaio2nhwc((int8_t* )VTABufferGetVirtAddr(mnc3_6_pwl__1_output_bef_transpose), mnc3_6_pwl__1_res, 1, 14, 14, 96 );
  VTABufferFree(mnc3_6_pwl__1_input_transpose);
  free(mnc3_6_pwl__1_output_bef_transpose);

  //Run deallocactivation : dealloc_mnc3_6_dw_bn__1_res
  free(mnc3_6_dw_bn__1_res);

  //Run elementadd : mnc3_6__1
  elemadd(mnc3_6_pwl__1_res, 1.0/1.000000, 0, mnc3_5__1_res, 1.0/0.500000, 0, mnc3_5__1_res, 1.0/0.500000, 0, 18816 );

  //Run deallocactivation : dealloc_mnc3_6_pwl__1_res
  free(mnc3_6_pwl__1_res);

  //Run allocactivation : mnc4_0_pw_bn__1_res
  int8_t *mnc4_0_pw_bn__1_res = (int8_t *)malloc(112896);

  //Run convolution : mnc4_0_pw_bn__1
  int8_t* mnc4_0_pw_bn__1_input_transpose = (int8_t *)VTABufferAlloc(18816);
  transpose_nhwc2vtaio(mnc3_5__1_res, (int8_t* )VTABufferGetVirtAddr(mnc4_0_pw_bn__1_input_transpose), 1, 14, 14, 96);
  int8_t* mnc4_0_pw_bn__1_output_bef_transpose = (int8_t *)VTABufferAlloc(112896);
  convolution_wo_tr(mnc4_0_pw_bn__1_input_transpose, mnc4_0_pw_conv_w__1, (int32_t *)mnc4_0_pw_bn_b, mnc4_0_pw_bn__1_output_bef_transpose, 1, 14, 14, 96, 576, 1, 1, 0, 1, 1, 1, 7, 14, 14, vtaCmdH);
  transpose_vtaio2nhwc((int8_t* )VTABufferGetVirtAddr(mnc4_0_pw_bn__1_output_bef_transpose), mnc4_0_pw_bn__1_res, 1, 14, 14, 576 );
  VTABufferFree(mnc4_0_pw_bn__1_input_transpose);
  free(mnc4_0_pw_bn__1_output_bef_transpose);

  //Run deallocactivation : dealloc_mnc3_5__1_res
  free(mnc3_5__1_res);

  //Run allocactivation : mnc4_0_dw_bn__1_res
  int8_t *mnc4_0_dw_bn__1_res = (int8_t *)malloc(28224);

  //Run convolution : mnc4_0_dw_bn__1
  nonvtaconvolution(mnc4_0_pw_bn__1_res, 1.0/0.250000, 0, (int8_t *)VTABufferGetVirtAddr(mnc4_0_dw_conv_w__1), 1.0/32.000000, 0, (int8_t *)VTABufferGetVirtAddr(mnc4_0_dw_bn_b), 1.0/8.000000, 0, mnc4_0_dw_bn__1_res, 1.0/0.125000, 0, 1, 14, 14, 576, 576, 3, 3, 1, 2, 576, 1, 1, 1, 7, 7 );

  //Run deallocactivation : dealloc_mnc4_0_pw_bn__1_res
  free(mnc4_0_pw_bn__1_res);

  //Run allocactivation : mnc4_0__1_res
  int8_t *mnc4_0__1_res = (int8_t *)malloc(7840);

  //Run convolution : mnc4_0__1
  int8_t* mnc4_0__1_input_transpose = (int8_t *)VTABufferAlloc(28224);
  transpose_nhwc2vtaio(mnc4_0_dw_bn__1_res, (int8_t* )VTABufferGetVirtAddr(mnc4_0__1_input_transpose), 1, 7, 7, 576);
  int8_t* mnc4_0__1_output_bef_transpose = (int8_t *)VTABufferAlloc(7840);
  convolution_wo_tr(mnc4_0__1_input_transpose, mnc4_0_conv_w__1, (int32_t *)mnc4_0_b, mnc4_0__1_output_bef_transpose, 1, 7, 7, 576, 160, 1, 1, 0, 1, 0, 1, 6, 7, 7, vtaCmdH);
  transpose_vtaio2nhwc((int8_t* )VTABufferGetVirtAddr(mnc4_0__1_output_bef_transpose), mnc4_0__1_res, 1, 7, 7, 160 );
  VTABufferFree(mnc4_0__1_input_transpose);
  free(mnc4_0__1_output_bef_transpose);

  //Run deallocactivation : dealloc_mnc4_0_dw_bn__1_res
  free(mnc4_0_dw_bn__1_res);

  //Run allocactivation : mnc4_1_pw_bn__1_res
  int8_t *mnc4_1_pw_bn__1_res = (int8_t *)malloc(47040);

  //Run convolution : mnc4_1_pw_bn__1
  int8_t* mnc4_1_pw_bn__1_input_transpose = (int8_t *)VTABufferAlloc(7840);
  transpose_nhwc2vtaio(mnc4_0__1_res, (int8_t* )VTABufferGetVirtAddr(mnc4_1_pw_bn__1_input_transpose), 1, 7, 7, 160);
  int8_t* mnc4_1_pw_bn__1_output_bef_transpose = (int8_t *)VTABufferAlloc(47040);
  convolution_wo_tr(mnc4_1_pw_bn__1_input_transpose, mnc4_1_pw_conv_w__1, (int32_t *)mnc4_1_pw_bn_b, mnc4_1_pw_bn__1_output_bef_transpose, 1, 7, 7, 160, 960, 1, 1, 0, 1, 1, 1, 8, 7, 7, vtaCmdH);
  transpose_vtaio2nhwc((int8_t* )VTABufferGetVirtAddr(mnc4_1_pw_bn__1_output_bef_transpose), mnc4_1_pw_bn__1_res, 1, 7, 7, 960 );
  VTABufferFree(mnc4_1_pw_bn__1_input_transpose);
  free(mnc4_1_pw_bn__1_output_bef_transpose);

  //Run allocactivation : mnc4_1_dw_bn__1_res
  int8_t *mnc4_1_dw_bn__1_res = (int8_t *)malloc(47040);

  //Run convolution : mnc4_1_dw_bn__1
  nonvtaconvolution(mnc4_1_pw_bn__1_res, 1.0/0.500000, 0, (int8_t *)VTABufferGetVirtAddr(mnc4_1_dw_conv_w__1), 1.0/4.000000, 0, (int8_t *)VTABufferGetVirtAddr(mnc4_1_dw_bn_b), 1.0/2.000000, 0, mnc4_1_dw_bn__1_res, 1.0/0.250000, 0, 1, 7, 7, 960, 960, 3, 3, 1, 1, 960, 1, 1, 1, 7, 7 );

  //Run deallocactivation : dealloc_mnc4_1_pw_bn__1_res
  free(mnc4_1_pw_bn__1_res);

  //Run allocactivation : mnc4_1_pwl__1_res
  int8_t *mnc4_1_pwl__1_res = (int8_t *)malloc(7840);

  //Run convolution : mnc4_1_pwl__1
  int8_t* mnc4_1_pwl__1_input_transpose = (int8_t *)VTABufferAlloc(47040);
  transpose_nhwc2vtaio(mnc4_1_dw_bn__1_res, (int8_t* )VTABufferGetVirtAddr(mnc4_1_pwl__1_input_transpose), 1, 7, 7, 960);
  int8_t* mnc4_1_pwl__1_output_bef_transpose = (int8_t *)VTABufferAlloc(7840);
  convolution_wo_tr(mnc4_1_pwl__1_input_transpose, mnc4_1_pwl_conv_w__1, (int32_t *)mnc4_1_pwl_b, mnc4_1_pwl__1_output_bef_transpose, 1, 7, 7, 960, 160, 1, 1, 0, 1, 0, 1, 7, 7, 7, vtaCmdH);
  transpose_vtaio2nhwc((int8_t* )VTABufferGetVirtAddr(mnc4_1_pwl__1_output_bef_transpose), mnc4_1_pwl__1_res, 1, 7, 7, 160 );
  VTABufferFree(mnc4_1_pwl__1_input_transpose);
  free(mnc4_1_pwl__1_output_bef_transpose);

  //Run deallocactivation : dealloc_mnc4_1_dw_bn__1_res
  free(mnc4_1_dw_bn__1_res);

  //Run elementadd : mnc4_1__1
  elemadd(mnc4_1_pwl__1_res, 1.0/1.000000, 0, mnc4_0__1_res, 1.0/2.000000, 0, mnc4_1_pwl__1_res, 1.0/1.000000, 0, 7840 );

  //Run deallocactivation : dealloc_mnc4_0__1_res
  free(mnc4_0__1_res);

  //Run allocactivation : mnc4_2_pw_bn__1_res
  int8_t *mnc4_2_pw_bn__1_res = (int8_t *)malloc(47040);

  //Run convolution : mnc4_2_pw_bn__1
  int8_t* mnc4_2_pw_bn__1_input_transpose = (int8_t *)VTABufferAlloc(7840);
  transpose_nhwc2vtaio(mnc4_1_pwl__1_res, (int8_t* )VTABufferGetVirtAddr(mnc4_2_pw_bn__1_input_transpose), 1, 7, 7, 160);
  int8_t* mnc4_2_pw_bn__1_output_bef_transpose = (int8_t *)VTABufferAlloc(47040);
  convolution_wo_tr(mnc4_2_pw_bn__1_input_transpose, mnc4_2_pw_conv_w__1, (int32_t *)mnc4_2_pw_bn_b, mnc4_2_pw_bn__1_output_bef_transpose, 1, 7, 7, 160, 960, 1, 1, 0, 1, 1, 1, 7, 7, 7, vtaCmdH);
  transpose_vtaio2nhwc((int8_t* )VTABufferGetVirtAddr(mnc4_2_pw_bn__1_output_bef_transpose), mnc4_2_pw_bn__1_res, 1, 7, 7, 960 );
  VTABufferFree(mnc4_2_pw_bn__1_input_transpose);
  free(mnc4_2_pw_bn__1_output_bef_transpose);

  //Run allocactivation : mnc4_2_dw_bn__1_res
  int8_t *mnc4_2_dw_bn__1_res = (int8_t *)malloc(47040);

  //Run convolution : mnc4_2_dw_bn__1
  nonvtaconvolution(mnc4_2_pw_bn__1_res, 1.0/0.500000, 0, (int8_t *)VTABufferGetVirtAddr(mnc4_2_dw_conv_w__1), 1.0/16.000000, 0, (int8_t *)VTABufferGetVirtAddr(mnc4_2_dw_bn_b), 1.0/8.000000, 0, mnc4_2_dw_bn__1_res, 1.0/0.250000, 0, 1, 7, 7, 960, 960, 3, 3, 1, 1, 960, 1, 1, 1, 7, 7 );

  //Run deallocactivation : dealloc_mnc4_2_pw_bn__1_res
  free(mnc4_2_pw_bn__1_res);

  //Run allocactivation : mnc4_2_pwl__1_res
  int8_t *mnc4_2_pwl__1_res = (int8_t *)malloc(7840);

  //Run convolution : mnc4_2_pwl__1
  int8_t* mnc4_2_pwl__1_input_transpose = (int8_t *)VTABufferAlloc(47040);
  transpose_nhwc2vtaio(mnc4_2_dw_bn__1_res, (int8_t* )VTABufferGetVirtAddr(mnc4_2_pwl__1_input_transpose), 1, 7, 7, 960);
  int8_t* mnc4_2_pwl__1_output_bef_transpose = (int8_t *)VTABufferAlloc(7840);
  convolution_wo_tr(mnc4_2_pwl__1_input_transpose, mnc4_2_pwl_conv_w__1, (int32_t *)mnc4_2_pwl_b, mnc4_2_pwl__1_output_bef_transpose, 1, 7, 7, 960, 160, 1, 1, 0, 1, 0, 1, 6, 7, 7, vtaCmdH);
  transpose_vtaio2nhwc((int8_t* )VTABufferGetVirtAddr(mnc4_2_pwl__1_output_bef_transpose), mnc4_2_pwl__1_res, 1, 7, 7, 160 );
  VTABufferFree(mnc4_2_pwl__1_input_transpose);
  free(mnc4_2_pwl__1_output_bef_transpose);

  //Run deallocactivation : dealloc_mnc4_2_dw_bn__1_res
  free(mnc4_2_dw_bn__1_res);

  //Run elementadd : mnc4_2__1
  elemadd(mnc4_2_pwl__1_res, 1.0/1.000000, 0, mnc4_1_pwl__1_res, 1.0/1.000000, 0, mnc4_2_pwl__1_res, 1.0/1.000000, 0, 7840 );

  //Run deallocactivation : dealloc_mnc4_1_pwl__1_res
  free(mnc4_1_pwl__1_res);

  //Run allocactivation : mnc4_3_pw_bn__1_res
  int8_t *mnc4_3_pw_bn__1_res = (int8_t *)malloc(47040);

  //Run convolution : mnc4_3_pw_bn__1
  int8_t* mnc4_3_pw_bn__1_input_transpose = (int8_t *)VTABufferAlloc(7840);
  transpose_nhwc2vtaio(mnc4_2_pwl__1_res, (int8_t* )VTABufferGetVirtAddr(mnc4_3_pw_bn__1_input_transpose), 1, 7, 7, 160);
  int8_t* mnc4_3_pw_bn__1_output_bef_transpose = (int8_t *)VTABufferAlloc(47040);
  convolution_wo_tr(mnc4_3_pw_bn__1_input_transpose, mnc4_3_pw_conv_w__1, (int32_t *)mnc4_3_pw_bn_b, mnc4_3_pw_bn__1_output_bef_transpose, 1, 7, 7, 160, 960, 1, 1, 0, 1, 1, 1, 7, 7, 7, vtaCmdH);
  transpose_vtaio2nhwc((int8_t* )VTABufferGetVirtAddr(mnc4_3_pw_bn__1_output_bef_transpose), mnc4_3_pw_bn__1_res, 1, 7, 7, 960 );
  VTABufferFree(mnc4_3_pw_bn__1_input_transpose);
  free(mnc4_3_pw_bn__1_output_bef_transpose);

  //Run deallocactivation : dealloc_mnc4_2_pwl__1_res
  free(mnc4_2_pwl__1_res);

  //Run allocactivation : mnc4_3_dw_bn__1_res
  int8_t *mnc4_3_dw_bn__1_res = (int8_t *)malloc(47040);

  //Run convolution : mnc4_3_dw_bn__1
  nonvtaconvolution(mnc4_3_pw_bn__1_res, 1.0/0.500000, 0, (int8_t *)VTABufferGetVirtAddr(mnc4_3_dw_conv_w__1), 1.0/16.000000, 0, (int8_t *)VTABufferGetVirtAddr(mnc4_3_dw_bn_b), 1.0/8.000000, 0, mnc4_3_dw_bn__1_res, 1.0/0.250000, 0, 1, 7, 7, 960, 960, 3, 3, 1, 1, 960, 1, 1, 1, 7, 7 );

  //Run deallocactivation : dealloc_mnc4_3_pw_bn__1_res
  free(mnc4_3_pw_bn__1_res);

  //Run allocactivation : mnc4_3__1_res
  int8_t *mnc4_3__1_res = (int8_t *)malloc(15680);

  //Run convolution : mnc4_3__1
  int8_t* mnc4_3__1_input_transpose = (int8_t *)VTABufferAlloc(47040);
  transpose_nhwc2vtaio(mnc4_3_dw_bn__1_res, (int8_t* )VTABufferGetVirtAddr(mnc4_3__1_input_transpose), 1, 7, 7, 960);
  int8_t* mnc4_3__1_output_bef_transpose = (int8_t *)VTABufferAlloc(15680);
  convolution_wo_tr(mnc4_3__1_input_transpose, mnc4_3_conv_w__1, (int32_t *)mnc4_3_b, mnc4_3__1_output_bef_transpose, 1, 7, 7, 960, 320, 1, 1, 0, 1, 0, 1, 6, 7, 7, vtaCmdH);
  transpose_vtaio2nhwc((int8_t* )VTABufferGetVirtAddr(mnc4_3__1_output_bef_transpose), mnc4_3__1_res, 1, 7, 7, 320 );
  VTABufferFree(mnc4_3__1_input_transpose);
  free(mnc4_3__1_output_bef_transpose);

  //Run deallocactivation : dealloc_mnc4_3_dw_bn__1_res
  free(mnc4_3_dw_bn__1_res);

  //Run allocactivation : mnc4_3_1x1_bn__1_res
  int8_t *mnc4_3_1x1_bn__1_res = (int8_t *)malloc(62720);

  //Run convolution : mnc4_3_1x1_bn__1
  int8_t* mnc4_3_1x1_bn__1_input_transpose = (int8_t *)VTABufferAlloc(15680);
  transpose_nhwc2vtaio(mnc4_3__1_res, (int8_t* )VTABufferGetVirtAddr(mnc4_3_1x1_bn__1_input_transpose), 1, 7, 7, 320);
  int8_t* mnc4_3_1x1_bn__1_output_bef_transpose = (int8_t *)VTABufferAlloc(62720);
  convolution_wo_tr(mnc4_3_1x1_bn__1_input_transpose, mnc4_3_1x1_conv_w__1, (int32_t *)mnc4_3_1x1_bn_b, mnc4_3_1x1_bn__1_output_bef_transpose, 1, 7, 7, 320, 1280, 1, 1, 0, 1, 1, 1, 8, 7, 7, vtaCmdH);
  transpose_vtaio2nhwc((int8_t* )VTABufferGetVirtAddr(mnc4_3_1x1_bn__1_output_bef_transpose), mnc4_3_1x1_bn__1_res, 1, 7, 7, 1280 );
  VTABufferFree(mnc4_3_1x1_bn__1_input_transpose);
  free(mnc4_3_1x1_bn__1_output_bef_transpose);

  //Run deallocactivation : dealloc_mnc4_3__1_res
  free(mnc4_3__1_res);

  //Run allocactivation : final_avg__1_res
  int8_t *final_avg__1_res = (int8_t *)malloc(1280);

  //Run avgpool : final_avg__1
  avgpool(mnc4_3_1x1_bn__1_res, 1.0/0.125000, 0, final_avg__1_res, 1.0/0.250000, 0, 1, 7, 7, 1280, 1, 1, 1, 1280, 7, 7, 0, 1 );

  //Run deallocactivation : dealloc_mnc4_3_1x1_bn__1_res
  free(mnc4_3_1x1_bn__1_res);

  //Run tensorview : final_avg__1_res__2
  int8_t* final_avg__1_res__2 = final_avg__1_res;

  //Run allocactivation : pred_res
  int8_t *pred_res = (int8_t *)malloc(1000);

  //Run fullyconnected : pred
  fullyconnected(final_avg__1_res__2, 1.0/0.250000, 0, (int8_t *)VTABufferGetVirtAddr(pred_w__2), 1.0/512.000000, 0, (int8_t *)VTABufferGetVirtAddr(pred_b), 1.0/128.000000, 0, pred_res, 1.0/0.125000, 0, 1, 1280, 1280, 1000, 1, 1000, 1 );

  //Run deallocactivation : dealloc_final_avg__1_res
  free(final_avg__1_res);

  //Run allocactivation : pred_dequantize_res
  int8_t *pred_dequantize_res = (int8_t *)malloc(4000);

  //Run dequantize : pred_dequantize
  dequantize(pred_res, pred_dequantize_res, 1000, 1/0.125000, 0 );

  //Run deallocactivation : dealloc_pred_res
  free(pred_res);

  //Run softmax : softmax__1
  int8_t* softmax = (int8_t*)mutableWeight + 602112;
  softmax(pred_dequantize_res, softmax, 1, 1000, 1, 1000 );

  //Run deallocactivation : dealloc_pred_dequantize_res
  free(pred_dequantize_res);
  return 0;
}
