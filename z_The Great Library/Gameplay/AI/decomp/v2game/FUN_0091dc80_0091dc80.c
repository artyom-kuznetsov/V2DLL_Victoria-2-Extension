// FUN_0091dc80 @ 0091dc80 body=[[0091dc80, 0091dcb4]]


undefined4 FUN_0091dc80(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x14) * 4) +
                           0xbe8) + *(int *)(in_ECX + 0xc) * 4);
  return CONCAT31((int3)((uint)iVar1 >> 8),*(char *)(iVar1 + 0x60) == '\0');
}

