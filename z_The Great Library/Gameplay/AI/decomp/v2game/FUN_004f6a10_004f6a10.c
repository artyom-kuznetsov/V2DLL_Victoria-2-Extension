// FUN_004f6a10 @ 004f6a10 body=[[004f6a10, 004f6e1a] [004f6e1e, 004f7d04] [004f7d10, 004f802d] [004f8031, 004f809e] [004f80a2, 004f80c2] [004f80c9, 004f829d]]


undefined4 * FUN_004f6a10(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  void *_Dst;
  int iVar2;
  undefined4 uVar3;
  uint *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined8 uVar9;
  uint local_44 [2];
  undefined4 local_3c;
  undefined1 *puStack_38;
  undefined1 *local_34;
  uint uStack_30;
  uint local_28;
  undefined4 *local_24;
  uint local_20;
  int *local_1c;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00ba83e2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[1] = 0x18d;
  *param_1 = CCountry::vftable;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(char *)(param_1 + 7) = (char)param_2;
  *(char *)((int)param_1 + 0x1d) = (char)((uint)param_2 >> 8);
  *(char *)((int)param_1 + 0x1e) = (char)((uint)param_2 >> 0x10);
  *(undefined1 *)((int)param_1 + 0x1f) = 0;
  param_1[8] = param_3;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1e] = 43800000;
  param_1[0x1e] = DAT_01259abc;
  param_1[0x1f] = 43800000;
  param_1[0x1f] = DAT_01259abc;
  param_1[0x20] = 43800000;
  param_1[0x20] = DAT_01259abc;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined1 *)(param_1 + 0x24) = 0;
  *(undefined1 *)(param_1 + 0x25) = 1;
  param_1[0x27] = 43800000;
  param_1[0x27] = DAT_01259abc;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  local_8 = 6;
  uStack_7 = 0;
  _eh_vector_constructor_iterator_(param_1 + 0x2c,0x10,2,FUN_00413490,FUN_00aa8540);
  local_8 = 7;
  _eh_vector_constructor_iterator_(param_1 + 0x34,0x10,2,FUN_00413490,FUN_00aa8540);
  param_1[0x41] = 0xf;
  param_1[0x40] = 0;
  *(undefined1 *)(param_1 + 0x3c) = 0;
  local_8 = 9;
  param_1[0x43] = 0;
  param_1[0x45] = 0x1ff;
  param_1[0x44] = 0;
  _Dst = (void *)FUN_00aad56b();
  param_1[0x46] = _Dst;
  _memset(_Dst,0,param_1[0x45] * 4);
  param_1[0x47] = 0;
  param_1[0x4c] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  *(undefined1 *)(param_1 + 0x60) = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 1000;
  param_1[0x6b] = 0;
  param_1[0x6d] = 0;
  *(undefined1 *)(param_1 + 0x6e) = 0;
  param_1[0x6f] = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  *(undefined1 *)(param_1 + 0x74) = 0;
  param_1[0x76] = 0x18d;
  param_1[0x6c] = CFlags::vftable;
  param_1[0x75] = CFlags::vftable;
  param_1[0x78] = 0;
  *(undefined1 *)(param_1 + 0x79) = 0;
  param_1[0x7a] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  *(undefined1 *)(param_1 + 0x7f) = 0;
  param_1[0x81] = 0x18d;
  param_1[0x77] = CVariables::vftable;
  param_1[0x80] = CVariables::vftable;
  local_8 = 0x10;
  FUN_0085a2e0();
  local_8 = 0x11;
  FUN_0085a2e0();
  param_1[0x12f] = 43800000;
  param_1[0x12f] = DAT_01259abc;
  param_1[0x130] = 43800000;
  param_1[0x130] = DAT_01259abc;
  param_1[0x131] = 0;
  param_1[0x132] = 0;
  param_1[0x133] = 0;
  *(undefined1 *)(param_1 + 0x134) = 0;
  param_1[0x135] = 0;
  param_1[0x136] = 0;
  param_1[0x137] = 0;
  param_1[0x138] = 0;
  *(undefined1 *)(param_1 + 0x139) = 0;
  param_1[0x13a] = 0;
  param_1[0x13b] = 0;
  param_1[0x13c] = 0;
  *(undefined1 *)(param_1 + 0x13d) = 0;
  param_1[0x13e] = 0;
  param_1[0x13f] = 0;
  param_1[0x140] = 0;
  *(undefined1 *)(param_1 + 0x141) = 0;
  param_1[0x142] = 0;
  param_1[0x143] = 0;
  param_1[0x144] = 0;
  *(undefined1 *)(param_1 + 0x145) = 0;
  param_1[0x146] = 0;
  param_1[0x147] = 0;
  param_1[0x148] = 0;
  *(undefined1 *)(param_1 + 0x149) = 0;
  local_8 = 0x18;
  uStack_30 = 0xf;
  local_34 = (undefined1 *)0x0;
  local_44[0] = local_44[0] & 0xffffff00;
  FUN_00409350();
  local_8 = 0x19;
  local_24 = param_1 + 0x14a;
  FUN_0044bc60();
  local_8 = 0x1a;
  param_1[0x14a] = CStaticModifier::vftable;
  param_1[0x15b] = 0xf;
  param_1[0x15a] = 0;
  *(undefined1 *)(param_1 + 0x156) = 0;
  FUN_00408ed0(local_44);
  local_8 = 0x1c;
  if (0xf < uStack_30) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  uStack_30 = 0xf;
  local_34 = (undefined1 *)0x0;
  local_44[0] = local_44[0] & 0xffffff00;
  FUN_0044bc60();
  param_1[0x15d] = CStaticModifier::vftable;
  param_1[0x16e] = 0xf;
  param_1[0x16d] = 0;
  *(undefined1 *)(param_1 + 0x169) = 0;
  local_8 = 0x1d;
  FUN_0044bc60();
  param_1[0x170] = CStaticModifier::vftable;
  param_1[0x181] = 0xf;
  param_1[0x180] = 0;
  *(undefined1 *)(param_1 + 0x17c) = 0;
  local_8 = 0x1e;
  FUN_0044bc60();
  param_1[0x183] = CStaticModifier::vftable;
  param_1[0x194] = 0xf;
  param_1[0x193] = 0;
  *(undefined1 *)(param_1 + 399) = 0;
  param_1[0x197] = 0;
  param_1[0x198] = 43800000;
  param_1[0x198] = DAT_01259abc;
  param_1[0x199] = 43800000;
  param_1[0x199] = DAT_01259abc;
  param_1[0x19a] = 43800000;
  param_1[0x19a] = DAT_01259abc;
  param_1[0x19b] = 0;
  param_1[0x19c] = 0;
  param_1[0x19d] = 0;
  *(undefined1 *)(param_1 + 0x19e) = 0;
  local_8 = 0x20;
  param_1[0x1a0] = 0;
  FUN_0044bc60();
  param_1[0x1a1] = CStaticModifier::vftable;
  param_1[0x1b2] = 0xf;
  param_1[0x1b1] = 0;
  *(undefined1 *)(param_1 + 0x1ad) = 0;
  local_8 = 0x21;
  FUN_0044bc60();
  param_1[0x1b4] = CStaticModifier::vftable;
  param_1[0x1c5] = 0xf;
  param_1[0x1c4] = 0;
  *(undefined1 *)(param_1 + 0x1c0) = 0;
  local_8 = 0x22;
  FUN_0044bc60();
  param_1[0x1c7] = CStaticModifier::vftable;
  param_1[0x1d8] = 0xf;
  param_1[0x1d7] = 0;
  *(undefined1 *)(param_1 + 0x1d3) = 0;
  local_8 = 0x23;
  FUN_0044bc60();
  param_1[0x1da] = CStaticModifier::vftable;
  param_1[0x1eb] = 0xf;
  param_1[0x1ea] = 0;
  *(undefined1 *)(param_1 + 0x1e6) = 0;
  param_1[0x1ed] = 0;
  param_1[0x1ee] = 0;
  param_1[0x1ef] = 0;
  *(undefined1 *)(param_1 + 0x1f0) = 0;
  local_8 = 0x25;
  param_1[0x1f2] = 0;
  param_1[499] = 0;
  param_1[500] = 0;
  param_1[0x1f5] = 0;
  FUN_0044bc60();
  param_1[0x1f8] = CStaticModifier::vftable;
  param_1[0x209] = 0xf;
  param_1[0x208] = 0;
  *(undefined1 *)(param_1 + 0x204) = 0;
  param_1[0x20b] = 0;
  param_1[0x20c] = 0;
  param_1[0x20d] = 0;
  *(undefined1 *)(param_1 + 0x20e) = 0;
  param_1[0x20f] = 0;
  param_1[0x210] = 0;
  param_1[0x211] = 0;
  *(undefined1 *)(param_1 + 0x212) = 0;
  param_1[0x214] = 0;
  param_1[0x215] = 0;
  param_1[0x216] = 0;
  param_1[0x218] = 0;
  param_1[0x219] = 0;
  param_1[0x21a] = 0;
  param_1[0x21c] = 0;
  param_1[0x21d] = 0;
  param_1[0x21e] = 0;
  param_1[0x220] = 0;
  param_1[0x221] = 0;
  param_1[0x222] = 0;
  param_1[0x224] = 0;
  param_1[0x225] = 0;
  param_1[0x226] = 0;
  param_1[0x228] = 0;
  param_1[0x229] = 0;
  param_1[0x22a] = 0;
  local_24 = param_1 + 0x22c;
  param_1[0x22f] = param_3;
  param_1[0x22d] = 0x18d;
  *local_24 = CUpperHouse::vftable;
  param_1[0x22e] = param_2;
  param_1[0x230] = 0;
  param_1[0x231] = 0;
  param_1[0x232] = 0;
  local_8 = 0x2f;
  local_1c = (int *)&stack0xffffffa8;
  FUN_004bea40();
  local_8 = 0x30;
  FUN_004be4f0();
  local_8 = 0x31;
  FUN_004be4f0();
  uVar3 = DAT_00f092fc;
  local_8 = 0x32;
  param_1[0x249] = 0x18d;
  param_1[0x248] = CColor::vftable;
  param_1[0x24a] = uVar3;
  param_1[0x24b] = uVar3;
  param_1[0x24c] = uVar3;
  param_1[0x24d] = uVar3;
  *(undefined1 *)(param_1 + 0x24e) = 1;
  *(undefined1 *)(param_1 + 0x24f) = 0;
  _eh_vector_constructor_iterator_
            (param_1 + 0x250,0x1c,3,(_func_void_void_ptr *)&LAB_009b6cb0,FUN_004010c0);
  param_1[0x265] = 0;
  param_1[0x266] = 0;
  param_1[0x267] = 0;
  param_1[0x269] = 0;
  param_1[0x26a] = 0;
  param_1[0x26b] = 0;
  FUN_005e6570();
  param_1[0x276] = 0;
  param_1[0x277] = 0;
  param_1[0x278] = 0;
  param_1[0x27a] = 0;
  param_1[0x27b] = 0;
  param_1[0x27c] = 0;
  *(undefined1 *)(param_1 + 0x27d) = 0;
  param_1[0x27e] = 0;
  param_1[0x27f] = 0;
  param_1[0x280] = 0;
  *(undefined1 *)(param_1 + 0x281) = 0;
  param_1[0x282] = 0;
  param_1[0x283] = 0;
  param_1[0x284] = 0;
  *(undefined1 *)(param_1 + 0x285) = 0;
  param_1[0x286] = 0;
  param_1[0x287] = 0;
  param_1[0x288] = 0;
  *(undefined1 *)(param_1 + 0x289) = 0;
  param_1[0x28a] = 0;
  param_1[0x28b] = 0;
  param_1[0x28c] = 0;
  *(undefined1 *)(param_1 + 0x28d) = 0;
  param_1[0x28e] = 0;
  param_1[0x28f] = 0;
  param_1[0x290] = 0;
  *(undefined1 *)(param_1 + 0x291) = 0;
  local_8 = 0x3d;
  FUN_0044bc60();
  local_8 = 0x3e;
  FUN_0044bc60();
  local_8 = 0x3f;
  FUN_00473f70();
  iVar2 = DAT_01258a30;
  local_8 = 0x40;
  param_1[0x2f3] = 0;
  if (iVar2 == 0) {
    local_24 = (undefined4 *)FUN_00aae9af();
    local_8 = 0x41;
    if (local_24 == (undefined4 *)0x0) {
      iVar2 = 0;
      DAT_01258a30 = iVar2;
    }
    else {
      iVar2 = FUN_009717f0();
      DAT_01258a30 = iVar2;
    }
  }
  param_1[0x2f4] = iVar2;
  param_1[0x2f5] = 0;
  param_1[0x2f6] = 0;
  param_1[0x2f7] = 0;
  *(undefined1 *)(param_1 + 0x2f8) = 0;
  param_1[0x2fa] = 0;
  param_1[0x2fb] = 0;
  param_1[0x2fc] = 0;
  local_8 = 0x43;
  FUN_008b1a40();
  param_1[0x328] = 43800000;
  param_1[0x328] = DAT_01259abc;
  param_1[0x32e] = 0xf;
  param_1[0x32d] = 0;
  *(undefined1 *)(param_1 + 0x329) = 0;
  param_1[0x335] = 0xf;
  param_1[0x334] = 0;
  *(undefined1 *)(param_1 + 0x330) = 0;
  param_1[0x338] = 0;
  param_1[0x339] = 0;
  param_1[0x33a] = 0;
  param_1[0x33b] = 0;
  *(undefined1 *)(param_1 + 0x33c) = 0;
  local_28 = 0x2d2d2d;
  param_1[0x33e] = 0x2d2d2d;
  param_1[0x33f] = 0;
  param_1[0x342] = 0;
  param_1[0x343] = 0;
  param_1[0x344] = 0;
  param_1[0x346] = 0;
  param_1[0x347] = 0;
  param_1[0x348] = 0;
  param_1[0x34a] = 0;
  param_1[0x34b] = 0;
  param_1[0x34c] = 0;
  param_1[0x34e] = 0;
  param_1[0x34f] = 0;
  param_1[0x350] = 0;
  param_1[0x352] = 0;
  param_1[0x353] = 0;
  param_1[0x354] = 0;
  param_1[0x356] = 0;
  param_1[0x357] = 0;
  param_1[0x358] = 0;
  param_1[0x35a] = 0;
  param_1[0x35b] = 0;
  param_1[0x35c] = 0;
  param_1[0x35e] = 0;
  param_1[0x35f] = 0;
  param_1[0x360] = 0;
  param_1[0x362] = 0;
  param_1[0x363] = 0;
  param_1[0x364] = 0;
  param_1[0x366] = 0;
  param_1[0x367] = 0;
  param_1[0x368] = 0;
  param_1[0x36a] = 0;
  param_1[0x36b] = 0;
  param_1[0x36c] = 0;
  param_1[0x36e] = 0;
  param_1[0x36f] = 0;
  param_1[0x370] = 0;
  param_1[0x372] = 0;
  param_1[0x373] = 0;
  param_1[0x37c] = 0;
  param_1[0x37d] = 0;
  param_1[0x37e] = 0;
  param_1[0x37f] = 0;
  param_1[0x380] = 0;
  param_1[0x381] = 0;
  param_1[0x382] = 0;
  param_1[0x385] = 0;
  param_1[0x386] = 0;
  param_1[0x387] = 0;
  param_1[0x38a] = 0;
  param_1[0x38b] = 0;
  param_1[0x38c] = 0;
  param_1[0x38d] = 0;
  param_1[0x38f] = 0;
  param_1[0x391] = 0;
  param_1[0x392] = 0;
  param_1[0x393] = 0;
  *(undefined1 *)(param_1 + 0x394) = 0;
  param_1[0x395] = 0;
  param_1[0x396] = 0;
  param_1[0x397] = 0;
  *(undefined1 *)(param_1 + 0x398) = 0;
  param_1[0x39c] = 0;
  param_1[0x39d] = 0;
  param_1[0x39e] = 0;
  param_1[0x39f] = 0;
  param_1[0x3a0] = 0;
  param_1[0x3a1] = 0;
  param_1[0x3a2] = 0;
  param_1[0x3a3] = 0;
  param_1[0x3a4] = 0;
  param_1[0x3a5] = 0;
  param_1[0x3a7] = 43800000;
  param_1[0x3a7] = DAT_01259abc;
  param_1[0x3a8] = 0;
  param_1[0x3a9] = 0;
  param_1[0x3aa] = 0;
  param_1[0x3ab] = 0;
  param_1[0x3ad] = 0;
  param_1[0x3ae] = 0;
  param_1[0x3af] = 0;
  local_24 = param_1 + 0x3b1;
  param_1[0x3b2] = 0x18d;
  *local_24 = CGoodsPool::vftable;
  param_1[0x3c3] = 0;
  param_1[0x3c4] = 0;
  param_1[0x3c5] = 0;
  local_8 = 0x5b;
  _memset(param_1 + 0x3b3,0,0x40);
  FUN_00423920();
  local_24 = param_1 + 0x3c7;
  param_1[0x3c8] = 0x18d;
  *local_24 = CGoodsPool::vftable;
  param_1[0x3d9] = 0;
  param_1[0x3da] = 0;
  param_1[0x3db] = 0;
  local_8 = 0x5d;
  _memset(param_1 + 0x3c9,0,0x40);
  FUN_00423920();
  local_24 = param_1 + 0x3dd;
  param_1[0x3de] = 0x18d;
  *local_24 = CGoodsPool::vftable;
  param_1[0x3ef] = 0;
  param_1[0x3f0] = 0;
  param_1[0x3f1] = 0;
  local_8 = 0x5f;
  _memset(param_1 + 0x3df,0,0x40);
  FUN_00423920();
  local_24 = param_1 + 0x3f3;
  param_1[0x3f4] = 0x18d;
  *local_24 = CGoodsPool::vftable;
  param_1[0x405] = 0;
  param_1[0x406] = 0;
  param_1[0x407] = 0;
  local_8 = 0x61;
  _memset(param_1 + 0x3f5,0,0x40);
  FUN_00423920();
  local_24 = param_1 + 0x409;
  param_1[0x40a] = 0x18d;
  *local_24 = CGoodsPool::vftable;
  param_1[0x41b] = 0;
  param_1[0x41c] = 0;
  param_1[0x41d] = 0;
  local_8 = 99;
  _memset(param_1 + 0x40b,0,0x40);
  FUN_00423920();
  local_24 = param_1 + 0x41f;
  param_1[0x420] = 0x18d;
  *local_24 = CGoodsPool::vftable;
  param_1[0x431] = 0;
  param_1[0x432] = 0;
  param_1[0x433] = 0;
  local_8 = 0x65;
  _memset(param_1 + 0x421,0,0x40);
  FUN_00423920();
  local_24 = param_1 + 0x435;
  param_1[0x436] = 0x18d;
  *local_24 = CGoodsPool::vftable;
  param_1[0x447] = 0;
  param_1[0x448] = 0;
  param_1[0x449] = 0;
  local_8 = 0x67;
  _memset(param_1 + 0x437,0,0x40);
  FUN_00423920();
  local_24 = param_1 + 1099;
  param_1[0x44c] = 0x18d;
  *local_24 = CGoodsPool::vftable;
  param_1[0x45d] = 0;
  param_1[0x45e] = 0;
  param_1[0x45f] = 0;
  local_8 = 0x69;
  _memset(param_1 + 0x44d,0,0x40);
  FUN_00423920();
  local_24 = param_1 + 0x461;
  param_1[0x462] = 0x18d;
  *local_24 = CGoodsPool::vftable;
  param_1[0x473] = 0;
  param_1[0x474] = 0;
  param_1[0x475] = 0;
  local_8 = 0x6b;
  _memset(param_1 + 0x463,0,0x40);
  FUN_00423920();
  local_24 = param_1 + 0x477;
  param_1[0x478] = 0x18d;
  *local_24 = CGoodsPool::vftable;
  param_1[0x489] = 0;
  param_1[0x48a] = 0;
  param_1[0x48b] = 0;
  local_8 = 0x6d;
  _memset(param_1 + 0x479,0,0x40);
  FUN_00423920();
  param_1[0x48d] = 0;
  param_1[0x48e] = 0;
  param_1[0x48f] = 0;
  local_24 = param_1 + 0x491;
  param_1[0x492] = 0x18d;
  *local_24 = CGoodsPool::vftable;
  param_1[0x4a3] = 0;
  param_1[0x4a4] = 0;
  param_1[0x4a5] = 0;
  local_8 = 0x70;
  _memset(param_1 + 0x493,0,0x40);
  FUN_00423920();
  *(undefined1 *)(param_1 + 0x4a7) = 0;
  param_1[0x4a8] = 0;
  param_1[0x4a9] = 0;
  param_1[0x4aa] = 0;
  local_8 = 0x72;
  uVar3 = FUN_00976450();
  param_1[0x4ac] = uVar3;
  uVar9 = FUN_00b31c36();
  *(undefined8 *)(param_1 + 0x4ae) = uVar9;
  param_1[0x4b0] = 0;
  param_1[0x4b1] = 0;
  param_1[0x4b2] = 0;
  param_1[0x4b3] = 0;
  *(undefined1 *)(param_1 + 0x4b4) = 0;
  param_1[0x4b5] = 0;
  param_1[0x4b6] = 0;
  param_1[0x4b7] = 0;
  local_8 = 0x73;
  FUN_00968940();
  param_1[0x4fa] = 0;
  param_1[0x4fb] = 0;
  param_1[0x4fc] = 0;
  param_1[0x4fd] = 0;
  param_1[0x4fe] = 0;
  param_1[0x500] = 43800000;
  param_1[0x500] = DAT_01259abc;
  param_1[0x501] = 0;
  param_1[0x502] = 0;
  param_1[0x503] = 0;
  param_1[0x504] = 0;
  param_1[0x505] = 0;
  param_1[0x506] = 0;
  param_1[0x507] = 0;
  param_1[0x508] = 0;
  local_28 = 0x2d2d2d;
  param_1[0x50a] = 0x2d2d2d;
  param_1[0x50b] = 0;
  param_1[0x50c] = 0;
  *(undefined1 *)(param_1 + 0x50d) = 0;
  param_1[0x50e] = 0;
  param_1[0x510] = 0;
  param_1[0x511] = 0;
  param_1[0x512] = 0;
  param_1[0x513] = 0;
  param_1[0x514] = 0;
  param_1[0x515] = 0;
  param_1[0x516] = 0;
  param_1[0x517] = 0;
  param_1[0x518] = 0;
  param_1[0x519] = 0;
  param_1[0x51a] = 0;
  param_1[0x51b] = 0;
  param_1[0x51c] = 0;
  param_1[0x51d] = 0;
  uVar9 = FUN_00b31c36();
  *(undefined8 *)(param_1 + 0x51e) = uVar9;
  param_1[0x520] = 0;
  param_1[0x521] = 0;
  param_1[0x522] = 0;
  param_1[0x523] = 0;
  param_1[0x524] = 0;
  param_1[0x525] = 0;
  *(undefined1 *)(param_1 + 0x526) = 0;
  param_1[0x527] = 0;
  param_1[0x528] = 0;
  param_1[0x529] = 0;
  *(undefined1 *)(param_1 + 0x52a) = 0;
  param_1[0x52b] = 0;
  param_1[0x52c] = 0;
  param_1[0x52d] = 0;
  param_1[0x52f] = 0;
  param_1[0x530] = 0;
  param_1[0x531] = 0;
  param_1[0x534] = 0;
  param_1[0x535] = 0;
  param_1[0x536] = 0;
  param_1[0x537] = 0;
  param_1[0x538] = 0;
  param_1[0x539] = 0;
  param_1[0x53a] = 0;
  param_1[0x53b] = 0;
  param_1[0x53d] = 0;
  param_1[0x53e] = 0;
  param_1[0x53f] = 0;
  param_1[0x541] = 0;
  param_1[0x542] = 0;
  param_1[0x543] = 0;
  param_1[0x545] = 0;
  param_1[0x546] = 0;
  param_1[0x547] = 0;
  param_1[0x549] = 0;
  param_1[0x54a] = 0;
  param_1[0x54b] = 0;
  param_1[0x54e] = 0;
  param_1[0x54f] = 0;
  param_1[0x550] = 0;
  *(undefined1 *)(param_1 + 0x551) = 1;
  param_1[0x552] = 0;
  param_1[0x553] = 0;
  param_1[0x554] = 0;
  param_1[0x555] = 0;
  param_1[0x558] = 0;
  param_1[0x559] = 0;
  *(undefined1 *)(param_1 + 0x55a) = 0;
  param_1[0x55b] = 0;
  param_1[0x55c] = 0;
  param_1[0x55d] = 0;
  param_1[0x55e] = 0;
  param_1[0x560] = 0;
  param_1[0x561] = 0;
  param_1[0x562] = 0;
  param_1[0x564] = 0;
  param_1[0x565] = 0;
  param_1[0x566] = 0;
  param_1[0x568] = 0;
  param_1[0x569] = 0;
  param_1[0x56a] = 0;
  param_1[0x56b] = 0;
  param_1[0x56c] = 0;
  param_1[0x56d] = 0;
  *(undefined1 *)(param_1 + 0x56f) = 1;
  param_1[0x570] = 0;
  param_1[0x571] = 0;
  param_1[0x572] = 0;
  param_1[0x573] = 0;
  param_1[0x574] = 0;
  param_1[0x575] = 0;
  param_1[0x577] = 0;
  param_1[0x578] = 0;
  param_1[0x579] = 0;
  param_1[0x580] = 0xf;
  param_1[0x57f] = 0;
  *(undefined1 *)(param_1 + 0x57b) = 0;
  iVar2 = DAT_012586dc;
  local_8 = 0x87;
  uVar1 = *(uint *)(*(int *)(DAT_012586dc + 0x10) + 0x6c);
  uVar9 = __alldiv(uVar1 << 0x1e,
                   (((int)uVar1 >> 0x1f) << 0xf | uVar1 >> 0x11) << 0xf | (uVar1 & 0x1ffff) >> 2);
  *(undefined8 *)(param_1 + 0x518) = uVar9;
  uVar1 = *(uint *)(*(int *)(iVar2 + 0x10) + 0x70);
  uVar9 = __alldiv(uVar1 << 0x1e,
                   (((int)uVar1 >> 0x1f) << 0xf | uVar1 >> 0x11) << 0xf | (uVar1 & 0x1ffff) >> 2);
  *(undefined8 *)(param_1 + 0x51a) = uVar9;
  uVar1 = *(uint *)(*(int *)(iVar2 + 0x10) + 0x74);
  uVar9 = __alldiv(uVar1 << 0x1e,
                   (((int)uVar1 >> 0x1f) << 0xf | uVar1 >> 0x11) << 0xf | (uVar1 & 0x1ffff) >> 2);
  *(undefined8 *)(param_1 + 0x51c) = uVar9;
  local_1c = (int *)param_1[0x519];
  local_20 = param_1[0x518];
  local_28 = 0x8000;
  local_24 = (undefined4 *)0x0;
  if (((int)local_1c < 1) && (((int)local_1c < 0 || ((uint)param_1[0x518] < 0x8000)))) {
    puVar4 = &local_28;
  }
  else {
    puVar4 = &local_20;
  }
  uVar1 = puVar4[1];
  param_1[0x512] = *puVar4;
  param_1[0x513] = uVar1;
  local_1c = (int *)param_1[0x51b];
  local_20 = param_1[0x51a];
  local_28 = 0x8000;
  local_24 = (undefined4 *)0x0;
  if (((int)local_1c < 1) && (((int)local_1c < 0 || ((uint)param_1[0x51a] < 0x8000)))) {
    puVar4 = &local_28;
  }
  else {
    puVar4 = &local_20;
  }
  uVar1 = puVar4[1];
  param_1[0x514] = *puVar4;
  param_1[0x515] = uVar1;
  local_1c = (int *)param_1[0x51d];
  local_20 = param_1[0x51c];
  local_28 = 0x8000;
  local_24 = (undefined4 *)0x0;
  if (((int)local_1c < 1) && (((int)local_1c < 0 || ((uint)param_1[0x51c] < 0x8000)))) {
    puVar4 = &local_28;
  }
  else {
    puVar4 = &local_20;
  }
  uVar1 = puVar4[1];
  param_1[0x516] = *puVar4;
  param_1[0x517] = uVar1;
  param_1[0xdb] = param_2;
  param_1[0xdc] = param_3;
  param_1[0x85] = param_2;
  param_1[0x86] = param_3;
  param_1[0x1e] = DAT_0125dbf0;
  param_1[0x1f] = DAT_0125dbf0;
  param_1[0x20] = DAT_0125dbf0;
  uVar3 = FUN_00561180();
  local_3c = DAT_00f092fc;
  param_1[0x399] = uVar3;
  puVar5 = (undefined8 *)(param_1 + 0x252);
  iVar2 = 3;
  do {
    puStack_38 = (undefined1 *)local_3c;
    *puVar5 = CONCAT44(local_3c,local_3c);
    local_34 = (undefined1 *)local_3c;
    uStack_30 = local_3c;
    *(undefined4 *)((int)puVar5 + -4) = 0x18d;
    puVar5[1] = CONCAT44(local_3c,local_3c);
    *(undefined1 *)(puVar5 + 2) = 1;
    puVar5 = (undefined8 *)((int)puVar5 + 0x1c);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  local_24 = (undefined4 *)FUN_00aae9af();
  local_8 = 0x88;
  if (local_24 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_005678c0();
  }
  local_8 = 0x87;
  param_1[0x2f3] = uVar3;
  puVar6 = (undefined1 *)FUN_00aae9af();
  local_8 = 0x89;
  local_24 = (undefined4 *)puVar6;
  if (puVar6 == (undefined1 *)0x0) {
    puVar6 = (undefined1 *)0x0;
  }
  else {
    *puVar6 = 0;
    *(undefined4 *)(puVar6 + 0xc) = 0;
    uVar3 = FUN_0043cfa0();
    *(undefined4 *)(puVar6 + 8) = uVar3;
    *(undefined4 *)uVar3 = uVar3;
    *(int *)(*(int *)(puVar6 + 8) + 4) = *(int *)(puVar6 + 8);
    *(int *)(*(int *)(puVar6 + 8) + 8) = *(int *)(puVar6 + 8);
    *(undefined1 *)(*(int *)(puVar6 + 8) + 0x14) = 1;
    *(undefined1 *)(*(int *)(puVar6 + 8) + 0x15) = 1;
    puVar6[0x14] = 0;
  }
  local_8 = 0x87;
  param_1[0x19] = puVar6;
  FUN_007b9430();
  iVar2 = 0;
  do {
    local_24 = (undefined4 *)FUN_00aae9af();
    local_8 = 0x8a;
    if (local_24 == (undefined4 *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_00439010(local_24);
    }
    local_8 = 0x87;
    *(undefined4 *)(param_1[0x28] + iVar2 * 4) = uVar3;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 3);
  local_18 = 0;
  if (0 < (int)(*(int *)(DAT_01258a48 + 0x4c) - *(int *)(DAT_01258a48 + 0x48) & 0xfffffffcU)) {
    do {
      if (DAT_01258a40 == 0) {
        local_24 = (undefined4 *)FUN_00aae9af();
        local_8 = 0x8b;
        if (local_24 == (undefined4 *)0x0) {
          DAT_01258a40 = 0;
        }
        else {
          DAT_01258a40 = FUN_009747a0();
        }
        local_8 = 0x87;
      }
      local_1c = (int *)DAT_01258a40;
      FUN_0068f390();
      local_18 = local_18 + 1;
    } while (local_18 < *(int *)(DAT_01258a48 + 0x4c) - *(int *)(DAT_01258a48 + 0x48) >> 2);
  }
  local_18 = 0;
  if (0 < (int)(*(int *)(DAT_01258a48 + 0x3c) - *(int *)(DAT_01258a48 + 0x38) & 0xfffffffcU)) {
    do {
      if (DAT_01258a40 == 0) {
        local_24 = (undefined4 *)FUN_00aae9af();
        local_8 = 0x8c;
        if (local_24 == (undefined4 *)0x0) {
          DAT_01258a40 = 0;
        }
        else {
          DAT_01258a40 = FUN_009747a0();
        }
        local_8 = 0x87;
      }
      local_1c = (int *)DAT_01258a40;
      FUN_0068f390();
      local_18 = local_18 + 1;
    } while (local_18 < *(int *)(DAT_01258a48 + 0x3c) - *(int *)(DAT_01258a48 + 0x38) >> 2);
  }
  local_18 = 0;
  if (0 < (int)(*(int *)(DAT_01258a48 + 0x6c) - *(int *)(DAT_01258a48 + 0x68) & 0xfffffffcU)) {
    do {
      if (DAT_01258a40 == 0) {
        local_24 = (undefined4 *)FUN_00aae9af();
        local_8 = 0x8d;
        if (local_24 == (undefined4 *)0x0) {
          DAT_01258a40 = 0;
        }
        else {
          DAT_01258a40 = FUN_009747a0();
        }
        local_8 = 0x87;
      }
      local_1c = (int *)DAT_01258a40;
      FUN_0068f390();
      local_18 = local_18 + 1;
    } while (local_18 < *(int *)(DAT_01258a48 + 0x6c) - *(int *)(DAT_01258a48 + 0x68) >> 2);
  }
  local_18 = 0;
  if (0 < (int)(*(int *)(DAT_01258a48 + 0x5c) - *(int *)(DAT_01258a48 + 0x58) & 0xfffffffcU)) {
    do {
      if (DAT_01258a40 == 0) {
        local_24 = (undefined4 *)FUN_00aae9af();
        local_8 = 0x8e;
        if (local_24 == (undefined4 *)0x0) {
          DAT_01258a40 = 0;
        }
        else {
          DAT_01258a40 = FUN_009747a0();
        }
        local_8 = 0x87;
      }
      local_1c = (int *)DAT_01258a40;
      FUN_0068f390();
      local_18 = local_18 + 1;
    } while (local_18 < *(int *)(DAT_01258a48 + 0x5c) - *(int *)(DAT_01258a48 + 0x58) >> 2);
  }
  if (DAT_0125fdd8 == 0) {
    local_24 = (undefined4 *)FUN_00aae9af();
    local_8 = 0x8f;
    if (local_24 == (undefined4 *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_008b0060();
    }
    _local_8 = CONCAT31(uStack_7,0x90);
    local_24 = (undefined4 *)0x0;
    if ((iVar2 != DAT_0125fdd8) && (DAT_0125fdd8 != 0)) {
      FUN_005c1a70();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = 0x87;
    DAT_0125fdd8 = iVar2;
  }
  iVar2 = DAT_0125fdd8;
  piVar8 = (int *)(DAT_0125fdd8 + 0xc);
  local_18 = 0;
  local_1c = piVar8;
  if (0 < (int)(*(int *)(DAT_0125fdd8 + 0x10) - *(int *)(DAT_0125fdd8 + 0xc) & 0xfffffffcU)) {
    do {
      puStack_38 = (undefined1 *)0x0;
      local_34 = (undefined1 *)0x0;
      uStack_30 = 0;
      local_8 = 0x91;
      FUN_0054a7c0();
      local_8 = 0x87;
      puVar6 = puStack_38;
      if (puStack_38 != (undefined1 *)0x0) {
        while( true ) {
          if (puVar6 == local_34) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          if (0xf < *(uint *)(puVar6 + 0x14)) break;
          *(undefined4 *)(puVar6 + 0x14) = 0xf;
          *(undefined4 *)(puVar6 + 0x10) = 0;
          *puVar6 = 0;
          puVar6 = puVar6 + 0x1c;
        }
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      puStack_38 = (undefined1 *)0x0;
      local_34 = (undefined1 *)0x0;
      uStack_30 = 0;
      local_24 = (undefined4 *)0x0;
      FUN_004e9b90();
      local_18 = local_18 + 1;
    } while (local_18 < *(int *)(iVar2 + 0x10) - *piVar8 >> 2);
  }
  FUN_00548890();
  local_18 = 0;
  if (0 < (int)(param_1[0x48e] - param_1[0x48d] & 0xfffffffc)) {
    do {
      piVar8 = param_1 + 0x48d;
      if (local_18 == 1) {
        puVar7 = (undefined4 *)FUN_00aae9af();
        if (puVar7 == (undefined4 *)0x0) {
          *(undefined4 *)(*piVar8 + 4) = 0;
        }
        else {
          FUN_004370a0();
          *puVar7 = CAdministrationSettings::vftable;
          *(undefined4 **)(*piVar8 + 4) = puVar7;
        }
      }
      else if (local_18 == 0) {
        local_24 = (undefined4 *)FUN_00aae9af();
        local_8 = 0x92;
        if (local_24 == (undefined4 *)0x0) {
          local_8 = 0x87;
          *(undefined4 *)param_1[0x48d] = 0;
        }
        else {
          uVar3 = FUN_004383f0();
          local_8 = 0x87;
          *(undefined4 *)param_1[0x48d] = uVar3;
        }
      }
      else if (local_18 == 3) {
        local_24 = (undefined4 *)FUN_00aae9af();
        local_8 = 0x93;
        if (local_24 == (undefined4 *)0x0) {
          local_8 = 0x87;
          *(undefined4 *)(param_1[0x48d] + 0xc) = 0;
        }
        else {
          uVar3 = FUN_004388e0();
          local_8 = 0x87;
          *(undefined4 *)(param_1[0x48d] + 0xc) = uVar3;
        }
      }
      else if (local_18 == 2) {
        puVar7 = (undefined4 *)FUN_00aae9af();
        if (puVar7 == (undefined4 *)0x0) {
          puVar7 = (undefined4 *)0x0;
        }
        else {
          FUN_004370a0();
          *puVar7 = CSocialSpending::vftable;
        }
        *(undefined4 **)(*piVar8 + 8) = puVar7;
      }
      local_18 = local_18 + 1;
    } while (local_18 < (int)(param_1[0x48e] - param_1[0x48d]) >> 2);
  }
  FUN_00548900();
  FUN_0043a880();
  FUN_0043a880();
  FUN_0043a880();
  FUN_0043a880();
  FUN_00503020();
  ExceptionList = local_10;
  return param_1;
}

