// FUN_008b0f40 @ 008b0f40 body=[[008b0f40, 008b111c] [008b1120, 008b116d] [008b1171, 008b128f] [008b1293, 008b12be] [008b12c2, 008b12e9] [008b12ed, 008b1308] [008b1311, 008b13ed] [008b13f1, 008b141f] [008b1423, 008b1441] [008b1445, 008b1460] [008b1469, 008b15e0] [008b15e4, 008b15f9] [008b1600, 008b18e7] [008b18eb, 008b1909] [008b1912, 008b193d] [008b1941, 008b195d] [008b1961, 008b198d] [008b1991, 008b19b0] [008b19b4, 008b19d7] [008b19db, 008b19f1] [008b19f5, 008b1a24] [008b1a28, 008b1a3e]]


/* WARNING: Type propagation algorithm not settling */

void FUN_008b0f40(int param_1)

{
  char cVar1;
  void *_Dst;
  int **ppiVar2;
  int **ppiVar3;
  bool bVar4;
  int *piVar5;
  undefined1 uVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  int *piVar9;
  int iVar10;
  char *pcVar11;
  uint uVar12;
  undefined4 uVar13;
  char *pcVar14;
  undefined1 *puVar15;
  int *piVar16;
  uint local_334;
  undefined4 *******pppppppuStack_330;
  uint uStack_32c;
  uint *puStack_328;
  undefined4 uVar17;
  undefined1 *local_308;
  int *local_300 [3];
  uint local_2f4;
  uint local_2f0;
  undefined4 uStack_2e4;
  undefined4 local_2e0;
  uint local_2dc;
  undefined1 *local_2d4;
  undefined1 *local_2d0;
  undefined4 local_2cc;
  uint local_2c4;
  int local_2c0;
  undefined4 *******local_2bc [2];
  undefined4 local_2b4;
  uint local_2b0;
  uint local_2a8;
  undefined4 local_298;
  uint local_294;
  uint local_28c;
  uint local_288;
  undefined4 local_284;
  undefined1 *local_27c;
  undefined1 *local_278;
  undefined4 local_274;
  uint local_26c;
  undefined4 local_25c;
  uint local_258;
  uint local_250;
  undefined4 uStack_240;
  uint local_23c;
  uint local_220;
  undefined1 local_218;
  undefined4 local_208;
  undefined4 local_204;
  undefined1 local_1fc;
  undefined4 local_1ec;
  undefined4 local_1e8;
  undefined **ppuStack_168;
  int local_11c [66];
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b5e43b;
  pvStack_14 = ExceptionList;
  local_2f4 = 0;
  ExceptionList = &pvStack_14;
  FUN_0057afc0();
  _Dst = *(void **)(param_1 + 0xc);
  if (_Dst != *(void **)(param_1 + 0x10)) {
    puStack_328 = (uint *)0x8b0f94;
    FID_conflict__memcpy(_Dst,*(void **)(param_1 + 0x10),0);
    *(void **)(param_1 + 0x10) = _Dst;
  }
  FUN_008aff70();
  FUN_008b2480();
  FUN_0068f390();
  local_204 = 0xf;
  local_208 = 0;
  local_218 = 0;
  local_1e8 = 0xf;
  local_1ec = 0;
  local_1fc = 0;
  local_c._0_1_ = 1;
  local_c._1_3_ = 0;
  FUN_004367c0();
  local_c._0_1_ = 2;
  FUN_00436780();
  iVar10 = *(int *)(DAT_012586e0 + 0x68);
  local_28c = 0;
  local_288 = 0;
  local_284 = 0;
  local_27c = (undefined1 *)0x0;
  local_278 = (undefined1 *)0x0;
  local_274 = 0;
  local_2d4 = (undefined1 *)0x0;
  local_2d0 = (undefined1 *)0x0;
  local_2cc = 0;
  local_c._0_1_ = 6;
  if (iVar10 != 0) {
    puStack_328 = (uint *)0x8b10a7;
    FUN_00992240();
  }
  if (iVar10 != 1) {
    local_2c4 = 0;
    local_2c0 = 0;
    local_2bc[0] = (undefined4 *******)0x0;
    local_c = CONCAT31(local_c._1_3_,7);
    puStack_328 = (uint *)0x8b10ef;
    FUN_00992240();
    local_308 = (undefined1 *)((int)(local_2c0 - local_2c4) / 0x1c);
    puVar15 = local_2d0;
    if (0 < (int)local_308) {
      do {
        puVar7 = (undefined1 *)FUN_0045c080();
        if (puVar7 == puVar15) {
          FUN_00a840b0();
          puVar15 = local_2d0;
        }
        local_308 = (undefined1 *)((int)local_308 + -1);
      } while (local_308 != (undefined1 *)0x0);
    }
    local_c._0_1_ = 6;
    if (local_2c4 != 0) {
      FUN_00413860();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  local_308 = local_27c;
  FUN_00419660();
  uVar6 = (undefined1)local_c;
  while ((local_c._0_1_ = uVar6, local_27c <= local_308 && (local_308 < local_278))) {
    local_308 = local_308 + 0x1c;
    local_2dc = 0xf;
    local_2e0 = 0;
    local_2f0 = local_2f0 & 0xffffff00;
    puStack_328 = (uint *)0x8b1207;
    FUN_00408ed0();
    local_c._0_1_ = 8;
    local_294 = 0xf;
    local_298 = 0;
    local_2a8 = local_2a8 & 0xffffff00;
    FUN_00409350();
    local_c._0_1_ = 9;
    FUN_00988f20();
    local_c._0_1_ = 10;
    FUN_00988f20();
    local_c._0_1_ = 0xb;
    FUN_00a840b0();
    if (0xf < local_2b0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_2b0 = 0xf;
    local_2b4 = 0;
    local_2c4 = local_2c4 & 0xffffff00;
    if (0xf < local_258) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_258 = 0xf;
    local_25c = 0;
    local_26c = local_26c & 0xffffff00;
    if (0xf < local_294) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_c._0_1_ = 6;
    uVar6 = (undefined1)local_c;
    local_c._0_1_ = 6;
    if (0xf < local_2dc) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  local_308 = local_2d4;
  uVar6 = (undefined1)local_c;
  while ((local_c._0_1_ = uVar6, local_2d4 <= local_308 && (local_308 < local_2d0))) {
    local_308 = local_308 + 0x1c;
    local_2dc = 0xf;
    local_2e0 = 0;
    local_2f0 = local_2f0 & 0xffffff00;
    puStack_328 = (uint *)0x8b135f;
    FUN_00408ed0();
    local_c._0_1_ = 0xc;
    local_294 = 0xf;
    local_298 = 0;
    local_2a8 = local_2a8 & 0xffffff00;
    FUN_00409350();
    local_c._0_1_ = 0xd;
    FUN_00988f20();
    local_c._0_1_ = 0xe;
    FUN_00988f20();
    local_c._0_1_ = 0xf;
    FUN_00a840b0();
    if (0xf < local_258) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_258 = 0xf;
    local_25c = 0;
    local_26c = local_26c & 0xffffff00;
    if (0xf < local_2b0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_2b0 = 0xf;
    local_2b4 = 0;
    local_2c4 = local_2c4 & 0xffffff00;
    if (0xf < local_294) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_c._0_1_ = 6;
    uVar6 = (undefined1)local_c;
    local_c._0_1_ = 6;
    if (0xf < local_2dc) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  local_2c4 = local_28c;
  uVar6 = (undefined1)local_c;
  do {
    local_c._0_1_ = uVar6;
    if ((local_2c4 < local_28c) || (local_288 <= local_2c4)) {
      puVar15 = local_2d4;
      if (local_2d4 != (undefined1 *)0x0) {
        while( true ) {
          if (puVar15 == local_2d0) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          if (0xf < *(uint *)(puVar15 + 0x14)) break;
          *(undefined4 *)(puVar15 + 0x14) = 0xf;
          *(undefined4 *)(puVar15 + 0x10) = 0;
          *puVar15 = 0;
          puVar15 = puVar15 + 0x1c;
        }
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      puVar15 = local_27c;
      if (local_27c != (undefined1 *)0x0) {
        while( true ) {
          if (puVar15 == local_278) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          if (0xf < *(uint *)(puVar15 + 0x14)) break;
          *(undefined4 *)(puVar15 + 0x14) = 0xf;
          *(undefined4 *)(puVar15 + 0x10) = 0;
          *puVar15 = 0;
          puVar15 = puVar15 + 0x1c;
        }
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      if (local_28c != 0) {
        FUN_00413860();
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      if (0xf < local_23c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_23c = 0xf;
      uStack_240 = 0;
      local_250 = local_250 & 0xffffff00;
      if (0xf < local_220) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      ExceptionList = pvStack_14;
      return;
    }
    local_2c4 = local_2c4 + 0x1c;
    local_294 = 0xf;
    local_298 = 0;
    local_2a8 = local_2a8 & 0xffffff00;
    puStack_328 = (uint *)0x8b14be;
    FUN_00408ed0();
    local_c._0_1_ = 0x10;
    puVar8 = (undefined4 *)FUN_00aae9af();
    local_c._0_1_ = 0x11;
    if (puVar8 == (undefined4 *)0x0) {
      local_300[1] = (undefined4 *)0x0;
    }
    else {
      local_2dc = 0xf;
      local_2e0 = 0;
      local_2f0 = local_2f0 & 0xffffff00;
      FUN_00409350();
      local_c = CONCAT31(local_c._1_3_,0x12);
      local_2f4 = local_2f4 | 1;
      piVar9 = (int *)FUN_00aae9af();
      local_c = 0x13;
      local_300[0] = piVar9;
      if (piVar9 == (int *)0x0) {
        piVar9 = (int *)0x0;
      }
      else {
        FUN_0098ffc0();
        *piVar9 = (int)&PTR_FUN_00e37c3c;
      }
      *puVar8 = &PTR_FUN_00e38524;
      puVar8[1] = 0;
      puVar8[2] = 0;
      puVar8[3] = 0;
      *(undefined1 *)(puVar8 + 4) = 0;
      local_c = 0x14;
      *(undefined1 *)(puVar8 + 5) = 0;
      puVar8[7] = piVar9;
      puVar8[0xd0] = 0xf;
      puVar8[0xcf] = 0;
      *(undefined1 *)(puVar8 + 0xcb) = 0;
      puStack_328 = (uint *)0x8b1590;
      FUN_00408ed0();
      puVar8[0xd2] = 0;
      puVar8[0xd3] = 0;
      puVar8[0xd4] = 0;
      *(undefined1 *)(puVar8 + 0xd6) = 1;
      puVar8[0xd7] = 0;
      local_300[1] = puVar8;
    }
    local_c = 0x10;
    if ((local_2f4 & 1) != 0) {
      local_2f4 = local_2f4 & 0xfffffffe;
      if (0xf < local_2dc) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_2dc = 0xf;
      local_2e0 = 0;
      local_2f0 = local_2f0 & 0xffffff00;
    }
    while( true ) {
      piVar9 = (int *)local_300[1][7];
      if ((char)piVar9[0x44] == '\0') {
        iVar10 = (**(code **)(*piVar9 + 4))();
        piVar9[2] = iVar10;
        if (iVar10 == 0) {
          piVar9[3] = 0x13;
        }
        *(undefined1 *)(piVar9 + 0x44) = 1;
      }
      piVar5 = local_300[1];
      piVar9 = piVar9 + 3;
      piVar16 = local_11c;
      for (iVar10 = 0x41; iVar10 != 0; iVar10 = iVar10 + -1) {
        *piVar16 = *piVar9;
        piVar9 = piVar9 + 1;
        piVar16 = piVar16 + 1;
      }
      if (local_11c[0] == 0x13) break;
      FUN_009a1440();
      local_300[0] = (int *)FUN_00aae9af();
      local_c._0_1_ = 0x16;
      if (local_300[0] == (int *)0x0) {
        local_300[2] = (int *)0x0;
      }
      else {
        pcVar14 = (char *)(piVar5 + 9);
        local_300[2] = (int *)&local_334;
        local_334 = local_334 & 0xffffff00;
        pcVar11 = pcVar14;
        do {
          cVar1 = *pcVar11;
          pcVar11 = pcVar11 + 1;
        } while (cVar1 != '\0');
        FUN_00409350(pcVar14,(int)pcVar11 - ((int)piVar5 + 0x25));
        local_300[2] = (int *)FUN_008af980();
      }
      local_c = CONCAT31(local_c._1_3_,0x10);
      local_300[0] = local_300[2];
      FUN_008b2480();
      ppiVar2 = *(int ***)(param_1 + 0x10);
      if ((local_300 < ppiVar2) && (ppiVar3 = *(int ***)(param_1 + 0xc), ppiVar3 <= local_300)) {
        if (ppiVar2 == *(int ***)(param_1 + 0x14)) {
          uVar12 = (int)ppiVar2 - (int)ppiVar3 >> 2;
          if (0x3ffffffe < uVar12) {
LAB_008b1912:
                    /* WARNING: Subroutine does not return */
            FUN_00aad3ad();
          }
          if ((uint)((int)*(int ***)(param_1 + 0x14) - (int)ppiVar3 >> 2) < uVar12 + 1) {
            FUN_004bf300();
          }
        }
        puVar8 = *(undefined4 **)(param_1 + 0x10);
        if (puVar8 != (undefined4 *)0x0) {
          piVar9 = *(int **)(*(int *)(param_1 + 0xc) + ((int)local_300 - (int)ppiVar3 >> 2) * 4);
LAB_008b1798:
          *puVar8 = piVar9;
        }
      }
      else {
        if (ppiVar2 == *(int ***)(param_1 + 0x14)) {
          uVar12 = (int)ppiVar2 - *(int *)(param_1 + 0xc) >> 2;
          if (0x3ffffffe < uVar12) goto LAB_008b1912;
          if ((uint)((int)*(int ***)(param_1 + 0x14) - *(int *)(param_1 + 0xc) >> 2) < uVar12 + 1) {
            FUN_004bf300();
          }
        }
        puVar8 = *(undefined4 **)(param_1 + 0x10);
        piVar9 = local_300[2];
        if (puVar8 != (undefined4 *)0x0) goto LAB_008b1798;
      }
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 4;
      (**(code **)(*local_300[2] + 0xc))();
    }
    uVar17 = 1;
    (**(code **)*local_300[1])();
    local_2e0 = 0xf;
    uStack_2e4 = 0;
    local_2f4 = local_2f4 & 0xffffff00;
    puStack_328 = (uint *)0x8b17e3;
    FUN_00409350();
    puStack_328 = &local_2f4;
    puStack_10._0_1_ = 0x17;
    uStack_32c = 0x8b1806;
    uVar12 = FUN_004015b0();
    puStack_328 = (uint *)0xe2cf1c;
    puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,0x18);
    pppppppuStack_330 = (undefined4 *******)0x8b1821;
    uStack_32c = uVar12;
    FUN_00987d50();
    pppppppuStack_330 = local_2bc[0];
    if (local_2a8 < 0x10) {
      pppppppuStack_330 = local_2bc;
    }
    local_334 = uVar12;
    uVar13 = FUN_00418e30();
    pppppppuStack_330 = (undefined4 *******)uVar17;
    local_334 = FUN_00418e30(uVar13,&DAT_00e009e0);
    piVar9 = (int *)FUN_00455470();
    FUN_00408be0(piVar9);
    bVar4 = false;
    if (((*(byte *)(*(int *)(*piVar9 + 4) + 0xc + (int)piVar9) & 6) == 0) &&
       (iVar10 = (**(code **)(**(int **)(*(int *)(*piVar9 + 4) + 0x38 + (int)piVar9) + 0x34))(),
       iVar10 == -1)) {
      bVar4 = true;
    }
    if (bVar4) {
      FUN_00401120();
    }
    local_c._0_1_ = 0x17;
    FUN_00987ac0();
    ppuStack_168 = std::ios_base::vftable;
    FUN_00aad52d();
    if (0xf < local_2dc) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_c._0_1_ = 6;
    uVar6 = (undefined1)local_c;
    local_c._0_1_ = 6;
    if (0xf < local_294) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  } while( true );
}

