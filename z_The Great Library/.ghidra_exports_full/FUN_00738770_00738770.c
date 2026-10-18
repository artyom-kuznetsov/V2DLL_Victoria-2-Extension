// FUN_00738770 @ 00738770 body=[[00738770, 007387a7]]


void FUN_00738770(undefined8 *param_1)

{
  int in_ECX;
  undefined8 *in_EDX;
  
  for (; in_ECX != 0; in_ECX = in_ECX + -1) {
    if (param_1 != (undefined8 *)0x0) {
      *param_1 = *in_EDX;
      param_1[1] = in_EDX[1];
      param_1[2] = in_EDX[2];
    }
    param_1 = param_1 + 3;
  }
  return;
}

