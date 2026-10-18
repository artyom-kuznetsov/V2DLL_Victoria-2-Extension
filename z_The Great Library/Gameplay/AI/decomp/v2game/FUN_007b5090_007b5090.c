// FUN_007b5090 @ 007b5090 body=[[007b5090, 007b50d7] [007b50db, 007b51c0] [007b51c4, 007b530f] [007b5313, 007b5342] [007b5346, 007b538b] [007b538f, 007b53b2] [007b53b6, 007b53d7] [007b53db, 007b5401] [007b5405, 007b5563] [007b5567, 007b5596] [007b559a, 007b55df] [007b55e3, 007b5606] [007b560a, 007b562b] [007b562f, 007b5655] [007b5659, 007b57be] [007b57c2, 007b582b] [007b582f, 007b5898] [007b589c, 007b5908] [007b590c, 007b5978] [007b597c, 007b59e8] [007b59ec, 007b5a9e] [007b5aa2, 007b5b72] [007b5b76, 007b5b8a]]


void FUN_007b5090(void)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  int iVar10;
  uint in_ECX;
  int unaff_EBX;
  int unaff_ESI;
  undefined8 uVar11;
  uint local_1b8 [4];
  uint uStack_1a8;
  uint uStack_1a4;
  uint uStack_19c;
  uint uStack_198;
  undefined1 auStack_194 [8];
  undefined4 uStack_18c;
  uint uStack_188;
  uint uStack_184;
  undefined4 uStack_180;
  char *pcStack_17c;
  int iStack_178;
  int iStack_174;
  int aiStack_16c [6];
  undefined4 *puStack_154;
  undefined1 auStack_150 [12];
  undefined4 uStack_144;
  uint uStack_140;
  undefined4 uStack_13c;
  uint uStack_138;
  undefined4 uStack_128;
  uint uStack_124;
  uint uStack_11c;
  undefined4 uStack_10c;
  uint uStack_108;
  undefined1 *puStack_f8;
  undefined *puStack_f4;
  char *pcStack_f0;
  char *pcStack_ec;
  char *pcStack_e8;
  uint uStack_d8;
  undefined4 uStack_d4;
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
  puStack_10 = &LAB_00b8904f;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  local_1b8[0] = in_ECX;
  if (*(undefined4 **)(in_ECX + 0xc) != (undefined4 *)0x0) {
    ExceptionList = &pvStack_14;
    (**(code **)**(undefined4 **)(in_ECX + 0xc))(1);
  }
  if (*(int *)(in_ECX + 0x10) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(in_ECX + 0x10));
  }
  if (DAT_00f0c684 < 0x10) {
    puStack_154 = &DAT_00f0c670;
  }
  else {
    puStack_154 = DAT_00f0c670;
  }
  iVar5 = *(int *)(in_ECX + 8);
  piVar3 = (int *)(iVar5 + 0x40);
  puStack_f8 = &DAT_00df09f4;
  puStack_f4 = &DAT_00dfac10;
  pcStack_f0 = "filename";
  pcStack_ec = "chksum";
  pcStack_e8 = "version";
  if (0xf < *(uint *)(iVar5 + 0x54)) {
    piVar3 = (int *)*piVar3;
  }
  uVar2 = (**(code **)(iVar5 + 0x1a8))(&iStack_178,piVar3,1,&puStack_154,5,&puStack_f8);
  uStack_180 = 0xf;
  uStack_184 = 0;
  auStack_194[0] = 0;
  FUN_00409350();
  uStack_c = 0;
  piVar3 = (int *)(**(code **)(**(int **)(in_ECX + 4) + 0x7c))(auStack_194);
  (**(code **)(*piVar3 + 0x5c))();
  puStack_10 = (undefined1 *)0xffffffff;
  if (0xf < uStack_184) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if (unaff_EBX == 2) {
    uStack_1a4 = 0xf;
    uStack_1a8 = 0;
    local_1b8[0] = (uint)local_1b8[0]._1_3_ << 8;
    FUN_00409350("ME_ERROR",8);
    puStack_10 = (undefined1 *)0x1;
    uStack_184 = 0xf;
    uStack_188 = 0;
    uStack_198 = uStack_198 & 0xffffff00;
    FUN_00409350("status_label",0xc);
    puStack_10._0_1_ = 2;
    piVar3 = *(int **)(*(int *)(uVar2 + 8) + 0x20);
    uStack_13c = 0xf;
    uStack_140 = 0;
    auStack_150[0] = 0;
    pcVar4 = pcStack_17c;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    FUN_00409350(pcStack_17c,(int)pcVar4 - (int)(pcStack_17c + 1));
    puStack_10._0_1_ = 3;
    uStack_19c = FUN_009a8ee0(aiStack_16c,local_1b8);
    puStack_10._0_1_ = 4;
    iVar5 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c),*(undefined8 *)(iVar5 + 0x74));
    puStack_10._0_1_ = 5;
    uVar6 = FUN_00988f20();
    puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,6);
    (**(code **)(*piVar3 + 0x3c))();
    FUN_00408ed0(uVar6,0,0xffffffff);
    FUN_00a5ecc0();
    if (0xf < uStack_108) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_11c);
    }
    uStack_108 = 0xf;
    uStack_10c = 0;
    uStack_11c = uStack_11c & 0xffffff00;
    if (0xf < uStack_124) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_138);
    }
    uStack_124 = 0xf;
    uStack_128 = 0;
    uStack_138 = uStack_138 & 0xffffff00;
    pvStack_14 = (void *)CONCAT31(pvStack_14._1_3_,7);
    FUN_009adb70();
    if (aiStack_16c[0] != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(aiStack_16c[0]);
    }
    aiStack_16c[0] = 0;
    aiStack_16c[1] = 0;
    aiStack_16c[2] = 0;
    if (0xf < uStack_140) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(puStack_154);
    }
    uStack_140 = 0xf;
    uStack_144 = 0;
    puStack_154 = (undefined4 *)((uint)puStack_154 & 0xffffff00);
    if (0xf < uStack_188) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_19c);
    }
    pvStack_14 = (void *)0xffffffff;
    uStack_188 = 0xf;
    uStack_18c = 0;
    uStack_19c = uStack_19c & 0xffffff00;
    if (0xf < uStack_1a8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uVar2);
    }
    (**(code **)(iRam0000000a + 0x1bc))(uStack_180);
    ExceptionList = pvStack_1c;
    return;
  }
  if (unaff_EBX == 0) {
    uStack_19c = 0;
    if (0 < iStack_178) {
      iVar5 = 0;
      iVar10 = iStack_174;
      do {
        if (**(char **)(iVar5 + 8 + iVar10) == '1') {
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
          pcVar4 = *(char **)(iVar5 + iVar10);
          pcVar7 = pcVar4;
          do {
            cVar1 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar1 != '\0');
          FUN_00409350(pcVar4,(int)pcVar7 - (int)(pcVar4 + 1));
          pcVar4 = *(char **)(iVar5 + 4 + iStack_174);
          uStack_184 = 0xf;
          uStack_188 = 0;
          uStack_198 = uStack_198 & 0xffffff00;
          pcVar7 = pcVar4;
          do {
            cVar1 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar1 != '\0');
          FUN_00409350(pcVar4,(int)pcVar7 - (int)(pcVar4 + 1));
          uStack_b0 = FUN_00aaf0c5();
          if (0xf < uStack_184) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          pcVar4 = *(char **)(iVar5 + 0xc + iStack_174);
          uStack_1a4 = 0xf;
          uStack_1a8 = 0;
          local_1b8[0] = local_1b8[0] & 0xffffff00;
          pcVar7 = pcVar4;
          do {
            cVar1 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar1 != '\0');
          FUN_00409350(pcVar4,(int)pcVar7 - (int)(pcVar4 + 1));
          puStack_10._0_1_ = 0x10;
          FUN_00408ed0();
          puStack_10._0_1_ = 0xf;
          if (0xf < uStack_1a4) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          pcVar4 = *(char **)(iVar5 + 0x10 + iStack_174);
          uStack_1a4 = 0xf;
          uStack_1a8 = 0;
          local_1b8[0] = local_1b8[0] & 0xffffff00;
          pcVar7 = pcVar4;
          do {
            cVar1 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar1 != '\0');
          FUN_00409350(pcVar4,(int)pcVar7 - (int)(pcVar4 + 1));
          puStack_10._0_1_ = 0x11;
          FUN_00408ed0();
          puStack_10._0_1_ = 0xf;
          if (0xf < uStack_1a4) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          pcVar4 = *(char **)(iVar5 + 0x14 + iStack_174);
          uStack_1a4 = 0xf;
          uStack_1a8 = 0;
          local_1b8[0] = local_1b8[0] & 0xffffff00;
          pcVar7 = pcVar4;
          do {
            cVar1 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar1 != '\0');
          FUN_00409350(pcVar4,(int)pcVar7 - (int)(pcVar4 + 1));
          puStack_10._0_1_ = 0x12;
          FUN_00408ed0();
          puStack_10._0_1_ = 0xf;
          if (0xf < uStack_1a4) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          pcVar4 = *(char **)(iVar5 + 0x18 + iStack_174);
          uStack_1a4 = 0xf;
          uStack_1a8 = 0;
          local_1b8[0] = local_1b8[0] & 0xffffff00;
          pcVar7 = pcVar4;
          do {
            cVar1 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar1 != '\0');
          FUN_00409350(pcVar4,(int)pcVar7 - (int)(pcVar4 + 1));
          puStack_10._0_1_ = 0x13;
          FUN_00408ed0();
          puStack_10._0_1_ = 0xf;
          if (0xf < uStack_1a4) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          pcVar4 = *(char **)(iVar5 + 0x1c + iStack_174);
          uStack_1a4 = 0xf;
          uStack_1a8 = 0;
          local_1b8[0] = local_1b8[0] & 0xffffff00;
          pcVar7 = pcVar4;
          do {
            cVar1 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar1 != '\0');
          FUN_00409350(pcVar4,(int)pcVar7 - (int)(pcVar4 + 1));
          puStack_10._0_1_ = 0x14;
          FUN_00408ed0();
          puStack_10._0_1_ = 0xf;
          if (0xf < uStack_1a4) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          puVar8 = (undefined4 *)FUN_00aae9af();
          uVar6 = DAT_01258a80;
          puStack_10._0_1_ = 0x15;
          puStack_154 = puVar8;
          if (puVar8 != (undefined4 *)0x0) {
            uVar11 = CONCAT44(uVar2,auStack_cc);
            uVar9 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x3c))(auStack_cc);
            FUN_007b7ba0(puVar8,uVar6,uVar9,uVar11);
          }
          puStack_10._0_1_ = 0xf;
          uStack_1a4 = 0xf;
          uStack_1a8 = 0;
          local_1b8[0] = local_1b8[0] & 0xffffff00;
          FUN_00409350("owned_items_list",0x10);
          puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,0x16);
          piVar3 = (int *)(**(code **)(**(int **)(uVar2 + 4) + 0x7c))();
          (**(code **)(*piVar3 + 0x10))();
          if (0xf < uStack_1a4) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          puStack_10 = (undefined1 *)0xffffffff;
          FUN_007b46e0();
          iVar10 = iStack_174;
          in_ECX = uVar2;
        }
        iVar5 = iVar5 + 0x20;
        uStack_19c = uStack_19c + 1;
      } while ((int)uStack_19c < iStack_178);
    }
    (**(code **)(*(int *)(in_ECX + 8) + 0x1bc))();
    (**(code **)(*(int *)(in_ECX + 8) + 0x1bc))();
    if (*(char *)(*(int *)(in_ECX + 4) + 0x67) != '\0') {
      (**(code **)(*(int *)(*(int *)(in_ECX + 4) + 0x18) + 0x34))();
    }
    uStack_d4 = 0xf;
    uStack_d8 = 0;
    pcStack_e8 = (char *)((uint)pcStack_e8 & 0xffffff00);
    FUN_00409350("micro",5);
    puStack_10 = (undefined1 *)0x17;
    (**(code **)(*(int *)(*(int *)(in_ECX + 4) + 0x18) + 0x78))();
    if (0xf < uStack_d8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(pcStack_ec);
    }
  }
  else {
    uStack_1a4 = 0xf;
    uStack_1a8 = 0;
    local_1b8[0] = (uint)local_1b8[0]._1_3_ << 8;
    FUN_00409350("ME_ERROR",8);
    puStack_10 = (undefined1 *)0x8;
    uStack_184 = 0xf;
    uStack_188 = 0;
    uStack_198 = uStack_198 & 0xffffff00;
    FUN_00409350("status_label",0xc);
    puStack_10._0_1_ = 9;
    piVar3 = *(int **)(*(int *)(uVar2 + 8) + 0x20);
    puStack_154 = (undefined4 *)FUN_007b1800(auStack_150,unaff_EBX);
    puStack_10._0_1_ = 10;
    uStack_19c = FUN_009a8ee0(aiStack_16c,local_1b8);
    puStack_10._0_1_ = 0xb;
    iVar5 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c),*(undefined8 *)(iVar5 + 0x74));
    puStack_10._0_1_ = 0xc;
    uVar6 = FUN_00988f20();
    puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,0xd);
    (**(code **)(*piVar3 + 0x3c))();
    FUN_00408ed0(uVar6,0,0xffffffff);
    FUN_00a5ecc0();
    if (0xf < uStack_124) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_138);
    }
    uStack_124 = 0xf;
    uStack_128 = 0;
    uStack_138 = uStack_138 & 0xffffff00;
    if (0xf < uStack_108) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_11c);
    }
    uStack_108 = 0xf;
    uStack_10c = 0;
    uStack_11c = uStack_11c & 0xffffff00;
    pvStack_14 = (void *)CONCAT31(pvStack_14._1_3_,0xe);
    FUN_009adb70();
    if (aiStack_16c[0] != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(aiStack_16c[0]);
    }
    aiStack_16c[0] = 0;
    aiStack_16c[1] = 0;
    aiStack_16c[2] = 0;
    if (0xf < uStack_140) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(puStack_154);
    }
    uStack_140 = 0xf;
    uStack_144 = 0;
    puStack_154 = (undefined4 *)((uint)puStack_154 & 0xffffff00);
    if (0xf < uStack_188) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_19c);
    }
    pvStack_14 = (void *)0xffffffff;
    uStack_188 = 0xf;
    uStack_18c = 0;
    uStack_19c = uStack_19c & 0xffffff00;
    if (0xf < uStack_1a8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uVar2);
    }
    if (unaff_ESI == 5) {
      FUN_007b3680(0);
      ExceptionList = pvStack_1c;
      return;
    }
  }
  ExceptionList = pvStack_1c;
  return;
}

