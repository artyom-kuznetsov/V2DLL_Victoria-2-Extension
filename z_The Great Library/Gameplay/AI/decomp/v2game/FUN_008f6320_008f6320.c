// FUN_008f6320 @ 008f6320 body=[[008f6320, 008f633f]]


undefined4 FUN_008f6320(void)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  
  iVar1 = *(int *)(*(int *)(DAT_012588e8 + 0xcf8) + 8);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0x10);
  }
  return CONCAT31((int3)((uint)iVar1 >> 8),*(int *)(in_ECX + 0x1c) <= iVar2);
}

