// FUN_009a6870 @ 009a6870 body=[[009a6870, 009a68bd]]


void FUN_009a6870(short *param_1)

{
  int iVar1;
  int in_ECX;
  float local_c;
  float local_8;
  
  (**(code **)(**(int **)(in_ECX + 0xa0) + 0xd4))(&local_c);
  iVar1 = *(int *)(in_ECX + 0xfc);
  *param_1 = (short)(int)local_c;
  param_1[1] = (short)(int)local_8;
  if (iVar1 == 1) {
    *param_1 = *(short *)(in_ECX + 0x98) + (short)(int)local_c;
  }
  return;
}

