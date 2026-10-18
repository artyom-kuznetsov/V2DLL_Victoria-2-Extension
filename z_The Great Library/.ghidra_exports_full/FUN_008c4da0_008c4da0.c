// FUN_008c4da0 @ 008c4da0 body=[[008c4da0, 008c4f25]]


uint FUN_008c4da0(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int in_ECX;
  undefined4 uVar5;
  
  uVar3 = *(uint *)(param_1 + 0xc);
  uVar5 = *(undefined4 *)(param_1 + 8);
  if (uVar3 == 0) {
    if (*(int *)(param_1 + 0x10) == 0) {
      uVar3 = (**(code **)(**(int **)(param_1 + 0x14) + 0x20))();
      if ((char)uVar3 == '\0') goto LAB_008c4f1b;
      iVar4 = *(int *)(*(int *)(param_1 + 0x14) + 100);
    }
    else {
      iVar4 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_1 + 0x10) * 4);
    }
    uVar5 = *(undefined4 *)(iVar4 + 0x128);
    uVar3 = *(uint *)(iVar4 + 300);
    if (uVar3 == 0) goto LAB_008c4f1b;
  }
  if (((((char)uVar5 != 'R') || ((char)((uint)uVar5 >> 8) != 'E')) ||
      ((char)((uint)uVar5 >> 0x10) != 'B')) && (iVar4 = *(int *)(in_ECX + 0x20), iVar4 != 0)) {
    iVar1 = *(int *)(iVar4 + 0x5c);
    if ((iVar1 == 1) &&
       (iVar2 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + uVar3 * 4) + 0x84c), iVar2 != 0)) {
      if (*(int *)(iVar4 + 0x50) < *(int *)(iVar2 + 0x5c) - *(int *)(iVar2 + 0x58) >> 2) {
        return (uint)(*(int *)(*(int *)(iVar2 + 0x58) + *(int *)(iVar4 + 0x50) * 4) ==
                     *(int *)(in_ECX + 0x24));
      }
      return (uint)(*(int *)(in_ECX + 0x24) == 0);
    }
    if (iVar1 == 2) {
      iVar4 = *(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + uVar3 * 4) + 0x860) +
                      *(int *)(iVar4 + 0x50) * 4);
      return CONCAT31((int3)((uint)iVar4 >> 8),iVar4 == *(int *)(in_ECX + 0x24));
    }
    if (iVar1 == 3) {
      iVar4 = *(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + uVar3 * 4) + 0x850) +
                      *(int *)(iVar4 + 0x50) * 4);
      return CONCAT31((int3)((uint)iVar4 >> 8),iVar4 == *(int *)(in_ECX + 0x24));
    }
    if (iVar1 == 4) {
      iVar4 = *(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + uVar3 * 4) + 0x880) +
                      *(int *)(iVar4 + 0x50) * 4);
      return CONCAT31((int3)((uint)iVar4 >> 8),iVar4 == *(int *)(in_ECX + 0x24));
    }
    if (iVar1 == 5) {
      iVar4 = *(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + uVar3 * 4) + 0x870) +
                      *(int *)(iVar4 + 0x50) * 4);
      return CONCAT31((int3)((uint)iVar4 >> 8),iVar4 == *(int *)(in_ECX + 0x24));
    }
  }
LAB_008c4f1b:
  return uVar3 & 0xffffff00;
}

