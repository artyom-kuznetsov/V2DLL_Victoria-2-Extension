// FUN_005d8310 @ 005d8310 body=[[005d8310, 005d8400] [005d8404, 005d84cd] [005d84d1, 005d86a6] [005d86aa, 005d86d9] [005d86dd, 005d8701] [005d8705, 005d873c] [005d8740, 005d875b] [005d875f, 005d8785] [005d8789, 005d88db] [005d88df, 005d8905] [005d8909, 005d8933] [005d8937, 005d8961] [005d8965, 005d898f] [005d8993, 005d89bd] [005d89c1, 005d89f7] [005d89fb, 005d8a16] [005d8a1a, 005d8a42] [005d8a46, 005d8db3] [005d8db7, 005d8de6] [005d8dea, 005d8e14] [005d8e18, 005d8e3c] [005d8e40, 005d8e61] [005d8e65, 005d8ea1] [005d8ea5, 005d8ec9] [005d8ecd, 005d8ee8] [005d8eec, 005d8f0d] [005d8f11, 005d8f42] [005d8f46, 005d8f7d] [005d8f81, 005d8f99]]


undefined1 * FUN_005d8310(undefined1 *param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int in_ECX;
  undefined8 uVar6;
  undefined8 local_188;
  undefined1 local_170 [4];
  int local_16c;
  undefined4 local_168;
  undefined4 local_164;
  uint local_15c [4];
  undefined4 local_14c;
  uint local_148;
  int local_140;
  uint local_13c [4];
  undefined4 local_12c;
  uint local_128;
  undefined4 *local_120;
  uint local_11c;
  undefined4 local_10c;
  uint local_108;
  uint local_100;
  undefined4 local_f0;
  uint local_ec;
  uint local_e4 [4];
  undefined4 local_d4;
  uint local_d0;
  uint local_c8;
  undefined4 local_b8;
  uint local_b4;
  uint local_ac [4];
  undefined4 local_9c;
  uint local_98;
  uint local_90;
  undefined4 local_80;
  uint local_7c;
  undefined1 *local_74;
  uint local_6c [4];
  undefined4 uStack_5c;
  uint local_58;
  uint local_50;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_34 [5];
  uint uStack_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  puStack_10 = &LAB_00b71398;
  local_14 = ExceptionList;
  local_140 = 0;
  local_3c = 0xf;
  local_40 = 0;
  local_50 = local_50 & 0xffffff00;
  local_c = 0;
  iVar3 = *(int *)(in_ECX + 0xdc);
  if (*(char *)(*(int *)(iVar3 + 0x5c) + 0x2a) == '\0') {
    local_120 = (undefined4 *)(in_ECX + 0xc0);
    local_188 = CONCAT44(local_120,0x5d8436);
    ExceptionList = &local_14;
    cVar2 = FUN_004b7db0();
    if (cVar2 != '\0') {
      local_188 = 0x1000e02e8c;
      local_148 = 0xf;
      local_14c = 0;
      local_15c[0] = local_15c[0] & 0xffffff00;
      FUN_00409350();
      local_188 = CONCAT44(local_15c,local_170);
      local_c._0_1_ = 4;
      FUN_009a8ee0();
      local_c._0_1_ = 5;
      local_188 = CONCAT44(0x5d8480,(undefined4)local_188);
      iVar3 = FUN_00475500();
      local_188 = *(undefined8 *)(iVar3 + 0x74);
      FUN_009a9880(*(undefined8 *)(iVar3 + 0x6c));
      local_c._0_1_ = 6;
      local_188 = CONCAT44(0x5d84b3,(undefined4)local_188);
      FUN_009adb70();
      if (local_16c != 0) {
        local_188 = CONCAT44(0x5d84c4,(undefined4)local_188);
        FUN_009e6a80();
        local_188 = CONCAT44(local_16c,&UNK_005d84ce);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_16c = 0;
      local_168 = 0;
      local_164 = 0;
      if (local_148 < 0x10) {
        ExceptionList = local_14;
        return param_1;
      }
      local_188._4_4_ = local_15c[0];
      goto LAB_005d8f79;
    }
    if (*(char *)(*(int *)(iVar3 + 0x5c) + 0xd9) != '\0') {
      local_74 = (undefined1 *)*local_120;
      local_188 = CONCAT44(iVar3,0x5d8525);
      cVar2 = FUN_00539260();
      if (cVar2 != '\0') {
        local_188 = CONCAT44(0x5d853e,(undefined4)local_188);
        FUN_009885d0();
        local_188 = CONCAT44(local_34,local_170);
        local_c._0_1_ = 7;
        FUN_009a8ee0();
        local_c._0_1_ = 8;
        local_188 = CONCAT44(0x5d8563,(undefined4)local_188);
        iVar3 = FUN_00475500();
        local_188 = *(undefined8 *)(iVar3 + 0x74);
        FUN_009a9880(*(undefined8 *)(iVar3 + 0x6c));
        local_c = CONCAT31(local_c._1_3_,7);
        local_188 = CONCAT44(local_170,0x5d8596);
        FUN_009a9740();
        local_188 = CONCAT44(0x5d85a2,(undefined4)local_188);
        FUN_00408ad0();
        local_188 = CONCAT44(0x5d85ae,(undefined4)local_188);
        FUN_00408ad0();
        ExceptionList = local_14;
        return param_1;
      }
    }
    local_188 = 0x100dee2cc;
    local_128 = 0xf;
    local_12c = 0;
    local_13c[0] = local_13c[0] & 0xffffff00;
    FUN_00409350();
    local_c._0_1_ = 9;
    local_188 = 0x900e02eb0;
    local_148 = 0xf;
    local_14c = 0;
    local_15c[0] = local_15c[0] & 0xffffff00;
    FUN_00409350();
    local_188 = CONCAT44(local_15c,local_170);
    local_c._0_1_ = 10;
    FUN_009a8ee0();
    local_c._0_1_ = 0xb;
    local_188 = CONCAT44(0x5d8619,(undefined4)local_188);
    iVar3 = FUN_00475500();
    local_188 = *(undefined8 *)(iVar3 + 0x74);
    uVar4 = FUN_009a9880(*(undefined8 *)(iVar3 + 0x6c));
    local_c._0_1_ = 0xc;
    local_188 = CONCAT44(uVar4,0x5d8656);
    FUN_00988fa0();
    local_c._0_1_ = 0xd;
    local_188 = CONCAT44(local_13c,0x5d8674);
    FUN_00988f20();
    local_188 = 0xffffffff00000000;
    local_c._0_1_ = 0xe;
    FUN_00448aa0();
    if (0xf < local_d0) {
      local_188 = CONCAT44(local_e4[0],&UNK_005d86a7);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_d0 = 0xf;
    local_d4 = 0;
    local_e4[0] = local_e4[0] & 0xffffff00;
    if (0xf < local_ec) {
      local_188 = CONCAT44(local_100,&UNK_005d86da);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_ec = 0xf;
    local_f0 = 0;
    local_100 = local_100 & 0xffffff00;
    if (0xf < local_108) {
      local_188 = CONCAT44(local_11c,&UNK_005d8702);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_108 = 0xf;
    local_10c = 0;
    local_11c = local_11c & 0xffffff00;
    local_c._0_1_ = 0xf;
    local_188 = CONCAT44(0x5d8722,(undefined4)local_188);
    FUN_009adb70();
    if (local_16c != 0) {
      local_188 = CONCAT44(0x5d8733,(undefined4)local_188);
      FUN_009e6a80();
      local_188 = CONCAT44(local_16c,&UNK_005d873d);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_16c = 0;
    local_168 = 0;
    local_164 = 0;
    if (0xf < local_148) {
      local_188 = CONCAT44(local_15c[0],&UNK_005d875c);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_c._0_1_ = 0;
    local_148 = 0xf;
    local_14c = 0;
    local_15c[0] = local_15c[0] & 0xffffff00;
    if (0xf < local_128) {
      local_188 = CONCAT44(local_13c[0],&UNK_005d8786);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (*(int *)(in_ECX + 0x1b8) != 0) {
      local_188 = CONCAT44(0x5d87aa,(undefined4)local_188);
      FUN_009885d0();
      local_c._0_1_ = 0x10;
      local_188 = CONCAT44(0x5d87c0,(undefined4)local_188);
      FUN_009885d0();
      local_c._0_1_ = 0x11;
      local_188 = CONCAT44(0x5d87d6,(undefined4)local_188);
      FUN_009885d0();
      local_188 = CONCAT44(local_15c,local_170);
      local_c._0_1_ = 0x12;
      FUN_009a8ee0();
      local_c._0_1_ = 0x13;
      local_188 = CONCAT44(0x5d87fc,(undefined4)local_188);
      iVar3 = FUN_00475500();
      local_188 = *(undefined8 *)(iVar3 + 0x74);
      uVar4 = FUN_009a9880(*(undefined8 *)(iVar3 + 0x6c));
      local_c._0_1_ = 0x14;
      local_188 = CONCAT44(local_ac,0x5d8845);
      uVar5 = FUN_009888f0();
      local_c._0_1_ = 0x15;
      local_188 = CONCAT44(uVar5,0x5d885f);
      FUN_00988fa0();
      local_c._0_1_ = 0x16;
      local_188 = CONCAT44(local_13c,0x5d887d);
      FUN_00988f20();
      local_c._0_1_ = 0x17;
      local_188 = CONCAT44(uVar4,0x5d8894);
      FUN_00988f20();
      local_c._0_1_ = 0x18;
      local_188 = CONCAT44(local_6c,0x5d88af);
      FUN_00988f20();
      local_188 = 0xffffffff00000000;
      local_c._0_1_ = 0x19;
      FUN_00448aa0();
      if (0xf < local_108) {
        local_188 = CONCAT44(local_11c,&UNK_005d88dc);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_108 = 0xf;
      local_10c = 0;
      local_11c = local_11c & 0xffffff00;
      if (0xf < local_ec) {
        local_188 = CONCAT44(local_100,&UNK_005d8906);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_ec = 0xf;
      local_f0 = 0;
      local_100 = local_100 & 0xffffff00;
      if (0xf < local_d0) {
        local_188 = CONCAT44(local_e4[0],&UNK_005d8934);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_d0 = 0xf;
      local_d4 = 0;
      local_e4[0] = local_e4[0] & 0xffffff00;
      if (0xf < local_b4) {
        local_188 = CONCAT44(local_c8,&UNK_005d8962);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_b4 = 0xf;
      local_b8 = 0;
      local_c8 = local_c8 & 0xffffff00;
      if (0xf < local_98) {
        local_188 = CONCAT44(local_ac[0],&UNK_005d8990);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_98 = 0xf;
      local_9c = 0;
      local_ac[0] = local_ac[0] & 0xffffff00;
      if (0xf < local_7c) {
        local_188 = CONCAT44(local_90,&UNK_005d89be);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_7c = 0xf;
      local_80 = 0;
      local_90 = local_90 & 0xffffff00;
      local_c._0_1_ = 0x12;
      local_188 = CONCAT44(local_170,0x5d89e8);
      FUN_009a9740();
      if (0xf < local_128) {
        local_188 = CONCAT44(local_13c[0],&UNK_005d89f8);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_128 = 0xf;
      local_12c = 0;
      local_13c[0] = local_13c[0] & 0xffffff00;
      if (0xf < local_148) {
        local_188 = CONCAT44(local_15c[0],&UNK_005d8a17);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_c._0_1_ = 0;
      local_148 = 0xf;
      local_14c = 0;
      local_15c[0] = local_15c[0] & 0xffffff00;
      if (0xf < local_58) {
        local_188 = CONCAT44(local_6c[0],&UNK_005d8a43);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
    local_c._0_1_ = 0;
    local_148 = 0xf;
    local_14c = 0;
    local_188 = CONCAT44(0x5d8a57,(undefined4)local_188);
    cVar2 = (**(code **)(**(int **)(in_ECX + 0xd8) + 0x20))();
    if ((cVar2 != '\0') &&
       (local_140 = *(int *)(*(int *)(*(int *)(in_ECX + 0xd8) + 0x48) + 0x38), local_140 != 0)) {
      local_188 = CONCAT44(0x5d8a88,(undefined4)local_188);
      FUN_009885d0();
      local_c._0_1_ = 0x1a;
      local_188 = CONCAT44(0x5d8aa1,(undefined4)local_188);
      FUN_009885d0();
      local_c._0_1_ = 0x1b;
      local_188 = CONCAT44(local_6c,local_170);
      FUN_009a8ee0();
      local_c._0_1_ = 0x1c;
      local_188 = CONCAT44(0x5d8ade,(undefined4)local_188);
      iVar3 = FUN_00475500();
      local_188 = *(undefined8 *)(iVar3 + 0x74);
      uVar4 = FUN_009a9880(*(undefined8 *)(iVar3 + 0x6c));
      local_74 = (undefined1 *)&local_188;
      local_c._0_1_ = 0x1d;
      local_188 = CONCAT44(1,local_140);
      uVar5 = FUN_00988a50();
      local_c._0_1_ = 0x1e;
      local_188 = CONCAT44(uVar5,0x5d8b43);
      FUN_00988fa0();
      local_c._0_1_ = 0x1f;
      local_188 = CONCAT44(local_34,0x5d8b64);
      FUN_00988f20();
      local_c._0_1_ = 0x20;
      local_188 = CONCAT44(uVar4,0x5d8b7b);
      FUN_00988f20();
      local_188 = 0xffffffff00000000;
      local_c._0_1_ = 0x21;
      FUN_00448aa0();
      local_188 = CONCAT44(0x5d8b9a,(undefined4)local_188);
      FUN_00408ad0();
      local_188 = CONCAT44(0x5d8ba6,(undefined4)local_188);
      FUN_00408ad0();
      local_188 = CONCAT44(0x5d8bb2,(undefined4)local_188);
      FUN_00408ad0();
      local_188 = CONCAT44(0x5d8bbb,(undefined4)local_188);
      FUN_00408ad0();
      local_188 = CONCAT44(0x5d8bc7,(undefined4)local_188);
      FUN_00408ad0();
      local_c._0_1_ = 0x1b;
      local_188 = CONCAT44(local_170,0x5d8bd9);
      FUN_009a9740();
      local_188 = CONCAT44(0x5d8be5,(undefined4)local_188);
      FUN_00408ad0();
      local_c._0_1_ = 0;
      local_188 = CONCAT44(0x5d8bf8,(undefined4)local_188);
      FUN_00408ad0();
    }
    local_74 = (undefined1 *)*local_120;
    iVar3 = *(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + local_120[1] * 4) + 0xbcc) +
                    0x24);
    if (iVar3 != 0) {
      local_188 = CONCAT44(0x5d8c36,(undefined4)local_188);
      FUN_009885d0();
      local_c._0_1_ = 0x22;
      local_188 = CONCAT44(0x5d8c58,(undefined4)local_188);
      FUN_009885d0();
      local_c._0_1_ = 0x23;
      local_188 = CONCAT44(0x5d8c6e,(undefined4)local_188);
      FUN_009885d0();
      local_c._0_1_ = 0x24;
      local_188 = CONCAT44(0x5d8c84,(undefined4)local_188);
      FUN_009885d0();
      local_74 = (undefined1 *)&local_188;
      local_188._4_4_ = 1;
      local_c._0_1_ = 0x25;
      uVar6 = __allmul(iVar3,iVar3 >> 0x1f,100000,0);
      uVar4 = __alldiv(uVar6,1000,0);
      local_188 = CONCAT44(local_188._4_4_,uVar4);
      uVar4 = FUN_00988a50();
      local_188 = CONCAT44(local_13c,local_170);
      local_c._0_1_ = 0x26;
      local_140 = FUN_009a8ee0();
      local_c._0_1_ = 0x27;
      local_188 = CONCAT44(0x5d8cee,(undefined4)local_188);
      iVar3 = FUN_00475500();
      local_188 = *(undefined8 *)(iVar3 + 0x74);
      FUN_009a9880(*(undefined8 *)(iVar3 + 0x6c));
      local_c._0_1_ = 0x28;
      local_188 = CONCAT44(local_15c,0x5d8d2e);
      FUN_00988f20();
      local_c._0_1_ = 0x29;
      local_188 = CONCAT44(local_e4,0x5d8d4c);
      FUN_00988f20();
      local_c._0_1_ = 0x2a;
      local_188 = CONCAT44(uVar4,0x5d8d63);
      FUN_00988f20();
      local_c._0_1_ = 0x2b;
      local_188 = CONCAT44(local_34,0x5d8d81);
      FUN_00988f20();
      local_188 = 0xffffffff00000000;
      local_c._0_1_ = 0x2c;
      FUN_00448aa0();
      if (0xf < local_7c) {
        local_188 = CONCAT44(local_90,&UNK_005d8db4);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_7c = 0xf;
      local_80 = 0;
      local_90 = local_90 & 0xffffff00;
      if (0xf < local_98) {
        local_188 = CONCAT44(local_ac[0],&UNK_005d8de7);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_98 = 0xf;
      local_9c = 0;
      local_ac[0] = local_ac[0] & 0xffffff00;
      if (0xf < local_b4) {
        local_188 = CONCAT44(local_c8,&UNK_005d8e15);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_b4 = 0xf;
      local_b8 = 0;
      local_c8 = local_c8 & 0xffffff00;
      if (0xf < local_108) {
        local_188 = CONCAT44(local_11c,&UNK_005d8e3d);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_108 = 0xf;
      local_10c = 0;
      local_11c = local_11c & 0xffffff00;
      if (0xf < local_ec) {
        local_188 = CONCAT44(local_100,&UNK_005d8e62);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_ec = 0xf;
      local_f0 = 0;
      local_100 = local_100 & 0xffffff00;
      local_c._0_1_ = 0x26;
      local_188 = CONCAT44(local_170,0x5d8e8c);
      FUN_009a9740();
      if (0xf < local_58) {
        local_188 = CONCAT44(local_6c[0],&UNK_005d8ea2);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_58 = 0xf;
      uStack_5c = 0;
      local_6c[0] = local_6c[0] & 0xffffff00;
      if (0xf < local_128) {
        local_188 = CONCAT44(local_13c[0],&UNK_005d8eca);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_128 = 0xf;
      local_12c = 0;
      local_13c[0] = local_13c[0] & 0xffffff00;
      if (0xf < local_148) {
        local_188 = CONCAT44(local_15c[0],&UNK_005d8ee9);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_148 = 0xf;
      local_14c = 0;
      local_15c[0] = local_15c[0] & 0xffffff00;
      if (0xf < local_d0) {
        local_188 = CONCAT44(local_e4[0],&UNK_005d8f0e);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_c._0_1_ = 0;
      local_d0 = 0xf;
      local_d4 = 0;
      local_e4[0] = local_e4[0] & 0xffffff00;
      if (0xf < uStack_20) {
        local_188 = CONCAT44(local_34[0],&UNK_005d8f43);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
    local_188 = 0xffffffff00000000;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *param_1 = 0;
    FUN_00408ed0();
    local_188._4_4_ = local_50;
    uVar1 = local_3c;
  }
  else {
    local_188 = 0x1100e02e78;
    local_148 = 0xf;
    local_14c = 0;
    local_15c[0] = local_15c[0] & 0xffffff00;
    ExceptionList = &local_14;
    FUN_00409350();
    local_188 = CONCAT44(local_15c,local_170);
    local_c._0_1_ = 1;
    FUN_009a8ee0();
    local_c._0_1_ = 2;
    local_188 = CONCAT44(0x5d83b3,(undefined4)local_188);
    iVar3 = FUN_00475500();
    local_188 = *(undefined8 *)(iVar3 + 0x74);
    FUN_009a9880(*(undefined8 *)(iVar3 + 0x6c));
    local_c._0_1_ = 3;
    local_188 = CONCAT44(0x5d83e6,(undefined4)local_188);
    FUN_009adb70();
    if (local_16c != 0) {
      local_188 = CONCAT44(0x5d83f7,(undefined4)local_188);
      FUN_009e6a80();
      local_188 = CONCAT44(local_16c,&UNK_005d8401);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_16c = 0;
    local_168 = 0;
    local_164 = 0;
    local_188._4_4_ = local_15c[0];
    uVar1 = local_148;
  }
  if (uVar1 < 0x10) {
    ExceptionList = local_14;
    return param_1;
  }
LAB_005d8f79:
  local_188 = CONCAT44(local_188._4_4_,&UNK_005d8f7e);
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

