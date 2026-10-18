// FUN_007b6950 @ 007b6950 body=[[007b6950, 007b6a4e] [007b6a52, 007b6ba5] [007b6ba9, 007b6bd8] [007b6bdc, 007b6c1c] [007b6c20, 007b6c46] [007b6c4a, 007b6c73] [007b6c77, 007b6c9d] [007b6ca1, 007b6dfa] [007b6dfe, 007b6e2d] [007b6e31, 007b6e71] [007b6e75, 007b6e9b] [007b6e9f, 007b6ec8] [007b6ecc, 007b6ef2] [007b6ef6, 007b706a] [007b706e, 007b708c] [007b7090, 007b70d8] [007b70dc, 007b7148] [007b714c, 007b71b8] [007b71bc, 007b7274] [007b7278, 007b7340] [007b7344, 007b7380]]


void FUN_007b6950(void)

{
  char cVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  uint in_ECX;
  int unaff_EBX;
  undefined8 uVar7;
  int iStack_1bc;
  int iStack_1b8;
  uint uStack_1b4;
  uint local_1b0 [4];
  uint uStack_1a0;
  uint uStack_19c;
  uint uStack_194;
  uint uStack_190;
  undefined1 auStack_18c [8];
  undefined4 uStack_184;
  uint uStack_180;
  uint uStack_17c;
  undefined4 uStack_178;
  char *pcStack_174;
  int local_170;
  int iStack_16c;
  int aiStack_164 [5];
  uint uStack_150;
  undefined4 *local_14c [3];
  undefined4 uStack_140;
  uint uStack_13c;
  uint uStack_138;
  uint uStack_134;
  undefined1 auStack_130 [12];
  undefined4 uStack_124;
  uint uStack_120;
  undefined4 uStack_11c;
  uint uStack_118;
  undefined4 uStack_108;
  uint uStack_104;
  uint uStack_fc;
  undefined4 uStack_ec;
  uint uStack_e8;
  undefined1 *local_d8;
  undefined *local_d4;
  char *local_d0;
  undefined1 auStack_cc [16];
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b0;
  undefined1 uStack_ac;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined1 uStack_90;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 uStack_74;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined1 uStack_58;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 uStack_3c;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  void *pvStack_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b9e929;
  pvStack_14 = ExceptionList;
  if (DAT_00f0c684 < 0x10) {
    local_14c[0] = &DAT_00f0c670;
  }
  else {
    local_14c[0] = DAT_00f0c670;
  }
  iVar4 = *(int *)(in_ECX + 8);
  piVar2 = (int *)(iVar4 + 0x40);
  local_d8 = &DAT_00df09f4;
  local_d4 = &DAT_00dfac10;
  local_d0 = "filename";
  if (0xf < *(uint *)(iVar4 + 0x54)) {
    piVar2 = (int *)*piVar2;
  }
  ExceptionList = &pvStack_14;
  local_1b0[0] = in_ECX;
  (**(code **)(iVar4 + 0x1a8))(&local_170,piVar2,1,local_14c,3,&local_d8);
  uStack_178 = 0xf;
  uStack_17c = 0;
  auStack_18c[0] = 0;
  FUN_00409350();
  uStack_c = 0;
  piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 4) + 0x7c))(auStack_18c);
  (**(code **)(*piVar2 + 0x5c))();
  puStack_10 = (undefined1 *)0xffffffff;
  if (0xf < uStack_17c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if (iStack_1bc == 2) {
    uStack_19c = 0xf;
    uStack_1a0 = 0;
    local_1b0[0] = (uint)local_1b0[0]._1_3_ << 8;
    FUN_00409350("ME_ERROR",8);
    puStack_10 = (undefined1 *)0x1;
    uStack_17c = 0xf;
    uStack_180 = 0;
    uStack_190 = uStack_190 & 0xffffff00;
    FUN_00409350("status_label",0xc);
    puStack_10._0_1_ = 2;
    piVar2 = *(int **)(*(int *)(in_ECX + 8) + 0x20);
    uStack_11c = 0xf;
    uStack_120 = 0;
    auStack_130[0] = 0;
    pcVar3 = pcStack_174;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    FUN_00409350(pcStack_174,(int)pcVar3 - (int)(pcStack_174 + 1));
    puStack_10._0_1_ = 3;
    FUN_009a8ee0(aiStack_164,local_1b0);
    puStack_10._0_1_ = 4;
    iVar4 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
    puStack_10._0_1_ = 5;
    uVar5 = FUN_00988f20();
    puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,6);
    (**(code **)(*piVar2 + 0x3c))();
    FUN_00408ed0(uVar5,0,0xffffffff);
    FUN_00a5ecc0();
    if (0xf < uStack_e8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_fc);
    }
    uStack_e8 = 0xf;
    uStack_ec = 0;
    uStack_fc = uStack_fc & 0xffffff00;
    if (0xf < uStack_104) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_118);
    }
    uStack_104 = 0xf;
    uStack_108 = 0;
    uStack_118 = uStack_118 & 0xffffff00;
    pvStack_14 = (void *)CONCAT31(pvStack_14._1_3_,7);
    FUN_009adb70();
    if (aiStack_164[0] != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(aiStack_164[0]);
    }
    aiStack_164[0] = 0;
    aiStack_164[1] = 0;
    aiStack_164[2] = 0;
    if (0xf < uStack_120) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_134);
    }
    uStack_120 = 0xf;
    uStack_124 = 0;
    uStack_134 = uStack_134 & 0xffffff00;
    if (0xf < uStack_180) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_194);
    }
    pvStack_14 = (void *)0xffffffff;
    uStack_180 = 0xf;
    uStack_184 = 0;
    uStack_194 = uStack_194 & 0xffffff00;
    if (0xf < uStack_1a0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_1b4);
    }
    (**(code **)(piVar2[2] + 0x1bc))(uStack_178);
    ExceptionList = pvStack_1c;
    return;
  }
  if (iStack_1bc == 0) {
    iStack_1b8 = 0;
    if (0 < local_170) {
      iStack_1bc = 0;
      iVar4 = iStack_16c;
      do {
        if (**(char **)(iStack_1bc + 8 + iVar4) != '1') {
          uStack_b8 = 0xf;
          uStack_bc = 0;
          auStack_cc[0] = 0;
          uStack_98 = 0xf;
          uStack_9c = 0;
          uStack_ac = 0;
          uStack_7c = 0xf;
          uStack_80 = 0;
          uStack_90 = 0;
          uStack_60 = 0xf;
          uStack_64 = 0;
          uStack_74 = 0;
          uStack_44 = 0xf;
          uStack_48 = 0;
          uStack_58 = 0;
          uStack_28 = 0xf;
          uStack_2c = 0;
          uStack_3c = 0;
          puStack_10 = (undefined1 *)0xf;
          pcVar3 = *(char **)(iStack_1bc + iVar4);
          pcVar6 = pcVar3;
          do {
            cVar1 = *pcVar6;
            pcVar6 = pcVar6 + 1;
          } while (cVar1 != '\0');
          FUN_00409350(pcVar3,(int)pcVar6 - (int)(pcVar3 + 1));
          pcVar3 = *(char **)(iStack_1bc + 4 + iStack_16c);
          uStack_138 = 0xf;
          uStack_13c = 0;
          local_14c[0] = (undefined4 *)((uint)local_14c[0] & 0xffffff00);
          pcVar6 = pcVar3;
          do {
            cVar1 = *pcVar6;
            pcVar6 = pcVar6 + 1;
          } while (cVar1 != '\0');
          FUN_00409350(pcVar3,(int)pcVar6 - (int)(pcVar3 + 1));
          uStack_b0 = FUN_00aaf0c5();
          if (0xf < uStack_138) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          pcVar3 = *(char **)(iStack_1bc + 0xc + iStack_16c);
          uStack_19c = 0xf;
          uStack_1a0 = 0;
          local_1b0[0] = local_1b0[0] & 0xffffff00;
          pcVar6 = pcVar3;
          do {
            cVar1 = *pcVar6;
            pcVar6 = pcVar6 + 1;
          } while (cVar1 != '\0');
          FUN_00409350(pcVar3,(int)pcVar6 - (int)(pcVar3 + 1));
          puStack_10._0_1_ = 0x10;
          FUN_00408ed0();
          puStack_10._0_1_ = 0xf;
          if (0xf < uStack_19c) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          pcVar3 = *(char **)(iStack_1bc + 0x10 + iStack_16c);
          uStack_19c = 0xf;
          uStack_1a0 = 0;
          local_1b0[0] = local_1b0[0] & 0xffffff00;
          pcVar6 = pcVar3;
          do {
            cVar1 = *pcVar6;
            pcVar6 = pcVar6 + 1;
          } while (cVar1 != '\0');
          FUN_00409350(pcVar3,(int)pcVar6 - (int)(pcVar3 + 1));
          puStack_10._0_1_ = 0x11;
          FUN_00408ed0();
          puStack_10._0_1_ = 0xf;
          if (0xf < uStack_19c) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          pcVar3 = *(char **)(iStack_1bc + 0x14 + iStack_16c);
          uStack_19c = 0xf;
          uStack_1a0 = 0;
          local_1b0[0] = local_1b0[0] & 0xffffff00;
          pcVar6 = pcVar3;
          do {
            cVar1 = *pcVar6;
            pcVar6 = pcVar6 + 1;
          } while (cVar1 != '\0');
          FUN_00409350(pcVar3,(int)pcVar6 - (int)(pcVar3 + 1));
          puStack_10._0_1_ = 0x12;
          FUN_00408ed0();
          puStack_10._0_1_ = 0xf;
          if (0xf < uStack_19c) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          pcVar3 = (char *)FUN_00aae9af();
          puStack_10._0_1_ = 0x13;
          local_d0 = pcVar3;
          if (pcVar3 != (char *)0x0) {
            uStack_194 = DAT_01258a80;
            uVar7 = CONCAT44(uStack_1b4,auStack_cc);
            uVar5 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x3c))(auStack_cc);
            FUN_007b4910(pcVar3,uStack_194,uVar5,uVar7);
          }
          puStack_10._0_1_ = 0xf;
          uStack_19c = 0xf;
          uStack_1a0 = 0;
          local_1b0[0] = local_1b0[0] & 0xffffff00;
          FUN_00409350("items_list",10);
          puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,0x14);
          piVar2 = (int *)(**(code **)(**(int **)(uStack_1b4 + 4) + 0x7c))();
          (**(code **)(*piVar2 + 0x10))();
          if (0xf < uStack_19c) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          puStack_10 = (undefined1 *)0xffffffff;
          FUN_007b46e0();
          iVar4 = iStack_16c;
          in_ECX = uStack_1b4;
        }
        iStack_1b8 = iStack_1b8 + 1;
        iStack_1bc = iStack_1bc + 0x18;
      } while (iStack_1b8 < local_170);
    }
    (**(code **)(*(int *)(in_ECX + 8) + 0x1bc))();
    (**(code **)(*(int *)(in_ECX + 8) + 0x1bc))();
    uStack_138 = 0xf;
    uStack_13c = 0;
    local_14c[0] = (undefined4 *)((uint)local_14c[0] & 0xffffff00);
    FUN_00409350("micro",5);
    puStack_10 = (undefined1 *)0x15;
    (**(code **)(*(int *)(*(int *)(in_ECX + 4) + 0x18) + 0x78))();
    pvStack_14 = (void *)0xffffffff;
    if (0xf < uStack_13c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_150);
    }
    uStack_13c = 0xf;
    uStack_140 = 0;
    uStack_150 = uStack_150 & 0xffffff00;
    if (*(char *)(*(int *)(in_ECX + 4) + 0x67) != '\0') {
      (**(code **)(*(int *)(*(int *)(in_ECX + 4) + 0x18) + 0x34))();
    }
  }
  else {
    uStack_19c = 0xf;
    uStack_1a0 = 0;
    local_1b0[0] = (uint)local_1b0[0]._1_3_ << 8;
    FUN_00409350("ME_ERROR",8);
    puStack_10 = (undefined1 *)0x8;
    uStack_17c = 0xf;
    uStack_180 = 0;
    uStack_190 = uStack_190 & 0xffffff00;
    FUN_00409350("status_label",0xc);
    puStack_10._0_1_ = 9;
    piVar2 = *(int **)(*(int *)(in_ECX + 8) + 0x20);
    uStack_194 = FUN_007b1800(auStack_130,iStack_1bc);
    puStack_10._0_1_ = 10;
    FUN_009a8ee0(aiStack_164,local_1b0);
    puStack_10._0_1_ = 0xb;
    iVar4 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
    puStack_10._0_1_ = 0xc;
    uVar5 = FUN_00988f20();
    puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,0xd);
    (**(code **)(*piVar2 + 0x3c))();
    FUN_00408ed0(uVar5,0,0xffffffff);
    FUN_00a5ecc0();
    if (0xf < uStack_104) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_118);
    }
    uStack_104 = 0xf;
    uStack_108 = 0;
    uStack_118 = uStack_118 & 0xffffff00;
    if (0xf < uStack_e8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_fc);
    }
    uStack_e8 = 0xf;
    uStack_ec = 0;
    uStack_fc = uStack_fc & 0xffffff00;
    pvStack_14 = (void *)CONCAT31(pvStack_14._1_3_,0xe);
    FUN_009adb70();
    if (aiStack_164[0] != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(aiStack_164[0]);
    }
    aiStack_164[0] = 0;
    aiStack_164[1] = 0;
    aiStack_164[2] = 0;
    if (0xf < uStack_120) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_134);
    }
    uStack_120 = 0xf;
    uStack_124 = 0;
    uStack_134 = uStack_134 & 0xffffff00;
    if (0xf < uStack_180) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_194);
    }
    pvStack_14 = (void *)0xffffffff;
    uStack_180 = 0xf;
    uStack_184 = 0;
    uStack_194 = uStack_194 & 0xffffff00;
    if (0xf < uStack_1a0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_1b4);
    }
    if (unaff_EBX == 5) {
      FUN_007b3680(0);
      ExceptionList = pvStack_1c;
      return;
    }
  }
  ExceptionList = pvStack_1c;
  return;
}

