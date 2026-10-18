// FUN_00ad2900 @ 00ad2900 body=[[00ad2900, 00ad2952]]


void FUN_00ad2900(float *param_1)

{
  float *in_ECX;
  
  *in_ECX = *param_1 * *in_ECX;
  in_ECX[1] = in_ECX[1] * param_1[1];
  in_ECX[2] = in_ECX[2] * param_1[2];
  in_ECX[4] = in_ECX[4] * *param_1;
  in_ECX[5] = in_ECX[5] * param_1[1];
  in_ECX[6] = in_ECX[6] * param_1[2];
  in_ECX[8] = in_ECX[8] * *param_1;
  in_ECX[9] = in_ECX[9] * param_1[1];
  in_ECX[10] = in_ECX[10] * param_1[2];
  return;
}

