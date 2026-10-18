// FUN_0043f570 @ 0043f570 body=[[0043f570, 0043f6c0] [0043f6c4, 0043f6de] [0043f6e2, 0043f72c] [0043f730, 0043f742]]


undefined1 * FUN_0043f570(undefined1 *param_1,undefined *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined *local_84;
  uint *local_80;
  uint local_70 [4];
  undefined4 local_60;
  uint local_5c;
  uint local_54;
  undefined4 local_44;
  uint local_40;
  uint local_38 [4];
  undefined4 local_28;
  uint local_24;
  undefined1 *local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b478c1;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  local_8 = 0;
  local_14 = 1;
  local_80 = (uint *)0x447a1fff;
  local_84 = (undefined *)0x43f5c0;
  FUN_00401000();
  local_80 = (uint *)0x43f5c8;
  iVar1 = FUN_00b31c00();
  if ((int)param_2 < iVar1) {
    local_80 = (uint *)0x1;
    local_18 = (undefined1 *)&local_84;
    local_84 = param_2;
    uVar2 = FUN_00988a50(local_70);
    local_80 = (uint *)0xffffffff;
    local_84 = (undefined *)0x0;
    local_8 = 1;
    FUN_00408ed0(uVar2);
    if (local_5c < 0x10) {
      ExceptionList = local_10;
      return param_1;
    }
    local_80 = (uint *)local_70[0];
  }
  else if ((int)param_2 < 1000000) {
    local_80 = (uint *)0x0;
    local_18 = (undefined1 *)&local_84;
    local_84 = param_2;
    uVar2 = FUN_00988a50(local_70);
    local_80 = (uint *)0xffffffff;
    local_84 = (undefined *)0x0;
    local_8 = 5;
    FUN_00408ed0(uVar2);
    if (local_5c < 0x10) {
      ExceptionList = local_10;
      return param_1;
    }
    local_80 = (uint *)local_70[0];
  }
  else {
    local_80 = (uint *)0x1;
    local_84 = &DAT_00df83c4;
    local_24 = 0xf;
    local_28 = 0;
    local_38[0] = local_38[0] & 0xffffff00;
    FUN_00409350();
    local_8 = 2;
    local_80 = (uint *)0x0;
    local_18 = (undefined1 *)&local_84;
    if (param_2 + 0x189373 < (undefined *)0x39580e) {
      local_84 = (undefined *)(((int)param_2 * 1000) / 1000000);
      local_18 = (undefined1 *)&local_84;
    }
    else {
      uVar3 = __allmul(param_2,(int)param_2 >> 0x1f,1000,0);
      local_84 = (undefined *)__alldiv(uVar3,1000000,0);
      local_18 = (undefined1 *)((int)local_84 >> 0x1f);
    }
    FUN_00988a50(local_70);
    local_80 = local_38;
    local_8._0_1_ = 3;
    local_84 = (undefined *)0x43f69f;
    uVar2 = FUN_00988f20();
    local_80 = (uint *)0xffffffff;
    local_84 = (undefined *)0x0;
    local_8 = CONCAT31(local_8._1_3_,4);
    FUN_00408ed0(uVar2);
    if (0xf < local_40) {
      local_80 = (uint *)local_54;
                    /* WARNING: Subroutine does not return */
      local_84 = &UNK_0043f6c1;
      FUN_00aae91b();
    }
    local_40 = 0xf;
    local_44 = 0;
    local_54 = local_54 & 0xffffff00;
    if (0xf < local_5c) {
      local_80 = (uint *)local_70[0];
                    /* WARNING: Subroutine does not return */
      local_84 = &UNK_0043f6df;
      FUN_00aae91b();
    }
    local_5c = 0xf;
    local_60 = 0;
    local_70[0] = local_70[0] & 0xffffff00;
    if (local_24 < 0x10) {
      ExceptionList = local_10;
      return param_1;
    }
    local_80 = (uint *)local_38[0];
  }
                    /* WARNING: Subroutine does not return */
  local_84 = &UNK_0043f72d;
  FUN_00aae91b();
}

