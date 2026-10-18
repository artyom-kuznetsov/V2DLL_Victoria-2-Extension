// FUN_0064a6d0 @ 0064a6d0 body=[[0064a6d0, 0064b879] [0064b87d, 0064b9cc] [0064b9d0, 0064b9fa] [0064b9fe, 0064bbc1] [0064bbc5, 0064bbfb] [0064bbff, 0064bc39] [0064bc3d, 0064bc63] [0064bc67, 0064bee3] [0064bee7, 0064c059] [0064c05d, 0064c1a4] [0064c1a8, 0064c29a] [0064c29e, 0064c36a] [0064c36e, 0064c3c5] [0064c3c9, 0064c4ff] [0064c503, 0064c546] [0064c54a, 0064c55e]]


undefined4 *
FUN_0064a6d0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined1 param_5,undefined4 *param_6)

{
  int *piVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 *****pppppuVar7;
  int iVar8;
  char *pcVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined4 *puVar14;
  void *_Dst;
  int *piVar15;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  int iVar16;
  bool bVar17;
  float10 fVar18;
  undefined1 local_2d4 [36];
  char local_2b0 [380];
  undefined **local_134 [18];
  undefined4 ****local_ec [4];
  undefined4 local_dc;
  uint local_d8;
  uint local_d0;
  undefined4 local_c0;
  uint local_bc;
  uint local_b4;
  uint local_a4;
  uint local_a0;
  uint local_98;
  uint local_88;
  uint local_84;
  undefined4 local_7c;
  uint local_6c;
  uint local_68;
  uint local_60;
  uint local_50;
  uint local_4c;
  double local_44;
  uint local_38 [4];
  undefined4 local_28;
  uint local_24;
  double local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00bae8b6;
  local_10 = ExceptionList;
  local_1c = (double)(ulonglong)local_1c._0_4_;
  ExceptionList = &local_10;
  FUN_00647d30(param_1,param_3);
  local_8 = 0;
  param_1[0x22] = CLostDeviceInterface::vftable;
  param_1[0x23] = CReloadDispatcher::vftable;
  *param_1 = CInGameIdler::vftable;
  param_1[0x22] = CInGameIdler::vftable;
  param_1[0x23] = CInGameIdler::vftable;
  FUN_00679d30(0,0,0,0,0,0,0,0,0,0,0,0,FUN_0064e890,0,FUN_0064ea00,0,0,0);
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined2 *)(param_1 + 0x3a) = 0x101;
  FUN_00679d30(&LAB_0067cc00,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  *(undefined1 *)(param_1 + 0x53) = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  *(undefined1 *)(param_1 + 0x57) = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  *(undefined1 *)(param_1 + 0x5c) = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  FUN_00679d30(FUN_0066eec0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  FUN_00679d30(FUN_0066f060,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  FUN_00679d30(FUN_0066f240,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  FUN_00679d30(FUN_0066f250,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  FUN_00679d30(FUN_006739e0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  FUN_00679d30(FUN_00675e00,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  param_1[0xd8] = CTextBufferObserverGlue<CInGameIdler>::vftable;
  param_1[0xd9] = param_1;
  param_1[0xda] = 0;
  param_1[0xdb] = 0;
  param_1[0xdc] = 0;
  param_1[0xdd] = 0;
  param_1[0xde] = FUN_00675e00;
  param_1[0xdf] = 0;
  FUN_00679d30(FUN_0066fef0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  FUN_00679d30(0,0,0,0,0,0,0,0,0,0,0,0,FUN_00679830,0,FUN_006797c0,0,0,0);
  FUN_00679d30(0,0,0,0,0,0,0,0,0,0,0,0,&LAB_006798d0,0,0,0,0,0);
  param_1[0x11f] = 0;
  param_1[0x120] = 0;
  param_1[0x121] = 0;
  param_1[0x122] = 0;
  param_1[0x123] = 0;
  param_1[0x124] = FUN_006750f0;
  param_1[0x11c] = CCheckBoxObserverGlue<CInGameIdler>::vftable;
  param_1[0x11d] = param_1;
  param_1[0x11e] = 0;
  param_1[0x125] = 0;
  param_1[0x126] = 0;
  param_1[0x127] = 0;
  param_1[0x128] = 0;
  param_1[0x129] = 0;
  FUN_00679d30(FUN_006766a0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  FUN_00679d30(FUN_006765b0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  FUN_00679d30(0,0,0,0,0,0,0,0,0,0,0,0,FUN_00674ce0,0,0,0,0,0);
  FUN_00679d30(FUN_006750e0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  FUN_00679d30(FUN_00674a70,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  FUN_00679d30(FUN_00673d30,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  FUN_00679d30(FUN_00674000,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  param_1[0x1b6] = CTextBufferObserverGlue<CInGameIdler>::vftable;
  param_1[0x1b7] = param_1;
  param_1[0x1b8] = 0;
  param_1[0x1b9] = 0;
  param_1[0x1ba] = 0;
  param_1[0x1bb] = 0;
  param_1[0x1bc] = FUN_00673d30;
  param_1[0x1bd] = 0;
  param_1[0x1be] = 0;
  param_1[0x1bf] = 0;
  param_1[0x1c0] = 0;
  param_1[0x1c2] = 0;
  param_1[0x1c3] = 0;
  param_1[0x1c4] = 0;
  param_1[0x1c6] = 0;
  FUN_00679d30(FUN_00675050,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  param_1[0x1de] = 0;
  param_1[0x1df] = 0;
  param_1[0x1e0] = 0;
  param_1[0x1e1] = 0;
  param_1[0x1e2] = 0;
  param_1[0x1e3] = 0;
  param_1[0x1e4] = FUN_006727d0;
  param_1[0x1dc] = CCheckBoxObserverGlue<CInGameIdler>::vftable;
  param_1[0x1dd] = param_1;
  param_1[0x1e5] = 0;
  param_1[0x1e6] = 0;
  param_1[0x1e7] = 0;
  param_1[0x1e8] = 0;
  param_1[0x1e9] = 0;
  param_1[0x1ec] = 0;
  param_1[0x1ed] = 0;
  param_1[0x1ee] = 0;
  param_1[0x1ef] = 0;
  param_1[0x1f0] = FUN_006736f0;
  param_1[0x1ea] = CCheckBoxObserverGlue<CInGameIdler>::vftable;
  param_1[0x1eb] = param_1;
  param_1[0x1f1] = 0;
  param_1[0x1f2] = 0;
  param_1[499] = 0;
  param_1[500] = 0;
  param_1[0x1f5] = 0;
  param_1[0x1f6] = 0;
  param_1[0x1f7] = 0;
  param_1[0x1f8] = 0;
  param_1[0x1f9] = 0;
  param_1[0x1fa] = 0;
  FUN_00679d30(0,0,0,0,0,0,0,0,0,0,0,0,FUN_006519a0,0,0,0,0,0);
  param_1[0x210] = CCheckBoxObserverGlue<CInGameIdler>::vftable;
  param_1[0x211] = param_1;
  param_1[0x212] = 0;
  param_1[0x213] = 0;
  param_1[0x214] = FUN_00651b70;
  param_1[0x215] = 0;
  param_1[0x216] = 0;
  param_1[0x217] = 0;
  param_1[0x218] = 0;
  param_1[0x219] = 0;
  param_1[0x21a] = 0;
  param_1[0x21b] = 0;
  param_1[0x21c] = 0;
  param_1[0x21d] = 0;
  param_1[0x220] = 0;
  param_1[0x222] = 0;
  param_1[0x223] = 0;
  param_1[0x224] = FUN_00651b70;
  param_1[0x21e] = CCheckBoxObserverGlue<CInGameIdler>::vftable;
  param_1[0x21f] = param_1;
  param_1[0x221] = 0;
  param_1[0x225] = 0;
  param_1[0x226] = 0;
  param_1[0x227] = 0;
  param_1[0x228] = 0;
  param_1[0x229] = 0;
  param_1[0x22a] = 0;
  param_1[0x22b] = 0;
  FUN_00679d30(FUN_00651300,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  FUN_00679d30(FUN_00678860,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  FUN_00679d30(FUN_00651440,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  FUN_00679d30(FUN_00651690,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  FUN_00679d30(FUN_006518e0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  FUN_00679d30(FUN_0064edc0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  local_8._0_1_ = 0x27;
  param_1[0x2a9] = 0xf;
  param_1[0x2a8] = 0;
  *(undefined1 *)(param_1 + 0x2a4) = 0;
  FUN_00408ed0();
  local_8._0_1_ = 0x28;
  FUN_00648af0(param_1 + 0x2ab);
  *(undefined1 *)(param_1 + 0x2d4) = *(undefined1 *)((int)param_6 + 0xc0);
  param_1[0x2d5] = 0;
  FUN_00679d30(FUN_0064f570,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  uVar5 = DAT_00f092dc;
  *(undefined1 *)(param_1 + 0x2ea) = 0;
  param_1[0x2eb] = 100;
  param_1[0x2ec] = uVar5;
  param_1[0x2ed] = 0;
  param_1[0x2ee] = 0;
  param_1[0x2ef] = 0;
  *(undefined1 *)(param_1 + 0x2f0) = 0;
  param_1[0x2f3] = 0;
  param_1[0x2f4] = 0;
  param_1[0x2f5] = 0;
  *(undefined1 *)(param_1 + 0x2f6) = 0;
  param_1[0x2f2] = CStack<MAPMODE>::vftable;
  FUN_00679d30(FUN_0064ceb0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  FUN_00679d30(&LAB_0064cef0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  FUN_00679d30(FUN_0066eec0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  FUN_00679d30(FUN_0064cf20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  param_1[0x348] = 0;
  param_1[0x349] = 0;
  FUN_00679d30(&LAB_0066a660,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  param_1[0x35f] = 0;
  param_1[0x360] = 0;
  param_1[0x361] = 0;
  param_1[0x362] = 0;
  param_1[0x364] = 0;
  param_1[0x365] = 0;
  param_1[0x366] = 0;
  param_1[0x368] = 0;
  param_1[0x369] = 0;
  param_1[0x36a] = 0;
  *(undefined1 *)(param_1 + 0x36b) = 0;
  param_1[0x36d] = 0;
  FUN_00679d30(FUN_0066c290,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  FUN_00679d30(FUN_0066c400,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  FUN_00679d30(FUN_0066c570,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  FUN_00679d30(FUN_0066c6f0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  FUN_00679d30(FUN_0066c870,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  FUN_00679d30(FUN_0066c9f0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  FUN_00679d30(FUN_0066cb70,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  FUN_00679d30(FUN_0066ccf0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  FUN_00679d30(FUN_0066ce70,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  FUN_00679d30(FUN_0066e240,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  FUN_00679d30(FUN_0066e120,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  FUN_00679d30(FUN_0066e000,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  FUN_00679d30(FUN_0066d4f0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  FUN_00679d30(FUN_0066d2b0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  FUN_00679d30(FUN_0066d3d0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  FUN_00679d30(FUN_0066dee0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  FUN_00679d30(FUN_0066ddc0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  FUN_00679d30(FUN_0066d610,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  FUN_00679d30(FUN_0066d730,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  FUN_00679d30(FUN_0066da90,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  FUN_00679d30(FUN_0066d970,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  FUN_00679d30(FUN_0066d850,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  FUN_00679d30(FUN_0066e940,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  FUN_00679d30(FUN_0066ea30,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  local_8._0_1_ = 0x4c;
  *(undefined2 *)(param_1 + 0x54e) = 1;
  param_1[0x553] = 0xffffffff;
  _eh_vector_constructor_iterator_(param_1 + 0x554,0x10,10,FUN_0084a380,FUN_004e9430);
  param_1[0x580] = 0;
  param_1[0x581] = 0;
  param_1[0x582] = 0;
  *(undefined1 *)(param_1 + 0x583) = 0;
  param_1[0x584] = 0;
  param_1[0x585] = 0;
  param_1[0x586] = 0;
  param_1[0x587] = 0;
  param_1[0x588] = 0;
  *(undefined1 *)(param_1 + 0x589) = 0;
  param_1[0x58a] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x58b) = 0;
  FUN_00679d30(FUN_0066eb20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  FUN_00679d30(&LAB_00658ef0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  FUN_00679d30(FUN_0066edf0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  FUN_00679d30(FUN_004010c0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  FUN_00679d30(FUN_0066ee60,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  local_8._0_1_ = 0x54;
  param_1[0x5fa] = param_4;
  param_1[0x5f8] = 0;
  param_1[0x5f9] = param_2;
  FUN_0098b350(param_1 + 0x5fb);
  param_1[0x65e] = 0;
  local_8._0_1_ = 0x56;
  param_1[0x660] = 0;
  FUN_0063f480(param_1 + 0x661);
  param_1[0x73e] = 0;
  param_1[0x73f] = 0;
  param_1[0x740] = 0;
  *(undefined1 *)(param_1 + 0x741) = 0;
  param_1[0x743] = 0;
  param_1[0x746] = 0;
  *(undefined2 *)(param_1 + 0x748) = 0;
  *(undefined1 *)((int)param_1 + 0x1d22) = 0;
  param_1[0x74a] = 0;
  param_1[0x74c] = CChatMessageObserverGlue<CInGameIdler>::vftable;
  param_1[0x74d] = param_1;
  param_1[0x74e] = FUN_00676e80;
  param_1[0x74f] = 0;
  param_1[0x750] = CTextBufferObserverGlue<CInGameIdler>::vftable;
  param_1[0x751] = param_1;
  param_1[0x752] = 0;
  param_1[0x753] = 0;
  param_1[0x754] = 0;
  param_1[0x755] = 0;
  param_1[0x756] = FUN_00677ed0;
  param_1[0x757] = 0;
  local_8._0_1_ = 0x5a;
  *(undefined1 *)(param_1 + 0x758) = 0;
  param_1[0x759] = 0;
  param_1[0x75a] = 0;
  param_1[0x75b] = 0;
  param_1[0x75d] = 0;
  param_1[0x760] = 0;
  param_1[0x761] = 0;
  param_1[0x767] = 0xf;
  param_1[0x766] = 0;
  *(undefined1 *)(param_1 + 0x762) = 0;
  FUN_00409350(&DAT_00ded94d,0);
  *(undefined8 *)(param_1 + 0x76a) = 0;
  param_1[0x76c] = 0;
  param_1[0x76d] = 0x100;
  *(undefined2 *)(param_1 + 0x76e) = 0;
  *(undefined1 *)((int)param_1 + 0x1dba) = 0;
  param_1[0x76f] = 0;
  param_1[0x771] = 0;
  param_1[0x772] = 0;
  param_1[0x773] = 0;
  param_1[0x774] = 0;
  param_1[0x775] = 0;
  param_1[0x776] = 0x18d;
  param_1[0x777] = 0;
  param_1[0x778] = 0;
  param_1[0x779] = 0;
  *(undefined1 *)(param_1 + 0x77a) = 0;
  param_1[0x77b] = 0;
  param_1[0x77c] = 0;
  param_1[0x77d] = 0;
  *(undefined1 *)(param_1 + 0x77e) = 0;
  local_8._0_1_ = 0x5d;
  *(undefined1 *)(param_1 + 0x77f) = 0;
  param_6 = (undefined4 *)FUN_00aae9af(0x148);
  local_8._0_1_ = 0x5e;
  if (param_6 == (undefined4 *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_006991a0();
  }
  param_1[0x780] = uVar5;
  param_1[0x782] = 0;
  param_1[0x783] = 0;
  param_1[0x789] = 0;
  FUN_00679d30(FUN_0064cd70,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  FUN_00679d30(&LAB_0064ce20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  local_8._0_1_ = 0x61;
  piVar6 = param_1 + 0x1f8;
  *(undefined1 *)(param_1 + 0x744) = 0;
  FUN_0068ea30(6);
  *(undefined4 *)*piVar6 = 1;
  *(undefined4 *)(*piVar6 + 4) = 1;
  *(undefined4 *)(*piVar6 + 8) = 1;
  *(undefined4 *)(*piVar6 + 0xc) = 1;
  *(undefined4 *)(*piVar6 + 0x10) = 1;
  *(undefined4 *)(*piVar6 + 0x14) = 1;
  local_4c = 0xf;
  local_50 = 0;
  local_60 = local_60 & 0xffffff00;
  FUN_00409350("click",5);
  local_8._0_1_ = 0x62;
  FUN_00408ed0();
  local_8._0_1_ = 0x61;
  if (0xf < local_4c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_60);
  }
  local_4c = 0xf;
  local_50 = 0;
  local_60 = local_60 & 0xffffff00;
  if (DAT_00f20c18 == (int *)0x0) {
    DAT_00f20c18 = (int *)FUN_00aae9af(4);
    if (DAT_00f20c18 == (int *)0x0) {
      DAT_00f20c18 = (int *)0x0;
    }
    else {
      *DAT_00f20c18 = (int)&PTR_FUN_00e38b28;
    }
  }
  piVar6 = (int *)(**(code **)(*DAT_00f20c18 + 4))();
  (**(code **)(*piVar6 + 4))();
  fVar18 = (float10)(**(code **)(*piVar6 + 0x14))();
  local_44 = (double)fVar18;
  *(undefined2 *)(param_1 + 0x2f1) = 0;
  local_d8 = 0xf;
  local_dc = 0;
  local_ec[0] = (undefined4 ****)((uint)local_ec[0] & 0xffffff00);
  FUN_00409350("music/*.mp3",0xb);
  local_8._0_1_ = 99;
  pppppuVar7 = (undefined4 *****)local_ec[0];
  if (local_d8 < 0x10) {
    pppppuVar7 = local_ec;
  }
  iVar8 = FUN_00ab003e(pppppuVar7,local_2d4);
  if (iVar8 != -1) {
    do {
      pcVar9 = local_2b0;
      local_24 = 0xf;
      local_28 = 0;
      local_38[0] = local_38[0] & 0xffffff00;
      do {
        cVar2 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar2 != '\0');
      FUN_00409350(local_2b0,(int)pcVar9 - (int)(local_2b0 + 1));
      local_8._0_1_ = 100;
      local_bc = 0xf;
      local_c0 = 0;
      local_d0 = local_d0 & 0xffffff00;
      FUN_00409350("music/",6);
      local_8._0_1_ = 0x65;
      FUN_00988f20(local_38);
      if (0xf < local_bc) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_d0);
      }
      local_bc = 0xf;
      local_c0 = 0;
      local_d0 = local_d0 & 0xffffff00;
      local_8._0_1_ = 0x68;
      if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_38[0]);
      }
      local_24 = 0xf;
      local_28 = 0;
      local_38[0] = local_38[0] & 0xffffff00;
      local_4c = 0xf;
      local_50 = 0;
      local_60 = local_60 & 0xffffff00;
      FUN_00409350("music/diesiraeintro.mp3",0x17);
      uVar12 = local_6c;
      local_8 = CONCAT31(local_8._1_3_,0x69);
      local_1c = (double)((ulonglong)local_1c | 0x100000000);
      uVar10 = local_50;
      if (local_6c < local_50) {
        uVar10 = local_6c;
      }
      iVar11 = FUN_00414bd0(uVar10);
      bVar17 = false;
      if (iVar11 == 0) {
        if (uVar12 < local_50) {
          uVar12 = 0xffffffff;
        }
        else {
          uVar12 = (uint)(uVar12 != local_50);
        }
        bVar17 = uVar12 == 0;
      }
      if (bVar17) {
LAB_0064bba2:
        param_6 = (undefined4 *)((uint)param_6 & 0xffffff);
      }
      else {
        local_a0 = 0xf;
        local_a4 = 0;
        local_b4 = local_b4 & 0xffffff00;
        FUN_00409350("music/thecoronation_titletheme.mp3",0x22);
        uVar10 = local_6c;
        uVar12 = local_a4;
        local_8 = 0x6a;
        local_1c = (double)((ulonglong)local_1c | 0x200000000);
        uVar13 = local_6c;
        if (local_a4 <= local_6c) {
          uVar13 = local_a4;
        }
        iVar11 = FUN_00414bd0(uVar13);
        bVar17 = false;
        if (iVar11 == 0) {
          if (uVar10 < uVar12) {
            uVar12 = 0xffffffff;
          }
          else {
            uVar12 = (uint)(uVar10 != uVar12);
          }
          bVar17 = uVar12 == 0;
        }
        if (bVar17) goto LAB_0064bba2;
        local_84 = 0xf;
        local_88 = 0;
        local_98 = local_98 & 0xffffff00;
        FUN_00409350("music/victorymarchverdi.mp3",0x1b);
        uVar10 = local_6c;
        uVar12 = local_88;
        local_1c = (double)((ulonglong)local_1c | 0x400000000);
        uVar13 = local_6c;
        if (local_88 <= local_6c) {
          uVar13 = local_88;
        }
        iVar11 = FUN_00414bd0(uVar13);
        bVar17 = false;
        if (iVar11 == 0) {
          if (uVar10 < uVar12) {
            uVar12 = 0xffffffff;
          }
          else {
            uVar12 = (uint)(uVar10 != uVar12);
          }
          bVar17 = uVar12 == 0;
        }
        param_6 = (undefined4 *)CONCAT13(1,param_6._0_3_);
        if (bVar17) goto LAB_0064bba2;
      }
      if (((ulonglong)local_1c & 0x400000000) != 0) {
        local_1c = (double)((ulonglong)local_1c & 0xfffffffbffffffff);
        if (0xf < local_84) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_98);
        }
        local_84 = 0xf;
        local_88 = 0;
        local_98 = local_98 & 0xffffff00;
      }
      if (((ulonglong)local_1c & 0x200000000) != 0) {
        local_1c = (double)((ulonglong)local_1c & 0xfffffffdffffffff);
        if (0xf < local_a0) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_b4);
        }
        local_a0 = 0xf;
        local_a4 = 0;
        local_b4 = local_b4 & 0xffffff00;
      }
      local_8 = 0x68;
      if ((((ulonglong)local_1c & 0x100000000) != 0) &&
         (local_1c = (double)((ulonglong)local_1c & 0xfffffffeffffffff), 0xf < local_4c)) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_60);
      }
      if (param_6._3_1_ != '\0') {
        FUN_00a840b0();
      }
      local_8._0_1_ = 99;
      if (0xf < local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_7c);
      }
      iVar11 = FUN_00ab0165(iVar8,local_2d4);
    } while (iVar11 == 0);
    FUN_00ab0293(iVar8);
  }
  iVar8 = param_1[0x5f9];
  param_1[0x742] = 0;
  puVar3 = *(undefined4 **)(iVar8 + 0x6bc94);
  puVar14 = param_1 + 0x22;
  DAT_01258a66 = 0;
  param_6 = puVar14;
  if (&param_6 < puVar3) {
    puVar4 = *(undefined4 **)(iVar8 + 0x6bc90);
    if (puVar4 <= &param_6) {
      if (puVar3 == *(undefined4 **)(iVar8 + 0x6bc98)) {
        FUN_00a513f0();
      }
      if (*(undefined4 **)(iVar8 + 0x6bc94) != (undefined4 *)0x0) {
        **(undefined4 **)(iVar8 + 0x6bc94) =
             *(undefined4 *)(*(int *)(iVar8 + 0x6bc90) + ((int)&param_6 - (int)puVar4 >> 2) * 4);
      }
      goto LAB_0064bd1a;
    }
  }
  if (puVar3 == *(undefined4 **)(iVar8 + 0x6bc98)) {
    FUN_00a513f0();
  }
  if (*(int **)(iVar8 + 0x6bc94) != (int *)0x0) {
    **(int **)(iVar8 + 0x6bc94) = (int)puVar14;
  }
LAB_0064bd1a:
  *(int *)(iVar8 + 0x6bc94) = *(int *)(iVar8 + 0x6bc94) + 4;
  *(undefined1 *)(DAT_012588e8 + 3000) = param_5;
  *(undefined1 *)(param_1 + 0x17) = param_5;
  param_1[0x58c] = 0;
  param_1[0x58e] = 0;
  iVar8 = *(int *)(param_1[0x5fa] + 0x124);
  *(undefined4 **)(iVar8 + 4) = param_1 + 0x661;
  *(undefined4 **)(iVar8 + 0x20cc) = param_1 + 0x661;
  iVar8 = DAT_0125870c;
  param_1[0x36d] = 0;
  *(undefined4 *)(iVar8 + 0x2ad8) = 0;
  if (DAT_0125b5e0 == (undefined4 *)0x0) {
    iVar8 = FUN_00aae9af(0x180);
    local_8._0_1_ = 0x6c;
    if (iVar8 == 0) {
      puVar14 = (undefined4 *)0x0;
    }
    else {
      puVar14 = (undefined4 *)FUN_00475150(iVar8);
    }
    local_8._0_1_ = 0x6d;
    if ((puVar14 != DAT_0125b5e0) && (DAT_0125b5e0 != (undefined4 *)0x0)) {
      (**(code **)*DAT_0125b5e0)(1);
    }
    local_8._0_1_ = 99;
    DAT_0125b5e0 = puVar14;
  }
  DAT_0125b5e0[0x3b] = 0xffff;
  if (DAT_0125b5e0 == (undefined4 *)0x0) {
    iVar8 = FUN_00aae9af(0x180);
    local_8._0_1_ = 0x6e;
    if (iVar8 == 0) {
      puVar14 = (undefined4 *)0x0;
    }
    else {
      puVar14 = (undefined4 *)FUN_00475150(iVar8);
    }
    local_8._0_1_ = 0x6f;
    if ((puVar14 != DAT_0125b5e0) && (DAT_0125b5e0 != (undefined4 *)0x0)) {
      (**(code **)*DAT_0125b5e0)(1);
    }
    local_8._0_1_ = 99;
    DAT_0125b5e0 = puVar14;
  }
  DAT_0125b5e0[0x3c] = 0;
  *(undefined1 *)(param_1 + 0x552) = 0;
  *(undefined1 *)(param_1 + 0x36c) = 0;
  *(undefined1 *)(param_1 + 0x57f) = 0;
  if (DAT_0125ce80 == (undefined4 *)0x0) {
    puVar14 = (undefined4 *)FUN_00aae9af(0x3c);
    local_8._0_1_ = 0x70;
    if (puVar14 == (undefined4 *)0x0) {
      puVar14 = (undefined4 *)0x0;
    }
    else {
      puVar14[1] = 0x1ff;
      *puVar14 = 0;
      _Dst = (void *)FUN_00aad56b(0x7fc);
      puVar14[2] = _Dst;
      _memset(_Dst,0,puVar14[1] * 4);
      puVar14[3] = 0;
      puVar14[4] = 0;
      puVar14[5] = 0;
      puVar14[7] = 0;
      puVar14[8] = 0;
      puVar14[9] = 0;
    }
    puVar3 = DAT_0125ce80;
    local_8 = CONCAT31(local_8._1_3_,0x71);
    param_6 = (undefined4 *)0x0;
    if ((puVar14 != DAT_0125ce80) && (DAT_0125ce80 != (undefined4 *)0x0)) {
      FUN_004dadf0(DAT_0125ce80);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(puVar3);
    }
    local_8._0_1_ = 99;
    DAT_0125ce80 = puVar14;
  }
  puVar14 = DAT_0125ce80;
  uVar5 = DAT_00f092fc;
  iVar11 = (int)(DAT_0125ce80[4] - DAT_0125ce80[3]) >> 2;
  iVar8 = 0;
  if (3 < iVar11) {
    piVar15 = (int *)(DAT_0125ce80[3] + 8);
    iVar16 = (iVar11 - 4U >> 2) + 1;
    iVar8 = iVar16 * 4;
    do {
      *(undefined4 *)(piVar15[-2] + 0xc0) = uVar5;
      *(undefined4 *)(piVar15[-1] + 0xc0) = uVar5;
      *(undefined4 *)(*piVar15 + 0xc0) = uVar5;
      piVar1 = piVar15 + 1;
      piVar15 = piVar15 + 4;
      iVar16 = iVar16 + -1;
      *(undefined4 *)(*piVar1 + 0xc0) = uVar5;
    } while (iVar16 != 0);
  }
  if (iVar8 < iVar11) {
    piVar15 = (int *)(puVar14[3] + iVar8 * 4);
    iVar11 = iVar11 - iVar8;
    do {
      iVar8 = *piVar15;
      piVar15 = piVar15 + 1;
      iVar11 = iVar11 + -1;
      *(undefined4 *)(iVar8 + 0xc0) = uVar5;
    } while (iVar11 != 0);
  }
  if (*(char *)(DAT_012588e8 + 0xd10) == '\0') {
    FUN_005ee3a0(DAT_012588d4,DAT_012588e8 + 0xb0c);
  }
  FUN_0048d720();
  fVar18 = (float10)(**(code **)(*piVar6 + 0x14))();
  local_1c = (double)fVar18;
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  FUN_00409350("eu3idler.cpp",0xc);
  local_8._0_1_ = 0x72;
  FUN_004015b0();
  local_8._0_1_ = 0x73;
  uVar5 = FUN_00987d20(local_1c - local_44,extraout_ECX,&DAT_00e07938);
  uVar5 = FUN_0048c130(uVar5);
  FUN_00418e30(uVar5);
  FUN_00401280();
  local_8._0_1_ = 0x72;
  FUN_00987ac0(local_134);
  local_134[0] = std::ios_base::vftable;
  FUN_00aad52d(local_134);
  iVar8 = DAT_012588e8;
  local_8 = CONCAT31(local_8._1_3_,99);
  if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_38[0]);
  }
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  local_44 = local_1c;
  if (*(char *)(DAT_012588e8 + 0xd10) == '\0') {
    piVar15 = *(int **)(DAT_012588e8 + 0xb3c);
    while (piVar15 != (int *)0x0) {
      iVar11 = *piVar15;
      piVar15 = (int *)piVar15[2];
      *(undefined4 *)(iVar11 + 0xc) = *(undefined4 *)(iVar8 + 0xb0c);
    }
  }
  FUN_00682b40(iVar8);
  FUN_004a0fa0();
  iVar8 = DAT_012588e8;
  for (puVar14 = *(undefined4 **)(DAT_012588e8 + 0xadc);
      (*(undefined4 **)(iVar8 + 0xadc) <= puVar14 && (puVar14 < *(undefined4 **)(iVar8 + 0xae0)));
      puVar14 = puVar14 + 1) {
    FUN_0050e540(*puVar14);
  }
  fVar18 = (float10)(**(code **)(*piVar6 + 0x14))();
  local_1c = (double)fVar18;
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  FUN_00409350("eu3idler.cpp",0xc);
  local_8._0_1_ = 0x74;
  FUN_004015b0();
  local_8._0_1_ = 0x75;
  uVar5 = FUN_00987d20(local_1c - local_44,extraout_ECX_00,&DAT_00e07938);
  uVar5 = FUN_0048c130(uVar5);
  FUN_00418e30(uVar5);
  FUN_00401280();
  local_8._0_1_ = 0x74;
  FUN_00987ac0(local_134);
  local_134[0] = std::ios_base::vftable;
  FUN_00aad52d(local_134);
  local_8._0_1_ = 99;
  if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_38[0]);
  }
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  local_44 = local_1c;
  if (*(char *)(DAT_012588e8 + 0xd11) == '\0') {
    FUN_00687610(DAT_012588e8);
  }
  fVar18 = (float10)(**(code **)(*piVar6 + 0x14))();
  local_1c = (double)fVar18;
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  FUN_00409350("eu3idler.cpp",0xc);
  local_8._0_1_ = 0x76;
  FUN_004015b0();
  local_8._0_1_ = 0x77;
  uVar5 = FUN_00987d20(local_1c - local_44,extraout_ECX_01,&DAT_00e07938);
  uVar5 = FUN_0048c130(uVar5);
  uVar5 = FUN_00418e30(uVar5);
  FUN_00401280(uVar5);
  local_8._0_1_ = 0x76;
  FUN_00987ac0(local_134);
  local_134[0] = std::ios_base::vftable;
  FUN_00aad52d(local_134);
  local_8._0_1_ = 99;
  if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_38[0]);
  }
  local_44 = local_1c;
  iVar8 = FUN_00aae9af(0x5dc);
  local_8._0_1_ = 0x78;
  if (iVar8 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_005f7590(iVar8,param_1[0x15]);
  }
  local_8._0_1_ = 99;
  param_1[0x759] = uVar5;
  DAT_01258a66 = 0;
  iVar8 = FUN_00aae9af(0xa0);
  local_8._0_1_ = 0x79;
  if (iVar8 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_00692040(iVar8,param_1[0x15],param_1 + 0x5fb);
  }
  local_8._0_1_ = 99;
  param_1[0x75e] = uVar5;
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  FUN_00409350("rightClickMenu",0xe);
  local_8._0_1_ = 0x7a;
  uVar5 = (**(code **)(*(int *)param_1[0x15] + 0x28))(local_38);
  local_8._0_1_ = 99;
  param_1[0x770] = uVar5;
  if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_38[0]);
  }
  (**(code **)(*(int *)(param_1[0x770] + 0x18) + 0x38))();
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  FUN_00409350("interface/menubar.gui",0x15);
  local_8._0_1_ = 0x7b;
  FUN_009a4bd0(local_38,param_1 + 0x23);
  local_8._0_1_ = 99;
  if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_38[0]);
  }
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  iVar8 = *DAT_012586e8;
  uVar5 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x3c))();
  (**(code **)(iVar8 + 4))(uVar5);
  iVar8 = FUN_00aae9af(0x3c0);
  local_8._0_1_ = 0x7c;
  if (iVar8 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x3c))();
    uVar5 = FUN_0044f140(iVar8,uVar5);
  }
  local_8._0_1_ = 99;
  param_1[0x783] = uVar5;
  fVar18 = (float10)(**(code **)(*piVar6 + 0x14))();
  local_1c = (double)fVar18;
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  FUN_00409350("eu3idler.cpp",0xc);
  local_8._0_1_ = 0x7d;
  FUN_004015b0();
  local_8._0_1_ = 0x7e;
  uVar5 = FUN_00987d20(local_1c - local_44,extraout_ECX_02,&DAT_00e07938);
  uVar5 = FUN_0048c130(uVar5);
  uVar5 = FUN_00418e30(uVar5);
  FUN_00401280(uVar5);
  local_8._0_1_ = 0x7d;
  FUN_00987ac0(local_134);
  local_134[0] = std::ios_base::vftable;
  FUN_00aad52d(local_134);
  local_8 = CONCAT31(local_8._1_3_,99);
  if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_38[0]);
  }
  puVar14 = (undefined4 *)FUN_00aae9af(0x14);
  if (puVar14 == (undefined4 *)0x0) {
    puVar14 = (undefined4 *)0x0;
  }
  else {
    *puVar14 = 0;
    puVar14[1] = 0;
    puVar14[2] = 0;
    *(undefined1 *)(puVar14 + 3) = 0;
  }
  param_1[0x788] = puVar14;
  (**(code **)*piVar6)(1);
  if (0xf < local_d8) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_ec[0]);
  }
  ExceptionList = local_10;
  return param_1;
}

