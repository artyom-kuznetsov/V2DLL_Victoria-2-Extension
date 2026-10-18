// FUN_00751210 @ 00751210 body=[[00751210, 0075134e] [00751352, 007513e5] [007513e9, 00751446] [0075144a, 0075159a] [0075159e, 007515b5] [007515c0, 007516cf] [007516d8, 00751707] [0075170b, 0075171d]]


void FUN_00751210(int param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  code *pcVar6;
  undefined4 *puVar7;
  int iVar8;
  uint local_58 [4];
  undefined4 local_48;
  uint local_44;
  uint local_3c [4];
  undefined4 local_2c;
  uint local_28;
  undefined4 local_20;
  int local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b8a090;
  local_10 = ExceptionList;
  if (*(int *)(*(int *)(param_1 + 0xdc) + 0x164) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = **(int **)(*(int *)(param_1 + 0xdc) + 0x15c);
  }
  iVar3 = 0;
  piVar5 = (int *)(iVar4 + 0x98);
  do {
    if (*piVar5 == *(int *)(DAT_012588e8 + 0xb60)) {
      iVar4 = *(int *)(iVar4 + 0x9c + iVar3 * 0x1c);
      goto LAB_0075126f;
    }
    iVar3 = iVar3 + 1;
    piVar5 = piVar5 + 7;
  } while (iVar3 < 4);
  iVar4 = 0;
LAB_0075126f:
  iVar3 = *(int *)(*(int *)(DAT_012588e8 + 0xcf8) + 8);
  if (iVar3 == 0) {
LAB_007512b7:
    bVar1 = false;
  }
  else {
    if (*(int *)(*(int *)(param_1 + 0xdc) + 0x164) == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = **(int **)(*(int *)(param_1 + 0xdc) + 0x15c);
    }
    if (iVar8 != *(int *)(iVar3 + 0xc)) goto LAB_007512b7;
    bVar1 = true;
  }
  ExceptionList = &local_10;
  if ((0 < iVar4) && (ExceptionList = &local_10, !bVar1)) {
    local_20 = *(undefined4 *)(DAT_012588e8 + 0xb5c);
    ExceptionList = &local_10;
    cVar2 = FUN_005395a0(*(undefined4 *)
                          (*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4));
    if (cVar2 == '\0') {
      bVar1 = true;
      goto LAB_007512e8;
    }
  }
  bVar1 = false;
LAB_007512e8:
  local_28 = 0xf;
  local_2c = 0;
  local_3c[0] = local_3c[0] & 0xffffff00;
  FUN_00409350("withdraw_button",0xf);
  local_8 = 0;
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0xd8) + 0x34))(local_3c);
  if (bVar1) {
    pcVar6 = *(code **)(*piVar5 + 0xb8);
  }
  else {
    pcVar6 = *(code **)(*piVar5 + 0xbc);
  }
  (*pcVar6)();
  local_8 = 0xffffffff;
  if (0xf < local_28) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_3c[0]);
  }
  local_28 = 0xf;
  local_2c = 0;
  local_3c[0] = local_3c[0] & 0xffffff00;
  FUN_00409350("colonize_button",0xf);
  local_8 = 1;
  cVar2 = FUN_004cd4c0();
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0xd8) + 0x34))(local_3c);
  if (cVar2 == '\0') {
    pcVar6 = *(code **)(*piVar5 + 0xbc);
  }
  else {
    pcVar6 = *(code **)(*piVar5 + 0xb8);
  }
  (*pcVar6)();
  local_8 = 0xffffffff;
  if (0xf < local_28) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_3c[0]);
  }
  local_28 = 0xf;
  local_2c = 0;
  local_3c[0] = local_3c[0] & 0xffffff00;
  FUN_00409350("colonist_list",0xd);
  local_8 = 2;
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0xd8) + 0x7c))(local_3c);
  iVar4 = (**(code **)(*piVar5 + 0x2c))();
  local_18 = *(uint *)(iVar4 + 8);
  local_8 = 0xffffffff;
  if (0xf < local_28) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_3c[0]);
  }
  local_28 = 0xf;
  iVar4 = *(int *)(param_1 + 0xdc);
  iVar3 = 0;
  local_2c = 0;
  local_3c[0] = local_3c[0] & 0xffffff00;
  if (*(int *)(iVar4 + 0x164) == 0) {
    iVar8 = 0;
  }
  else {
    iVar8 = **(int **)(iVar4 + 0x15c);
  }
  local_14 = (uint)(*(int *)(iVar8 + 0x98) != 0);
  if (*(int *)(iVar8 + 0xb4) != 0) {
    local_14 = local_14 + 1;
  }
  if (*(int *)(iVar8 + 0xd0) != 0) {
    local_14 = local_14 + 1;
  }
  if (*(int *)(iVar8 + 0xec) != 0) {
    local_14 = local_14 + 1;
  }
  if (*(int *)(iVar4 + 0x164) == 0) {
    iVar8 = 0;
  }
  else {
    iVar8 = **(int **)(iVar4 + 0x15c);
  }
  local_1c = *(int *)(iVar8 + 0x80);
  if (*(int *)(iVar4 + 0x164) != 0) {
    iVar3 = **(int **)(iVar4 + 0x15c);
  }
  iVar4 = 0;
  piVar5 = (int *)(iVar3 + 0x98);
  do {
    if (*piVar5 == *(int *)(DAT_012588e8 + 0xb60)) {
      if (*(int *)(iVar3 + 0x9c + iVar4 * 0x1c) != 0) goto LAB_00751535;
      break;
    }
    iVar4 = iVar4 + 1;
    piVar5 = piVar5 + 7;
  } while (iVar4 < 4);
  if (((local_1c != 3) && (local_1c != 2)) && (cVar2 = FUN_004cb190(), cVar2 == '\0')) {
    local_18 = local_18 - 1;
  }
