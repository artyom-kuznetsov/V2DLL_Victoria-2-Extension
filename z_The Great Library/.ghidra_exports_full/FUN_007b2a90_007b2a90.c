// FUN_007b2a90 @ 007b2a90 body=[[007b2a90, 007b2b22] [007b2b26, 007b2c29] [007b2c2d, 007b2c68] [007b2c6c, 007b2c92] [007b2c96, 007b2cc2] [007b2ccb, 007b2d46] [007b2d4f, 007b2ee9] [007b2eed, 007b2f13] [007b2f17, 007b2f57] [007b2f5b, 007b2f7b] [007b2f7f, 007b2fa2] [007b2fa6, 007b2fcf] [007b2fd3, 007b3177] [007b317b, 007b31aa] [007b31ae, 007b31d8] [007b31dc, 007b3206] [007b320a, 007b324a] [007b324e, 007b3271] [007b3275, 007b32a1] [007b32a5, 007b32c9] [007b32cd, 007b32e8] [007b32ec, 007b330f] [007b3313, 007b332c] [007b3330, 007b3377] [007b337b, 007b33db] [007b33df, 007b34e1] [007b34e5, 007b350f] [007b3513, 007b3608] [007b360c, 007b363a] [007b363e, 007b3652]]


void FUN_007b2a90(void)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  int in_ECX;
  undefined4 unaff_EDI;
  uint uStack_194;
  uint local_190;
  uint uStack_18c;
  undefined4 uStack_188;
  uint uStack_184;
  int aiStack_180 [6];
  uint uStack_168;
  undefined4 uStack_164;
  uint uStack_160;
  uint uStack_15c;
  uint uStack_158;
  uint uStack_154;
  undefined1 auStack_150 [8];
  uint uStack_148;
  uint uStack_144;
  uint local_140;
  uint uStack_13c;
  uint uStack_138;
  uint auStack_134 [7];
  uint uStack_118;
  uint uStack_114;
  undefined1 uStack_110;
  undefined4 uStack_108;
  uint uStack_104;
  char *pcStack_100;
  char *pcStack_fc;
  char *pcStack_f8;
  uint uStack_f4;
  uint uStack_f0;
  undefined4 uStack_e4;
  uint uStack_e0;
  uint uStack_dc;
  undefined4 ****ppppuStack_d0;
  undefined4 uStack_cc;
  undefined1 auStack_c4 [8];
  uint uStack_bc;
  uint uStack_b8;
  undefined1 auStack_b4 [8];
  undefined4 uStack_ac;
  uint uStack_a8;
  undefined4 ****ppppuStack_98;
  uint auStack_94 [4];
  uint uStack_84;
  uint uStack_80;
  undefined4 uStack_74;
  uint uStack_70;
  uint uStack_68;
  undefined4 uStack_58;
  uint uStack_54;
  uint uStack_4c;
  undefined1 auStack_44 [8];
  undefined4 uStack_3c;
  uint uStack_38;
  undefined1 uStack_24;
  void *pvStack_20;
  undefined1 uStack_1c;
  undefined1 uStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b7a612;
  pvStack_14 = ExceptionList;
  auStack_134[2] = 0xf;
  auStack_134[1] = 0;
  local_140 = local_140 & 0xffffff00;
  ExceptionList = &pvStack_14;
  local_190 = in_ECX;
  FUN_00409350("username_box",0xc);
  local_c = 0;
  iVar3 = (**(code **)(**(int **)(**(int **)(in_ECX + 0x74) + 4) + 0x40))(&local_140);
  (**(code **)(*(int *)(iVar3 + 0x54) + 0x4c))(auStack_c4);
  pvStack_14._0_1_ = 2;
  if (0xf < auStack_134[0]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  auStack_134[0] = 0xf;
  uStack_138 = 0;
  uStack_148 = uStack_148 & 0xffffff00;
  if (uStack_b8 == 0) {
    aiStack_180[0] = 0xf;
    uStack_184 = 0;
    uStack_194 = uStack_194 & 0xffffff00;
    FUN_00409350("MS_EMPTY_USERNAME",0x11);
    pvStack_14._0_1_ = 3;
    pcStack_fc = (char *)0xf;
    pcStack_100 = (char *)0x0;
    uStack_110 = 0;
    FUN_00409350("status_label",0xc);
    pvStack_14._0_1_ = 4;
    piVar2 = *(int **)(**(int **)(in_ECX + 0x74) + 4);
    uVar4 = FUN_009a8ee0(aiStack_180 + 2,&uStack_194);
    pvStack_14._0_1_ = 5;
    iVar3 = FUN_00475500();
    uVar5 = FUN_009a9880((int)*(undefined8 *)(iVar3 + 0x6c),
                         (int)((ulonglong)*(undefined8 *)(iVar3 + 0x6c) >> 0x20),
                         *(undefined8 *)(iVar3 + 0x74));
    pvStack_14 = (void *)CONCAT31(pvStack_14._1_3_,6);
    (**(code **)(*piVar2 + 0x3c))();
    FUN_00408ed0(uVar5,0,0xffffffff);
    FUN_00a5ecc0(uVar5,0);
    if (0xf < uStack_154) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_168);
    }
    uStack_154 = 0xf;
    uStack_158 = 0;
    uStack_168 = uStack_168 & 0xffffff00;
    uStack_18 = 7;
    FUN_009adb70();
    if (aiStack_180[2] != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(aiStack_180[2]);
    }
    aiStack_180[2] = 0;
    aiStack_180[3] = 0;
    aiStack_180[4] = 0;
    if (0xf < pcStack_100) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_114);
    }
    pcStack_100 = (char *)0xf;
    uStack_104 = 0;
    uStack_114 = uStack_114 & 0xffffff00;
    if (0xf < uStack_184) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uVar4);
    }
  }
  else {
    pcStack_fc = (char *)0xf;
    pcStack_100 = (char *)0x0;
    uStack_110 = 0;
    FUN_00409350("password_box",0xc);
    pvStack_14 = (void *)CONCAT31(pvStack_14._1_3_,8);
    iVar3 = (**(code **)(**(int **)(**(int **)(in_ECX + 0x74) + 4) + 0x40))();
    (**(code **)(*(int *)(iVar3 + 0x54) + 0x4c))(auStack_94);
    uStack_1c = 10;
    if (0xf < uStack_104) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_118);
    }
    uStack_104 = 0xf;
    uStack_108 = 0;
    uStack_118 = uStack_118 & 0xffffff00;
    if (uStack_84 < 0x10) {
      ppppuStack_98 = &ppppuStack_98;
    }
    if (uStack_bc < 0x10) {
      ppppuStack_d0 = &ppppuStack_d0;
    }
    iVar3 = (**(code **)(in_ECX + 0x1a0))(&pcStack_fc,ppppuStack_d0,ppppuStack_98);
    if (iVar3 == 0) {
      uStack_188 = 0xf;
      uStack_18c = 0;
      FUN_00409350("MS_LOGGED_AS",0xc);
      uStack_1c = 0xb;
      auStack_134[5] = 0xf;
      auStack_134[4] = 0;
      auStack_134[0] = auStack_134[0] & 0xffffff00;
      FUN_00409350("logged_label",0xc);
      uStack_1c = 0xc;
      uStack_13c = 0xf;
      local_140 = 0;
      auStack_150[0] = 0;
      pcVar6 = pcStack_f8;
      do {
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      FUN_00409350(pcStack_f8,(int)pcVar6 - (int)(pcStack_f8 + 1));
      uStack_1c = 0xd;
      iVar3 = FUN_009a8ee0(aiStack_180,&stack0xfffffe64);
      uStack_1c = 0xe;
      iVar7 = FUN_00475500();
      FUN_009a9880((int)*(undefined8 *)(iVar7 + 0x6c),
                   (int)((ulonglong)*(undefined8 *)(iVar7 + 0x6c) >> 0x20),
                   (int)*(undefined8 *)(iVar7 + 0x74),
                   (int)((ulonglong)*(undefined8 *)(iVar7 + 0x74) >> 0x20));
      uStack_1c = 0xf;
      uVar4 = FUN_00988f20(auStack_150);
      uStack_1c = 0x10;
      (**(code **)(**(int **)(in_ECX + 0x20) + 0x3c))(auStack_134);
      FUN_00408ed0(uVar4,0,0xffffffff);
      FUN_00a5ecc0(uVar4,0);
      if (0xf < uStack_15c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(aiStack_180[4]);
      }
      uStack_15c = 0xf;
      uStack_160 = 0;
      aiStack_180[4] = aiStack_180[4] & 0xffffff00;
      if (0xf < uStack_dc) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(uStack_f0);
      }
      uStack_dc = 0xf;
      uStack_e0 = 0;
      uStack_f0 = uStack_f0 & 0xffffff00;
      pvStack_20._0_1_ = 0x11;
      FUN_009adb70();
      if (aiStack_180[0] != 0) {
        FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(aiStack_180[0]);
      }
      aiStack_180[0] = 0;
      aiStack_180[1] = 0;
      aiStack_180[2] = 0;
      if (0xf < local_140) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(uStack_154);
      }
      local_140 = 0xf;
      uStack_144 = 0;
      uStack_154 = uStack_154 & 0xffffff00;
      if (0xf < auStack_134[4]) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(uStack_138);
      }
      pvStack_20._0_1_ = 10;
      auStack_134[4] = 0xf;
      auStack_134[3] = 0;
      uStack_138 = uStack_138 & 0xffffff00;
      if (0xf < uStack_18c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(unaff_EDI);
      }
      uStack_15c = 0xf;
      uStack_160 = 0;
      aiStack_180[4] = aiStack_180[4] & 0xffffff00;
      FUN_00409350("MS_CREDITS",10);
      pvStack_20._0_1_ = 0x12;
      uStack_18c = 0xf;
      local_190 = 0;
      FUN_00409350("coins_label",0xb);
      pvStack_20._0_1_ = 0x13;
      local_140 = 0xf;
      uStack_144 = 0;
      uStack_154 = uStack_154 & 0xffffff00;
      FUN_00409350(&DAT_00df8514,2);
      pvStack_20._0_1_ = 0x14;
      uVar4 = FUN_009888f0(&uStack_b8);
      pvStack_20._0_1_ = 0x15;
      auStack_134[4] = 0xf;
      auStack_134[3] = 0;
      uStack_138 = uStack_138 & 0xffffff00;
      FUN_00409350(&DAT_00df963c,2);
      pvStack_20._0_1_ = 0x16;
      iVar7 = FUN_009a8ee0(&uStack_184,aiStack_180 + 4);
      pvStack_20._0_1_ = 0x17;
      iVar8 = FUN_00475500();
      FUN_009a9880((int)*(undefined8 *)(iVar8 + 0x6c),
                   (int)((ulonglong)*(undefined8 *)(iVar8 + 0x6c) >> 0x20),
                   (int)*(undefined8 *)(iVar8 + 0x74),
                   (int)((ulonglong)*(undefined8 *)(iVar8 + 0x74) >> 0x20));
      pvStack_20._0_1_ = 0x18;
      FUN_00988f20(&uStack_138);
      pvStack_20._0_1_ = 0x19;
      FUN_00988f20(uVar4);
      pvStack_20._0_1_ = 0x1a;
      uVar4 = FUN_00988f20(&uStack_154);
      pvStack_20 = (void *)CONCAT31(pvStack_20._1_3_,0x1b);
      (**(code **)(**(int **)(iVar3 + 0x20) + 0x3c))(&stack0xfffffe60);
      FUN_00408ed0(uVar4,0,0xffffffff);
      FUN_00a5ecc0(uVar4,0);
      if (0xf < uStack_e0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(uStack_f4);
      }
      uStack_e0 = 0xf;
      uStack_e4 = 0;
      uStack_f4 = uStack_f4 & 0xffffff00;
      if (0xf < uStack_38) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(uStack_4c);
      }
      uStack_38 = 0xf;
      uStack_3c = 0;
      uStack_4c = uStack_4c & 0xffffff00;
      if (0xf < uStack_70) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(uStack_84);
      }
      uStack_70 = 0xf;
      uStack_74 = 0;
      uStack_84 = uStack_84 & 0xffffff00;
      if (0xf < uStack_54) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(uStack_68);
      }
      uStack_54 = 0xf;
      uStack_58 = 0;
      uStack_68 = uStack_68 & 0xffffff00;
      uStack_24 = 0x1c;
      FUN_009adb70();
      if (uStack_184 != 0) {
        FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(uStack_184);
      }
      uStack_184 = 0;
      aiStack_180[0] = 0;
      aiStack_180[1] = 0;
      if (0xf < auStack_134[3]) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(uStack_13c);
      }
      auStack_134[3] = 0xf;
      auStack_134[2] = 0;
      uStack_13c = uStack_13c & 0xffffff00;
      if (0xf < uStack_a8) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(uStack_bc);
      }
      uStack_a8 = 0xf;
      uStack_ac = 0;
      uStack_bc = uStack_bc & 0xffffff00;
      if (0xf < uStack_144) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(uStack_158);
      }
      uStack_144 = 0xf;
      uStack_148 = 0;
      uStack_158 = uStack_158 & 0xffffff00;
      if (0xf < local_190) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(iVar3);
      }
      uStack_24 = 10;
      local_190 = 0xf;
      uStack_194 = 0;
      if (0xf < uStack_160) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(aiStack_180[3]);
      }
      uStack_160 = 0xf;
      uStack_164 = 0;
      aiStack_180[3] = aiStack_180[3] & 0xffffff00;
      pcVar6 = pcStack_100;
      do {
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      FUN_00409350(pcStack_100,(int)pcVar6 - (int)(pcStack_100 + 1));
      uStack_24 = 0x1d;
      FUN_00408ed0(aiStack_180 + 3,0,0xffffffff);
      uStack_24 = 10;
      if (0xf < uStack_160) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(aiStack_180[3]);
      }
      uStack_160 = 0xf;
      uStack_164 = 0;
      aiStack_180[3] = aiStack_180[3] & 0xffffff00;
      pcVar6 = pcStack_fc;
      do {
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      FUN_00409350(pcStack_fc,(int)pcVar6 - (int)(pcStack_fc + 1));
      uStack_24 = 0x1e;
      FUN_00408ed0(aiStack_180 + 3,0,0xffffffff);
      uStack_24 = 10;
      if (0xf < uStack_160) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(aiStack_180[3]);
      }
      *(char **)(iVar7 + 0x5c) = pcStack_f8;
      (**(code **)(iVar7 + 0x1bc))(pcStack_100);
      (**(code **)(iVar7 + 0x1bc))(pcStack_fc);
      FUN_007b3680(1);
    }
    else if (iVar3 == 2) {
      auStack_134[5] = 0xf;
      auStack_134[4] = 0;
      auStack_134[0] = auStack_134[0] & 0xffffff00;
      pcVar6 = pcStack_fc;
      do {
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      FUN_00409350(pcStack_fc,(int)pcVar6 - (int)(pcStack_fc + 1));
      uStack_1c = 0x1f;
      uStack_188 = 0xf;
      uStack_18c = 0;
      FUN_00409350("status_label",0xc);
      uStack_1c = 0x20;
      (**(code **)(**(int **)(**(int **)(in_ECX + 0x74) + 4) + 0x3c))(&stack0xfffffe64);
      FUN_00408ed0(&uStack_138,0,0xffffffff);
      FUN_00a5ecc0(&uStack_138,0);
      if (0xf < uStack_18c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(unaff_EDI);
      }
      pvStack_20 = (void *)CONCAT31(pvStack_20._1_3_,10);
      uStack_18c = 0xf;
      local_190 = 0;
      if (0xf < auStack_134[4]) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(uStack_138);
      }
      (**(code **)(in_ECX + 0x1bc))(pcStack_100);
    }
    else {
      FUN_009885d0();
      uStack_1c = 0x21;
      piVar2 = *(int **)(**(int **)(in_ECX + 0x74) + 4);
      uVar4 = FUN_007b1800(auStack_44,iVar3);
      uStack_1c = 0x22;
      FUN_009885d0();
      uStack_1c = 0x23;
      FUN_00988f20(uVar4);
      uStack_1c = 0x24;
      (**(code **)(*piVar2 + 0x3c))(auStack_b4,0);
      FUN_009a67d0();
      FUN_00408ad0();
      FUN_00408ad0();
      FUN_00408ad0();
      FUN_00408ad0();
    }
    if (0xf < uStack_80) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(auStack_94[0]);
    }
    uStack_80 = 0xf;
    uStack_84 = 0;
    auStack_94[0] = auStack_94[0] & 0xffffff00;
  }
  if (uStack_b8 < 0x10) {
    ExceptionList = pvStack_20;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(uStack_cc);
}

