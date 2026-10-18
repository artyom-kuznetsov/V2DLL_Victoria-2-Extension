// FUN_0051fef0 @ 0051fef0 body=[[0051fef0, 0051ffa5] [0051ffb0, 0052004d]]


void FUN_0051fef0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int local_3c;
  
  uVar3 = DAT_013f368c;
  uVar2 = DAT_013f3688;
  local_3c = *(int *)(DAT_012587f0 + 0x10) - *(int *)(DAT_012587f0 + 0xc) >> 2;
  if ((*(int *)(param_1 + 0x14e8) - *(int *)(param_1 + 0x14e4)) / 0x18 != local_3c) {
    FUN_00548a00();
    FUN_00548a00();
    FUN_00548a00();
  }
  if (0 < local_3c) {
    iVar5 = 0;
    do {
      iVar1 = *(int *)(param_1 + 0x14e4);
      *(undefined4 *)(iVar1 + iVar5) = uVar2;
      *(undefined4 *)(iVar1 + 4 + iVar5) = uVar3;
      *(undefined4 *)(iVar1 + 8 + iVar5) = uVar2;
      *(undefined4 *)(iVar1 + 0xc + iVar5) = uVar3;
      *(undefined4 *)(iVar1 + iVar5 + 0x10) = uVar2;
      *(undefined4 *)(iVar1 + iVar5 + 0x14) = uVar3;
      iVar1 = *(int *)(param_1 + 0x1504);
      *(undefined4 *)(iVar1 + 4 + iVar5) = uVar3;
      puVar4 = (undefined4 *)(iVar1 + iVar5);
      *puVar4 = uVar2;
      puVar4[2] = uVar2;
      puVar4[3] = uVar3;
      puVar4[4] = uVar2;
      puVar4[5] = uVar3;
      puVar4 = (undefined4 *)(*(int *)(param_1 + 0x1524) + iVar5);
      puVar4[1] = uVar3;
      *puVar4 = uVar2;
      puVar4[2] = uVar2;
      puVar4[3] = uVar3;
      iVar5 = iVar5 + 0x18;
      local_3c = local_3c + -1;
      puVar4[4] = uVar2;
      puVar4[5] = uVar3;
    } while (local_3c != 0);
  }
  return;
}

