// FUN_00788ea0 @ 00788ea0 body=[[00788ea0, 00788f0b] [00788f0f, 00789088] [0078908c, 007890ab] [007890af, 0078912a] [0078912e, 00789165] [0078916b, 00789181] [00789185, 00789192] [00789196, 007891b1] [007891b5, 007891d3] [007891d7, 007891eb]]


undefined4 *
FUN_00788ea0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint in_stack_00000030;
  undefined4 in_stack_00000038;
  undefined4 in_stack_0000003c;
  undefined4 in_stack_00000040;
  uint in_stack_00000058;
  undefined4 in_stack_00000060;
  undefined4 in_stack_00000064;
  undefined4 in_stack_00000068;
  uint in_stack_00000080;
  uint local_50;
  uint local_48 [4];
  undefined4 local_38;
  uint local_34;
  uint local_2c;
  int local_20;
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b97621;
  local_10 = ExceptionList;
  local_8 = 2;
  local_18 = 0xf;
  local_1c = 0;
  local_2c = local_2c & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350();
  local_8._0_1_ = 3;
  FUN_00640680();
  local_8._0_1_ = 5;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  *param_1 = CConfirmLeaderAssign::vftable;
  param_1[0x1a] = param_4;
  param_1[0x1c] = param_6;
  param_1[0x1b] = param_5;
  param_1[0x22] = 0xf;
  param_1[0x21] = 0;
  local_18 = 0xf;
  local_1c = 0;
  local_2c = local_2c & 0xffffff00;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  FUN_00408ed0();
  local_8._0_1_ = 6;
  param_1[0x24] = in_stack_00000060;
  param_1[0x25] = in_stack_00000064;
  param_1[0x26] = in_stack_00000068;
  param_1[0x2c] = 0xf;
  param_1[0x2b] = 0;
  *(undefined1 *)(param_1 + 0x27) = 0;
  FUN_00408ed0();
  local_8._0_1_ = 7;
  param_1[0x2e] = in_stack_00000038;
  param_1[0x2f] = in_stack_0000003c;
  param_1[0x30] = in_stack_00000040;
  param_1[0x36] = 0xf;
  param_1[0x35] = 0;
  *(undefined1 *)(param_1 + 0x31) = 0;
  FUN_00408ed0();
  local_8._0_1_ = 8;
  param_1[0x38] = param_3;
  FUN_009c16d0();
  FUN_009c16d0();
  FUN_005b6750();
  uVar2 = FUN_00988a50();
  local_8._0_1_ = 9;
  iVar3 = FUN_009c16d0();
  FUN_0043ec10(local_48,&DAT_00df7e90,uVar2,&DAT_00dfbf14,iVar3 + 0x94);
  local_8._0_1_ = 10;
  FUN_006417b0();
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 8;
  local_34 = 0xf;
  local_38 = 0;
  uVar1 = local_48[0] >> 8;
  local_48[0] = uVar1 << 8;
  if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = uVar1 << 8;
  FUN_00409350();
  local_8._0_1_ = 0xb;
  FUN_009a8ee0();
  local_8._0_1_ = 0xc;
  iVar3 = FUN_00475500();
  FUN_009a9880(*(undefined8 *)(iVar3 + 0x6c));
  local_8._0_1_ = 0xd;
  FUN_00641710();
  if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8 = CONCAT31(local_8._1_3_,0xe);
  FUN_009adb70();
  if (local_20 != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if (0xf < in_stack_00000030) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if (0xf < in_stack_00000058) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if (0xf < in_stack_00000080) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_1;
}

