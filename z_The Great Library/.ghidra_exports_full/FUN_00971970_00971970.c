// FUN_00971970 @ 00971970 body=[[00971970, 00971bd4] [00971bdd, 00971d72] [00971d76, 00971da5] [00971da9, 00971dd3] [00971dd7, 00971e01] [00971e05, 00971e2f] [00971e33, 00971e57] [00971e5b, 00971e79] [00971e7d, 00971ea6] [00971eaa, 00971f6a] [00971f6e, 00971fcc] [00971fd0, 00972005] [00972009, 0097204c]]


void FUN_00971970(int param_1,undefined4 *param_2)

{
  char cVar1;
  int **ppiVar2;
  int **ppiVar3;
  uint *puVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  char *pcVar8;
  undefined4 uVar9;
  uint uVar10;
  int *piVar11;
  undefined4 ***pppuVar12;
  int *piVar13;
  int *piStack_274;
  int local_270;
  int local_26c;
  uint *local_268;
  int *piStack_264;
  uint auStack_25c [4];
  undefined4 uStack_24c;
  uint uStack_248;
  undefined4 **appuStack_240 [4];
  undefined4 uStack_230;
  uint uStack_22c;
  uint auStack_220 [4];
  undefined4 uStack_210;
  uint uStack_20c;
  uint auStack_204 [4];
  undefined4 uStack_1f4;
  uint uStack_1f0;
  uint auStack_1e8 [4];
  undefined4 uStack_1d8;
  uint uStack_1d4;
  uint auStack_1c8 [4];
  undefined4 uStack_1b8;
  uint uStack_1b4;
  uint uStack_1ac;
  undefined4 uStack_19c;
  uint uStack_198;
  uint auStack_190 [4];
  undefined4 uStack_180;
  uint uStack_17c;
  uint uStack_174;
  undefined4 uStack_164;
  uint uStack_160;
  uint uStack_158;
  undefined4 uStack_148;
  uint uStack_144;
  uint uStack_13c;
  undefined4 uStack_12c;
  uint uStack_128;
  int aiStack_120 [30];
  undefined **appuStack_a8 [36];
  void *pvStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b640d1;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  if (DAT_01258a30 == 0) {
    ExceptionList = &pvStack_14;
    local_270 = FUN_00aae9af(0x7c);
    local_c = 0;
    if (local_270 == 0) {
      DAT_01258a30 = 0;
    }
    else {
      DAT_01258a30 = FUN_009717f0();
    }
  }
  iVar5 = DAT_01258a30;
  local_c = 0xffffffff;
  FUN_00972140(DAT_01258a30);
  local_268 = (uint *)(param_1 + 0xc);
  local_26c = iVar5;
  FUN_0068f390();
  local_26c = 1;
  do {
    piVar11 = (int *)param_2[7];
    if ((char)piVar11[0x44] == '\0') {
      iVar5 = (**(code **)(*piVar11 + 4))();
      piVar11[2] = iVar5;
      if (iVar5 == 0) {
        piVar11[3] = 0x13;
      }
      *(undefined1 *)(piVar11 + 0x44) = 1;
    }
    piVar11 = piVar11 + 3;
    piVar13 = aiStack_120;
    for (iVar5 = 0x41; iVar5 != 0; iVar5 = iVar5 + -1) {
      *piVar13 = *piVar11;
      piVar11 = piVar11 + 1;
      piVar13 = piVar13 + 1;
    }
    if (aiStack_120[0] == 0x13) {
      piStack_274 = (int *)0x0;
      piVar11 = (int *)*local_268;
      while( true ) {
        if ((piVar11 < (int *)*local_268) || ((int *)local_268[1] <= piVar11)) {
          (**(code **)*param_2)(1);
          ExceptionList = pvStack_18;
          return;
        }
        piVar13 = (int *)*piVar11;
        piStack_264 = piVar11 + 1;
        uStack_248 = 0xf;
        uStack_24c = 0;
        auStack_25c[0] = auStack_25c[0] & 0xffffff00;
        FUN_00409350(" name = ",8);
        local_c = 3;
        uStack_1f0 = 0xf;
        uStack_1f4 = 0;
        auStack_204[0] = auStack_204[0] & 0xffffff00;
        FUN_00409350(" tag = ",7);
        uStack_20c = 0xf;
        uStack_210 = 0;
        auStack_220[0] = auStack_220[0] & 0xffffff00;
        local_c._0_1_ = 5;
        pcVar8 = __itoa((int)piStack_274,(char *)auStack_1e8,10);
        pcVar6 = pcVar8;
        do {
          cVar1 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 != '\0');
        FUN_00409350(pcVar8,(int)pcVar6 - (int)(pcVar8 + 1));
        local_c._0_1_ = 6;
        local_270 = FUN_00988fa0(auStack_220);
        local_c._0_1_ = 7;
        piStack_274 = (int *)((int)piStack_274 + 1);
        local_26c = (**(code **)(*piVar13 + 0x1c))(auStack_190);
        local_c._0_1_ = 8;
        FUN_00988f20(auStack_204);
        local_c._0_1_ = 9;
        FUN_00988f20(piVar13 + 9);
        local_c._0_1_ = 10;
        FUN_00988f20(auStack_25c);
        local_c._0_1_ = 0xb;
        FUN_00988f20(local_26c);
        if (0xf < uStack_198) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(uStack_1ac);
        }
        uStack_198 = 0xf;
        uStack_19c = 0;
        uStack_1ac = uStack_1ac & 0xffffff00;
        if (0xf < uStack_160) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(uStack_174);
        }
        uStack_160 = 0xf;
        uStack_164 = 0;
        uStack_174 = uStack_174 & 0xffffff00;
        if (0xf < uStack_128) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(uStack_13c);
        }
        uStack_128 = 0xf;
        uStack_12c = 0;
        uStack_13c = uStack_13c & 0xffffff00;
        if (0xf < uStack_17c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(auStack_190[0]);
        }
        uStack_17c = 0xf;
        uStack_180 = 0;
        auStack_190[0] = auStack_190[0] & 0xffffff00;
        if (0xf < uStack_144) break;
        uStack_144 = 0xf;
        uStack_148 = 0;
        uStack_158 = uStack_158 & 0xffffff00;
        if (0xf < uStack_20c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(auStack_220[0]);
        }
        uStack_20c = 0xf;
        uStack_210 = 0;
        auStack_220[0] = auStack_220[0] & 0xffffff00;
        if (0xf < uStack_1f0) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(auStack_204[0]);
        }
        uStack_1f0 = 0xf;
        uStack_1f4 = 0;
        auStack_204[0] = auStack_204[0] & 0xffffff00;
        local_c._0_1_ = 0x14;
        if (0xf < uStack_248) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(auStack_25c[0]);
        }
        uStack_248 = 0xf;
        uStack_24c = 0;
        auStack_25c[0] = auStack_25c[0] & 0xffffff00;
        uStack_1d4 = 0xf;
        uStack_1d8 = 0;
        auStack_1e8[0] = auStack_1e8[0] & 0xffffff00;
        FUN_00409350("government.cpp",0xe);
        local_c._0_1_ = 0x15;
        uStack_22c = 0xf;
        uStack_230 = 0;
        appuStack_240[0] = (undefined4 **)((uint)appuStack_240[0] & 0xffffff00);
        FUN_00408ed0(auStack_1c8,0,0xffffffff);
        local_c._0_1_ = 0x16;
        uVar9 = FUN_004015b0(auStack_1e8,0x108,0x10000);
        local_c._0_1_ = 0x19;
        pppuVar12 = (undefined4 ***)appuStack_240[0];
        if (uStack_22c < 0x10) {
          pppuVar12 = appuStack_240;
        }
        local_270 = FUN_00418e30(uVar9,pppuVar12);
        local_c._0_1_ = 0x18;
        if (0xf < uStack_22c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(appuStack_240[0]);
        }
        uStack_22c = 0xf;
        uStack_230 = 0;
        appuStack_240[0] = (undefined4 **)((uint)appuStack_240[0] & 0xffffff00);
        FUN_00401280(local_270);
        local_c = CONCAT31(local_c._1_3_,0x15);
        FUN_00987ac0(appuStack_a8);
        appuStack_a8[0] = std::ios_base::vftable;
        FUN_00aad52d(appuStack_a8);
        if (0xf < uStack_1d4) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(auStack_1e8[0]);
        }
        local_c = 0xffffffff;
        uStack_1d4 = 0xf;
        uStack_1d8 = 0;
        auStack_1e8[0] = auStack_1e8[0] & 0xffffff00;
        if (0xf < uStack_1b4) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(auStack_1c8[0]);
        }
        uStack_1b4 = 0xf;
        uStack_1b8 = 0;
        auStack_1c8[0] = auStack_1c8[0] & 0xffffff00;
        piVar11 = piStack_264;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_158);
    }
    FUN_009a1440(param_2);
    uStack_248 = 0xf;
    uStack_24c = 0;
    auStack_25c[0] = auStack_25c[0] & 0xffffff00;
    pcVar6 = (char *)(param_2 + 9);
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    FUN_00409350(param_2 + 9,(int)pcVar6 - ((int)param_2 + 0x25));
    local_c = 1;
    local_270 = FUN_00aae9af(0x7c);
    iVar5 = local_26c;
    local_c._0_1_ = 2;
    if (local_270 == 0) {
      piStack_264 = (int *)0x0;
    }
    else {
      piStack_264 = (int *)FUN_009705a0(local_270,auStack_25c,local_26c);
      local_26c = iVar5 + 1;
    }
    local_c = CONCAT31(local_c._1_3_,1);
    piStack_274 = piStack_264;
    FUN_00972140(piStack_264);
    puVar4 = local_268;
    ppiVar2 = (int **)local_268[1];
    if ((&piStack_274 < ppiVar2) && (ppiVar3 = (int **)*local_268, ppiVar3 <= &piStack_274)) {
      local_270 = (int)&piStack_274 - (int)ppiVar3 >> 2;
      if (ppiVar2 == (int **)local_268[2]) {
        uVar7 = (int)ppiVar2 - (int)ppiVar3 >> 2;
        if (0x3ffffffe < uVar7) {
LAB_00971bdd:
                    /* WARNING: Subroutine does not return */
          FUN_00aad3ad("vector<T> too long");
        }
        uVar7 = uVar7 + 1;
        uVar10 = (int)local_268[2] - (int)ppiVar3 >> 2;
        if (uVar10 < uVar7) {
          if (0x3fffffff - (uVar10 >> 1) < uVar10) {
            uVar10 = 0;
          }
          else {
            uVar10 = uVar10 + (uVar10 >> 1);
          }
          if (uVar10 < uVar7) {
            uVar10 = uVar7;
          }
          FUN_004bf300(uVar10);
        }
      }
      if ((undefined4 *)puVar4[1] != (undefined4 *)0x0) {
        *(undefined4 *)puVar4[1] = *(undefined4 *)(*puVar4 + local_270 * 4);
      }
    }
    else {
      if (ppiVar2 == (int **)local_268[2]) {
        uVar7 = (int)((int)ppiVar2 - *local_268) >> 2;
        if (0x3ffffffe < uVar7) goto LAB_00971bdd;
        uVar7 = uVar7 + 1;
        uVar10 = (int)((int)local_268[2] - *local_268) >> 2;
        if (uVar10 < uVar7) {
          if (0x3fffffff - (uVar10 >> 1) < uVar10) {
            uVar10 = 0;
          }
          else {
            uVar10 = uVar10 + (uVar10 >> 1);
          }
          if (uVar10 < uVar7) {
            uVar10 = uVar7;
          }
          FUN_004bf300(uVar10);
        }
      }
      if ((undefined4 *)puVar4[1] != (undefined4 *)0x0) {
        *(undefined4 *)puVar4[1] = piStack_264;
      }
    }
    puVar4[1] = puVar4[1] + 4;
    (**(code **)(*piStack_264 + 0xc))(param_2);
    local_c = 0xffffffff;
    if (0xf < uStack_248) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(auStack_25c[0]);
    }
  } while( true );
}

