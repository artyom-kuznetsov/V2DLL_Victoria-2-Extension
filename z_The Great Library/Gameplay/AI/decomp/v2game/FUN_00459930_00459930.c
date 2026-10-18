// FUN_00459930 @ 00459930 body=[[00459930, 00459a19] [00459a22, 00459ae5] [00459aee, 00459be7] [00459beb, 00459ce9] [00459ced, 00459d26] [00459d2f, 00459f08] [00459f0c, 00459f8d] [00459f91, 0045a12c] [0045a130, 0045a4d9] [0045a4dd, 0045a562] [0045a566, 0045a6ff] [0045a703, 0045a95b] [0045a965, 0045aa31] [0045aa35, 0045acfe] [0045ad02, 0045ad18] [0045ad1c, 0045ae10] [0045ae14, 0045ae24] [0045ae28, 0045ae35] [0045ae39, 0045aec3] [0045aec7, 0045aed7] [0045aedb, 0045aee8] [0045aeec, 0045af25]]


undefined4 * FUN_00459930(int param_1,uint *param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  float fVar4;
  bool bVar5;
  undefined1 uVar6;
  uint *puVar7;
  undefined4 *puVar8;
  int *piVar9;
  char cVar10;
  uint uVar11;
  int iVar12;
  int *piVar13;
  uint *puVar14;
  undefined1 *puVar15;
  undefined4 **ppuVar16;
  undefined4 **ppuVar17;
  undefined4 *puVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  undefined4 *puVar23;
  double dVar24;
  int local_340;
  undefined4 *puStack_33c;
  undefined4 *local_338 [2];
  int local_330;
  undefined4 **local_32c;
  int *local_328;
  undefined4 **local_324;
  undefined4 **local_320;
  undefined4 **local_31c;
  uint *local_314;
  undefined4 *local_310;
  int local_30c;
  uint local_308;
  uint uStack_304;
  int local_300;
  undefined4 *local_2fc;
  uint local_2f8;
  uint local_2f4;
  int *local_2ec;
  int local_2e8;
  int local_2e4;
  undefined4 *puStack_2e0;
  int local_2dc;
  uint *puStack_2d8;
  uint *local_2d4;
  int iStack_2d0;
  undefined1 uStack_2cc;
  undefined4 uStack_2c8;
  uint uStack_2c4;
  int iStack_2c0;
  uint local_2b4;
  uint local_2b0;
  int iStack_2ac;
  undefined4 uStack_2a8;
  undefined4 local_2a0;
  uint local_29c;
  undefined1 *puStack_294;
  undefined4 local_288;
  undefined4 local_284;
  undefined4 *local_268;
  uint uStack_230;
  undefined **ppuStack_1c0;
  undefined **ppuStack_1b0;
  undefined1 auStack_178 [16];
  int local_168 [81];
  void *pvStack_24;
  uint uStack_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00ba9e2e;
  pvStack_14 = ExceptionList;
  iVar19 = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 8) >> 2;
  local_30c = iVar19;
  if (iVar19 < 1) {
    local_2f4 = 0xf;
    local_2f8 = 0;
    local_308 = local_308 & 0xffffff00;
    ExceptionList = &pvStack_14;
    FUN_00409350();
    local_c = 0;
    FUN_004015b0();
    local_c = CONCAT31(local_c._1_3_,1);
    FUN_00987d50();
    FUN_00401280();
    uStack_1c = uStack_1c & 0xffffff00;
    FUN_00987ac0();
    ppuStack_1c0 = std::ios_base::vftable;
    FUN_00aad52d();
    if (0xf < uStack_304) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  else {
    ExceptionList = &pvStack_14;
    local_2e4 = FUN_00459880();
    if (local_2e4 == 0) {
      local_2f4 = 0xf;
      local_2f8 = 0;
      local_308 = local_308 & 0xffffff00;
      FUN_00409350();
      local_c = 2;
      FUN_004015b0();
      local_c = CONCAT31(local_c._1_3_,3);
      FUN_00987d50();
      FUN_00401280();
      uStack_1c = CONCAT31(uStack_1c._1_3_,2);
      FUN_00987ac0();
      ppuStack_1c0 = std::ios_base::vftable;
      FUN_00aad52d();
      if (0xf < uStack_304) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
    else {
      local_2b4 = *param_2;
      local_314 = *(uint **)(DAT_012586f4 + 8);
      local_2e8 = DAT_012586f4;
      local_2ec = (int *)(DAT_012588e8 + 0xb0c);
      local_328 = (int *)(*(int *)(*(int *)(DAT_012586dc + 0x40) + 0xd8) / 1000);
      _eh_vector_constructor_iterator_(local_168,0x10,0x15,FUN_00413490,FUN_00aa8540);
      local_c._0_1_ = 4;
      local_c._1_3_ = 0;
      local_338[1] = (undefined4 *)0x0;
      if (0 < iVar19) {
        do {
          puVar23 = *(undefined4 **)(*(int *)(param_1 + 8) + (int)local_338[1] * 4);
          FUN_0045e4e0();
          puVar14 = local_314;
          local_c._0_1_ = 5;
          uVar11 = FUN_0045c080();
          uVar21 = *puVar14;
          if ((uVar11 < uVar21) || (puVar14[1] <= uVar11)) {
            iVar19 = 0x15;
          }
          else {
            iVar19 = (int)(uVar11 - uVar21) / 0x1c;
          }
          local_c._0_1_ = 4;
          uVar6 = (undefined1)local_c;
          local_c._0_1_ = 4;
          if (0xf < local_2f4) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_2f4 = 0xf;
          local_2f8 = 0;
          uVar21 = local_308 >> 8;
          local_308 = uVar21 << 8;
          if (iVar19 == 0x15) {
            local_2f4 = 0xf;
            local_2f8 = 0;
            local_308 = uVar21 << 8;
            FUN_00409350();
            local_c._0_1_ = 6;
            FUN_0045e4e0();
            local_c._0_1_ = 7;
            FUN_004015b0();
            local_c._0_1_ = 8;
            FUN_00987d50();
            FUN_00418e30();
            FUN_00401280();
            local_c._0_1_ = 7;
            FUN_00987ac0();
            ppuStack_1b0 = std::ios_base::vftable;
            FUN_00aad52d();
            if (0xf < local_29c) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
            local_c._0_1_ = 4;
            local_29c = 0xf;
            local_2a0 = 0;
            local_2b0 = local_2b0 & 0xffffff00;
            if (0xf < local_2f4) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
          }
          else {
            local_c._0_1_ = uVar6;
            FUN_00467810();
            iVar12 = (*local_2ec + -43800000) / 0x18;
            dVar24 = (double)iVar12 / 365.0;
            iVar22 = (local_330 + -43800000) / 0x18;
            iVar20 = (int)local_328 * 1000;
            fVar4 = (float)iVar22 / 365.0;
            iVar12 = ((int)dVar24 * 0x16d + (iVar12 - (int)((float)(int)dVar24 * 365.0))) -
                     ((int)fVar4 * 0x16d + (iVar22 - (int)((float)(int)fVar4 * 365.0)));
            if (iVar20 == 0) {
              iVar20 = -1;
            }
            else if (iVar12 * 1000 + 0x189373U < 0x39580e) {
              iVar20 = (iVar12 * 1000000) / iVar20;
            }
            else {
              local_2d4 = (uint *)(iVar20 >> 0x1f);
              __allmul();
              iVar20 = __alldiv();
              local_2dc = iVar20 >> 0x1f;
            }
            if (iVar20 < 0) {
              iVar20 = 0;
            }
            else if (1000 < iVar20) {
              iVar20 = 1000;
            }
            local_338[0] = (undefined4 *)(1000 - iVar20);
            FUN_008a8650();
            local_288 = *(undefined4 *)(DAT_012588e8 + 0xb5c);
            local_284 = *(undefined4 *)(DAT_012588e8 + 0xb60);
            local_32c = (undefined4 **)(iVar19 * 0x10);
            local_310 = *(undefined4 **)((int)local_32c + 0x10 + local_2e8);
            puVar18 = (undefined4 *)*local_310;
            local_268 = puVar23;
            if (puVar18 != local_310) {
              do {
                uVar21 = puVar18[10];
                FUN_0045fd40();
                local_c._0_1_ = 9;
                FUN_00408ed0();
                local_c._0_1_ = 4;
                if (0xf < local_29c) {
                    /* WARNING: Subroutine does not return */
                  FUN_00aae91b();
                }
                iVar19 = FUN_0045e430();
                local_29c = 0xf;
                local_2a0 = 0;
                local_2b0 = local_2b0 & 0xffffff00;
                FUN_00409350();
                local_c._0_1_ = 10;
                FUN_00408ed0();
                local_c._0_1_ = 4;
                if (0xf < local_29c) {
                    /* WARNING: Subroutine does not return */
                  FUN_00aae91b();
                }
                if (0 < iVar19) {
                  iVar19 = __alldiv();
                  FUN_00401000();
                  iVar12 = FUN_00b31c00();
                  local_300 = (iVar12 + iVar19) / 1000;
                  if (0 < local_300) {
                    local_2f8 = local_2f8 & 0xffffff00;
                    local_308 = uVar21;
                    local_2fc = puVar23;
                    FUN_00804be0();
                  }
                }
                if (*(char *)((int)puVar18 + 0x2d) == '\0') {
                  puVar1 = (undefined4 *)puVar18[2];
                  if (*(char *)((int)puVar1 + 0x2d) == '\0') {
                    cVar10 = *(char *)((int)*puVar1 + 0x2d);
                    puVar18 = puVar1;
                    puVar1 = (undefined4 *)*puVar1;
                    while (cVar10 == '\0') {
                      cVar10 = *(char *)((int)*puVar1 + 0x2d);
                      puVar18 = puVar1;
                      puVar1 = (undefined4 *)*puVar1;
                    }
                  }
                  else {
                    cVar10 = *(char *)((int)puVar18[1] + 0x2d);
                    puVar8 = (undefined4 *)puVar18[1];
                    puVar1 = puVar18;
                    while ((puVar18 = puVar8, cVar10 == '\0' && (puVar1 == (undefined4 *)puVar18[2])
                           )) {
                      cVar10 = *(char *)((int)puVar18[1] + 0x2d);
                      puVar8 = (undefined4 *)puVar18[1];
                      puVar1 = puVar18;
                    }
                  }
                }
              } while (puVar18 != local_310);
            }
          }
          local_338[1] = (undefined4 *)((int)local_338[1] + 1);
        } while ((int)local_338[1] < local_30c);
      }
      local_324 = (undefined4 **)0x0;
      local_320 = (undefined4 **)0x0;
      local_31c = (undefined4 **)0x0;
      piVar13 = local_168;
      local_c = CONCAT31(local_c._1_3_,0xb);
      local_32c = (undefined4 **)0x0;
      do {
        if (0 < (piVar13[1] - *piVar13) / 0x14) {
          local_328 = (int *)((uint)local_328 & 0xffffff00);
          FUN_0045c1e0();
          local_2ec = (int *)FUN_0045faf0();
          local_338[1] = (undefined4 *)0x0;
          local_330 = 0;
          if (0 < (piVar13[1] - *piVar13) / 0x14) {
            local_338[0] = (undefined4 *)0x0;
            do {
              if ((int)local_2ec <= (int)local_338[1]) break;
              puStack_33c = (undefined4 *)(*piVar13 + (int)local_338[0]);
              uVar21 = (int)local_320 - (int)local_324 >> 2;
              iVar19 = 0;
              if (0 < (int)uVar21) {
                do {
                  cVar10 = FUN_00467460();
                  if (cVar10 != '\0') goto LAB_0045a2aa;
                  iVar19 = iVar19 + 1;
                } while (iVar19 < (int)uVar21);
              }
              ppuVar16 = local_324;
              puVar23 = puStack_33c;
              FUN_008a8650();
              local_288 = *(undefined4 *)(DAT_012588e8 + 0xb5c);
              local_284 = *(undefined4 *)(DAT_012588e8 + 0xb60);
              local_268 = (undefined4 *)puVar23[3];
              iVar19 = FUN_0045e060();
              puVar23[1] = iVar19;
              if (0 < iVar19) {
                if ((&puStack_33c < local_320) && (ppuVar16 <= &puStack_33c)) {
                  ppuVar17 = ppuVar16;
                  if (local_320 == local_31c) {
                    if (0x3ffffffe < uVar21) goto LAB_0045a405;
                    if ((uint)((int)local_31c - (int)ppuVar16 >> 2) < uVar21 + 1) {
                      FUN_004bf300();
                      ppuVar17 = local_324;
                    }
                  }
                  if (local_320 != (undefined4 **)0x0) {
                    *local_320 = ppuVar17[(int)&puStack_33c - (int)ppuVar16 >> 2];
                  }
                }
                else {
                  if (local_320 == local_31c) {
                    if (0x3ffffffe < uVar21) goto LAB_0045a405;
                    if ((uint)((int)local_31c - (int)ppuVar16 >> 2) < uVar21 + 1) {
                      FUN_004bf300();
                    }
                  }
                  if (local_320 != (undefined4 **)0x0) {
                    *local_320 = puVar23;
                  }
                }
                local_320 = local_320 + 1;
                local_338[1] = (undefined4 *)((int)local_338[1] + 1);
              }
LAB_0045a2aa:
              local_338[0] = local_338[0] + 5;
              local_330 = local_330 + 1;
            } while (local_330 < (piVar13[1] - *piVar13) / 0x14);
          }
        }
        local_32c = (undefined4 **)((int)local_32c + 1);
        piVar13 = piVar13 + 4;
      } while ((int)local_32c < 0x15);
      iVar12 = *(int *)(local_2e4 + 0x58) - *(int *)(local_2e4 + 0x54) >> 5;
      iVar19 = 0;
      if (0 < iVar12) {
        iVar19 = iVar12;
      }
      iVar12 = *(int *)(local_2e4 + 0x68) - *(int *)(local_2e4 + 100) >> 5;
      if (iVar19 < iVar12) {
        iVar19 = iVar12;
      }
      iVar12 = *(int *)(local_2e4 + 0x78) - *(int *)(local_2e4 + 0x74) >> 5;
      if (iVar19 < iVar12) {
        iVar19 = iVar12;
      }
      iVar12 = (int)local_320 - (int)local_324 >> 2;
      iVar22 = 0;
      if (iVar12 < iVar19 * 3) {
        iVar22 = iVar19 * 3 - iVar12;
      }
      FUN_00401000();
      FUN_00b31c00();
      iVar19 = __alldiv();
      puVar23 = (undefined4 *)(iVar22 + iVar19 / 1000);
      local_2b0 = 0;
      iStack_2ac = 0;
      uStack_2a8 = 0;
      local_c._0_1_ = 0xc;
      puStack_33c = puVar23;
      iVar19 = FUN_00aae9af();
      local_c._0_1_ = 0xd;
      puStack_2e0 = (undefined4 *)iVar19;
      if (iVar19 == 0) {
        local_338[1] = (undefined4 *)0x0;
      }
      else {
        puStack_294 = &stack0xfffffc94;
        FUN_00408ed0(*local_314 + 0x214,0,0xffffffff);
        local_338[1] = (undefined4 *)FUN_00464710(iVar19);
      }
      puVar18 = local_338[1];
      local_c._0_1_ = 0xc;
      FUN_00464bd0();
      if (0 < (int)puVar23) {
        FUN_008a8650();
        local_288 = *(undefined4 *)(DAT_012588e8 + 0xb5c);
        local_284 = *(undefined4 *)(DAT_012588e8 + 0xb60);
        local_340 = 0;
        local_268 = puVar18;
        FUN_00804870();
        local_328 = *(int **)(local_2e8 + 0x140);
        piVar13 = (int *)*local_328;
        if (piVar13 != local_328) {
          do {
            uVar21 = piVar13[10];
            FUN_0045fd40();
            local_c._0_1_ = 0xe;
            FUN_00408ed0();
            local_c._0_1_ = 0xc;
            if (0xf < uStack_2c4) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
            iVar19 = FUN_0045e430();
            uStack_2c4 = 0xf;
            uStack_2c8 = 0;
            puStack_2d8 = (uint *)((uint)puStack_2d8 & 0xffffff00);
            local_300 = iVar19;
            FUN_00409350();
            local_c._0_1_ = 0xf;
            FUN_00408ed0();
            local_c._0_1_ = 0xc;
            if (0xf < uStack_2c4) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
            if (0 < iVar19) {
              local_2fc = local_338[1];
              local_2f8 = local_2f8 & 0xffffff00;
              local_308 = uVar21;
              FUN_00804be0();
              local_340 = local_340 + local_300;
            }
            if (*(char *)((int)piVar13 + 0x2d) == '\0') {
              piVar2 = (int *)piVar13[2];
              if (*(char *)((int)piVar2 + 0x2d) == '\0') {
                cVar10 = *(char *)(*piVar2 + 0x2d);
                piVar13 = piVar2;
                piVar2 = (int *)*piVar2;
                while (cVar10 == '\0') {
                  cVar10 = *(char *)(*piVar2 + 0x2d);
                  piVar13 = piVar2;
                  piVar2 = (int *)*piVar2;
                }
              }
              else {
                cVar10 = *(char *)(piVar13[1] + 0x2d);
                piVar9 = (int *)piVar13[1];
                piVar2 = piVar13;
                while ((piVar13 = piVar9, cVar10 == '\0' && (piVar2 == (int *)piVar13[2]))) {
                  cVar10 = *(char *)(piVar13[1] + 0x2d);
                  piVar9 = (int *)piVar13[1];
                  piVar2 = piVar13;
                }
              }
            }
            puVar23 = puStack_33c;
          } while (piVar13 != local_328);
        }
        puVar18 = (undefined4 *)((int)(iStack_2ac - local_2b0) / 0x14);
        puVar1 = puStack_33c;
        if ((int)puVar18 < (int)puVar23) {
          bVar5 = false;
          local_2f4 = 0xf;
          local_2f8 = 0;
          local_308 = local_308 & 0xffffff00;
          FUN_00409350();
          local_c._0_1_ = 0x10;
          piVar13 = (int *)FUN_004015b0();
          local_c = CONCAT31(local_c._1_3_,0x11);
          FUN_00987d50();
          FUN_00408be0();
          if (((*(byte *)(*(int *)(*piVar13 + 4) + 0xc + (int)piVar13) & 6) == 0) &&
             (iVar19 = (**(code **)(**(int **)(*(int *)(*piVar13 + 4) + 0x38 + (int)piVar13) + 0x34)
                       )(), iVar19 == -1)) {
            bVar5 = true;
          }
          if (bVar5) {
            FUN_00401120();
          }
          local_c._0_1_ = 0x10;
          FUN_00987ac0();
          ppuStack_1b0 = std::ios_base::vftable;
          FUN_00aad52d();
          local_c._0_1_ = 0xc;
          puVar1 = puVar18;
          if (0xf < local_2f4) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
        }
        puStack_33c = puVar1;
        if ((0 < (int)puVar18) && (0 < local_340)) {
          puStack_2d8 = (uint *)0x0;
          local_2d4 = (uint *)0x0;
          iStack_2d0 = 0;
          uStack_2cc = 0;
          local_c = CONCAT31(local_c._1_3_,0x12);
          iVar19 = local_340;
          uVar21 = local_2b0;
          puVar14 = puStack_2d8;
          if (0 < (int)puVar18) {
            do {
              local_330 = (int)puVar18;
              puVar14 = local_2d4;
              local_2d4 = (uint *)FUN_00aae9af();
              if (local_2d4 == (uint *)0x0) {
                local_2d4 = (uint *)0x0;
              }
              else {
                *local_2d4 = uVar21;
                local_2d4[1] = (uint)puVar14;
                local_2d4[2] = 0;
                *(undefined1 *)(local_2d4 + 3) = 0;
              }
              iVar12 = iStack_2d0 + 1;
              puVar7 = local_2d4;
              if (iStack_2d0 != 0) {
                puVar14[2] = (uint)local_2d4;
                puVar7 = puStack_2d8;
              }
              puStack_2d8 = puVar7;
              uVar21 = uVar21 + 0x14;
              puVar18 = (undefined4 *)(local_330 + -1);
              iStack_2d0 = iVar12;
            } while ((undefined4 *)(local_330 + -1) != (undefined4 *)0x0);
            local_330 = 0;
            puVar14 = puStack_2d8;
          }
          do {
            uVar21 = *param_2 * 0x343fd + 0x269ec3;
            uVar11 = uVar21 * 0x343fd + 0x269ec3;
            *param_2 = uVar11;
            iVar12 = 0;
            if (puVar14 != (uint *)0x0) {
              do {
                puVar23 = (undefined4 *)*puVar14;
                iVar12 = iVar12 + puVar23[2];
                puVar14 = (uint *)puVar14[2];
                if ((int)((uVar11 >> 0x10 & 0x7fff) * (uVar21 >> 0x10 & 0x7fff)) % iVar19 <= iVar12)
                break;
              } while (puVar14 != (uint *)0x0);
              local_338[0] = puVar23;
              iVar19 = FUN_0045e060();
              puVar23[1] = iVar19;
              if (0 < iVar19) {
                if ((local_338 < local_320) && (local_324 <= local_338)) {
                  iVar19 = (int)local_338 - (int)local_324;
                  if (local_320 == local_31c) {
                    uVar21 = (int)local_320 - (int)local_324 >> 2;
                    if (0x3ffffffe < uVar21) goto LAB_0045a405;
                    if ((uint)((int)local_31c - (int)local_324 >> 2) < uVar21 + 1) {
                      FUN_004bf300();
                    }
                  }
                  if (local_320 != (undefined4 **)0x0) {
                    *local_320 = local_324[iVar19 >> 2];
                  }
                }
                else {
                  if (local_320 == local_31c) {
                    uVar21 = (int)local_320 - (int)local_324 >> 2;
                    if (0x3ffffffe < uVar21) {
LAB_0045a405:
                    /* WARNING: Subroutine does not return */
                      FUN_00aad3ad();
                    }
                    if ((uint)((int)local_31c - (int)local_324 >> 2) < uVar21 + 1) {
                      FUN_004bf300();
                    }
                  }
                  if (local_320 != (undefined4 **)0x0) {
                    *local_320 = puVar23;
                  }
                }
                local_320 = local_320 + 1;
              }
              iVar19 = local_340 - puVar23[2];
              puVar14 = puStack_2d8;
              do {
                if ((undefined4 *)*puVar14 == puVar23) break;
                puVar14 = (uint *)puVar14[2];
              } while (puVar14 != (uint *)0x0);
              FUN_005f2ae0();
              puStack_33c = (undefined4 *)((int)puStack_33c + -1);
              puVar14 = puStack_2d8;
              local_340 = iVar19;
            }
          } while (((0 < (int)puStack_33c) && (0 < iStack_2d0)) && (0 < iVar19));
          local_c._0_1_ = 0xc;
          if (puVar14 != (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
        }
      }
      local_328 = (int *)((uint)local_328 & 0xffffff00);
      local_30c = (int)local_320 - (int)local_324 >> 2;
      FUN_0045c320();
      uVar21 = local_2b4;
      puStack_2d8 = (uint *)local_2b4;
      local_2d4 = (uint *)local_2b4;
      puStack_2e0 = (undefined4 *)FUN_00aae9af();
      local_c._0_1_ = 0x13;
      if (puStack_2e0 == (undefined4 *)0x0) {
        puStack_33c = (undefined4 *)0x0;
      }
      else {
        puStack_33c = (undefined4 *)FUN_0045b020();
      }
      puVar23 = puStack_33c;
      local_c._0_1_ = 0xc;
      puStack_33c[2] = *(undefined4 *)(DAT_012588e8 + 0xb0c);
      uVar3 = *(undefined4 *)(local_2e4 + 0x88);
      puStack_33c[0x23] = uVar21;
      puStack_33c[0x22] = uVar3;
      FUN_004598e0();
      local_c._0_1_ = 0x14;
      FUN_00408ed0();
      if (0xf < local_2f4) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_308 = 0;
      uStack_304 = 0;
      local_300 = 0;
      local_c = CONCAT31(local_c._1_3_,0x15);
      local_330 = 0;
      if (0 < local_30c) {
        local_338[0] = (undefined4 *)(local_30c / 3);
        if ((int)local_338[0] < 1) {
          local_338[0] = (undefined4 *)0x1;
        }
        local_32c = local_324;
        local_328 = (int *)(local_2e4 + 0x54);
        local_314 = (uint *)0x0;
        local_2e8 = 0;
        local_310 = (undefined4 *)&DAT_00000008;
        puVar18 = local_338[0];
        do {
          iVar19 = 0;
          puStack_2e0 = (undefined4 *)(local_328[1] - *local_328 >> 5);
          local_340 = 0;
          ppuVar16 = local_32c;
          if (0 < (int)puVar18) {
            do {
              if (((int)local_314 + iVar19 < local_30c) && (*(char *)(*ppuVar16 + 4) == '\0')) {
                local_340 = local_340 + (*ppuVar16)[1];
              }
              iVar19 = iVar19 + 1;
              ppuVar16 = ppuVar16 + 1;
            } while (iVar19 < (int)puVar18);
            puVar23 = puStack_33c;
            if (0 < local_340) {
              local_2ec = (int *)0x0;
              if (0 < (int)puStack_2e0) {
                do {
                  if (local_340 < 1) break;
                  uVar21 = *param_2 * 0x343fd + 0x269ec3;
                  uVar11 = uVar21 * 0x343fd + 0x269ec3;
                  *param_2 = uVar11;
                  local_2b4 = (int)((uVar21 >> 0x10 & 0x7fff) * (uVar11 >> 0x10 & 0x7fff)) %
                              local_340;
                  iVar12 = 0;
                  iVar19 = 0;
                  piVar13 = (int *)0x0;
                  ppuVar16 = local_32c;
                  do {
                    puStack_294 = (undefined1 *)((int)local_314 + iVar19);
                    if ((int)puStack_294 < local_30c) {
                      piVar2 = *ppuVar16;
                      if ((*(int *)(piVar2[3] + 0x80) < 1) && (*(char *)(piVar2[3] + 0x84) != '\0'))
                      {
                        *(undefined1 *)(piVar2 + 4) = 1;
                      }
                      else if (((char)piVar2[4] == '\0') &&
                              ((iVar12 = iVar12 + piVar2[1], (int)local_2b4 <= iVar12 &&
                               (*(int *)((int)local_310 + *piVar2) != 0)))) {
                        piVar13 = local_324[(int)puStack_294];
                        local_340 = local_340 - piVar13[1];
                        *(undefined1 *)(piVar13 + 4) = 1;
                        break;
                      }
                    }
                    iVar19 = iVar19 + 1;
                    ppuVar16 = ppuVar16 + 1;
                  } while (iVar19 < (int)local_338[0]);
                  iVar19 = 0;
                  if (0 < local_30c) {
                    do {
                      if (((char)local_324[iVar19][4] == '\0') &&
                         (*(int *)((int)local_310 + *local_324[iVar19]) != 0)) {
                        piVar13 = local_324[iVar19];
                        *(undefined1 *)(piVar13 + 4) = 1;
                        break;
                      }
                      iVar19 = iVar19 + 1;
                    } while (iVar19 < local_30c);
                  }
                  if (piVar13 != (int *)0x0) {
                    puVar15 = (undefined1 *)FUN_00aae9af();
                    if (puVar15 == (undefined1 *)0x0) {
                      puVar15 = (undefined1 *)0x0;
                    }
                    else {
                      *(undefined4 *)(puVar15 + 0x14) = 0xf;
                      *(undefined4 *)(puVar15 + 0x10) = 0;
                      *puVar15 = 0;
                      *(undefined4 *)(puVar15 + 0x30) = 0xf;
                      *(undefined4 *)(puVar15 + 0x2c) = 0;
                      puVar15[0x1c] = 0;
                      *(undefined4 *)(puVar15 + 0x4c) = 0xf;
                      *(undefined4 *)(puVar15 + 0x48) = 0;
                      puVar15[0x38] = 0;
                    }
                    FUN_008a8650();
                    local_288 = *(undefined4 *)(DAT_012588e8 + 0xb5c);
                    local_268 = (undefined4 *)piVar13[3];
                    local_284 = *(undefined4 *)(DAT_012588e8 + 0xb60);
                    if (*(int *)((int)local_310 + *piVar13) == 0) {
                      if (puVar15 != (undefined1 *)0x0) {
                        FUN_00459820();
                    /* WARNING: Subroutine does not return */
                        FUN_00aae91b();
                      }
                    }
                    else {
                      FUN_0045eae0();
                      FUN_0045fd70();
                      FUN_0045fd40();
                      local_c._0_1_ = 0x16;
                      FUN_0045bcf0();
                      local_c = CONCAT31(local_c._1_3_,0x15);
                      if (0xf < uStack_230) {
                    /* WARNING: Subroutine does not return */
                        FUN_00aae91b();
                      }
                      local_330 = local_330 + 1;
                    }
                  }
                  local_2ec = (int *)((int)local_2ec + 1);
                } while ((int)local_2ec < (int)puStack_2e0);
              }
              local_314 = (uint *)((int)local_314 + (int)local_338[0]);
              local_32c = local_32c + (int)local_338[0];
              puVar18 = local_338[0];
              puVar23 = puStack_33c;
            }
          }
          local_2e8 = local_2e8 + 1;
          local_310 = local_310 + 1;
          local_328 = local_328 + 4;
        } while ((int)local_310 < 0x14);
      }
      uVar21 = local_308;
      if (local_338[1] != (undefined4 *)0x0) {
        (**(code **)*local_338[1])();
      }
      puStack_2e0 = (undefined4 *)&stack0xfffffcac;
      FUN_00401000();
      FUN_00b31c00();
      puStack_2e0 = (undefined4 *)&stack0xfffffca8;
      FUN_00401000();
      FUN_00b31c00();
      FUN_00457c30();
      if (*(int *)(local_2e4 + 0x84) <= local_330) {
        *(undefined4 *)(param_1 + 0x3c) = 0;
        puStack_2e0 = puVar23;
        FUN_0068f390();
        if (uVar21 != 0) {
          FUN_00413860();
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        if (local_2b0 == 0) {
          if (local_324 == (undefined4 **)0x0) {
            local_c = 0xffffffff;
            _eh_vector_destructor_iterator_(local_168,0x10,0x15,FUN_00aa8540);
            ExceptionList = pvStack_14;
            return puStack_33c;
          }
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      if (*(int *)(*(int *)(DAT_012586dc + 0x40) + 0xdc) / 1000 <= *(int *)(param_1 + 0x3c)) {
        *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) / 2;
      }
      (**(code **)*puVar23)();
      if (uVar21 != 0) {
        FUN_00413860();
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      if (iStack_2c0 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      if (local_338[1] != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      uStack_1c = 0xffffffff;
      _eh_vector_destructor_iterator_(auStack_178,0x10,0x15,FUN_00aa8540);
    }
  }
  ExceptionList = pvStack_24;
  return (undefined4 *)0x0;
}