LAB_00751535:
  if (local_18 == local_14) {
    local_28 = 0xf;
    local_2c = 0;
    local_3c[0] = local_3c[0] & 0xffffff00;
    FUN_00409350("colonist_list",0xd);
    local_8 = 3;
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0xd8) + 0x7c))(local_3c);
    puVar7 = (undefined4 *)(**(code **)(*piVar5 + 0x2c))();
    piVar5 = (int *)*puVar7;
    local_8 = 0xffffffff;
    if (0xf < local_28) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_3c[0]);
    }
    local_28 = 0xf;
    local_2c = 0;
    local_3c[0] = local_3c[0] & 0xffffff00;
    do {
      if (piVar5 == (int *)0x0) goto LAB_00751611;
      iVar4 = *piVar5;
      piVar5 = (int *)piVar5[2];
      if (*(int *)(*(int *)(param_1 + 0xdc) + 0x164) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = **(int **)(*(int *)(param_1 + 0xdc) + 0x15c);
      }
      if (*(int *)(*(int *)(iVar4 + 0x30) + 0x164) == 0) {
        iVar8 = 0;
      }
      else {
        iVar8 = **(int **)(*(int *)(iVar4 + 0x30) + 0x15c);
      }
    } while ((iVar3 == iVar8) && (iVar3 = FUN_0073b6f0(iVar4), *(int *)(iVar4 + 0x38) == iVar3));
  }
  FUN_00750f90(param_1);
  FUN_00750d90();
  local_28 = 0xf;
  local_2c = 0;
  local_3c[0] = local_3c[0] & 0xffffff00;
  FUN_00409350("province_view",0xd);
  local_8 = 4;
  (**(code **)(*(int *)(*(int *)(param_1 + 0xd8) + 0x18) + 0x78))(local_3c);
  local_8 = 0xffffffff;
  if (0xf < local_28) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_3c[0]);
  }
LAB_00751611:
  local_44 = 0xf;
  local_48 = 0;
  local_58[0] = local_58[0] & 0xffffff00;
  FUN_00409350("crisis_temperature",0x12);
  local_8 = 5;
  iVar4 = (**(code **)(**(int **)(param_1 + 0xd8) + 0x44))(local_58);
  if (*(int *)(*(int *)(param_1 + 0xdc) + 0x164) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = **(int **)(*(int *)(param_1 + 0xdc) + 0x15c);
  }
  (**(code **)(**(int **)(iVar4 + 0x94) + 0x60))(*(int *)(iVar3 + 0x88) / 1000);
  if (local_44 < 0x10) {
    ExceptionList = local_10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_58[0]);
}

