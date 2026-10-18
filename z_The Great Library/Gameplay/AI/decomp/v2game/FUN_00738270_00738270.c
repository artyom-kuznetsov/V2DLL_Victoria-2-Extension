// FUN_00738270 @ 00738270 body=[[00738270, 007382a4]]


void FUN_00738270(undefined8 *param_1)

{
  undefined8 *in_ECX;
  undefined8 *in_EDX;
  
  for (; param_1 != in_EDX; param_1 = param_1 + 3) {
    *param_1 = *in_ECX;
    param_1[1] = in_ECX[1];
    param_1[2] = in_ECX[2];
  }
  return;
}

