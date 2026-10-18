// FUN_00889670 @ 00889670 body=[[00889670, 0088974b] [0088974f, 0088977f] [00889783, 0088980e] [00889812, 00889842] [00889846, 00889860] [00889864, 0088993b] [00889942, 008899d2] [008899d6, 00889a5b] [00889a5f, 00889a7f] [00889a83, 00889b35] [00889b39, 00889b63] [00889b67, 00889b9c] [00889ba0, 00889bbb] [00889bbf, 00889bdd] [00889be1, 00889c34] [00889c38, 00889c68] [00889c6c, 00889cac] [00889cb0, 00889ce0] [00889ce4, 00889cfb] [00889cff, 00889d13]]


/* WARNING: Type propagation algorithm not settling */

undefined1 * FUN_00889670(undefined1 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  LPSTR ******lpsz;
  int in_ECX;
  uint in_stack_00000024;
  undefined1 *in_stack_0000002c;
  undefined1 local_3c0 [8];
  undefined4 uStack_3b8;
  uint *puStack_3b4;
  undefined8 local_3b0;
  undefined1 local_11c [8];
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_104;
  uint local_d4;
  undefined4 local_c4;
  uint local_c0;
  uint local_b8 [4];
  undefined4 local_a8;
  uint local_a4;
  LPSTR ******local_9c [4];
  int local_8c;
  uint local_88;
  uint local_80 [4];
  undefined4 local_70;
  uint local_6c;
  int local_64;
  uint local_60;
  undefined4 local_50;
  uint local_4c;
  uint local_44;
  undefined4 local_34;
  uint local_30;
  undefined4 local_28;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b9f86b;
  local_10 = ExceptionList;
  local_28 = 0;
  local_6c = 0xf;
  local_70 = 0;
  local_80[0] = local_80[0] & 0xffffff00;
  local_8._0_1_ = 2;
  local_8._1_3_ = 0;
  ExceptionList = &local_10;
  local_64 = in_ECX;
  FUN_008a88d0();
  local_4c = 0xf;
  local_50 = 0;
  local_60 = local_60 & 0xffffff00;
  if ((*(int *)(in_ECX + 0x2c) - *(int *)(in_ECX + 0x28) & 0xfffffffcU) == 0) {
    local_3b0 = CONCAT44(0x8896eb,(undefined4)local_3b0);
    FUN_00409350();
    local_8._0_1_ = 3;
    local_3b0 = CONCAT44(0x8896fc,(undefined4)local_3b0);
    FUN_009a8ee0();
    local_8._0_1_ = 4;
    iVar3 = FUN_00475500();
    local_3b0 = *(undefined8 *)(iVar3 + 0x6c);
    puStack_3b4 = (uint *)0x889729;
    uVar4 = FUN_009a9880();
    local_8._0_1_ = 5;
    local_3b0 = CONCAT44(uVar4,0x889739);
    FUN_00448aa0();
    if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_30 = 0xf;
    local_34 = 0;
    local_44 = local_44 & 0xffffff00;
    local_8._0_1_ = 6;
    FUN_009adb70();
    if (local_20 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  else {
    local_3b0 = CONCAT44(0x8897ae,(undefined4)local_3b0);
    FUN_00409350();
    local_8._0_1_ = 7;
    local_3b0 = CONCAT44(0x8897bf,(undefined4)local_3b0);
    FUN_009a8ee0();
    local_8._0_1_ = 8;
    iVar3 = FUN_00475500();
    local_3b0 = *(undefined8 *)(iVar3 + 0x6c);
    puStack_3b4 = (uint *)0x8897ec;
    uVar4 = FUN_009a9880();
    local_8._0_1_ = 9;
    local_3b0 = CONCAT44(uVar4,0x8897fc);
    FUN_00448aa0();
    if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_30 = 0xf;
    local_34 = 0;
    local_44 = local_44 & 0xffffff00;
    local_8._0_1_ = 10;
    FUN_009adb70();
    if (local_20 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  if (0xf < local_4c) {
    local_8._0_1_ = 2;
    local_18 = 0;
    local_1c = 0;
    local_20 = 0;
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 2;
  local_18 = 0;
  local_1c = 0;
  local_20 = 0;
  FUN_00954a40();
  local_8._0_1_ = 0xb;
  local_104 = 0;
  local_18 = 0x2d2d2d;
  local_114 = 0x2d2d2d;
  local_110 = 0;
  local_10c = 0;
  local_3b0 = 0xf00000000;
  local_3c0[0] = 0;
  FUN_00408ed0(&param_4,0,0xffffffff);
  FUN_0087a6c0(local_9c,local_11c,param_3 + 1);
  local_8._0_1_ = 0xc;
  local_3b0 = CONCAT44(0x8898ef,(undefined4)local_3b0);
  piVar5 = (int *)FUN_00989510();
  if (((piVar5[1] - *piVar5) / 0x1c < 3) ||
     (bVar2 = true, (*(int *)(local_64 + 0x2c) - *(int *)(local_64 + 0x28) & 0xfffffffcU) != 0)) {
    bVar2 = false;
  }
  local_28 = 0;
  if (local_20 != 0) {
    FUN_00413860();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if (bVar2) {
    local_3b0 = CONCAT44(0x889956,(undefined4)local_3b0);
    FUN_00448740();
  }
  else {
    local_3b0 = CONCAT44(0x88996c,(undefined4)local_3b0);
    FUN_00448740();
    in_stack_0000002c = local_3c0;
    local_3b0 = 0xf00000000;
    local_3c0[0] = 0;
    FUN_00408ed0(&param_4,0,0xffffffff);
    uVar4 = FUN_0087a6c0(local_b8,local_11c,0);
    local_8._0_1_ = 0xd;
    local_3b0 = CONCAT44(uVar4,0x8899ba);
    FUN_00408ed0();
    local_8._0_1_ = 0xc;
    if (0xf < local_a4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    lpsz = local_9c[0];
    if (local_88 < 0x10) {
      lpsz = (LPSTR ******)local_9c;
    }
    local_3b0 = CONCAT44(0x8899f4,(undefined4)local_3b0);
    CharLowerBuffA((LPSTR)lpsz,1);
  }
  if ((*(int *)(local_64 + 0x2c) - *(int *)(local_64 + 0x28) & 0xfffffffcU) != 0) {
    local_3b0 = ZEXT48(local_11c);
    puStack_3b4 = local_b8;
    uStack_3b8 = 0x889a24;
    (**(code **)(*(int *)(local_64 + 0x20) + 0x2c))();
    local_8._0_1_ = 0xe;
    uVar4 = FUN_00988fa0();
    local_8._0_1_ = 0xf;
    local_3b0 = CONCAT44(uVar4,0x889a49);
    FUN_00448aa0();
    if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 0xc;
    local_30 = 0xf;
    local_34 = 0;
    uVar1 = local_44 >> 8;
    local_44 = uVar1 << 8;
    if (0xf < local_a4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_30 = 0xf;
    local_34 = 0;
    local_44 = uVar1 << 8;
    local_3b0 = CONCAT44(0x889a9b,(undefined4)local_3b0);
    FUN_00409350();
    local_8._0_1_ = 0x10;
    local_4c = 0xf;
    local_50 = 0;
    local_60 = local_60 & 0xffffff00;
    local_3b0 = CONCAT44(0x889ab7,(undefined4)local_3b0);
    FUN_00409350();
    local_8._0_1_ = 0x11;
    local_3b0 = CONCAT44(0x889ac8,(undefined4)local_3b0);
    FUN_009a8ee0();
    local_8._0_1_ = 0x12;
    iVar3 = FUN_00475500();
    local_3b0 = *(undefined8 *)(iVar3 + 0x6c);
    puStack_3b4 = (uint *)0x889af8;
    FUN_009a9880();
    local_8._0_1_ = 0x13;
    uVar4 = FUN_00988f20();
    local_8._0_1_ = 0x14;
    local_3b0 = CONCAT44(uVar4,0x889b1d);
    FUN_00448aa0();
    if (0xf < local_c0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_c0 = 0xf;
    local_c4 = 0;
    local_d4 = local_d4 & 0xffffff00;
    if (0xf < local_a4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_a4 = 0xf;
    local_a8 = 0;
    local_b8[0] = local_b8[0] & 0xffffff00;
    local_8._0_1_ = 0x15;
    FUN_009adb70();
    if (local_20 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    if (0xf < local_4c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 0xc;
    local_4c = 0xf;
    local_50 = 0;
    local_60 = local_60 & 0xffffff00;
    if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  local_3b0 = CONCAT44(local_9c,0x889bf8);
  FUN_00448aa0();
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  if (local_8c < 1) {
    local_3b0 = CONCAT44(0x889c19,(undefined4)local_3b0);
    FUN_00409350();
    local_28 = 2;
    if (0xf < local_88) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_88 = 0xf;
    local_8c = 0;
    local_9c[0] = (LPSTR ******)((uint)local_9c[0] & 0xffffff00);
    local_8 = CONCAT31(local_8._1_3_,2);
    FUN_00955ae0();
    if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  else {
    local_3b0 = CONCAT44(local_80,0x889c91);
    FUN_00408ed0();
    local_28 = 2;
    if (0xf < local_88) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_88 = 0xf;
    local_8c = 0;
    local_9c[0] = (LPSTR ******)((uint)local_9c[0] & 0xffffff00);
    local_8 = CONCAT31(local_8._1_3_,2);
    FUN_00955ae0();
    if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  if (in_stack_00000024 < 0x10) {
    ExceptionList = local_10;
    return param_1;
  }
  local_6c = 0xf;
  local_70 = 0;
  local_80[0] = local_80[0] & 0xffffff00;
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

