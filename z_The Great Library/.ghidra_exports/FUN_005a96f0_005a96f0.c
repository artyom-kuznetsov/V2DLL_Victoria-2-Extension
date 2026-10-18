// FUN_005a96f0 @ 005a96f0  (requested 005A96F0, first bytes: 55 8B EC 6A FF 68 61 60)


undefined1 * FUN_005a96f0(undefined1 *param_1,undefined4 param_2)

{
  int iVar1;
  int in_stack_00000018;
  uint in_stack_0000001c;
  undefined *in_stack_00000024;
  int in_stack_00000028;
  undefined *local_64;
  uint *puStack_60;
  uint local_50;
  uint local_3c;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  undefined1 *local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b46061;
  local_10 = ExceptionList;
  local_8 = 1;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  local_14 = 1;
  if (1 < in_stack_00000018) {
    puStack_60 = (uint *)0x2;
    local_20 = 0xf;
    local_64 = &DAT_00df9638;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    FUN_00409350();
    puStack_60 = local_34;
    local_8._0_1_ = 2;
    local_64 = (undefined *)0x5a975e;
    FUN_00988f20();
    puStack_60 = (uint *)0xffffffff;
    local_64 = (undefined *)0x0;
    local_8._0_1_ = 3;
    FUN_00448aa0();
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      local_64 = &UNK_005a9780;
      FUN_00aae91b();
    }
    local_8 = CONCAT31(local_8._1_3_,1);
    local_3c = 0xf;
    local_50 = local_50 & 0xffffff00;
    if (0xf < local_20) {
      puStack_60 = (uint *)local_34[0];
                    /* WARNING: Subroutine does not return */
      local_64 = &UNK_005a97a2;
      FUN_00aae91b();
    }
  }
  puStack_60 = (uint *)0x0;
  local_64 = (undefined *)0x3e8;
  iVar1 = __alldiv((longlong)(int)in_stack_00000024 * (longlong)in_stack_00000028);
  puStack_60 = (uint *)0x2;
  if (iVar1 < 0) {
    local_64 = &DAT_00df8510;
  }
  else if (iVar1 < 1) {
    local_64 = &DAT_00df963c;
  }
  else {
    local_64 = &DAT_00df8518;
  }
  FUN_00448740();
  if (0 < (int)in_stack_00000024) {
    puStack_60 = (uint *)0x1;
    local_64 = &DAT_00df9640;
    FUN_00448740();
  }
  puStack_60 = (uint *)0x2;
  local_18 = (undefined1 *)&local_64;
  local_64 = in_stack_00000024;
  FUN_00988a50();
  puStack_60 = (uint *)0xffffffff;
  local_64 = (undefined *)0x0;
  local_8._0_1_ = 4;
  FUN_00448aa0();
  local_8._0_1_ = 1;
  if (0xf < local_3c) {
    puStack_60 = (uint *)local_50;
                    /* WARNING: Subroutine does not return */
    local_64 = &UNK_005a982b;
    FUN_00aae91b();
  }
  puStack_60 = (uint *)0x3;
  local_64 = &DAT_00dff364;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  FUN_00409350();
  puStack_60 = local_34;
  local_8 = CONCAT31(local_8._1_3_,5);
  local_64 = (undefined *)0x5a985c;
  FUN_00988f20();
  if (0xf < local_3c) {
    puStack_60 = (uint *)local_50;
                    /* WARNING: Subroutine does not return */
    local_64 = &UNK_005a986f;
    FUN_00aae91b();
  }
  if (local_20 < 0x10) {
    if (in_stack_0000001c < 0x10) {
      ExceptionList = local_10;
      return param_1;
    }
    puStack_60 = (uint *)param_2;
                    /* WARNING: Subroutine does not return */
    local_64 = &UNK_005a989e;
    FUN_00aae91b();
  }
  puStack_60 = (uint *)local_34[0];
                    /* WARNING: Subroutine does not return */
  local_64 = &UNK_005a988d;
  FUN_00aae91b();
}

