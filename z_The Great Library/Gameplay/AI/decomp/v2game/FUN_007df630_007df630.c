// FUN_007df630 @ 007df630 body=[[007df630, 007df684]]


void FUN_007df630(undefined4 *param_1)

{
  int in_ECX;
  undefined4 local_20 [7];
  
  for (; in_ECX != 0; in_ECX = in_ECX + -1) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      if (param_1 != local_20) {
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
      }
    }
    param_1 = param_1 + 4;
  }
  return;
}

