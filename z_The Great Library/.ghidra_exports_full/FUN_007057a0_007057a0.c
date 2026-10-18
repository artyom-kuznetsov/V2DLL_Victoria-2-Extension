// FUN_007057a0 @ 007057a0 body=[[007057a0, 00705809] [0070580d, 00705856] [0070585a, 007058ac] [007058b0, 007058c2]]


/* WARNING: Removing unreachable block (ram,0x0070584e) */

undefined4 FUN_007057a0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  uint local_44 [4];
  undefined4 local_34;
  uint local_30;
  undefined1 local_28 [4];
  int local_24;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b6ddeb;
  local_10 = ExceptionList;
  local_14 = 0;
  local_30 = 0xf;
  local_34 = 0;
  local_44[0] = local_44[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("PRODUCTION_POP_UNEMPLOYED_TOOLTIP",0x21);
  local_8 = 1;
  FUN_009a8ee0(local_28,local_44);
  local_8._0_1_ = 3;
  if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_30 = 0xf;
  local_34 = 0;
  local_44[0] = local_44[0] & 0xffffff00;
  FUN_00409350("UNEMPLOYED",10);
  local_8._0_1_ = 4;
  FUN_009a99f0(local_28,*param_2);
  local_8 = CONCAT31(local_8._1_3_,3);
  iVar1 = FUN_00475500();
  FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
  local_14 = 1;
  local_8 = 5;
  FUN_009adb70();
  if (local_24 == 0) {
    ExceptionList = local_10;
    return param_1;
  }
  FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

