// FUN_00902d00 @ 00902d00 body=[[00902d00, 00902db9] [00902dbd, 00902dd9] [00902ddf, 00902e10]]


undefined1 * FUN_00902d00(undefined1 *param_1,undefined4 param_2,char param_3)

{
  int iVar1;
  undefined1 local_48 [4];
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b790aa;
  local_14 = ExceptionList;
  if (param_3 == '\0') {
    ExceptionList = &local_14;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *param_1 = 0;
    FUN_00409350(&DAT_00ded94d,0);
  }
  else {
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    ExceptionList = &local_14;
    FUN_00409350("TRIGGER_BUILD_IN_CAPITAL_DESC",0x1d);
    local_c = 0;
    FUN_009a8ee0(local_48,local_34);
    local_c._0_1_ = 1;
    iVar1 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
    local_c = CONCAT31(local_c._1_3_,2);
    FUN_009adb70();
    if (local_44 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_44 = 0;
    local_40 = 0;
    local_3c = 0;
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  ExceptionList = local_14;
  return param_1;
}

