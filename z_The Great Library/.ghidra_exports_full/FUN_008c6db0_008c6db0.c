// FUN_008c6db0 @ 008c6db0 body=[[008c6db0, 008c6e50] [008c6e54, 008c701d] [008c7021, 008c704b] [008c704f, 008c7074] [008c7078, 008c709d] [008c70a1, 008c70c6] [008c70ca, 008c7103] [008c7107, 008c7122] [008c7126, 008c7144] [008c7148, 008c7166] [008c716a, 008c7180] [008c7184, 008c71a4] [008c71a8, 008c71e8] [008c71ec, 008c71ff] [008c7203, 008c7217]]


/* WARNING: Removing unreachable block (ram,0x008c71f4) */
/* WARNING: Removing unreachable block (ram,0x008c7199) */

undefined1 * FUN_008c6db0(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  uint local_13c;
  uint local_120;
  uint local_104;
  uint local_e8;
  uint local_cc;
  uint local_8c [4];
  undefined4 local_7c;
  uint local_78;
  uint local_70 [4];
  undefined4 local_60;
  uint local_5c;
  undefined1 local_54 [4];
  undefined1 *local_50;
  undefined1 *local_4c;
  undefined4 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  uint local_34;
  undefined4 local_24;
  uint local_20;
  int *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b86a79;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  local_3c = 1;
  uStack_7 = 0;
  if (0 < param_4) {
    local_14 = param_4;
    do {
      local_8 = 1;
      local_20 = 0xf;
      local_24 = 0;
      local_34 = local_34 & 0xffffff00;
      FUN_00409350(&DAT_00e29ba0,3);
      local_8 = 2;
      FUN_00448aa0();
      local_8 = 1;
      if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  local_8 = 1;
  FUN_00448aa0();
  if (param_4 == 0) {
    cVar1 = (**(code **)(*local_18 + 0x18))();
    if (cVar1 == (char)param_3) {
      uVar3 = 0x700e2cfe8;
    }
    else {
      uVar3 = 0x700e2cff0;
    }
    FUN_00448740(uVar3);
  }
  FUN_00409350(&DAT_00e2d750,3);
  local_8 = 3;
  local_20 = 0xf;
  local_24 = 0;
  local_34 = local_34 & 0xffffff00;
  FUN_00409350(&DAT_00dfbfa4,2);
  local_8 = 4;
  local_5c = 0xf;
  local_60 = 0;
  local_70[0] = local_70[0] & 0xffffff00;
  FUN_00409350("ANY_PROVINCE_STARTS",0x13);
  local_8 = 5;
  local_40 = FUN_0055dd40();
  local_8 = 6;
  local_14 = FUN_009a8ee0(local_54,local_70);
  local_8 = 7;
  puVar2 = DAT_0125b5e0;
  if (DAT_0125b5e0 == (undefined4 *)0x0) {
    local_38 = FUN_00aae9af();
    local_8 = 8;
    if (local_38 == 0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = (undefined4 *)FUN_00475150();
    }
    local_8 = 9;
    local_38 = 0;
    if ((puVar2 != DAT_0125b5e0) && (DAT_0125b5e0 != (undefined4 *)0x0)) {
      (**(code **)*DAT_0125b5e0)();
    }
  }
  DAT_0125b5e0 = puVar2;
  local_8 = 7;
  FUN_009a9880(*(undefined8 *)(DAT_0125b5e0 + 0x1b),*(undefined8 *)(DAT_0125b5e0 + 0x1d));
  local_8 = 10;
  FUN_00988f20();
  local_8 = 0xb;
  FUN_00988f20();
  local_8 = 0xc;
  FUN_00988f20();
  local_8 = 0xd;
  FUN_00988f20();
  local_8 = 0xe;
  FUN_00448aa0();
  if (0xf < local_13c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if (0xf < local_e8) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if (0xf < local_120) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if (0xf < local_cc) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if (0xf < local_104) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8 = 0xf;
  FUN_009adb70();
  if (local_50 != (undefined1 *)0x0) {
    while( true ) {
      if (local_50 == local_4c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      if (0xf < *(uint *)(local_50 + 0x14)) break;
      *(undefined4 *)(local_50 + 0x14) = 0xf;
      *(undefined4 *)(local_50 + 0x10) = 0;
      *local_50 = 0;
      local_50 = local_50 + 0x20;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_50 = (undefined1 *)0x0;
  local_4c = (undefined1 *)0x0;
  local_48 = 0;
  if (0xf < local_78) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_78 = 0xf;
  local_7c = 0;
  local_8c[0] = local_8c[0] & 0xffffff00;
  if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_5c = 0xf;
  local_60 = 0;
  local_70[0] = local_70[0] & 0xffffff00;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8 = 1;
  local_20 = 0xf;
  local_24 = 0;
  local_34 = local_34 & 0xffffff00;
  FUN_008b7f70(local_8c,param_2,param_3,param_4 + 1,1);
  _local_8 = CONCAT31(uStack_7,0x10);
  FUN_00448aa0();
  if (0xf < local_78) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_1;
}

