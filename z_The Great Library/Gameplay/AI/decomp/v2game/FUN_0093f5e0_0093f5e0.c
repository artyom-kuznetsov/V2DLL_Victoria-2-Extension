// FUN_0093f5e0 @ 0093f5e0 body=[[0093f5e0, 0093f6bf] [0093f6c3, 0093f6dd] [0093f6e1, 0093f6fb] [0093f6ff, 0093f71c] [0093f720, 0093f73d] [0093f740, 0093f79f] [0093f7a3, 0093f7f2]]


undefined1 * FUN_0093f5e0(int param_1,undefined1 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  uint local_a0 [4];
  undefined4 local_90;
  uint local_8c;
  uint local_84;
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
  uint local_8;
  
  puStack_c = &LAB_00b83864;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_2 + 0x14) = 0xf;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *param_2 = 0;
  *(undefined4 *)(param_2 + 0x30) = 0xf;
  *(undefined4 *)(param_2 + 0x2c) = 0;
  param_2[0x1c] = 0;
  *(undefined4 *)(param_2 + 0x4c) = 0xf;
  *(undefined4 *)(param_2 + 0x48) = 0;
  param_2[0x38] = 0;
  *(undefined4 *)(param_2 + 0x54) = 0;
  param_2[0x58] = 1;
  local_8 = 0;
  local_14 = 1;
  if (*(int *)(param_1 + 0x84) != 0) {
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    FUN_00409350(&DAT_00e35220,4);
    local_8 = 1;
    uVar3 = FUN_0055dd40();
    local_8._0_1_ = 2;
    FUN_00988fa0(uVar3);
    local_8._0_1_ = 3;
    uVar3 = FUN_00988f20(local_30);
    local_8._0_1_ = 4;
    FUN_00448aa0(uVar3,0,0xffffffff);
    if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_4c);
    }
    local_38 = 0xf;
    local_3c = 0;
    local_4c = local_4c & 0xffffff00;
    if (0xf < local_70) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_84);
    }
    local_70 = 0xf;
    local_74 = 0;
    local_84 = local_84 & 0xffffff00;
    if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_68);
    }
    local_8 = (uint)local_8._1_3_ << 8;
    local_54 = 0xf;
    local_58 = 0;
    local_68 = local_68 & 0xffffff00;
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_30[0]);
    }
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
  }
  iVar1 = *(int *)(param_1 + 0x2c);
  piVar4 = *(int **)(iVar1 + 0x48);
  while ((*(int **)(iVar1 + 0x48) <= piVar4 && (piVar4 < *(int **)(iVar1 + 0x4c)))) {
    iVar2 = *piVar4;
    piVar4 = piVar4 + 1;
    uVar3 = (**(code **)(**(int **)(*(int *)(DAT_012588e8 + 0xacc) + iVar2 * 4) + 0x1c))(local_a0);
    local_8 = 5;
    FUN_00448aa0(uVar3,0,0xffffffff);
    local_8 = local_8 & 0xffffff00;
    if (0xf < local_8c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_a0[0]);
    }
    local_8c = 0xf;
    local_90 = 0;
    local_a0[0] = local_a0[0] & 0xffffff00;
    if ((*(int **)(iVar1 + 0x48) <= piVar4) && (piVar4 < *(int **)(iVar1 + 0x4c))) {
      FUN_00448740(&DAT_00dee2cc,1);
    }
  }
  ExceptionList = local_10;
  return param_2;
}

