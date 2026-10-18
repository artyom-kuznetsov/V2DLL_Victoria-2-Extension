// FUN_00489990 @ 00489990 body=[[00489990, 0048a470] [0048a474, 0048a4a4] [0048a4a8, 0048a5d4] [0048a5d8, 0048a71e] [0048a722, 0048a830] [0048a834, 0048a963] [0048a967, 0048aa1b] [0048aa1f, 0048aaff] [0048ab03, 0048abba] [0048abc3, 0048acdb] [0048acdf, 0048ade1] [0048ade5, 0048af0e] [0048af12, 0048afb1] [0048afb5, 0048b035] [0048b039, 0048b04f]]


/* WARNING: Removing unreachable block (ram,0x00489ade) */
/* WARNING: Removing unreachable block (ram,0x00489ae0) */
/* WARNING: Removing unreachable block (ram,0x00489c79) */
/* WARNING: Removing unreachable block (ram,0x00489c80) */
/* WARNING: Removing unreachable block (ram,0x00489a56) */
/* WARNING: Removing unreachable block (ram,0x00489a68) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00489990(int param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 ******ppppppuVar2;
  double dVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  uint *puVar6;
  int *piVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  undefined1 *puVar12;
  uint uVar13;
  undefined4 *******pppppppuVar14;
  uint *puVar15;
  undefined4 *****pppppuVar16;
  uint *puVar17;
  uint uVar18;
  bool bVar19;
  longlong lVar20;
  longlong lVar21;
  undefined *puVar22;
  int iVar23;
  char *pcVar24;
  undefined4 uStack_4a4;
  undefined4 uStack_4a0;
  undefined4 uStack_49c;
  undefined4 *******pppppppuStack_48c;
  undefined1 *local_488;
  uint *local_484;
  int *piStack_480;
  int local_47c;
  undefined4 *******local_478;
  undefined1 *local_474;
  undefined8 local_470;
  uint *local_468;
  uint local_464;
  undefined8 local_460;
  int *local_458;
  undefined8 uStack_454;
  uint local_44c;
  undefined1 *local_448;
  undefined8 uStack_440;
  uint *local_42c;
  uint *local_428;
  uint *local_424;
  undefined4 uStack_41c;
  uint uStack_418;
  undefined8 local_410;
  undefined8 local_408;
  int local_3fc;
  undefined1 local_3f8 [4];
  uint uStack_3f4;
  undefined8 local_3f0;
  undefined8 local_3e8;
  uint local_3e0;
  uint uStack_3dc;
  undefined8 local_3d8;
  undefined4 uStack_3c8;
  uint auStack_3c4 [4];
  undefined4 uStack_3b4;
  uint local_3b0;
  uint local_3ac;
  undefined1 *local_3a8;
  undefined4 local_3a0;
  undefined4 local_39c;
  uint uStack_390;
  undefined4 uStack_380;
  uint uStack_37c;
  undefined1 local_370 [72];
  int local_328;
  undefined4 local_324;
  undefined4 local_320;
  undefined **appuStack_2dc [5];
  undefined **appuStack_2c8 [10];
  undefined **ppuStack_2a0;
  int iStack_210;
  undefined **appuStack_1b0 [5];
  undefined **appuStack_19c [53];
  undefined **ppuStack_c8;
  undefined4 uStack_80;
  undefined4 uStack_6c;
  undefined4 uStack_58;
  void *pvStack_4c;
  undefined1 *puStack_48;
  undefined4 local_44;
  
  local_44 = 0xffffffff;
  puStack_48 = &LAB_00bb6d48;
  pvStack_4c = ExceptionList;
  local_464 = DAT_012588e8;
  ExceptionList = &pvStack_4c;
  local_470 = (double)FUN_00b31c36();
  local_460 = CONCAT44(local_460._4_4_,SUB84(local_470,0));
  iVar9 = DAT_0125ba24 + _DAT_0125b954 + (uint)CARRY4(DAT_0125ba20,_DAT_0125b950);
  dVar3 = local_470;
  if (((int)DAT_0125ba14 <= iVar9) &&
     (((int)DAT_0125ba14 < iVar9 || (DAT_0125ba10 < DAT_0125ba20 + _DAT_0125b950)))) {
    lVar20 = __alldiv((DAT_0125b978 + _DAT_0125b950) * 0x8000,
                      (DAT_0125b97c + _DAT_0125b954 + (uint)CARRY4(DAT_0125b978,_DAT_0125b950)) *
                      0x8000 | DAT_0125b978 + _DAT_0125b950 >> 0x11);
    lVar21 = FUN_00b31c36();
    dVar3 = (double)(lVar20 + lVar21);
  }
  if ((CONCAT44(DAT_00f0ae14,DAT_00f0ae10) < (longlong)dVar3) ||
     ((longlong)dVar3 <= CONCAT44(DAT_0125ba14,DAT_0125ba10))) {
    dVar3 = local_470;
  }
  ppppppuVar2 = (undefined4 ******)((*(int *)(param_1 + 0x718) - *(int *)(param_1 + 0x714)) / 0x58);
  if (0 < (int)ppppppuVar2) {
    local_47c = 0;
    local_478 = (undefined4 *******)ppppppuVar2;
    do {
      DAT_0125ba34 = (undefined4)((ulonglong)dVar3 >> 0x20);
      DAT_0125ba30 = SUB84(dVar3,0);
      iVar9 = *(int *)(param_1 + 0x714) + local_47c;
      _memset((void *)(iVar9 + 8),0,0x40);
      if (*(int *)(iVar9 + 0x48) != *(int *)(iVar9 + 0x4c)) {
        *(int *)(iVar9 + 0x4c) = *(int *)(iVar9 + 0x48);
      }
      uVar18 = *(uint *)(iVar9 + 0x4c);
      if ((uVar18 < 0x125e449) || (puVar1 = *(undefined4 **)(iVar9 + 0x48), &DAT_0125e448 < puVar1))
      {
        if (uVar18 == *(uint *)(iVar9 + 0x50)) {
          FUN_00423780();
        }
        puVar5 = *(undefined4 **)(iVar9 + 0x4c);
        if (puVar5 != (undefined4 *)0x0) {
          *puVar5 = DAT_0125e448;
          uVar8 = DAT_0125e44c;
          goto LAB_00489b65;
        }
      }
      else {
        if (uVar18 == *(uint *)(iVar9 + 0x50)) {
          FUN_00423780();
        }
        puVar5 = *(undefined4 **)(iVar9 + 0x4c);
        puVar1 = (undefined4 *)
                 (*(int *)(iVar9 + 0x48) + ((int)&DAT_0125e448 - (int)puVar1 >> 3) * 8);
        if (puVar5 != (undefined4 *)0x0) {
          *puVar5 = *puVar1;
          uVar8 = puVar1[1];
LAB_00489b65:
          puVar5[1] = uVar8;
        }
      }
      *(int *)(iVar9 + 0x4c) = *(int *)(iVar9 + 0x4c) + 8;
      dVar3 = (double)CONCAT44(DAT_0125ba34,DAT_0125ba30);
      local_47c = local_47c + 0x58;
      local_478 = (undefined4 *******)((int)local_478 + -1);
    } while (local_478 != (undefined4 *******)0x0);
  }
  DAT_0125ba34 = (undefined4)((ulonglong)dVar3 >> 0x20);
  DAT_0125ba30 = SUB84(dVar3,0);
  FUN_0047dbb0();
  FUN_0047dbb0();
  FUN_00482930();
  FUN_004808d0(param_1);
  local_468 = *(uint **)(local_464 + 0xb60);
  FUN_0047dbb0();
  FUN_0047dbb0();
  local_458 = *(int **)(DAT_012588e8 + 0xb5c);
  local_478 = *(undefined4 ********)
               (*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4);
  for (pppppuVar16 = local_478[0x506];
      (uVar18 = local_464, local_478[0x506] <= pppppuVar16 && (pppppuVar16 < local_478[0x507]));
      pppppuVar16 = pppppuVar16 + 2) {
    FUN_0047dc20();
  }
  FUN_00685620();
  FUN_00484060();
  _memset((void *)(param_1 + 0x128),0,0x40);
  if (*(int *)(param_1 + 0x168) != *(int *)(param_1 + 0x16c)) {
    *(int *)(param_1 + 0x16c) = *(int *)(param_1 + 0x168);
  }
  uVar13 = *(uint *)(param_1 + 0x16c);
  if ((uVar13 < 0x125e449) || (puVar1 = *(undefined4 **)(param_1 + 0x168), &DAT_0125e448 < puVar1))
  {
    if (uVar13 == *(uint *)(param_1 + 0x170)) {
      FUN_00423780();
    }
    puVar5 = *(undefined4 **)(param_1 + 0x16c);
    if (puVar5 == (undefined4 *)0x0) goto LAB_00489d26;
    *puVar5 = DAT_0125e448;
    uVar8 = DAT_0125e44c;
  }
  else {
    if (uVar13 == *(uint *)(param_1 + 0x170)) {
      FUN_00423780();
    }
    puVar5 = *(undefined4 **)(param_1 + 0x16c);
    puVar1 = (undefined4 *)(*(int *)(param_1 + 0x168) + ((int)&DAT_0125e448 - (int)puVar1 >> 3) * 8)
    ;
    if (puVar5 == (undefined4 *)0x0) goto LAB_00489d26;
    *puVar5 = *puVar1;
    uVar8 = puVar1[1];
  }
  puVar5[1] = uVar8;
LAB_00489d26:
  *(int *)(param_1 + 0x16c) = *(int *)(param_1 + 0x16c) + 8;
  iVar9 = *(int *)(uVar18 + 0xbd4) - *(int *)(uVar18 + 0xbd0) >> 2;
  local_478 = (undefined4 *******)0x0;
  local_3fc = iVar9;
  if (0 < iVar9) {
    do {
      pppppppuVar14 = local_478;
      if (local_478 == (undefined4 *******)(((int)local_478 / 0x14) * 0x14)) {
        FUN_00685620();
        iVar9 = local_3fc;
      }
      local_488 = *(undefined1 **)(*(int *)(local_464 + 0xbd0) + (int)pppppppuVar14 * 4);
      if (0 < (int)(*(int *)(local_488 + 0x9dc) - *(int *)(local_488 + 0x9d8) & 0xfffffffcU)) {
        local_47c = *(int *)(local_488 + 0x20) * 0x58 + *(int *)(param_1 + 0x3f4);
        if ((int)(*(int *)(local_488 + 0x141c) - *(int *)(local_488 + 0x1418) & 0xfffffff8U) < 1) {
          local_484 = *(uint **)(local_488 + 0x1428);
          if (*(int *)(local_488 + 0x142c) == 0) {
            if (local_488[0x129c] != '\0') {
              FUN_0047dca0();
              FUN_004898d0();
              FUN_0047db00();
              local_44 = 2;
              local_484 = (uint *)&stack0xfffffb38;
              FUN_0047e360();
              FUN_0047dc20();
              local_484 = (uint *)&stack0xfffffb38;
              FUN_0047e2f0();
              local_484 = *(uint **)(local_488 + 0x20);
              FUN_0047dca0();
              if (local_468 == local_484) {
                FUN_0047dca0();
              }
              local_44 = 0xffffffff;
              if (local_328 != 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00aae91b();
              }
            }
            FUN_0047dc20();
            iVar9 = local_3fc;
            pppppppuVar14 = local_478;
          }
        }
        else {
          local_42c = (uint *)0x0;
          local_428 = (uint *)0x0;
          local_424 = (uint *)0x0;
          local_44 = 0;
          puVar15 = (uint *)0x0;
          if (local_488[0x129c] != '\0') {
            _local_3f8 = 0;
            local_3d8 = 0;
            FUN_0047dca0();
            puVar12 = local_488;
            FUN_004898d0();
            puVar17 = (uint *)0x1;
            local_474 = (undefined1 *)(*(int *)(puVar12 + 0x1228) - *(int *)(puVar12 + 0x1224) >> 3)
            ;
            local_410 = 0;
            local_410._0_4_ = 0;
            local_410._4_4_ = 0;
            uVar18 = local_410._4_4_;
            uVar13 = (uint)local_410;
            if (1 < (int)local_474) {
              iVar9 = local_3d8._4_4_;
              if (1 < (int)(local_474 + -1)) {
                puVar6 = (uint *)(*(int *)(puVar12 + 0x1224) + 8);
                iVar10 = ((uint)(local_474 + -3) >> 1) + 1;
                puVar17 = (uint *)(((uint)(local_474 + -3) >> 1) + 2 + iVar10);
                do {
                  _local_3f8 = CONCAT44(uStack_3f4 + puVar6[1] +
                                        (uint)CARRY4((uint)local_3f8,*puVar6),
                                        (int)local_3f8 + *puVar6);
                  bVar19 = CARRY4((uint)local_3d8,puVar6[2]);
                  local_3d8 = CONCAT44(local_3d8._4_4_,(uint)local_3d8 + puVar6[2]);
                  iVar9 = iVar9 + puVar6[3] + (uint)bVar19;
                  puVar6 = puVar6 + 4;
                  iVar10 = iVar10 + -1;
                  local_484 = puVar17;
                } while (iVar10 != 0);
              }
              if ((int)puVar17 < (int)local_474) {
                uVar13 = *(uint *)(*(int *)(local_488 + 0x1224) + (int)puVar17 * 8);
                uVar18 = *(int *)(*(int *)(local_488 + 0x1224) + (int)puVar17 * 8 + 4) +
                         iVar9 + uStack_3f4 + (uint)CARRY4((uint)local_3d8,(uint)local_3f8) +
                         (uint)CARRY4(uVar13,(uint)local_3d8 + (int)local_3f8);
                uVar13 = uVar13 + (uint)local_3d8 + (int)local_3f8;
              }
              else {
                uVar18 = iVar9 + uStack_3f4 + (uint)CARRY4((uint)local_3d8,(uint)local_3f8);
                uVar13 = (uint)local_3d8 + (int)local_3f8;
              }
            }
            if ((uVar13 != DAT_0125ba10) || (uVar18 != DAT_0125ba14)) {
              local_3a8 = local_488;
              local_3b0 = uVar13;
              local_3ac = uVar18;
              FUN_0048c390();
              puVar15 = local_428;
            }
          }
          local_458 = *(int **)(local_488 + 0x1418);
          while ((*(int **)(local_488 + 0x1418) <= local_458 &&
                 (local_458 < *(int **)(local_488 + 0x141c)))) {
            piVar11 = local_458 + 2;
            local_484 = (uint *)*local_458;
            piVar7 = local_458 + 1;
            local_458 = piVar11;
            if (*(char *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *piVar7 * 4) + 0x129c) != '\0') {
              local_3e8 = 0;
              local_460 = 0;
              FUN_0047dca0();
              FUN_004898d0();
              puVar4 = local_488;
              puVar12 = (undefined1 *)0x1;
              local_484 = (uint *)(*(int *)(local_488 + 0x1228) - *(int *)(local_488 + 0x1224) >> 3)
              ;
              local_408 = 0;
              local_408._4_4_ = 0;
              uVar18 = local_408._4_4_;
              if (1 < (int)local_484) {
                iVar9 = local_460._4_4_;
                uVar18 = (uint)local_460;
                if (1 < (int)local_484 + -1) {
                  uVar13 = (int)local_484 - 3U >> 1;
                  puVar17 = (uint *)(*(int *)(local_488 + 0x1224) + 8);
                  iVar10 = uVar13 + 1;
                  puVar12 = (undefined1 *)(uVar13 + 2 + iVar10);
                  do {
                    local_3e8 = CONCAT44(local_3e8._4_4_ + puVar17[1] +
                                         (uint)CARRY4((uint)local_3e8,*puVar17),
                                         (uint)local_3e8 + *puVar17);
                    bVar19 = CARRY4(uVar18,puVar17[2]);
                    uVar18 = uVar18 + puVar17[2];
                    iVar9 = iVar9 + puVar17[3] + (uint)bVar19;
                    puVar17 = puVar17 + 4;
                    iVar10 = iVar10 + -1;
                    puVar15 = local_428;
                    local_474 = puVar12;
                  } while (iVar10 != 0);
                }
                if ((int)puVar12 < (int)local_484) {
                  uVar13 = *(uint *)(*(int *)(local_488 + 0x1224) + (int)puVar12 * 8);
                  local_408 = (ulonglong)(uVar13 + uVar18 + (uint)local_3e8);
                  uVar18 = *(int *)(*(int *)(local_488 + 0x1224) + 4 + (int)puVar12 * 8) +
                           iVar9 + local_3e8._4_4_ + (uint)CARRY4(uVar18,(uint)local_3e8) +
                           (uint)CARRY4(uVar13,uVar18 + (uint)local_3e8);
                }
                else {
                  local_408 = (ulonglong)(uVar18 + (uint)local_3e8);
                  uVar18 = iVar9 + local_3e8._4_4_ + (uint)CARRY4(uVar18,(uint)local_3e8);
                }
              }
              if (((uint)local_408 != DAT_0125ba10) || (uVar18 != DAT_0125ba14)) {
                puVar17 = (uint *)((int)&uStack_454 + 4);
                uStack_454._4_4_ = (uint)local_408;
                local_448 = local_488;
                local_44c = uVar18;
                if ((puVar17 < puVar15) && (local_42c <= puVar17)) {
                  uVar18 = (int)puVar17 - (int)local_42c;
                  if (puVar15 == local_424) {
                    uVar13 = (int)puVar15 - (int)local_42c >> 4;
                    if (0xffffffe < uVar13) {
LAB_0048abc3:
                    /* WARNING: Subroutine does not return */
                      FUN_00aad3ad();
                    }
                    if ((uint)((int)local_424 - (int)local_42c >> 4) < uVar13 + 1) {
                      FUN_0048c460();
                      puVar15 = local_428;
                    }
                  }
                  puVar17 = (uint *)((uVar18 & 0xfffffff0) + (int)local_42c);
                  if (puVar15 != (uint *)0x0) {
                    *puVar15 = *puVar17;
                    puVar15[1] = puVar17[1];
                    puVar15[2] = puVar17[2];
                  }
                  puVar15 = puVar15 + 4;
                  local_428 = puVar15;
                }
                else {
                  if (puVar15 == local_424) {
                    uVar13 = (int)puVar15 - (int)local_42c >> 4;
                    if (0xffffffe < uVar13) goto LAB_0048abc3;
                    if ((uint)((int)local_424 - (int)local_42c >> 4) < uVar13 + 1) {
                      FUN_0048c460();
                      puVar15 = local_428;
                    }
                  }
                  if (puVar15 != (uint *)0x0) {
                    *puVar15 = (uint)local_408;
                    puVar15[1] = uVar18;
                    puVar15[2] = (uint)puVar4;
                  }
                  puVar15 = puVar15 + 4;
                  local_428 = puVar15;
                }
              }
            }
          }
          local_3f0 = 0;
          local_470 = 0.0;
          FUN_0047db00();
          local_44 = CONCAT31(local_44._1_3_,1);
          local_484 = (uint *)&stack0xfffffb38;
          FUN_0047e360();
          local_484 = (uint *)&stack0xfffffb38;
          FUN_0047e2f0();
          local_474 = (undefined1 *)((int)puVar15 - (int)local_42c >> 4);
          puVar15 = (uint *)0x0;
          iVar9 = local_470._4_4_;
          uVar18 = (uint)local_470;
          if (1 < (int)local_474) {
            iVar10 = ((uint)(local_474 + -2) >> 1) + 1;
            puVar15 = (uint *)(iVar10 * 2);
            puVar17 = local_42c;
            do {
              local_3f0 = CONCAT44(local_3f0._4_4_ + puVar17[1] +
                                   (uint)CARRY4((uint)local_3f0,*puVar17),(uint)local_3f0 + *puVar17
                                  );
              bVar19 = CARRY4(uVar18,puVar17[4]);
              uVar18 = uVar18 + puVar17[4];
              iVar9 = iVar9 + puVar17[5] + (uint)bVar19;
              puVar17 = puVar17 + 8;
              iVar10 = iVar10 + -1;
              local_484 = puVar15;
            } while (iVar10 != 0);
          }
          if ((int)puVar15 < (int)local_474) {
            local_3e0 = local_42c[(int)puVar15 * 4];
            uStack_3dc = local_42c[(int)puVar15 * 4 + 1];
          }
          else {
            uStack_3dc = 0;
            local_3e0 = 0;
          }
          uVar13 = local_3e0 + uVar18 + (uint)local_3f0;
          uVar18 = uStack_3dc + iVar9 + local_3f0._4_4_ + (uint)CARRY4(uVar18,(uint)local_3f0) +
                   (uint)CARRY4(local_3e0,uVar18 + (uint)local_3f0);
          _local_3e0 = CONCAT44(uVar18,uVar13);
          if (((uVar13 != DAT_0125ba10) || (uVar18 != DAT_0125ba14)) && (0 < (int)local_474)) {
            puVar15 = local_42c + 2;
            local_488 = local_474;
            do {
              __alldiv(puVar15[-2] << 0xf,puVar15[-1] << 0xf | puVar15[-2] >> 0x11);
              local_484 = (uint *)&stack0xfffffb38;
              FUN_0047e220(*puVar15 + 0x1184,local_370);
              local_484 = *(uint **)(*puVar15 + 0x20);
              local_474 = &stack0xfffffb38;
              FUN_0047e220((int)local_484 * 0x58 + *(int *)(param_1 + 0x404),local_370);
              if (local_468 == local_484) {
                local_484 = (uint *)&stack0xfffffb38;
                FUN_0047e220(param_1 + 0x664,local_370);
              }
              puVar15 = puVar15 + 4;
              local_488 = local_488 + -1;
            } while (local_488 != (undefined1 *)0x0);
          }
          FUN_0047dc20();
          if (local_328 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_44 = 0xffffffff;
          local_328 = 0;
          local_324 = 0;
          local_320 = 0;
          if (local_42c != (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_42c = (uint *)0x0;
          local_428 = (uint *)0x0;
          local_424 = (uint *)0x0;
          iVar9 = local_3fc;
          pppppppuVar14 = local_478;
        }
      }
      local_478 = (undefined4 *******)((int)pppppppuVar14 + 1);
    } while ((int)local_478 < iVar9);
  }
  if (DAT_012586d8 != '\0') {
    local_39c = 0xf;
    local_3a0 = 0;
    local_3b0 = local_3b0 & 0xffffff00;
    FUN_00409350();
    local_44 = 3;
    piVar7 = (int *)FUN_004015b0(&local_3b0);
    local_44 = CONCAT31(local_44._1_3_,4);
    FUN_00987d50(piVar7,"\n\nACTUAL SOLD");
    FUN_00408be0(piVar7);
    uVar18 = 0;
    if (((*(uint *)(*(int *)(*piVar7 + 4) + 0xc + (int)piVar7) & 6) == 0) &&
       (iVar9 = (**(code **)(**(int **)(*(int *)(*piVar7 + 4) + 0x38 + (int)piVar7) + 0x34))(),
       iVar9 == -1)) {
      uVar18 = 4;
    }
    if (uVar18 != 0) {
      uVar18 = *(uint *)((int)piVar7 + *(int *)(*piVar7 + 4) + 0xc) | uVar18;
      if (*(int *)((int)piVar7 + *(int *)(*piVar7 + 4) + 0x38) == 0) {
        uVar18 = uVar18 | 4;
      }
      FUN_00401120(uVar18,0);
    }
    uStack_58 = CONCAT31(uStack_58._1_3_,3);
    FUN_00987ac0(appuStack_19c);
    appuStack_19c[0] = std::ios_base::vftable;
    FUN_00aad52d(appuStack_19c);
    uStack_58 = 0xffffffff;
    if (0xf < local_3b0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(auStack_3c4[0]);
    }
    uVar18 = 0;
    local_3b0 = 0xf;
    uStack_3b4 = 0;
    auStack_3c4[0] = auStack_3c4[0] & 0xffffff00;
    FUN_00409350("worldmarket.cpp",0xf);
    uStack_58 = 5;
    piVar7 = (int *)FUN_004015b0(auStack_3c4,0xbc3,0x10002);
    uStack_58 = CONCAT31(uStack_58._1_3_,6);
    FUN_00987d50(piVar7,"--------------------------------------------",0x2c,0);
    FUN_00408be0(piVar7);
    if (((*(byte *)(*(int *)(*piVar7 + 4) + 0xc + (int)piVar7) & 6) == 0) &&
       (iVar9 = (**(code **)(**(int **)(*(int *)(*piVar7 + 4) + 0x38 + (int)piVar7) + 0x34))(),
       iVar9 == -1)) {
      uVar18 = 4;
    }
    if (uVar18 != 0) {
      uVar18 = *(uint *)((int)piVar7 + *(int *)(*piVar7 + 4) + 0xc) | uVar18;
      if (*(int *)((int)piVar7 + *(int *)(*piVar7 + 4) + 0x38) == 0) {
        uVar18 = uVar18 | 4;
      }
      FUN_00401120(uVar18,0);
    }
    uStack_6c = CONCAT31(uStack_6c._1_3_,5);
    FUN_00987ac0(appuStack_1b0);
    appuStack_1b0[0] = std::ios_base::vftable;
    FUN_00aad52d(appuStack_1b0);
    iVar9 = DAT_012587f0;
    uStack_6c = 0xffffffff;
    if (0xf < auStack_3c4[0]) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b((uint)local_3d8);
    }
    puVar15 = (uint *)(DAT_012587f0 + 0xc);
    auStack_3c4[0] = 0xf;
    uStack_3c8 = 0;
    local_3d8 = local_3d8 & 0xffffffffffffff00;
    piStack_480 = (int *)*puVar15;
    while( true ) {
      uStack_6c = 0xffffffff;
      if ((piStack_480 < (int *)*puVar15) || (*(int **)(iVar9 + 0x10) <= piStack_480)) break;
      iVar10 = *piStack_480;
      piStack_480 = piStack_480 + 1;
      _local_3e0 = CONCAT44(uStack_3dc,0xf);
      local_3e8 = local_3e8 & 0xffffffff;
      _local_3f8 = (uint5)(uint)local_3f8;
      FUN_00409350("worldmarket.cpp",0xf);
      uStack_6c = 7;
      uVar8 = *(undefined4 *)(iVar10 + 8);
      pcVar24 = ") sold(domestic): ";
      puVar22 = &DAT_00dfbce0;
      FUN_005659c0(iVar10,&local_478);
      uStack_6c._0_1_ = 8;
      uVar8 = FUN_004015b0(local_3f8 + 4,0xbc8,0x10002,puVar22,uVar8,pcVar24);
      uStack_6c._0_1_ = 0xb;
      pppppppuVar14 = local_478;
      if (local_464 < 0x10) {
        pppppppuVar14 = &local_478;
      }
      uVar8 = FUN_00418e30(uVar8,pppppppuVar14);
      uStack_6c._0_1_ = 10;
      if (0xf < local_464) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_478);
      }
      local_464 = 0xf;
      local_468 = (uint *)0x0;
      local_478 = (undefined4 *******)((uint)local_478 & 0xffffff00);
      FUN_00418e30(uVar8);
      uVar8 = FUN_00455470();
      uVar8 = FUN_00418e30(uVar8);
      uStack_440 = (double)CONCAT44(uStack_49c,uStack_4a0) * 3.0517578125e-05;
      FUN_0048c130(uVar8,uStack_440);
      FUN_00401280(uVar8);
      uStack_80 = CONCAT31(uStack_80._1_3_,7);
      FUN_00987ac0(appuStack_2dc);
      appuStack_2dc[0] = std::ios_base::vftable;
      FUN_00aad52d(appuStack_2dc);
      uStack_80 = 0xffffffff;
      if (0xf < uStack_3f4) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b((uint)local_408);
      }
      _local_3f8 = 0xf00000000;
      local_408 = local_408 & 0xffffffffffffff00;
      FUN_00409350("worldmarket.cpp",0xf);
      uStack_80 = 0xc;
      iVar23 = *(int *)(iVar10 + 8);
      uStack_49c = *(undefined4 *)
                    (*(int *)(param_1 + 0x53c) + (uint)*(byte *)(param_1 + 0x4fc + iVar23) * 8);
      pcVar24 = ") sold(world): ";
      puVar22 = &DAT_00dfbce0;
      FUN_005659c0(iVar10,&pppppppuStack_48c);
      uStack_80._0_1_ = 0xd;
      uVar8 = FUN_004015b0(&local_408,0xbc9,0x10002,puVar22,iVar23,pcVar24);
      uStack_80._0_1_ = 0x10;
      pppppppuVar14 = pppppppuStack_48c;
      if (local_478 < (undefined4 ******)0x10) {
        pppppppuVar14 = &pppppppuStack_48c;
      }
      uVar8 = FUN_00418e30(uVar8,pppppppuVar14);
      uStack_80 = CONCAT31(uStack_80._1_3_,0xf);
      if ((undefined4 ******)0xf < local_478) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(pppppppuStack_48c);
      }
      local_478 = (undefined4 *******)0xf;
      local_47c = 0;
      pppppppuStack_48c = (undefined4 *******)((uint)pppppppuStack_48c & 0xffffff00);
      FUN_00418e30(uVar8);
      uVar8 = FUN_00455470();
      uVar8 = FUN_00418e30(uVar8);
      uStack_454 = (double)CONCAT44(uStack_4a0,uStack_4a4) * 3.0517578125e-05;
      FUN_0048c130(uVar8,uStack_454);
      FUN_00401280(uVar8);
      uStack_6c = CONCAT31(uStack_6c._1_3_,0xc);
      FUN_00987ac0(appuStack_2c8);
      appuStack_2c8[0] = std::ios_base::vftable;
      FUN_00aad52d(appuStack_2c8);
      uStack_6c = 0xffffffff;
      if (0xf < local_3e0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(uStack_3f4);
      }
    }
    uVar18 = 0;
    _local_3e0 = CONCAT44(uStack_3dc,0xf);
    local_3e8 = local_3e8 & 0xffffffff;
    _local_3f8 = (uint5)(uint)local_3f8;
    FUN_00409350("worldmarket.cpp",0xf);
    uStack_6c = 0x11;
    piVar7 = (int *)FUN_004015b0();
    uStack_6c = CONCAT31(uStack_6c._1_3_,0x12);
    FUN_00987d50(piVar7,"\n\nEXPORTED_TO_WORLD_MARKET_FOR_NEXT_TURN",0x28,0);
    FUN_00408be0(piVar7);
    if ((*(byte *)(*(int *)(*piVar7 + 4) + 0xc + (int)piVar7) & 6) == 0) {
      iVar9 = (**(code **)(**(int **)(*(int *)(*piVar7 + 4) + 0x38 + (int)piVar7) + 0x34))();
      if (iVar9 == -1) {
        uVar18 = 4;
      }
    }
    if (uVar18 != 0) {
      uVar18 = *(uint *)((int)piVar7 + *(int *)(*piVar7 + 4) + 0xc) | uVar18;
      if (*(int *)((int)piVar7 + *(int *)(*piVar7 + 4) + 0x38) == 0) {
        uVar18 = uVar18 | 4;
      }
      FUN_00401120(uVar18,0);
    }
    uStack_80 = CONCAT31(uStack_80._1_3_,0x11);
    FUN_00987ac0(appuStack_2dc);
    appuStack_2dc[0] = std::ios_base::vftable;
    FUN_00aad52d(appuStack_2dc);
    uStack_80 = 0xffffffff;
    if (0xf < uStack_3f4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b((uint)local_408);
    }
    bVar19 = false;
    local_478 = (undefined4 *******)0xf;
    local_47c = 0;
    pppppppuStack_48c = (undefined4 *******)((uint)pppppppuStack_48c & 0xffffff00);
    FUN_00409350("worldmarket.cpp",0xf);
    uStack_80 = 0x13;
    piVar7 = (int *)FUN_004015b0();
    uStack_80 = CONCAT31(uStack_80._1_3_,0x14);
    FUN_00987d50(piVar7,"--------------------------------------------",0x2c,0);
    FUN_00408be0(piVar7);
    if ((*(byte *)(*(int *)(*piVar7 + 4) + 0xc + (int)piVar7) & 6) == 0) {
      iVar9 = (**(code **)(**(int **)(*(int *)(*piVar7 + 4) + 0x38 + (int)piVar7) + 0x34))();
      if (iVar9 == -1) {
        bVar19 = true;
      }
    }
    if (bVar19) {
      FUN_00401120();
    }
    local_44 = CONCAT31(local_44._1_3_,0x13);
    FUN_00987ac0();
    ppuStack_2a0 = std::ios_base::vftable;
    FUN_00aad52d();
    local_44 = 0xffffffff;
    if (0xf < uStack_440._4_4_) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_440 = 3.18299368644791e-313;
    uStack_454._4_4_ = uStack_454._4_4_ & 0xffffff00;
    piVar7 = *(int **)(DAT_012587f0 + 0xc);
    while ((local_44 = 0xffffffff, (int *)*local_468 <= piVar7 && (piVar7 < (int *)local_468[1]))) {
      iVar9 = *piVar7;
      piVar7 = piVar7 + 1;
      uStack_418 = 0xf;
      uStack_41c = 0;
      local_42c = (uint *)((uint)local_42c & 0xffffff00);
      FUN_00409350();
      local_44 = 0x15;
      uVar18 = (uint)*(byte *)(param_1 + 0x128 + *(int *)(iVar9 + 8));
      local_458 = *(int **)(*(int *)(param_1 + 0x168) + uVar18 * 8);
      uStack_454._0_4_ = *(undefined4 *)(*(int *)(param_1 + 0x168) + uVar18 * 8 + 4);
      FUN_005659c0(iVar9);
      local_44._0_1_ = 0x16;
      uVar8 = FUN_004015b0(&local_42c,0xbd2);
      local_44._0_1_ = 0x19;
      FUN_00418e30(uVar8);
      local_44._0_1_ = 0x18;
      if (0xf < uStack_37c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      uStack_37c = 0xf;
      uStack_380 = 0;
      uStack_390 = uStack_390 & 0xffffff00;
      uVar8 = FUN_00418e30();
      local_470 = (double)CONCAT44((undefined4)uStack_454,local_458) * 3.0517578125e-05;
      FUN_0048c130(uVar8);
      FUN_00401280();
      local_44 = CONCAT31(local_44._1_3_,0x15);
      FUN_00987ac0();
      ppuStack_c8 = std::ios_base::vftable;
      FUN_00aad52d();
      local_44 = 0xffffffff;
      if (0xf < uStack_418) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      uStack_418 = 0xf;
      uStack_41c = 0;
      local_42c = (uint *)((uint)local_42c & 0xffffff00);
    }
  }
  FUN_0047db00();
  local_44 = 0x1a;
  FUN_0047dc20();
  FUN_0047df80();
  if (param_3 != 0) {
    FUN_00488080();
  }
  if (iStack_210 == 0) {
    ExceptionList = pvStack_4c;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

