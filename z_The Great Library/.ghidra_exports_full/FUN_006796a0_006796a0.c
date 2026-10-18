// FUN_006796a0 @ 006796a0 body=[[006796a0, 006796ca]]


void FUN_006796a0(undefined4 *param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x1e00);
  *(undefined4 *)(iVar1 + 0x2c) = *param_1;
  *(undefined4 *)(iVar1 + 0x30) = param_1[1];
  if (*(char *)(*(int *)(iVar1 + 0x28) + 0x67) != '\0') {
    FUN_0069c520();
  }
  return;
}

