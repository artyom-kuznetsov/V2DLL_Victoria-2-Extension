// FUN_0088daf0 @ 0088daf0 body=[[0088daf0, 0088db7a] [0088db7e, 0088dbd3] [0088dbd7, 0088dbf1] [0088dbf5, 0088dc3e] [0088dc42, 0088dc5c] [0088dc60, 0088dcb5] [0088dcb9, 0088dcd3] [0088dcd7, 0088dd22] [0088dd26, 0088dd65] [0088dd69, 0088dd7d]]


undefined1 * FUN_0088daf0(undefined1 *param_1,int param_2)

{
  int iVar1;
  uint in_stack_00000020;
  uint local_84 [4];
  undefined4 local_74;
  uint local_70;
  uint local_68;
  undefined4 local_58;
  uint local_54;
  uint local_4c;
  undefined4 local_3c;
  uint local_38;
  undefined1 local_30 [4];
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b87a62;
  local_10 = ExceptionList;
  local_18 = 0;
  local_8 = 0;
  ExceptionList = &local_10;
  FUN_0088dd80();
  if ((local_18 == 0) || (*(int *)(param_2 + 0xc) == 0)) {
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *param_1 = 0;
    FUN_00409350(&DAT_00ded94d);
  }
  else {
    local_38 = 0xf;
    local_3c = 0;
    local_4c = local_4c & 0xffffff00;
    FUN_00409350("MODIFY_RELATION_EFFECT");
    local_8._0_1_ = 1;
    FUN_009a8ee0(local_30);
    local_8._0_1_ = 3;
    if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_38 = 0xf;
    local_3c = 0;
    local_4c = local_4c & 0xffffff00;
    local_54 = 0xf;
    local_58 = 0;
    local_68 = local_68 & 0xffffff00;
    FUN_00409350("SOURCE");
    local_8._0_1_ = 4;
    FUN_0055dd40();
    local_8._0_1_ = 5;
    FUN_009a9980();
    if (0xf < local_70) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 3;
    local_70 = 0xf;
    local_74 = 0;
    local_84[0] = local_84[0] & 0xffffff00;
    if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_54 = 0xf;
    local_58 = 0;
    local_68 = local_68 & 0xffffff00;
    FUN_00409350("TARGET");
    local_8._0_1_ = 6;
    FUN_0055dd40();
    local_8._0_1_ = 7;
    FUN_009a9980();
    if (0xf < local_70) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 3;
    local_70 = 0xf;
    local_74 = 0;
    local_84[0] = local_84[0] & 0xffffff00;
    if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_54 = 0xf;
    local_58 = 0;
    local_68 = local_68 & 0xffffff00;
    FUN_00409350("VALUE");
    local_8._0_1_ = 8;
    FUN_00988970(local_84);
    local_8._0_1_ = 9;
    FUN_009a9980();
    if (0xf < local_70) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 3;
    local_70 = 0xf;
    local_74 = 0;
    local_84[0] = local_84[0] & 0xffffff00;
    if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    iVar1 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
    local_8 = CONCAT31(local_8._1_3_,10);
    FUN_009adb70();
    if (local_2c != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_2c = 0;
    local_28 = 0;
    local_24 = 0;
  }
  if (0xf < in_stack_00000020) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_1;
}

