// FUN_00578eb0 @ 00578eb0 body=[[00578eb0, 00579039] [00579040, 00579091] [00579095, 005790e9] [005790f0, 005791cc] [005791d0, 00579204] [00579208, 0057922f] [00579233, 0057925c] [00579260, 0057935f] [00579363, 0057938e] [00579392, 005793bc] [005793c0, 005793f2] [005793f6, 00579499] [0057949d, 005796c0] [005796c4, 005798be] [005798c7, 005799ff] [00579a03, 00579a32] [00579a36, 00579a60] [00579a64, 00579a8e] [00579a92, 00579abc] [00579ac0, 00579aec] [00579af0, 00579bc2] [00579bc6, 00579c32] [00579c36, 00579c57] [00579c5b, 00579c91] [00579c9a, 00579ce6] [00579cea, 00579d08] [00579d0c, 00579d2f] [00579d33, 00579d4d] [00579d51, 00579d7f] [00579d83, 00579d99]]


void FUN_00578eb0(int param_1)

{
  char cVar1;
  int **ppiVar2;
  int **ppiVar3;
  undefined1 uVar4;
  undefined4 ****ppppuVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  undefined4 *puVar11;
  char *pcVar12;
  undefined4 uVar13;
  char *pcVar14;
  uint uVar15;
  uint *puVar16;
  int *piVar17;
  int *local_400;
  int local_3fc;
  uint *local_3f8;
  int *local_3f4;
  uint local_3f0;
  int *local_3ec;
  int *local_3e4;
  uint local_3e0 [4];
  undefined4 local_3d0;
  uint local_3cc;
  uint local_3c4;
  uint local_3c0;
  undefined4 local_3bc;
  uint local_3b4;
  int local_3b0;
  undefined4 local_3ac;
  undefined4 local_3a4;
  uint local_3a0;
  undefined4 ***local_398 [4];
  undefined4 local_388;
  uint local_384;
  int local_374;
  uint local_370;
  uint local_36c;
  undefined4 local_368;
  uint local_360 [4];
  undefined4 local_350;
  uint local_34c;
  uint local_344 [4];
  undefined4 local_334;
  uint local_330;
  uint local_328;
  uint local_324;
  undefined4 local_320;
  uint local_318 [4];
  undefined4 local_308;
  uint local_304;
  uint local_2fc [4];
  undefined4 local_2ec;
  uint local_2e8;
  uint local_2e0 [4];
  undefined4 local_2d0;
  uint local_2cc;
  uint local_2c4 [4];
  undefined4 local_2b4;
  uint local_2b0;
  undefined4 ***local_2a4 [4];
  undefined4 local_294;
  uint local_290;
  undefined4 ***local_288 [5];
  uint local_274;
  uint local_26c;
  undefined4 local_25c;
  uint local_258;
  uint local_250;
  undefined4 local_240;
  uint local_23c;
  uint local_234;
  undefined4 local_224;
  uint local_220;
  undefined1 local_218;
  undefined4 local_208;
  undefined4 local_204;
  undefined1 local_1fc;
  undefined4 local_1ec;
  undefined4 local_1e8;
  undefined **local_168 [19];
  int local_11c [66];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  puStack_10 = &LAB_00b9e5fd;
  local_14 = ExceptionList;
  local_3f0 = 0;
  local_374 = 1;
  local_204 = 0xf;
  local_208 = 0;
  local_218 = 0;
  local_1e8 = 0xf;
  local_1ec = 0;
  local_1fc = 0;
  local_c._0_1_ = 1;
  local_c._1_3_ = 0;
  ExceptionList = &local_14;
  FUN_004367c0();
  local_c._0_1_ = 2;
  FUN_00436780();
  iVar9 = *(int *)(DAT_012586e0 + 0x74);
  local_370 = 0;
  local_36c = 0;
  local_368 = 0;
  local_328 = 0;
  local_324 = 0;
  local_320 = 0;
  local_3c4 = 0;
  local_3c0 = 0;
  local_3bc = 0;
  local_c._0_1_ = 6;
  if (iVar9 != 0) {
    ppppuVar5 = (undefined4 ****)local_288[0];
    if (local_274 < 0x10) {
      ppppuVar5 = local_288;
    }
    FUN_00992240(ppppuVar5,&local_3c4,&DAT_00dfa554);
  }
  if (iVar9 != 1) {
    local_3b4 = 0;
    local_3b0 = 0;
    local_3ac = 0;
    local_c = CONCAT31(local_c._1_3_,7);
    ppppuVar5 = (undefined4 ****)local_2a4[0];
    if (local_290 < 0x10) {
      ppppuVar5 = local_2a4;
    }
    FUN_00992240(ppppuVar5,&local_3b4,&DAT_00dfa554);
    iVar9 = (int)(local_3b0 - local_3b4) / 0x1c;
    uVar10 = local_3b4;
    if (0 < iVar9) {
      do {
        local_3fc = iVar9;
        uVar15 = local_3c0;
        uVar6 = FUN_0045c080(local_3c0,uVar10);
        if (uVar6 == uVar15) {
          FUN_00a840b0();
        }
        uVar10 = uVar10 + 0x1c;
        iVar9 = local_3fc + -1;
      } while (local_3fc + -1 != 0);
      local_3fc = 0;
    }
    uVar10 = local_3b4;
    local_c._0_1_ = 6;
    if (local_3b4 != 0) {
      FUN_00413860();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uVar10);
    }
  }
  uVar10 = local_328;
  FUN_00419660((int)(local_3c0 - local_3c4) / 0x1c + (int)(local_324 - local_328) / 0x1c);
  local_3ec = (int *)uVar10;
  while ((piVar7 = local_3ec, local_328 <= local_3ec && (local_3ec < local_324))) {
    local_3ec = (int *)((int)local_3ec + 0x1c);
    local_3a0 = 0xf;
    local_3a4 = 0;
    local_3b4 = local_3b4 & 0xffffff00;
    FUN_00408ed0(piVar7,0,0xffffffff);
    local_c._0_1_ = 8;
    local_384 = 0xf;
    local_388 = 0;
    local_398[0] = (undefined4 ***)((uint)local_398[0] & 0xffffff00);
    FUN_00409350(&DAT_00dedc68,1);
    local_c._0_1_ = 9;
    FUN_00988f20(local_398);
    local_c._0_1_ = 10;
    FUN_00988f20(&local_3b4);
    local_c._0_1_ = 0xb;
    FUN_00a840b0();
    if (0xf < local_2cc) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2e0[0]);
    }
    local_2cc = 0xf;
    local_2d0 = 0;
    local_2e0[0] = local_2e0[0] & 0xffffff00;
    if (0xf < local_2b0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c4[0]);
    }
    local_2b0 = 0xf;
    local_2b4 = 0;
    local_2c4[0] = local_2c4[0] & 0xffffff00;
    if (0xf < local_384) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_398[0]);
    }
    local_c._0_1_ = 6;
    uVar4 = (undefined1)local_c;
    local_c._0_1_ = 6;
    local_384 = 0xf;
    local_388 = 0;
    local_398[0] = (undefined4 ***)((uint)local_398[0] & 0xffffff00);
    if (0xf < local_3a0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_3b4);
    }
    local_3a0 = 0xf;
    local_3a4 = 0;
    local_3b4 = local_3b4 & 0xffffff00;
    local_c._0_1_ = uVar4;
  }
  local_3ec = (int *)local_3c4;
  while ((piVar7 = local_3ec, local_3c4 <= local_3ec && (local_3ec < local_3c0))) {
    local_3ec = (int *)((int)local_3ec + 0x1c);
    local_34c = 0xf;
    local_350 = 0;
    local_360[0] = local_360[0] & 0xffffff00;
    FUN_00408ed0(piVar7,0,0xffffffff);
    local_c._0_1_ = 0xc;
    local_330 = 0xf;
    local_334 = 0;
    local_344[0] = local_344[0] & 0xffffff00;
    FUN_00409350(&DAT_00dedc68,1);
    local_c._0_1_ = 0xd;
    FUN_00988f20(local_344);
    local_c._0_1_ = 0xe;
    FUN_00988f20(local_360);
    local_c._0_1_ = 0xf;
    FUN_00a840b0();
    if (0xf < local_3cc) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_3e0[0]);
    }
    local_3cc = 0xf;
    local_3d0 = 0;
    local_3e0[0] = local_3e0[0] & 0xffffff00;
    if (0xf < local_304) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_318[0]);
    }
    local_304 = 0xf;
    local_308 = 0;
    local_318[0] = local_318[0] & 0xffffff00;
    if (0xf < local_330) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_344[0]);
    }
    local_c._0_1_ = 6;
    uVar4 = (undefined1)local_c;
    local_c._0_1_ = 6;
    local_330 = 0xf;
    local_334 = 0;
    local_344[0] = local_344[0] & 0xffffff00;
    if (0xf < local_34c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_360[0]);
    }
    local_34c = 0xf;
    local_350 = 0;
    local_360[0] = local_360[0] & 0xffffff00;
    local_c._0_1_ = uVar4;
  }
  if (DAT_012587fc == (int *)0x0) {
    piVar7 = (int *)FUN_00aae9af(0x438);
    local_c._0_1_ = 0x10;
    if (piVar7 == (int *)0x0) {
      piVar7 = (int *)0x0;
    }
    else {
      local_2e8 = 0xf;
      local_2ec = 0;
      local_2fc[0] = local_2fc[0] & 0xffffff00;
      local_3ec = piVar7;
      FUN_00409350("noinvention",0xb);
      local_c._0_1_ = 0x11;
      FUN_00562230(piVar7,0);
      if (0xf < local_2e8) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_2fc[0]);
      }
      *piVar7 = (int)CNullInvention::vftable;
    }
    local_c._0_1_ = 6;
    DAT_012587fc = piVar7;
  }
  piVar7 = DAT_012587fc;
  local_3ec = (int *)(param_1 + 0x74);
  FUN_0057b150(DAT_012587fc);
  ppiVar2 = *(int ***)(param_1 + 0x68);
  puVar16 = (uint *)(param_1 + 100);
  local_400 = piVar7;
  local_3f8 = puVar16;
  if (&local_400 < ppiVar2) {
    ppiVar3 = (int **)*puVar16;
    if (ppiVar3 <= &local_400) {
      if (ppiVar2 == *(int ***)(param_1 + 0x6c)) {
        FUN_00a513f0();
      }
      if (*(undefined4 **)(param_1 + 0x68) != (undefined4 *)0x0) {
        **(undefined4 **)(param_1 + 0x68) =
             *(undefined4 *)(*puVar16 + ((int)&local_400 - (int)ppiVar3 >> 2) * 4);
      }
      goto LAB_00579522;
    }
  }
  if (ppiVar2 == *(int ***)(param_1 + 0x6c)) {
    FUN_00a513f0();
  }
  if (*(undefined4 **)(param_1 + 0x68) != (undefined4 *)0x0) {
    **(undefined4 **)(param_1 + 0x68) = piVar7;
  }
