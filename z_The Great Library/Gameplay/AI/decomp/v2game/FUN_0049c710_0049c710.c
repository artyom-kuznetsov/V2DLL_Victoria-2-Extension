// FUN_0049c710 @ 0049c710 body=[[0049c710, 0049c86b] [0049c86f, 0049c886] [0049c890, 0049cba2] [0049cba6, 0049cbd4] [0049cbd8, 0049cc06] [0049cc0a, 0049cc38] [0049cc3c, 0049cc6a] [0049cc6e, 0049cc9c] [0049cca0, 0049ccce] [0049ccd2, 0049cd00] [0049cd04, 0049cd32] [0049cd36, 0049cd64] [0049cd68, 0049cd98] [0049cd9c, 0049cf31] [0049cf35, 0049cf8e] [0049cf92, 0049cfb3] [0049cfb7, 0049cfec] [0049cff0, 0049d036]]


void FUN_0049c710(int param_1)

{
  char cVar1;
  int **ppiVar2;
  int **ppiVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  char *pcVar8;
  int *piVar9;
  uint uVar10;
  uint *puVar11;
  int *piVar12;
  undefined1 local_3e4 [8];
  undefined4 uStack_3dc;
  int *local_3b8 [4];
  uint uStack_3a8;
  undefined4 uStack_398;
  uint uStack_394;
  char acStack_38c [4];
  uint uStack_388;
  undefined4 uStack_378;
  uint uStack_374;
  undefined1 uStack_36c;
  uint uStack_368;
  undefined4 uStack_35c;
  undefined4 uStack_358;
  uint uStack_354;
  uint local_34c;
  undefined4 local_33c;
  uint local_338;
  undefined1 uStack_334;
  uint uStack_330;
  undefined4 uStack_324;
  undefined4 uStack_320;
  uint uStack_31c;
  undefined1 uStack_318;
  uint uStack_314;
  undefined4 uStack_308;
  undefined4 uStack_304;
  uint uStack_300;
  undefined1 uStack_2fc;
  uint uStack_2f8;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  uint uStack_2e4;
  uint local_2dc [4];
  undefined4 local_2cc;
  uint local_2c8;
  undefined1 uStack_2c4;
  uint uStack_2c0;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  uint uStack_2ac;
  uint uStack_2a4;
  undefined4 uStack_294;
  uint uStack_290;
  uint uStack_288;
  undefined4 uStack_278;
  uint uStack_274;
  uint uStack_26c;
  undefined4 uStack_25c;
  uint uStack_258;
  uint uStack_250;
  undefined4 uStack_240;
  uint uStack_23c;
  uint uStack_234;
  undefined4 uStack_224;
  uint uStack_220;
  uint uStack_218;
  undefined4 uStack_208;
  uint uStack_204;
  uint uStack_1fc;
  undefined4 uStack_1ec;
  uint uStack_1e8;
  undefined **ppuStack_168;
  int local_11c [65];
  void *pvStack_18;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b8280b;
  local_14 = ExceptionList;
  local_3b8[0] = (int *)0x0;
  local_3b8[3] = (int *)0x0;
  ExceptionList = &local_14;
  puVar5 = (undefined4 *)FUN_00aae9af();
  local_c = 0;
  if (puVar5 == (undefined4 *)0x0) {
    local_3b8[1] = (undefined4 *)0x0;
  }
  else {
    local_338 = 0xf;
    local_33c = 0;
    local_34c = local_34c & 0xffffff00;
    FUN_00409350();
    local_c = CONCAT31(local_c._1_3_,1);
    local_3b8[0] = (int *)0x1;
    puVar6 = (undefined4 *)FUN_00aae9af();
    local_c = 2;
    local_3b8[2] = puVar6;
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      FUN_0098ffc0();
      *puVar6 = &PTR_FUN_00e37c3c;
    }
    *puVar5 = &PTR_FUN_00e38524;
    puVar5[1] = 0;
    puVar5[2] = 0;
    puVar5[3] = 0;
    *(undefined1 *)(puVar5 + 4) = 0;
    local_c = 3;
    *(undefined1 *)(puVar5 + 5) = 0;
    puVar5[7] = puVar6;
    puVar5[0xd0] = 0xf;
    puVar5[0xcf] = 0;
    *(undefined1 *)(puVar5 + 0xcb) = 0;
    FUN_00408ed0();
    puVar5[0xd2] = 0;
    puVar5[0xd3] = 0;
    puVar5[0xd4] = 0;
    *(undefined1 *)(puVar5 + 0xd6) = 1;
    puVar5[0xd7] = 0;
    local_3b8[1] = puVar5;
  }
  local_c = 0xffffffff;
  if (((uint)local_3b8[0] & 1) != 0) {
    if (0xf < local_338) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_338 = 0xf;
    local_33c = 0;
    local_34c = local_34c & 0xffffff00;
  }
  do {
    local_c = 0xffffffff;
    piVar9 = (int *)local_3b8[1][7];
    if ((char)piVar9[0x44] == '\0') {
      iVar7 = (**(code **)(*piVar9 + 4))();
      piVar9[2] = iVar7;
      if (iVar7 == 0) {
        piVar9[3] = 0x13;
      }
      *(undefined1 *)(piVar9 + 0x44) = 1;
    }
    piVar4 = local_3b8[1];
    piVar9 = piVar9 + 3;
    piVar12 = local_11c;
    for (iVar7 = 0x41; iVar7 != 0; iVar7 = iVar7 + -1) {
      *piVar12 = *piVar9;
      piVar9 = piVar9 + 1;
      piVar12 = piVar12 + 1;
    }
    if (local_11c[0] == 0x13) {
      (**(code **)*local_3b8[1])();
      ExceptionList = pvStack_18;
      return;
    }
    FUN_009a1440();
    pcVar8 = (char *)(piVar4 + 9);
    local_2c8 = 0xf;
    local_2cc = 0;
    local_2dc[0] = local_2dc[0] & 0xffffff00;
    do {
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_00409350();
    local_c = 5;
    iVar7 = FUN_00aae9af();
    local_c._0_1_ = 6;
    if (iVar7 == 0) {
      piVar9 = (int *)0x0;
    }
    else {
      local_3b8[2] = (int *)local_3e4;
      local_3e4[0] = 0;
      FUN_00408ed0(local_2dc,0,0xffffffff);
      piVar9 = (int *)FUN_00494320(iVar7);
    }
    local_c._0_1_ = 5;
    local_3b8[0] = piVar9;
    (**(code **)(*piVar9 + 0xc))();
    uStack_358 = 0xf;
    uStack_35c = 0;
    uStack_36c = 0;
    FUN_00409350();
    puStack_10._0_1_ = 7;
    uStack_2e8 = 0xf;
    uStack_2ec = 0;
    uStack_2fc = 0;
    FUN_00409350();
    puStack_10._0_1_ = 8;
    uStack_2b0 = 0xf;
    uStack_2b4 = 0;
    uStack_2c4 = 0;
    FUN_00409350();
    uStack_320 = 0xf;
    uStack_324 = 0;
    uStack_334 = 0;
    puStack_10._0_1_ = 10;
    uStack_3dc = 0x49ca3a;
    pcVar8 = __itoa((int)local_3b8[2],acStack_38c,10);
    do {
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_00409350();
    puStack_10._0_1_ = 0xb;
    local_3b8[1] = (int *)FUN_00988fa0();
    local_3b8[2] = (int *)((int)local_3b8[2] + 1);
    uStack_304 = 0xf;
    uStack_308 = 0;
    uStack_318 = 0;
    puStack_10._0_1_ = 0xd;
    uStack_3dc = 0x49cab8;
    pcVar8 = __itoa(piVar9[0xe],acStack_38c,10);
    do {
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_00409350();
    puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,0xe);
    (**(code **)(*piVar9 + 0x18))();
    local_c._0_1_ = 0xf;
    FUN_00988f20();
    local_c._0_1_ = 0x10;
    FUN_00988f20();
    local_c._0_1_ = 0x11;
    FUN_00988f20();
    local_c._0_1_ = 0x12;
    FUN_00988f20();
    local_c._0_1_ = 0x13;
    FUN_00988f20();
    if (0xf < uStack_274) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_274 = 0xf;
    uStack_278 = 0;
    uStack_288 = uStack_288 & 0xffffff00;
    if (0xf < uStack_23c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_23c = 0xf;
    uStack_240 = 0;
    uStack_250 = uStack_250 & 0xffffff00;
    if (0xf < uStack_1e8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_1e8 = 0xf;
    uStack_1ec = 0;
    uStack_1fc = uStack_1fc & 0xffffff00;
    if (0xf < uStack_204) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_204 = 0xf;
    uStack_208 = 0;
    uStack_218 = uStack_218 & 0xffffff00;
    if (0xf < uStack_258) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_258 = 0xf;
    uStack_25c = 0;
    uStack_26c = uStack_26c & 0xffffff00;
    if (0xf < uStack_300) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_300 = 0xf;
    uStack_304 = 0;
    uStack_314 = uStack_314 & 0xffffff00;
    if (0xf < uStack_220) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_220 = 0xf;
    uStack_224 = 0;
    uStack_234 = uStack_234 & 0xffffff00;
    if (0xf < uStack_31c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_31c = 0xf;
    uStack_320 = 0;
    uStack_330 = uStack_330 & 0xffffff00;
    if (0xf < uStack_2ac) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_2ac = 0xf;
    uStack_2b0 = 0;
    uStack_2c0 = uStack_2c0 & 0xffffff00;
    if (0xf < uStack_2e4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_2e4 = 0xf;
    uStack_2e8 = 0;
    uStack_2f8 = uStack_2f8 & 0xffffff00;
    local_c = CONCAT31(local_c._1_3_,0x1f);
    if (0xf < uStack_354) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    ppiVar2 = *(int ***)(param_1 + 0x2a7c);
    puVar11 = (uint *)(param_1 + 0x2a78);
    uStack_354 = 0xf;
    uStack_358 = 0;
    uStack_368 = uStack_368 & 0xffffff00;
    if (local_3b8 < ppiVar2) {
      ppiVar3 = (int **)*puVar11;
      if (local_3b8 < ppiVar3) goto LAB_0049ce2f;
      if (ppiVar2 == *(int ***)(param_1 + 0x2a80)) {
        uVar10 = (int)ppiVar2 - (int)ppiVar3 >> 2;
        if (0x3ffffffe < uVar10) goto LAB_0049d00a;
        if ((uint)((int)*(int ***)(param_1 + 0x2a80) - (int)ppiVar3 >> 2) < uVar10 + 1) {
          FUN_004bf300();
        }
      }
      if (*(undefined4 **)(param_1 + 0x2a7c) != (undefined4 *)0x0) {
        **(undefined4 **)(param_1 + 0x2a7c) =
             *(undefined4 *)(*puVar11 + ((int)local_3b8 - (int)ppiVar3 >> 2) * 4);
      }
    }
    else {
LAB_0049ce2f:
      if (ppiVar2 == *(int ***)(param_1 + 0x2a80)) {
        uVar10 = (int)((int)ppiVar2 - *puVar11) >> 2;
        if (0x3ffffffe < uVar10) {
LAB_0049d00a:
                    /* WARNING: Subroutine does not return */
          FUN_00aad3ad();
        }
        if ((uint)((int)((int)*(int ***)(param_1 + 0x2a80) - *puVar11) >> 2) < uVar10 + 1) {
          FUN_004bf300();
        }
      }
      if (*(undefined4 **)(param_1 + 0x2a7c) != (undefined4 *)0x0) {
        **(undefined4 **)(param_1 + 0x2a7c) = piVar9;
      }
    }
    *(int *)(param_1 + 0x2a7c) = *(int *)(param_1 + 0x2a7c) + 4;
    uStack_374 = 0xf;
    uStack_378 = 0;
    uStack_388 = uStack_388 & 0xffffff00;
    FUN_00409350();
    local_c._0_1_ = 0x20;
    uStack_394 = 0xf;
    uStack_398 = 0;
    uStack_3a8 = uStack_3a8 & 0xffffff00;
    FUN_00408ed0();
    local_c._0_1_ = 0x21;
    FUN_004015b0();
    local_c._0_1_ = 0x24;
    FUN_00418e30();
    local_c._0_1_ = 0x23;
    if (0xf < uStack_394) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_394 = 0xf;
    uStack_398 = 0;
    uStack_3a8 = uStack_3a8 & 0xffffff00;
    FUN_00401280();
    local_c = CONCAT31(local_c._1_3_,0x20);
    FUN_00987ac0();
    ppuStack_168 = std::ios_base::vftable;
    FUN_00aad52d();
    if (0xf < uStack_374) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_374 = 0xf;
    uStack_378 = 0;
    uStack_388 = uStack_388 & 0xffffff00;
    if (0xf < uStack_290) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_c = 0xffffffff;
    uStack_290 = 0xf;
    uStack_294 = 0;
    uStack_2a4 = uStack_2a4 & 0xffffff00;
    if (0xf < local_2c8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_2c8 = 0xf;
    local_2cc = 0;
    local_2dc[0] = local_2dc[0] & 0xffffff00;
  } while( true );
}

