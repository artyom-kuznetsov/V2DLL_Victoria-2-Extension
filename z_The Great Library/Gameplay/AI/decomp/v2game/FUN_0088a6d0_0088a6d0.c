// FUN_0088a6d0 @ 0088a6d0 body=[[0088a6d0, 0088a807] [0088a80b, 0088a836] [0088a83a, 0088a883] [0088a887, 0088a90a] [0088a90e, 0088a939] [0088a93d, 0088a998] [0088a9a1, 0088aa3f] [0088aa43, 0088aa6e] [0088aa72, 0088aad0] [0088aad4, 0088aae6] [0088aaea, 0088aafe]]


undefined1 * FUN_0088a6d0(undefined1 *param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  uint in_stack_00000024;
  undefined4 in_stack_0000002c;
  undefined1 local_b8 [8];
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_5c;
  undefined4 local_58;
  uint local_54;
  undefined4 local_44;
  uint local_40;
  uint local_38 [4];
  undefined4 local_28;
  uint local_24;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b69447;
  local_10 = ExceptionList;
  local_8 = 1;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  local_58 = 1;
  FUN_008a88d0();
  local_1c = 0x2d2d2d;
  local_a0 = 0;
  local_b0 = 0x2d2d2d;
  local_ac = 0;
  local_a8 = 0;
  if (*(int *)(param_2 + 0xc) != 0) {
    if ((*(int *)(local_14 + 0x2c) - *(int *)(local_14 + 0x28) & 0xfffffffcU) == 0) {
      local_1c = *(undefined4 *)(param_2 + 8);
      if (*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_2 + 0xc) * 4) + 0x9f8) != 0)
      {
        local_40 = 0xf;
        local_44 = 0;
        local_54 = (uint)local_54._1_3_ << 8;
        FUN_00409350();
        local_8._0_1_ = 10;
        FUN_009a8ee0();
        local_8._0_1_ = 0xb;
        FUN_00475500();
        FUN_009a9880();
        local_8._0_1_ = 0xc;
        FUN_00448aa0();
        if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_24 = 0xf;
        local_28 = 0;
        local_38[0] = local_38[0] & 0xffffff00;
        local_8._0_1_ = 10;
        FUN_009a9740();
        local_8._0_1_ = 1;
        if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_a8 = 0;
        FUN_00408ed0(&param_4,0,0xffffffff);
        FUN_0087a6c0(local_38,local_b8,param_3 + 1);
        local_8 = CONCAT31(local_8._1_3_,0xd);
        FUN_00448aa0();
        if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
      }
    }
    else {
      local_1c = *(undefined4 *)(param_2 + 8);
      puVar1 = *(undefined4 **)
                (*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_2 + 0xc) * 4) + 0x9f8);
      if (puVar1 != (undefined4 *)0x0) {
        local_18 = *puVar1;
        local_40 = 0xf;
        local_44 = 0;
        local_54 = (uint)local_54._1_3_ << 8;
        FUN_00409350();
        local_8._0_1_ = 2;
        local_5c = FUN_009a8ee0();
        local_8._0_1_ = 3;
        FUN_00475500();
        FUN_009a9880();
        local_8._0_1_ = 4;
        FUN_00448aa0();
        if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_24 = 0xf;
        local_28 = 0;
        local_38[0] = local_38[0] & 0xffffff00;
        local_8._0_1_ = 2;
        FUN_009a9740();
        local_8._0_1_ = 1;
        if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_a8 = local_18;
        (**(code **)(*(int *)(local_14 + 0x20) + 0x2c))();
        local_8._0_1_ = 5;
        FUN_00448aa0();
        local_8._0_1_ = 1;
        if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_a8 = 0;
        local_40 = 0xf;
        local_44 = 0;
        local_54 = local_54 & 0xffffff00;
        FUN_00409350();
        local_8._0_1_ = 6;
        FUN_009a8ee0();
        local_8._0_1_ = 7;
        FUN_00475500();
        FUN_009a9880();
        local_8._0_1_ = 8;
        FUN_00448aa0();
        if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_24 = 0xf;
        local_28 = 0;
        local_38[0] = local_38[0] & 0xffffff00;
        local_8._0_1_ = 6;
        FUN_009a9740();
        local_8._0_1_ = 1;
        if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        FUN_00408ed0(&param_4,0,0xffffffff);
        FUN_0087a6c0(local_38,local_b8,param_3 + 1);
        local_8 = CONCAT31(local_8._1_3_,9);
        FUN_00448aa0();
        if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
      }
    }
  }
  if (in_stack_00000024 < 0x10) {
    ExceptionList = local_10;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