LAB_00579522:
  *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 4;
  local_3b4 = local_370;
  uVar4 = (undefined1)local_c;
  do {
    local_c._0_1_ = uVar4;
    uVar10 = local_3b4;
    puVar16 = local_3f8;
    if ((local_3b4 < local_370) || (local_36c <= local_3b4)) {
      iVar9 = 0;
      if (0 < (int)(local_3f8[1] - *local_3f8 & 0xfffffffc)) {
        do {
          FUN_00562bb0(*(undefined4 *)(*puVar16 + iVar9 * 4));
          iVar9 = iVar9 + 1;
        } while (iVar9 < (int)(puVar16[1] - *puVar16) >> 2);
      }
      uVar15 = local_328;
      uVar10 = local_3c4;
      if (local_3c4 != 0) {
        FUN_00413860();
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(uVar10);
      }
      if (local_328 != 0) {
        FUN_00413860();
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(uVar15);
      }
      if (local_370 == 0) {
        if (0xf < local_290) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_2a4[0]);
        }
        local_290 = 0xf;
        local_294 = 0;
        local_2a4[0] = (undefined4 ***)((uint)local_2a4[0] & 0xffffff00);
        if (local_274 < 0x10) {
          ExceptionList = local_14;
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_288[0]);
      }
      FUN_00413860();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_370);
    }
    local_3b4 = local_3b4 + 0x1c;
    local_2e8 = 0xf;
    local_2ec = 0;
    local_2fc[0] = local_2fc[0] & 0xffffff00;
    FUN_00408ed0(uVar10,0,0xffffffff);
    local_c._0_1_ = 0x12;
    local_3fc = 0;
    piVar7 = (int *)FUN_00aae9af(0x360);
    local_c._0_1_ = 0x13;
    local_3f4 = piVar7;
    if (piVar7 == (int *)0x0) {
      local_400 = (int *)0x0;
    }
    else {
      local_34c = 0xf;
      local_350 = 0;
      local_360[0] = local_360[0] & 0xffffff00;
      FUN_00409350("UNNAMED_SESSION",0xf);
      local_c = CONCAT31(local_c._1_3_,0x14);
      local_3f0 = local_3f0 | 1;
      piVar8 = (int *)FUN_00aae9af(0x114);
      local_c = 0x15;
      local_3e4 = piVar8;
      if (piVar8 == (int *)0x0) {
        piVar8 = (int *)0x0;
      }
      else {
        FUN_0098ffc0(local_2fc);
        *piVar8 = (int)&PTR_FUN_00e37c3c;
      }
      *piVar7 = (int)&PTR_FUN_00e38524;
      piVar7[1] = 0;
      piVar7[2] = 0;
      piVar7[3] = 0;
      *(undefined1 *)(piVar7 + 4) = 0;
      local_c = 0x16;
      *(undefined1 *)(piVar7 + 5) = 0;
      piVar7[7] = (int)piVar8;
      piVar7[0xd0] = 0xf;
      piVar7[0xcf] = 0;
      *(undefined1 *)(piVar7 + 0xcb) = 0;
      FUN_00408ed0(local_360,0,0xffffffff);
      piVar7[0xd2] = 0;
      piVar7[0xd3] = 0;
      piVar7[0xd4] = 0;
      *(undefined1 *)(piVar7 + 0xd6) = 1;
      piVar7[0xd7] = 0;
      local_400 = piVar7;
    }
    local_c = 0x12;
    if ((local_3f0 & 1) != 0) {
      local_3f0 = local_3f0 & 0xfffffffe;
      if (0xf < local_34c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_360[0]);
      }
      local_34c = 0xf;
      local_350 = 0;
      local_360[0] = local_360[0] & 0xffffff00;
    }
    while( true ) {
      piVar7 = (int *)local_400[7];
      if ((char)piVar7[0x44] == '\0') {
        iVar9 = (**(code **)(*piVar7 + 4))();
        piVar7[2] = iVar9;
        if (iVar9 == 0) {
          piVar7[3] = 0x13;
        }
        *(undefined1 *)(piVar7 + 0x44) = 1;
      }
      piVar8 = local_400;
      piVar7 = piVar7 + 3;
      piVar17 = local_11c;
      for (iVar9 = 0x41; iVar9 != 0; iVar9 = iVar9 + -1) {
        *piVar17 = *piVar7;
        piVar7 = piVar7 + 1;
        piVar17 = piVar17 + 1;
      }
      if (local_11c[0] == 0x13) break;
      FUN_009a1440(local_400);
      piVar17 = piVar8 + 9;
      local_3cc = 0xf;
      local_3d0 = 0;
      local_3e0[0] = local_3e0[0] & 0xffffff00;
      piVar7 = piVar17;
      do {
        iVar9 = *piVar7;
        piVar7 = (int *)((int)piVar7 + 1);
      } while ((char)iVar9 != '\0');
      FUN_00409350(piVar17,(int)piVar7 - ((int)piVar8 + 0x25));
      local_c._0_1_ = 0x18;
      local_3f4 = (int *)FUN_00aae9af(0x438);
      iVar9 = local_374;
      local_c._0_1_ = 0x19;
      if (local_3f4 == (int *)0x0) {
        local_3f4 = (int *)0x0;
      }
      else {
        local_3f4 = (int *)FUN_00562230(local_3f4,local_374);
        local_374 = iVar9 + 1;
      }
      local_c = CONCAT31(local_c._1_3_,0x18);
      local_3e4 = local_3f4;
      FUN_0057b150(local_3f4);
      puVar16 = local_3f8;
      ppiVar2 = (int **)local_3f8[1];
      if ((&local_3e4 < ppiVar2) && (ppiVar3 = (int **)*local_3f8, ppiVar3 <= &local_3e4)) {
        if (ppiVar2 == (int **)local_3f8[2]) {
          uVar10 = (int)ppiVar2 - (int)ppiVar3 >> 2;
          if (0x3ffffffe < uVar10) {
LAB_00579c9a:
                    /* WARNING: Subroutine does not return */
            FUN_00aad3ad("vector<T> too long");
          }
          uVar10 = uVar10 + 1;
          uVar15 = (int)local_3f8[2] - (int)ppiVar3 >> 2;
          if (uVar15 < uVar10) {
            if (0x3fffffff - (uVar15 >> 1) < uVar15) {
              uVar15 = 0;
            }
            else {
              uVar15 = uVar15 + (uVar15 >> 1);
            }
            if (uVar15 < uVar10) {
              uVar15 = uVar10;
            }
            FUN_004bf300(uVar15);
          }
        }
        puVar11 = (undefined4 *)puVar16[1];
        if (puVar11 != (undefined4 *)0x0) {
          piVar7 = *(int **)(*puVar16 + ((int)&local_3e4 - (int)ppiVar3 >> 2) * 4);
LAB_00579888:
          *puVar11 = piVar7;
        }
      }
      else {
        if (ppiVar2 == (int **)local_3f8[2]) {
          uVar10 = (int)((int)ppiVar2 - *local_3f8) >> 2;
          if (0x3ffffffe < uVar10) goto LAB_00579c9a;
          uVar10 = uVar10 + 1;
          uVar15 = (int)((int)local_3f8[2] - *local_3f8) >> 2;
          if (uVar15 < uVar10) {
            if (0x3fffffff - (uVar15 >> 1) < uVar15) {
              uVar15 = 0;
            }
            else {
              uVar15 = uVar15 + (uVar15 >> 1);
            }
            if (uVar15 < uVar10) {
              uVar15 = uVar10;
            }
            FUN_004bf300(uVar15);
          }
        }
        puVar11 = (undefined4 *)puVar16[1];
        piVar7 = local_3f4;
        if (puVar11 != (undefined4 *)0x0) goto LAB_00579888;
      }
      puVar16[1] = puVar16[1] + 4;
      (**(code **)(*local_3f4 + 0xc))(local_400);
      local_3fc = local_3fc + 1;
      local_c = CONCAT31(local_c._1_3_,0x12);
      if (0xf < local_3cc) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_3e0[0]);
      }
    }
    local_3cc = 0xf;
    local_3d0 = 0;
    local_3e0[0] = local_3e0[0] & 0xffffff00;
    FUN_00409350(" inventions. ",0xd);
    local_c._0_1_ = 0x1a;
    local_304 = 0xf;
    local_308 = 0;
    local_318[0] = local_318[0] & 0xffffff00;
    FUN_00409350("\' loaded #",10);
    local_330 = 0xf;
    local_334 = 0;
    local_344[0] = local_344[0] & 0xffffff00;
    local_c._0_1_ = 0x1c;
    pcVar12 = __itoa(local_3fc,(char *)local_2c4,10);
    pcVar14 = pcVar12;
    do {
      cVar1 = *pcVar14;
      pcVar14 = pcVar14 + 1;
    } while (cVar1 != '\0');
    FUN_00409350(pcVar12,(int)pcVar14 - (int)(pcVar12 + 1));
    local_c._0_1_ = 0x1d;
    FUN_00988fa0(local_2fc);
    local_c._0_1_ = 0x1e;
    FUN_00988f20(local_318);
    local_c._0_1_ = 0x1f;
    FUN_00988f20(local_344);
    local_c._0_1_ = 0x20;
    FUN_00988f20(local_3e0);
    if (0xf < local_23c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_250);
    }
    local_23c = 0xf;
    local_240 = 0;
    local_250 = local_250 & 0xffffff00;
    if (0xf < local_258) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_26c);
    }
    local_258 = 0xf;
    local_25c = 0;
    local_26c = local_26c & 0xffffff00;
    if (0xf < local_220) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_234);
    }
    local_220 = 0xf;
    local_224 = 0;
    local_234 = local_234 & 0xffffff00;
    if (0xf < local_330) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_344[0]);
    }
    local_330 = 0xf;
    local_334 = 0;
    local_344[0] = local_344[0] & 0xffffff00;
    if (0xf < local_304) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_318[0]);
    }
    local_304 = 0xf;
    local_308 = 0;
    local_318[0] = local_318[0] & 0xffffff00;
    local_c._0_1_ = 0x27;
    if (0xf < local_3cc) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_3e0[0]);
    }
    local_3cc = 0xf;
    local_3d0 = 0;
    local_3e0[0] = local_3e0[0] & 0xffffff00;
    local_2b0 = 0xf;
    local_2b4 = 0;
    local_2c4[0] = local_2c4[0] & 0xffffff00;
    FUN_00409350("technology.cpp",0xe);
    local_c._0_1_ = 0x28;
    local_384 = 0xf;
    local_388 = 0;
    local_398[0] = (undefined4 ***)((uint)local_398[0] & 0xffffff00);
    FUN_00408ed0(local_2e0,0,0xffffffff);
    local_c._0_1_ = 0x29;
    uVar13 = FUN_004015b0(local_2c4,0x935,0x10000);
    local_c._0_1_ = 0x2c;
    ppppuVar5 = (undefined4 ****)local_398[0];
    if (local_384 < 0x10) {
      ppppuVar5 = local_398;
    }
    local_3fc = FUN_00418e30(uVar13,ppppuVar5);
    local_c._0_1_ = 0x2b;
    if (0xf < local_384) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_398[0]);
    }
    local_384 = 0xf;
    local_388 = 0;
    local_398[0] = (undefined4 ***)((uint)local_398[0] & 0xffffff00);
    FUN_00401280(local_3fc);
    local_c._0_1_ = 0x28;
    FUN_00987ac0(local_168);
    local_168[0] = std::ios_base::vftable;
    FUN_00aad52d(local_168);
    local_c._0_1_ = 0x27;
    if (0xf < local_2b0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c4[0]);
    }
    (**(code **)*local_400)(1);
    if (0xf < local_2cc) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2e0[0]);
    }
    local_c._0_1_ = 6;
    uVar4 = (undefined1)local_c;
    local_c._0_1_ = 6;
    local_2cc = 0xf;
    local_2d0 = 0;
    local_2e0[0] = local_2e0[0] & 0xffffff00;
    if (0xf < local_2e8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2fc[0]);
    }
  } while( true );
}

