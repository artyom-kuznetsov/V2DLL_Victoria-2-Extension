// FUN_0046d080 @ 0046d080 body=[[0046d080, 0046d1a1] [0046d1a5, 0046d26f] [0046d273, 0046d28f] [0046d293, 0046d2cd] [0046d2d1, 0046d2ed] [0046d2f1, 0046d304]]


undefined4 FUN_0046d080(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  uint local_4c;
  undefined1 local_44 [4];
  undefined1 *local_40;
  undefined1 *local_3c;
  undefined1 *local_30;
  undefined1 *local_2c;
  undefined4 local_28;
  undefined4 local_20;
  undefined4 *local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b8f891;
  local_10 = ExceptionList;
  local_20 = 0;
  ExceptionList = &local_10;
  FUN_009a8ee0(local_44,param_2);
  local_8 = 1;
  FUN_009a9960();
  local_18 = 0;
  if (0 < ((int)local_2c - (int)local_30) / 0x1c) {
    local_14 = 0;
    do {
      local_8._0_1_ = 2;
      puVar2 = local_30 + local_14;
      FUN_0046b3a0();
      local_8._0_1_ = 3;
      puVar1 = (undefined4 *)FUN_00aae9af();
      local_8._0_1_ = 4;
      if (puVar1 == (undefined4 *)0x0) {
        puVar1 = (undefined4 *)0x0;
      }
      else {
        puVar1[1] = local_44;
        *puVar1 = &PTR_FUN_00e38ecc;
        puVar1[7] = 0xf;
        puVar1[6] = 0;
        *(undefined1 *)(puVar1 + 2) = 0;
        local_1c = puVar1;
        FUN_00408ed0();
        local_8._0_1_ = 5;
        *puVar1 = &PTR_FUN_00e38ef4;
        puVar1[0xe] = 0xf;
        puVar1[0xd] = 0;
        *(undefined1 *)(puVar1 + 9) = 0;
        FUN_00408ed0();
      }
      local_8._0_1_ = 3;
      local_1c = puVar1;
      FUN_009e6810(puVar2,&local_1c);
      local_8._0_1_ = 2;
      if (0xf < local_4c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_14 = local_14 + 0x1c;
      local_18 = local_18 + 1;
    } while (local_18 < ((int)local_2c - (int)local_30) / 0x1c);
  }
  local_8._0_1_ = 2;
  puVar1 = DAT_0125b5e0;
  if (DAT_0125b5e0 == (undefined4 *)0x0) {
    local_1c = (undefined4 *)FUN_00aae9af();
    local_8._0_1_ = 6;
    if (local_1c == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar1 = (undefined4 *)FUN_00475150();
    }
    local_8._0_1_ = 7;
    local_1c = (undefined4 *)0x0;
    if ((puVar1 != DAT_0125b5e0) && (DAT_0125b5e0 != (undefined4 *)0x0)) {
      (**(code **)*DAT_0125b5e0)();
    }
  }
  DAT_0125b5e0 = puVar1;
  local_8._0_1_ = 2;
  FUN_009a9880(*(undefined8 *)(DAT_0125b5e0 + 0x1b),*(undefined8 *)(DAT_0125b5e0 + 0x1d));
  local_20 = 1;
  if (local_30 == (undefined1 *)0x0) {
    local_30 = (undefined1 *)0x0;
    local_2c = (undefined1 *)0x0;
    local_28 = 0;
    local_8 = 8;
    FUN_009adb70();
    if (local_40 == (undefined1 *)0x0) {
      ExceptionList = local_10;
      return param_1;
    }
    while( true ) {
      if (local_40 == local_3c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      if (0xf < *(uint *)(local_40 + 0x14)) break;
      *(undefined4 *)(local_40 + 0x14) = 0xf;
      *(undefined4 *)(local_40 + 0x10) = 0;
      *local_40 = 0;
      local_40 = local_40 + 0x20;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  while( true ) {
    if (local_30 == local_2c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < *(uint *)(local_30 + 0x14)) break;
    *(undefined4 *)(local_30 + 0x14) = 0xf;
    *(undefined4 *)(local_30 + 0x10) = 0;
    *local_30 = 0;
    local_30 = local_30 + 0x1c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

