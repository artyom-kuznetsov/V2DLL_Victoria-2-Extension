// FUN_009002b0 @ 009002b0 body=[[009002b0, 00900366] [0090036a, 0090040d] [00900411, 00900428] [0090042c, 00900440]]


undefined4 FUN_009002b0(undefined4 param_1,undefined4 param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  int in_ECX;
  uint local_74 [4];
  undefined4 local_64;
  uint local_60;
  uint local_58 [4];
  undefined4 local_48;
  uint local_44;
  undefined1 local_3c [4];
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_28 [4];
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b6547d;
  local_10 = ExceptionList;
  local_14 = 0;
  if (param_3 == *(char *)(in_ECX + 0x1c)) {
    local_44 = 0xf;
    local_48 = 0;
    local_58[0] = local_58[0] & 0xffffff00;
    ExceptionList = &local_10;
    FUN_00409350("IS_CRIME_NOT_HIGHER_THAN_EDU_TR",0x1f);
    local_8 = 1;
    FUN_009a8ee0(local_28,local_58);
    local_8._0_1_ = 2;
    iVar2 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c),*(undefined8 *)(iVar2 + 0x74));
    local_14 = 1;
    local_8 = CONCAT31(local_8._1_3_,3);
    FUN_009adb70();
    if (local_24 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_24 = 0;
    local_20 = 0;
    local_1c = 0;
    uVar1 = local_44;
  }
  else {
    local_60 = 0xf;
    local_64 = 0;
    local_74[0] = local_74[0] & 0xffffff00;
    ExceptionList = &local_10;
    FUN_00409350("IS_CRIME_HIGHER_THAN_EDU_TR",0x1b);
    local_8 = 4;
    FUN_009a8ee0(local_3c,local_74);
    local_8._0_1_ = 5;
    iVar2 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c),*(undefined8 *)(iVar2 + 0x74));
    local_14 = 1;
    local_8 = CONCAT31(local_8._1_3_,6);
    FUN_009adb70();
    if (local_38 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_38 = 0;
    local_34 = 0;
    local_30 = 0;
    uVar1 = local_60;
  }
  if (0xf < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_1;
}

