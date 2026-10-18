// FUN_00890a50 @ 00890a50 body=[[00890a50, 00890af1] [00890af5, 00890b80] [00890b84, 00890ba6] [00890baa, 00890c2d] [00890c31, 00890c52] [00890c56, 00890ca1] [00890ca5, 00890ce4] [00890ce8, 00890cfc]]


/* WARNING: Removing unreachable block (ram,0x00890c22) */

undefined1 * FUN_00890a50(undefined1 *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  uint in_stack_00000020;
  uint local_74;
  uint local_6c [4];
  undefined4 local_5c;
  uint local_58;
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  undefined1 local_34 [4];
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_20;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar1 = param_2;
  puStack_c = &LAB_00b8797e;
  local_10 = ExceptionList;
  local_14 = 0;
  local_8 = 0;
  ExceptionList = &local_10;
  FUN_008852b0();
  local_20 = *(undefined4 *)(iVar1 + 8);
  if (*(char *)(*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar1 + 0xc) * 4) +
                                 0xbe8) + local_14 * 4) + 0x60) == '\0') {
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *param_1 = 0;
    FUN_00409350(&DAT_00ded94d,0);
  }
  else {
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = local_50[0] & 0xffffff00;
    FUN_00409350("REVOKE_MILITARY_ACCESS_EFFECT",0x1d);
    local_8._0_1_ = 1;
    FUN_009a8ee0(local_34,local_50);
    local_8._0_1_ = 3;
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = local_50[0] & 0xffffff00;
    local_58 = 0xf;
    local_5c = 0;
    local_6c[0] = local_6c[0] & 0xffffff00;
    FUN_00409350("COUNTRY",7);
    local_8._0_1_ = 4;
    FUN_0055dd40();
    local_8._0_1_ = 5;
    param_2 = FUN_00aae9af();
    local_8._0_1_ = 6;
    if (param_2 == 0) {
      param_2 = 0;
    }
    else {
      param_2 = FUN_009a9ce0();
    }
    local_8._0_1_ = 5;
    FUN_009e6810(local_6c,&param_2);
    if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 3;
    if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_58 = 0xf;
    local_5c = 0;
    local_6c[0] = local_6c[0] & 0xffffff00;
    FUN_00409350("TARGET_COUNTRY",0xe);
    local_8._0_1_ = 7;
    FUN_0055dd40();
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
    FUN_009e6810(local_6c,&param_2);
    local_8._0_1_ = 3;
    if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    iVar1 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
    local_8 = CONCAT31(local_8._1_3_,10);
    FUN_009adb70();
    if (local_30 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_30 = 0;
    local_2c = 0;
    local_28 = 0;
  }
  if (0xf < in_stack_00000020) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_1;
}

