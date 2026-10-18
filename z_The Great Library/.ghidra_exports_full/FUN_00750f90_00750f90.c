// FUN_00750f90 @ 00750f90 body=[[00750f90, 00750ffb] [00750fff, 00751058] [00751060, 007511f3] [007511f7, 00751209]]


void FUN_00750f90(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  byte bVar8;
  uint local_58 [4];
  undefined4 local_48;
  uint local_44;
  uint local_3c [4];
  undefined4 local_2c;
  uint local_28;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b52db6;
  local_10 = ExceptionList;
  local_28 = 0xf;
  local_2c = 0;
  local_3c[0] = local_3c[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("colonist_list",0xd);
  local_8 = 0;
  piVar2 = (int *)(**(code **)(**(int **)(param_1 + 0xd8) + 0x7c))(local_3c);
  local_8 = 0xffffffff;
  if (0xf < local_28) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_3c[0]);
  }
  local_28 = 0xf;
  local_2c = 0;
  local_3c[0] = local_3c[0] & 0xffffff00;
  (**(code **)(*piVar2 + 0x54))();
  (**(code **)(*piVar2 + 0x5c))();
  if (*(int *)(*(int *)(param_1 + 0xdc) + 0x164) == 0) {
    local_14 = 0;
  }
  else {
    local_14 = **(int **)(*(int *)(param_1 + 0xdc) + 0x15c);
  }
  local_1c = *DAT_012587e4;
  local_18 = 0;
  iVar4 = local_14;
  if (0 < local_1c) {
    do {
      iVar7 = *(int *)(*(int *)(DAT_012588e8 + 0xadc) + local_18 * 4);
      iVar1 = *(int *)(iVar7 + 0x20);
      if (iVar1 != 0) {
        iVar3 = 0;
        piVar6 = (int *)(iVar4 + 0x98);
        do {
          if ((*piVar6 != 0) && (*piVar6 == iVar1)) {
            local_20 = FUN_00aae9af(0x3c);
            local_8 = 1;
            if (local_20 == 0) {
              uVar5 = 0;
            }
            else {
              uVar5 = FUN_0073b4e0(local_20,iVar7 + 0x1c,*(undefined4 *)(param_1 + 0xdc));
            }
            local_8 = 0xffffffff;
            (**(code **)(*piVar2 + 0x10))(uVar5,1);
            iVar4 = local_14;
            break;
          }
          iVar3 = iVar3 + 1;
          piVar6 = piVar6 + 7;
          iVar4 = local_14;
        } while (iVar3 < 4);
      }
      local_18 = local_18 + 1;
    } while (local_18 < local_1c);
  }
  piVar6 = (int *)(iVar4 + 0x98);
  iVar7 = DAT_012588e8 + 0xb5c;
  bVar8 = *piVar6 != 0;
  if (*(int *)(iVar4 + 0xb4) != 0) {
    bVar8 = bVar8 + 1;
  }
  if (*(int *)(iVar4 + 0xd0) != 0) {
    bVar8 = bVar8 + 1;
  }
  if (*(int *)(iVar4 + 0xec) != 0) {
    bVar8 = bVar8 + 1;
  }
  if (bVar8 < 4) {
    iVar4 = 0;
    do {
      if ((*piVar6 != 0) && (*piVar6 == *(int *)(DAT_012588e8 + 0xb60))) goto LAB_007511a9;
      iVar4 = iVar4 + 1;
      piVar6 = piVar6 + 7;
    } while (iVar4 < 4);
    if ((*(int *)(local_14 + 0x80) != 3) && (*(int *)(local_14 + 0x80) != 2)) {
      local_20 = FUN_00aae9af(0x3c);
      local_8 = 2;
      if (local_20 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_0073b4e0(local_20,iVar7,*(undefined4 *)(param_1 + 0xdc));
      }
      local_8 = 0xffffffff;
      (**(code **)(*piVar2 + 0x10))(uVar5,1);
    }
  }
LAB_007511a9:
  (**(code **)(*piVar2 + 0x50))();
  local_44 = 0xf;
  local_48 = 0;
  local_58[0] = local_58[0] & 0xffffff00;
  FUN_00409350("province_view",0xd);
  local_8 = 3;
  (**(code **)(piVar2[1] + 0x78))(local_58);
  if (0xf < local_44) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_58[0]);
  }
  ExceptionList = local_10;
  return;
}

