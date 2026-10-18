// FUN_00964d80 @ 00964d80 body=[[00964d80, 00964e5c] [00964e60, 00964edc] [00964ee0, 00964f3f] [00964f43, 00964f61] [00964f65, 0096503d] [00965041, 00965058] [0096505c, 00965071]]


undefined4 FUN_00964d80(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  int in_ECX;
  undefined1 local_d0 [72];
  undefined4 local_88;
  uint local_80 [4];
  undefined4 local_70;
  uint local_6c;
  uint local_64;
  undefined1 local_5c [4];
  int local_58;
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
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00ba28d7;
  local_10 = ExceptionList;
  local_18 = 0;
  local_88 = *(undefined4 *)(*(int *)(in_ECX + 100) + 0x128);
  if (*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(*(int *)(in_ECX + 100) + 300) * 4) +
              0x7d8) < 1) {
    local_6c = 0xf;
    local_70 = 0;
    local_80[0] = local_80[0] & 0xffffff00;
    ExceptionList = &local_10;
    FUN_00409350("POP_COLONIAL_MIGRATION_NONE",0x1b);
    local_8 = 1;
    FUN_009a8ee0(local_5c,local_80);
    local_8._0_1_ = 2;
    iVar2 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c),*(undefined8 *)(iVar2 + 0x74));
    local_18 = 1;
    local_8 = CONCAT31(local_8._1_3_,3);
    FUN_009adb70();
    if (local_58 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_58 = 0;
    local_54 = 0;
    local_50 = 0;
    uVar1 = local_6c;
  }
  else {
    ExceptionList = &local_10;
    FUN_008a8800();
    iVar2 = FUN_00964150(in_ECX,local_d0);
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    if (0 < iVar2) {
      local_34 = 0xf;
      FUN_00409350("POP_COLONIAL_MIGRATION",0x16);
      local_8 = 4;
      FUN_009a8ee0(local_2c,local_48);
      local_8._0_1_ = 6;
      if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_34 = 0xf;
      local_38 = 0;
      local_48[0] = local_48[0] & 0xffffff00;
      local_6c = 0xf;
      local_70 = 0;
      local_80[0] = local_80[0] & 0xffffff00;
      FUN_00409350(&DAT_00df7e7c,3);
      local_8._0_1_ = 7;
      FUN_00964150(in_ECX,local_d0);
      FUN_009888f0();
      local_8._0_1_ = 8;
      FUN_009a9980();
      if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8 = CONCAT31(local_8._1_3_,6);
      local_50 = 0xf;
      local_54 = 0;
      local_64 = local_64 & 0xffffff00;
      if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      iVar2 = FUN_00475500();
      FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c),*(undefined8 *)(iVar2 + 0x74));
      local_18 = 1;
      local_8 = 9;
      FUN_009adb70();
      if (local_28 == 0) {
        ExceptionList = local_10;
        return param_1;
      }
      FUN_009e6a80();
      goto LAB_00965054;
    }
    local_34 = 0xf;
    FUN_00409350("POP_COLONIAL_MIGRATION_NONE",0x1b);
    local_8 = 10;
    FUN_009a8ee0(local_2c,local_48);
    local_8._0_1_ = 0xb;
    iVar2 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c),*(undefined8 *)(iVar2 + 0x74));
    local_18 = 1;
    local_8 = CONCAT31(local_8._1_3_,0xc);
    FUN_009adb70();
    if (local_28 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    uVar1 = local_34;
  }
  if (uVar1 < 0x10) {
    ExceptionList = local_10;
    return param_1;
  }
LAB_00965054:
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

