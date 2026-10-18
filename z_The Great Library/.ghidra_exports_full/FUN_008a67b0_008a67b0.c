// FUN_008a67b0 @ 008a67b0 body=[[008a67b0, 008a698f] [008a6997, 008a6ac3] [008a6ac7, 008a6aef] [008a6af3, 008a6b1a] [008a6b1e, 008a6b39] [008a6b42, 008a6c1d] [008a6c21, 008a6c49] [008a6c4d, 008a6c74] [008a6c78, 008a6c93] [008a6c9c, 008a6ca8] [008a6cb0, 008a6e2f] [008a6e33, 008a7102] [008a7106, 008a723b] [008a723f, 008a7265] [008a7269, 008a739e] [008a73a2, 008a74aa] [008a74b3, 008a759b] [008a759f, 008a75ba] [008a75c3, 008a75e7] [008a75eb, 008a760e] [008a7612, 008a7635] [008a7639, 008a7653] [008a7657, 008a7685] [008a7689, 008a769f]]


void FUN_008a67b0(uint *param_1)

{
  undefined4 ****ppppuVar1;
  undefined1 uVar2;
  undefined4 *****pppppuVar3;
  undefined4 *****pppppuVar4;
  undefined4 ****ppppuVar5;
  undefined4 ***pppuVar6;
  undefined4 uVar7;
  uint uVar8;
  int **ppiVar9;
  int *piVar10;
  int iVar11;
  undefined4 extraout_ECX;
  uint uVar12;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 unaff_ESI;
  uint *puVar13;
  int **ppiVar14;
  int *local_30c;
  undefined4 ***local_308;
  uint local_304 [3];
  undefined4 uStack_2f8;
  undefined4 local_2f4;
  uint local_2f0;
  undefined4 ****ppppuStack_2ec;
  undefined4 ****local_2e8 [2];
  undefined4 ****local_2e0;
  int *local_2dc;
  uint local_2d8;
  undefined4 ****local_2d4 [4];
  undefined4 local_2c4;
  uint local_2c0;
  undefined4 ****local_2b8;
  undefined4 ****local_2b4;
  undefined4 local_2b0;
  uint local_2a8;
  int local_2a4;
  undefined4 local_2a0;
  undefined4 local_298;
  uint local_294;
  uint local_28c [4];
  undefined4 local_27c;
  uint local_278;
  uint local_270;
  uint local_26c;
  undefined4 local_268;
  undefined4 ***local_260;
  undefined4 ***local_25c;
  undefined4 local_258;
  undefined4 ****local_250 [4];
  undefined4 uStack_240;
  uint local_23c;
  undefined4 ****local_234 [5];
  uint local_220;
  undefined1 local_218;
  undefined4 local_208;
  undefined4 local_204;
  undefined1 local_1fc;
  undefined4 local_1ec;
  undefined4 local_1e8;
  undefined **appuStack_168 [19];
  int local_11c [66];
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  puStack_10 = &LAB_00b5e5f3;
  pvStack_14 = ExceptionList;
  local_2d8 = 0;
  local_204 = 0xf;
  local_208 = 0;
  local_218 = 0;
  local_1e8 = 0xf;
  local_1ec = 0;
  local_1fc = 0;
  local_c._0_1_ = 1;
  local_c._1_3_ = 0;
  ExceptionList = &pvStack_14;
  FUN_004367c0();
  local_c._0_1_ = 2;
  FUN_00436780();
  iVar11 = *(int *)(DAT_012586e0 + 0x48);
  local_270 = 0;
  local_26c = 0;
  local_268 = 0;
  local_260 = (undefined4 ****)0x0;
  local_25c = (undefined4 ****)0x0;
  local_258 = 0;
  local_2b8 = (undefined4 *****)0x0;
  local_2b4 = (undefined4 *****)0x0;
  local_2b0 = 0;
  local_c._0_1_ = 6;
  if (iVar11 != 0) {
    pppppuVar4 = (undefined4 *****)local_234[0];
    if (local_220 < 0x10) {
      pppppuVar4 = local_234;
    }
    FUN_00992240(pppppuVar4,&local_2b8,&DAT_00dfa554);
  }
  pppppuVar4 = (undefined4 *****)local_2b4;
  if (iVar11 != 1) {
    local_2a8 = 0;
    local_2a4 = 0;
    local_2a0 = 0;
    local_c = CONCAT31(local_c._1_3_,7);
    pppppuVar3 = (undefined4 *****)local_250[0];
    if (local_23c < 0x10) {
      pppppuVar3 = local_250;
    }
    FUN_00992240(pppppuVar3,&local_2a8,&DAT_00dfa554);
    pppuVar6 = (undefined4 ***)((int)(local_2a4 - local_2a8) / 0x1c);
    uVar8 = local_2a8;
    if (0 < (int)pppuVar6) {
      do {
        local_308 = pppuVar6;
        pppppuVar3 = (undefined4 *****)FUN_0045c080(pppppuVar4,uVar8);
        if (pppppuVar3 == pppppuVar4) {
          FUN_00a840b0();
          pppppuVar4 = (undefined4 *****)local_2b4;
        }
        local_308 = (undefined4 ***)((int)local_308 + -1);
        uVar8 = uVar8 + 0x1c;
        pppuVar6 = local_308;
      } while (local_308 != (undefined4 ***)0x0);
    }
    uVar8 = local_2a8;
    local_c._0_1_ = 6;
    if (local_2a8 != 0) {
      FUN_00413860();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uVar8);
    }
  }
  pppuVar6 = local_260;
  local_308 = (undefined4 ***)(((int)local_25c - (int)local_260) / 0x1c);
  FUN_00419660((int)local_308 + ((int)pppppuVar4 - (int)local_2b8) / 0x1c);
  local_2e8[0] = (undefined4 ****)pppuVar6;
  uVar2 = (undefined1)local_c;
  while ((local_c._0_1_ = uVar2, ppppuVar5 = local_2e8[0], local_260 <= local_2e8[0] &&
         (local_2e8[0] < local_25c))) {
    local_2e8[0] = local_2e8[0] + 7;
    local_2c0 = 0xf;
    local_2c4 = 0;
    local_2d4[0] = (undefined4 ****)((uint)local_2d4[0] & 0xffffff00);
    FUN_00408ed0(ppppuVar5,0,0xffffffff);
    local_c._0_1_ = 8;
    local_278 = 0xf;
    local_27c = 0;
    local_28c[0] = local_28c[0] & 0xffffff00;
    FUN_00409350(&DAT_00dedc68,1);
    local_c._0_1_ = 9;
    FUN_00988f20(local_28c);
    local_c._0_1_ = 10;
    FUN_00988f20(local_2d4);
    local_c._0_1_ = 0xb;
    FUN_00a840b0();
    if (0xf < local_2f0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_304[0]);
    }
    local_2f0 = 0xf;
    local_2f4 = 0;
    local_304[0] = local_304[0] & 0xffffff00;
    if (0xf < local_294) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2a8);
    }
    local_294 = 0xf;
    local_298 = 0;
    local_2a8 = local_2a8 & 0xffffff00;
    if (0xf < local_278) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_28c[0]);
    }
    local_c._0_1_ = 6;
    uVar2 = (undefined1)local_c;
    local_c._0_1_ = 6;
    if (0xf < local_2c0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2d4[0]);
    }
  }
  local_2e8[0] = local_2b8;
  uVar2 = (undefined1)local_c;
  while ((local_c._0_1_ = uVar2, ppppuVar5 = local_2e8[0], local_2b8 <= local_2e8[0] &&
         (local_2e8[0] < local_2b4))) {
    local_2e8[0] = local_2e8[0] + 7;
    local_2c0 = 0xf;
    local_2c4 = 0;
    local_2d4[0] = (undefined4 ****)((uint)local_2d4[0] & 0xffffff00);
    FUN_00408ed0(ppppuVar5,0,0xffffffff);
    local_c._0_1_ = 0xc;
    local_278 = 0xf;
    local_27c = 0;
    local_28c[0] = local_28c[0] & 0xffffff00;
    FUN_00409350(&DAT_00dedc68,1);
    local_c._0_1_ = 0xd;
    FUN_00988f20(local_28c);
    local_c._0_1_ = 0xe;
    FUN_00988f20(local_2d4);
    local_c._0_1_ = 0xf;
    FUN_00a840b0();
    if (0xf < local_2f0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_304[0]);
    }
    local_2f0 = 0xf;
    local_2f4 = 0;
    local_304[0] = local_304[0] & 0xffffff00;
    if (0xf < local_294) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2a8);
    }
    local_294 = 0xf;
    local_298 = 0;
    local_2a8 = local_2a8 & 0xffffff00;
    if (0xf < local_278) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_28c[0]);
    }
    local_c._0_1_ = 6;
    uVar2 = (undefined1)local_c;
    local_c._0_1_ = 6;
    if (0xf < local_2c0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2d4[0]);
    }
  }
  local_2a8 = local_270;
  uVar2 = (undefined1)local_c;
  do {
    local_c._0_1_ = uVar2;
    pppuVar6 = local_260;
    uVar12 = local_270;
    uVar8 = local_2a8;
    ppppuVar5 = local_2b8;
    if ((local_2a8 < local_270) || (local_26c <= local_2a8)) {
      if ((undefined4 *****)local_2b8 != (undefined4 *****)0x0) {
        FUN_00413860();
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(ppppuVar5);
      }
      if ((undefined4 ****)local_260 != (undefined4 ****)0x0) {
        FUN_00413860();
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(pppuVar6);
      }
      if (local_270 != 0) {
        FUN_00413860();
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(uVar12);
      }
      if (local_23c < 0x10) {
        local_23c = 0xf;
        uStack_240 = 0;
        local_250[0] = (undefined4 ****)((uint)local_250[0] & 0xffffff00);
        if (local_220 < 0x10) {
          ExceptionList = pvStack_14;
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_234[0]);
      }
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_250[0]);
    }
    local_2a8 = local_2a8 + 0x1c;
    local_2c0 = 0xf;
    local_2c4 = 0;
    local_2d4[0] = (undefined4 ****)((uint)local_2d4[0] & 0xffffff00);
    FUN_00408ed0(uVar8,0,0xffffffff);
    local_c._0_1_ = 0x10;
    pppppuVar4 = (undefined4 *****)FUN_00aae9af(0x360);
    local_c._0_1_ = 0x11;
    local_2e8[0] = pppppuVar4;
    if (pppppuVar4 == (undefined4 *****)0x0) {
      local_2e0 = (undefined4 *****)0x0;
    }
    else {
      local_278 = 0xf;
      local_27c = 0;
      local_28c[0] = local_28c[0] & 0xffffff00;
      FUN_00409350("UNNAMED_SESSION",0xf);
      local_c = CONCAT31(local_c._1_3_,0x12);
      local_2d8 = local_2d8 | 1;
      ppppuVar5 = (undefined4 ****)FUN_00aae9af(0x114);
      local_c = 0x13;
      local_308 = ppppuVar5;
      if (ppppuVar5 == (undefined4 ****)0x0) {
        ppppuVar5 = (undefined4 ****)0x0;
      }
      else {
        FUN_0098ffc0(local_2d4);
        *ppppuVar5 = (undefined4 ***)&PTR_FUN_00e37c3c;
      }
      *pppppuVar4 = (undefined4 ****)&PTR_FUN_00e38524;
      pppppuVar4[1] = (undefined4 ****)0x0;
      pppppuVar4[2] = (undefined4 ****)0x0;
      pppppuVar4[3] = (undefined4 ****)0x0;
      *(undefined1 *)(pppppuVar4 + 4) = 0;
      local_c = 0x14;
      *(undefined1 *)(pppppuVar4 + 5) = 0;
      pppppuVar4[7] = ppppuVar5;
      pppppuVar4[0xd0] = (undefined4 ****)0xf;
      pppppuVar4[0xcf] = (undefined4 ****)0x0;
      *(undefined1 *)(pppppuVar4 + 0xcb) = 0;
      FUN_00408ed0(local_28c,0,0xffffffff);
      pppppuVar4[0xd2] = (undefined4 ****)0x0;
      pppppuVar4[0xd3] = (undefined4 ****)0x0;
      pppppuVar4[0xd4] = (undefined4 ****)0x0;
      *(undefined1 *)(pppppuVar4 + 0xd6) = 1;
      pppppuVar4[0xd7] = (undefined4 ****)0x0;
      local_2e0 = pppppuVar4;
    }
    local_c._0_1_ = 0x10;
    local_c._1_3_ = 0;
    if ((local_2d8 & 1) != 0) {
      local_2d8 = local_2d8 & 0xfffffffe;
      if (0xf < local_278) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_28c[0]);
      }
      local_278 = 0xf;
      local_27c = 0;
      local_28c[0] = local_28c[0] & 0xffffff00;
    }
    local_308 = (undefined4 ***)0x0;
    while( true ) {
      ppppuVar5 = (undefined4 ****)local_2e0[7];
      if (*(char *)(ppppuVar5 + 0x44) == '\0') {
        pppuVar6 = (undefined4 ***)(*(code *)(*ppppuVar5)[1])();
        ppppuVar5[2] = pppuVar6;
        if (pppuVar6 == (undefined4 ***)0x0) {
          ppppuVar5[3] = (undefined4 ***)0x13;
        }
        *(undefined1 *)(ppppuVar5 + 0x44) = 1;
      }
      ppppuVar1 = local_2e0;
      ppppuVar5 = ppppuVar5 + 3;
      piVar10 = local_11c;
      for (iVar11 = 0x41; iVar11 != 0; iVar11 = iVar11 + -1) {
        *piVar10 = (int)*ppppuVar5;
        ppppuVar5 = ppppuVar5 + 1;
        piVar10 = piVar10 + 1;
      }
      if (local_11c[0] == 0x13) break;
      FUN_009a1440(local_2e0);
      ppppuVar5 = (undefined4 ****)ppppuVar1[8];
      if ((ppppuVar5 != (undefined4 ****)0x3ff) && (ppppuVar5 != (undefined4 ****)0x400)) {
        local_2f0 = 0xf;
        local_2f4 = 0;
        local_304[0] = local_304[0] & 0xffffff00;
        FUN_00409350("eventmanager.cpp",0x10);
        local_c._0_1_ = 0x1d;
        uVar7 = FUN_004015b0(local_304,0xc6,0x10004);
        local_c._0_1_ = 0x1e;
        FUN_00987d50(uVar7,"Corrupt Event Table Entry - ",0x1c,0);
        uVar7 = FUN_00418e30(uVar7,local_2e0 + 9,extraout_ECX,&DAT_00df12c8);
        uVar7 = FUN_00418e30(uVar7);
        pppppuVar4 = (undefined4 *****)local_2d4[0];
        if (local_2c0 < 0x10) {
          pppppuVar4 = local_2d4;
        }
        uVar7 = FUN_00418e30(uVar7,pppppuVar4);
        FUN_00401280(uVar7);
        local_c._0_1_ = 0x1d;
        FUN_00987ac0(appuStack_168);
        appuStack_168[0] = std::ios_base::vftable;
        FUN_00aad52d(appuStack_168);
        goto LAB_008a749b;
      }
      local_2e8[0] = (undefined4 ****)FUN_00aae9af(0x1c4);
      local_c._0_1_ = 0x16;
      if ((undefined4 *****)local_2e8[0] == (undefined4 *****)0x0) {
        local_30c = (int *)0x0;
      }
      else {
        local_30c = (int *)FUN_008a5ac0(local_2e8[0]);
      }
      local_c._0_1_ = 0x10;
      uVar2 = (undefined1)local_c;
      local_c._0_1_ = 0x10;
      local_2dc = local_30c;
      if ((undefined4 ****)ppppuVar1[8] == (undefined4 ****)0x400) {
        ppiVar9 = (int **)param_1[9];
        puVar13 = param_1 + 8;
        if ((ppiVar9 <= &local_2dc) || (ppiVar14 = (int **)*puVar13, &local_2dc < ppiVar14))
        goto LAB_008a7074;
LAB_008a6fff:
        local_2e8[0] = (undefined4 ****)((int)&local_2dc - (int)ppiVar14 >> 2);
        if (ppiVar9 == (int **)puVar13[2]) {
          uVar8 = (int)ppiVar9 - (int)ppiVar14 >> 2;
          if (0x3ffffffe < uVar8) goto LAB_008a75c3;
          uVar8 = uVar8 + 1;
          uVar12 = (int)puVar13[2] - (int)ppiVar14 >> 2;
          if (uVar12 < uVar8) {
            if (0x3fffffff - (uVar12 >> 1) < uVar12) {
              uVar12 = 0;
            }
            else {
              uVar12 = uVar12 + (uVar12 >> 1);
            }
            if (uVar12 < uVar8) {
              uVar12 = uVar8;
            }
            FUN_004bf300(uVar12);
          }
        }
        if ((undefined4 *)puVar13[1] != (undefined4 *)0x0) {
          *(undefined4 *)puVar13[1] = *(undefined4 *)(*puVar13 + (int)local_2e8[0] * 4);
        }
      }
      else {
        ppiVar9 = (int **)param_1[1];
        puVar13 = param_1;
        if ((&local_2dc < ppiVar9) && (ppiVar14 = (int **)*param_1, ppiVar14 <= &local_2dc))
        goto LAB_008a6fff;
LAB_008a7074:
        if (ppiVar9 == (int **)puVar13[2]) {
          uVar8 = (int)((int)ppiVar9 - *puVar13) >> 2;
          if (0x3ffffffe < uVar8) {
LAB_008a75c3:
            local_c._0_1_ = uVar2;
                    /* WARNING: Subroutine does not return */
            FUN_00aad3ad("vector<T> too long");
          }
          uVar8 = uVar8 + 1;
          uVar12 = (int)((int)puVar13[2] - *puVar13) >> 2;
          if (uVar12 < uVar8) {
            if (0x3fffffff - (uVar12 >> 1) < uVar12) {
              uVar12 = 0;
            }
            else {
              uVar12 = uVar12 + (uVar12 >> 1);
            }
            if (uVar12 < uVar8) {
              uVar12 = uVar8;
            }
            FUN_004bf300(uVar12);
          }
        }
        if ((undefined4 *)puVar13[1] != (undefined4 *)0x0) {
          *(undefined4 *)puVar13[1] = local_30c;
        }
      }
      puVar13[1] = puVar13[1] + 4;
      (**(code **)(*local_30c + 0xc))(local_2e0);
      local_308 = (undefined4 ***)((int)local_308 + 1);
      iVar11 = FUN_008a6010(local_30c);
      if (0xf < local_2f0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_304[0]);
      }
      if (*(int *)(iVar11 + 0x10) == 0) {
        local_2f0 = 0xf;
        local_2f4 = 0;
        local_304[0] = local_304[0] & 0xffffff00;
        FUN_00409350("eventmanager.cpp",0x10);
        local_c._0_1_ = 0x17;
        uVar7 = FUN_004015b0(local_304,0x9f,0x10004);
        local_c = CONCAT31(local_c._1_3_,0x18);
        iVar11 = local_30c[3];
        FUN_00987d50(uVar7,"Event #",7,0);
        uVar7 = FUN_00447240(uVar7,iVar11,extraout_ECX_00," is missing a title in ");
        uVar7 = FUN_00418e30(uVar7);
        pppppuVar4 = (undefined4 *****)ppppuStack_2ec;
        if (local_2d8 < 0x10) {
          pppppuVar4 = &ppppuStack_2ec;
        }
        piVar10 = (int *)FUN_00418e30(uVar7,pppppuVar4);
        FUN_00408be0(piVar10);
        uVar8 = 0;
        if (((*(byte *)(*(int *)(*piVar10 + 4) + 0xc + (int)piVar10) & 6) == 0) &&
           (iVar11 = (**(code **)(**(int **)(*(int *)(*piVar10 + 4) + 0x38 + (int)piVar10) + 0x34))
                               (), iVar11 == -1)) {
          uVar8 = 4;
        }
        if (uVar8 != 0) {
          uVar8 = *(uint *)((int)piVar10 + *(int *)(*piVar10 + 4) + 0xc) | uVar8;
          if (*(int *)((int)piVar10 + *(int *)(*piVar10 + 4) + 0x38) == 0) {
            uVar8 = uVar8 | 4;
          }
          FUN_00401120(uVar8,0);
        }
        local_c._0_1_ = 0x17;
        FUN_00987ac0(appuStack_168);
        appuStack_168[0] = std::ios_base::vftable;
        FUN_00aad52d(appuStack_168);
        local_c._0_1_ = 0x10;
        if (0xf < local_2f0) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_304[0]);
        }
      }
      iVar11 = FUN_008a60f0(local_30c);
      if (0xf < local_2f0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_304[0]);
      }
      if (*(int *)(iVar11 + 0x10) == 0) {
        local_2f0 = 0xf;
        local_2f4 = 0;
        local_304[0] = local_304[0] & 0xffffff00;
        FUN_00409350("eventmanager.cpp",0x10);
        local_c._0_1_ = 0x19;
        uVar7 = FUN_004015b0(local_304,0xa1,0x10004);
        local_c = CONCAT31(local_c._1_3_,0x1a);
        iVar11 = local_30c[3];
        FUN_00987d50(uVar7,"Event #",7,0);
        uVar7 = FUN_00447240(uVar7,iVar11,extraout_ECX_01," is missing a desc in ");
        uVar7 = FUN_00418e30(uVar7);
        pppppuVar4 = (undefined4 *****)ppppuStack_2ec;
        if (local_2d8 < 0x10) {
          pppppuVar4 = &ppppuStack_2ec;
        }
        piVar10 = (int *)FUN_00418e30(uVar7,pppppuVar4);
        FUN_00408be0(piVar10);
        uVar8 = 0;
        if (((*(byte *)(*(int *)(*piVar10 + 4) + 0xc + (int)piVar10) & 6) == 0) &&
           (iVar11 = (**(code **)(**(int **)(*(int *)(*piVar10 + 4) + 0x38 + (int)piVar10) + 0x34))
                               (), iVar11 == -1)) {
          uVar8 = 4;
        }
        if (uVar8 != 0) {
          uVar8 = *(uint *)((int)piVar10 + *(int *)(*piVar10 + 4) + 0xc) | uVar8;
          if (*(int *)((int)piVar10 + *(int *)(*piVar10 + 4) + 0x38) == 0) {
            uVar8 = uVar8 | 4;
          }
          FUN_00401120(uVar8,0);
        }
        local_c._0_1_ = 0x19;
        FUN_00987ac0(appuStack_168);
        appuStack_168[0] = std::ios_base::vftable;
        FUN_00aad52d(appuStack_168);
        local_c._0_1_ = 0x10;
        if (0xf < local_2f0) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_304[0]);
        }
      }
      if ((local_30c[0x2d] - local_30c[0x2c] & 0xfffffffcU) == 0) {
        local_2f0 = 0xf;
        local_2f4 = 0;
        local_304[0] = local_304[0] & 0xffffff00;
        FUN_00409350("eventmanager.cpp",0x10);
        local_c._0_1_ = 0x1b;
        uVar7 = FUN_004015b0(local_304,0xa4,0x10004);
        local_c._0_1_ = 0x1c;
        iVar11 = local_30c[3];
        FUN_00987d50(uVar7,"Event #",7,0);
        uVar7 = FUN_00447240(uVar7,iVar11,extraout_ECX_02," has no options in ");
        uVar7 = FUN_00418e30(uVar7);
        pppppuVar4 = (undefined4 *****)local_2d4[0];
        if (local_2c0 < 0x10) {
          pppppuVar4 = local_2d4;
        }
        uVar7 = FUN_00418e30(uVar7,pppppuVar4);
        FUN_00401280(uVar7);
        local_c._0_1_ = 0x1b;
        FUN_00987ac0(appuStack_168);
        appuStack_168[0] = std::ios_base::vftable;
        FUN_00aad52d(appuStack_168);
LAB_008a749b:
        local_c._0_1_ = 0x10;
        if (0xf < local_2f0) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_304[0]);
        }
      }
    }
    (*(code *)**local_2e0)(1);
    local_2f4 = 0xf;
    uStack_2f8 = 0;
    local_308 = (undefined4 ***)((uint)local_308 & 0xffffff00);
    FUN_00409350("eventmanager.cpp",0x10);
    puStack_10._0_1_ = 0x1f;
    uVar7 = FUN_004015b0(&local_308,0xca,0x10000);
    puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,0x20);
    FUN_00987d50(uVar7,"Events loaded ",0xe,0);
    pppppuVar4 = (undefined4 *****)local_2e8[0];
    if (local_2d4[0] < (undefined4 *****)0x10) {
      pppppuVar4 = local_2e8;
    }
    uVar7 = FUN_00418e30(uVar7,pppppuVar4);
    uVar7 = FUN_00418e30(uVar7,&DAT_00e009e0,extraout_ECX_03,unaff_ESI);
    uVar7 = FUN_00455470(uVar7);
    FUN_00401280(uVar7);
    local_c._0_1_ = 0x1f;
    FUN_00987ac0(appuStack_168);
    appuStack_168[0] = std::ios_base::vftable;
    FUN_00aad52d(appuStack_168);
    if (0xf < local_2f0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_304[0]);
    }
    local_c._0_1_ = 6;
    uVar2 = (undefined1)local_c;
    local_c._0_1_ = 6;
    if (0xf < local_2c0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2d4[0]);
    }
  } while( true );
}

