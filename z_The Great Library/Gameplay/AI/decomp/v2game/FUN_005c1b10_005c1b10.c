// FUN_005c1b10 @ 005c1b10 body=[[005c1b10, 005c1ce3] [005c1ce7, 005c1d93] [005c1d97, 005c1f15] [005c1f19, 005c203d] [005c2041, 005c206f] [005c2073, 005c208e] [005c2092, 005c20ad] [005c20b6, 005c218e] [005c2192, 005c21c0] [005c21c4, 005c21df] [005c21e3, 005c21fe] [005c2207, 005c238e] [005c2392, 005c23ac] [005c23b0, 005c24ab] [005c24af, 005c26df] [005c26e3, 005c26fe] [005c2707, 005c2734] [005c2738, 005c2757] [005c275b, 005c2779] [005c277d, 005c27a0] [005c27a4, 005c27ba] [005c27be, 005c27ed] [005c27f1, 005c2807]]


void FUN_005c1b10(int param_1)

{
  char cVar1;
  void *_Dst;
  int **ppiVar2;
  int **ppiVar3;
  bool bVar4;
  bool bVar5;
  undefined4 ****ppppuVar6;
  undefined1 uVar7;
  undefined4 ****ppppuVar8;
  int iVar9;
  undefined4 *****pppppuVar10;
  undefined4 *****pppppuVar11;
  undefined4 ***pppuVar12;
  uint uVar13;
  undefined4 uVar14;
  int *piVar15;
  uint uVar16;
  undefined4 extraout_ECX;
  undefined4 *****pppppuVar17;
  uint *puVar18;
  undefined4 unaff_EDI;
  int local_30c;
  undefined4 ****local_308 [2];
  int local_300;
  int *local_2fc;
  undefined4 ****local_2f8;
  uint local_2f4 [4];
  undefined4 local_2e4;
  uint local_2e0;
  int *local_2d8;
  uint local_2d4 [3];
  undefined4 uStack_2c8;
  undefined4 local_2c4;
  uint local_2c0;
  uint local_2b8;
  int local_2b4;
  undefined4 local_2b0;
  undefined4 local_2a8;
  uint local_2a4;
  undefined4 ****local_29c;
  undefined4 ****local_298;
  undefined4 local_294;
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
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b715ab;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  FUN_0057afc0(param_1);
  _Dst = *(void **)(param_1 + 0xc);
  if (_Dst != *(void **)(param_1 + 0x10)) {
    local_300 = 0;
    FID_conflict__memcpy(_Dst,*(void **)(param_1 + 0x10),0);
    *(int *)(param_1 + 0x10) = local_300 + (int)_Dst;
  }
  if (DAT_01258820 == 0) {
    local_308[0] = (undefined4 ****)FUN_00aae9af(0x260);
    local_c = 0;
    if (local_308[0] == (undefined4 ****)0x0) {
      DAT_01258820 = 0;
    }
    else {
      DAT_01258820 = FUN_005be0f0();
    }
    local_c = 0xffffffff;
  }
  iVar9 = DAT_01258820;
  FUN_008b2480(DAT_01258820);
  local_300 = iVar9;
  FUN_0068f390();
  local_204 = 0xf;
  local_208 = 0;
  local_218 = 0;
  local_1e8 = 0xf;
  local_1ec = 0;
  local_1fc = 0;
  local_c._0_1_ = 2;
  local_c._1_3_ = 0;
  FUN_004367c0();
  local_c._0_1_ = 3;
  FUN_00436780();
  local_c._0_1_ = 4;
  local_2fc = *(int **)(DAT_012586e0 + 0x6c);
  ppppuVar8 = (undefined4 ****)FUN_00aae9af(0x260);
  local_c._0_1_ = 5;
  local_308[0] = ppppuVar8;
  if (ppppuVar8 == (undefined4 ****)0x0) {
    iVar9 = 0;
  }
  else {
    local_2e0 = 0xf;
    local_2e4 = 0;
    local_2f4[0] = local_2f4[0] & 0xffffff00;
    FUN_00409350("army_base",9);
    local_c = CONCAT31(local_c._1_3_,6);
    iVar9 = FUN_005ba2a0(ppppuVar8,local_2f4,1);
  }
  local_c = 4;
  if ((ppppuVar8 != (undefined4 ****)0x0) && (0xf < local_2e0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2f4[0]);
  }
  *(undefined1 *)(iVar9 + 0x39) = 1;
  *(undefined1 *)(iVar9 + 0x42) = 0;
  FUN_0068f390();
  FUN_008b2480(iVar9);
  ppppuVar8 = (undefined4 ****)FUN_00aae9af(0x260);
  local_c._0_1_ = 8;
  local_308[0] = ppppuVar8;
  if (ppppuVar8 == (undefined4 ****)0x0) {
    iVar9 = 0;
  }
  else {
    local_2e0 = 0xf;
    local_2e4 = 0;
    local_2f4[0] = local_2f4[0] & 0xffffff00;
    FUN_00409350("navy_base",9);
    local_c = CONCAT31(local_c._1_3_,9);
    iVar9 = FUN_005ba2a0(ppppuVar8,local_2f4,2);
  }
  local_c = 4;
  if ((ppppuVar8 != (undefined4 ****)0x0) && (0xf < local_2e0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2f4[0]);
  }
  bVar5 = false;
  bVar4 = false;
  *(undefined1 *)(iVar9 + 0x3a) = 1;
  *(undefined1 *)(iVar9 + 0x42) = 0;
  FUN_0068f390();
  FUN_008b2480(iVar9);
  local_300 = 3;
  local_270 = 0;
  local_26c = 0;
  local_268 = 0;
  ppppuVar8 = (undefined4 ****)0x0;
  local_260 = (undefined4 ****)0x0;
  local_25c = (undefined4 ****)0x0;
  local_258 = 0;
  local_29c = (undefined4 *****)0x0;
  local_298 = (undefined4 *****)0x0;
  local_294 = 0;
  local_c._0_1_ = 0xd;
  if (local_2fc != (int *)0x0) {
    pppppuVar11 = (undefined4 *****)local_234[0];
    if (local_220 < 0x10) {
      pppppuVar11 = local_234;
    }
    FUN_00992240(pppppuVar11,&local_29c,&DAT_00dfa554);
  }
  if (local_2fc != (int *)0x1) {
    local_2b8 = 0;
    local_2b4 = 0;
    local_2b0 = 0;
    local_c = CONCAT31(local_c._1_3_,0xe);
    pppppuVar11 = (undefined4 *****)local_250[0];
    if (local_23c < 0x10) {
      pppppuVar11 = local_250;
    }
    FUN_00992240(pppppuVar11,&local_2b8,&DAT_00dfa554);
    local_30c = (int)(local_2b4 - local_2b8) / 0x1c;
    uVar13 = local_2b8;
    pppppuVar11 = (undefined4 *****)local_298;
    if (0 < local_30c) {
      do {
        pppppuVar10 = (undefined4 *****)FUN_0045c080(pppppuVar11,uVar13);
        if (pppppuVar10 == pppppuVar11) {
          FUN_00a840b0();
          pppppuVar11 = (undefined4 *****)local_298;
        }
        local_30c = local_30c + -1;
        ppppuVar8 = (undefined4 ****)local_260;
        uVar13 = uVar13 + 0x1c;
      } while (local_30c != 0);
    }
    local_c._0_1_ = 0xd;
    if (local_2b8 != 0) {
      FUN_00413860();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2b8);
    }
  }
  FUN_00419660(((int)local_298 - (int)local_29c) / 0x1c + ((int)local_25c - (int)ppppuVar8) / 0x1c);
  local_308[0] = ppppuVar8;
  uVar7 = (undefined1)local_c;
  while ((local_c._0_1_ = uVar7, ppppuVar8 = local_308[0], local_260 <= local_308[0] &&
         (local_308[0] < local_25c))) {
    local_308[0] = local_308[0] + 7;
    local_2c0 = 0xf;
    local_2c4 = 0;
    local_2d4[0] = local_2d4[0] & 0xffffff00;
    FUN_00408ed0(ppppuVar8,0,0xffffffff);
    local_c._0_1_ = 0xf;
    local_2e0 = 0xf;
    local_2e4 = 0;
    local_2f4[0] = local_2f4[0] & 0xffffff00;
    FUN_00409350(&DAT_00dedc68,1);
    local_c._0_1_ = 0x10;
    FUN_00988f20(local_2f4);
    local_c._0_1_ = 0x11;
    FUN_00988f20(local_2d4);
    local_c._0_1_ = 0x12;
    FUN_00a840b0();
    if (0xf < local_278) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_28c[0]);
    }
    local_278 = 0xf;
    local_27c = 0;
    local_28c[0] = local_28c[0] & 0xffffff00;
    if (0xf < local_2a4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2b8);
    }
    local_2a4 = 0xf;
    local_2a8 = 0;
    local_2b8 = local_2b8 & 0xffffff00;
    if (0xf < local_2e0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2f4[0]);
    }
    local_c._0_1_ = 0xd;
    uVar7 = (undefined1)local_c;
    local_c._0_1_ = 0xd;
    if (0xf < local_2c0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2d4[0]);
    }
  }
  local_308[0] = local_29c;
  uVar7 = (undefined1)local_c;
  while ((local_c._0_1_ = uVar7, ppppuVar8 = local_308[0], local_29c <= local_308[0] &&
         (local_308[0] < local_298))) {
    local_308[0] = local_308[0] + 7;
    local_2c0 = 0xf;
    local_2c4 = 0;
    local_2d4[0] = local_2d4[0] & 0xffffff00;
    FUN_00408ed0(ppppuVar8,0,0xffffffff);
    local_c._0_1_ = 0x13;
    local_2e0 = 0xf;
    local_2e4 = 0;
    local_2f4[0] = local_2f4[0] & 0xffffff00;
    FUN_00409350(&DAT_00dedc68,1);
    local_c._0_1_ = 0x14;
    FUN_00988f20(local_2f4);
    local_c._0_1_ = 0x15;
    FUN_00988f20(local_2d4);
    local_c._0_1_ = 0x16;
    FUN_00a840b0();
    if (0xf < local_278) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_28c[0]);
    }
    local_278 = 0xf;
    local_27c = 0;
    local_28c[0] = local_28c[0] & 0xffffff00;
    if (0xf < local_2a4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2b8);
    }
    local_2a4 = 0xf;
    local_2a8 = 0;
    local_2b8 = local_2b8 & 0xffffff00;
    if (0xf < local_2e0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2f4[0]);
    }
    local_c._0_1_ = 0xd;
    uVar7 = (undefined1)local_c;
    local_c._0_1_ = 0xd;
    if (0xf < local_2c0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2d4[0]);
    }
  }
  local_2b8 = local_270;
  uVar7 = (undefined1)local_c;
  do {
    local_c._0_1_ = uVar7;
    pppuVar12 = local_260;
    uVar16 = local_270;
    uVar13 = local_2b8;
    if ((local_2b8 < local_270) || (local_26c <= local_2b8)) {
      pppppuVar11 = (undefined4 *****)local_29c;
      if ((undefined4 *****)local_29c != (undefined4 *****)0x0) {
        while( true ) {
          if (pppppuVar11 == (undefined4 *****)local_298) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_29c);
          }
          if ((undefined4 ****)0xf < pppppuVar11[5]) break;
          pppppuVar11[5] = (undefined4 ****)0xf;
          pppppuVar11[4] = (undefined4 ****)0x0;
          *(undefined1 *)pppppuVar11 = 0;
          pppppuVar11 = pppppuVar11 + 7;
        }
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(*pppppuVar11);
      }
      if ((undefined4 ****)local_260 != (undefined4 ****)0x0) {
        FUN_00413860();
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(pppuVar12);
      }
      if (local_270 != 0) {
        FUN_00413860();
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(uVar16);
      }
      if (0xf < local_23c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_250[0]);
      }
      local_23c = 0xf;
      uStack_240 = 0;
      local_250[0] = (undefined4 ****)((uint)local_250[0] & 0xffffff00);
      if (0xf < local_220) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_234[0]);
      }
      ExceptionList = pvStack_14;
      return;
    }
    local_2b8 = local_2b8 + 0x1c;
    local_2e0 = 0xf;
    local_2e4 = 0;
    local_2f4[0] = local_2f4[0] & 0xffffff00;
    FUN_00408ed0(uVar13,0,0xffffffff);
    local_c._0_1_ = 0x17;
    pppppuVar11 = (undefined4 *****)FUN_00aae9af(0x360);
    local_c._0_1_ = 0x18;
    local_308[0] = pppppuVar11;
    if (pppppuVar11 == (undefined4 *****)0x0) {
      local_2f8 = (undefined4 *****)0x0;
    }
    else {
      local_278 = 0xf;
      local_27c = 0;
      local_28c[0] = local_28c[0] & 0xffffff00;
      FUN_00409350("UNNAMED_SESSION",0xf);
      local_c = CONCAT31(local_c._1_3_,0x19);
      bVar4 = true;
      ppppuVar8 = (undefined4 ****)FUN_00aae9af(0x114);
      local_c = 0x1a;
      if (ppppuVar8 == (undefined4 ****)0x0) {
        ppppuVar8 = (undefined4 ****)0x0;
      }
      else {
        FUN_0098ffc0(local_2f4);
        *ppppuVar8 = (undefined4 ***)&PTR_FUN_00e37c3c;
      }
      *pppppuVar11 = (undefined4 ****)&PTR_FUN_00e38524;
      pppppuVar11[1] = (undefined4 ****)0x0;
      pppppuVar11[2] = (undefined4 ****)0x0;
      pppppuVar11[3] = (undefined4 ****)0x0;
      *(undefined1 *)(pppppuVar11 + 4) = 0;
      local_c = 0x1b;
      *(undefined1 *)(pppppuVar11 + 5) = 0;
      pppppuVar11[7] = ppppuVar8;
      pppppuVar11[0xd0] = (undefined4 ****)0xf;
      pppppuVar11[0xcf] = (undefined4 ****)0x0;
      *(undefined1 *)(pppppuVar11 + 0xcb) = 0;
      FUN_00408ed0(local_28c,0,0xffffffff);
      pppppuVar11[0xd2] = (undefined4 ****)0x0;
      pppppuVar11[0xd3] = (undefined4 ****)0x0;
      pppppuVar11[0xd4] = (undefined4 ****)0x0;
      *(undefined1 *)(pppppuVar11 + 0xd6) = 1;
      pppppuVar11[0xd7] = (undefined4 ****)0x0;
      local_2f8 = pppppuVar11;
    }
    local_c = 0x17;
    if (bVar4) {
      bVar4 = false;
      if (0xf < local_278) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_28c[0]);
      }
      local_278 = 0xf;
      local_27c = 0;
      local_28c[0] = local_28c[0] & 0xffffff00;
    }
    while( true ) {
      ppppuVar8 = (undefined4 ****)local_2f8[7];
      if (*(char *)(ppppuVar8 + 0x44) == '\0') {
        pppuVar12 = (undefined4 ***)(*(code *)(*ppppuVar8)[1])();
        ppppuVar8[2] = pppuVar12;
        if (pppuVar12 == (undefined4 ***)0x0) {
          ppppuVar8[3] = (undefined4 ***)0x13;
        }
        *(undefined1 *)(ppppuVar8 + 0x44) = 1;
      }
      ppppuVar6 = local_2f8;
      ppppuVar8 = ppppuVar8 + 3;
      piVar15 = local_11c;
      for (iVar9 = 0x41; iVar9 != 0; iVar9 = iVar9 + -1) {
        *piVar15 = (int)*ppppuVar8;
        ppppuVar8 = ppppuVar8 + 1;
        piVar15 = piVar15 + 1;
      }
      if (local_11c[0] == 0x13) break;
      FUN_009a1440(local_2f8);
      pppppuVar11 = (undefined4 *****)FUN_00aae9af(0x260);
      local_c._0_1_ = 0x1d;
      local_308[0] = pppppuVar11;
      if (pppppuVar11 == (undefined4 *****)0x0) {
        local_2d8 = (int *)0x0;
      }
      else {
        pppppuVar17 = (undefined4 *****)(ppppuVar6 + 9);
        local_2c0 = 0xf;
        local_2c4 = 0;
        local_2d4[0] = local_2d4[0] & 0xffffff00;
        pppppuVar10 = pppppuVar17;
        do {
          cVar1 = *(char *)pppppuVar10;
          pppppuVar10 = (undefined4 *****)((int)pppppuVar10 + 1);
        } while (cVar1 != '\0');
        FUN_00409350(pppppuVar17,(int)pppppuVar10 - (int)((int)ppppuVar6 + 0x25));
        iVar9 = local_300;
        local_c = CONCAT31(local_c._1_3_,0x1e);
        bVar5 = true;
        local_2d8 = (int *)FUN_005ba2a0(pppppuVar11,local_2d4,local_300);
        local_300 = iVar9 + 1;
      }
      piVar15 = local_2d8;
      local_c = 0x17;
      if (bVar5) {
        bVar5 = false;
        if (0xf < local_2c0) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_2d4[0]);
        }
        local_2c0 = 0xf;
        local_2c4 = 0;
        local_2d4[0] = local_2d4[0] & 0xffffff00;
      }
      (**(code **)(*local_2d8 + 0xc))(local_2f8);
      ppiVar2 = *(int ***)(param_1 + 0x10);
      puVar18 = (uint *)(param_1 + 0xc);
      local_2fc = piVar15;
      if ((&local_2fc < ppiVar2) && (ppiVar3 = (int **)*puVar18, ppiVar3 <= &local_2fc)) {
        local_308[0] = (undefined4 ****)((int)&local_2fc - (int)ppiVar3 >> 2);
        if (ppiVar2 == *(int ***)(param_1 + 0x14)) {
          uVar13 = (int)ppiVar2 - (int)ppiVar3 >> 2;
          if (0x3ffffffe < uVar13) {
LAB_005c2707:
                    /* WARNING: Subroutine does not return */
            FUN_00aad3ad("vector<T> too long");
          }
          uVar13 = uVar13 + 1;
          uVar16 = (int)*(int ***)(param_1 + 0x14) - (int)ppiVar3 >> 2;
          if (uVar16 < uVar13) {
            if (0x3fffffff - (uVar16 >> 1) < uVar16) {
              uVar16 = 0;
            }
            else {
              uVar16 = uVar16 + (uVar16 >> 1);
            }
            if (uVar16 < uVar13) {
              uVar16 = uVar13;
            }
            FUN_004bf300(uVar16);
          }
        }
        piVar15 = local_2d8;
        if (*(undefined4 **)(param_1 + 0x10) != (undefined4 *)0x0) {
          **(undefined4 **)(param_1 + 0x10) = *(undefined4 *)(*puVar18 + (int)local_308[0] * 4);
        }
      }
      else {
        if (ppiVar2 == *(int ***)(param_1 + 0x14)) {
          uVar13 = (int)((int)ppiVar2 - *puVar18) >> 2;
          if (0x3ffffffe < uVar13) goto LAB_005c2707;
          uVar13 = uVar13 + 1;
          uVar16 = (int)((int)*(int ***)(param_1 + 0x14) - *puVar18) >> 2;
          if (uVar16 < uVar13) {
            if (0x3fffffff - (uVar16 >> 1) < uVar16) {
              uVar16 = 0;
            }
            else {
              uVar16 = uVar16 + (uVar16 >> 1);
            }
            if (uVar16 < uVar13) {
              uVar16 = uVar13;
            }
            FUN_004bf300(uVar16);
            piVar15 = local_2d8;
          }
        }
        if (*(undefined4 **)(param_1 + 0x10) != (undefined4 *)0x0) {
          **(undefined4 **)(param_1 + 0x10) = piVar15;
        }
      }
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 4;
      FUN_008b2480(piVar15);
    }
    (*(code *)**local_2f8)(1);
    local_2c4 = 0xf;
    uStack_2c8 = 0;
    local_2d8 = (int *)((uint)local_2d8 & 0xffffff00);
    FUN_00409350("subunit.cpp",0xb);
    puStack_10._0_1_ = 0x20;
    uVar14 = FUN_004015b0(&local_2d8,0x684,0x10000);
    puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,0x21);
    FUN_00987d50(uVar14,"UNITS loaded ",0xd,0);
    pppppuVar11 = (undefined4 *****)local_308[0];
    if (local_2f4[0] < 0x10) {
      pppppuVar11 = local_308;
    }
    uVar14 = FUN_00418e30(uVar14,pppppuVar11);
    uVar14 = FUN_00418e30(uVar14,&DAT_00e009e0,extraout_ECX,unaff_EDI);
    piVar15 = (int *)FUN_00455470(uVar14);
    FUN_00408be0(piVar15);
    uVar13 = 0;
    if (((*(byte *)(*(int *)(*piVar15 + 4) + 0xc + (int)piVar15) & 6) == 0) &&
       (iVar9 = (**(code **)(**(int **)(*(int *)(*piVar15 + 4) + 0x38 + (int)piVar15) + 0x34))(),
       iVar9 == -1)) {
      uVar13 = 4;
    }
    if (uVar13 != 0) {
      uVar13 = *(uint *)((int)piVar15 + *(int *)(*piVar15 + 4) + 0xc) | uVar13;
      if (*(int *)((int)piVar15 + *(int *)(*piVar15 + 4) + 0x38) == 0) {
        uVar13 = uVar13 | 4;
      }
      FUN_00401120(uVar13,0);
    }
    local_c._0_1_ = 0x20;
    FUN_00987ac0(appuStack_168);
    appuStack_168[0] = std::ios_base::vftable;
    FUN_00aad52d(appuStack_168);
    if (0xf < local_2c0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2d4[0]);
    }
    local_c._0_1_ = 0xd;
    uVar7 = (undefined1)local_c;
    local_c._0_1_ = 0xd;
    if (0xf < local_2e0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2f4[0]);
    }
  } while( true );
}

