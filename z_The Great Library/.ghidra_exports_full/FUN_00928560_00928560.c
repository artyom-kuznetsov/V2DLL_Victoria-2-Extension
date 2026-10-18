// FUN_00928560 @ 00928560 body=[[00928560, 00928594]]


undefined4 FUN_00928560(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x14) * 4) +
                           0xbe8) + *(int *)(in_ECX + 0xc) * 4);
  return CONCAT31((int3)((uint)iVar1 >> 8),*(int *)(iVar1 + 0x1c) == *(int *)(in_ECX + 0xc));
}

