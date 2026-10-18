// FUN_0099ee30 @ 0099ee30 body=[[0099ee30, 0099ee3c] [0099ee40, 0099ee64]]


void FUN_0099ee30(undefined4 *param_1)

{
  int in_ECX;
  int in_EDX;
  
  for (; in_ECX != 0; in_ECX = in_ECX + -1) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = &PTR_FUN_00e384bc;
      param_1[1] = *(undefined4 *)(in_EDX + 4);
      *param_1 = &PTR_FUN_00e40cd8;
      param_1[2] = *(undefined4 *)(in_EDX + 8);
    }
    param_1 = param_1 + 3;
  }
  return;
}

