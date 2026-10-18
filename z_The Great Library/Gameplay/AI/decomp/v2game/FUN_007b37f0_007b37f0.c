// FUN_007b37f0 @ 007b37f0 body=[[007b37f0, 007b3980] [007b3984, 007b39b3] [007b39b7, 007b39f7] [007b39fb, 007b3a1b] [007b3a1f, 007b3a3f] [007b3a43, 007b3a69] [007b3a6d, 007b3bad] [007b3bb1, 007b3be0] [007b3be4, 007b3c24] [007b3c28, 007b3c48] [007b3c4c, 007b3c6c] [007b3c70, 007b3c96] [007b3c9a, 007b3df4] [007b3df8, 007b3e27] [007b3e2b, 007b3e6b] [007b3e6f, 007b3e8f] [007b3e93, 007b3eb3] [007b3eb7, 007b3edd] [007b3ee1, 007b40ba] [007b40be, 007b40ed] [007b40f1, 007b411b] [007b411f, 007b4149] [007b414d, 007b4199] [007b419d, 007b41cc] [007b41d0, 007b41ff] [007b4203, 007b422d] [007b4231, 007b425b] [007b425f, 007b42a3]]


void FUN_007b37f0(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iStack_1e4;
  int aiStack_1dc [4];
  uint uStack_1cc;
  undefined1 auStack_1c8 [12];
  undefined4 uStack_1bc;
  uint uStack_1b8;
  undefined4 uStack_1b4;
  uint uStack_1ac;
  undefined1 auStack_1a8 [12];
  undefined4 uStack_19c;
  uint uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined1 auStack_18c [16];
  uint uStack_17c;
  undefined4 uStack_178;
  uint uStack_174;
  undefined4 uStack_164;
  uint uStack_160;
  uint uStack_158;
  undefined4 uStack_148;
  uint uStack_144;
  undefined4 uStack_138;
  char *local_134;
  char *pcStack_130;
  undefined1 auStack_12c [4];
  int iStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  uint auStack_118 [4];
  undefined4 uStack_108;
  uint uStack_104;
  uint auStack_fc [4];
  undefined4 uStack_ec;
  uint uStack_e8;
  uint auStack_e0 [4];
  undefined4 uStack_d0;
  uint uStack_cc;
  uint auStack_c4 [4];
  undefined4 uStack_b4;
  uint uStack_b0;
  uint uStack_a8;
  undefined4 uStack_98;
  uint uStack_94;
  uint uStack_8c;
  undefined4 uStack_7c;
  uint uStack_78;
  uint uStack_70;
  undefined4 uStack_60;
  uint uStack_5c;
  uint uStack_54;
  undefined4 uStack_44;
  uint uStack_40;
  uint auStack_38 [4];
  undefined4 uStack_28;
  uint uStack_24;
  void *pvStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b7a48c;
  pvStack_14 = ExceptionList;
  piVar2 = (int *)(param_1 + 0x40);
  if (0xf < *(uint *)(param_1 + 0x54)) {
    piVar2 = (int *)*piVar2;
  }
  ExceptionList = &pvStack_14;
  iVar3 = (**(code **)(param_1 + 0x1a4))(&local_134,piVar2);
  uStack_17c = 0;
  auStack_18c[0] = 0;
  if (iVar3 == 2) {
    uStack_178 = 0xf;
    FUN_00409350("ME_ERROR",8);
    uStack_c = 0;
    uStack_1b4 = 0xf;
    uStack_1b8 = 0;
    auStack_1c8[0] = 0;
    FUN_00409350("status_label",0xc);
    uStack_c._0_1_ = 1;
    piVar2 = *(int **)(param_1 + 0x20);
    uStack_194 = 0xf;
    uStack_198 = 0;
    auStack_1a8[0] = 0;
    pcVar4 = local_134;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    FUN_00409350(local_134,(int)pcVar4 - (int)(local_134 + 1));
    uStack_c._0_1_ = 2;
    uStack_1ac = FUN_009a8ee0(aiStack_1dc,auStack_18c);
    uStack_c._0_1_ = 3;
    iVar3 = FUN_00475500();
    FUN_009a9880((int)*(undefined8 *)(iVar3 + 0x6c),
                 (int)((ulonglong)*(undefined8 *)(iVar3 + 0x6c) >> 0x20),
                 (int)*(undefined8 *)(iVar3 + 0x74),
                 (int)((ulonglong)*(undefined8 *)(iVar3 + 0x74) >> 0x20));
    uStack_c._0_1_ = 4;
    uVar5 = FUN_00988f20(auStack_1a8);
    uStack_c = CONCAT31(uStack_c._1_3_,5);
    (**(code **)(*piVar2 + 0x3c))(auStack_1c8);
    FUN_00408ed0(uVar5,0,0xffffffff);
    FUN_00a5ecc0(uVar5,0);
    if (0xf < uStack_144) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_158);
    }
    uStack_144 = 0xf;
    uStack_148 = 0;
    uStack_158 = uStack_158 & 0xffffff00;
    if (0xf < uStack_160) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_174);
    }
    uStack_160 = 0xf;
    uStack_164 = 0;
    uStack_174 = uStack_174 & 0xffffff00;
    puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,6);
    FUN_009adb70();
    if (aiStack_1dc[0] != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(aiStack_1dc[0]);
    }
    aiStack_1dc[0] = 0;
    aiStack_1dc[1] = 0;
    aiStack_1dc[2] = 0;
    if (0xf < uStack_198) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_1ac);
    }
    uStack_198 = 0xf;
    uStack_19c = 0;
    uStack_1ac = uStack_1ac & 0xffffff00;
    if (0xf < uStack_1b8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_1cc);
    }
    puStack_10 = (undefined1 *)0xffffffff;
    uStack_1b8 = 0xf;
    uStack_1bc = 0;
    uStack_1cc = uStack_1cc & 0xffffff00;
    if (0xf < uStack_17c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_190);
    }
    (**(code **)(param_1 + 0x1bc))(uStack_138);
  }
  else if (iVar3 == 0) {
    uStack_178 = 0xf;
    FUN_00409350("MS_LOGGED_AS",0xc);
    uStack_c = 0xe;
    uStack_194 = 0xf;
    uStack_198 = 0;
    auStack_1a8[0] = 0;
    FUN_00409350("logged_label",0xc);
    uStack_c._0_1_ = 0xf;
    uStack_1b4 = 0xf;
    uStack_1b8 = 0;
    auStack_1c8[0] = 0;
    pcVar4 = pcStack_130;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    FUN_00409350(pcStack_130,(int)pcVar4 - (int)(pcStack_130 + 1));
    uStack_c._0_1_ = 0x10;
    FUN_009a8ee0(aiStack_1dc,auStack_18c);
    uStack_c._0_1_ = 0x11;
    iVar3 = FUN_00475500();
    FUN_009a9880((int)*(undefined8 *)(iVar3 + 0x6c),
                 (int)((ulonglong)*(undefined8 *)(iVar3 + 0x6c) >> 0x20),
                 (int)*(undefined8 *)(iVar3 + 0x74),
                 (int)((ulonglong)*(undefined8 *)(iVar3 + 0x74) >> 0x20));
    uStack_c._0_1_ = 0x12;
    uVar5 = FUN_00988f20(auStack_1c8);
    uStack_c = CONCAT31(uStack_c._1_3_,0x13);
    (**(code **)(**(int **)(param_1 + 0x20) + 0x3c))(auStack_1a8);
    FUN_00408ed0(uVar5,0,0xffffffff);
    FUN_00a5ecc0(uVar5,0);
    if (0xf < uStack_160) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_174);
    }
    uStack_160 = 0xf;
    uStack_164 = 0;
    uStack_174 = uStack_174 & 0xffffff00;
    if (0xf < uStack_144) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_158);
    }
    uStack_144 = 0xf;
    uStack_148 = 0;
    uStack_158 = uStack_158 & 0xffffff00;
    puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,0x14);
    FUN_009adb70();
    if (aiStack_1dc[0] != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(aiStack_1dc[0]);
    }
    aiStack_1dc[0] = 0;
    aiStack_1dc[1] = 0;
    aiStack_1dc[2] = 0;
    if (0xf < uStack_1b8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_1cc);
    }
    uStack_1b8 = 0xf;
    uStack_1bc = 0;
    uStack_1cc = uStack_1cc & 0xffffff00;
    if (0xf < uStack_198) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_1ac);
    }
    puStack_10 = (undefined1 *)0xffffffff;
    uStack_198 = 0xf;
    uStack_19c = 0;
    uStack_1ac = uStack_1ac & 0xffffff00;
    if (0xf < uStack_17c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_190);
    }
    uStack_b0 = 0xf;
    uStack_b4 = 0;
    auStack_c4[0] = auStack_c4[0] & 0xffffff00;
    FUN_00409350("MS_CREDITS",10);
    puStack_10 = (undefined1 *)0x15;
    uStack_e8 = 0xf;
    uStack_ec = 0;
    auStack_fc[0] = auStack_fc[0] & 0xffffff00;
    FUN_00409350("coins_label",0xb);
    puStack_10._0_1_ = 0x16;
    uStack_104 = 0xf;
    uStack_108 = 0;
    auStack_118[0] = auStack_118[0] & 0xffffff00;
    FUN_00409350(&DAT_00df8514,2);
    puStack_10._0_1_ = 0x17;
    uVar5 = FUN_009888f0(auStack_38);
    puStack_10._0_1_ = 0x18;
    uStack_cc = 0xf;
    uStack_d0 = 0;
    auStack_e0[0] = auStack_e0[0] & 0xffffff00;
    FUN_00409350(&DAT_00df963c,2);
    puStack_10._0_1_ = 0x19;
    FUN_009a8ee0(auStack_12c,auStack_c4);
    puStack_10._0_1_ = 0x1a;
    iVar3 = FUN_00475500();
    FUN_009a9880((int)*(undefined8 *)(iVar3 + 0x6c),
                 (int)((ulonglong)*(undefined8 *)(iVar3 + 0x6c) >> 0x20),
                 (int)*(undefined8 *)(iVar3 + 0x74),
                 (int)((ulonglong)*(undefined8 *)(iVar3 + 0x74) >> 0x20));
    puStack_10._0_1_ = 0x1b;
    FUN_00988f20(auStack_e0);
    puStack_10._0_1_ = 0x1c;
    FUN_00988f20(uVar5);
    puStack_10._0_1_ = 0x1d;
    uVar5 = FUN_00988f20(auStack_118);
    puStack_10._0_1_ = 0x1e;
    (**(code **)(**(int **)(param_1 + 0x20) + 0x3c))(auStack_fc);
    FUN_00408ed0(uVar5,0,0xffffffff);
    FUN_00a5ecc0(uVar5,0);
    if (0xf < uStack_94) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_a8);
    }
    uStack_94 = 0xf;
    uStack_98 = 0;
    uStack_a8 = uStack_a8 & 0xffffff00;
    if (0xf < uStack_40) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_54);
    }
    uStack_40 = 0xf;
    uStack_44 = 0;
    uStack_54 = uStack_54 & 0xffffff00;
    if (0xf < uStack_78) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_8c);
    }
    uStack_78 = 0xf;
    uStack_7c = 0;
    uStack_8c = uStack_8c & 0xffffff00;
    if (0xf < uStack_5c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_70);
    }
    uStack_5c = 0xf;
    uStack_60 = 0;
    uStack_70 = uStack_70 & 0xffffff00;
    puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,0x1f);
    FUN_009adb70();
    if (iStack_128 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(iStack_128);
    }
    iStack_128 = 0;
    uStack_124 = 0;
    uStack_120 = 0;
    if (0xf < uStack_cc) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(auStack_e0[0]);
    }
    uStack_cc = 0xf;
    uStack_d0 = 0;
    auStack_e0[0] = auStack_e0[0] & 0xffffff00;
    if (0xf < uStack_24) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(auStack_38[0]);
    }
    uStack_24 = 0xf;
    uStack_28 = 0;
    auStack_38[0] = auStack_38[0] & 0xffffff00;
    if (0xf < uStack_104) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(auStack_118[0]);
    }
    uStack_104 = 0xf;
    uStack_108 = 0;
    auStack_118[0] = auStack_118[0] & 0xffffff00;
    if (0xf < uStack_e8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(auStack_fc[0]);
    }
    uStack_e8 = 0xf;
    uStack_ec = 0;
    auStack_fc[0] = auStack_fc[0] & 0xffffff00;
    if (0xf < uStack_b0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(auStack_c4[0]);
    }
  }
  else {
    uStack_178 = 0xf;
    FUN_00409350("ME_ERROR",8);
    uStack_c = 7;
    uStack_1b4 = 0xf;
    uStack_1b8 = 0;
    auStack_1c8[0] = 0;
    FUN_00409350("status_label",0xc);
    uStack_c._0_1_ = 8;
    piVar2 = *(int **)(param_1 + 0x20);
    uStack_138 = FUN_007b1800(auStack_1a8,iVar3);
    uStack_c._0_1_ = 9;
    uStack_1ac = FUN_009a8ee0(aiStack_1dc,auStack_18c);
    uStack_c._0_1_ = 10;
    iVar3 = FUN_00475500();
    FUN_009a9880((int)*(undefined8 *)(iVar3 + 0x6c),
                 (int)((ulonglong)*(undefined8 *)(iVar3 + 0x6c) >> 0x20),
                 (int)*(undefined8 *)(iVar3 + 0x74),
                 (int)((ulonglong)*(undefined8 *)(iVar3 + 0x74) >> 0x20));
    uStack_c._0_1_ = 0xb;
    uVar5 = FUN_00988f20(uStack_138);
    uStack_c = CONCAT31(uStack_c._1_3_,0xc);
    (**(code **)(*piVar2 + 0x3c))(auStack_1c8);
    FUN_00408ed0(uVar5,0,0xffffffff);
    FUN_00a5ecc0(uVar5,0);
    if (0xf < uStack_160) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_174);
    }
    uStack_160 = 0xf;
    uStack_164 = 0;
    uStack_174 = uStack_174 & 0xffffff00;
    if (0xf < uStack_144) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_158);
    }
    uStack_144 = 0xf;
    uStack_148 = 0;
    uStack_158 = uStack_158 & 0xffffff00;
    puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,0xd);
    FUN_009adb70();
    if (aiStack_1dc[0] != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(aiStack_1dc[0]);
    }
    aiStack_1dc[0] = 0;
    aiStack_1dc[1] = 0;
    aiStack_1dc[2] = 0;
    if (0xf < uStack_198) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_1ac);
    }
    uStack_198 = 0xf;
    uStack_19c = 0;
    uStack_1ac = uStack_1ac & 0xffffff00;
    if (0xf < uStack_1b8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_1cc);
    }
    puStack_10 = (undefined1 *)0xffffffff;
    uStack_1b8 = 0xf;
    uStack_1bc = 0;
    uStack_1cc = uStack_1cc & 0xffffff00;
    if (0xf < uStack_17c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_190);
    }
    if (iStack_1e4 == 5) {
      FUN_007b3680(0);
      ExceptionList = pvStack_18;
      return;
    }
  }
  ExceptionList = pvStack_18;
  return;
}

