// FUN_006186f0 @ 006186f0 body=[[006186f0, 0061875b] [0061875f, 006187ed] [006187f1, 0061886b] [0061886f, 006188a2] [006188a6, 006188c1] [006188c5, 0061893b] [0061893f, 00618972] [00618976, 00618991] [00618995, 00618a1d] [00618a21, 00618a41]]


undefined4 * FUN_006186f0(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *in_ECX;
  undefined4 extraout_ECX;
  undefined4 in_EDX;
  uint local_80 [4];
  undefined4 local_70;
  uint local_6c;
  uint local_64 [4];
  undefined4 local_54;
  uint local_50;
  uint local_48;
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
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b954a4;
  local_10 = ExceptionList;
  local_34 = 0xf;
  local_38 = 0;
  local_48 = local_48 & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350();
  local_8 = 0;
  FUN_00640680();
  local_8._0_1_ = 2;
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48);
  }
  *param_1 = CGunboatDialog::vftable;
  param_1[0x1a] = in_EDX;
  local_34 = 0xf;
  local_38 = 0;
  local_48 = local_48 & 0xffffff00;
  iVar1 = (**(code **)(*in_ECX + 0x30))();
  param_1[0x1b] = iVar1;
  param_1[0x1d] = param_2;
  param_1[0x1c] = in_ECX;
  local_18 = *(undefined4 *)(iVar1 + 8);
  local_14 = *(undefined4 *)(iVar1 + 0xc);
  FUN_00641630();
  local_18 = *(undefined4 *)(param_1[0x1b] + 0x10);
  local_14 = *(undefined4 *)(param_1[0x1b] + 0x14);
  FUN_006416a0();
  (**(code **)(*in_ECX + 0x1c))(local_80);
  local_8._0_1_ = 3;
  FUN_00641710();
  local_8._0_1_ = 2;
  if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_50 = 0xf;
  local_54 = 0;
  local_64[0] = local_64[0] & 0xffffff00;
  FUN_00409350("PROCEED",7);
  local_8._0_1_ = 4;
  FUN_009a8ee0(local_2c,local_64);
  local_8._0_1_ = 5;
  iVar1 = FUN_00475500();
  FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
  local_8._0_1_ = 6;
  FUN_00641850();
  if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_6c = 0xf;
  local_70 = 0;
  local_80[0] = local_80[0] & 0xffffff00;
  local_8._0_1_ = 7;
  FUN_009adb70();
  if (local_28 != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 2;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_50 = 0xf;
  local_54 = 0;
  local_64[0] = local_64[0] & 0xffffff00;
  FUN_00409350("DECLINE",7);
  local_8._0_1_ = 8;
  FUN_009a8ee0(local_2c,local_64);
  local_8._0_1_ = 9;
  iVar1 = FUN_00475500();
  FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
  local_8._0_1_ = 10;
  FUN_006418f0();
  if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_6c = 0xf;
  local_70 = 0;
  local_80[0] = local_80[0] & 0xffffff00;
  local_8._0_1_ = 0xb;
  FUN_009adb70();
  if (local_28 != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 2;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_50 = 0xf;
  local_54 = 0;
  local_64[0] = local_64[0] & 0xffffff00;
  FUN_00409350("repay_slider",0xc);
  local_8._0_1_ = 0xc;
  iVar1 = (**(code **)(*(int *)param_1[1] + 0x4c))();
  FUN_00401000(0x3f000000,extraout_ECX,1,1);
  uVar2 = FUN_00b31c00();
  (**(code **)(*(int *)(iVar1 + 0x54) + 0x1c))(uVar2);
  local_8 = CONCAT31(local_8._1_3_,2);
  if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_64[0]);
  }
  (**(code **)(*(int *)param_1[1] + 0x28))(0);
  ExceptionList = local_10;
  return param_1;
}

