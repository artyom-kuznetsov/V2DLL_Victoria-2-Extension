// FUN_004bfc70 @ 004bfc70 body=[[004bfc70, 004bfc7c] [004bfc80, 004bfc96]]


void FUN_004bfc70(undefined4 *param_1)

{
  int in_ECX;
  undefined4 *in_EDX;
  
  for (; in_ECX != 0; in_ECX = in_ECX + -1) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = *in_EDX;
      param_1[1] = in_EDX[1];
    }
    param_1 = param_1 + 2;
  }
  return;
}

