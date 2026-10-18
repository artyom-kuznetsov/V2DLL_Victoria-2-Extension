// FUN_00615960 @ 00615960 body=[[00615960, 00615a07] [00615a0b, 00615a38] [00615a3c, 00615ab6] [00615aba, 00615aed] [00615af1, 00615b0c] [00615b10, 00615b86] [00615b8a, 00615bbd] [00615bc1, 00615bdc] [00615be0, 00615c0f]]


undefined4 * FUN_00615960(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  int *in_EDX;
  uint local_64 [4];
  undefined4 local_54;
  uint local_50;
  uint local_48 [4];
  undefined4 local_38;
  uint local_34;
  undefined1 local_2c [4];
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b955bc;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00640680(param_1,param_2);
  local_8 = 0;
  *param_1 = CDiplomacyDialog::vftable;
  iVar1 = (**(code **)(*in_EDX + 0x30))();
  param_1[0x1a] = iVar1;
  param_1[0x1b] = in_EDX;
  local_18 = *(undefined4 *)(iVar1 + 8);
  local_14 = *(undefined4 *)(iVar1 + 0xc);
  FUN_00641630();
  local_18 = *(undefined4 *)(param_1[0x1a] + 0x10);
  local_14 = *(undefined4 *)(param_1[0x1a] + 0x14);
  FUN_006416a0();
  (**(code **)(*in_EDX + 0x1c))(local_64);
  local_8._0_1_ = 1;
  FUN_00641710();
  local_8._0_1_ = 0;
  if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_64[0]);
  }
  (**(code **)(*in_EDX + 0x40))(local_64);
  local_8._0_1_ = 2;
  FUN_006417b0();
  local_8._0_1_ = 0;
  if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  FUN_00409350("PROCEED",7);
  local_8._0_1_ = 3;
  FUN_009a8ee0(local_2c,local_48);
  local_8._0_1_ = 4;
  iVar1 = FUN_00475500();
  FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
  local_8._0_1_ = 5;
  FUN_00641850();
  if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_50 = 0xf;
  local_54 = 0;
  local_64[0] = local_64[0] & 0xffffff00;
  local_8._0_1_ = 6;
  FUN_009adb70();
  if (local_28 != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  FUN_00409350("DECLINE",7);
  local_8._0_1_ = 7;
  FUN_009a8ee0(local_2c,local_48);
  local_8._0_1_ = 8;
  iVar1 = FUN_00475500();
  FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
  local_8._0_1_ = 9;
  FUN_006418f0();
  if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_50 = 0xf;
  local_54 = 0;
  local_64[0] = local_64[0] & 0xffffff00;
  local_8._0_1_ = 10;
  FUN_009adb70();
  if (local_28 != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8 = (uint)local_8._1_3_ << 8;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  (**(code **)(*(int *)param_1[0x1a] + 0x6c))();
  FUN_00641990();
  ExceptionList = local_10;
  return param_1;
}

