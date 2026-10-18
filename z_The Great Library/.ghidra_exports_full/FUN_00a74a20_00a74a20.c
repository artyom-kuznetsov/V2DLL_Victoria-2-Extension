// FUN_00a74a20 @ 00a74a20 body=[[00a74a20, 00a74beb] [00a74bef, 00a74fa5] [00a74fa9, 00a74fc6]]


undefined4 FUN_00a74a20(void)

{
  char cVar1;
  u_short uVar2;
  int iVar3;
  char *pcVar4;
  int in_ECX;
  undefined1 local_22c [16];
  undefined4 local_21c;
  undefined4 local_218;
  undefined1 local_210 [16];
  undefined4 local_200;
  undefined4 local_1fc;
  int local_1f4;
  u_long local_1f0;
  undefined1 local_1ec;
  undefined4 local_1dc;
  undefined4 local_1d8;
  sockaddr local_1d0;
  char local_1c0 [4];
  uint uStack_1bc;
  undefined4 local_1b0;
  undefined4 local_1ac;
  uint local_1a0 [4];
  undefined4 local_190;
  uint local_18c;
  undefined **local_17c;
  undefined4 local_178;
  undefined1 local_174;
  undefined4 local_164;
  undefined4 local_160;
  undefined1 local_158;
  undefined4 local_148;
  undefined4 local_144;
  int local_13c;
  undefined **local_138;
  undefined4 local_134;
  int local_f8;
  undefined **ppuStack_70;
  void *pvStack_24;
  undefined1 uStack_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b541fd;
  pvStack_14 = ExceptionList;
  local_1d0.sa_family = 2;
  ExceptionList = &pvStack_14;
  uVar2 = htons(*(u_short *)(in_ECX + 4));
  local_1d0.sa_data[0] = (char)uVar2;
  local_1d0.sa_data[1] = (char)(uVar2 >> 8);
  local_1d0.sa_data._2_4_ = htonl(0);
  iVar3 = bind(*(SOCKET *)(in_ECX + 0xc),&local_1d0,0x10);
  if (iVar3 == -1) {
    iVar3 = WSAGetLastError();
    local_1f4 = iVar3;
    FUN_00409350();
    local_c = 0;
    local_218 = 0xf;
    local_21c = 0;
    local_22c[0] = 0;
    FUN_00409350();
    local_1d8 = 0xf;
    local_1dc = 0;
    local_1ec = 0;
    local_c._0_1_ = 2;
    pcVar4 = __itoa(iVar3,local_1c0,10);
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    FUN_00409350();
    local_c._0_1_ = 3;
    local_1fc = 0xf;
    local_200 = 0;
    local_210[0] = 0;
    FUN_00409350();
    local_c._0_1_ = 4;
    FUN_00988f20();
    local_c._0_1_ = 5;
    FUN_00988f20();
    local_c._0_1_ = 6;
    FUN_00408ed0(local_1a0,0);
    FUN_009e7a90(&local_138);
    local_138 = &PTR_FUN_00e37db4;
    local_f8 = local_1f4;
    if (0xf < local_18c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_18c = 0xf;
    local_190 = 0;
    local_1a0[0] = local_1a0[0] & 0xffffff00;
    local_c._0_1_ = 7;
    local_17c = &PTR_FUN_00e37db4;
    local_178 = local_134;
    local_160 = 0xf;
    local_164 = 0;
    local_174 = 0;
    FUN_00408ed0();
    local_c._0_1_ = 8;
    local_144 = 0xf;
    local_148 = 0;
    local_158 = 0;
    FUN_00408ed0();
    local_c = CONCAT31(local_c._1_3_,7);
    local_17c = &PTR_FUN_00e37db4;
    local_13c = local_f8;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8();
  }
  iVar3 = listen(*(SOCKET *)(in_ECX + 0xc),5);
  if (iVar3 == -1) {
    WSAGetLastError();
    local_1fc = 0xf;
    local_200 = 0;
    local_210[0] = 0;
    FUN_00409350();
    local_c = 9;
    local_218 = 0xf;
    local_21c = 0;
    local_22c[0] = 0;
    FUN_00409350();
    local_c._0_1_ = 10;
    FUN_009888f0();
    local_c._0_1_ = 0xb;
    FUN_00409350();
    local_c._0_1_ = 0xc;
    FUN_00988f20();
    local_c._0_1_ = 0xd;
    FUN_00988f20(local_22c);
    FUN_00a76910(0x149,local_210);
    local_c = CONCAT31(local_c._1_3_,0xe);
    FUN_00a73d60();
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8();
  }
  local_1f0 = 1;
  iVar3 = ioctlsocket(*(SOCKET *)(in_ECX + 0xc),-0x7ffb9982,&local_1f0);
  if (iVar3 == -1) {
    WSAGetLastError();
    local_1fc = 0xf;
    local_200 = 0;
    local_210[0] = 0;
    FUN_00409350();
    local_c = 0xf;
    local_218 = 0xf;
    local_21c = 0;
    local_22c[0] = 0;
    FUN_00409350();
    local_c._0_1_ = 0x10;
    FUN_009888f0();
    local_c._0_1_ = 0x11;
    FUN_00409350();
    local_c._0_1_ = 0x12;
    FUN_00988f20();
    local_c._0_1_ = 0x13;
    FUN_00988f20(local_22c);
    FUN_00a76910(0x153,local_210);
    local_c = CONCAT31(local_c._1_3_,0x14);
    FUN_00a73d60();
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8();
  }
  local_1ac = 0xf;
  local_1b0 = 0;
  local_1c0[0] = '\0';
  FUN_00409350();
  local_c = 0x15;
  FUN_004015b0();
  local_c = CONCAT31(local_c._1_3_,0x16);
  FUN_00987d50();
  FUN_00401280();
  uStack_1c = 0x15;
  FUN_00987ac0();
  ppuStack_70 = std::ios_base::vftable;
  FUN_00aad52d();
  if (0xf < uStack_1bc) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  *(undefined4 *)(in_ECX + 8) = 1;
  ExceptionList = pvStack_24;
  return 1;
}

