// FUN_00676240 @ 00676240 body=[[00676240, 006762a6] [006762aa, 0067635d] [00676361, 00676394] [00676398, 006763af] [006763b3, 006763d4] [006763d8, 00676464] [00676468, 0067649f] [006764a5, 006764be] [006764c2, 006764e0] [006764e4, 006764f8]]


/* WARNING: Removing unreachable block (ram,0x0067645c) */
/* WARNING: Removing unreachable block (ram,0x006764d8) */

undefined4 * FUN_00676240(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint local_80;
  uint local_64;
  uint local_48;
  uint local_40 [4];
  undefined4 local_30;
  uint local_2c;
  undefined1 local_24 [4];
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b98fb2;
  local_10 = ExceptionList;
  local_2c = 0xf;
  local_30 = 0;
  local_40[0] = local_40[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("DefaultDialog",0xd);
  local_8 = 0;
  FUN_00640680(param_1,local_40);
  local_8._0_1_ = 2;
  if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  *param_1 = CQuitDialog::vftable;
  param_1[0x1f] = 0xf;
  param_1[0x1e] = 0;
  local_2c = 0xf;
  local_30 = 0;
  local_40[0] = local_40[0] & 0xffffff00;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  FUN_00408ed0();
  local_8._0_1_ = 3;
  local_2c = 0xf;
  local_30 = 0;
  local_40[0] = local_40[0] & 0xffffff00;
  FUN_00409350("_TITLE",6);
  local_8._0_1_ = 4;
  uVar1 = FUN_00988f20();
  local_8._0_1_ = 5;
  FUN_009a8ee0(local_24,uVar1);
  local_8._0_1_ = 6;
  iVar2 = FUN_00475500();
  FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c),*(undefined8 *)(iVar2 + 0x74));
  local_8._0_1_ = 7;
  FUN_00641710();
  if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 8;
  FUN_009adb70();
  if (local_20 != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  if (local_64 < 0x10) {
    local_8._0_1_ = 3;
    if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    FUN_00409350("_DESC",5);
    local_8._0_1_ = 9;
    uVar1 = FUN_00988f20();
    local_8._0_1_ = 10;
    FUN_009a8ee0(local_24,uVar1);
    local_8._0_1_ = 0xb;
    iVar2 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c),*(undefined8 *)(iVar2 + 0x74));
    local_8._0_1_ = 0xc;
    FUN_006417b0();
    local_8 = CONCAT31(local_8._1_3_,0xd);
    FUN_009adb70();
    if (local_20 == 0) {
      local_20 = 0;
      local_1c = 0;
      local_18 = 0;
      if (local_80 < 0x10) {
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
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

