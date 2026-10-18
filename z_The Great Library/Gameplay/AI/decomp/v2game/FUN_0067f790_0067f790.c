// FUN_0067f790 @ 0067f790 body=[[0067f790, 0067fcd8]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_0067f790(undefined4 *param_1)

{
  void *_Dst;
  int iVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b4c509;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[1] = 0x18d;
  *param_1 = CGameState::vftable;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  local_8 = 1;
  uStack_7 = 0;
  FUN_0067d7a0();
  *(undefined1 *)(param_1 + 0x18) = 0;
  param_1[0x1a] = 0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  param_1[0x1c] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  param_1[0x23] = 0x18d;
  param_1[0x19] = CFlags::vftable;
  param_1[0x22] = CFlags::vftable;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *(undefined1 *)(param_1 + 0x28) = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x29d] = 0;
  _DAT_012588d0 = _DAT_012588d0 + 1;
  param_1[0x29e] = 1;
  param_1[0x2a0] = 0x18d;
  param_1[0x29f] = CDiplomacy::vftable;
  param_1[0x2a1] = 0;
  param_1[0x2a2] = 0;
  param_1[0x2a3] = 0;
  *(undefined1 *)(param_1 + 0x2a4) = 0;
  param_1[0x2a5] = CHistoryContainer::vftable;
  param_1[0x2a6] = 0x18d;
  param_1[0x2a7] = 43800000;
  param_1[0x2a7] = DAT_01259abc;
  param_1[0x2a8] = 0;
  param_1[0x2a9] = 0;
  param_1[0x2aa] = 0;
  *(undefined1 *)(param_1 + 0x2ab) = 0;
  param_1[0x2ac] = 0;
  param_1[0x2a5] = CDiplomaticHistory::vftable;
  param_1[0x2ae] = 0x18d;
  param_1[0x2ad] = CCombatManager::vftable;
  param_1[0x2af] = 0;
  param_1[0x2b0] = 0;
  param_1[0x2b1] = 0;
  *(undefined1 *)(param_1 + 0x2b2) = 0;
  param_1[0x2b3] = 0;
  param_1[0x2b4] = 0;
  param_1[0x2b5] = 0;
  param_1[0x2b7] = 0;
  param_1[0x2b8] = 0;
  param_1[0x2b9] = 0;
  param_1[699] = 0;
  param_1[700] = 0;
  param_1[0x2bd] = 0;
  param_1[0x2bf] = 0;
  param_1[0x2c0] = 0;
  param_1[0x2c1] = 0;
  param_1[0x2c3] = 43800000;
  param_1[0x2c3] = DAT_01259abc;
  param_1[0x2c4] = 43800000;
  param_1[0x2c4] = DAT_01259abc;
  *(undefined8 *)(param_1 + 0x2c6) = 0;
  *(undefined1 *)(param_1 + 0x2c8) = 0;
  param_1[0x2cb] = 0;
  param_1[0x2cc] = 0;
  param_1[0x2cd] = 0;
  *(undefined1 *)(param_1 + 0x2ce) = 0;
  param_1[0x2cf] = 0;
  param_1[0x2d0] = 0;
  param_1[0x2d1] = 0;
  *(undefined1 *)(param_1 + 0x2d2) = 0;
  param_1[0x2d3] = 0;
  param_1[0x2d4] = 0;
  param_1[0x2d5] = 0;
  *(undefined1 *)(param_1 + 0x2d6) = 0;
  local_8 = 0xe;
  param_1[0x2d7] = 0x2d2d2d;
  param_1[0x2d8] = 0;
  param_1[0x2da] = 0x1ff;
  param_1[0x2d9] = 0;
  _Dst = (void *)FUN_00aad56b(0x7fc);
  param_1[0x2db] = _Dst;
  _memset(_Dst,0,param_1[0x2da] * 4);
  param_1[0x2dd] = 0;
  param_1[0x2de] = 0;
  param_1[0x2df] = 0;
  param_1[0x2e1] = 0;
  param_1[0x2e2] = 0;
  param_1[0x2e3] = 0;
  *(undefined2 *)(param_1 + 0x2e5) = 0;
  param_1[0x2e6] = 0;
  param_1[0x2e7] = 0;
  param_1[0x2e8] = 0;
  *(undefined1 *)(param_1 + 0x2ea) = 0;
  param_1[0x2ec] = 0x18d;
  param_1[0x2eb] = CGamePlaySettings::vftable;
  param_1[0x2ed] = 2;
  param_1[0x2ef] = 0;
  param_1[0x2f0] = 0;
  param_1[0x2f1] = 0;
  param_1[0x2f3] = 0;
  param_1[0x2f4] = 0;
  param_1[0x2f5] = 0;
  param_1[0x2f6] = 0;
  param_1[0x2f8] = 0;
  param_1[0x2f9] = 0;
  param_1[0x2fa] = 0;
  param_1[0x2fc] = 0;
  param_1[0x2fd] = 0;
  param_1[0x2fe] = 0;
  param_1[0x300] = 0;
  param_1[0x301] = 0;
  param_1[0x302] = 0;
  param_1[0x306] = 0x18d;
  param_1[0x305] = CGoodsPool::vftable;
  param_1[0x317] = 0;
  param_1[0x318] = 0;
  param_1[0x319] = 0;
  local_8 = 0x18;
  _memset(param_1 + 0x307,0,0x40);
  FUN_00423920();
  param_1[0x31c] = 0x18d;
  param_1[0x31b] = CGoodsPool::vftable;
  param_1[0x32d] = 0;
  param_1[0x32e] = 0;
  param_1[0x32f] = 0;
  local_8 = 0x1a;
  _memset(param_1 + 0x31d,0,0x40);
  FUN_00423920();
  param_1[0x331] = 0;
  param_1[0x332] = 0;
  param_1[0x333] = 0;
  *(undefined1 *)(param_1 + 0x334) = 0;
  param_1[0x335] = 0;
  param_1[0x336] = 0;
  param_1[0x337] = 0;
  *(undefined1 *)(param_1 + 0x338) = 0;
  param_1[0x33b] = 0;
  param_1[0x33a] = 0x2d2d2d;
  param_1[0x33c] = 43800000;
  param_1[0x33c] = DAT_01259abc;
  param_1[0x33e] = 0;
  param_1[0x33f] = 0;
  param_1[0x340] = 0;
  param_1[0x341] = 0;
  _local_8 = CONCAT31(uStack_7,0x1e);
  FUN_0068ea30(2);
  param_1[0x2c5] = 0;
  param_1[0x2ca] = 0;
  if (DAT_00f20c18 == (undefined4 *)0x0) {
    DAT_00f20c18 = (undefined4 *)FUN_00aae9af(4);
    if (DAT_00f20c18 == (undefined4 *)0x0) {
      DAT_00f20c18 = (undefined4 *)0x0;
    }
    else {
      *DAT_00f20c18 = &PTR_FUN_00e38b28;
    }
  }
  (**(code **)(*DAT_01258a8c + 0x14))();
  FUN_009b7670();
  param_1[0x29d] = 0;
  FUN_0068eaa0();
  iVar1 = FUN_00aae9af(0x40);
  local_8 = 0x1f;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00457830(iVar1);
  }
  local_8 = 0x1e;
  param_1[0x33d] = uVar2;
  iVar1 = FUN_00aae9af(0x10);
  local_8 = 0x20;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00429f80();
  }
  _local_8 = CONCAT31(uStack_7,0x1e);
  param_1[0x33e] = uVar2;
  FUN_0068e050();
  ExceptionList = local_10;
  return param_1;
}

