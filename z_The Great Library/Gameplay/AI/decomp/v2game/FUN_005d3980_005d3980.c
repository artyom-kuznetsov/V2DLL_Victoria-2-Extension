// FUN_005d3980 @ 005d3980  (requested 005D3980, first bytes: 55 8B EC 64 A1 00 00 00)


void FUN_005d3980(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 uVar2;
  char cVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  uint *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uStack_1b8;
  code *pcStack_1b4;
  undefined1 auStack_1b0 [108];
  undefined4 uStack_144;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined1 local_120 [56];
  uint local_e8;
  undefined4 local_d8;
  uint local_d4;
  uint local_cc [4];
  undefined4 local_bc;
  uint local_b8;
  undefined4 *local_b0;
  uint local_ac [2];
  undefined1 local_a4 [4];
  int local_a0;
  undefined4 local_9c;
  uint local_98;
  undefined1 local_90 [16];
  undefined4 local_80;
  undefined4 local_7c;
  uint local_74 [4];
  undefined4 local_64;
  uint local_60;
  undefined4 local_58;
  undefined1 *local_54;
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  undefined1 *local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9f488;
  local_10 = ExceptionList;
  uStack_138 = CONCAT44(0x5d39ac,(undefined4)uStack_138);
  ExceptionList = &local_10;
  FUN_005d7810();
  param_1[0x38] = param_1[0x37];
  uStack_138 = CONCAT44(param_3,0x5d39c3);
  FUN_005cb2c0();
  if (param_1[0x31] == *(int *)(DAT_012588e8 + 0xb60)) {
    uStack_138 = CONCAT44(0x5d39e8,(undefined4)uStack_138);
    cVar3 = (**(code **)(*param_1 + 0x38))();
    if (cVar3 == '\0') {
      uStack_138 = CONCAT44(0x5d39f5,(undefined4)uStack_138);
      cVar3 = (**(code **)(*param_1 + 0x3c))();
      if (cVar3 == '\0') goto LAB_005d43c5;
    }
    local_58 = *(undefined4 *)(DAT_012588e8 + 0xb5c);
    uStack_138 = CONCAT44(*(undefined4 *)
                           (*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4),
                          0x5d3a23);
    puVar4 = (undefined4 *)FUN_005061e0();
    uStack_138 = 0x1100dfdcc0;
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = local_50[0] & 0xffffff00;
    uStack_140 = CONCAT44(0x5d3a48,(undefined4)uStack_140);
    local_b0 = puVar4;
    FUN_00409350();
    local_8 = 0;
    uStack_138 = 0x900df2728;
    local_98 = 0xf;
    local_9c = 0;
    local_ac[0] = local_ac[0] & 0xffffff00;
    uStack_140 = CONCAT44(0x5d3a6f,(undefined4)uStack_140);
    FUN_00409350();
    local_8._0_1_ = 1;
    if (DAT_01262ef4 == 0) {
      uStack_138 = 0x44005d3a82;
      iVar5 = FUN_00aae9af();
      local_8._0_1_ = 2;
      if (iVar5 == 0) {
        uVar6 = 0;
      }
      else {
        uStack_138 = CONCAT44(0x5d3a97,(undefined4)uStack_138);
        uVar6 = FUN_006a4e30();
      }
      local_8._0_1_ = 1;
      uStack_138 = CONCAT44(uVar6,0x5d3aa5);
      FUN_006a59b0();
    }
    uStack_138 = CONCAT44(local_50,local_34);
    uStack_140 = CONCAT44(0x5d3ab2,(undefined4)uStack_140);
    uVar6 = FUN_00424ce0();
    uStack_138 = 0xffffffff00000000;
    local_8._0_1_ = 3;
    local_7c = 0xf;
    local_80 = 0;
    local_90[0] = 0;
    uStack_140 = CONCAT44(local_ac,0x5d3add);
    FUN_00408ed0();
    local_8._0_1_ = 4;
    uStack_138 = 0xffffffff00000000;
    local_60 = 0xf;
    local_64 = 0;
    local_74[0] = local_74[0] & 0xffffff00;
    uStack_140 = CONCAT44(uVar6,0x5d3afa);
    FUN_00408ed0();
    local_8._0_1_ = 5;
    iVar5 = puVar4[1];
    uStack_138 = 0x44005d3b0b;
    puVar7 = (undefined1 *)FUN_00aae9af();
    local_8._0_1_ = 6;
    uVar2 = (undefined1)local_8;
    local_8._0_1_ = 6;
    local_18 = puVar7;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = (undefined1 *)0x0;
      local_8._0_1_ = uVar2;
    }
    else {
      uStack_138 = 0xffffffff00000000;
      *(undefined4 *)(puVar7 + 0x14) = 0xf;
      *(undefined4 *)(puVar7 + 0x10) = 0;
      *puVar7 = 0;
      uStack_140 = CONCAT44(local_90,0x5d3b38);
      FUN_00408ed0();
      local_8._0_1_ = 7;
      uStack_138 = 0xffffffff00000000;
      *(undefined4 *)(puVar7 + 0x30) = 0xf;
      *(undefined4 *)(puVar7 + 0x2c) = 0;
      puVar7[0x1c] = 0;
      uStack_140 = CONCAT44(local_74,0x5d3b57);
      FUN_00408ed0();
      *(int *)(puVar7 + 0x38) = iVar5;
      *(undefined4 *)(puVar7 + 0x3c) = 0;
      puVar7[0x40] = 0;
    }
    iVar1 = puVar4[2];
    puVar4[1] = puVar7;
    puVar4[2] = iVar1 + 1;
    if (iVar1 == 0) {
      *puVar4 = puVar7;
    }
    else {
      *(undefined1 **)(iVar5 + 0x3c) = puVar7;
    }
    uStack_138 = CONCAT44(0x5d3b8c,(undefined4)uStack_138);
    FUN_00a39a80();
    if (0xf < local_20) {
      uStack_138 = CONCAT44(local_34[0],&UNK_005d3b9b);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    if (0xf < local_98) {
      uStack_138 = CONCAT44(local_ac[0],&UNK_005d3bc1);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = 0xffffffff;
    local_98 = 0xf;
    local_9c = 0;
    local_ac[0] = local_ac[0] & 0xffffff00;
    if (0xf < local_3c) {
      uStack_138 = CONCAT44(local_50[0],&UNK_005d3bec);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_138 = CONCAT44(0x5d3bf9,(undefined4)uStack_138);
    cVar3 = (**(code **)(*param_1 + 0x38))();
    if (cVar3 == '\0') {
      uStack_138 = CONCAT44(0x5d3eb4,(undefined4)uStack_138);
      cVar3 = (**(code **)(*param_1 + 0x3c))();
      if (cVar3 == '\0') {
        uStack_138 = CONCAT44(0x5d4046,(undefined4)uStack_138);
        FUN_009885d0();
        local_8 = 0x17;
        uStack_138 = CONCAT44(0x5d405a,(undefined4)uStack_138);
        FUN_009885d0();
        uStack_138 = CONCAT44(local_50,local_a4);
        local_8._0_1_ = 0x18;
        uStack_140 = CONCAT44(0x5d406e,(undefined4)uStack_140);
        FUN_009a8ee0();
        local_8._0_1_ = 0x19;
        uStack_138 = CONCAT44(0x5d407a,(undefined4)uStack_138);
        iVar5 = FUN_00475500();
        uStack_140 = *(undefined8 *)(iVar5 + 0x6c);
        uStack_138 = *(undefined8 *)(iVar5 + 0x74);
        uStack_144 = 0x5d409d;
        uVar6 = FUN_009a9880();
        uStack_138 = CONCAT44(uVar6,local_34);
        local_8._0_1_ = 0x1a;
        uStack_140 = CONCAT44(local_120,0x5d40b2);
        iVar5 = FUN_00424aa0();
        local_8._0_1_ = 0x1b;
        local_18 = (undefined1 *)puVar4[1];
        uStack_138 = 0x44005d40c6;
        puVar7 = (undefined1 *)FUN_00aae9af();
        local_8._0_1_ = 0x1c;
        uVar2 = (undefined1)local_8;
        local_8._0_1_ = 0x1c;
        local_54 = puVar7;
        if (puVar7 == (undefined1 *)0x0) {
          puVar7 = (undefined1 *)0x0;
          local_8._0_1_ = uVar2;
        }
        else {
          uStack_138 = 0xffffffff00000000;
          *(undefined4 *)(puVar7 + 0x14) = 0xf;
          *(undefined4 *)(puVar7 + 0x10) = 0;
          *puVar7 = 0;
          uStack_140 = CONCAT44(iVar5,0x5d40f0);
          FUN_00408ed0();
          local_8._0_1_ = 0x1d;
          uStack_138 = 0xffffffff00000000;
          *(undefined4 *)(puVar7 + 0x30) = 0xf;
          *(undefined4 *)(puVar7 + 0x2c) = 0;
          puVar7[0x1c] = 0;
          uStack_140 = CONCAT44(iVar5 + 0x1c,0x5d4112);
          FUN_00408ed0();
          *(undefined1 **)(puVar7 + 0x38) = local_18;
          *(undefined4 *)(puVar7 + 0x3c) = 0;
          puVar7[0x40] = 0;
        }
        iVar5 = puVar4[2];
        puVar4[1] = puVar7;
        puVar4[2] = iVar5 + 1;
        if (iVar5 == 0) {
          *puVar4 = puVar7;
        }
        else {
          *(undefined1 **)((int)local_18 + 0x3c) = puVar7;
        }
        uStack_138 = CONCAT44(0x5d4147,(undefined4)uStack_138);
        FUN_00a39a80();
        if (0xf < local_60) {
          uStack_138 = CONCAT44(local_74[0],&UNK_005d415a);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_8 = CONCAT31(local_8._1_3_,0x18);
      }
      else {
        uStack_138 = CONCAT44(0x5d3ec9,(undefined4)uStack_138);
        FUN_009885d0();
        local_8 = 0x10;
        uStack_138 = CONCAT44(0x5d3edd,(undefined4)uStack_138);
        FUN_009885d0();
        uStack_138 = CONCAT44(local_50,local_a4);
        local_8._0_1_ = 0x11;
        uStack_140 = CONCAT44(0x5d3ef1,(undefined4)uStack_140);
        FUN_009a8ee0();
        local_8._0_1_ = 0x12;
        uStack_138 = CONCAT44(0x5d3efd,(undefined4)uStack_138);
        iVar5 = FUN_00475500();
        uStack_140 = *(undefined8 *)(iVar5 + 0x6c);
        uStack_138 = *(undefined8 *)(iVar5 + 0x74);
        uStack_144 = 0x5d3f20;
        uVar6 = FUN_009a9880();
        uStack_138 = CONCAT44(uVar6,local_34);
        local_8._0_1_ = 0x13;
        uStack_140 = CONCAT44(local_120,0x5d3f35);
        iVar5 = FUN_00424aa0();
        local_8._0_1_ = 0x14;
        local_18 = (undefined1 *)puVar4[1];
        uStack_138 = 0x44005d3f49;
        puVar7 = (undefined1 *)FUN_00aae9af();
        local_8._0_1_ = 0x15;
        uVar2 = (undefined1)local_8;
        local_8._0_1_ = 0x15;
        local_54 = puVar7;
        if (puVar7 == (undefined1 *)0x0) {
          puVar7 = (undefined1 *)0x0;
          local_8._0_1_ = uVar2;
        }
        else {
          uStack_138 = 0xffffffff00000000;
          *(undefined4 *)(puVar7 + 0x14) = 0xf;
          *(undefined4 *)(puVar7 + 0x10) = 0;
          *puVar7 = 0;
          uStack_140 = CONCAT44(iVar5,0x5d3f73);
          FUN_00408ed0();
          local_8._0_1_ = 0x16;
          uStack_138 = 0xffffffff00000000;
          *(undefined4 *)(puVar7 + 0x30) = 0xf;
          *(undefined4 *)(puVar7 + 0x2c) = 0;
          puVar7[0x1c] = 0;
          uStack_140 = CONCAT44(iVar5 + 0x1c,0x5d3f95);
          FUN_00408ed0();
          *(undefined1 **)(puVar7 + 0x38) = local_18;
          *(undefined4 *)(puVar7 + 0x3c) = 0;
          puVar7[0x40] = 0;
        }
        iVar5 = puVar4[2];
        puVar4[1] = puVar7;
        puVar4[2] = iVar5 + 1;
        if (iVar5 == 0) {
          *puVar4 = puVar7;
        }
        else {
          *(undefined1 **)((int)local_18 + 0x3c) = puVar7;
        }
        uStack_138 = CONCAT44(0x5d3fca,(undefined4)uStack_138);
        FUN_00a39a80();
        if (0xf < local_60) {
          uStack_138 = CONCAT44(local_74[0],&UNK_005d3fdd);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_8 = CONCAT31(local_8._1_3_,0x11);
      }
      local_60 = 0xf;
      local_64 = 0;
      local_74[0] = local_74[0] & 0xffffff00;
      uStack_138 = CONCAT44(local_a4,0x5d3ffd);
      FUN_009a9740();
      if (0xf < local_20) {
        uStack_138 = CONCAT44(local_34[0],&UNK_005d400b);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8 = 0xffffffff;
      local_20 = 0xf;
      local_24 = 0;
      local_34[0] = local_34[0] & 0xffffff00;
      if (0xf < local_3c) {
        uStack_138 = CONCAT44(local_50[0],&UNK_005d4034);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
    else {
      uStack_138 = 0x400e02d9c;
      local_20 = 0xf;
      local_24 = 0;
      local_34[0] = local_34[0] & 0xffffff00;
      uStack_140 = CONCAT44(0x5d3c19,(undefined4)uStack_140);
      FUN_00409350();
      local_8 = 8;
      uStack_138 = 0x400df7e80;
      local_3c = 0xf;
      local_40 = 0;
      local_50[0] = local_50[0] & 0xffffff00;
      uStack_140 = CONCAT44(0x5d3c38,(undefined4)uStack_140);
      FUN_00409350();
      uStack_138 = CONCAT44(local_34,local_a4);
      local_8._0_1_ = 9;
      uStack_140 = CONCAT44(0x5d3c4c,(undefined4)uStack_140);
      FUN_009a8ee0();
      local_8._0_1_ = 10;
      uStack_138 = CONCAT44(0x5d3c58,(undefined4)uStack_138);
      iVar5 = FUN_00475500();
      uStack_140 = *(undefined8 *)(iVar5 + 0x6c);
      uStack_138 = *(undefined8 *)(iVar5 + 0x74);
      uStack_144 = 0x5d3c7b;
      uVar6 = FUN_009a9880();
      uStack_138 = CONCAT44(uVar6,local_50);
      local_8._0_1_ = 0xb;
      uStack_140 = CONCAT44(local_120,0x5d3c90);
      iVar5 = FUN_00424aa0();
      local_8._0_1_ = 0xc;
      local_18 = (undefined1 *)puVar4[1];
      uStack_138 = 0x44005d3ca4;
      puVar7 = (undefined1 *)FUN_00aae9af();
      local_8._0_1_ = 0xd;
      uVar2 = (undefined1)local_8;
      local_8._0_1_ = 0xd;
      local_54 = puVar7;
      if (puVar7 == (undefined1 *)0x0) {
        puVar7 = (undefined1 *)0x0;
        local_8._0_1_ = uVar2;
      }
      else {
        uStack_138 = 0xffffffff00000000;
        *(undefined4 *)(puVar7 + 0x14) = 0xf;
        *(undefined4 *)(puVar7 + 0x10) = 0;
        *puVar7 = 0;
        uStack_140 = CONCAT44(iVar5,0x5d3cce);
        FUN_00408ed0();
        local_8._0_1_ = 0xe;
        uStack_138 = 0xffffffff00000000;
        *(undefined4 *)(puVar7 + 0x30) = 0xf;
        *(undefined4 *)(puVar7 + 0x2c) = 0;
        puVar7[0x1c] = 0;
        uStack_140 = CONCAT44(iVar5 + 0x1c,0x5d3cf0);
        FUN_00408ed0();
        *(undefined1 **)(puVar7 + 0x38) = local_18;
        *(undefined4 *)(puVar7 + 0x3c) = 0;
        puVar7[0x40] = 0;
      }
      iVar5 = puVar4[2];
      puVar4[1] = puVar7;
      puVar4[2] = iVar5 + 1;
      if (iVar5 == 0) {
        *puVar4 = puVar7;
      }
      else {
        *(undefined1 **)((int)local_18 + 0x3c) = puVar7;
      }
      uStack_138 = CONCAT44(0x5d3d25,(undefined4)uStack_138);
      FUN_00a39a80();
      if (0xf < local_60) {
        uStack_138 = CONCAT44(local_74[0],&UNK_005d3d34);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_60 = 0xf;
      local_64 = 0;
      local_74[0] = local_74[0] & 0xffffff00;
      local_8 = CONCAT31(local_8._1_3_,0xf);
      uStack_138 = CONCAT44(0x5d3d53,(undefined4)uStack_138);
      FUN_009adb70();
      if (local_a0 != 0) {
        uStack_138 = CONCAT44(0x5d3d68,(undefined4)uStack_138);
        FUN_009e6a80();
        uStack_138 = CONCAT44(local_a0,&UNK_005d3d74);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_a0 = 0;
      local_9c = 0;
      local_98 = 0;
      if (0xf < local_3c) {
        uStack_138 = CONCAT44(local_50[0],&UNK_005d3d9c);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8 = 0xffffffff;
      local_3c = 0xf;
      local_40 = 0;
      local_50[0] = local_50[0] & 0xffffff00;
      puVar4 = local_b0;
      if (0xf < local_20) {
        uStack_138 = CONCAT44(local_34[0],&UNK_005d3dc1);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
    local_8 = 0xffffffff;
    uStack_138 = 0x400dfbf14;
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    uStack_140 = CONCAT44(0x5d3de6,(undefined4)uStack_140);
    FUN_00409350();
    local_8 = 0x1e;
    uStack_138 = CONCAT44(0x5d3df7,(undefined4)uStack_138);
    uVar6 = (**(code **)(*param_1 + 0x20))();
    uStack_138 = 0xffffffff00000000;
    local_7c = 0xf;
    local_80 = 0;
    local_90[0] = 0;
    uStack_140 = CONCAT44(local_34,0x5d3e1b);
    FUN_00408ed0();
    local_8._0_1_ = 0x1f;
    uStack_138 = 0xffffffff00000000;
    local_60 = 0xf;
    local_64 = 0;
    local_74[0] = local_74[0] & 0xffffff00;
    uStack_140 = CONCAT44(uVar6,0x5d3e38);
    FUN_00408ed0();
    local_8._0_1_ = 0x20;
    iVar5 = puVar4[1];
    uStack_138 = 0x44005d3e49;
    puVar7 = (undefined1 *)FUN_00aae9af();
    local_8._0_1_ = 0x21;
    uVar2 = (undefined1)local_8;
    local_8._0_1_ = 0x21;
    local_54 = puVar7;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = (undefined1 *)0x0;
      local_8._0_1_ = uVar2;
    }
    else {
      uStack_138 = 0xffffffff00000000;
      *(undefined4 *)(puVar7 + 0x14) = 0xf;
      *(undefined4 *)(puVar7 + 0x10) = 0;
      *puVar7 = 0;
      uStack_140 = CONCAT44(local_90,0x5d3e7a);
      FUN_00408ed0();
      local_8._0_1_ = 0x22;
      uStack_138 = 0xffffffff00000000;
      *(undefined4 *)(puVar7 + 0x30) = 0xf;
      *(undefined4 *)(puVar7 + 0x2c) = 0;
      puVar7[0x1c] = 0;
      uStack_140 = CONCAT44(local_74,0x5d3e99);
      FUN_00408ed0();
      *(int *)(puVar7 + 0x38) = iVar5;
      *(undefined4 *)(puVar7 + 0x3c) = 0;
      puVar7[0x40] = 0;
    }
    iVar1 = puVar4[2];
    puVar4[1] = puVar7;
    puVar4[2] = iVar1 + 1;
    if (iVar1 == 0) {
      *puVar4 = puVar7;
    }
    else {
      *(undefined1 **)(iVar5 + 0x3c) = puVar7;
    }
    uStack_138 = CONCAT44(0x5d418d,(undefined4)uStack_138);
    FUN_00a39a80();
    local_8 = 0xffffffff;
    if (0xf < local_20) {
      uStack_138 = CONCAT44(local_34[0],&UNK_005d41a3);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_138 = 0x400df85c0;
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    uStack_140 = CONCAT44(0x5d41c2,(undefined4)uStack_140);
    FUN_00409350();
    local_8 = 0x23;
    uStack_138 = CONCAT44(local_74,0x5d41dd);
    uVar6 = (**(code **)(*(int *)param_1[0x37] + 0x1c))();
    uStack_138 = CONCAT44(uVar6,local_34);
    local_8._0_1_ = 0x24;
    uStack_140 = CONCAT44(local_120,0x5d41f2);
    FUN_00424aa0();
    local_8._0_1_ = 0x25;
    iVar5 = puVar4[1];
    uStack_138 = 0x44005d4205;
    local_54 = (undefined1 *)FUN_00aae9af();
    local_8 = CONCAT31(local_8._1_3_,0x26);
    if (local_54 == (undefined1 *)0x0) {
      uVar6 = 0;
    }
    else {
      uStack_138 = CONCAT44(iVar5,local_54);
      uStack_140 = CONCAT44(0x5d421f,(undefined4)uStack_140);
      uVar6 = FUN_0042b900();
    }
    iVar1 = puVar4[2];
    puVar4[1] = uVar6;
    puVar4[2] = iVar1 + 1;
    if (iVar1 == 0) {
      *puVar4 = uVar6;
    }
    else {
      *(undefined4 *)(iVar5 + 0x3c) = uVar6;
    }
    uStack_138 = CONCAT44(0x5d4248,(undefined4)uStack_138);
    FUN_00a39a80();
    if (0xf < local_60) {
      uStack_138 = CONCAT44(local_74[0],&UNK_005d4257);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = 0xffffffff;
    local_60 = 0xf;
    local_64 = 0;
    local_74[0] = local_74[0] & 0xffffff00;
    if (0xf < local_20) {
      uStack_138 = CONCAT44(local_34[0],&UNK_005d427e);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_138 = 0xded94d;
    local_b8 = 0xf;
    local_bc = 0;
    local_cc[0] = local_cc[0] & 0xffffff00;
    uStack_140 = CONCAT44(0x5d42a4,(undefined4)uStack_140);
    FUN_00409350();
    local_8 = 0x27;
    uStack_138 = 0xb00e02dbc;
    local_d4 = 0xf;
    local_d8 = 0;
    local_e8 = local_e8 & 0xffffff00;
    uStack_140 = CONCAT44(0x5d42cf,(undefined4)uStack_140);
    FUN_00409350();
    local_8._0_1_ = 0x28;
    uStack_1b8 = *(undefined4 *)(param_2 + 0x10);
    local_54 = (undefined1 *)&uStack_1b8;
    pcStack_1b4 = *(code **)(param_2 + 0x14);
    iVar5 = param_1[0x37];
    uVar6 = *(undefined4 *)(DAT_012588e8 + 0xb60);
    uVar13 = *(undefined4 *)(DAT_012588e8 + 0xb5c);
    uVar12 = *(undefined4 *)(DAT_012588e8 + 0xb60);
    uVar11 = *(undefined4 *)(DAT_012588e8 + 0xb5c);
    uVar10 = 0;
    puVar9 = local_cc;
    FUN_006a4f40(puVar4,iVar5,puVar9,0,uVar11,uVar12,uVar13,uVar6);
    uVar8 = FUN_006a55b0();
    FUN_006a7ed0(auStack_1b0,uVar8,puVar4,iVar5,puVar9,uVar10,uVar11,uVar12,uVar13,uVar6);
    pcStack_1b4 = FUN_006a57a0;
    local_8._0_1_ = 0x29;
    uStack_1b8 = 0x5d434f;
    uStack_1b8 = FUN_006a4f40();
    uVar6 = FUN_006a4f40();
    local_8 = CONCAT31(local_8._1_3_,0x28);
    FUN_004e9540(uVar6);
    if (0xf < local_d4) {
      uStack_138 = CONCAT44(local_e8,&UNK_005d4378);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = 0xffffffff;
    local_d4 = 0xf;
    local_d8 = 0;
    local_e8 = local_e8 & 0xffffff00;
    if (0xf < local_b8) {
      uStack_138 = CONCAT44(local_cc[0],&UNK_005d43ad);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_b8 = 0xf;
    local_bc = 0;
    local_cc[0] = local_cc[0] & 0xffffff00;
  }
LAB_005d43c5:
  uStack_138 = CONCAT44(0x5d43d0,(undefined4)uStack_138);
  FUN_009a63f0();
  if ((char)param_1[1] != '\0') {
    uStack_138 = 0;
    uStack_140 = CONCAT44(0x5d43ed,(undefined4)uStack_140);
    (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0xa0))();
    if (*(char *)(param_2 + 4) == '\0') {
      uStack_140 = CONCAT44(param_2,0x5d440c);
      (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x88))();
    }
  }
  ExceptionList = local_10;
  return;
}

