// FUN_009e8210 @ 009e8210 body=[[009e8210, 009e82f0] [009e82f4, 009e8349] [009e834d, 009e83d9] [009e83dd, 009e842c] [009e8430, 009e84ac] [009e84b0, 009e85c9] [009e85cd, 009e8620] [009e8624, 009e86b0] [009e86b4, 009e8701] [009e8705, 009e8857] [009e885b, 009e88ae] [009e88b2, 009e8966] [009e896a, 009e8a59] [009e8a5d, 009e8da8]]


undefined4 * FUN_009e8210(undefined4 *param_1)

{
  HRESULT HVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puStack_204;
  undefined4 uStack_200;
  undefined ****ppppuStack_1fc;
  uint *puStack_1f8;
  undefined ****ppppuStack_1f4;
  undefined ***pppuStack_1f0;
  undefined ***local_1ec;
  undefined ****ppppuStack_1e8;
  undefined **local_1c4;
  undefined4 local_1c0;
  undefined **local_10c [18];
  undefined **local_c4;
  undefined4 local_c0;
  undefined1 local_bc;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined1 local_a0;
  undefined4 local_90;
  undefined4 local_8c;
  undefined1 local_84 [28];
  undefined ***local_68 [4];
  undefined4 local_58;
  uint local_54;
  uint local_4c [4];
  undefined4 local_3c;
  uint local_38;
  undefined ***local_30 [4];
  undefined4 local_20;
  uint local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b56c61;
  local_10 = ExceptionList;
  DAT_00f20c3c = 3;
  local_8 = 0;
  ExceptionList = &local_10;
  *param_1 = &PTR_FUN_00e3c734;
  if (DAT_013f05f8 == 0) {
    FUN_00aae9af();
    FUN_00a701f0();
    FUN_00a6fe40();
  }
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 1;
  FUN_004015b0();
  local_8._0_1_ = 2;
  FUN_00987d20();
  FUN_00401280();
  local_8._0_1_ = 1;
  FUN_00987ac0();
  local_10c[0] = std::ios_base::vftable;
  FUN_00aad52d();
  local_8._0_1_ = 0;
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ppppuStack_1e8 = (undefined ****)0x9e830c;
  HVar1 = CoCreateInstance((IID *)&rclsid_00ddc374,(LPUNKNOWN)0x0,3,(IID *)&riid_00e3c770,
                           &ppv_00f20c58);
  if (HVar1 < 0) {
    FUN_009e99c0();
    local_8._0_1_ = 3;
    FUN_00988fa0();
    local_8._0_1_ = 5;
    if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_54 = 0xf;
    local_58 = 0;
    local_68[0] = (undefined ***)((uint)local_68[0] & 0xffffff00);
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = (undefined ***)((uint)local_30[0] & 0xffffff00);
    FUN_00409350();
    local_8._0_1_ = 6;
    local_38 = 0xf;
    local_3c = 0;
    local_4c[0] = local_4c[0] & 0xffffff00;
    FUN_00408ed0();
    local_8._0_1_ = 7;
    FUN_004015b0();
    local_8._0_1_ = 10;
    local_14 = (undefined1 *)FUN_00418e30();
    local_8._0_1_ = 9;
    if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_38 = 0xf;
    local_3c = 0;
    local_4c[0] = local_4c[0] & 0xffffff00;
    FUN_00401280();
    local_8._0_1_ = 6;
    FUN_00987ac0();
    local_10c[0] = std::ios_base::vftable;
    FUN_00aad52d();
    local_8._0_1_ = 5;
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = (undefined ***)((uint)local_30[0] & 0xffffff00);
    FUN_00409350();
    local_8._0_1_ = 0xb;
    local_38 = 0xf;
    local_3c = 0;
    local_4c[0] = local_4c[0] & 0xffffff00;
    FUN_00408ed0();
    local_14 = (undefined1 *)&local_1ec;
    local_8._0_1_ = 0xc;
    pppuStack_1f0 = (undefined ***)0xffffffff;
    ppppuStack_1f4 = (undefined ****)0x0;
    puStack_1f8 = local_4c;
    local_1ec = (undefined ***)((uint)local_1ec & 0xffffff00);
    ppppuStack_1fc = (undefined ****)0x9e8484;
    FUN_00408ed0();
    pppuStack_1f0 = (undefined ***)0x31;
    ppppuStack_1f4 = (undefined ****)&local_1c4;
    puStack_1f8 = (uint *)0x9e8495;
    FUN_009e7a90();
    local_1c4 = &PTR_FUN_00e37db4;
    if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_38 = 0xf;
    local_3c = 0;
    local_4c[0] = local_4c[0] & 0xffffff00;
    local_8._0_1_ = 0xd;
    local_c4 = &PTR_FUN_00e37db4;
    local_c0 = local_1c0;
    local_a8 = 0xf;
    local_ac = 0;
    local_bc = 0;
    FUN_00408ed0();
    local_8._0_1_ = 0xe;
    local_8c = 0xf;
    local_90 = 0;
    local_a0 = 0;
    FUN_00408ed0();
    local_8 = CONCAT31(local_8._1_3_,0xd);
    local_c4 = &PTR_FUN_00e37db4;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8();
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = (undefined ***)((uint)local_30[0] & 0xffffff00);
  FUN_00409350();
  local_8._0_1_ = 0xf;
  FUN_004015b0();
  local_8._0_1_ = 0x10;
  FUN_00987d20();
  FUN_00401280();
  local_8._0_1_ = 0xf;
  FUN_00987ac0();
  local_10c[0] = std::ios_base::vftable;
  FUN_00aad52d();
  local_8._0_1_ = 0;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  iVar2 = (**(code **)*ppv_00f20c58)();
  if (iVar2 < 0) {
    FUN_009e99c0();
    local_8._0_1_ = 0x11;
    FUN_00988fa0();
    local_8._0_1_ = 0x13;
    if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_54 = 0xf;
    local_58 = 0;
    local_68[0] = (undefined ***)((uint)local_68[0] & 0xffffff00);
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = (undefined ***)((uint)local_30[0] & 0xffffff00);
    ppppuStack_1e8 = (undefined ****)0x9e864a;
    FUN_00409350();
    ppppuStack_1e8 = (undefined ****)local_84;
    local_8._0_1_ = 0x14;
    local_38 = 0xf;
    local_3c = 0;
    local_4c[0] = local_4c[0] & 0xffffff00;
    local_1ec = (undefined ***)0x9e8666;
    FUN_00408ed0();
    ppppuStack_1e8 = local_30;
    local_8._0_1_ = 0x15;
    local_1ec = (undefined ***)0x9e8680;
    FUN_004015b0();
    local_8._0_1_ = 0x18;
    ppppuStack_1e8 = (undefined ****)0x9e8699;
    FUN_00418e30();
    local_8._0_1_ = 0x17;
    if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_38 = 0xf;
    local_3c = 0;
    local_4c[0] = local_4c[0] & 0xffffff00;
    FUN_00401280();
    local_8._0_1_ = 0x14;
    FUN_00987ac0();
    local_10c[0] = std::ios_base::vftable;
    FUN_00aad52d();
    local_8._0_1_ = 0x13;
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = (undefined ***)((uint)local_30[0] & 0xffffff00);
    ppppuStack_1e8 = (undefined ****)0x9e871d;
    FUN_00409350();
    local_14 = (undefined1 *)&puStack_1f8;
    local_8._0_1_ = 0x19;
    ppppuStack_1fc = (undefined ****)0xffffffff;
    uStack_200 = 0;
    puStack_204 = local_84;
    ppppuStack_1e8 = (undefined ****)0x0;
    puStack_1f8 = (uint *)((uint)puStack_1f8 & 0xffffff00);
    FUN_00408ed0();
    ppppuStack_1fc = local_30;
    uStack_200 = 0x3c;
    puStack_204 = (undefined1 *)0x9e874e;
    iVar2 = FUN_009d77e0();
    local_8._0_1_ = 0x1a;
    local_c4 = &PTR_FUN_00e37db4;
    local_c0 = *(undefined4 *)(iVar2 + 4);
    ppppuStack_1e8 = (undefined ****)(iVar2 + 8);
    local_a8 = 0xf;
    local_ac = 0;
    local_bc = 0;
    local_1ec = (undefined ***)0x9e878b;
    FUN_00408ed0();
    local_8._0_1_ = 0x1b;
    ppppuStack_1e8 = (undefined ****)(iVar2 + 0x24);
    local_8c = 0xf;
    local_90 = 0;
    local_a0 = 0;
    local_1ec = (undefined ***)0x9e87b3;
    FUN_00408ed0();
    local_8 = CONCAT31(local_8._1_3_,0x1a);
    local_c4 = &PTR_FUN_00e37db4;
                    /* WARNING: Subroutine does not return */
    ppppuStack_1e8 = (undefined ****)0x9e87d2;
    __CxxThrowException_8();
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = (undefined ***)((uint)local_30[0] & 0xffffff00);
  ppppuStack_1e8 = (undefined ****)0x9e87ee;
  FUN_00409350();
  ppppuStack_1e8 = local_30;
  local_8._0_1_ = 0x1c;
  local_1ec = (undefined ***)0x9e8805;
  FUN_004015b0();
  local_8._0_1_ = 0x1d;
  FUN_00987d20();
  FUN_00401280();
  local_8._0_1_ = 0x1c;
  FUN_00987ac0();
  local_10c[0] = std::ios_base::vftable;
  FUN_00aad52d();
  local_8._0_1_ = 0;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ppppuStack_1e8 = ppv_00f20c58;
  local_1ec = (undefined ***)0x9e8871;
  iVar2 = (**(code **)*ppv_00f20c58)();
  if (iVar2 < 0) {
    local_1ec = (undefined ***)0x9e8883;
    local_1ec = (undefined ***)FUN_009e99c0();
    local_8._0_1_ = 0x1e;
    pppuStack_1f0 = (undefined ***)0x9e8895;
    FUN_00988fa0();
    local_8._0_1_ = 0x20;
    if (0xf < local_54) {
      local_1ec = local_68[0];
                    /* WARNING: Subroutine does not return */
      pppuStack_1f0 = (undefined ***)&UNK_009e88af;
      FUN_00aae91b();
    }
    local_1ec = (undefined ***)0xb;
    pppuStack_1f0 = (undefined ***)0xe3c5f0;
    local_54 = 0xf;
    local_58 = 0;
    local_68[0] = (undefined ***)((uint)local_68[0] & 0xffffff00);
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = (undefined ***)((uint)local_30[0] & 0xffffff00);
    ppppuStack_1f4 = (undefined ****)0x9e88d8;
    FUN_00409350();
    local_14 = (undefined1 *)&puStack_204;
    local_8._0_1_ = 0x21;
    pppuStack_1f0 = (undefined ***)0xf;
    ppppuStack_1f4 = (undefined ****)0x0;
    puStack_204 = (undefined1 *)((uint)puStack_204 & 0xffffff00);
    FUN_00408ed0(local_84,0,0xffffffff);
    local_8._0_1_ = 0x22;
    uVar3 = FUN_004015b0(local_30,0x46,0x1000);
    local_8._0_1_ = 0x24;
    uVar3 = FUN_004238b0(uVar3);
    FUN_00401280(uVar3);
    local_1ec = local_10c;
    local_8._0_1_ = 0x21;
    pppuStack_1f0 = (undefined ***)0x9e893c;
    FUN_00987ac0();
    local_1ec = local_10c;
    local_10c[0] = std::ios_base::vftable;
    pppuStack_1f0 = (undefined ***)0x9e8952;
    FUN_00aad52d();
    local_8._0_1_ = 0x20;
    if (0xf < local_1c) {
      local_1ec = local_30[0];
                    /* WARNING: Subroutine does not return */
      pppuStack_1f0 = (undefined ***)&UNK_009e8967;
      FUN_00aae91b();
    }
    local_1ec = (undefined ***)0xb;
    pppuStack_1f0 = (undefined ***)0xe3c5f0;
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = (undefined ***)((uint)local_30[0] & 0xffffff00);
    ppppuStack_1f4 = (undefined ****)0x9e8982;
    FUN_00409350();
    local_14 = (undefined1 *)&puStack_204;
    local_8._0_1_ = 0x25;
    pppuStack_1f0 = (undefined ***)0xf;
    ppppuStack_1f4 = (LPVOID *)0x0;
    puStack_204 = (undefined1 *)((uint)puStack_204 & 0xffffff00);
    FUN_00408ed0(local_84,0,0xffffffff);
    local_1ec = (undefined ***)FUN_009d77e0(0x47,local_30);
    local_8 = CONCAT31(local_8._1_3_,0x26);
  }
  else {
    local_1ec = (undefined ***)0xb;
    pppuStack_1f0 = (undefined ***)0xe3c5f0;
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = (undefined ***)((uint)local_30[0] & 0xffffff00);
    ppppuStack_1f4 = (undefined ****)0x9e89f0;
    FUN_00409350();
    local_1ec = (undefined ***)0x3;
    ppppuStack_1f4 = local_30;
    pppuStack_1f0 = (undefined ***)0x49;
    local_8._0_1_ = 0x27;
    puStack_1f8 = (uint *)0x9e8a07;
    FUN_004015b0();
    local_8._0_1_ = 0x28;
    local_1ec = (undefined ***)0x9e8a1a;
    local_1ec = (undefined ***)FUN_00987d20();
    pppuStack_1f0 = (undefined ***)0x9e8a20;
    FUN_00401280();
    local_1ec = local_10c;
    local_8._0_1_ = 0x27;
    pppuStack_1f0 = (undefined ***)0x9e8a33;
    FUN_00987ac0();
    local_1ec = local_10c;
    local_10c[0] = std::ios_base::vftable;
    pppuStack_1f0 = (undefined ***)0x9e8a45;
    FUN_00aad52d();
    local_8._0_1_ = 0;
    if (0xf < local_1c) {
      local_1ec = local_30[0];
                    /* WARNING: Subroutine does not return */
      pppuStack_1f0 = (undefined ***)&UNK_009e8a5a;
      FUN_00aae91b();
    }
    local_1ec = (undefined ***)&DAT_00f20c50;
    pppuStack_1f0 = (undefined ***)&DAT_00e3c7a0;
    ppppuStack_1f4 = ppv_00f20c58;
    puStack_1f8 = (uint *)0x9e8a73;
    iVar2 = (**(code **)*ppv_00f20c58)();
    if (-1 < iVar2) {
      local_1ec = (undefined ***)0x9e8b77;
      FUN_009885d0();
      local_1ec = (undefined ***)0x3;
      pppuStack_1f0 = (undefined ***)0x53;
      local_8._0_1_ = 0x32;
      puStack_1f8 = (uint *)0x9e8b8d;
      ppppuStack_1f4 = (undefined ****)local_84;
      FUN_004015b0();
      local_8._0_1_ = 0x33;
      local_1ec = (undefined ***)0x9e8ba0;
      local_1ec = (undefined ***)FUN_00987d20();
      pppuStack_1f0 = (undefined ***)0x9e8ba6;
      FUN_00401280();
      local_1ec = local_10c;
      local_8._0_1_ = 0x32;
      pppuStack_1f0 = (undefined ***)0x9e8bb9;
      FUN_00987ac0();
      local_1ec = local_10c;
      local_10c[0] = std::ios_base::vftable;
      pppuStack_1f0 = (undefined ***)0x9e8bcb;
      FUN_00aad52d();
      local_8._0_1_ = 0;
      local_1ec = (undefined ***)0x9e8bd9;
      FUN_00408ad0();
      local_1ec = (undefined ***)&DAT_00f20c44;
      pppuStack_1f0 = (undefined ***)&DAT_00e3c7b0;
      ppppuStack_1f4 = ppv_00f20c58;
      puStack_1f8 = (uint *)0x9e8bef;
      iVar2 = (**(code **)*ppv_00f20c58)();
      if (-1 < iVar2) {
        local_1ec = (undefined ***)0x9e8cf1;
        FUN_009885d0();
        local_1ec = (undefined ***)0x3;
        pppuStack_1f0 = (undefined ***)0x5d;
        local_8._0_1_ = 0x3d;
        puStack_1f8 = (uint *)0x9e8d07;
        ppppuStack_1f4 = (undefined ****)local_84;
        FUN_004015b0();
        local_8._0_1_ = 0x3e;
        local_1ec = (undefined ***)0x9e8d1a;
        local_1ec = (undefined ***)FUN_00987d20();
        pppuStack_1f0 = (undefined ***)0x9e8d20;
        FUN_00401280();
        local_8._0_1_ = 0x3d;
        local_1ec = (undefined ***)0x9e8d32;
        FUN_00401650();
        local_8._0_1_ = 0;
        local_1ec = (undefined ***)0x9e8d3d;
        FUN_00408ad0();
        local_1ec = (undefined ***)0x9e8d4a;
        FUN_009885d0();
        local_1ec = (undefined ***)0x3;
        pppuStack_1f0 = (undefined ***)0x5f;
        local_8._0_1_ = 0x3f;
        puStack_1f8 = (uint *)0x9e8d61;
        ppppuStack_1f4 = local_68;
        FUN_004015b0();
        local_8._0_1_ = 0x40;
        local_1ec = (undefined ***)0x9e8d74;
        local_1ec = (undefined ***)FUN_00987d20();
        pppuStack_1f0 = (undefined ***)0x9e8d7a;
        FUN_00401280();
        local_8 = CONCAT31(local_8._1_3_,0x3f);
        local_1ec = (undefined ***)0x9e8d8b;
        FUN_00401650();
        local_1ec = (undefined ***)0x9e8d93;
        FUN_00408ad0();
        ExceptionList = local_10;
        return param_1;
      }
      local_1ec = (undefined ***)0x9e8c01;
      local_1ec = (undefined ***)FUN_009e99c0();
      local_8._0_1_ = 0x34;
      pppuStack_1f0 = (undefined ***)0x9e8c13;
      FUN_00988fa0();
      local_8._0_1_ = 0x36;
      local_1ec = (undefined ***)0x9e8c21;
      FUN_00408ad0();
      local_1ec = (undefined ***)0x9e8c2e;
      FUN_009885d0();
      local_14 = (undefined1 *)&puStack_204;
      local_8._0_1_ = 0x37;
      FUN_00401320();
      local_8._0_1_ = 0x38;
      uVar3 = FUN_004015b0(local_84,0x5a,0x1000);
      local_8._0_1_ = 0x3a;
      uVar3 = FUN_004238b0(uVar3);
      FUN_00401280(uVar3);
      local_8._0_1_ = 0x37;
      local_1ec = (undefined ***)0x9e8c85;
      FUN_00401650();
      local_8._0_1_ = 0x36;
      local_1ec = (undefined ***)0x9e8c91;
      FUN_00408ad0();
      local_1ec = (undefined ***)0x9e8c9e;
      FUN_009885d0();
      local_14 = (undefined1 *)&puStack_204;
      local_8._0_1_ = 0x3b;
      FUN_00401320();
      local_1ec = (undefined ***)FUN_009d77e0(0x5b,local_4c);
      local_8 = CONCAT31(local_8._1_3_,0x3c);
      pppuStack_1f0 = (undefined ***)0x9e8cd3;
      FUN_00a70110();
      goto LAB_009e89cf;
    }
    local_1ec = (undefined ***)0x9e8a85;
    local_1ec = (undefined ***)FUN_009e99c0();
    local_8._0_1_ = 0x29;
    pppuStack_1f0 = (undefined ***)0x9e8a97;
    FUN_00988fa0();
    local_8._0_1_ = 0x2b;
    local_1ec = (undefined ***)0x9e8aa5;
    FUN_00408ad0();
    local_1ec = (undefined ***)0x9e8ab2;
    FUN_009885d0();
    local_14 = (undefined1 *)&puStack_204;
    local_8._0_1_ = 0x2c;
    FUN_00401320();
    local_8._0_1_ = 0x2d;
    uVar3 = FUN_004015b0(local_84,0x50,0x1000);
    local_8._0_1_ = 0x2f;
    uVar3 = FUN_004238b0(uVar3);
    FUN_00401280(uVar3);
    local_1ec = local_10c;
    local_8._0_1_ = 0x2c;
    pppuStack_1f0 = (undefined ***)0x9e8b0a;
    FUN_00987ac0();
    local_1ec = local_10c;
    local_10c[0] = std::ios_base::vftable;
    pppuStack_1f0 = (undefined ***)0x9e8b20;
    FUN_00aad52d();
    local_8._0_1_ = 0x2b;
    local_1ec = (undefined ***)0x9e8b2f;
    FUN_00408ad0();
    local_1ec = (undefined ***)0x9e8b3c;
    FUN_009885d0();
    local_14 = (undefined1 *)&puStack_204;
    local_8._0_1_ = 0x30;
    FUN_00401320();
    local_1ec = (undefined ***)FUN_009d77e0(0x51,local_84);
    local_8 = CONCAT31(local_8._1_3_,0x31);
  }
  pppuStack_1f0 = (undefined ***)0x9e89c3;
  FUN_00a70110();
LAB_009e89cf:
  pppuStack_1f0 = &local_1c4;
  local_1ec = (undefined ***)&DAT_00e6fc70;
                    /* WARNING: Subroutine does not return */
  ppppuStack_1f4 = (undefined ****)0x9e89d4;
  __CxxThrowException_8();
}

