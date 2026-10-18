// FUN_006ee930 @ 006ee930 body=[[006ee930, 006ee9af] [006ee9b3, 006ee9ca] [006ee9ce, 006ef1ee]]


undefined4 * FUN_006ee930(undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  char *pcVar3;
  undefined4 uVar4;
  uint local_70 [4];
  undefined4 local_60;
  uint local_5c;
  uint local_54 [4];
  undefined4 local_44;
  uint local_40;
  undefined **local_38 [3];
  undefined **local_2c [3];
  undefined **local_20;
  undefined4 local_1c;
  char *local_18;
  char *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9dea9;
  local_10 = ExceptionList;
  local_5c = 0xf;
  local_60 = 0;
  local_70[0] = local_70[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("topcolor_production",0x13);
  local_8 = 0;
  local_40 = 0xf;
  local_44 = 0;
  local_54[0] = local_54[0] & 0xffffff00;
  FUN_00409350("country_production",0x12);
  local_8._0_1_ = 1;
  FUN_007536e0(param_1,param_2,local_54,local_70);
  if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_54[0]);
  }
  local_40 = 0xf;
  local_44 = 0;
  local_54[0] = local_54[0] & 0xffffff00;
  if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_70[0]);
  }
  *param_1 = CProductionView::vftable;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(undefined1 *)(param_1 + 0x25) = 0;
  param_1[0x26] = CButtonObserverGlue<CProductionView>::vftable;
  param_1[0x27] = param_1;
  param_1[0x28] = &LAB_006ef830;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  *(undefined2 *)(param_1 + 0x31) = 0;
  param_1[0x32] = CButtonObserverGlue<CProductionView>::vftable;
  param_1[0x33] = param_1;
  param_1[0x34] = FUN_006f8010;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = CButtonObserverGlue<CProductionView>::vftable;
  param_1[0x3e] = param_1;
  param_1[0x3f] = FUN_006f81e0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = CButtonObserverGlue<CProductionView>::vftable;
  param_1[0x49] = param_1;
  param_1[0x4a] = FUN_006f83b0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  local_8._0_1_ = 10;
  puVar1 = param_1 + 0x53;
  *puVar1 = 0;
  puVar2 = (undefined4 *)FUN_00aae9af(8);
  if (puVar2 == (undefined4 *)0x0) {
    local_14 = (char *)0x0;
    std::exception::exception((exception *)local_2c,&local_14);
    local_2c[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_2c,&DAT_00e6fb20);
  }
  *puVar1 = puVar2;
  puVar2[1] = 0;
  *puVar2 = 0;
  *(undefined4 **)*puVar1 = puVar1;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  local_8._0_1_ = 0xb;
  puVar1 = param_1 + 0x59;
  *puVar1 = 0;
  puVar2 = (undefined4 *)FUN_00aae9af(8);
  if (puVar2 == (undefined4 *)0x0) {
    local_18 = (char *)0x0;
    std::exception::exception((exception *)local_38,&local_18);
    local_38[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_38,&DAT_00e6fb20);
  }
  *puVar1 = puVar2;
  puVar2[1] = 0;
  *puVar2 = 0;
  *(undefined4 **)*puVar1 = puVar1;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  local_8._0_1_ = 0xc;
  puVar1 = param_1 + 0x5f;
  *puVar1 = 0;
  puVar2 = (undefined4 *)FUN_00aae9af(8);
  if (puVar2 == (undefined4 *)0x0) {
    local_14 = (char *)0x0;
    std::exception::exception((exception *)local_2c,&local_14);
    local_2c[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_2c,&DAT_00e6fb20);
  }
  *puVar1 = puVar2;
  puVar2[1] = 0;
  *puVar2 = 0;
  *(undefined4 **)*puVar1 = puVar1;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  local_8._0_1_ = 0xd;
  puVar1 = param_1 + 0x65;
  *puVar1 = 0;
  puVar2 = (undefined4 *)FUN_00aae9af(8);
  if (puVar2 == (undefined4 *)0x0) {
    local_18 = (char *)0x0;
    std::exception::exception((exception *)local_38,&local_18);
    local_38[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_38,&DAT_00e6fb20);
  }
  *puVar1 = puVar2;
  puVar2[1] = 0;
  *puVar2 = 0;
  *(undefined4 **)*puVar1 = puVar1;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  local_8._0_1_ = 0xe;
  puVar1 = param_1 + 0x6b;
  *puVar1 = 0;
  puVar2 = (undefined4 *)FUN_00aae9af(8);
  if (puVar2 == (undefined4 *)0x0) {
    local_14 = (char *)0x0;
    std::exception::exception((exception *)local_2c,&local_14);
    local_2c[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_2c,&DAT_00e6fb20);
  }
  *puVar1 = puVar2;
  puVar2[1] = 0;
  *puVar2 = 0;
  *(undefined4 **)*puVar1 = puVar1;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  *(undefined2 *)(param_1 + 0x75) = 0x101;
  param_1[0x76] = 0xffffffff;
  param_1[0x77] = CButtonObserverGlue<CProductionView>::vftable;
  param_1[0x78] = param_1;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = FUN_006fe410;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = CButtonObserverGlue<CProductionView>::vftable;
  param_1[0x83] = param_1;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = FUN_006fe410;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = CButtonObserverGlue<CProductionView>::vftable;
  param_1[0x8e] = param_1;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  param_1[0x95] = FUN_006fe410;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  param_1[0x98] = CButtonObserverGlue<CProductionView>::vftable;
  param_1[0x99] = param_1;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  param_1[0x9c] = 0;
  param_1[0x9d] = 0;
  param_1[0x9e] = 0;
  param_1[0x9f] = 0;
  param_1[0xa0] = FUN_006fe410;
  param_1[0xa1] = 0;
  param_1[0xa2] = 0;
  param_1[0xa3] = CButtonObserverGlue<CProductionView>::vftable;
  param_1[0xa4] = param_1;
  param_1[0xa5] = 0;
  param_1[0xa6] = 0;
  param_1[0xa7] = 0;
  param_1[0xa8] = 0;
  param_1[0xa9] = 0;
  param_1[0xaa] = 0;
  param_1[0xab] = FUN_006ef650;
  param_1[0xac] = 0;
  param_1[0xad] = 0;
  param_1[0xae] = CButtonObserverGlue<CProductionView>::vftable;
  param_1[0xaf] = param_1;
  param_1[0xb0] = 0;
  param_1[0xb1] = 0;
  param_1[0xb2] = 0;
  param_1[0xb3] = 0;
  param_1[0xb4] = 0;
  param_1[0xb5] = 0;
  param_1[0xb6] = FUN_006ef6c0;
  param_1[0xb7] = 0;
  param_1[0xb8] = 0;
  param_1[0xb9] = CButtonObserverGlue<CProductionView>::vftable;
  param_1[0xba] = param_1;
  param_1[0xbb] = 0;
  param_1[0xbc] = 0;
  param_1[0xbd] = 0;
  param_1[0xbe] = 0;
  param_1[0xbf] = 0;
  param_1[0xc0] = 0;
  param_1[0xc1] = FUN_006ef730;
  param_1[0xc2] = 0;
  param_1[0xc3] = 0;
  param_1[0xc4] = CButtonObserverGlue<CProductionView>::vftable;
  param_1[0xc5] = param_1;
  param_1[0xc6] = 0;
  param_1[199] = 0;
  param_1[200] = 0;
  param_1[0xc9] = 0;
  param_1[0xca] = 0;
  param_1[0xcb] = 0;
  param_1[0xcc] = FUN_006ef7b0;
  param_1[0xcd] = 0;
  param_1[0xce] = 0;
  param_1[0xcf] = 0;
  param_1[0xd0] = 0;
  param_1[0xd1] = 0;
  param_1[0xd3] = 0;
  param_1[0xd4] = 0;
  param_1[0xd5] = 0;
  param_1[0xd7] = CButtonObserverGlue<CProductionView>::vftable;
  param_1[0xd8] = param_1;
  param_1[0xd9] = 0;
  param_1[0xda] = 0;
  param_1[0xdb] = 0;
  param_1[0xdc] = 0;
  param_1[0xdd] = 0;
  param_1[0xde] = 0;
  param_1[0xdf] = FUN_00702dc0;
  param_1[0xe0] = 0;
  param_1[0xe1] = 0;
  param_1[0xe2] = CButtonObserverGlue<CProductionView>::vftable;
  param_1[0xe3] = param_1;
  param_1[0xe4] = FUN_006f3aa0;
  param_1[0xe5] = 0;
  param_1[0xe6] = 0;
  param_1[0xe7] = 0;
  param_1[0xe8] = 0;
  param_1[0xe9] = 0;
  param_1[0xea] = 0;
  param_1[0xeb] = 0;
  param_1[0xec] = 0;
  local_8._0_1_ = 0x1c;
  *(undefined1 *)(param_1 + 0xed) = 1;
  pcVar3 = (char *)FUN_00aae9af(0x84);
  local_8._0_1_ = 0x1d;
  local_18 = pcVar3;
  if (pcVar3 == (char *)0x0) {
    uVar4 = 0;
  }
  else {
    (**(code **)(*param_2 + 0x3c))();
    uVar4 = FUN_00476920(pcVar3);
  }
  local_8._0_1_ = 0x1c;
  local_1c = 0x2d2d2d;
  param_1[0xee] = uVar4;
  param_1[0xef] = 0x2d2d2d;
  param_1[0xf0] = 0;
  *(undefined2 *)(param_1 + 0xf1) = 1;
  param_1[0xf2] = 0;
  param_1[0xf3] = 0;
  param_1[0xf4] = 0;
  *(undefined1 *)(param_1 + 0xf5) = 1;
  puVar1 = param_1 + 0xf6;
  *puVar1 = 0;
  puVar2 = (undefined4 *)FUN_00aae9af(8);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar1 = puVar2;
    puVar2[1] = 0;
    *puVar2 = 0;
    *(undefined4 **)*puVar1 = puVar1;
    param_1[0xf7] = 0;
    param_1[0xf8] = 0;
    param_1[0xf9] = 0;
    param_1[0xfa] = 0;
    param_1[0xfc] = CButtonObserverGlue<CProductionView>::vftable;
    param_1[0xfd] = param_1;
    param_1[0xfe] = 0;
    param_1[0xff] = 0;
    param_1[0x100] = 0;
    param_1[0x101] = 0;
    param_1[0x102] = 0;
    param_1[0x103] = 0;
    param_1[0x104] = FUN_006f3ae0;
    param_1[0x105] = 0;
    param_1[0x106] = 0;
    param_1[0x107] = CButtonObserverGlue<CProductionView>::vftable;
    param_1[0x108] = param_1;
    param_1[0x109] = 0;
    param_1[0x10a] = 0;
    param_1[0x10b] = 0;
    param_1[0x10c] = 0;
    param_1[0x10d] = 0;
    param_1[0x10e] = 0;
    param_1[0x10f] = FUN_006f6fd0;
    param_1[0x110] = 0;
    param_1[0x111] = 0;
    param_1[0x112] = CButtonObserverGlue<CProductionView>::vftable;
    param_1[0x113] = param_1;
    param_1[0x114] = 0;
    param_1[0x115] = 0;
    param_1[0x116] = 0;
    param_1[0x117] = 0;
    param_1[0x118] = 0;
    param_1[0x119] = 0;
    param_1[0x11a] = FUN_006f3b30;
    param_1[0x11b] = 0;
    param_1[0x11c] = 0;
    local_8._0_1_ = 0x21;
    pcVar3 = (char *)FUN_00aae9af(0xd8);
    local_8._0_1_ = 0x22;
    local_18 = pcVar3;
    if (pcVar3 == (char *)0x0) {
      uVar4 = 0;
    }
    else {
      (**(code **)(*param_2 + 0x3c))(param_2);
      uVar4 = FUN_0043d1c0(pcVar3,param_2);
    }
    local_8 = CONCAT31(local_8._1_3_,0x21);
    param_1[0x11d] = uVar4;
    FUN_006efdb0(param_1);
    ExceptionList = local_10;
    return param_1;
  }
  local_14 = (char *)0x0;
  std::exception::exception((exception *)&local_20,&local_14);
  local_20 = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(&local_20,&DAT_00e6fb20);
}

