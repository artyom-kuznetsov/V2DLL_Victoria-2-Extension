// FUN_00a755e0 @ 00a755e0 body=[[00a755e0, 00a7588e] [00a75892, 00a75a5d] [00a75a61, 00a75bfd] [00a75c01, 00a75e12] [00a75e16, 00a75f07] [00a75f0b, 00a75f22] [00a75f33, 00a76056] [00a7605a, 00a7621c] [00a76220, 00a763c1] [00a763c5, 00a7666f] [00a76688, 00a767a0]]


int FUN_00a755e0(void)

{
  int *piVar1;
  char cVar2;
  SOCKET SVar3;
  int *piVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  int in_ECX;
  int iVar8;
  char *extraout_ECX;
  uint uVar9;
  size_t _Size;
  undefined4 uStack_5c0;
  char *local_5bc;
  char *pcStack_5b8;
  char *pcStack_594;
  SOCKET *local_590;
  undefined1 *local_58c;
  char *local_588;
  uint local_584;
  uint local_580 [4];
  undefined4 local_570;
  uint local_56c;
  SOCKET local_560;
  undefined1 local_55c [16];
  undefined4 local_54c;
  undefined4 local_548;
  int local_540;
  char local_53c [16];
  undefined4 local_52c;
  undefined4 local_528;
  undefined1 local_520 [16];
  undefined4 local_510;
  undefined4 local_50c;
  undefined1 local_504;
  undefined4 local_4f4;
  undefined4 local_4f0;
  undefined **local_4e8;
  undefined4 local_4e4;
  undefined1 local_4e0;
  undefined4 local_4d0;
  undefined4 local_4cc;
  undefined1 local_4c4;
  undefined4 local_4b4;
  undefined4 local_4b0;
  undefined4 uStack_4ac;
  int local_4a8;
  int iStack_4a4;
  sockaddr local_4a0;
  undefined4 local_490;
  uint local_48c;
  undefined **local_47c;
  undefined4 local_478;
  int local_43c;
  timeval local_438;
  char local_430 [152];
  undefined **ppuStack_398;
  char local_350 [32];
  fd_set local_330;
  fd_set local_228;
  fd_set local_120;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b5c9a7;
  pvStack_14 = ExceptionList;
  local_330.fd_array[0] = *(SOCKET *)(in_ECX + 0xc);
  piVar1 = (int *)(in_ECX + 0x10);
  iVar8 = *(int *)(in_ECX + 0x14) - *piVar1;
  iVar5 = iVar8 >> 0x1f;
  uVar9 = 0;
  local_228.fd_count = 0;
  local_120.fd_count = 0;
  local_330.fd_count = 1;
  if (iVar8 / 0x24 + iVar5 != iVar5) {
    local_590 = (SOCKET *)*piVar1;
    do {
      SVar3 = *local_590;
      if (SVar3 != 0xffffffff) {
        if (local_590[8] == 0xffffffff) {
          if (local_330.fd_count < 0x40) {
            local_330.fd_array[local_330.fd_count] = SVar3;
            local_330.fd_count = local_330.fd_count + 1;
          }
        }
        else if (local_228.fd_count < 0x40) {
          local_228.fd_array[local_228.fd_count] = SVar3;
          local_228.fd_count = local_228.fd_count + 1;
        }
        if (local_120.fd_count < 0x40) {
          local_120.fd_array[local_120.fd_count] = *local_590;
          local_120.fd_count = local_120.fd_count + 1;
        }
      }
      local_590 = local_590 + 9;
      uVar9 = uVar9 + 1;
    } while (uVar9 < (uint)((*(int *)(in_ECX + 0x14) - *piVar1) / 0x24));
  }
  local_438.tv_sec = 0;
  local_438.tv_usec = 0;
  pcStack_5b8 = (char *)0xa75709;
  ExceptionList = &pvStack_14;
  local_540 = in_ECX;
  iVar5 = select(0,&local_330,&local_228,(fd_set *)0x0,&local_438);
  if ((iVar5 == -1) && (iVar5 = WSAGetLastError(), iVar5 != 0x2733)) {
    iVar5 = WSAGetLastError();
    local_548 = 0xf;
    local_54c = 0;
    local_55c[0] = 0;
    FUN_00409350();
    local_c = 0;
    local_528 = 0xf;
    local_52c = 0;
    local_53c[0] = '\0';
    FUN_00409350();
    local_56c = 0xf;
    local_570 = 0;
    local_580[0] = local_580[0] & 0xffffff00;
    local_c._0_1_ = 2;
    pcVar6 = __itoa(iVar5,local_430,10);
    local_590 = (SOCKET *)(pcVar6 + 1);
    do {
      cVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar2 != '\0');
    FUN_00409350();
    local_c._0_1_ = 3;
    local_4f0 = 0xf;
    local_4f4 = 0;
    local_504 = 0;
    FUN_00409350();
    local_c._0_1_ = 4;
    FUN_00988f20();
    local_c._0_1_ = 5;
    FUN_00988f20();
    local_58c = (undefined1 *)&local_5bc;
    local_c._0_1_ = 6;
    uStack_5c0 = 0xffffffff;
    local_5bc = (char *)((uint)local_5bc & 0xffffff00);
    FUN_00408ed0(&local_4a0,0);
    uStack_5c0 = 0x1c4;
    FUN_009e7a90(&local_47c);
    local_47c = &PTR_FUN_00e37db4;
    local_43c = iVar5;
    if (local_48c < 0x10) {
      local_48c = 0xf;
      local_490 = 0;
      local_4a0._0_4_ = local_4a0._0_4_ & 0xffffff00;
      local_c._0_1_ = 7;
      local_4e8 = &PTR_FUN_00e37db4;
      local_4e4 = local_478;
      local_4cc = 0xf;
      local_4d0 = 0;
      local_4e0 = 0;
      FUN_00408ed0();
      local_c._0_1_ = 8;
      local_4b0 = 0xf;
      local_4b4 = 0;
      local_4c4 = 0;
      FUN_00408ed0();
      local_c = CONCAT31(local_c._1_3_,7);
      local_4e8 = &PTR_FUN_00e37db4;
      local_4a8 = local_43c;
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8();
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  iVar5 = __WSAFDIsSet(*(SOCKET *)(local_540 + 0xc),&local_330);
  if (iVar5 != 0) {
    local_590 = (SOCKET *)0x10;
    local_560 = accept(*(SOCKET *)(local_540 + 0xc),&local_4a0,(int *)&local_590);
    if (local_560 == 0xffffffff) {
      iVar5 = WSAGetLastError();
      if (iVar5 != 0x2733) {
        iVar5 = WSAGetLastError();
        local_4f0 = 0xf;
        local_4f4 = 0;
        local_504 = 0;
        FUN_00409350();
        local_c = 0x14;
        local_528 = 0xf;
        local_52c = 0;
        local_53c[0] = '\0';
        FUN_00409350();
        local_50c = 0xf;
        local_510 = 0;
        local_520[0] = 0;
        local_c._0_1_ = 0x16;
        pcVar6 = __itoa(iVar5,local_350,10);
        local_588 = pcVar6 + 1;
        do {
          cVar2 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar2 != '\0');
        FUN_00409350();
        local_c._0_1_ = 0x17;
        local_548 = 0xf;
        local_54c = 0;
        local_55c[0] = 0;
        FUN_00409350();
        local_c._0_1_ = 0x18;
        FUN_00988f20();
        local_c._0_1_ = 0x19;
        FUN_00988f20();
        local_58c = (undefined1 *)&local_5bc;
        local_c._0_1_ = 0x1a;
        uStack_5c0 = 0xffffffff;
        local_5bc = (char *)((uint)local_5bc & 0xffffff00);
        FUN_00408ed0(local_580,0);
        uStack_5c0 = 0x1eb;
        FUN_009e7a90(&local_47c);
        local_47c = &PTR_FUN_00e37db4;
        local_43c = iVar5;
        if (local_56c < 0x10) {
          local_56c = 0xf;
          local_570 = 0;
          local_580[0] = local_580[0] & 0xffffff00;
          local_c._0_1_ = 0x1b;
          local_4e8 = &PTR_FUN_00e37db4;
          local_4e4 = local_478;
          local_4cc = 0xf;
          local_4d0 = 0;
          local_4e0 = 0;
          FUN_00408ed0();
          local_c._0_1_ = 0x1c;
          local_4b0 = 0xf;
          local_4b4 = 0;
          local_4c4 = 0;
          FUN_00408ed0();
          local_c = CONCAT31(local_c._1_3_,0x1b);
          local_4e8 = &PTR_FUN_00e37db4;
          local_4a8 = local_43c;
                    /* WARNING: Subroutine does not return */
          __CxxThrowException_8();
        }
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
    else {
      local_56c = 0xf;
      local_570 = 0;
      local_580[0] = local_580[0] & 0xffffff00;
      FUN_00409350();
      local_c = 9;
      FUN_004015b0();
      local_c._0_1_ = 10;
      FUN_00987d50();
      FUN_00401280();
      local_c = CONCAT31(local_c._1_3_,9);
      FUN_00987ac0();
      ppuStack_398 = std::ios_base::vftable;
      FUN_00aad52d();
      local_c = 0xffffffff;
      if (0xf < local_56c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_588 = (char *)0x1;
      iVar5 = ioctlsocket(local_560,-0x7ffb9982,(u_long *)&local_588);
      if (iVar5 == -1) {
        iVar5 = WSAGetLastError();
        local_50c = 0xf;
        local_510 = 0;
        local_520[0] = 0;
        FUN_00409350();
        local_c = 0xb;
        local_4f0 = 0xf;
        local_4f4 = 0;
        local_504 = 0;
        FUN_00409350();
        local_548 = 0xf;
        local_54c = 0;
        local_55c[0] = 0;
        local_c._0_1_ = 0xd;
        pcVar6 = __itoa(iVar5,local_350,10);
        do {
          cVar2 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar2 != '\0');
        FUN_00409350();
        local_c._0_1_ = 0xe;
        local_528 = 0xf;
        local_52c = 0;
        local_53c[0] = cVar2;
        FUN_00409350();
        local_c._0_1_ = 0xf;
        FUN_00988f20();
        local_c._0_1_ = 0x10;
        FUN_00988f20();
        local_58c = (undefined1 *)&local_5bc;
        local_c._0_1_ = 0x11;
        uStack_5c0 = 0xffffffff;
        local_5bc = (char *)((uint)local_5bc & 0xffffff00);
        FUN_00408ed0(local_580,0);
        uStack_5c0 = 0x1de;
        FUN_009e7a90(&local_47c);
        local_47c = &PTR_FUN_00e37db4;
        local_43c = iVar5;
        if (local_56c < 0x10) {
          local_56c = 0xf;
          local_570 = 0;
          local_580[0] = local_580[0] & 0xffffff00;
          local_c._0_1_ = 0x12;
          local_4e8 = &PTR_FUN_00e37db4;
          local_4e4 = local_478;
          local_4cc = 0xf;
          local_4d0 = 0;
          local_4e0 = 0;
          FUN_00408ed0();
          local_c._0_1_ = 0x13;
          local_4b0 = 0xf;
          local_4b4 = 0;
          local_4c4 = 0;
          FUN_00408ed0();
          local_c = CONCAT31(local_c._1_3_,0x12);
          local_4e8 = &PTR_FUN_00e37db4;
          local_4a8 = local_43c;
                    /* WARNING: Subroutine does not return */
          __CxxThrowException_8();
        }
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      pcStack_5b8 = (char *)0xa75cea;
      FUN_00a75450();
    }
  }
  iVar5 = *(int *)(in_ECX + 0x14) - *piVar1;
  local_584 = 0;
  if (iVar5 / 0x24 + (iVar5 >> 0x1f) != iVar5 >> 0x1f) {
    iVar8 = 0;
    do {
      iVar5 = __WSAFDIsSet(*(SOCKET *)(*piVar1 + iVar8),&local_228);
      if ((iVar5 != 0) && (iVar5 = iVar8 + *piVar1, *(int *)(iVar8 + 0x14 + *piVar1) != 0)) {
        if (*(int *)(iVar5 + 0x18) == 0) {
          piVar4 = *(int **)(iVar5 + 0x14);
          local_590 = (SOCKET *)(piVar4[1] - *piVar4);
          local_56c = 0xf;
          local_570 = 0;
          local_580[0] = local_580[0] & 0xffffff00;
          FUN_00409350();
          local_c = 0x1d;
          pcVar6 = (char *)FUN_004015b0();
          local_c._0_1_ = 0x1e;
          FUN_00987d50();
          local_5bc = (char *)0xa75dbe;
          pcStack_5b8 = pcVar6;
          FUN_00455470();
          FUN_00401280();
          local_c = CONCAT31(local_c._1_3_,0x1d);
          FUN_00987ac0();
          ppuStack_398 = std::ios_base::vftable;
          FUN_00aad52d();
          local_c = 0xffffffff;
          if (0xf < local_56c) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          iVar5 = send(*(SOCKET *)(*piVar1 + iVar8),(char *)&local_590,4,0);
          if (iVar5 == -1) {
            WSAGetLastError();
            local_528 = 0xf;
            local_52c = 0;
            local_53c[0] = '\0';
            FUN_00409350();
            local_c = 0x1f;
            local_548 = 0xf;
            local_54c = 0;
            local_55c[0] = 0;
            FUN_00409350();
            local_c._0_1_ = 0x20;
            FUN_009888f0();
            local_c._0_1_ = 0x21;
            local_50c = 0xf;
            local_510 = 0;
            local_520[0] = 0;
            FUN_00409350();
            local_c._0_1_ = 0x22;
            FUN_00988f20();
            local_58c = (undefined1 *)&uStack_5c0;
            local_c._0_1_ = 0x23;
            FUN_00988f20(local_55c);
            FUN_00a76910(0x205,local_53c);
            local_c = CONCAT31(local_c._1_3_,0x24);
            FUN_00a73d60();
                    /* WARNING: Subroutine does not return */
            __CxxThrowException_8();
          }
        }
        local_560 = 0;
        if ((*(int *)(iVar8 + 0x14 + *piVar1) != 0) &&
           (iVar5 = iVar8 + *piVar1, piVar4 = *(int **)(iVar5 + 0x14),
           *(int *)(iVar5 + 0x18) < piVar4[1] - *piVar4)) {
          piVar4 = *(int **)(*piVar1 + 0x14 + iVar8);
          local_560 = 1;
          _Size = 0x5dc;
          if (piVar4[1] - *piVar4 < *(int *)(*piVar1 + 0x18 + iVar8) + 0x5dc) {
            piVar4 = *(int **)(iVar8 + *piVar1 + 0x14);
            _Size = (piVar4[1] - *(int *)(iVar8 + *piVar1 + 0x18)) - *piVar4;
          }
          local_588 = (char *)FUN_00aad56b();
          FID_conflict__memcpy
                    (local_588,
                     (void *)(*(int *)(iVar8 + *piVar1 + 0x18) + **(int **)(iVar8 + *piVar1 + 0x14))
                     ,_Size);
          iVar5 = send(*(SOCKET *)(*piVar1 + iVar8),local_588,_Size,0);
          if (iVar5 == -1) {
            iVar5 = WSAGetLastError();
            if (iVar5 == 0x2733) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
            WSAGetLastError();
            local_548 = 0xf;
            local_54c = 0;
            local_55c[0] = 0;
            FUN_00409350();
            local_c = 0x25;
            local_50c = 0xf;
            local_510 = 0;
            local_520[0] = 0;
            FUN_00409350();
            local_c._0_1_ = 0x26;
            FUN_009888f0();
            local_c._0_1_ = 0x27;
            FUN_009885d0();
            local_c._0_1_ = 0x28;
            FUN_00988f20();
            local_58c = (undefined1 *)&uStack_5c0;
            local_c._0_1_ = 0x29;
            FUN_00988f20(local_520);
            FUN_00a76910(0x229,local_55c);
            local_c = CONCAT31(local_c._1_3_,0x2a);
            FUN_00a73d60();
                    /* WARNING: Subroutine does not return */
            __CxxThrowException_8();
          }
          piVar4 = (int *)(iVar8 + 0x1c + *piVar1);
          *piVar4 = *piVar4 + 1;
          piVar4 = (int *)(iVar8 + 0x18 + *piVar1);
          *piVar4 = *piVar4 + _Size;
          iVar5 = *piVar1;
          piVar4 = *(int **)(iVar5 + 0x14 + iVar8);
          if (piVar4[1] - *piVar4 <= *(int *)(iVar5 + 0x18 + iVar8)) {
            if (*(int *)(iVar8 + 0x14 + iVar5) != 0) {
              FUN_009d6f00();
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
            *(undefined4 *)(iVar8 + 0x14 + *piVar1) = 0;
            *(undefined4 *)(iVar8 + 0x18 + *piVar1) = 0;
          }
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
      }
      iVar5 = __WSAFDIsSet(*(SOCKET *)(*piVar1 + iVar8),&local_330);
      if (iVar5 == 0) {
LAB_00a763e7:
        iVar5 = __WSAFDIsSet(*(SOCKET *)(*piVar1 + iVar8),&local_120);
        if (iVar5 != 0) {
          local_58c = (undefined1 *)0x0;
          iStack_4a4 = 4;
          pcStack_5b8 = (char *)0xa76435;
          getsockopt(*(SOCKET *)(*piVar1 + iVar8),0xffff,0x1007,(char *)&local_58c,&iStack_4a4);
        }
      }
      else {
        iVar5 = recv(*(SOCKET *)(*piVar1 + iVar8),(char *)&local_4a0,8,0);
        if (iVar5 == -1) {
          iVar5 = WSAGetLastError();
          if (iVar5 != 0x2733) {
            WSAGetLastError();
            local_528 = 0xf;
            local_52c = 0;
            local_53c[0] = '\0';
            FUN_00409350();
            local_c = 0x2f;
            local_548 = 0xf;
            local_54c = 0;
            local_55c[0] = 0;
            FUN_00409350();
            local_c._0_1_ = 0x30;
            FUN_009888f0();
            local_c._0_1_ = 0x31;
            local_50c = 0xf;
            local_510 = 0;
            local_520[0] = 0;
            FUN_00409350();
            local_c._0_1_ = 0x32;
            FUN_00988f20();
            local_58c = (undefined1 *)&uStack_5c0;
            local_c._0_1_ = 0x33;
            FUN_00988f20(local_55c);
            FUN_00a76910(0x259,local_53c);
            local_c = CONCAT31(local_c._1_3_,0x34);
            FUN_00a73d60();
                    /* WARNING: Subroutine does not return */
            __CxxThrowException_8();
          }
          goto LAB_00a763e7;
        }
        if (iVar5 != 0) {
          local_56c = 0xf;
          local_570 = 0;
          local_580[0] = local_580[0] & 0xffffff00;
          FUN_00409350();
          local_c = 0x2d;
          uVar7 = FUN_004015b0();
          local_c._0_1_ = 0x2e;
          FUN_00987d50();
          pcStack_5b8 = pcStack_594;
          local_5bc = " for socket ";
          uVar7 = FUN_00455470(uVar7,uStack_4ac);
          uStack_5c0 = FUN_00418e30(uVar7);
          FUN_00455470();
          FUN_00401280();
          local_c = CONCAT31(local_c._1_3_,0x2d);
          FUN_00987ac0();
          ppuStack_398 = std::ios_base::vftable;
          FUN_00aad52d();
          local_c = 0xffffffff;
          if (0xf < local_56c) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          *(undefined4 *)(iVar8 + 0x20 + *piVar1) = local_4a0.sa_data._2_4_;
          goto LAB_00a763e7;
        }
        FUN_00a76860();
        local_56c = 0xf;
        local_570 = 0;
        local_580[0] = local_580[0] & 0xffffff00;
        FUN_00409350();
        local_c = 0x2b;
        uVar7 = FUN_004015b0();
        local_c._0_1_ = 0x2c;
        FUN_00987d50();
        local_5bc = pcStack_594;
        uStack_5c0 = uVar7;
        pcStack_5b8 = extraout_ECX;
        FUN_00455470();
        FUN_00418e30();
        FUN_00401280();
        local_c = CONCAT31(local_c._1_3_,0x2b);
        FUN_00987ac0();
        ppuStack_398 = std::ios_base::vftable;
        FUN_00aad52d();
        local_c = 0xffffffff;
        if (0xf < local_56c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
      }
      iVar5 = *(int *)(in_ECX + 0x14) - *piVar1;
      local_584 = local_584 + 1;
      iVar8 = iVar8 + 0x24;
    } while (local_584 < (uint)(iVar5 / 0x24));
  }
  ExceptionList = pvStack_14;
  return iVar5 * 0x38e38e39;
}

