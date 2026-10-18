// FUN_009232b0 @ 009232b0 body=[[009232b0, 0092330c]]


undefined4 FUN_009232b0(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0xc) * 4) +
                           0xbe8) + *(int *)(in_ECX + 0x14) * 4);
  if (*(char *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar1 + 0xc) * 4) + 0x31) != '\0') {
    return 1;
  }
  iVar1 = *(int *)(iVar1 + 0x40);
  return CONCAT31((int3)((uint)iVar1 >> 8),iVar1 < 4);
}

