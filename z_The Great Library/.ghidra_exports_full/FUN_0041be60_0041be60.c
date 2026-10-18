// FUN_0041be60 @ 0041be60 body=[[0041be60, 0041bf96] [0041bf9a, 0041bfb5] [0041bfb9, 0041bfcf] [0041bfd3, 0041c049] [0041c04d, 0041c068] [0041c06c, 0041c082] [0041c086, 0041c09c] [0041c0a0, 0041c0b6]]


undefined1 * FUN_0041be60(undefined1 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  bool bVar4;
  uint local_84 [4];
  undefined4 local_74;
  uint local_70;
  uint local_68;
  undefined4 local_58;
  uint local_54;
  uint local_4c [4];
  undefined4 local_3c;
  uint local_38;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b4dbc9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x18) = 0xf;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[4] = 0;
  local_8 = 0;
  piVar3 = (int *)*param_2;
  local_14 = 1;
  if ((param_2[1] - (int)piVar3) / 0x1c < 1) {
    *param_1 = 0;
    FUN_00409350("Please specify province id.",0x1b);
    ExceptionList = local_10;
    return param_1;
  }
  if (0xf < (uint)piVar3[5]) {
    piVar3 = (int *)*piVar3;
  }
  iVar1 = FUN_00aaf0c5(piVar3);
  piVar3 = *(int **)(*(int *)(DAT_012588e8 + 0xacc) + iVar1 * 4);
  bVar4 = (char)piVar3[0x5c] == '\0';
  local_1c = 0xf;
  *(bool *)(piVar3 + 0x5c) = bVar4;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  if (bVar4) {
    FUN_00409350(" is now BLOCKED.",0x10);
    local_8 = 1;
    uVar2 = (**(code **)(*piVar3 + 0x1c))(local_84);
    local_8._0_1_ = 2;
    FUN_00988fa0(uVar2);
    local_8._0_1_ = 3;
    uVar2 = FUN_00988f20(local_30);
    local_8 = CONCAT31(local_8._1_3_,4);
    FUN_00408ed0(uVar2,0,0xffffffff);
    if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_4c[0]);
    }
    local_38 = 0xf;
    local_3c = 0;
    local_4c[0] = local_4c[0] & 0xffffff00;
    if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_68);
    }
    local_54 = 0xf;
    local_58 = 0;
    local_68 = local_68 & 0xffffff00;
    if (0xf < local_70) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_84[0]);
    }
    local_84[0] = local_84[0] & 0xffffff00;
  }
  else {
    FUN_00409350(" is now UNBLOCKED.",0x12);
    local_8 = 5;
    uVar2 = (**(code **)(*piVar3 + 0x1c))(local_4c);
    local_8._0_1_ = 6;
    FUN_00988fa0(uVar2);
    local_8._0_1_ = 7;
    uVar2 = FUN_00988f20(local_30);
    local_8 = CONCAT31(local_8._1_3_,8);
    FUN_00408ed0(uVar2,0,0xffffffff);
    if (0xf < local_70) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_84[0]);
    }
    local_70 = 0xf;
    local_74 = 0;
    local_84[0] = local_84[0] & 0xffffff00;
    if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_68);
    }
    local_54 = 0xf;
    local_58 = 0;
    local_68 = local_68 & 0xffffff00;
    if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_4c[0]);
    }
    local_4c[0] = local_4c[0] & 0xffffff00;
  }
  local_38 = 0xf;
  local_3c = 0;
  local_54 = 0xf;
  local_58 = 0;
  local_70 = 0xf;
  local_74 = 0;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  *param_1 = 1;
  ExceptionList = local_10;
  return param_1;
}

