// FUN_007235e0 @ 007235e0 body=[[007235e0, 007236a6]]


undefined4 FUN_007235e0(int param_1)

{
  int iVar1;
  int in_ECX;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  iVar5 = *(int *)(DAT_012588e8 + 0xbcc);
  iVar1 = *(int *)(*(int *)(in_ECX + 0x28) + 8);
  iVar4 = *(int *)(*(int *)(param_1 + 0x28) + 8);
  uVar2 = (uint)*(byte *)(iVar4 + 0x5bc + iVar5);
  uVar3 = (uint)*(byte *)(iVar4 + 0x288 + iVar5);
  uVar6 = __allmul(*(undefined4 *)(*(int *)(iVar5 + 0x2c8) + uVar3 * 8),
                   *(undefined4 *)(*(int *)(iVar5 + 0x2c8) + 4 + uVar3 * 8),
                   *(undefined4 *)(*(int *)(iVar5 + 0x5fc) + uVar2 * 8),
                   *(undefined4 *)(*(int *)(iVar5 + 0x5fc) + 4 + uVar2 * 8));
  iVar4 = (int)((ulonglong)uVar6 >> 0x20);
  uVar2 = (uint)*(byte *)(iVar1 + 0x288 + iVar5);
  uVar3 = (uint)*(byte *)(iVar1 + 0x5bc + iVar5);
  uVar7 = __allmul(*(undefined4 *)(*(int *)(iVar5 + 0x2c8) + uVar2 * 8),
                   *(undefined4 *)(*(int *)(iVar5 + 0x2c8) + 4 + uVar2 * 8),
                   *(undefined4 *)(*(int *)(iVar5 + 0x5fc) + uVar3 * 8),
                   *(undefined4 *)(*(int *)(iVar5 + 0x5fc) + 4 + uVar3 * 8));
  iVar5 = (int)((ulonglong)uVar7 >> 0x20);
  if ((iVar4 <= iVar5) &&
     ((iVar4 < iVar5 || (((uint)uVar6 & 0xffff8000) < ((uint)uVar7 & 0xffff8000))))) {
    return 1;
  }
  return 0;
}

