// FUN_0071a200 @ 0071a200 body=[[0071a200, 0071a252]]


undefined4 FUN_0071a200(void)

{
  int iVar1;
  int in_ECX;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar2 = (uint)*(byte *)(*(int *)(*(int *)(in_ECX + 0x28) + 8) + 0x3a4 +
                         *(int *)(DAT_012588e8 + 0xbcc));
  iVar3 = *(int *)(*(int *)(DAT_012588e8 + 0xbcc) + 0x3e4);
  iVar1 = *(int *)(iVar3 + 4 + uVar2 * 8);
  if ((-1 < iVar1) && ((0 < iVar1 || (*(int *)(iVar3 + uVar2 * 8) != 0)))) {
    uVar4 = FUN_00b31c36();
    iVar3 = (int)((ulonglong)uVar4 >> 0x20);
    if ((iVar3 <= *(int *)(in_ECX + 0x34)) &&
       ((iVar3 < *(int *)(in_ECX + 0x34) || ((uint)uVar4 < *(uint *)(in_ECX + 0x30))))) {
      return 1;
    }
  }
  return 0;
}

