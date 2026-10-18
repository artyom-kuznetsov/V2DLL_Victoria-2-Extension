// FUN_0043ab30 @ 0043ab30 body=[[0043ab30, 0043ab3c] [0043ab40, 0043ab56]]


void FUN_0043ab30(undefined4 *param_1)

{
  undefined4 *in_ECX;
  undefined4 *in_EDX;
  
  for (; in_ECX != in_EDX; in_ECX = in_ECX + 2) {
    *param_1 = *in_ECX;
    param_1[1] = in_ECX[1];
    param_1 = param_1 + 2;
  }
  return;
}

