// FUN_004de3c0 @ 004de3c0 body=[[004de3c0, 004de3f9]]


undefined4 FUN_004de3c0(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  uint uVar3;
  
  uVar3 = (uint)*(byte *)(*(int *)(*(int *)(in_ECX + 0x80) + 8) + 0x3a4 +
                         *(int *)(DAT_012588e8 + 0xbcc));
  iVar1 = *(int *)(*(int *)(DAT_012588e8 + 0xbcc) + 0x3e4);
  iVar2 = *(int *)(iVar1 + 4 + uVar3 * 8);
  if ((-1 < iVar2) && ((0 < iVar2 || (*(int *)(iVar1 + uVar3 * 8) != 0)))) {
    return 1;
  }
  return 0;
}

