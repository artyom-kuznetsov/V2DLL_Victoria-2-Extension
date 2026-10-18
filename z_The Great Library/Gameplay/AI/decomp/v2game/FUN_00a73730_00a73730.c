// FUN_00a73730 @ 00a73730 body=[[00a73730, 00a7386a] [00a7386e, 00a739f1] [00a739f5, 00a73d45] [00a73d49, 00a73d5f]]


undefined4 FUN_00a73730(void)

{
  char cVar1;
  undefined1 auVar2 [16];
  u_short uVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  int in_ECX;
  uint unaff_ESI;
  undefined4 uStack_360;
  undefined1 auStack_35c [4];
  undefined *puStack_358;
  undefined ***pppuStack_354;
  undefined4 uStack_350;
  uint uStack_330;
  char *pcStack_32c;
  char *pcStack_328;
  undefined1 local_310 [4];
  u_long uStack_30c;
  undefined1 *puStack_308;
  undefined1 auStack_304 [4];
  undefined4 local_300;
  undefined4 local_2fc;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined1 uStack_2e8;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined1 auStack_2cc [16];
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  sockaddr sStack_2b0;
  char acStack_2a0 [4];
  uint uStack_29c;
  undefined1 local_290 [4];
  undefined1 auStack_28c [12];
  undefined1 uStack_280;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined **ppuStack_264;
  undefined4 uStack_260;
  undefined1 uStack_25c;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined1 uStack_240;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  int iStack_224;
  undefined **ppuStack_220;
  undefined4 uStack_21c;
  int iStack_1e0;
  undefined **appuStack_158 [4];
  undefined **ppuStack_148;
  undefined **appuStack_98 [19];
  void *pvStack_4c;
  undefined1 uStack_44;
  uint uStack_34;
  void *pvStack_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  local_14 = 0xffffffff;
  puStack_18 = &LAB_00b54467;
  pvStack_1c = ExceptionList;
  stack0xfffffd72 = SUB1614((undefined1  [16])0x0,2);
  local_290._0_2_ = 2;
  pcStack_328 = (char *)0xa7377b;
  ExceptionList = &pvStack_1c;
  uVar3 = htons(*(u_short *)(in_ECX + 4));
  auVar2 = _local_290;
  pcStack_328 = "tcp.cpp";
  local_290._2_2_ = uVar3;
  auStack_28c._4_8_ = auVar2._8_8_;
  auStack_28c._0_4_ = *(undefined4 *)(in_ECX + 0x10);
  local_2fc = 0xf;
  local_300 = 0;
  local_310[0] = 0;
  pcStack_32c = "h\x01\x03";
  FUN_00409350();
  pcStack_32c = local_310;
  pcStack_328 = (char *)0x36;
  local_14 = 0;
  uStack_330 = 0xa737cf;
  uStack_330 = FUN_004015b0();
  pcStack_328 = (char *)0x1b;
  pcStack_32c = "TCP: Connecting to Adress: ";
  local_14 = CONCAT31(local_14._1_3_,1);
  FUN_00987d50();
  FUN_00447240();
  uVar4 = FUN_00418e30();
  FUN_00455470();
  FUN_00401280();
  uStack_34 = uStack_34 & 0xffffff00;
  FUN_00987ac0();
  ppuStack_148 = std::ios_base::vftable;
  FUN_00aad52d();
  uStack_34 = 0xffffffff;
  if (0xf < unaff_ESI) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  uStack_30c = 1;
  uStack_350 = 0xa7388a;
  iVar5 = ioctlsocket(*(SOCKET *)(in_ECX + 0xc),-0x7ffb9982,&uStack_30c);
  if (iVar5 == -1) {
    iVar5 = WSAGetLastError();
    uStack_2d4 = 0xf;
    uStack_2d8 = 0;
    uStack_2e8 = 0;
    FUN_00409350();
    uStack_34 = 2;
    uStack_2b8 = 0xf;
    uStack_2bc = 0;
    auStack_2cc[0] = 0;
    FUN_00409350();
    uStack_26c = 0xf;
    uStack_270 = 0;
    uStack_280 = 0;
    uStack_34._0_1_ = 4;
    uStack_350 = 0xa73915;
    pcVar6 = __itoa(iVar5,acStack_2a0,10);
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    FUN_00409350();
    uStack_34._0_1_ = 5;
    uStack_2f0 = 0xf;
    uStack_2f4 = 0;
    auStack_304[0] = 0;
    FUN_00409350();
    uStack_34._0_1_ = 6;
    FUN_00988f20();
    uStack_34._0_1_ = 7;
    FUN_00988f20();
    puStack_308 = auStack_35c;
    uStack_360 = 0xffffffff;
    uStack_34._0_1_ = 8;
    auStack_35c[0] = 0;
    FUN_00408ed0(&uStack_330,0);
    uStack_360 = 0x3c;
    FUN_009e7a90(&ppuStack_220);
    ppuStack_220 = &PTR_FUN_00e37db4;
    iStack_1e0 = iVar5;
    if (0xf < unaff_ESI) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_330 = uStack_330 & 0xffffff00;
    uStack_34._0_1_ = 9;
    uStack_260 = uStack_21c;
    ppuStack_264 = &PTR_FUN_00e37db4;
    uStack_248 = 0xf;
    uStack_24c = 0;
    uStack_25c = 0;
    uStack_350 = 0xa73a4e;
    FUN_00408ed0();
    uStack_34._0_1_ = 10;
    uStack_22c = 0xf;
    uStack_230 = 0;
    uStack_240 = 0;
    uStack_350 = 0xa73a82;
    FUN_00408ed0();
    uStack_34 = CONCAT31(uStack_34._1_3_,9);
    ppuStack_264 = &PTR_FUN_00e37db4;
    iStack_224 = iStack_1e0;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8();
  }
  uStack_350 = 0xa73ac5;
  iVar5 = connect(*(SOCKET *)(in_ECX + 0xc),&sStack_2b0,0x10);
  if (iVar5 == -1) {
    iVar5 = WSAGetLastError();
    if (iVar5 != 0x2733) {
      WSAGetLastError();
      uStack_2f0 = 0xf;
      uStack_2f4 = 0;
      auStack_304[0] = 0;
      FUN_00409350();
      uStack_34 = 0xb;
      uStack_2b8 = 0xf;
      uStack_2bc = 0;
      auStack_2cc[0] = 0;
      uStack_350 = 0xa73b35;
      FUN_00409350();
      uStack_34._0_1_ = 0xc;
      FUN_009888f0();
      uStack_34._0_1_ = 0xd;
      uStack_2d4 = 0xf;
      uStack_2d8 = 0;
      uStack_2e8 = 0;
      uStack_350 = 0xa73b72;
      FUN_00409350();
      uStack_34._0_1_ = 0xe;
      FUN_00988f20();
      puStack_308 = (undefined1 *)&uStack_360;
      uStack_34._0_1_ = 0xf;
      FUN_00988f20(auStack_2cc);
      FUN_00a76910(0x47,auStack_304);
      uStack_34 = CONCAT31(uStack_34._1_3_,0x10);
      FUN_00a73d60();
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8();
    }
    uStack_330 = uStack_330 & 0xffffff00;
    FUN_00409350();
    uStack_34 = 0x11;
    uStack_350 = 0xa73c24;
    uVar7 = FUN_004015b0();
    uStack_34 = CONCAT31(uStack_34._1_3_,0x12);
    pppuStack_354 = (undefined ***)0xa73c3f;
    uStack_350 = uVar7;
    FUN_00987d50();
    puStack_358 = (undefined *)0xa73c45;
    pppuStack_354 = (undefined ***)uVar7;
    FUN_00401280();
    pppuStack_354 = appuStack_158;
    uStack_44 = 0x11;
    puStack_358 = (undefined *)0xa73c5d;
    FUN_00987ac0();
    pppuStack_354 = appuStack_158;
    appuStack_158[0] = std::ios_base::vftable;
    puStack_358 = (undefined *)0xa73c75;
    FUN_00aad52d();
    pppuStack_354 = (undefined ***)uVar4;
    if (pcStack_32c < (char *)0x10) {
      ExceptionList = pvStack_4c;
      return 1;
    }
  }
  else {
    _local_290 = 0xf00000000;
    auVar2._12_4_ = 0;
    auVar2._0_12_ = auStack_28c;
    _local_290 = auVar2 << 0x20;
    acStack_2a0[0] = '\0';
    FUN_00409350();
    uStack_34 = 0x13;
    uStack_350 = 0xa73cdb;
    uVar4 = FUN_004015b0();
    uStack_34 = CONCAT31(uStack_34._1_3_,0x14);
    pppuStack_354 = (undefined ***)0xa73cf6;
    uStack_350 = uVar4;
    FUN_00987d50();
    puStack_358 = (undefined *)0xa73cfc;
    pppuStack_354 = (undefined ***)uVar4;
    FUN_00401280();
    pppuStack_354 = appuStack_98;
    uStack_44 = 0x13;
    puStack_358 = (undefined *)0xa73d14;
    FUN_00987ac0();
    pppuStack_354 = appuStack_98;
    appuStack_98[0] = std::ios_base::vftable;
    puStack_358 = (undefined *)0xa73d2c;
    FUN_00aad52d();
    if (uStack_29c < 0x10) {
      ExceptionList = pvStack_4c;
      return 1;
    }
    pppuStack_354 = (undefined ***)sStack_2b0._0_4_;
  }
                    /* WARNING: Subroutine does not return */
  puStack_358 = &UNK_00a73d46;
  FUN_00aae91b();
}

