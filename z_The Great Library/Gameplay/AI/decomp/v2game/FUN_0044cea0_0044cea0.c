// FUN_0044cea0 @ 0044cea0 body=[[0044cea0, 0044cec7] [0044ced0, 0044d0c5] [0044d0ce, 0044d297] [0044d29b, 0044d2ca] [0044d2ce, 0044d2f8] [0044d2fc, 0044d326] [0044d32a, 0044d354] [0044d358, 0044d382] [0044d386, 0044d3b0] [0044d3b4, 0044d3e3] [0044d3e7, 0044d49e] [0044d4a2, 0044d4fa] [0044d4fe, 0044d51c] [0044d525, 0044d57c] [0044d580, 0044d5d1] [0044d5d5, 0044d629] [0044d62d, 0044d67e] [0044d682, 0044d6d3] [0044d6d7, 0044d728] [0044d72c, 0044d780] [0044d784, 0044d7d5] [0044d7d9, 0044d82a] [0044d82e, 0044d87f] [0044d883, 0044d8d4] [0044d8d8, 0044d929] [0044d92d, 0044d97e] [0044d982, 0044d9d3] [0044d9d7, 0044da28] [0044da2c, 0044da7d] [0044da81, 0044dad2] [0044dad6, 0044db27] [0044db2b, 0044db7c] [0044db80, 0044dbd1] [0044dbd5, 0044dc26] [0044dc2a, 0044dc7b] [0044dc7f, 0044dcd3] [0044dcd7, 0044dd2b] [0044dd2f, 0044dd83] [0044dd87, 0044ddc9] [0044ddcd, 0044de0f] [0044de13, 0044de55] [0044de59, 0044de9b] [0044de9f, 0044dee1] [0044dee5, 0044df24] [0044df28, 0044df67] [0044df6b, 0044dfaa] [0044dfae, 0044dfed] [0044dff1, 0044e033] [0044e037, 0044e079] [0044e07d, 0044e0bf] [0044e0c3, 0044e105] [0044e109, 0044e14b] [0044e14f, 0044e191] [0044e195, 0044e1d7] [0044e1db, 0044e20c]]


void FUN_0044cea0(int param_1,undefined4 *param_2)

