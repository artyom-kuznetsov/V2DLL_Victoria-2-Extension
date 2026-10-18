// FUN_00a73f70 @ 00a73f70 body=[[00a73f70, 00a74202] [00a74206, 00a74388] [00a7438c, 00a74624] [00a74628, 00a7488b]]


void FUN_00a73f70(void)

{
  char *pcVar1;
  char *buf;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int *in_ECX;
  char *pcVar7;
  bool bVar8;
  undefined4 uStack_520;
  undefined ***pppuStack_51c;
  undefined1 *puStack_518;
  char *pcStack_4f4;
  undefined1 *local_4f0;
  uint local_4ec;
  undefined4 local_4dc;
  uint local_4d8;
  uint local_4d0;
  undefined4 local_4c0;
  uint local_4bc;
  undefined4 local_4b4;
  int local_4b0;
  timeval local_4ac;
  undefined1 local_4a4;
  undefined1 auStack_498 [4];
  undefined4 local_494;
  undefined4 local_490;
  undefined **appuStack_390 [2];
  undefined **ppuStack_388;
  undefined **ppuStack_378;
  fd_set local_2e8;
  fd_set local_1e0;
  void *pvStack_2c;
  undefined4 uStack_24;
  undefined4 uStack_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b54370;
  pvStack_14 = ExceptionList;
  local_4ac.tv_sec = 0;
  local_4ac.tv_usec = 0;
  bVar8 = (char)in_ECX[0xb] == '\0';
  if (bVar8) {
    local_1e0.fd_array[0] = in_ECX[3];
  }
  else {
    local_2e8.fd_array[0] = in_ECX[3];
  }
  local_1e0.fd_count = (u_int)bVar8;
  local_2e8.fd_count = (u_int)!bVar8;
  puStack_518 = (undefined1 *)0xa73ffc;
  ExceptionList = &pvStack_14;
  iVar3 = select(0,&local_2e8,&local_1e0,(fd_set *)0x0,&local_4ac);
  if (iVar3 == -1) {
    iVar3 = WSAGetLastError();
    if (iVar3 != 0x2733) {
      WSAGetLastError();
      local_4d8 = 0xf;
      local_4dc = 0;
      local_4ec = local_4ec & 0xffffff00;
      FUN_00409350();
      local_c = 0;
      local_490 = 0xf;
      local_494 = 0;
      local_4a4 = 0;
      FUN_00409350();
      local_c._0_1_ = 1;
      FUN_009888f0();
      local_c._0_1_ = 2;
      local_4bc = 0xf;
      local_4c0 = 0;
      local_4d0 = local_4d0 & 0xffffff00;
      FUN_00409350();
      local_c._0_1_ = 3;
      FUN_00988f20();
      local_4f0 = (undefined1 *)&uStack_520;
      local_c._0_1_ = 4;
      FUN_00988f20();
      FUN_00a76910();
      local_c = CONCAT31(local_c._1_3_,5);
      FUN_00a73d60();
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8();
    }
  }
  else if (0 < iVar3) {
    in_ECX[2] = 1;
  }
  iVar3 = __WSAFDIsSet(in_ECX[3],&local_1e0);
  if (iVar3 != 0) {
    local_4b0 = in_ECX[10];
    local_4b4 = 0;
    local_4f0 = (undefined1 *)send(in_ECX[3],(char *)&local_4b4,8,0);
    local_4bc = 0xf;
    local_4c0 = 0;
    local_4d0 = local_4d0 & 0xffffff00;
    FUN_00409350();
    local_c = 6;
    FUN_004015b0();
    local_c._0_1_ = 7;
    FUN_00987d50();
    FUN_00401280();
    local_c = CONCAT31(local_c._1_3_,6);
    FUN_00987ac0();
    ppuStack_378 = std::ios_base::vftable;
    FUN_00aad52d();
    local_c = 0xffffffff;
    if (0xf < local_4bc) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (local_4f0 == (undefined1 *)0xffffffff) {
      iVar3 = WSAGetLastError();
      if (iVar3 != 0x2733) {
        WSAGetLastError();
        FUN_009885d0();
        local_c = 8;
        FUN_009885d0();
        local_c._0_1_ = 9;
        FUN_009888f0();
        local_c._0_1_ = 10;
        FUN_009885d0();
        local_c._0_1_ = 0xb;
        FUN_00988f20();
        local_4f0 = (undefined1 *)&uStack_520;
        local_c._0_1_ = 0xc;
        FUN_00988f20();
        FUN_00a76910();
        local_c = CONCAT31(local_c._1_3_,0xd);
        FUN_00a73d60();
                    /* WARNING: Subroutine does not return */
        __CxxThrowException_8();
      }
      FUN_009885d0();
      local_c = 0xe;
      FUN_004015b0();
      local_c._0_1_ = 0xf;
      FUN_00987d50();
      FUN_00401280();
      local_c = CONCAT31(local_c._1_3_,0xe);
      FUN_00987ac0();
      ppuStack_378 = std::ios_base::vftable;
      FUN_00aad52d();
      local_c = 0xffffffff;
      if (0xf < local_4d8) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
    local_c = 0xffffffff;
    *(undefined1 *)(in_ECX + 0xb) = 1;
  }
  iVar3 = __WSAFDIsSet(in_ECX[3],&local_2e8);
  if (iVar3 != 0) {
    if (in_ECX[8] < 1) {
      if (in_ECX[7] != 0) {
        FUN_009d6f00();
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      puVar5 = (undefined4 *)FUN_00aae9af();
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        *puVar5 = 0;
        puVar5[1] = 0;
        puVar5[2] = 0;
        puVar5[4] = 0;
        puVar5[5] = 0;
        puVar5[6] = 0;
        puVar5[0xd] = 0xf;
        puVar5[0xc] = 0;
        *(undefined1 *)(puVar5 + 8) = 0;
      }
      in_ECX[7] = (int)puVar5;
      pcStack_4f4 = (char *)0x0;
      iVar3 = recv(in_ECX[3],(char *)&pcStack_4f4,4,0);
      if (iVar3 != -1) {
        if (iVar3 == 0) {
          FUN_009885d0();
          local_c = 0x1a;
          FUN_004015b0();
          local_c._0_1_ = 0x1b;
          FUN_00987d20();
          FUN_00401280();
          local_c = CONCAT31(local_c._1_3_,0x1a);
          FUN_00401650();
          local_c = 0xffffffff;
          FUN_00408ad0();
        }
        FUN_009885d0();
        local_c = 0x1c;
        uVar6 = FUN_004015b0();
        pcVar4 = "TCP: Received datasize ";
        local_c = CONCAT31(local_c._1_3_,0x1d);
        FUN_00987d50();
        pppuStack_51c = (undefined ***)0xa74750;
        puStack_518 = (undefined1 *)uVar6;
        pppuStack_51c = (undefined ***)FUN_00455470();
        uStack_520 = 0xa74756;
        FUN_00401280();
        pppuStack_51c = appuStack_390;
        uStack_24 = CONCAT31(uStack_24._1_3_,0x1c);
        uStack_520 = 0xa7476e;
        FUN_00987ac0();
        pppuStack_51c = appuStack_390;
        appuStack_390[0] = std::ios_base::vftable;
        uStack_520 = 0xa74786;
        FUN_00aad52d();
        uStack_24 = 0xffffffff;
        pppuStack_51c = (undefined ***)0xa7479d;
        FUN_00408ad0();
        in_ECX[8] = (int)pcVar4;
        in_ECX[5] = (int)pcVar4;
        pppuStack_51c = (undefined ***)0xa747af;
        FUN_009d7300();
        ExceptionList = pvStack_2c;
        return;
      }
      iVar3 = WSAGetLastError();
      if (iVar3 != 0x2733) {
        FUN_009885d0();
        local_c = 0x1e;
        FUN_004015b0();
        local_c = CONCAT31(local_c._1_3_,0x1f);
        FUN_00987d20();
        FUN_00455470();
        FUN_00418e30();
        puStack_518 = (undefined1 *)0xa74840;
        FUN_00401280();
        pvStack_14 = (void *)CONCAT31(pvStack_14._1_3_,0x1e);
        FUN_00401650();
        pvStack_14 = (void *)0xffffffff;
        FUN_00408ad0();
        (**(code **)(*in_ECX + 4))();
      }
    }
    else {
      pcVar4 = (char *)FUN_00aad56b();
      pcStack_4f4 = pcVar4;
      iVar3 = recv(in_ECX[3],pcVar4,0x5dc,0);
      buf = pcStack_4f4;
      while (pcStack_4f4 = buf, iVar3 != -1) {
        if (iVar3 == 0) {
          FUN_009885d0();
          local_c = 0x10;
          FUN_004015b0();
          local_c = CONCAT31(local_c._1_3_,0x11);
          FUN_00987d50();
          puStack_518 = (undefined1 *)0xa74484;
          FUN_00401280();
          uStack_1c = CONCAT31(uStack_1c._1_3_,0x10);
          puStack_518 = (undefined1 *)0xa7449c;
          FUN_00987ac0();
          ppuStack_388 = std::ios_base::vftable;
          puStack_518 = (undefined1 *)0xa744b4;
          FUN_00aad52d();
          uStack_1c = 0xffffffff;
          FUN_00408ad0();
          FUN_009885d0();
          uStack_1c = 0x12;
          FUN_009885d0();
          FUN_00a76910(0xd1,&stack0xfffffb04);
          uStack_1c = CONCAT31(uStack_1c._1_3_,0x13);
          puStack_518 = (undefined1 *)0xa74524;
          FUN_00a73d60();
          puStack_518 = auStack_498;
                    /* WARNING: Subroutine does not return */
          pppuStack_51c = (undefined ***)0xa74533;
          __CxxThrowException_8();
        }
        pcVar7 = (char *)((in_ECX[5] - in_ECX[8]) + *(int *)in_ECX[7]);
        pcVar1 = pcVar4 + iVar3;
        pcVar2 = buf;
        while (pcVar2 != pcVar1) {
          *pcVar7 = *pcVar4;
          pcVar7 = pcVar7 + 1;
          pcVar4 = pcVar4 + 1;
          pcVar2 = pcVar4;
        }
        in_ECX[8] = in_ECX[8] - iVar3;
        in_ECX[9] = in_ECX[9] + 1;
        if (in_ECX[8] < 1) {
          *(undefined1 *)(in_ECX + 6) = 1;
        }
        iVar3 = recv(in_ECX[3],buf,0x5dc,0);
        pcVar4 = buf;
        buf = pcStack_4f4;
      }
      iVar3 = WSAGetLastError();
      if (iVar3 != 0x2733) {
        WSAGetLastError();
        FUN_009885d0();
        local_c = 0x14;
        FUN_009885d0();
        local_c._0_1_ = 0x15;
        FUN_009888f0();
        local_c._0_1_ = 0x16;
        FUN_009885d0();
        local_c._0_1_ = 0x17;
        FUN_00988f20();
        local_4f0 = (undefined1 *)&uStack_520;
        local_c._0_1_ = 0x18;
        FUN_00988f20();
        FUN_00a76910();
        local_c = CONCAT31(local_c._1_3_,0x19);
        FUN_00a73d60();
                    /* WARNING: Subroutine does not return */
        __CxxThrowException_8();
      }
    }
  }
  ExceptionList = pvStack_14;
  return;
}

