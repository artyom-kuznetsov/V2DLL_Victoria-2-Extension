// FUN_007387b0 @ 007387b0 body=[[007387b0, 007387e7]]


void FUN_007387b0(undefined8 *param_1)

{
  undefined8 *in_ECX;
  undefined8 *in_EDX;
  
  for (; in_ECX != in_EDX; in_ECX = in_ECX + 3) {
    *param_1 = *in_ECX;
    param_1[1] = in_ECX[1];
    param_1[2] = in_ECX[2];
    param_1 = param_1 + 3;
  }
  return;
}

