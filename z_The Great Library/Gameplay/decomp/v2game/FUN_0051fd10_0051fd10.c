// FUN_0051fd10 @ 0051fd10  (requested 0051FD10, first bytes: 55 8B EC 6A FF 68 7B FB)


void FUN_0051fd10(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int *local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar6 = param_1;
  uVar2 = DAT_013f368c;
  uVar1 = DAT_013f3688;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9fb7b;
  local_10 = ExceptionList;
  iVar8 = *(int *)(DAT_012587f0 + 0x10) - *(int *)(DAT_012587f0 + 0xc) >> 2;
  ExceptionList = &local_10;
  if (DAT_0125ce80 == 0) {
    ExceptionList = &local_10;
    iVar3 = FUN_00aae9af(0x3c);
    local_8 = 0;
    if (iVar3 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_004dada0();
    }
    local_8 = 0xffffffff;
    FUN_004dc340(uVar4);
  }
  piVar9 = (int *)(param_1 + 0x1514);
  iVar3 = *(int *)(DAT_0125ce80 + 0x10) - *(int *)(DAT_0125ce80 + 0xc) >> 2;
  if (((*(int *)(param_1 + 0x1518) - *(int *)(param_1 + 0x1514)) / 0x18 != iVar8) ||
     (*(int *)(param_1 + 0x14f8) - *(int *)(param_1 + 0x14f4) >> 4 != iVar3)) {
    FUN_00548a00();
    FUN_00548ab0();
    param_1 = iVar3;
    if (0 < iVar3) {
      do {
        FUN_00548a00();
        param_1 = param_1 + -1;
      } while (param_1 != 0);
    }
  }
  local_18 = (int *)(iVar6 + 0x14f4);
  if (0 < iVar8) {
    iVar6 = 0;
    param_1 = iVar8;
    do {
      puVar5 = (undefined4 *)(*piVar9 + iVar6);
      *puVar5 = uVar1;
      puVar5[1] = uVar2;
      puVar5[2] = uVar1;
      puVar5[3] = uVar2;
      puVar5[4] = uVar1;
      iVar6 = iVar6 + 0x18;
      param_1 = param_1 + -1;
      puVar5[5] = uVar2;
    } while (param_1 != 0);
  }
  if (0 < iVar3) {
    iVar6 = 0;
    param_1 = iVar3;
    do {
      if (0 < iVar8) {
        iVar7 = 0;
        iVar3 = iVar8;
        do {
          puVar5 = (undefined4 *)(*(int *)(*local_18 + iVar6) + iVar7);
          *puVar5 = uVar1;
          puVar5[1] = uVar2;
          puVar5[2] = uVar1;
          puVar5[3] = uVar2;
          puVar5[4] = uVar1;
          iVar7 = iVar7 + 0x18;
          iVar3 = iVar3 + -1;
          puVar5[5] = uVar2;
        } while (iVar3 != 0);
      }
      iVar6 = iVar6 + 0x10;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  ExceptionList = local_10;
  return;
}

