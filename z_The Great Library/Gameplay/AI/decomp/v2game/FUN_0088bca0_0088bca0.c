// FUN_0088bca0 @ 0088bca0 body=[[0088bca0, 0088bd48] [0088bd4c, 0088be35] [0088be39, 0088be63] [0088be67, 0088be8c] [0088be90, 0088beaf] [0088beb3, 0088becd] [0088bed1, 0088bf1c] [0088bf20, 0088bf5f] [0088bf63, 0088bf77]]


/* WARNING: Removing unreachable block (ram,0x0088bec5) */

undefined1 * FUN_0088bca0(undefined1 *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  uint in_stack_00000020;
  uint local_c0;
  uint local_a4;
  uint local_88;
  uint local_64 [4];
  undefined4 local_54;
  uint local_50;
  uint local_48 [4];
  undefined4 local_38;
  uint local_34;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_24 [4];
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b87ace;
  local_10 = ExceptionList;
  local_28 = 0;
  local_8 = 0;
  local_2c = *(undefined4 *)(param_2 + 8);
  param_2 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_2 + 0xc) * 4);
  ExceptionList = &local_10;
  iVar1 = FUN_008852b0();
  if (*(int *)(*(int *)(*(int *)(param_2 + 0xbe8) + *(int *)(iVar1 + 4) * 4) + 0x20) == 0) {
    local_50 = 0xf;
    local_54 = 0;
    local_64[0] = local_64[0] & 0xffffff00;
    FUN_00409350("ALLIANCE_EFFECT",0xf);
    local_8._0_1_ = 1;
    FUN_009a8ee0(local_24,local_64);
    local_8._0_1_ = 3;
    if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_50 = 0xf;
    local_54 = 0;
    local_64[0] = local_64[0] & 0xffffff00;
    FUN_00409350(&DAT_00df8514,2);
    local_8._0_1_ = 4;
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    FUN_00409350(&DAT_00e156c4,3);
    local_8._0_1_ = 5;
    FUN_008852b0();
    FUN_0055dd40();
    local_8._0_1_ = 6;
    FUN_00988fa0();
    local_8._0_1_ = 7;
    FUN_00988f20();
    local_8._0_1_ = 8;
    param_2 = FUN_00aae9af();
    local_8._0_1_ = 9;
    if (param_2 == 0) {
      param_2 = 0;
    }
    else {
      param_2 = FUN_009a9ce0();
    }
    local_8._0_1_ = 8;
    FUN_009e6810(local_48,&param_2);
    if (0xf < local_88) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_a4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_c0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 3;
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    iVar1 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
    local_8 = CONCAT31(local_8._1_3_,10);
    FUN_009adb70();
    if (local_20 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *param_1 = 0;
    FUN_00409350(&DAT_00ded94d,0);
  }
  if (0xf < in_stack_00000020) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_1;
}

