// FUN_00aeb790 @ 00aeb790 body=[[00aeb790, 00aeb803]]


void FUN_00aeb790(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_2;
  in_ECX[1] = param_2[1];
  in_ECX[2] = param_2[2];
  in_ECX[3] = param_2[3];
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0x3f800000;
  in_ECX[0xb] = *param_1;
  in_ECX[0xc] = param_1[1];
  in_ECX[0xd] = param_1[2];
  in_ECX[4] = *param_4;
  in_ECX[5] = param_4[1];
  in_ECX[6] = param_4[2];
  in_ECX[7] = param_4[3];
  in_ECX[8] = *param_3;
  in_ECX[9] = param_3[1];
  in_ECX[10] = param_3[2];
  return;
}

