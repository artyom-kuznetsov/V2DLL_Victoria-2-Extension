// FUN_007df6f0 @ 007df6f0 body=[[007df6f0, 007df75a]]


void FUN_007df6f0(undefined4 *param_1)

{
  undefined4 *in_ECX;
  undefined4 *unaff_ESI;
  
  for (; in_ECX != unaff_ESI; in_ECX = in_ECX + 4) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      if (param_1 != in_ECX) {
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        *param_1 = *in_ECX;
        param_1[1] = in_ECX[1];
        param_1[2] = in_ECX[2];
        *in_ECX = 0;
        in_ECX[1] = 0;
        in_ECX[2] = 0;
      }
    }
    param_1 = param_1 + 4;
  }
  return;
}

