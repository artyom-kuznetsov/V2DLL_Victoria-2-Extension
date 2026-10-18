// FUN_008ff0f0 @ 008ff0f0 body=[[008ff0f0, 008ff171]]


undefined4 FUN_008ff0f0(int param_1)

{
  int iVar1;
  uint uVar2;
  int in_ECX;
  int iVar3;
  undefined8 uVar4;
  
  iVar3 = *(int *)(*(int *)(param_1 + 0x14) + 100);
  if (iVar3 != 0) {
    iVar3 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar3 + 300) * 4) + 0x84c);
    if (iVar3 != 0) {
      iVar3 = *(int *)(*(int *)(iVar3 + 0x54) + 0x28);
      iVar1 = *(int *)(*(int *)(param_1 + 0x14) + 0x7c);
      uVar2 = *(uint *)(iVar1 + iVar3 * 8);
      uVar4 = __alldiv(uVar2 << 0xf,*(int *)(iVar1 + 4 + iVar3 * 8) << 0xf | uVar2 >> 0x11,0x320000,
                       0);
      iVar3 = (int)((ulonglong)uVar4 >> 0x20);
      if ((*(int *)(in_ECX + 0x24) <= iVar3) &&
         ((*(int *)(in_ECX + 0x24) < iVar3 || (*(uint *)(in_ECX + 0x20) <= (uint)uVar4)))) {
        return 1;
      }
    }
  }
  return 0;
}