{
  char cVar1;
  int **ppiVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  uint uVar6;
  char *pcVar7;
  undefined4 uVar8;
  uint uVar9;
  int **ppiVar10;
  uint *puVar11;
  int *piVar12;
  uint auStack_270 [4];
  undefined4 uStack_260;
  uint uStack_25c;
  undefined4 auStack_250 [5];
  uint uStack_23c;
  int *apiStack_234 [3];
  int **appiStack_228 [4];
  undefined4 uStack_218;
  uint uStack_214;
  uint auStack_208 [4];
  undefined4 uStack_1f8;
  uint uStack_1f4;
  int *piStack_1ec;
  uint auStack_1e4 [4];
  undefined4 uStack_1d4;
  uint uStack_1d0;
  uint auStack_1c8 [4];
  undefined4 uStack_1b8;
  uint uStack_1b4;
  uint uStack_1ac;
  undefined4 uStack_19c;
  uint uStack_198;
  uint uStack_190;
  undefined4 uStack_180;
  uint uStack_17c;
  uint uStack_174;
  undefined4 uStack_164;
  uint uStack_160;
  uint uStack_158;
  undefined4 uStack_148;
  uint uStack_144;
  uint auStack_13c [4];
  undefined4 uStack_12c;
  uint uStack_128;
  int aiStack_120 [30];
  undefined **appuStack_a8 [36];
  void *pvStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  int iStack_c;
  
  puStack_10 = &LAB_00b5c151;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  do {
    iStack_c = 0xffffffff;
    piVar5 = (int *)param_2[7];
    if ((char)piVar5[0x44] == '\0') {
      iVar3 = (**(code **)(*piVar5 + 4))();
      piVar5[2] = iVar3;
      if (iVar3 == 0) {
        piVar5[3] = 0x13;
      }
      *(undefined1 *)(piVar5 + 0x44) = 1;
    }
    piVar5 = piVar5 + 3;
    piVar12 = aiStack_120;
    for (iVar3 = 0x41; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar12 = *piVar5;
      piVar5 = piVar5 + 1;
      piVar12 = piVar12 + 1;
    }
    if (aiStack_120[0] == 0x13) {
      piStack_1ec = *(int **)(param_1 + 0xc);
      apiStack_234[0] = (int *)0x0;
      while( true ) {
        if ((piStack_1ec < *(int **)(param_1 + 0xc)) || (*(int **)(param_1 + 0x10) <= piStack_1ec))
        break;
        piVar5 = (int *)*piStack_1ec;
        piStack_1ec = piStack_1ec + 1;
        uStack_1f4 = 0xf;
        uStack_1f8 = 0;
        auStack_208[0] = auStack_208[0] & 0xffffff00;
        FUN_00409350(" name = ",8);
        iStack_c = 3;
        uStack_1b4 = 0xf;
        uStack_1b8 = 0;
        auStack_1c8[0] = auStack_1c8[0] & 0xffffff00;
        FUN_00409350(" tag = ",7);
        uStack_1d0 = 0xf;
        uStack_1d4 = 0;
        auStack_1e4[0] = auStack_1e4[0] & 0xffffff00;
        iStack_c._0_1_ = 5;
        pcVar7 = __itoa((int)apiStack_234[0],(char *)auStack_270,10);
        pcVar4 = pcVar7;
        do {
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar1 != '\0');
        FUN_00409350(pcVar7,(int)pcVar4 - (int)(pcVar7 + 1));
        iStack_c._0_1_ = 6;
        apiStack_234[1] = (int *)FUN_00988fa0(auStack_1e4);
        iStack_c._0_1_ = 7;
        apiStack_234[0] = (int *)((int)apiStack_234[0] + 1);
        apiStack_234[2] = (int *)(**(code **)(*piVar5 + 0x18))(auStack_13c);
        iStack_c._0_1_ = 8;
        FUN_00988f20(auStack_1c8);
        iStack_c._0_1_ = 9;
        FUN_00988f20(piVar5 + 0xc);
        iStack_c._0_1_ = 10;
        FUN_00988f20(auStack_208);
        iStack_c._0_1_ = 0xb;
        FUN_00988f20(apiStack_234[2]);
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
        if (0xf < uStack_198) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(uStack_1ac);
        }
        uStack_198 = 0xf;
        uStack_19c = 0;
        uStack_1ac = uStack_1ac & 0xffffff00;
        if (0xf < uStack_128) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(auStack_13c[0]);
        }
        uStack_128 = 0xf;
        uStack_12c = 0;
        auStack_13c[0] = auStack_13c[0] & 0xffffff00;
        if (0xf < uStack_17c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(uStack_190);
        }
        uStack_17c = 0xf;
        uStack_180 = 0;
        uStack_190 = uStack_190 & 0xffffff00;
        if (0xf < uStack_1d0) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(auStack_1e4[0]);
        }
        uStack_1d0 = 0xf;
        uStack_1d4 = 0;
        auStack_1e4[0] = auStack_1e4[0] & 0xffffff00;
        if (0xf < uStack_1b4) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(auStack_1c8[0]);
        }
        uStack_1b4 = 0xf;
        uStack_1b8 = 0;
        auStack_1c8[0] = auStack_1c8[0] & 0xffffff00;
        iStack_c._0_1_ = 0x14;
        if (0xf < uStack_1f4) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(auStack_208[0]);
        }
        uStack_1f4 = 0xf;
        uStack_1f8 = 0;
        auStack_208[0] = auStack_208[0] & 0xffffff00;
        uStack_25c = 0xf;
        uStack_260 = 0;
        auStack_270[0] = auStack_270[0] & 0xffffff00;
        FUN_00409350("modifier.cpp",0xc);
        iStack_c._0_1_ = 0x15;
        uStack_214 = 0xf;
        uStack_218 = 0;
        appiStack_228[0] = (int **)((uint)appiStack_228[0] & 0xffffff00);
        FUN_00408ed0(auStack_250,0,0xffffffff);
        iStack_c._0_1_ = 0x16;
        uVar8 = FUN_004015b0(auStack_270,0x27f,0x10000);
        iStack_c._0_1_ = 0x19;
        ppiVar10 = appiStack_228[0];
        if (uStack_214 < 0x10) {
          ppiVar10 = apiStack_234 + 3;
        }
        apiStack_234[1] = (int *)FUN_00418e30(uVar8,ppiVar10);
        iStack_c._0_1_ = 0x18;
        if (0xf < uStack_214) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(appiStack_228[0]);
        }
        uStack_214 = 0xf;
        uStack_218 = 0;
        appiStack_228[0] = (int **)((uint)appiStack_228[0] & 0xffffff00);
        FUN_00401280(apiStack_234[1]);
        iStack_c = CONCAT31(iStack_c._1_3_,0x15);
        FUN_00987ac0(appuStack_a8);
        appuStack_a8[0] = std::ios_base::vftable;
        FUN_00aad52d(appuStack_a8);
        if (0xf < uStack_25c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(auStack_270[0]);
        }
        iStack_c = 0xffffffff;
        if (0xf < uStack_23c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(auStack_250[0]);
        }
      }
      uStack_25c = 0xf;
      uStack_260 = 0;
      auStack_270[0] = auStack_270[0] & 0xffffff00;
      FUN_00409350(&DAT_00df9680,3);
      iStack_c = 0x1a;
      uVar8 = FUN_005661b0(auStack_270);
      iStack_c = 0xffffffff;
      *(undefined4 *)(param_1 + 0x60) = uVar8;
      if (0xf < uStack_25c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(auStack_270[0]);
      }
      uStack_25c = 0xf;
      uStack_260 = 0;
      auStack_270[0] = auStack_270[0] & 0xffffff00;
      FUN_00409350("peace",5);
      iStack_c = 0x1b;
      uVar8 = FUN_005661b0(auStack_270);
      iStack_c = 0xffffffff;
      *(undefined4 *)(param_1 + 100) = uVar8;
      if (0xf < uStack_25c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(auStack_270[0]);
      }
      uStack_25c = 0xf;
      uStack_260 = 0;
      auStack_270[0] = auStack_270[0] & 0xffffff00;
      FUN_00409350("disarming",9);
      iStack_c = 0x1c;
      uVar8 = FUN_005661b0(auStack_270);
      iStack_c = 0xffffffff;
      *(undefined4 *)(param_1 + 0x84) = uVar8;
      if (0xf < uStack_25c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(auStack_270[0]);
      }
      uStack_25c = 0xf;
      uStack_260 = 0;
      auStack_270[0] = auStack_270[0] & 0xffffff00;
      FUN_00409350("war_exhaustion",0xe);
      iStack_c = 0x1d;
      uVar8 = FUN_005661b0(auStack_270);
      iStack_c = 0xffffffff;
      *(undefined4 *)(param_1 + 0x68) = uVar8;
      if (0xf < uStack_25c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(auStack_270[0]);
      }
      uStack_25c = 0xf;
      uStack_260 = 0;
      auStack_270[0] = auStack_270[0] & 0xffffff00;
      FUN_00409350("total_blockaded",0xf);
      iStack_c = 0x1e;
      uVar8 = FUN_005661b0(auStack_270);
      iStack_c = 0xffffffff;
      *(undefined4 *)(param_1 + 0x7c) = uVar8;
      if (0xf < uStack_25c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(auStack_270[0]);
      }
      uStack_25c = 0xf;
      uStack_260 = 0;
      auStack_270[0] = auStack_270[0] & 0xffffff00;
      FUN_00409350("total_occupation",0x10);
      iStack_c = 0x1f;
      uVar8 = FUN_005661b0(auStack_270);
      iStack_c = 0xffffffff;
      *(undefined4 *)(param_1 + 0x78) = uVar8;
      if (0xf < uStack_25c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(auStack_270[0]);
      }
      uStack_25c = 0xf;
      uStack_260 = 0;
      auStack_270[0] = auStack_270[0] & 0xffffff00;
      FUN_00409350("badboy",6);
      iStack_c = 0x20;
      uVar8 = FUN_005661b0(auStack_270);
      iStack_c = 0xffffffff;
      *(undefined4 *)(param_1 + 0x80) = uVar8;
      if (0xf < uStack_25c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(auStack_270[0]);
      }
      uStack_25c = 0xf;
      uStack_260 = 0;
      auStack_270[0] = auStack_270[0] & 0xffffff00;
      FUN_00409350("overseas",8);
      iStack_c = 0x21;
      uVar8 = FUN_005661b0(auStack_270);
      iStack_c = 0xffffffff;
      *(undefined4 *)(param_1 + 0x1c) = uVar8;
      if (0xf < uStack_25c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(auStack_270[0]);
      }
      uStack_25c = 0xf;
      uStack_260 = 0;
      auStack_270[0] = auStack_270[0] & 0xffffff00;
      FUN_00409350("coastal",7);
      iStack_c = 0x22;
      uVar8 = FUN_005661b0(auStack_270);
      iStack_c = 0xffffffff;
      *(undefined4 *)(param_1 + 0x20) = uVar8;
      if (0xf < uStack_25c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(auStack_270[0]);
      }
      uStack_25c = 0xf;
      uStack_260 = 0;
      auStack_270[0] = auStack_270[0] & 0xffffff00;
      FUN_00409350("non_coastal",0xb);
      iStack_c = 0x23;
      uVar8 = FUN_005661b0(auStack_270);
      iStack_c = 0xffffffff;
      *(undefined4 *)(param_1 + 0x24) = uVar8;
      if (0xf < uStack_25c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(auStack_270[0]);
      }
      uStack_25c = 0xf;
      uStack_260 = 0;
      auStack_270[0] = auStack_270[0] & 0xffffff00;
      FUN_00409350("coastal_sea",0xb);
      iStack_c = 0x24;
      uVar8 = FUN_005661b0(auStack_270);
      iStack_c = 0xffffffff;
      *(undefined4 *)(param_1 + 0x28) = uVar8;
      if (0xf < uStack_25c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(auStack_270[0]);
      }
      uStack_25c = 0xf;
      uStack_260 = 0;
      auStack_270[0] = auStack_270[0] & 0xffffff00;
      FUN_00409350("no_adjacent_controlled",0x16);
      iStack_c = 0x25;
      uVar8 = FUN_005661b0(auStack_270);
      iStack_c = 0xffffffff;
      *(undefined4 *)(param_1 + 0x2c) = uVar8;
      if (0xf < uStack_25c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(auStack_270[0]);
      }
      uStack_25c = 0xf;
      uStack_260 = 0;
      auStack_270[0] = auStack_270[0] & 0xffffff00;
      FUN_00409350("out_of_supply",0xd);
      iStack_c = 0x26;
      uVar8 = FUN_005661b0(auStack_270);
      iStack_c = 0xffffffff;
      *(undefined4 *)(param_1 + 0x30) = uVar8;
      if (0xf < uStack_25c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(auStack_270[0]);
      }
      uStack_25c = 0xf;
      uStack_260 = 0;
      auStack_270[0] = auStack_270[0] & 0xffffff00;
      FUN_00409350("blockaded",9);
      iStack_c = 0x27;
      uVar8 = FUN_005661b0(auStack_270);
      iStack_c = 0xffffffff;
      *(undefined4 *)(param_1 + 0x34) = uVar8;
      if (0xf < uStack_25c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(auStack_270[0]);
      }
      uStack_25c = 0xf;
      uStack_260 = 0;
      auStack_270[0] = auStack_270[0] & 0xffffff00;
      FUN_00409350("land_province",0xd);
      iStack_c = 0x28;
      uVar8 = FUN_005661b0(auStack_270);
      iStack_c = 0xffffffff;
      *(undefined4 *)(param_1 + 0x38) = uVar8;
      if (0xf < uStack_25c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(auStack_270[0]);
      }
      uStack_25c = 0xf;
      uStack_260 = 0;
      auStack_270[0] = auStack_270[0] & 0xffffff00;
      FUN_00409350("sea_zone",8);
      iStack_c = 0x29;
      uVar8 = FUN_005661b0(auStack_270);
      iStack_c = 0xffffffff;
      *(undefined4 *)(param_1 + 0x3c) = uVar8;
      if (0xf < uStack_25c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(auStack_270[0]);
      }
      uStack_25c = 0xf;
      uStack_260 = 0;
      auStack_270[0] = auStack_270[0] & 0xffffff00;
      FUN_00409350(&DAT_00df9750,4);
      iStack_c = 0x2a;
      uVar8 = FUN_005661b0(auStack_270);
      iStack_c = 0xffffffff;
      *(undefined4 *)(param_1 + 0x48) = uVar8;
      if (0xf < uStack_25c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(auStack_270[0]);
      }
      uStack_25c = 0xf;
      uStack_260 = 0;
      auStack_270[0] = auStack_270[0] & 0xffffff00;
      FUN_00409350("has_siege",9);
      iStack_c = 0x2b;
      uVar8 = FUN_005661b0(auStack_270);
      iStack_c = 0xffffffff;
      *(undefined4 *)(param_1 + 0x4c) = uVar8;
      if (0xf < uStack_25c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(auStack_270[0]);
      }
      uStack_25c = 0xf;
      uStack_260 = 0;
      auStack_270[0] = auStack_270[0] & 0xffffff00;
      FUN_00409350("nationalism",0xb);
      iStack_c = 0x2c;
      uVar8 = FUN_005661b0(auStack_270);
      iStack_c = 0xffffffff;
      *(undefined4 *)(param_1 + 0x40) = uVar8;
      if (0xf < uStack_25c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(auStack_270[0]);
      }
      uStack_25c = 0xf;
      uStack_260 = 0;
      auStack_270[0] = auStack_270[0] & 0xffffff00;
      FUN_00409350("land_maintenance",0x10);
      iStack_c = 0x2d;
      uVar8 = FUN_005661b0(auStack_270);
      iStack_c = 0xffffffff;
      *(undefined4 *)(param_1 + 0x6c) = uVar8;
      if (0xf < uStack_25c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(auStack_270[0]);
      }
      uStack_25c = 0xf;
      uStack_260 = 0;
      auStack_270[0] = auStack_270[0] & 0xffffff00;
      FUN_00409350("naval_maintenance",0x11);
      iStack_c = 0x2e;
      uVar8 = FUN_005661b0(auStack_270);
      iStack_c = 0xffffffff;
      *(undefined4 *)(param_1 + 0x70) = uVar8;
      if (0xf < uStack_25c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(auStack_270[0]);
      }
      uStack_25c = 0xf;
      uStack_260 = 0;
      auStack_270[0] = auStack_270[0] & 0xffffff00;
      FUN_00409350("base_values",0xb);
      iStack_c = 0x2f;
      uVar8 = FUN_005661b0(auStack_270);
      iStack_c = 0xffffffff;
      *(undefined4 *)(param_1 + 0x74) = uVar8;
      if (0xf < uStack_25c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(auStack_270[0]);
      }
      uStack_25c = 0xf;
      uStack_260 = 0;
      auStack_270[0] = auStack_270[0] & 0xffffff00;
      FUN_00409350("very_easy_player",0x10);
      iStack_c = 0x30;
      uVar8 = FUN_005661b0(auStack_270);
      iStack_c = 0xffffffff;
      *(undefined4 *)(param_1 + 0x88) = uVar8;
      if (0xf < uStack_25c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(auStack_270[0]);
      }
      uStack_25c = 0xf;
      uStack_260 = 0;
      auStack_270[0] = auStack_270[0] & 0xffffff00;
      FUN_00409350("easy_player",0xb);
      iStack_c = 0x31;
      uVar8 = FUN_005661b0(auStack_270);
      iStack_c = 0xffffffff;
      *(undefined4 *)(param_1 + 0x8c) = uVar8;
      if (0xf < uStack_25c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(auStack_270[0]);
      }
      uStack_25c = 0xf;
      uStack_260 = 0;
      auStack_270[0] = auStack_270[0] & 0xffffff00;
      FUN_00409350("hard_player",0xb);
      iStack_c = 0x32;
      uVar8 = FUN_005661b0(auStack_270);
      iStack_c = 0xffffffff;
      *(undefined4 *)(param_1 + 0x90) = uVar8;
      if (0xf < uStack_25c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(auStack_270[0]);
      }
      FUN_004471e0("very_hard_player");
      iStack_c = 0x33;
      uVar8 = FUN_005661b0(auStack_250);
      iStack_c = 0xffffffff;
      *(undefined4 *)(param_1 + 0x94) = uVar8;
      if (0xf < uStack_23c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(auStack_250[0]);
      }
      FUN_004471e0("very_easy_ai");
      iStack_c = 0x34;
      uVar8 = FUN_005661b0(auStack_250);
      iStack_c = 0xffffffff;
      *(undefined4 *)(param_1 + 0x98) = uVar8;
      if (0xf < uStack_23c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(auStack_250[0]);
      }
      FUN_004471e0("easy_ai");
      iStack_c = 0x35;
      uVar8 = FUN_005661b0(auStack_250);
      iStack_c = 0xffffffff;
      *(undefined4 *)(param_1 + 0x9c) = uVar8;
      if (0xf < uStack_23c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(auStack_250[0]);
      }
      FUN_004471e0("hard_ai");
      iStack_c = 0x36;
      uVar8 = FUN_005661b0(auStack_250);
      iStack_c = 0xffffffff;
      *(undefined4 *)(param_1 + 0xa0) = uVar8;
      if (0xf < uStack_23c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(auStack_250[0]);
      }
      FUN_004471e0("very_hard_ai");
      iStack_c = 0x37;
      uVar8 = FUN_005661b0(auStack_250);
      iStack_c = 0xffffffff;
      *(undefined4 *)(param_1 + 0xa4) = uVar8;
      if (0xf < uStack_23c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(auStack_250[0]);
      }
      FUN_004471e0("great_power");
      iStack_c = 0x38;
      uVar8 = FUN_005661b0(auStack_250);
      iStack_c = 0xffffffff;
      *(undefined4 *)(param_1 + 0x50) = uVar8;
      if (0xf < uStack_23c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(auStack_250[0]);
      }
      FUN_004471e0("second_power");
      iStack_c = 0x39;
      uVar8 = FUN_005661b0(auStack_250);
      iStack_c = 0xffffffff;
      *(undefined4 *)(param_1 + 0x54) = uVar8;
      if (0xf < uStack_23c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(auStack_250[0]);
      }
      FUN_004471e0("civ_nation");
      iStack_c = 0x3a;
      uVar8 = FUN_005661b0(auStack_250);
      iStack_c = 0xffffffff;
      *(undefined4 *)(param_1 + 0x58) = uVar8;
      if (0xf < uStack_23c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(auStack_250[0]);
      }
      FUN_004471e0("unciv_nation");
      iStack_c = 0x3b;
      uVar8 = FUN_005661b0(auStack_250);
      iStack_c = 0xffffffff;
      *(undefined4 *)(param_1 + 0x5c) = uVar8;
      if (0xf < uStack_23c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(auStack_250[0]);
      }
      FUN_004471e0("debt_default_to");
      iStack_c = 0x3c;
      uVar8 = FUN_005661b0(auStack_250);
      iStack_c = 0xffffffff;
      *(undefined4 *)(param_1 + 0xa8) = uVar8;
      if (0xf < uStack_23c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(auStack_250[0]);
      }
      FUN_004471e0("bad_debter");
      iStack_c = 0x3d;
      uVar8 = FUN_005661b0(auStack_250);
      iStack_c = 0xffffffff;
      *(undefined4 *)(param_1 + 0xac) = uVar8;
      if (0xf < uStack_23c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(auStack_250[0]);
      }
      FUN_004471e0("plurality");
      iStack_c = 0x3e;
      uVar8 = FUN_005661b0(auStack_250);
      iStack_c = 0xffffffff;
      *(undefined4 *)(param_1 + 0xb0) = uVar8;
      if (0xf < uStack_23c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(auStack_250[0]);
      }
      FUN_004471e0("average_literacy");
      iStack_c = 0x3f;
      uVar8 = FUN_005661b0(auStack_250);
      iStack_c = 0xffffffff;
      *(undefined4 *)(param_1 + 0xb4) = uVar8;
      if (0xf < uStack_23c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(auStack_250[0]);
      }
      FUN_004471e0("generalised_debt_default");
      iStack_c = 0x40;
      uVar8 = FUN_005661b0(auStack_250);
      iStack_c = 0xffffffff;
      *(undefined4 *)(param_1 + 0xb8) = uVar8;
      if (0xf < uStack_23c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(auStack_250[0]);
      }
      FUN_004471e0("in_bankrupcy");
      iStack_c = 0x41;
      uVar8 = FUN_005661b0(auStack_250);
      iStack_c = 0xffffffff;
      *(undefined4 *)(param_1 + 0xbc) = uVar8;
      if (0xf < uStack_23c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(auStack_250[0]);
      }
      FUN_004471e0("infrastructure");
      iStack_c = 0x42;
      uVar8 = FUN_005661b0(apiStack_234 + 3);
      iStack_c = 0xffffffff;
      *(undefined4 *)(param_1 + 0xc0) = uVar8;
      if (0xf < uStack_214) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(appiStack_228[0]);
      }
      uStack_214 = 0xf;
      uStack_218 = 0;
      appiStack_228[0] = (int **)((uint)appiStack_228[0] & 0xffffff00);
      (**(code **)*param_2)(1);
      ExceptionList = pvStack_18;
      return;
    }
    FUN_009a1440(param_2);
    uStack_1f4 = 0xf;
    uStack_1f8 = 0;
    auStack_208[0] = auStack_208[0] & 0xffffff00;
    pcVar4 = (char *)(param_2 + 9);
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    FUN_00409350(param_2 + 9,(int)pcVar4 - ((int)param_2 + 0x25));
    iStack_c = 0;
    piVar5 = (int *)FUN_00aae9af(0x4c);
    iStack_c._0_1_ = 1;
    apiStack_234[1] = piVar5;
    if (piVar5 == (int *)0x0) {
      apiStack_234[2] = (int *)0x0;
    }
    else {
      FUN_0044bc60(piVar5);
      iStack_c._0_1_ = 2;
      *piVar5 = (int)CStaticModifier::vftable;
      piVar5[0x11] = 0xf;
      piVar5[0x10] = 0;
      *(undefined1 *)(piVar5 + 0xc) = 0;
      FUN_00408ed0(auStack_208,0,0xffffffff);
      apiStack_234[2] = piVar5;
    }
    iStack_c = (uint)iStack_c._1_3_ << 8;
    apiStack_234[0] = apiStack_234[2];
    FUN_0057b150(apiStack_234[2]);
    ppiVar10 = *(int ***)(param_1 + 0x10);
    puVar11 = (uint *)(param_1 + 0xc);
    if ((apiStack_234 < ppiVar10) && (ppiVar2 = (int **)*puVar11, ppiVar2 <= apiStack_234)) {
      apiStack_234[1] = (int *)((int)apiStack_234 - (int)ppiVar2 >> 2);
      if (ppiVar10 == *(int ***)(param_1 + 0x14)) {
        uVar6 = (int)ppiVar10 - (int)ppiVar2 >> 2;
        if (0x3ffffffe < uVar6) {
LAB_0044d0ce:
                    /* WARNING: Subroutine does not return */
          FUN_00aad3ad("vector<T> too long");
        }
        uVar6 = uVar6 + 1;
        uVar9 = (int)*(int ***)(param_1 + 0x14) - (int)ppiVar2 >> 2;
        if (uVar9 < uVar6) {
          if (0x3fffffff - (uVar9 >> 1) < uVar9) {
            uVar9 = 0;
          }
          else {
            uVar9 = uVar9 + (uVar9 >> 1);
          }
          if (uVar9 < uVar6) {
            uVar9 = uVar6;
          }
          FUN_004bf300(uVar9);
        }
      }
      if (*(undefined4 **)(param_1 + 0x10) != (undefined4 *)0x0) {
        **(undefined4 **)(param_1 + 0x10) = *(undefined4 *)(*puVar11 + (int)apiStack_234[1] * 4);
      }
    }
    else {
      if (ppiVar10 == *(int ***)(param_1 + 0x14)) {
        uVar6 = (int)((int)ppiVar10 - *puVar11) >> 2;
        if (0x3ffffffe < uVar6) goto LAB_0044d0ce;
        uVar6 = uVar6 + 1;
        uVar9 = (int)((int)*(int ***)(param_1 + 0x14) - *puVar11) >> 2;
        if (uVar9 < uVar6) {
          if (0x3fffffff - (uVar9 >> 1) < uVar9) {
            uVar9 = 0;
          }
          else {
            uVar9 = uVar9 + (uVar9 >> 1);
          }
          if (uVar9 < uVar6) {
            uVar9 = uVar6;
          }
          FUN_004bf300(uVar9);
        }
      }
      if (*(undefined4 **)(param_1 + 0x10) != (undefined4 *)0x0) {
        **(undefined4 **)(param_1 + 0x10) = apiStack_234[2];
      }
    }
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 4;
    (**(code **)(*apiStack_234[2] + 0xc))(param_2);
    iStack_c = 0xffffffff;
    if (0xf < uStack_1f4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(auStack_208[0]);
    }
  } while( true );
}

