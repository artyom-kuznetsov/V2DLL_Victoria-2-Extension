// FUN_0055e910 @ 0055e910 body=[[0055e910, 0055ed23] [0055ed2c, 0055ee8c] [0055ee90, 0055eefa] [0055eefe, 0055f030] [0055f034, 0055f09a] [0055f09e, 0055f214] [0055f218, 0055f248] [0055f24c, 0055f277] [0055f27b, 0055f2a6] [0055f2aa, 0055f2cf] [0055f2d3, 0055f2f5] [0055f2f9, 0055f324] [0055f328, 0055f355] [0055f359, 0055f419] [0055f41d, 0055f444] [0055f448, 0055f47b] [0055f47f, 0055f543] [0055f547, 0055f5a9] [0055f5ad, 0055f5e2] [0055f5e6, 0055f639]]


void FUN_0055e910(int param_1,undefined4 *param_2)

{
  char cVar1;
  void *pvVar2;
  int **ppiVar3;
  int **ppiVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  char *pcVar8;
  uint uVar9;
  int *piVar10;
  int *piVar11;
  undefined1 auStack_388 [12];
  undefined4 uStack_37c;
  uint *puStack_378;
  int *piStack_354;
  int *local_350 [2];
  int local_348;
  int local_344;
  uint uStack_340;
  undefined4 uStack_330;
  uint uStack_32c;
  uint auStack_320 [4];
  undefined4 uStack_310;
  uint uStack_30c;
  int local_304;
  uint uStack_300;
  undefined4 uStack_2f0;
  uint uStack_2ec;
  uint uStack_2e0;
  undefined4 uStack_2d0;
  uint uStack_2cc;
  uint uStack_2c4;
  undefined4 uStack_2b4;
  uint uStack_2b0;
  uint uStack_2a8;
  undefined4 uStack_298;
  uint uStack_294;
  uint auStack_28c [4];
  undefined4 uStack_27c;
  uint uStack_278;
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
  int aiStack_120 [30];
  undefined **ppuStack_a8;
  void *pvStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b8f03a;
  pvStack_14 = ExceptionList;
  pvVar2 = *(void **)(param_1 + 0x1c);
  local_350[1] = (int *)(param_1 + 0x1c);
  ExceptionList = &pvStack_14;
  if (pvVar2 != *(void **)(param_1 + 0x20)) {
    puStack_378 = (uint *)0x55e95e;
    ExceptionList = &pvStack_14;
    FID_conflict__memcpy(pvVar2,*(void **)(param_1 + 0x20),0);
    *(void **)(param_1 + 0x20) = pvVar2;
  }
  FUN_0057afc0();
  pvVar2 = *(void **)(param_1 + 0xc);
  local_344 = param_1 + 0xc;
  if (pvVar2 != *(void **)(param_1 + 0x10)) {
    puStack_378 = (uint *)0x55e996;
    FID_conflict__memcpy(pvVar2,*(void **)(param_1 + 0x10),0);
    *(void **)(param_1 + 0x10) = pvVar2;
  }
  local_304 = 1;
  if (DAT_012587ec == (int *)0x0) {
    local_348 = FUN_00aae9af();
    local_c = 0;
    if (local_348 == 0) {
      DAT_012587ec = (int *)0x0;
    }
    else {
      DAT_012587ec = (int *)FUN_00561080();
    }
    local_c = 0xffffffff;
  }
  piVar10 = DAT_012587ec;
  FUN_005611f0();
  local_350[0] = DAT_0125e38c;
  FUN_0068f390();
  local_350[0] = piVar10;
  FUN_0068f390();
  local_344 = 1;
  piVar10 = local_350[0];
  do {
    local_350[0] = piVar10;
    piVar10 = (int *)param_2[7];
    if ((char)piVar10[0x44] == '\0') {
      iVar7 = (**(code **)(*piVar10 + 4))();
      piVar10[2] = iVar7;
      if (iVar7 == 0) {
        piVar10[3] = 0x13;
      }
      *(undefined1 *)(piVar10 + 0x44) = 1;
    }
    piVar10 = piVar10 + 3;
    piVar11 = aiStack_120;
    for (iVar7 = 0x41; iVar7 != 0; iVar7 = iVar7 + -1) {
      *piVar11 = *piVar10;
      piVar10 = piVar10 + 1;
      piVar11 = piVar11 + 1;
    }
    if (aiStack_120[0] == 0x13) {
      piStack_354 = (int *)0x0;
      if (0 < (int)(local_350[1][1] - *local_350[1] & 0xfffffffcU)) {
        do {
          if (0 < (int)piStack_354) {
            iVar5 = (int)piStack_354 * 4;
            iVar7 = *(int *)(iVar5 + *local_350[1]);
            if ((*(int *)(iVar7 + 0xb8) - *(int *)(iVar7 + 0xb4)) / 0x1c < 1) {
              piVar10 = *(int **)(iVar7 + 8);
              bVar6 = false;
              if (piVar10 != (int *)0x0) {
                do {
                  iVar7 = *piVar10;
                  piVar10 = (int *)piVar10[2];
                  if ((*(int *)(iVar7 + 0x74) - *(int *)(iVar7 + 0x70)) / 0x1c < 1) {
                    bVar6 = true;
                  }
                } while (piVar10 != (int *)0x0);
                if (bVar6) {
                  uStack_30c = 0xf;
                  uStack_310 = 0;
                  auStack_320[0] = auStack_320[0] & 0xffffff00;
                  FUN_00409350();
                  local_c = 3;
                  puStack_378 = (uint *)(*(int *)(*local_350[1] + iVar5) + 0x24);
                  uStack_32c = 0xf;
                  uStack_330 = 0;
                  uStack_340 = uStack_340 & 0xffffff00;
                  uStack_37c = 0x55ee2e;
                  FUN_00408ed0();
                  puStack_378 = auStack_320;
                  local_c._0_1_ = 4;
                  uStack_37c = 0x55ee4e;
                  FUN_004015b0();
                  local_c._0_1_ = 7;
                  puStack_378 = (uint *)0x55ee6f;
                  FUN_00418e30();
                  local_c._0_1_ = 6;
                  if (0xf < uStack_32c) {
                    /* WARNING: Subroutine does not return */
                    FUN_00aae91b();
                  }
                  uStack_32c = 0xf;
                  uStack_330 = 0;
                  uStack_340 = uStack_340 & 0xffffff00;
                  FUN_00418e30();
                  puStack_378 = (uint *)0x55eeac;
                  FUN_00401280();
                  local_c = CONCAT31(local_c._1_3_,3);
                  FUN_00987ac0();
                  ppuStack_168 = std::ios_base::vftable;
                  FUN_00aad52d();
                  local_c = 0xffffffff;
                  if (0xf < uStack_30c) {
                    /* WARNING: Subroutine does not return */
                    FUN_00aae91b();
                  }
                }
              }
            }
            iVar7 = *(int *)(iVar5 + *local_350[1]);
            if ((*(int *)(iVar7 + 200) - *(int *)(iVar7 + 0xc4)) / 0x1c < 1) {
              piVar10 = *(int **)(iVar7 + 8);
              bVar6 = false;
              if (piVar10 != (int *)0x0) {
                do {
                  iVar7 = *piVar10;
                  piVar10 = (int *)piVar10[2];
                  if ((*(int *)(iVar7 + 0x84) - *(int *)(iVar7 + 0x80)) / 0x1c < 1) {
                    bVar6 = true;
                  }
                } while (piVar10 != (int *)0x0);
                if (bVar6) {
                  uStack_30c = 0xf;
                  uStack_310 = 0;
                  auStack_320[0] = auStack_320[0] & 0xffffff00;
                  FUN_00409350();
                  local_c = 8;
                  puStack_378 = (uint *)(*(int *)(*local_350[1] + iVar5) + 0x24);
                  uStack_32c = 0xf;
                  uStack_330 = 0;
                  uStack_340 = uStack_340 & 0xffffff00;
                  uStack_37c = 0x55efd2;
                  FUN_00408ed0();
                  puStack_378 = auStack_320;
                  local_c._0_1_ = 9;
                  uStack_37c = 0x55eff2;
                  FUN_004015b0();
                  local_c._0_1_ = 0xc;
                  puStack_378 = (uint *)0x55f013;
                  FUN_00418e30();
                  local_c._0_1_ = 0xb;
                  if (0xf < uStack_32c) {
                    /* WARNING: Subroutine does not return */
                    FUN_00aae91b();
                  }
                  uStack_32c = 0xf;
                  uStack_330 = 0;
                  uStack_340 = uStack_340 & 0xffffff00;
                  FUN_00418e30();
                  puStack_378 = (uint *)0x55f04c;
                  FUN_00401280();
                  local_c = CONCAT31(local_c._1_3_,8);
                  FUN_00987ac0();
                  ppuStack_168 = std::ios_base::vftable;
                  FUN_00aad52d();
                  local_c = 0xffffffff;
                  if (0xf < uStack_30c) {
                    /* WARNING: Subroutine does not return */
                    FUN_00aae91b();
                  }
                }
              }
            }
          }
          uStack_30c = 0xf;
          uStack_310 = 0;
          auStack_320[0] = auStack_320[0] & 0xffffff00;
          FUN_00409350();
          local_c = 0xd;
          uStack_2b0 = 0xf;
          uStack_2b4 = 0;
          uStack_2c4 = uStack_2c4 & 0xffffff00;
          FUN_00409350();
          local_c._0_1_ = 0xe;
          iVar7 = (int)piStack_354 * 4;
          local_348 = FUN_00560aa0();
          uStack_32c = 0xf;
          uStack_330 = 0;
          uStack_340 = uStack_340 & 0xffffff00;
          local_c._0_1_ = 0x10;
          puStack_378 = (uint *)0x55f148;
          pcVar8 = __itoa((int)piStack_354,(char *)auStack_28c,10);
          do {
            cVar1 = *pcVar8;
            pcVar8 = pcVar8 + 1;
          } while (cVar1 != '\0');
          FUN_00409350();
          local_c._0_1_ = 0x11;
          FUN_00988fa0();
          local_c._0_1_ = 0x12;
          FUN_00988f20();
          local_c._0_1_ = 0x13;
          FUN_00988f20();
          local_c._0_1_ = 0x14;
          FUN_00988f20();
          local_c._0_1_ = 0x15;
          FUN_00988f20();
          if (0xf < uStack_220) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          uStack_220 = 0xf;
          uStack_224 = 0;
          uStack_234 = uStack_234 & 0xffffff00;
          if (0xf < uStack_258) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          uStack_258 = 0xf;
          uStack_25c = 0;
          uStack_26c = uStack_26c & 0xffffff00;
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
          if (0xf < uStack_32c) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          uStack_32c = 0xf;
          uStack_330 = 0;
          uStack_340 = uStack_340 & 0xffffff00;
          if (0xf < uStack_23c) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          uStack_23c = 0xf;
          uStack_240 = 0;
          uStack_250 = uStack_250 & 0xffffff00;
          if (0xf < uStack_2b0) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          uStack_2b0 = 0xf;
          uStack_2b4 = 0;
          uStack_2c4 = uStack_2c4 & 0xffffff00;
          local_c._0_1_ = 0x1e;
          if (0xf < uStack_30c) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          uStack_30c = 0xf;
          uStack_310 = 0;
          auStack_320[0] = auStack_320[0] & 0xffffff00;
          FUN_00448740();
          iVar7 = *(int *)(*(int *)(iVar7 + *local_350[1]) + 8);
          while (iVar7 != 0) {
            iVar7 = *(int *)(iVar7 + 8);
            uStack_2cc = 0xf;
            uStack_2d0 = 0;
            uStack_2e0 = uStack_2e0 & 0xffffff00;
            FUN_00409350();
            local_c._0_1_ = 0x1f;
            FUN_00974c50();
            local_c._0_1_ = 0x20;
            FUN_00988f20();
            local_c._0_1_ = 0x21;
            puStack_378 = (uint *)0x55f409;
            FUN_00448aa0();
            if (0xf < uStack_2ec) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
            uStack_2ec = 0xf;
            uStack_2f0 = 0;
            uStack_300 = uStack_300 & 0xffffff00;
            if (0xf < uStack_278) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
            local_c._0_1_ = 0x1e;
            uStack_278 = 0xf;
            uStack_27c = 0;
            auStack_28c[0] = auStack_28c[0] & 0xffffff00;
            if (0xf < uStack_2cc) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
          }
          uStack_2cc = 0xf;
          uStack_2d0 = 0;
          uStack_2e0 = uStack_2e0 & 0xffffff00;
          FUN_00409350();
          local_c._0_1_ = 0x22;
          uStack_2ec = 0xf;
          uStack_2f0 = 0;
          uStack_300 = uStack_300 & 0xffffff00;
          puStack_378 = (uint *)0x55f4e2;
          FUN_00408ed0();
          local_c._0_1_ = 0x23;
          puStack_378 = (uint *)0x55f505;
          FUN_004015b0();
          local_c._0_1_ = 0x26;
          FUN_00418e30();
          local_c._0_1_ = 0x25;
          if (0xf < uStack_2ec) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          uStack_2ec = 0xf;
          uStack_2f0 = 0;
          uStack_300 = uStack_300 & 0xffffff00;
          FUN_00401280();
          local_c = CONCAT31(local_c._1_3_,0x22);
          FUN_00987ac0();
          ppuStack_a8 = std::ios_base::vftable;
          FUN_00aad52d();
          if (0xf < uStack_2cc) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_c = 0xffffffff;
          uStack_2cc = 0xf;
          uStack_2d0 = 0;
          uStack_2e0 = uStack_2e0 & 0xffffff00;
          if (0xf < uStack_294) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          piStack_354 = (int *)((int)piStack_354 + 1);
          uStack_294 = 0xf;
          uStack_298 = 0;
          uStack_2a8 = uStack_2a8 & 0xffffff00;
        } while ((int)piStack_354 < local_350[1][1] - *local_350[1] >> 2);
      }
      (**(code **)*param_2)();
      ExceptionList = pvStack_18;
      return;
    }
    FUN_009a1440();
    pcVar8 = (char *)(param_2 + 9);
    uStack_30c = 0xf;
    uStack_310 = 0;
    auStack_320[0] = auStack_320[0] & 0xffffff00;
    do {
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_00409350();
    local_c = 1;
    iVar7 = FUN_00aae9af();
    local_c._0_1_ = 2;
    local_348 = iVar7;
    if (iVar7 == 0) {
      piStack_354 = (int *)0x0;
    }
    else {
      local_350[0] = (int *)auStack_388;
      puStack_378 = (uint *)0x0;
      auStack_388[0] = 0;
      FUN_00408ed0(auStack_320,0,0xffffffff);
      piStack_354 = (int *)FUN_0055f7c0(iVar7);
      local_344 = local_344 + 1;
    }
    piVar10 = piStack_354;
    local_c = CONCAT31(local_c._1_3_,1);
    local_350[0] = piStack_354;
    (**(code **)(*piStack_354 + 0xc))();
    piVar11 = local_350[1];
    ppiVar3 = (int **)local_350[1][1];
    if ((local_350 < ppiVar3) &&
       (ppiVar4 = (int **)*local_350[1], piVar10 = piStack_354, ppiVar4 <= local_350)) {
      local_348 = (int)local_350 - (int)ppiVar4 >> 2;
      if (ppiVar3 == (int **)local_350[1][2]) {
        uVar9 = (int)ppiVar3 - (int)ppiVar4 >> 2;
        if (0x3ffffffe < uVar9) {
LAB_0055ed2c:
                    /* WARNING: Subroutine does not return */
          FUN_00aad3ad();
        }
        if ((uint)(local_350[1][2] - (int)ppiVar4 >> 2) < uVar9 + 1) {
          FUN_004bf300();
        }
      }
      piVar10 = piStack_354;
      if ((undefined4 *)piVar11[1] != (undefined4 *)0x0) {
        *(undefined4 *)piVar11[1] = *(undefined4 *)(*piVar11 + local_348 * 4);
      }
    }
    else {
      if (ppiVar3 == (int **)local_350[1][2]) {
        uVar9 = (int)ppiVar3 - *local_350[1] >> 2;
        if (0x3ffffffe < uVar9) goto LAB_0055ed2c;
        if ((uint)(local_350[1][2] - *local_350[1] >> 2) < uVar9 + 1) {
          FUN_004bf300();
          piVar10 = piStack_354;
        }
      }
      if ((undefined4 *)piVar11[1] != (undefined4 *)0x0) {
        *(undefined4 *)piVar11[1] = piVar10;
      }
    }
    piVar11[1] = piVar11[1] + 4;
    local_350[0] = (int *)piVar10[2];
    while (local_350[0] != (int *)0x0) {
      piVar10 = (int *)*local_350[0];
      local_350[0] = (int *)local_350[0][2];
      piVar10[2] = local_304;
      local_304 = local_304 + 1;
      piStack_354 = piVar10;
      FUN_005611f0();
      ppiVar3 = *(int ***)(param_1 + 0x10);
      if ((&piStack_354 < ppiVar3) && (ppiVar4 = *(int ***)(param_1 + 0xc), ppiVar4 <= &piStack_354)
         ) {
        local_348 = (int)&piStack_354 - (int)ppiVar4 >> 2;
        if (ppiVar3 == *(int ***)(param_1 + 0x14)) {
          uVar9 = (int)ppiVar3 - (int)ppiVar4 >> 2;
          if (0x3ffffffe < uVar9) goto LAB_0055ed2c;
          if ((uint)((int)*(int ***)(param_1 + 0x14) - (int)ppiVar4 >> 2) < uVar9 + 1) {
            FUN_004bf300();
          }
        }
        if (*(undefined4 **)(param_1 + 0x10) != (undefined4 *)0x0) {
          **(undefined4 **)(param_1 + 0x10) =
               *(undefined4 *)(*(int *)(param_1 + 0xc) + local_348 * 4);
        }
      }
      else {
        if (ppiVar3 == *(int ***)(param_1 + 0x14)) {
          uVar9 = (int)ppiVar3 - *(int *)(param_1 + 0xc) >> 2;
          if (0x3ffffffe < uVar9) goto LAB_0055ed2c;
          if ((uint)((int)*(int ***)(param_1 + 0x14) - *(int *)(param_1 + 0xc) >> 2) < uVar9 + 1) {
            FUN_004bf300();
            piVar10 = piStack_354;
          }
        }
        if (*(undefined4 **)(param_1 + 0x10) != (undefined4 *)0x0) {
          **(undefined4 **)(param_1 + 0x10) = piVar10;
        }
      }
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 4;
    }
    local_c = 0xffffffff;
    piVar10 = (int *)0x0;
    if (0xf < uStack_30c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  } while( true );
}

