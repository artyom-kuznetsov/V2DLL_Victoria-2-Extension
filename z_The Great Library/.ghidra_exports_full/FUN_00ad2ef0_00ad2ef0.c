// FUN_00ad2ef0 @ 00ad2ef0 body=[[00ad2ef0, 00ad2f83]]


void FUN_00ad2ef0(float *param_1)

{
  float fVar1;
  float *in_ECX;
  
  if (*param_1 <= *in_ECX) {
    fVar1 = *param_1;
  }
  else {
    fVar1 = *in_ECX;
  }
  *in_ECX = fVar1;
  if (param_1[1] <= in_ECX[1]) {
    fVar1 = param_1[1];
  }
  else {
    fVar1 = in_ECX[1];
  }
  in_ECX[1] = fVar1;
  if (param_1[2] <= in_ECX[2]) {
    fVar1 = param_1[2];
  }
  else {
    fVar1 = in_ECX[2];
  }
  in_ECX[2] = fVar1;
  if (in_ECX[3] <= *param_1) {
    fVar1 = *param_1;
  }
  else {
    fVar1 = in_ECX[3];
  }
  in_ECX[3] = fVar1;
  if (in_ECX[4] <= param_1[1]) {
    fVar1 = param_1[1];
  }
  else {
    fVar1 = in_ECX[4];
  }
  in_ECX[4] = fVar1;
  if (param_1[2] < in_ECX[5]) {
    in_ECX[5] = in_ECX[5];
    return;
  }
  in_ECX[5] = param_1[2];
  return;
}

