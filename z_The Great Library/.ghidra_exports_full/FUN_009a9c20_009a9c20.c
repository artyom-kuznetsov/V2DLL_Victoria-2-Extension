// FUN_009a9c20 @ 009a9c20 body=[[009a9c20, 009a9c51]]


void FUN_009a9c20(undefined4 *param_1)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x24) == 1) {
    param_1[1] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    return;
  }
  param_1[1] = 1;
  param_1[3] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  return;
}

