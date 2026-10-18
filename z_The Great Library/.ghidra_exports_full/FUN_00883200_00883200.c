// FUN_00883200 @ 00883200 body=[[00883200, 00883296] [0088329a, 00883395] [00883399, 008833ba] [008833be, 008833e6] [008833ea, 00883513] [00883517, 0088353b] [0088353f, 00883555] [00883559, 0088356f] [00883573, 0088358d] [00883591, 008835d9] [008835dd, 00883622] [00883626, 0088364a] [00883653, 008836ac] [008836b0, 0088379e] [008837a2, 008837bd] [008837c1, 008837e0] [008837e4, 008838c5] [008838c9, 008838e7] [008838eb, 008839b4] [008839b8, 008839d9] [008839dd, 008839fc] [00883a00, 00883a16] [00883a1a, 00883a34] [00883a38, 00883a80] [00883a84, 00883c6e]]


undefined4 FUN_00883200(undefined4 param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int in_ECX;
  undefined1 *puVar5;
  uint in_stack_00000020;
  undefined8 local_fc;
  uint local_e0 [4];
  undefined4 local_d0;
  uint local_cc;
  uint local_c4 [4];
  undefined4 local_b4;
  uint local_b0;
  undefined1 local_a0 [4];
  int local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_8c;
  int local_88;
  uint local_84 [4];
  undefined4 local_74;
  uint local_70;
  uint local_68 [4];
  undefined4 local_58;
  uint local_54;
  uint local_4c [2];
  undefined1 local_44 [4];
  int local_40;
  undefined4 local_3c;
  uint local_38;
  undefined4 *local_30;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b8841f;
  local_10 = ExceptionList;
  local_8c = 0;
  local_8 = 1;
  local_30 = *(undefined4 **)((int)param_2 + 0xc);
  local_88 = in_ECX;
  if (local_30 != *(undefined4 **)(DAT_012588e8 + 0xb60)) {
    local_fc = CONCAT44(in_ECX,0x883661);
    ExceptionList = &local_10;
    FUN_008852b0();
    if (local_30 == (undefined4 *)0x0) {
      local_fc = CONCAT44(0x883ab5,(undefined4)local_fc);
      FUN_009885d0();
      local_fc = CONCAT44(local_c4,local_44);
      local_8._0_1_ = 0x2a;
      FUN_009a8ee0();
      local_8._0_1_ = 0x2c;
      local_fc = CONCAT44(0x883ad0,(undefined4)local_fc);
      FUN_00408ad0();
      local_fc = CONCAT44(0x883add,(undefined4)local_fc);
      FUN_009885d0();
      local_8._0_1_ = 0x2d;
      local_fc = CONCAT44(0x883aef,(undefined4)local_fc);
      uVar1 = FUN_0055dd40();
      local_fc = CONCAT44(uVar1,local_a0);
      local_8._0_1_ = 0x2e;
      uVar1 = FUN_009a8ee0();
      local_8._0_1_ = 0x2f;
      local_fc = CONCAT44(uVar1,0x883b10);
      FUN_009a9a90();
      local_8._0_1_ = 0x2e;
      local_fc = CONCAT44(local_a0,0x883b20);
      FUN_009a9740();
      local_fc = CONCAT44(0x883b28,(undefined4)local_fc);
      FUN_00408ad0();
      local_8._0_1_ = 0x2c;
      local_fc = CONCAT44(0x883b33,(undefined4)local_fc);
      FUN_00408ad0();
      local_fc = CONCAT44(0x883b40,(undefined4)local_fc);
      FUN_009885d0();
      local_8._0_1_ = 0x30;
      if ((0 < *(int *)(in_ECX + 0x28)) || (*(int *)(in_ECX + 0x28) < 0)) {
        local_fc = CONCAT44(local_84,0x883b65);
        FUN_004012f0();
      }
      local_fc = CONCAT44(0x883b72,(undefined4)local_fc);
      FUN_009885d0();
      local_8._0_1_ = 0x31;
      local_fc = CONCAT44(0x883b86,(undefined4)local_fc);
      FUN_009885d0();
      param_2 = &local_fc;
      local_8._0_1_ = 0x32;
      local_fc = (ulonglong)*(uint *)(in_ECX + 0x28);
      uVar1 = FUN_00988a50();
      local_8._0_1_ = 0x33;
      local_fc = CONCAT44(uVar1,0x883bb5);
      FUN_00988f20();
      local_8._0_1_ = 0x34;
      local_fc = CONCAT44(local_2c,0x883bc7);
      uVar1 = FUN_00988f20();
      local_8._0_1_ = 0x35;
      local_fc = CONCAT44(uVar1,0x883bda);
      FUN_009a9980();
      local_fc = CONCAT44(0x883be2,(undefined4)local_fc);
      FUN_00408ad0();
      local_fc = CONCAT44(0x883bed,(undefined4)local_fc);
      FUN_00408ad0();
      local_fc = CONCAT44(0x883bf8,(undefined4)local_fc);
      FUN_00408ad0();
      local_fc = CONCAT44(0x883bff,(undefined4)local_fc);
      FUN_00408ad0();
      local_8 = CONCAT31(local_8._1_3_,0x30);
      local_fc = CONCAT44(0x883c0b,(undefined4)local_fc);
      FUN_00408ad0();
      local_fc = CONCAT44(0x883c10,(undefined4)local_fc);
      iVar4 = FUN_00475500();
      local_fc = *(undefined8 *)(iVar4 + 0x74);
      FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c));
      local_8c = 1;
      local_fc = CONCAT44(0x883c45,(undefined4)local_fc);
      FUN_00408ad0();
      puVar5 = local_44;
    }
    else {
      local_fc = 0xf00e29d48;
      local_54 = 0xf;
      local_58 = 0;
      local_68[0] = local_68[0] & 0xffffff00;
      FUN_00409350();
      local_fc = CONCAT44(local_68,local_a0);
      local_8._0_1_ = 0x14;
      FUN_009a8ee0();
      local_8._0_1_ = 0x16;
      if (0xf < local_54) {
        local_fc = CONCAT44(local_68[0],&UNK_008836ad);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_fc = 0x700e29d38;
      local_54 = 0xf;
      local_58 = 0;
      local_68[0] = local_68[0] & 0xffffff00;
      local_18 = 0xf;
      local_1c = 0;
      local_2c[0] = local_2c[0] & 0xffffff00;
      FUN_00409350();
      local_8._0_1_ = 0x17;
      local_fc = CONCAT44(0x8836e3,(undefined4)local_fc);
      uVar1 = FUN_0055dd40();
      local_fc = CONCAT44(uVar1,local_44);
      local_8._0_1_ = 0x18;
      puVar2 = (undefined4 *)FUN_009a8ee0();
      local_8._0_1_ = 0x19;
      local_fc = 0x38008836fe;
      puVar3 = (undefined4 *)FUN_00aae9af();
      local_8._0_1_ = 0x1a;
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        *puVar3 = &PTR_FUN_00e38ecc;
        puVar3[1] = local_a0;
        local_fc = 0xffffffff00000000;
        puVar3[7] = 0xf;
        puVar3[6] = 0;
        *(undefined1 *)(puVar3 + 2) = 0;
        local_30 = puVar3;
        FUN_00408ed0();
        *puVar3 = &PTR_FUN_00e38f08;
        puVar3[9] = *puVar2;
        puVar3[10] = 0;
        puVar3[0xb] = 0;
        puVar3[0xc] = 0;
        local_8._0_1_ = 0x1c;
        local_fc = CONCAT44(0x88375d,(undefined4)local_fc);
        FUN_009a97b0();
      }
      local_8._0_1_ = 0x19;
      local_fc = CONCAT44(&local_30,local_2c);
      local_30 = puVar3;
      FUN_009e6810();
      local_8._0_1_ = 0x1d;
      local_fc = CONCAT44(0x883787,(undefined4)local_fc);
      FUN_009adb70();
      if (local_40 != 0) {
        local_fc = CONCAT44(0x883796,(undefined4)local_fc);
        FUN_009e6a80();
        local_fc = CONCAT44(local_40,&UNK_0088379f);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_40 = 0;
      local_3c = 0;
      local_38 = 0;
      if (0xf < local_70) {
        local_fc = CONCAT44(local_84[0],&UNK_008837be);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8._0_1_ = 0x16;
      local_70 = 0xf;
      local_74 = 0;
      local_84[0] = local_84[0] & 0xffffff00;
      if (0xf < local_18) {
        local_fc = CONCAT44(local_2c[0],&UNK_008837e1);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_fc = 0x600e29d58;
      local_18 = 0xf;
      local_1c = 0;
      local_2c[0] = local_2c[0] & 0xffffff00;
      FUN_00409350();
      local_8._0_1_ = 0x1e;
      local_fc = CONCAT44(0x88380e,(undefined4)local_fc);
      uVar1 = FUN_0055dd40();
      local_fc = CONCAT44(uVar1,local_44);
      local_8._0_1_ = 0x1f;
      puVar2 = (undefined4 *)FUN_009a8ee0();
      local_8._0_1_ = 0x20;
      local_fc = 0x3800883829;
      puVar3 = (undefined4 *)FUN_00aae9af();
      local_8._0_1_ = 0x21;
      if (puVar3 == (undefined4 *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        *puVar3 = &PTR_FUN_00e38ecc;
        puVar3[1] = local_a0;
        local_fc = 0xffffffff00000000;
        puVar3[7] = 0xf;
        puVar3[6] = 0;
        *(undefined1 *)(puVar3 + 2) = 0;
        param_2 = (undefined8 *)puVar3;
        FUN_00408ed0();
        *puVar3 = &PTR_FUN_00e38f08;
        puVar3[9] = *puVar2;
        puVar3[10] = 0;
        puVar3[0xb] = 0;
        puVar3[0xc] = 0;
        local_8._0_1_ = 0x23;
        local_fc = CONCAT44(0x883888,(undefined4)local_fc);
        FUN_009a97b0();
      }
      local_8._0_1_ = 0x20;
      local_fc = CONCAT44(&param_2,local_2c);
      param_2 = (undefined8 *)puVar3;
      FUN_009e6810();
      local_8._0_1_ = 0x1f;
      local_fc = CONCAT44(local_44,0x8838b3);
      FUN_009a9740();
      if (0xf < local_70) {
        local_fc = CONCAT44(local_84[0],&UNK_008838c6);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8._0_1_ = 0x16;
      local_70 = 0xf;
      local_74 = 0;
      local_84[0] = local_84[0] & 0xffffff00;
      if (0xf < local_18) {
        local_fc = CONCAT44(local_2c[0],&UNK_008838e8);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_fc = CONCAT44(0x8838fb,(undefined4)local_fc);
      FUN_009885d0();
      local_8._0_1_ = 0x24;
      if (*(int *)(local_88 + 0x28) < 1) {
        if (*(int *)(local_88 + 0x28) < 0) {
          local_fc = CONCAT44(local_e0,0x88392f);
          FUN_004012f0();
        }
      }
      else {
        local_fc = 0x200df8518;
        FUN_00409350();
      }
      local_fc = CONCAT44(0x88393c,(undefined4)local_fc);
      FUN_009885d0();
      local_8._0_1_ = 0x25;
      local_fc = CONCAT44(0x88394d,(undefined4)local_fc);
      FUN_009885d0();
      param_2 = &local_fc;
      local_8._0_1_ = 0x26;
      local_fc = (ulonglong)*(uint *)(local_88 + 0x28);
      uVar1 = FUN_00988a50();
      local_8._0_1_ = 0x27;
      local_fc = CONCAT44(uVar1,0x883982);
      FUN_00988f20();
      local_8._0_1_ = 0x28;
      local_fc = CONCAT44(local_4c,0x883994);
      uVar1 = FUN_00988f20();
      local_8._0_1_ = 0x29;
      local_fc = CONCAT44(uVar1,0x8839a7);
      FUN_009a9980();
      if (0xf < local_70) {
        local_fc = CONCAT44(local_84[0],&UNK_008839b5);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_70 = 0xf;
      local_74 = 0;
      local_84[0] = local_84[0] & 0xffffff00;
      if (0xf < local_b0) {
        local_fc = CONCAT44(local_c4[0],&UNK_008839da);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_b0 = 0xf;
      local_b4 = 0;
      local_c4[0] = local_c4[0] & 0xffffff00;
      if (0xf < local_54) {
        local_fc = CONCAT44(local_68[0],&UNK_008839fd);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_54 = 0xf;
      local_58 = 0;
      local_68[0] = local_68[0] & 0xffffff00;
      if (0xf < local_18) {
        local_fc = CONCAT44(local_2c[0],&UNK_00883a17);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8 = CONCAT31(local_8._1_3_,0x24);
      local_18 = 0xf;
      local_1c = 0;
      local_2c[0] = local_2c[0] & 0xffffff00;
      if (0xf < local_38) {
        local_fc = CONCAT44(local_4c[0],&UNK_00883a35);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_fc = CONCAT44(0x883a3d,(undefined4)local_fc);
      iVar4 = FUN_00475500();
      local_fc = *(undefined8 *)(iVar4 + 0x74);
      FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c));
      local_8c = 1;
      if (0xf < local_cc) {
        local_fc = CONCAT44(local_e0[0],&UNK_00883a81);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_cc = 0xf;
      local_d0 = 0;
      local_e0[0] = local_e0[0] & 0xffffff00;
      puVar5 = local_a0;
    }
    local_8 = CONCAT31(local_8._1_3_,1);
    local_fc = CONCAT44(puVar5,0x883c52);
    FUN_009a9740();
    local_fc = CONCAT44(0x883c5a,(undefined4)local_fc);
    FUN_00408ad0();
    ExceptionList = local_10;
    return param_1;
  }
  local_fc = 0x1500e29d20;
  local_54 = 0xf;
  local_58 = 0;
  local_68[0] = local_68[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350();
  local_fc = CONCAT44(local_68,local_a0);
  local_8._0_1_ = 2;
  FUN_009a8ee0();
  local_8._0_1_ = 4;
  if (0xf < local_54) {
    local_fc = CONCAT44(local_68[0],&UNK_00883297);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_fc = 0x700e29d38;
  local_54 = 0xf;
  local_58 = 0;
  local_68[0] = local_68[0] & 0xffffff00;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 5;
  local_fc = CONCAT44(in_ECX,0x8832d2);
  FUN_008852b0();
  local_fc = CONCAT44(0x8832dd,(undefined4)local_fc);
  uVar1 = FUN_0055dd40();
  local_fc = CONCAT44(uVar1,local_44);
  local_8._0_1_ = 6;
  puVar2 = (undefined4 *)FUN_009a8ee0();
  local_8._0_1_ = 7;
  local_fc = 0x38008832f8;
  puVar3 = (undefined4 *)FUN_00aae9af();
  local_8._0_1_ = 8;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = &PTR_FUN_00e38ecc;
    puVar3[1] = local_a0;
    local_fc = 0xffffffff00000000;
    puVar3[7] = 0xf;
    puVar3[6] = 0;
    *(undefined1 *)(puVar3 + 2) = 0;
    param_2 = (undefined8 *)puVar3;
    FUN_00408ed0();
    *puVar3 = &PTR_FUN_00e38f08;
    local_30 = puVar3 + 9;
    *local_30 = *puVar2;
    puVar3[10] = 0;
    puVar3[0xb] = 0;
    puVar3[0xc] = 0;
    local_8._0_1_ = 10;
    local_fc = CONCAT44(0x883354,(undefined4)local_fc);
    FUN_009a97b0();
  }
  local_8._0_1_ = 7;
  local_fc = CONCAT44(&param_2,local_2c);
  param_2 = (undefined8 *)puVar3;
  FUN_009e6810();
  local_8._0_1_ = 0xb;
  local_fc = CONCAT44(0x88337e,(undefined4)local_fc);
  FUN_009adb70();
  if (local_40 != 0) {
    local_fc = CONCAT44(0x88338d,(undefined4)local_fc);
    FUN_009e6a80();
    local_fc = CONCAT44(local_40,&UNK_00883396);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  if (0xf < local_b0) {
    local_fc = CONCAT44(local_c4[0],&UNK_008833bb);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 4;
  local_b0 = 0xf;
  local_b4 = 0;
  local_c4[0] = local_c4[0] & 0xffffff00;
  if (0xf < local_18) {
    local_fc = CONCAT44(local_2c[0],&UNK_008833e7);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_fc = 0x200df963c;
  local_cc = 0xf;
  local_d0 = 0;
  local_e0[0] = local_e0[0] & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 0xc;
  if (*(int *)(local_88 + 0x28) < 1) {
    if (-1 < *(int *)(local_88 + 0x28)) goto LAB_0088343c;
    local_fc = 0x200df8510;
  }
  else {
    local_fc = 0x200df8518;
  }
  FUN_00409350();
LAB_0088343c:
  local_fc = 0x200df8514;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 0xd;
  local_fc = 0x400e29d40;
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  FUN_00409350();
  param_2 = &local_fc;
  local_8._0_1_ = 0xe;
  local_fc = (ulonglong)*(uint *)(local_88 + 0x28);
  uVar1 = FUN_00988a50();
  local_8._0_1_ = 0xf;
  local_fc = CONCAT44(uVar1,0x88349c);
  FUN_00988f20();
  local_8._0_1_ = 0x10;
  local_fc = CONCAT44(local_2c,0x8834b1);
  uVar1 = FUN_00988f20();
  local_8._0_1_ = 0x11;
  local_fc = 0x40008834be;
  param_2 = (undefined8 *)FUN_00aae9af();
  local_8._0_1_ = 0x12;
  if (param_2 == (undefined8 *)0x0) {
    param_2 = (undefined8 *)0x0;
  }
  else {
    local_fc = CONCAT44(uVar1,local_a0);
    param_2 = (undefined8 *)FUN_009a9ce0();
  }
  local_8._0_1_ = 0x11;
  local_fc = CONCAT44(&param_2,local_4c);
  FUN_009e6810();
  if (0xf < local_b0) {
    local_fc = CONCAT44(local_c4[0],&UNK_00883514);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_b0 = 0xf;
  local_b4 = 0;
  local_c4[0] = local_c4[0] & 0xffffff00;
  if (0xf < local_54) {
    local_fc = CONCAT44(local_68[0],&UNK_0088353c);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_54 = 0xf;
  local_58 = 0;
  local_68[0] = local_68[0] & 0xffffff00;
  if (0xf < local_70) {
    local_fc = CONCAT44(local_84[0],&UNK_00883556);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_70 = 0xf;
  local_74 = 0;
  local_84[0] = local_84[0] & 0xffffff00;
  if (0xf < local_38) {
    local_fc = CONCAT44(local_4c[0],&UNK_00883570);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 0xc;
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  if (0xf < local_18) {
    local_fc = CONCAT44(local_2c[0],&UNK_0088358e);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_fc = CONCAT44(0x883596,(undefined4)local_fc);
  iVar4 = FUN_00475500();
  local_fc = *(undefined8 *)(iVar4 + 0x74);
  FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c));
  local_8c = 1;
  if (0xf < local_cc) {
    local_fc = CONCAT44(local_e0[0],&UNK_008835da);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_cc = 0xf;
  local_d0 = 0;
  local_e0[0] = local_e0[0] & 0xffffff00;
  local_8 = CONCAT31(local_8._1_3_,0x13);
  local_fc = CONCAT44(0x883602,(undefined4)local_fc);
  FUN_009adb70();
  if (local_9c == 0) {
    local_9c = 0;
    local_98 = 0;
    local_94 = 0;
    if (in_stack_00000020 < 0x10) {
      ExceptionList = local_10;
      return param_1;
    }
    local_fc = CONCAT44(param_3,&UNK_0088364b);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_fc = CONCAT44(0x883617,(undefined4)local_fc);
  FUN_009e6a80();
  local_fc = CONCAT44(local_9c,&UNK_00883623);
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

