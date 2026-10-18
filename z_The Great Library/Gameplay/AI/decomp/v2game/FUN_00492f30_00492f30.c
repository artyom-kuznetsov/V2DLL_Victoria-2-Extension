// FUN_00492f30 @ 00492f30 body=[[00492f30, 00492ff2] [00492ff6, 00493010] [00493014, 0049302e] [00493032, 0049304c] [00493050, 00493064]]


undefined4 FUN_00492f30(undefined4 param_1)

{
  undefined4 uVar1;
  int in_ECX;
  uint local_84 [4];
  undefined4 local_74;
  uint local_70;
  uint local_68;
  undefined4 local_58;
  uint local_54;
  uint local_4c;
  undefined4 local_3c;
  uint local_38;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b4d099;
  local_10 = ExceptionList;
  local_8 = 0;
  local_14 = 0;
  ExceptionList = &local_10;
  (**(code **)(**(int **)(in_ECX + 0x58) + 0x18))(param_1);
  local_8 = 0;
  local_14 = 1;
  if (*(int *)(in_ECX + 0x48) != 0) {
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    FUN_00409350(&DAT_00defdfc,1);
    local_8 = 1;
    uVar1 = (**(code **)(**(int **)(in_ECX + 0x48) + 0x1c))(local_84);
    local_8._0_1_ = 2;
    FUN_00988fa0(uVar1);
    local_8._0_1_ = 3;
    uVar1 = FUN_00988f20(local_30);
    local_8 = CONCAT31(local_8._1_3_,4);
    FUN_00448aa0(uVar1,0,0xffffffff);
    if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_4c);
    }
    local_38 = 0xf;
    local_3c = 0;
    local_4c = local_4c & 0xffffff00;
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
    local_70 = 0xf;
    local_74 = 0;
    local_84[0] = local_84[0] & 0xffffff00;
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_30[0]);
    }
  }
  ExceptionList = local_10;
  return param_1;
}

