// FUN_00907e00 @ 00907e00 body=[[00907e00, 00907fce] [00907fd2, 00907ff8] [00908001, 00908126] [0090812a, 00908311] [00908315, 00908417] [0090841b, 00908441] [00908445, 009085d5] [009085d9, 009085fb] [009085ff, 00908700] [00908704, 00908726] [0090872a, 0090883b] [0090883f, 00908861] [00908865, 00908982] [00908986, 009089a8] [009089ac, 00908d98]]


void FUN_00907e00(void)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int in_ECX;
  undefined1 **ppuVar6;
  undefined4 uVar7;
  uint *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int local_160 [2];
  undefined1 auStack_158 [8];
  undefined4 uStack_150;
  uint *puStack_14c;
  undefined1 auStack_148 [28];
  undefined4 uStack_12c;
  undefined1 auStack_128 [64];
  undefined4 uStack_e8;
  uint *puStack_e4;
  uint *puStack_e0;
  undefined1 **ppuStack_dc;
  int local_c8;
  int local_b4;
  uint local_b0 [4];
  undefined4 local_a0;
  uint local_9c;
  uint local_94 [4];
  undefined4 local_84;
  uint local_80;
  undefined1 *local_78;
  int local_70;
  undefined1 *local_6c;
  undefined1 *local_68;
  undefined4 local_64;
  undefined1 local_60;
  undefined4 local_5c;
  int local_58;
  int local_54;
  undefined1 local_50 [16];
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 local_34 [16];
  undefined4 local_24;
  undefined4 local_20;
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b9cfb5;
  local_14 = ExceptionList;
  iVar4 = DAT_01258a94;
  if (*(uint *)(in_ECX + 0x40) < 0x1269) {
    iVar4 = DAT_01258a98;
  }
  local_70 = in_ECX;
  if (iVar4 == 0) {
    local_b4 = 0;
    ExceptionList = &local_14;
  }
  else {
    ppuStack_dc = (undefined1 **)0x907e5a;
    ExceptionList = &local_14;
    local_b4 = FUN_009c1d40();
  }
  local_54 = in_ECX + 0x68;
  *(int *)(in_ECX + 0x3c) = local_b4;
  *(int *)(in_ECX + 0x8c) = local_54;
  local_6c = (undefined1 *)0x0;
  local_68 = (undefined1 *)0x0;
  local_64 = 0;
  local_60 = 0;
  local_c = 0;
  if (*(int *)(in_ECX + 0x74) != 0) {
    ppuStack_dc = (undefined1 **)0x7;
    puStack_e0 = (uint *)0xdf27b4;
    local_9c = 0xf;
    local_a0 = 0;
    local_b0[0] = local_b0[0] & 0xffffff00;
    puStack_e4 = (uint *)0x907ebc;
    FUN_00409350();
    local_c._0_1_ = 1;
    ppuStack_dc = (undefined1 **)0x907ed0;
    puVar2 = (undefined1 *)FUN_0055dd40();
    ppuStack_dc = (undefined1 **)0xffffffff;
    local_c._0_1_ = 2;
    puStack_e0 = (uint *)0x0;
    puStack_e4 = local_b0;
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = 0;
    uStack_e8 = 0x907f03;
    FUN_00408ed0();
    ppuStack_dc = (undefined1 **)0xffffffff;
    local_c._0_1_ = 3;
    puStack_e0 = (uint *)0x0;
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = 0;
    uStack_e8 = 0x907f30;
    puStack_e4 = (uint *)puVar2;
    FUN_00408ed0();
    ppuStack_dc = (undefined1 **)0x44;
    local_c._0_1_ = 4;
    puStack_e0 = (uint *)0x907f3f;
    puVar2 = (undefined1 *)FUN_00aae9af();
    local_c._0_1_ = 5;
    uVar1 = (undefined1)local_c;
    local_c._0_1_ = 5;
    if (puVar2 == (undefined1 *)0x0) {
      puVar2 = (undefined1 *)0x0;
      local_c._0_1_ = uVar1;
    }
    else {
      ppuStack_dc = (undefined1 **)0xffffffff;
      puStack_e0 = (uint *)0x0;
      puStack_e4 = (uint *)local_50;
      *(undefined4 *)(puVar2 + 0x14) = 0xf;
      *(undefined4 *)(puVar2 + 0x10) = 0;
      *puVar2 = 0;
      uStack_e8 = 0x907f6e;
      FUN_00408ed0();
      ppuStack_dc = (undefined1 **)0xffffffff;
      local_c._0_1_ = 6;
      puStack_e0 = (uint *)0x0;
      puStack_e4 = (uint *)local_34;
      *(undefined4 *)(puVar2 + 0x30) = 0xf;
      *(undefined4 *)(puVar2 + 0x2c) = 0;
      puVar2[0x1c] = 0;
      uStack_e8 = 0x907f91;
      FUN_00408ed0();
      *(undefined4 *)(puVar2 + 0x38) = 0;
      *(undefined4 *)(puVar2 + 0x3c) = 0;
      puVar2[0x40] = 0;
    }
    local_64 = 1;
    ppuStack_dc = (undefined1 **)0x907fba;
    local_6c = puVar2;
    local_68 = puVar2;
    FUN_00a39a80();
    if (0xf < local_80) {
      ppuStack_dc = (undefined1 **)local_94[0];
                    /* WARNING: Subroutine does not return */
      puStack_e0 = (uint *)&UNK_00907fcf;
      FUN_00aae91b();
    }
    local_c._0_1_ = 0;
    local_80 = 0xf;
    local_84 = 0;
    local_94[0] = local_94[0] & 0xffffff00;
    if (0xf < local_9c) {
      ppuStack_dc = (undefined1 **)local_b0[0];
                    /* WARNING: Subroutine does not return */
      puStack_e0 = (uint *)&UNK_00907ff9;
      FUN_00aae91b();
    }
    goto LAB_0090844a;
  }
  iVar4 = *(int *)(in_ECX + 0x78);
  if (iVar4 == 0) {
LAB_0090820c:
    if (*(int *)(in_ECX + 0x80) == 0) {
      ppuStack_dc = (undefined1 **)0x908345;
      FUN_009885d0();
      local_c._0_1_ = 0x16;
      ppuStack_dc = (undefined1 **)0x908356;
      FUN_008a8dc0();
      ppuStack_dc = (undefined1 **)0x90835f;
      ppuStack_dc = (undefined1 **)FUN_0055dd40();
      puStack_e0 = local_b0;
      puStack_e4 = (uint *)local_50;
      local_c._0_1_ = 0x17;
      uStack_e8 = 0x90837a;
      iVar4 = FUN_00424aa0();
      ppuStack_dc = (undefined1 **)0x44;
      local_c._0_1_ = 0x18;
      puStack_e0 = (uint *)0x90838b;
      puVar2 = (undefined1 *)FUN_00aae9af();
      local_c._0_1_ = 0x19;
      uVar1 = (undefined1)local_c;
      if (puVar2 != (undefined1 *)0x0) {
        ppuStack_dc = (undefined1 **)0xffffffff;
        puStack_e0 = (uint *)0x0;
        *(undefined4 *)(puVar2 + 0x14) = 0xf;
        *(undefined4 *)(puVar2 + 0x10) = 0;
        *puVar2 = 0;
        uStack_e8 = 0x9083b7;
        puStack_e4 = (uint *)iVar4;
        FUN_00408ed0();
        local_c._0_1_ = 0x1a;
        goto LAB_009083bf;
      }
LAB_009083e5:
      local_c._0_1_ = uVar1;
      puVar2 = (undefined1 *)0x0;
      goto LAB_009083e7;
    }
    ppuStack_dc = (undefined1 **)0x908226;
    FUN_009885d0();
    local_c._0_1_ = 0x11;
    ppuStack_dc = (undefined1 **)0x908259;
    ppuStack_dc = (undefined1 **)FUN_0055dd40();
    puStack_e0 = local_b0;
    puStack_e4 = (uint *)local_50;
    local_c._0_1_ = 0x12;
    uStack_e8 = 0x908274;
    iVar4 = FUN_00424aa0();
    ppuStack_dc = (undefined1 **)0x44;
    local_c._0_1_ = 0x13;
    puStack_e0 = (uint *)0x908285;
    puVar2 = (undefined1 *)FUN_00aae9af();
    local_c._0_1_ = 0x14;
    uVar1 = (undefined1)local_c;
    local_c._0_1_ = 0x14;
    if (puVar2 == (undefined1 *)0x0) {
      puVar2 = (undefined1 *)0x0;
      local_c._0_1_ = uVar1;
    }
    else {
      ppuStack_dc = (undefined1 **)0xffffffff;
      puStack_e0 = (uint *)0x0;
      *(undefined4 *)(puVar2 + 0x14) = 0xf;
      *(undefined4 *)(puVar2 + 0x10) = 0;
      *puVar2 = 0;
      uStack_e8 = 0x9082b1;
      puStack_e4 = (uint *)iVar4;
      FUN_00408ed0();
      ppuStack_dc = (undefined1 **)0xffffffff;
      local_c._0_1_ = 0x15;
      puStack_e0 = (uint *)0x0;
      puStack_e4 = (uint *)(iVar4 + 0x1c);
      *(undefined4 *)(puVar2 + 0x30) = 0xf;
      *(undefined4 *)(puVar2 + 0x2c) = 0;
      puVar2[0x1c] = 0;
      uStack_e8 = 0x9082d4;
      FUN_00408ed0();
      *(undefined4 *)(puVar2 + 0x38) = 0;
      *(undefined4 *)(puVar2 + 0x3c) = 0;
      puVar2[0x40] = 0;
    }
    local_64 = 1;
    ppuStack_dc = (undefined1 **)0x9082fd;
    local_6c = puVar2;
    local_68 = puVar2;
    FUN_00a39a80();
    if (0xf < local_80) {
      ppuStack_dc = (undefined1 **)local_94[0];
                    /* WARNING: Subroutine does not return */
      puStack_e0 = (uint *)&UNK_00908312;
      FUN_00aae91b();
    }
  }
  else {
    if (*(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + iVar4 * 4) + 300) != 0) {
      ppuStack_dc = (undefined1 **)0x7;
      puStack_e0 = (uint *)0xdf27b4;
      local_9c = 0xf;
      local_a0 = 0;
      local_b0[0] = (uint)local_b0[0]._1_3_ << 8;
      puStack_e4 = (uint *)0x908047;
      FUN_00409350();
      local_c._0_1_ = 7;
      ppuStack_dc = (undefined1 **)0x90806e;
      ppuStack_dc = (undefined1 **)FUN_0055dd40();
      puStack_e0 = local_b0;
      puStack_e4 = (uint *)local_50;
      local_c._0_1_ = 8;
      uStack_e8 = 0x908089;
      iVar4 = FUN_00424aa0();
      ppuStack_dc = (undefined1 **)0x44;
      local_c._0_1_ = 9;
      puStack_e0 = (uint *)0x90809a;
      puVar2 = (undefined1 *)FUN_00aae9af();
      local_c._0_1_ = 10;
      uVar1 = (undefined1)local_c;
      local_c._0_1_ = 10;
      if (puVar2 == (undefined1 *)0x0) {
        puVar2 = (undefined1 *)0x0;
        local_c._0_1_ = uVar1;
      }
      else {
        ppuStack_dc = (undefined1 **)0xffffffff;
        puStack_e0 = (uint *)0x0;
        *(undefined4 *)(puVar2 + 0x14) = 0xf;
        *(undefined4 *)(puVar2 + 0x10) = 0;
        *puVar2 = 0;
        uStack_e8 = 0x9080c6;
        puStack_e4 = (uint *)iVar4;
        FUN_00408ed0();
        ppuStack_dc = (undefined1 **)0xffffffff;
        local_c._0_1_ = 0xb;
        puStack_e0 = (uint *)0x0;
        puStack_e4 = (uint *)(iVar4 + 0x1c);
        *(undefined4 *)(puVar2 + 0x30) = 0xf;
        *(undefined4 *)(puVar2 + 0x2c) = 0;
        puVar2[0x1c] = 0;
        uStack_e8 = 0x9080e9;
        FUN_00408ed0();
        *(undefined4 *)(puVar2 + 0x38) = 0;
        *(undefined4 *)(puVar2 + 0x3c) = 0;
        puVar2[0x40] = 0;
      }
      local_64 = 1;
      ppuStack_dc = (undefined1 **)0x908112;
      local_6c = puVar2;
      local_68 = puVar2;
      FUN_00a39a80();
      if (0xf < local_80) {
        ppuStack_dc = (undefined1 **)local_94[0];
                    /* WARNING: Subroutine does not return */
        puStack_e0 = (uint *)&UNK_00908127;
        FUN_00aae91b();
      }
      local_94[0] = local_94[0] & 0xffffff00;
      if (local_9c < 0x10) goto LAB_0090844a;
      goto LAB_0090843d;
    }
    if (iVar4 == 0) goto LAB_0090820c;
    ppuStack_dc = (undefined1 **)0x7;
    puStack_e0 = (uint *)0xdf27b4;
    local_9c = 0xf;
    local_a0 = 0;
    local_b0[0] = (uint)local_b0[0]._1_3_ << 8;
    puStack_e4 = (uint *)0x90817d;
    FUN_00409350();
    local_c._0_1_ = 0xc;
    ppuStack_dc = (undefined1 **)local_94;
    puStack_e0 = (uint *)0x9081a3;
    ppuStack_dc = (undefined1 **)
                  (**(code **)(**(int **)(*(int *)(DAT_012588e8 + 0xacc) +
                                         *(int *)(in_ECX + 0x78) * 4) + 0x1c))();
    puStack_e0 = local_b0;
    puStack_e4 = (uint *)local_50;
    local_c._0_1_ = 0xd;
    uStack_e8 = 0x9081be;
    iVar4 = FUN_00424aa0();
    ppuStack_dc = (undefined1 **)0x44;
    local_c._0_1_ = 0xe;
    puStack_e0 = (uint *)0x9081cf;
    puVar2 = (undefined1 *)FUN_00aae9af();
    local_c._0_1_ = 0xf;
    uVar1 = (undefined1)local_c;
    local_c._0_1_ = 0xf;
    if (puVar2 == (undefined1 *)0x0) goto LAB_009083e5;
    ppuStack_dc = (undefined1 **)0xffffffff;
    puStack_e0 = (uint *)0x0;
    *(undefined4 *)(puVar2 + 0x14) = 0xf;
    *(undefined4 *)(puVar2 + 0x10) = 0;
    *puVar2 = 0;
    uStack_e8 = 0x9081ff;
    puStack_e4 = (uint *)iVar4;
    FUN_00408ed0();
    local_c._0_1_ = 0x10;
