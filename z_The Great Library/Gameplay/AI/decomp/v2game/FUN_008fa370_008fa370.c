// FUN_008fa370 @ 008fa370 body=[[008fa370, 008fa4f1] [008fa4f5, 008fa51f] [008fa523, 008fa542] [008fa546, 008fa55c] [008fa560, 008fa580] [008fa584, 008fa5ef] [008fa5f3, 008fa60a] [008fa60e, 008fa63a] [008fa63e, 008fa655] [008fa659, 008fa66d]]


/* WARNING: Removing unreachable block (ram,0x008fa575) */

undefined4 FUN_008fa370(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int in_ECX;
  uint local_c4;
  uint local_a8;
  uint local_84 [4];
  undefined4 local_74;
  uint local_70;
  uint local_68;
  undefined4 local_58;
  uint local_54;
  undefined4 local_4c;
  undefined1 local_48 [4];
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_34;
  undefined4 local_30;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b853ff;
  local_10 = ExceptionList;
  local_4c = 0;
  if (*(char *)(in_ECX + 0x18) == '\0') {
    if (*(char *)(in_ECX + 0x19) == '\0') {
      local_34 = *(undefined4 *)(in_ECX + 0x1c);
      local_30 = *(undefined4 *)(in_ECX + 0x20);
      ExceptionList = &local_10;
    }
    else {
      local_34 = *(undefined4 *)(*(int *)(param_2 + 0x24) + 0x2c);
      local_30 = *(undefined4 *)(*(int *)(param_2 + 0x24) + 0x30);
      ExceptionList = &local_10;
    }
  }
  else {
    ExceptionList = &local_10;
    FUN_008a8dc0();
  }
  local_70 = 0xf;
  local_74 = 0;
  local_84[0] = local_84[0] & 0xffffff00;
  FUN_00409350("IS_SPHERELEADER_OF",0x12);
  local_8 = 1;
  if ((char)param_3 != '\0') {
    FUN_00409350("IS_NOT_SPHERELEADER_OF",0x16);
  }
  FUN_009a8ee0(local_48,local_84);
  local_8._0_1_ = 2;
  FUN_00409350(&DAT_00df8514,2);
  local_8._0_1_ = 3;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350(&DAT_00dfa9e0,3);
  local_8._0_1_ = 4;
  FUN_0055dd40();
  local_8._0_1_ = 5;
  FUN_00988fa0();
  local_8._0_1_ = 6;
  FUN_00988f20();
  local_8._0_1_ = 7;
  param_3 = FUN_00aae9af();
  local_8._0_1_ = 8;
  if (param_3 == 0) {
    param_3 = 0;
  }
  else {
    param_3 = FUN_009a9ce0();
  }
  local_8._0_1_ = 7;
  FUN_009e6810(local_2c,&param_3);
  if (0xf < local_c4) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if (0xf < local_a8) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_54 = 0xf;
  local_58 = 0;
  local_68 = local_68 & 0xffffff00;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 2;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350(&DAT_00dee2cc,1);
  local_8._0_1_ = 9;
  iVar1 = FUN_00475500();
  FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
  local_8._0_1_ = 10;
  FUN_00988f20();
  local_4c = 1;
  if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_54 = 0xf;
  local_58 = 0;
  local_68 = local_68 & 0xffffff00;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  local_8 = CONCAT31(local_8._1_3_,0xb);
  FUN_009adb70();
  if (local_44 == 0) {
    local_44 = 0;
    local_40 = 0;
    local_3c = 0;
    if (local_70 < 0x10) {
      ExceptionList = local_10;
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

