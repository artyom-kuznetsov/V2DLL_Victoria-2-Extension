// FUN_0092e240 @ 0092e240 body=[[0092e240, 0092e26b]]


undefined4 FUN_0092e240(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x28);
  if (iVar1 == 0) {
    return 0;
  }
  return CONCAT31((int3)((uint)iVar1 >> 8),*(int *)(iVar1 + 0xc) != *(int *)(in_ECX + 0xc));
}