LAB_009083bf:
    ppuStack_dc = (undefined1 **)0xffffffff;
    *(undefined4 *)(puVar2 + 0x30) = 0xf;
    puStack_e0 = (uint *)0x0;
    puStack_e4 = (uint *)(iVar4 + 0x1c);
    *(undefined4 *)(puVar2 + 0x2c) = 0;
    puVar2[0x1c] = 0;
    uStack_e8 = 0x9083da;
    FUN_00408ed0();
    *(undefined4 *)(puVar2 + 0x38) = 0;
    *(undefined4 *)(puVar2 + 0x3c) = 0;
    puVar2[0x40] = 0;
LAB_009083e7:
    local_64 = 1;
    ppuStack_dc = (undefined1 **)0x908403;
    local_6c = puVar2;
    local_68 = puVar2;
    FUN_00a39a80();
    if (0xf < local_80) {
      ppuStack_dc = (undefined1 **)local_94[0];
                    /* WARNING: Subroutine does not return */
      puStack_e0 = (uint *)&UNK_00908418;
      FUN_00aae91b();
    }
  }
  local_94[0] = local_94[0] & 0xffffff00;
  if (0xf < local_9c) {
LAB_0090843d:
    local_c._0_1_ = 0;
    local_80 = 0xf;
    local_84 = 0;
                    /* WARNING: Subroutine does not return */
    puStack_e0 = (uint *)&UNK_00908442;
    ppuStack_dc = (undefined1 **)local_b0[0];
    FUN_00aae91b();
  }
