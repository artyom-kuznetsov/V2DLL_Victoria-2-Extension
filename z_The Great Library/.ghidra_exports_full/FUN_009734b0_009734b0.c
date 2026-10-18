// FUN_009734b0 @ 009734b0 body=[[009734b0, 00973748] [00973751, 009738e6] [009738ea, 00973919] [0097391d, 00973947] [0097394b, 00973975] [00973979, 009739a3] [009739a7, 009739cb] [009739cf, 009739ed] [009739f1, 00973a1a] [00973a1e, 00973ade] [00973ae2, 00973b40] [00973b44, 00973b79] [00973b7d, 00973bc0]]


void FUN_009734b0(int param_1,undefined4 *param_2)

{
  uint *puVar1;
  char cVar2;
  int **ppiVar3;
  int **ppiVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  int *piStack_274;
  int *apiStack_264 [2];
  uint auStack_25c [4];
  undefined4 uStack_24c;
  uint uStack_248;
  uint uStack_240;
  undefined4 uStack_230;
  uint uStack_22c;
  uint uStack_220;
  undefined4 uStack_210;
  uint uStack_20c;
  uint uStack_204;
  undefined4 uStack_1f4;
  uint uStack_1f0;
  uint auStack_1e8 [4];
  undefined4 uStack_1d8;
  uint uStack_1d4;
  uint uStack_1c8;
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
  uint uStack_13c;
  undefined4 uStack_12c;
  uint uStack_128;
  int aiStack_120 [30];
  undefined **ppuStack_a8;
  void *pvStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b789c1;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  if (DAT_01258a34 == 0) {
    ExceptionList = &pvStack_14;
    iVar5 = FUN_00aae9af();
    local_c = 0;
    if (iVar5 == 0) {
      DAT_01258a34 = 0;
    }
    else {
      DAT_01258a34 = FUN_00972e50();
    }
  }
  local_c = 0xffffffff;
  FUN_0099ec90();
  FUN_0068f390();
  puVar1 = (uint *)(param_1 + 0x2c);
  FUN_0068f390();
  DAT_01258a38 = 1;
  do {
    piVar8 = (int *)param_2[7];
    if ((char)piVar8[0x44] == '\0') {
      iVar5 = (**(code **)(*piVar8 + 4))();
      piVar8[2] = iVar5;
      if (iVar5 == 0) {
        piVar8[3] = 0x13;
      }
      *(undefined1 *)(piVar8 + 0x44) = 1;
    }
    piVar8 = piVar8 + 3;
    piVar9 = aiStack_120;
    for (iVar5 = 0x41; iVar5 != 0; iVar5 = iVar5 + -1) {
      *piVar9 = *piVar8;
      piVar8 = piVar8 + 1;
      piVar9 = piVar9 + 1;
    }
    if (aiStack_120[0] == 0x13) {
      piStack_274 = (int *)0x0;
      piVar8 = *(int **)(param_1 + 0xc);
      while( true ) {
        if ((piVar8 < *(int **)(param_1 + 0xc)) || (*(int **)(param_1 + 0x10) <= piVar8)) {
          (**(code **)*param_2)();
          ExceptionList = pvStack_18;
          return;
        }
        piVar9 = (int *)*piVar8;
        apiStack_264[0] = piVar8 + 1;
        uStack_248 = 0xf;
        uStack_24c = 0;
        auStack_25c[0] = auStack_25c[0] & 0xffffff00;
        FUN_00409350();
        local_c = 3;
        uStack_1f0 = 0xf;
        uStack_1f4 = 0;
        uStack_204 = uStack_204 & 0xffffff00;
        FUN_00409350();
        uStack_20c = 0xf;
        uStack_210 = 0;
        uStack_220 = uStack_220 & 0xffffff00;
        local_c._0_1_ = 5;
        pcVar6 = __itoa((int)piStack_274,(char *)auStack_1e8,10);
        do {
          cVar2 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar2 != '\0');
        FUN_00409350();
        local_c._0_1_ = 6;
        FUN_00988fa0();
        local_c._0_1_ = 7;
        piStack_274 = (int *)((int)piStack_274 + 1);
        (**(code **)(*piVar9 + 0x18))();
        local_c._0_1_ = 8;
        FUN_00988f20();
        local_c._0_1_ = 9;
        FUN_00988f20();
        local_c._0_1_ = 10;
        FUN_00988f20();
        local_c._0_1_ = 0xb;
        FUN_00988f20();
        if (0xf < uStack_198) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        uStack_198 = 0xf;
        uStack_19c = 0;
        uStack_1ac = uStack_1ac & 0xffffff00;
        if (0xf < uStack_160) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        uStack_160 = 0xf;
        uStack_164 = 0;
        uStack_174 = uStack_174 & 0xffffff00;
        if (0xf < uStack_128) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        uStack_128 = 0xf;
        uStack_12c = 0;
        uStack_13c = uStack_13c & 0xffffff00;
        if (0xf < uStack_17c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        uStack_17c = 0xf;
        uStack_180 = 0;
        uStack_190 = uStack_190 & 0xffffff00;
        if (0xf < uStack_144) break;
        uStack_144 = 0xf;
        uStack_148 = 0;
        uStack_158 = uStack_158 & 0xffffff00;
        if (0xf < uStack_20c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        uStack_20c = 0xf;
        uStack_210 = 0;
        uStack_220 = uStack_220 & 0xffffff00;
        if (0xf < uStack_1f0) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        uStack_1f0 = 0xf;
        uStack_1f4 = 0;
        uStack_204 = uStack_204 & 0xffffff00;
        local_c._0_1_ = 0x14;
        if (0xf < uStack_248) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        uStack_248 = 0xf;
        uStack_24c = 0;
        auStack_25c[0] = auStack_25c[0] & 0xffffff00;
        uStack_1d4 = 0xf;
        uStack_1d8 = 0;
        auStack_1e8[0] = auStack_1e8[0] & 0xffffff00;
        FUN_00409350();
        local_c._0_1_ = 0x15;
        uStack_22c = 0xf;
        uStack_230 = 0;
        uStack_240 = uStack_240 & 0xffffff00;
        FUN_00408ed0();
        local_c._0_1_ = 0x16;
        FUN_004015b0();
        local_c._0_1_ = 0x19;
        FUN_00418e30();
        local_c._0_1_ = 0x18;
        if (0xf < uStack_22c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        uStack_22c = 0xf;
        uStack_230 = 0;
        uStack_240 = uStack_240 & 0xffffff00;
        FUN_00401280();
        local_c = CONCAT31(local_c._1_3_,0x15);
        FUN_00987ac0();
        ppuStack_a8 = std::ios_base::vftable;
        FUN_00aad52d();
        if (0xf < uStack_1d4) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_c = 0xffffffff;
        uStack_1d4 = 0xf;
        uStack_1d8 = 0;
        auStack_1e8[0] = auStack_1e8[0] & 0xffffff00;
        if (0xf < uStack_1b4) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        uStack_1b4 = 0xf;
        uStack_1b8 = 0;
        uStack_1c8 = uStack_1c8 & 0xffffff00;
        piVar8 = apiStack_264[0];
      }
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    FUN_009a1440();
    pcVar6 = (char *)(param_2 + 9);
    uStack_248 = 0xf;
    uStack_24c = 0;
    auStack_25c[0] = auStack_25c[0] & 0xffffff00;
    do {
      cVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar2 != '\0');
    FUN_00409350();
    local_c = 1;
    iVar5 = FUN_00aae9af();
    local_c._0_1_ = 2;
    if (iVar5 == 0) {
      piStack_274 = (int *)0x0;
    }
    else {
      FUN_00408ed0(auStack_25c,0,0xffffffff);
      piStack_274 = (int *)FUN_00972f00(iVar5);
    }
    local_c = CONCAT31(local_c._1_3_,1);
    apiStack_264[0] = piStack_274;
    (**(code **)(*piStack_274 + 0xc))();
    ppiVar3 = *(int ***)(param_1 + 0x30);
    if ((apiStack_264 < ppiVar3) && (ppiVar4 = (int **)*puVar1, ppiVar4 <= apiStack_264)) {
      if (ppiVar3 == *(int ***)(param_1 + 0x34)) {
        uVar7 = (int)ppiVar3 - (int)ppiVar4 >> 2;
        if (0x3ffffffe < uVar7) {
LAB_00973751:
                    /* WARNING: Subroutine does not return */
          FUN_00aad3ad();
        }
        if ((uint)((int)*(int ***)(param_1 + 0x34) - (int)ppiVar4 >> 2) < uVar7 + 1) {
          FUN_004bf300();
        }
      }
      if (*(undefined4 **)(param_1 + 0x30) != (undefined4 *)0x0) {
        **(undefined4 **)(param_1 + 0x30) =
             *(undefined4 *)(*puVar1 + ((int)apiStack_264 - (int)ppiVar4 >> 2) * 4);
      }
    }
    else {
      if (ppiVar3 == *(int ***)(param_1 + 0x34)) {
        uVar7 = (int)((int)ppiVar3 - *puVar1) >> 2;
        if (0x3ffffffe < uVar7) goto LAB_00973751;
        if ((uint)((int)((int)*(int ***)(param_1 + 0x34) - *puVar1) >> 2) < uVar7 + 1) {
          FUN_004bf300();
        }
      }
      if (*(undefined4 **)(param_1 + 0x30) != (undefined4 *)0x0) {
        **(undefined4 **)(param_1 + 0x30) = piStack_274;
      }
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 4;
    local_c = 0xffffffff;
    if (0xf < uStack_248) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  } while( true );
}

