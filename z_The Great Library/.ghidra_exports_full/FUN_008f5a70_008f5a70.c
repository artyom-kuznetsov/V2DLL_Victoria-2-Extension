// FUN_008f5a70 @ 008f5a70 body=[[008f5a70, 008f5af3]]


undefined4 FUN_008f5a70(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  iVar1 = *(int *)(*(int *)(DAT_012588e8 + 0xcf8) + 8);
  iVar2 = 0;
  if (((iVar1 != 0) &&
      (iVar2 = *(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(iVar1 + 8) * 4) + 0x188),
      *(int *)(iVar2 + 0x288) != 0)) &&
     (iVar2 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar2 + 0x288) * 4),
     0 < (int)(*(int *)(iVar2 + 0x9dc) - *(int *)(iVar2 + 0x9d8) & 0xfffffffcU))) {
    return CONCAT31((int3)((uint)iVar2 >> 8),*(char *)(in_ECX + 0x1c) == '\x01');
  }
  return CONCAT31((int3)((uint)iVar2 >> 8),*(char *)(in_ECX + 0x1c) == '\0');
}