LAB_0090844a:
  local_c._0_1_ = 0;
  local_80 = 0xf;
  local_84 = 0;
  ppuStack_dc = (undefined1 **)0x5;
  puStack_e0 = (uint *)0xdfaa78;
  local_9c = 0xf;
  local_a0 = 0;
  local_b0[0] = local_b0[0] & 0xffffff00;
  puStack_e4 = (uint *)0x908466;
  FUN_00409350();
  ppuStack_dc = (undefined1 **)0x0;
  puStack_e0 = (uint *)0x2d2d2d;
  uStack_12c = 0x908489;
  FUN_008a88d0();
  uStack_12c = 0;
  local_c._0_1_ = 0x1c;
  puStack_14c = (uint *)local_b4;
  uStack_150 = 0x9084a8;
  FUN_008a6010();
  puStack_14c = local_94;
  local_c._0_1_ = 0x1b;
  uStack_150 = 0x9084bd;
  puVar2 = (undefined1 *)FUN_008adbe0();
  ppuStack_dc = (undefined1 **)0xffffffff;
  local_c._0_1_ = 0x1d;
  puStack_e0 = (uint *)0x0;
  puStack_e4 = local_b0;
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = 0;
  uStack_e8 = 0x9084f3;
  FUN_00408ed0();
  ppuStack_dc = (undefined1 **)0xffffffff;
  local_c._0_1_ = 0x1e;
  puStack_e0 = (uint *)0x0;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = 0;
  uStack_e8 = 0x908520;
  puStack_e4 = (uint *)puVar2;
  FUN_00408ed0();
  puVar2 = local_68;
  local_c._0_1_ = 0x1f;
  ppuStack_dc = (undefined1 **)0x44;
  puStack_e0 = (uint *)0x908537;
  puVar3 = (undefined1 *)FUN_00aae9af();
  local_c._0_1_ = 0x20;
  uVar1 = (undefined1)local_c;
  local_c._0_1_ = 0x20;
  if (puVar3 == (undefined1 *)0x0) {
    local_78 = (undefined1 *)0x0;
    local_c._0_1_ = uVar1;
  }
  else {
    ppuStack_dc = (undefined1 **)0xffffffff;
    puStack_e0 = (uint *)0x0;
    puStack_e4 = (uint *)local_50;
    *(undefined4 *)(puVar3 + 0x14) = 0xf;
    *(undefined4 *)(puVar3 + 0x10) = 0;
    *puVar3 = 0;
    uStack_e8 = 0x908566;
    local_78 = puVar3;
    FUN_00408ed0();
    ppuStack_dc = (undefined1 **)0xffffffff;
    local_c._0_1_ = 0x21;
    puStack_e0 = (uint *)0x0;
    puStack_e4 = (uint *)local_34;
    *(undefined4 *)(puVar3 + 0x30) = 0xf;
    *(undefined4 *)(puVar3 + 0x2c) = 0;
    puVar3[0x1c] = 0;
    uStack_e8 = 0x908589;
    FUN_00408ed0();
    *(undefined1 **)(puVar3 + 0x38) = local_68;
    *(undefined4 *)(puVar3 + 0x3c) = 0;
    puVar3[0x40] = 0;
    local_78 = puVar3;
  }
  *(undefined1 **)(puVar2 + 0x3c) = local_78;
  local_64 = 2;
  ppuStack_dc = (undefined1 **)0x9085c1;
  local_68 = local_78;
  FUN_00a39a80();
  if (0xf < local_80) {
    ppuStack_dc = (undefined1 **)local_94[0];
                    /* WARNING: Subroutine does not return */
    puStack_e0 = (uint *)&UNK_009085d6;
    FUN_00aae91b();
  }
  local_c._0_1_ = 0;
  local_80 = 0xf;
  local_84 = 0;
  local_94[0] = local_94[0] & 0xffffff00;
  if (0xf < local_9c) {
    ppuStack_dc = (undefined1 **)local_b0[0];
                    /* WARNING: Subroutine does not return */
    puStack_e0 = (uint *)&UNK_009085fc;
    FUN_00aae91b();
  }
  ppuStack_dc = (undefined1 **)0x9;
  puStack_e0 = (uint *)0xe33330;
  local_9c = 0xf;
  local_a0 = 0;
  local_b0[0] = local_b0[0] & 0xffffff00;
  puStack_e4 = (uint *)0x90861b;
  FUN_00409350();
  ppuStack_dc = (undefined1 **)0x0;
  puStack_e0 = (uint *)0x2d2d2d;
  uStack_12c = 0x90863e;
  FUN_008a88d0();
  uStack_12c = 0;
  local_c._0_1_ = 0x23;
  puStack_14c = (uint *)local_b4;
  uStack_150 = 0x90865d;
  FUN_008a60f0();
  puStack_14c = local_94;
  local_c._0_1_ = 0x22;
  uStack_150 = 0x908672;
  ppuStack_dc = (undefined1 **)FUN_008adbe0();
  puStack_e0 = local_b0;
  puStack_e4 = (uint *)local_50;
  local_c._0_1_ = 0x24;
  uStack_e8 = 0x908690;
  FUN_00424aa0();
  ppuStack_dc = (undefined1 **)0x44;
  local_c._0_1_ = 0x25;
  puStack_e0 = (uint *)0x9086a1;
  iVar4 = FUN_00aae9af();
  local_c._0_1_ = 0x26;
  if (iVar4 == 0) {
    local_c8 = 0;
  }
  else {
    ppuStack_dc = (undefined1 **)local_78;
    puStack_e4 = (uint *)0x9086c1;
    puStack_e0 = (uint *)iVar4;
    local_c8 = FUN_0042b900();
  }
  local_64 = 3;
  *(int *)(local_78 + 0x3c) = local_c8;
  ppuStack_dc = (undefined1 **)0x9086ec;
  local_68 = (undefined1 *)local_c8;
  FUN_00a39a80();
  if (local_80 < 0x10) {
    local_c._0_1_ = 0;
    local_80 = 0xf;
    local_84 = 0;
    local_94[0] = local_94[0] & 0xffffff00;
    if (0xf < local_9c) {
      ppuStack_dc = (undefined1 **)local_b0[0];
                    /* WARNING: Subroutine does not return */
      puStack_e0 = (uint *)&UNK_00908727;
      FUN_00aae91b();
    }
    ppuStack_dc = (undefined1 **)0x6;
    puStack_e0 = (uint *)0xe3333c;
    local_9c = 0xf;
    local_a0 = 0;
    local_b0[0] = local_b0[0] & 0xffffff00;
    puStack_e4 = (uint *)0x908746;
    FUN_00409350();
    ppuStack_dc = (undefined1 **)0x0;
    puStack_e0 = (uint *)0x2d2d2d;
    local_78 = auStack_128;
    uStack_12c = 0x90876c;
    FUN_008a88d0();
    local_c._0_1_ = 0x28;
    uStack_12c = 0;
    local_78 = auStack_148;
    puStack_14c = *(uint **)(*(int *)(local_b4 + 0xb0) + *(int *)(local_70 + 100) * 4);
    uStack_150 = 0x9087a0;
    FUN_008a8510();
    puStack_14c = local_94;
    local_c._0_1_ = 0x27;
    uStack_150 = 0x9087b5;
    ppuStack_dc = (undefined1 **)FUN_008adbe0();
    puStack_e0 = local_b0;
    puStack_e4 = (uint *)local_50;
    local_c._0_1_ = 0x29;
    uStack_e8 = 0x9087d3;
    FUN_00424aa0();
    ppuStack_dc = (undefined1 **)0x44;
    local_c._0_1_ = 0x2a;
    puStack_e0 = (uint *)0x9087e4;
    local_78 = (undefined1 *)FUN_00aae9af();
    local_c._0_1_ = 0x2b;
    if (local_78 == (undefined1 *)0x0) {
      local_68 = (undefined1 *)0x0;
    }
    else {
      ppuStack_dc = (undefined1 **)local_c8;
      puStack_e4 = (uint *)0x908804;
      puStack_e0 = (uint *)local_78;
      local_68 = (undefined1 *)FUN_0042b900();
    }
    local_64 = 4;
    *(undefined1 **)(local_c8 + 0x3c) = local_68;
    ppuStack_dc = (undefined1 **)0x908827;
    FUN_00a39a80();
    if (0xf < local_80) {
      ppuStack_dc = (undefined1 **)local_94[0];
                    /* WARNING: Subroutine does not return */
      puStack_e0 = (uint *)&UNK_0090883c;
      FUN_00aae91b();
    }
    local_c._0_1_ = 0;
    local_80 = 0xf;
    local_84 = 0;
    local_94[0] = local_94[0] & 0xffffff00;
    if (0xf < local_9c) {
      ppuStack_dc = (undefined1 **)local_b0[0];
                    /* WARNING: Subroutine does not return */
      puStack_e0 = (uint *)&UNK_00908862;
      FUN_00aae91b();
    }
    ppuStack_dc = (undefined1 **)0x908875;
    FUN_008a8dc0();
    if (local_58 == *(int *)(DAT_012588e8 + 0xb60)) {
      ppuStack_dc = (undefined1 **)0x0;
      puStack_e0 = (uint *)&DAT_00ded94d;
      local_80 = 0xf;
      local_84 = 0;
      local_94[0] = local_94[0] & 0xffffff00;
      puStack_e4 = (uint *)0x9088ae;
      FUN_00409350();
      local_c._0_1_ = 0x2e;
      ppuStack_dc = (undefined1 **)0xd;
      puStack_e0 = (uint *)0xe33344;
      local_9c = 0xf;
      local_a0 = 0;
      local_b0[0] = local_b0[0] & 0xffffff00;
      puStack_e4 = (uint *)0x9088d2;
      FUN_00409350();
      local_c._0_1_ = 0x2f;
      local_78 = (undefined1 *)local_160;
      uVar11 = 0;
      local_160[0] = 0;
      local_160[1] = 0;
      uVar10 = 0x2d2d2d;
      uVar9 = 0;
      puVar8 = local_94;
      ppuVar6 = &local_6c;
      uVar7 = 0;
      iVar4 = local_58;
      FUN_006a4f40(ppuVar6,0,puVar8,0,local_5c,local_58,0x2d2d2d,0);
      uVar5 = FUN_006a55b0();
      FUN_006a7ed0(auStack_158,uVar5,ppuVar6,uVar7,puVar8,uVar9,local_5c,iVar4,uVar10,uVar11);
      local_160[1] = 0;
      local_160[0] = local_70;
      local_c._0_1_ = 0x30;
      uVar5 = FUN_006a4f40();
      local_c._0_1_ = 0x2f;
      FUN_00909030(uVar5);
      if (0xf < local_9c) {
        ppuStack_dc = (undefined1 **)local_b0[0];
                    /* WARNING: Subroutine does not return */
        puStack_e0 = (uint *)&UNK_00908983;
        FUN_00aae91b();
      }
      local_c = (uint)local_c._1_3_ << 8;
      local_9c = 0xf;
      local_a0 = 0;
      local_b0[0] = local_b0[0] & 0xffffff00;
      if (0xf < local_80) {
        ppuStack_dc = (undefined1 **)local_94[0];
                    /* WARNING: Subroutine does not return */
        puStack_e0 = (uint *)&UNK_009089a9;
        FUN_00aae91b();
      }
    }
    else if ((int)(*(int *)(local_b4 + 0xb4) - *(int *)(local_b4 + 0xb0) & 0xfffffffcU) < 5) {
      if (*(char *)(local_b4 + 0x1a2) == '\0') {
        ppuStack_dc = (undefined1 **)0x908cc9;
        FUN_009885d0();
        local_c._0_1_ = 0x3a;
        ppuStack_dc = (undefined1 **)0x908cdf;
        FUN_009885d0();
        local_c._0_1_ = 0x3b;
        local_78 = (undefined1 *)local_160;
        uVar11 = 0;
        local_160[0] = 0;
        local_160[1] = 0;
        uVar10 = 0x2d2d2d;
        uVar9 = 0;
        puVar8 = local_b0;
        ppuVar6 = &local_6c;
        uVar7 = 0;
        iVar4 = local_58;
        FUN_006a4f40(ppuVar6,0,puVar8,0,local_5c,local_58,0x2d2d2d,0);
        uVar5 = FUN_006a55b0();
        FUN_006a7ed0(auStack_158,uVar5,ppuVar6,uVar7,puVar8,uVar9,local_5c,iVar4,uVar10,uVar11);
        local_160[1] = 0;
        local_160[0] = local_70;
        local_c._0_1_ = 0x3c;
        uVar5 = FUN_006a4f40();
        local_c._0_1_ = 0x3b;
        FUN_00909030(uVar5);
        ppuStack_dc = (undefined1 **)0x908d84;
        FUN_00408ad0();
        local_c = (uint)local_c._1_3_ << 8;
        ppuStack_dc = (undefined1 **)0x908d94;
        FUN_00408ad0();
      }
      else {
        ppuStack_dc = (undefined1 **)0x908bf4;
        FUN_009885d0();
        local_c._0_1_ = 0x37;
        ppuStack_dc = (undefined1 **)0x908c0a;
        FUN_009885d0();
        local_c._0_1_ = 0x38;
        local_78 = (undefined1 *)local_160;
        uVar11 = 0;
        local_160[0] = 0;
        local_160[1] = 0;
        uVar10 = 0x2d2d2d;
        uVar9 = 0;
        puVar8 = local_b0;
        ppuVar6 = &local_6c;
        uVar7 = 0;
        iVar4 = local_58;
        FUN_006a4f40(ppuVar6,0,puVar8,0,local_5c,local_58,0x2d2d2d,0);
        uVar5 = FUN_006a55b0();
        FUN_006a7ed0(auStack_158,uVar5,ppuVar6,uVar7,puVar8,uVar9,local_5c,iVar4,uVar10,uVar11);
        local_160[1] = 0;
        local_160[0] = local_70;
        local_c._0_1_ = 0x39;
        uVar5 = FUN_006a4f40();
        local_c._0_1_ = 0x38;
        FUN_00909030(uVar5);
        ppuStack_dc = (undefined1 **)0x908caf;
        FUN_00408ad0();
        local_c = (uint)local_c._1_3_ << 8;
        ppuStack_dc = (undefined1 **)0x908cbf;
        FUN_00408ad0();
      }
    }
    else if (*(char *)(local_b4 + 0x1a2) == '\0') {
      ppuStack_dc = (undefined1 **)0x908b13;
      FUN_009885d0();
      local_c._0_1_ = 0x34;
      ppuStack_dc = (undefined1 **)0x908b29;
      FUN_009885d0();
      local_c._0_1_ = 0x35;
      local_78 = (undefined1 *)local_160;
      uVar11 = 0;
      local_160[0] = 0;
      local_160[1] = 0;
      uVar10 = 0x2d2d2d;
      uVar9 = 0;
      puVar8 = local_b0;
      ppuVar6 = &local_6c;
      uVar7 = 0;
      iVar4 = local_58;
      FUN_006a4f40(ppuVar6,0,puVar8,0,local_5c,local_58,0x2d2d2d,0);
      uVar5 = FUN_006a55b0();
      FUN_006a7ed0(auStack_158,uVar5,ppuVar6,uVar7,puVar8,uVar9,local_5c,iVar4,uVar10,uVar11);
      local_160[1] = 0;
      local_160[0] = local_70;
      local_c._0_1_ = 0x36;
      uVar5 = FUN_006a4f40();
      local_c._0_1_ = 0x35;
      FUN_00909030(uVar5);
      ppuStack_dc = (undefined1 **)0x908bce;
      FUN_00408ad0();
      local_c = (uint)local_c._1_3_ << 8;
      ppuStack_dc = (undefined1 **)0x908bde;
      FUN_00408ad0();
    }
    else {
      ppuStack_dc = (undefined1 **)0x908a3e;
      FUN_009885d0();
      local_c._0_1_ = 0x31;
      ppuStack_dc = (undefined1 **)0x908a54;
      FUN_009885d0();
      local_c._0_1_ = 0x32;
      local_78 = (undefined1 *)local_160;
      uVar11 = 0;
      local_160[0] = 0;
      local_160[1] = 0;
      uVar10 = 0x2d2d2d;
      uVar9 = 0;
      puVar8 = local_b0;
      ppuVar6 = &local_6c;
      uVar7 = 0;
      iVar4 = local_58;
      FUN_006a4f40(ppuVar6,0,puVar8,0,local_5c,local_58,0x2d2d2d,0);
      uVar5 = FUN_006a55b0();
      FUN_006a7ed0(auStack_158,uVar5,ppuVar6,uVar7,puVar8,uVar9,local_5c,iVar4,uVar10,uVar11);
      local_160[1] = 0;
      local_160[0] = local_70;
      local_c._0_1_ = 0x33;
      uVar5 = FUN_006a4f40();
      local_c._0_1_ = 0x32;
      FUN_00909030(uVar5);
      ppuStack_dc = (undefined1 **)0x908af9;
      FUN_00408ad0();
      local_c = (uint)local_c._1_3_ << 8;
      ppuStack_dc = (undefined1 **)0x908b09;
      FUN_00408ad0();
    }
    iVar4 = *(int *)(local_54 + 0x20);
    if (iVar4 != 0) {
      *(int *)(local_54 + 0x40) = iVar4;
      *(int *)(local_54 + 0x44) = iVar4;
    }
    ppuStack_dc = (undefined1 **)local_54;
    puStack_e0 = (uint *)0x9089d1;
    FUN_008a61f0();
    ppuStack_dc = *(undefined1 ***)(*(int *)(DAT_012587e4 + 4) + local_58 * 4);
    puStack_e0 = (uint *)0x9089e9;
    FUN_00520150();
    ppuStack_dc = &local_6c;
    puStack_e0 = (uint *)0x9089f3;
    FUN_0042b9f0();
    ExceptionList = local_14;
    return;
  }
  ppuStack_dc = (undefined1 **)local_94[0];
                    /* WARNING: Subroutine does not return */
  puStack_e0 = (uint *)&UNK_00908701;
  FUN_00aae91b();
}

