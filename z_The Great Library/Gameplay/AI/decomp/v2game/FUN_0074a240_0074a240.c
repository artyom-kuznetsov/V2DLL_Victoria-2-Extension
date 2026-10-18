// FUN_0074a240 @ 0074a240 body=[[0074a240, 0074a2b1] [0074a2b5, 0074a305] [0074a309, 0074a35f] [0074a363, 0074a41e] [0074a422, 0074a47d] [0074a481, 0074a4c9] [0074a4cd, 0074a51e] [0074a525, 0074a5c8] [0074a5cc, 0074a61d] [0074a624, 0074a69b]]


void FUN_0074a240(void)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int unaff_EDI;
  uint local_6c [4];
  undefined4 local_5c;
  uint local_58;
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4ba53;
  local_10 = ExceptionList;
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("send_diplomat",0xd);
  local_8 = 0;
  iVar1 = (**(code **)(**(int **)(unaff_EDI + 0x130) + 0x34))(local_50);
  (**(code **)(*(int *)(iVar1 + 0x54) + 4))();
  local_8 = 0xffffffff;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50[0]);
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  FUN_00409350("country_flag",0xc);
  local_8 = 1;
  iVar1 = (**(code **)(**(int **)(unaff_EDI + 0x130) + 0x34))(local_50);
  (**(code **)(*(int *)(iVar1 + 0x54) + 4))();
  local_8 = 0xffffffff;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50[0]);
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  FUN_00409350("invest_build_infra",0x12);
  local_8 = 2;
  iVar1 = (**(code **)(**(int **)(unaff_EDI + 0x130) + 0x34))(local_50);
  (**(code **)(*(int *)(iVar1 + 0x54) + 4))(unaff_EDI + 0xd8);
  local_8 = 0xffffffff;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50[0]);
  }
  if (DAT_0125ce80 == 0) {
    local_18 = FUN_00aae9af(0x3c);
    local_8 = 3;
    if (local_18 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_004dada0();
    }
    local_8 = 0xffffffff;
    FUN_004dc340(uVar2);
  }
  piVar3 = *(int **)(DAT_0125ce80 + 0x1c);
  iVar1 = *(int *)(DAT_0125ce80 + 0x20) - (int)piVar3 >> 2;
  iVar4 = 0;
  if (0 < iVar1) {
    do {
      if (*(int *)(*piVar3 + 0x10) == 2) {
        if (-1 < iVar4) {
          local_3c = 0xf;
          local_40 = 0;
          local_50[0] = local_50[0] & 0xffffff00;
          FUN_00409350("invest_build_infra",0x12);
          local_8 = 4;
          piVar3 = (int *)(**(code **)(**(int **)(unaff_EDI + 0x130) + 0x34))(local_50);
          (**(code **)(*piVar3 + 0xd4))(iVar4);
          local_8 = 0xffffffff;
          if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_50[0]);
          }
        }
        break;
      }
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar4 < iVar1);
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  FUN_00409350("invest_factory_button",0x15);
  local_8 = 5;
  iVar1 = (**(code **)(**(int **)(unaff_EDI + 0x130) + 0x34))(local_50);
  (**(code **)(*(int *)(iVar1 + 0x54) + 4))(unaff_EDI + 0x104);
  local_8 = 0xffffffff;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50[0]);
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  FUN_00409350("rallypoint_checkbox",0x13);
  local_8 = 6;
  local_18 = (**(code **)(**(int **)(unaff_EDI + 0x130) + 0x48))(local_34);
  local_8 = 0xffffffff;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  FUN_00409350("rallypoint_merge_checkbox",0x19);
  local_8 = 7;
  local_14 = (**(code **)(**(int **)(unaff_EDI + 0x130) + 0x48))(local_50);
  local_8 = 0xffffffff;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50[0]);
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  if (local_18 != 0) {
    if ((*(char *)(local_18 + 0xe4) == '\0') || (*(char *)(local_18 + 0x142) != '\0')) {
      *(undefined4 *)(local_18 + 0x6c) = 0;
      *(undefined4 *)(local_18 + 0x10c) = 0;
    }
    (**(code **)(*(int *)(local_18 + 0x54) + 4))(unaff_EDI + 0x58);
  }
  if (local_14 != 0) {
    *(undefined4 *)(local_14 + 0x6c) = 1;
    *(undefined4 *)(local_14 + 0x10c) = 1;
    (**(code **)(*(int *)(local_14 + 0x54) + 4))(unaff_EDI + 0x78);
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  FUN_00409350("rallypoint_checkbox_naval",0x19);
  local_8 = 8;
  local_18 = (**(code **)(**(int **)(unaff_EDI + 0x130) + 0x48))(local_50);
  local_8 = 0xffffffff;
  if (local_3c < 0x10) {
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = local_50[0] & 0xffffff00;
    local_58 = 0xf;
    local_5c = 0;
    local_6c[0] = local_6c[0] & 0xffffff00;
    FUN_00409350("rallypoint_merge_checkbox_naval",0x1f);
    local_8 = 9;
    local_14 = (**(code **)(**(int **)(unaff_EDI + 0x130) + 0x48))(local_6c);
    local_8 = 0xffffffff;
    if (local_58 < 0x10) {
      local_58 = 0xf;
      local_5c = 0;
      local_6c[0] = local_6c[0] & 0xffffff00;
      if (local_18 != 0) {
        if ((*(char *)(local_18 + 0xe4) == '\0') || (*(char *)(local_18 + 0x142) != '\0')) {
          *(undefined4 *)(local_18 + 0x6c) = 0;
          *(undefined4 *)(local_18 + 0x10c) = 0;
        }
        (**(code **)(*(int *)(local_18 + 0x54) + 4))(unaff_EDI + 0x98);
      }
      if (local_14 != 0) {
        *(undefined4 *)(local_14 + 0x6c) = 1;
        *(undefined4 *)(local_14 + 0x10c) = 1;
        (**(code **)(*(int *)(local_14 + 0x54) + 4))(unaff_EDI + 0xb8);
      }
      FUN_0074a6a0();
      ExceptionList = local_10;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_6c[0]);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_50[0]);
}

