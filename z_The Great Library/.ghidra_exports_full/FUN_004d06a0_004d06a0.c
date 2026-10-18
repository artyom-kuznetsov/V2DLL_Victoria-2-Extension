// FUN_004d06a0 @ 004d06a0 body=[[004d06a0, 004d0751] [004d0755, 004d07cc] [004d07d0, 004d0801] [004d0805, 004d081f] [004d0823, 004d08b0] [004d08b4, 004d0943] [004d0947, 004d09c2] [004d09c6, 004d09f0] [004d09f4, 004d0a54] [004d0a58, 004d0aa0] [004d0aa4, 004d0b28] [004d0b2c, 004d0bb3] [004d0bb7, 004d0bd4] [004d0bd8, 004d0bfb] [004d0bff, 004d0c25] [004d0c29, 004d0c8c] [004d0c90, 004d0d98] [004d0d9c, 004d0dc0] [004d0dc4, 004d0df4] [004d0df8, 004d0e13] [004d0e17, 004d0e32] [004d0e36, 004d0e50] [004d0e54, 004d0e69]]


undefined1 * FUN_004d06a0(int param_1,undefined1 *param_2,int *param_3)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined1 local_d4 [4];
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  uint *local_c8;
  uint *puStack_c4;
  undefined1 **local_c0;
  uint *puStack_bc;
  uint local_a8 [4];
  undefined4 local_98;
  uint local_94;
  undefined4 local_8c;
  uint local_88 [2];
  undefined1 local_80 [4];
  undefined4 *local_7c;
  undefined4 *local_78;
  uint local_74;
  uint local_6c [4];
  undefined4 local_5c;
  uint local_58;
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  undefined1 *local_18;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00b75991;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_2 + 0x14) = 0xf;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *param_2 = 0;
  local_8 = 0;
  puStack_bc = (uint *)param_3[0x4b];
  local_c0 = (undefined1 **)param_1;
  local_8c = 1;
  puStack_c4 = (uint *)0x4d06f8;
  cVar2 = FUN_004d0e70();
  if (cVar2 == '\0') {
    local_18 = local_d4;
    local_c0 = (undefined1 **)0xf;
    puStack_c4 = (uint *)0x0;
    local_d4[0] = 0;
    FUN_00409350(&DAT_00dedc20);
    puStack_c4 = (uint *)FUN_009c98f0(local_50);
    puStack_bc = (uint *)0xffffffff;
    local_c0 = (undefined1 **)0x0;
    local_8 = 1;
    local_c8 = (uint *)0x4d0740;
    FUN_00448aa0();
    local_8 = local_8 & 0xffffff00;
    if (0xf < local_3c) {
      puStack_bc = (uint *)local_50[0];
                    /* WARNING: Subroutine does not return */
      local_c0 = (undefined1 **)&UNK_004d0752;
      FUN_00aae91b();
    }
    puStack_bc = (uint *)0x25;
    local_c0 = (undefined1 **)0xdfd648;
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    puStack_c4 = (uint *)0x4d076d;
    FUN_00409350();
    puStack_bc = local_34;
    local_c0 = (undefined1 **)local_80;
    local_8 = 2;
    puStack_c4 = (uint *)0x4d0781;
    FUN_009a8ee0();
    local_8._0_1_ = 3;
    puStack_bc = (uint *)0x4d078c;
    iVar3 = FUN_00475500();
    local_c8 = (uint *)*(undefined8 *)(iVar3 + 0x6c);
    puStack_c4 = (uint *)((ulonglong)*(undefined8 *)(iVar3 + 0x6c) >> 0x20);
    local_c0 = (undefined1 **)*(undefined8 *)(iVar3 + 0x74);
    puStack_bc = (uint *)((ulonglong)*(undefined8 *)(iVar3 + 0x74) >> 0x20);
    uStack_cc = 0x4d07ae;
    puStack_c4 = (uint *)FUN_009a9880();
    puStack_bc = (uint *)0xffffffff;
    local_c0 = (undefined1 **)0x0;
    local_8._0_1_ = 4;
    local_c8 = (uint *)0x4d07be;
    FUN_00448aa0();
    if (0xf < local_58) {
      puStack_bc = (uint *)local_6c[0];
                    /* WARNING: Subroutine does not return */
      local_c0 = (undefined1 **)&UNK_004d07cd;
      FUN_00aae91b();
    }
    local_58 = 0xf;
    local_5c = 0;
    local_6c[0] = local_6c[0] & 0xffffff00;
    local_8._0_1_ = 5;
    puStack_bc = (uint *)0x4d07ea;
    FUN_009adb70();
    if (local_7c != (undefined4 *)0x0) {
      puStack_bc = (uint *)0x4d07f9;
      FUN_009e6a80();
      puStack_bc = local_7c;
                    /* WARNING: Subroutine does not return */
      local_c0 = (undefined1 **)&UNK_004d0802;
      FUN_00aae91b();
    }
    local_8 = (uint)local_8._1_3_ << 8;
    local_7c = (undefined4 *)0x0;
    local_78 = (undefined4 *)0x0;
    local_74 = 0;
    if (0xf < local_20) {
      puStack_bc = (uint *)local_34[0];
                    /* WARNING: Subroutine does not return */
      local_c0 = (undefined1 **)&UNK_004d0820;
      FUN_00aae91b();
    }
    puVar5 = (undefined1 *)param_3[0x4b];
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    iVar6 = 0;
    iVar3 = *(int *)(DAT_012587f0 + 0x10) - *(int *)(DAT_012587f0 + 0xc) >> 2;
    local_11 = '\x01';
    local_18 = puVar5;
    if (0 < iVar3) {
      do {
        piVar1 = (int *)(*(int *)(puVar5 + 0x6c) + (uint)(byte)puVar5[iVar6 + 0x2c] * 8);
        if (*piVar1 != 0 || piVar1[1] != 0) {
          if (local_11 == '\0') {
            puStack_bc = (uint *)0x2;
            local_c0 = (undefined1 **)&DAT_00df8148;
            puStack_c4 = (uint *)0x4d0876;
            FUN_00448740();
          }
          local_c0 = *(undefined1 ***)(*(int *)(DAT_012587f0 + 0xc) + iVar6 * 4);
          puStack_bc = local_50;
          puStack_c4 = (uint *)0x4d088c;
          puStack_c4 = (uint *)FUN_005659c0();
          puStack_bc = (uint *)0xffffffff;
          local_c0 = (undefined1 **)0x0;
          local_8 = 6;
          local_c8 = (uint *)0x4d089f;
          FUN_00448aa0();
          local_8 = local_8 & 0xffffff00;
          if (0xf < local_3c) {
            puStack_bc = (uint *)local_50[0];
                    /* WARNING: Subroutine does not return */
            local_c0 = (undefined1 **)&UNK_004d08b1;
            FUN_00aae91b();
          }
          local_11 = '\0';
          puVar5 = local_18;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar3);
    }
    puStack_bc = (uint *)0x1;
    local_c0 = (undefined1 **)&DAT_00dee2cc;
    puStack_c4 = (uint *)0x4d08ce;
    FUN_00448740();
  }
  else if (*(char *)(param_3[0x4b] + 0x7c) != '\0') {
    puStack_bc = (uint *)0x4d08ea;
    cVar2 = FUN_004d0fd0();
    if (cVar2 == '\0') {
      local_18 = local_d4;
      local_c0 = (undefined1 **)0xf;
      puStack_c4 = (uint *)0x0;
      local_d4[0] = 0;
      FUN_00409350(&DAT_00dedc20);
      puStack_c4 = (uint *)FUN_009c98f0(local_50);
      puStack_bc = (uint *)0xffffffff;
      local_c0 = (undefined1 **)0x0;
      local_8 = 7;
      local_c8 = (uint *)0x4d0932;
      FUN_00448aa0();
      local_8 = local_8 & 0xffffff00;
      if (0xf < local_3c) {
        puStack_bc = (uint *)local_50[0];
                    /* WARNING: Subroutine does not return */
        local_c0 = (undefined1 **)&UNK_004d0944;
        FUN_00aae91b();
      }
      puStack_bc = (uint *)0x19;
      local_c0 = (undefined1 **)0xdfd670;
      local_20 = 0xf;
      local_24 = 0;
      local_34[0] = local_34[0] & 0xffffff00;
      puStack_c4 = (uint *)0x4d095f;
      FUN_00409350();
      puStack_bc = local_34;
      local_c0 = (undefined1 **)local_80;
      local_8 = 8;
      puStack_c4 = (uint *)0x4d0973;
      FUN_009a8ee0();
      local_8._0_1_ = 9;
      puStack_bc = (uint *)0x4d097e;
      iVar3 = FUN_00475500();
      local_c8 = (uint *)*(undefined8 *)(iVar3 + 0x6c);
      puStack_c4 = (uint *)((ulonglong)*(undefined8 *)(iVar3 + 0x6c) >> 0x20);
      local_c0 = (undefined1 **)*(undefined8 *)(iVar3 + 0x74);
      puStack_bc = (uint *)((ulonglong)*(undefined8 *)(iVar3 + 0x74) >> 0x20);
      uStack_cc = 0x4d09a0;
      puStack_c4 = (uint *)FUN_009a9880();
      puStack_bc = (uint *)0xffffffff;
      local_c0 = (undefined1 **)0x0;
      local_8._0_1_ = 10;
      local_c8 = (uint *)0x4d09b0;
      FUN_00448aa0();
      if (0xf < local_58) {
        puStack_bc = (uint *)local_6c[0];
                    /* WARNING: Subroutine does not return */
        local_c0 = (undefined1 **)&UNK_004d09c3;
        FUN_00aae91b();
      }
      puStack_bc = (uint *)local_80;
      local_58 = 0xf;
      local_5c = 0;
      local_6c[0] = local_6c[0] & 0xffffff00;
      local_8._0_1_ = 8;
      local_c0 = (undefined1 **)0x4d09e0;
      FUN_009a9740();
      local_8 = (uint)local_8._1_3_ << 8;
      if (0xf < local_20) {
        puStack_bc = (uint *)local_34[0];
                    /* WARNING: Subroutine does not return */
        local_c0 = (undefined1 **)&UNK_004d09f1;
        FUN_00aae91b();
      }
    }
  }
  local_18 = local_d4;
  local_c0 = (undefined1 **)0xf;
  puStack_c4 = (uint *)0x0;
  local_d4[0] = 0;
  FUN_00409350(&DAT_00dedc20);
  puStack_c4 = (uint *)FUN_009c98f0(local_50);
  puStack_bc = (uint *)0xffffffff;
  local_c0 = (undefined1 **)0x0;
  local_8 = 0xb;
  local_c8 = (uint *)0x4d0a43;
  FUN_00448aa0();
  local_8 = local_8 & 0xffffff00;
  if (0xf < local_3c) {
    puStack_bc = (uint *)local_50[0];
                    /* WARNING: Subroutine does not return */
    local_c0 = (undefined1 **)&UNK_004d0a55;
    FUN_00aae91b();
  }
  local_18 = *(undefined1 **)(param_1 + 0x68);
  puStack_bc = (uint *)&DAT_00defcec;
  local_c0 = &local_18;
  local_c8 = local_50;
  puStack_c4 = (uint *)0xdfcb48;
  uStack_cc = 0x4d0a7a;
  puStack_c4 = (uint *)FUN_004d6040();
  puStack_bc = (uint *)0xffffffff;
  local_c0 = (undefined1 **)0x0;
  local_8 = 0xc;
  local_c8 = (uint *)0x4d0a8f;
  FUN_00448aa0();
  local_8 = local_8 & 0xffffff00;
  if (0xf < local_3c) {
    puStack_bc = (uint *)local_50[0];
                    /* WARNING: Subroutine does not return */
    local_c0 = (undefined1 **)&UNK_004d0aa1;
    FUN_00aae91b();
  }
  local_11 = 0;
  iVar3 = *(int *)(param_1 + 0x60);
  do {
    if (iVar3 == 0) goto LAB_004d0acf;
    piVar1 = (int *)(iVar3 + 0x18);
    iVar3 = *(int *)(iVar3 + 0x224);
  } while ((int *)*piVar1 != param_3);
  local_11 = 1;
LAB_004d0acf:
  local_c0 = (undefined1 **)0xf;
  puStack_c4 = (uint *)0x0;
  local_d4[0] = 0;
  FUN_00409350(&DAT_00dedc20);
  puStack_c4 = (uint *)FUN_009c98f0(local_50);
  puStack_bc = (uint *)0xffffffff;
  local_c0 = (undefined1 **)0x0;
  local_8 = 0xd;
  local_c8 = (uint *)0x4d0b17;
  FUN_00448aa0();
  local_8 = local_8 & 0xffffff00;
  if (0xf < local_3c) {
    puStack_bc = (uint *)local_50[0];
                    /* WARNING: Subroutine does not return */
    local_c0 = (undefined1 **)&UNK_004d0b29;
    FUN_00aae91b();
  }
  puStack_bc = (uint *)0x1;
  local_c0 = (undefined1 **)&DAT_00dee2cc;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  puStack_c4 = (uint *)0x4d0b48;
  FUN_00409350();
  local_8 = 0xe;
  puStack_bc = local_a8;
  local_c0 = (undefined1 **)0x4d0b5f;
  local_c0 = (undefined1 **)(**(code **)(*param_3 + 0x18))();
  puStack_c4 = local_88;
  local_8._0_1_ = 0xf;
  local_c8 = (uint *)0x4d0b7a;
  FUN_0042c180();
  local_c0 = (undefined1 **)local_34;
  local_8._0_1_ = 0x10;
  puStack_c4 = (uint *)0x4d0b8f;
  local_c8 = (uint *)FUN_00988f20();
  local_c0 = (undefined1 **)0xffffffff;
  local_8._0_1_ = 0x11;
  puStack_c4 = (uint *)0x0;
  uStack_cc = 0x4d0ba1;
  FUN_00448aa0();
  if (0xf < local_58) {
    local_c0 = (undefined1 **)local_6c[0];
                    /* WARNING: Subroutine does not return */
    puStack_c4 = (uint *)&UNK_004d0bb4;
    FUN_00aae91b();
  }
  local_58 = 0xf;
  local_5c = 0;
  local_6c[0] = local_6c[0] & 0xffffff00;
  if (0xf < local_74) {
    local_c0 = (undefined1 **)local_88[0];
                    /* WARNING: Subroutine does not return */
    puStack_c4 = (uint *)&UNK_004d0bd5;
    FUN_00aae91b();
  }
  local_74 = 0xf;
  local_78 = (undefined4 *)0x0;
  local_88[0] = local_88[0] & 0xffffff00;
  if (0xf < local_94) {
    local_c0 = (undefined1 **)local_a8[0];
                    /* WARNING: Subroutine does not return */
    puStack_c4 = (uint *)&UNK_004d0bfc;
    FUN_00aae91b();
  }
  local_8 = (uint)local_8._1_3_ << 8;
  local_94 = 0xf;
  local_98 = 0;
  local_a8[0] = local_a8[0] & 0xffffff00;
  if (0xf < local_20) {
    local_c0 = (undefined1 **)local_34[0];
                    /* WARNING: Subroutine does not return */
    puStack_c4 = (uint *)&UNK_004d0c26;
    FUN_00aae91b();
  }
  puStack_c4 = (uint *)0xf;
  local_c8 = (uint *)0x0;
  FUN_00409350(&DAT_00dedc20,2);
  local_c8 = (uint *)FUN_009c98f0(local_50,*(int *)(param_1 + 0x84) < 1);
  local_c0 = (undefined1 **)0xffffffff;
  puStack_c4 = (uint *)0x0;
  local_8 = 0x12;
  uStack_cc = 0x4d0c7c;
  FUN_00448aa0();
  local_8 = local_8 & 0xffffff00;
  if (0xf < local_3c) {
    local_c0 = (undefined1 **)local_50[0];
                    /* WARNING: Subroutine does not return */
    puStack_c4 = (uint *)&UNK_004d0c8d;
    FUN_00aae91b();
  }
  local_c0 = (undefined1 **)0x1;
  puStack_c4 = (uint *)&DAT_00dee2cc;
  local_58 = 0xf;
  local_5c = 0;
  local_6c[0] = local_6c[0] & 0xffffff00;
  local_c8 = (uint *)0x4d0cad;
  FUN_00409350();
  local_8 = 0x13;
  local_c0 = (undefined1 **)0xe;
  puStack_c4 = (uint *)0xdfd6d4;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  local_c8 = (uint *)0x4d0ccc;
  FUN_00409350();
  local_c0 = (undefined1 **)local_34;
  puStack_c4 = (uint *)local_80;
  local_8._0_1_ = 0x14;
  local_c8 = (uint *)0x4d0cdd;
  FUN_009a8ee0();
  local_8._0_1_ = 0x15;
  puVar4 = DAT_0125b5e0;
  if (DAT_0125b5e0 == (undefined4 *)0x0) {
    local_c0 = (undefined1 **)0x180;
    puStack_c4 = (uint *)0x4d0cf7;
    local_c0 = (undefined1 **)FUN_00aae9af();
    local_8._0_1_ = 0x16;
    if (local_c0 == (undefined1 **)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puStack_c4 = (uint *)0x4d0d0b;
      puVar4 = (undefined4 *)FUN_00475150();
    }
    local_8._0_1_ = 0x17;
    if ((puVar4 != DAT_0125b5e0) && (DAT_0125b5e0 != (undefined4 *)0x0)) {
      local_c0 = (undefined1 **)0x1;
      puStack_c4 = (uint *)0x4d0d2e;
      (**(code **)*DAT_0125b5e0)();
    }
  }
  DAT_0125b5e0 = puVar4;
  local_8._0_1_ = 0x15;
  uStack_cc = (undefined4)*(undefined8 *)(DAT_0125b5e0 + 0x1b);
  local_c8 = (uint *)((ulonglong)*(undefined8 *)(DAT_0125b5e0 + 0x1b) >> 0x20);
  puStack_c4 = (uint *)*(undefined8 *)(DAT_0125b5e0 + 0x1d);
  local_c0 = (undefined1 **)((ulonglong)*(undefined8 *)(DAT_0125b5e0 + 0x1d) >> 0x20);
  uStack_d0 = 0x4d0d5c;
  FUN_009a9880();
  local_c0 = (undefined1 **)local_6c;
  local_8._0_1_ = 0x18;
  puStack_c4 = (uint *)0x4d0d71;
  local_c8 = (uint *)FUN_00988f20();
  local_c0 = (undefined1 **)0xffffffff;
  puStack_c4 = (uint *)0x0;
  local_8._0_1_ = 0x19;
  uStack_cc = 0x4d0d80;
  FUN_00448aa0();
  if (0xf < local_94) {
    local_c0 = (undefined1 **)local_a8[0];
                    /* WARNING: Subroutine does not return */
    puStack_c4 = (uint *)&UNK_004d0d99;
    FUN_00aae91b();
  }
  local_94 = 0xf;
  local_98 = 0;
  local_a8[0] = local_a8[0] & 0xffffff00;
  if (0xf < local_3c) {
    local_c0 = (undefined1 **)local_50[0];
                    /* WARNING: Subroutine does not return */
    puStack_c4 = (uint *)&UNK_004d0dc1;
    FUN_00aae91b();
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  local_8 = CONCAT31(local_8._1_3_,0x1a);
  local_c0 = (undefined1 **)0x4d0dd9;
  FUN_009adb70();
  puVar4 = local_7c;
  if (local_7c != (undefined4 *)0x0) {
    while( true ) {
      if (puVar4 == local_78) {
        local_c0 = (undefined1 **)local_7c;
                    /* WARNING: Subroutine does not return */
        puStack_c4 = (uint *)&UNK_004d0e14;
        FUN_00aae91b();
      }
      if (0xf < (uint)puVar4[5]) break;
      puVar4[5] = 0xf;
      puVar4[4] = 0;
      *(undefined1 *)puVar4 = 0;
      puVar4 = puVar4 + 8;
    }
    local_c0 = (undefined1 **)*puVar4;
                    /* WARNING: Subroutine does not return */
    puStack_c4 = (uint *)&UNK_004d0df5;
    FUN_00aae91b();
  }
  local_7c = (undefined4 *)0x0;
  local_78 = (undefined4 *)0x0;
  local_74 = 0;
  if (0xf < local_20) {
    local_c0 = (undefined1 **)local_34[0];
                    /* WARNING: Subroutine does not return */
    puStack_c4 = (uint *)&UNK_004d0e33;
    FUN_00aae91b();
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  if (0xf < local_58) {
    local_c0 = (undefined1 **)local_6c[0];
                    /* WARNING: Subroutine does not return */
    puStack_c4 = (uint *)&UNK_004d0e51;
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_2;
}

