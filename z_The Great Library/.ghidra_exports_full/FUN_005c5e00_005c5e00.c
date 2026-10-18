// FUN_005c5e00 @ 005c5e00 body=[[005c5e00, 005c6132] [005c6136, 005c6174]]


undefined4 * FUN_005c5e00(undefined4 *param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint local_38 [4];
  undefined4 local_28;
  uint local_24;
  undefined4 local_1c;
  int local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b8e38c;
  local_10 = ExceptionList;
  local_14 = 0;
  ExceptionList = &local_10;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  local_8 = 0;
  *param_1 = CSelectable::vftable;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[3] = 0x18d;
  param_1[2] = &PTR_FUN_00e3a544;
  param_1[4] = DAT_01268fec;
  param_1[5] = DAT_01268ff0;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[0xc] = 0xf;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *param_1 = CUnit::vftable;
  param_1[2] = CUnit::vftable;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  param_1[0x20] = 0;
  *(undefined2 *)((int)param_1 + 0x85) = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *(undefined1 *)(param_1 + 0x27) = 0;
  param_1[0x2a] = 43800000;
  param_1[0x2a] = DAT_01259abc;
  param_1[0x2b] = 43800000;
  param_1[0x2b] = DAT_01259abc;
  param_1[0x2c] = 0;
  param_1[0x30] = 0x2d2d2d;
  param_1[0x31] = 0;
  param_1[0x32] = 0x2d2d2d;
  param_1[0x33] = 0;
  param_1[0x35] = 0;
  local_1c = 0x2d2d2d;
  param_1[0x34] = 0x2d2d2d;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  *(undefined1 *)(param_1 + 0x3c) = 0;
  param_1[0x3d] = 0;
  FUN_00401000(0x3f000000);
  uVar2 = FUN_00b31c00();
  param_1[0x3e] = uVar2;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x4a] = 0xf;
  param_1[0x49] = 0;
  *(undefined1 *)(param_1 + 0x45) = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  *(undefined1 *)(param_1 + 0x4f) = 0;
  param_1[0x50] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  *(undefined1 *)(param_1 + 0x55) = 0;
  param_1[0x5f] = 0xf;
  param_1[0x5e] = 0;
  *(undefined1 *)(param_1 + 0x5a) = 0;
  local_8._0_1_ = 10;
  param_1[0x61] = 0;
  param_1[0x62] = 43800000;
  param_1[0x62] = DAT_01259abc;
  iVar3 = DAT_012586dc;
  param_1[0x65] = 0;
  local_1c = 0x2d2d2d;
  param_1[100] = 0x2d2d2d;
  param_1[0x66] = 43800000;
  param_1[0x66] = DAT_01259abc;
  *(undefined1 *)((int)param_1 + 0x19d) = 0;
  param_1[0x68] = 0;
  param_1[0x66] = *(undefined4 *)(iVar3 + 0xc);
  *(undefined1 *)(param_1 + 0x21) = 0;
  param_1[0x17] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x43] = 0;
  param_1[0x42] = 0;
  param_1[0x3e] = 0;
  param_1[0x44] = 0;
  *(undefined1 *)(param_1 + 0x67) = 0;
  param_1[0x2c] = 1000;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x51] = 0;
  *(undefined1 *)(param_1 + 0x2f) = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  param_1[0x1f] = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined1 *)(param_1 + 0x59) = 0;
  *(undefined1 *)(param_1 + 0x41) = 0;
  uVar2 = FUN_005b6140();
  param_1[0x36] = uVar2;
  iVar3 = FUN_00aae9af(0x260);
  local_8._0_1_ = 0xb;
  uVar1 = (undefined1)local_8;
  local_8._0_1_ = 0xb;
  local_18 = iVar3;
  if (iVar3 == 0) {
    uVar2 = 0;
    local_8._0_1_ = uVar1;
  }
  else {
    local_24 = 0xf;
    local_28 = 0;
    local_38[0] = local_38[0] & 0xffffff00;
    FUN_00409350(0xded954,3);
    local_8._0_1_ = 0xc;
    local_14 = 1;
    uVar2 = FUN_005ba2a0(iVar3,local_38,0);
  }
  param_1[0x29] = uVar2;
  if (((local_14 & 1) != 0) && (0xf < local_24)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_38[0]);
  }
  param_1[0x61] = 0;
  uVar2 = DAT_0125ff58;
  param_1[99] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x22] = 0;
  param_1[0x28] = 0;
  param_1[0x62] = uVar2;
  ExceptionList = local_10;
  return param_1;
}

