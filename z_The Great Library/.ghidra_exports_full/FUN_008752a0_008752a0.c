// FUN_008752a0 @ 008752a0 body=[[008752a0, 008754ef] [008754f3, 0087560f] [00875613, 0087563d] [00875641, 0087566d] [00875671, 0087568c] [00875695, 0087576d] [00875771, 00875799] [0087579d, 008757c9] [008757cd, 008757e8] [008757f1, 00875988] [0087598c, 00875c7d] [00875c86, 00875dca] [00875dce, 00875f01] [00875f05, 00875f20] [00875f29, 00875f4e] [00875f52, 00875f76] [00875f7a, 00875f91] [00875f95, 00875faf] [00875fb3, 00875fe6] [00875fea, 00876000]]


void FUN_008752a0(int param_1)

{
  char cVar1;
  void *pvVar2;
  int **ppiVar3;
  int **ppiVar4;
  bool bVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  undefined4 *puVar9;
  int iVar10;
  char *pcVar11;
  int *piVar12;
  undefined4 uVar13;
  uint uVar14;
  uint *puVar15;
  int *piVar16;
  int local_518;
  undefined4 *local_510;
  int *local_50c;
  int *local_504;
  uint local_500 [3];
  undefined4 uStack_4f4;
  undefined4 local_4f0;
  uint local_4ec;
  uint local_4e4;
  undefined4 local_4d4;
  uint local_4d0;
  uint local_4c8;
  uint local_4c4;
  undefined4 local_4c0;
  uint local_4b8;
  int local_4b4;
  undefined4 local_4b0;
  undefined4 local_4a8;
  uint local_4a4;
  uint local_49c;
  undefined4 local_48c;
  uint local_488;
  uint local_480;
  uint local_47c;
  undefined4 local_478;
  uint local_470;
  uint local_46c;
  undefined4 local_468;
  uint local_460;
  undefined4 uStack_450;
  uint local_44c;
  uint local_430;
  undefined1 local_428;
  undefined4 local_418;
  undefined4 local_414;
  undefined1 local_40c;
  undefined4 local_3fc;
  undefined4 local_3f8;
  undefined **ppuStack_378;
  int local_330 [67];
  int local_224 [65];
  int local_120 [67];
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b5e74c;
  pvStack_14 = ExceptionList;
  bVar6 = false;
  ExceptionList = &pvStack_14;
  FUN_0057afc0();
  FUN_0057afc0();
  pvVar2 = *(void **)(param_1 + 0x28);
  if (pvVar2 != *(void **)(param_1 + 0x2c)) {
    FID_conflict__memcpy(pvVar2,*(void **)(param_1 + 0x2c),0);
    *(void **)(param_1 + 0x2c) = pvVar2;
  }
  pvVar2 = *(void **)(param_1 + 0xc);
  if (pvVar2 != *(void **)(param_1 + 0x10)) {
    FID_conflict__memcpy(pvVar2,*(void **)(param_1 + 0x10),0);
    *(void **)(param_1 + 0x10) = pvVar2;
  }
  local_414 = 0xf;
  local_418 = 0;
  local_428 = 0;
  local_3f8 = 0xf;
  local_3fc = 0;
  local_40c = 0;
  local_c._0_1_ = 1;
  local_c._1_3_ = 0;
  FUN_004367c0();
  local_c._0_1_ = 2;
  FUN_00436780();
  iVar10 = *(int *)(DAT_012586e0 + 100);
  local_470 = 0;
  local_46c = 0;
  local_468 = 0;
  local_480 = 0;
  local_47c = 0;
  local_478 = 0;
  local_4c8 = 0;
  local_4c4 = 0;
  local_4c0 = 0;
  local_c._0_1_ = 6;
  if (iVar10 != 0) {
    FUN_00992240();
  }
  uVar14 = local_4c4;
  if (iVar10 != 1) {
    local_4b8 = 0;
    local_4b4 = 0;
    local_4b0 = 0;
    local_c = CONCAT31(local_c._1_3_,7);
    FUN_00992240();
    local_518 = (int)(local_4b4 - local_4b8) / 0x1c;
    if (0 < local_518) {
      do {
        uVar8 = FUN_0045c080();
        if (uVar8 == uVar14) {
          FUN_00a840b0();
          uVar14 = local_4c4;
        }
        local_518 = local_518 + -1;
      } while (local_518 != 0);
    }
    local_c._0_1_ = 6;
    if (local_4b8 != 0) {
      FUN_00413860();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  uVar14 = local_480;
  FUN_00419660();
  uVar7 = (undefined1)local_c;
  while ((local_c._0_1_ = uVar7, uVar8 = local_4c8, uVar7 = (undefined1)local_c, local_480 <= uVar14
         && (uVar14 < local_47c))) {
    uVar14 = uVar14 + 0x1c;
    local_4d0 = 0xf;
    local_4d4 = 0;
    local_4e4 = local_4e4 & 0xffffff00;
    FUN_00408ed0();
    local_c._0_1_ = 8;
    local_488 = 0xf;
    local_48c = 0;
    local_49c = local_49c & 0xffffff00;
    FUN_00409350();
    local_c._0_1_ = 9;
    FUN_00988f20();
    local_c._0_1_ = 10;
    FUN_00988f20();
    local_c._0_1_ = 0xb;
    FUN_00a840b0();
    if (0xf < local_4ec) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_4ec = 0xf;
    local_4f0 = 0;
    local_500[0] = local_500[0] & 0xffffff00;
    if (0xf < local_4a4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_4a4 = 0xf;
    local_4a8 = 0;
    local_4b8 = local_4b8 & 0xffffff00;
    if (0xf < local_488) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_c._0_1_ = 6;
    uVar7 = (undefined1)local_c;
    local_c._0_1_ = 6;
    if (0xf < local_4d0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  while ((local_c._0_1_ = uVar7, local_4c8 <= uVar8 && (uVar8 < local_4c4))) {
    local_4d0 = 0xf;
    local_4d4 = 0;
    local_4e4 = local_4e4 & 0xffffff00;
    FUN_00408ed0();
    local_c._0_1_ = 0xc;
    local_488 = 0xf;
    local_48c = 0;
    local_49c = local_49c & 0xffffff00;
    FUN_00409350();
    local_c._0_1_ = 0xd;
    FUN_00988f20();
    local_c._0_1_ = 0xe;
    FUN_00988f20();
    local_c._0_1_ = 0xf;
    FUN_00a840b0();
    if (0xf < local_4ec) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_4ec = 0xf;
    local_4f0 = 0;
    local_500[0] = local_500[0] & 0xffffff00;
    if (0xf < local_4a4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_4a4 = 0xf;
    local_4a8 = 0;
    local_4b8 = local_4b8 & 0xffffff00;
    if (0xf < local_488) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_c._0_1_ = 6;
    uVar7 = (undefined1)local_c;
    local_c._0_1_ = 6;
    uVar8 = uVar8 + 0x1c;
    if (0xf < local_4d0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  local_4b8 = local_470;
  uVar7 = (undefined1)local_c;
LAB_00875800:
  local_c._0_1_ = uVar7;
  if ((local_4b8 < local_470) || (local_46c <= local_4b8)) {
    if (local_4c8 != 0) {
      FUN_00413860();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (local_480 != 0) {
      FUN_00413860();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (local_470 != 0) {
      FUN_00413860();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_44c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_44c = 0xf;
    uStack_450 = 0;
    local_460 = local_460 & 0xffffff00;
    if (0xf < local_430) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    ExceptionList = pvStack_14;
    return;
  }
  local_4b8 = local_4b8 + 0x1c;
  local_4d0 = 0xf;
  local_4d4 = 0;
  local_4e4 = local_4e4 & 0xffffff00;
  FUN_00408ed0();
  local_c._0_1_ = 0x10;
  local_510 = (undefined4 *)FUN_00aae9af();
  local_c._0_1_ = 0x11;
  if (local_510 == (undefined4 *)0x0) {
    local_510 = (undefined4 *)0x0;
  }
  else {
    local_488 = 0xf;
    local_48c = 0;
    local_49c = local_49c & 0xffffff00;
    FUN_00409350();
    local_c = CONCAT31(local_c._1_3_,0x12);
    bVar6 = true;
    puVar9 = (undefined4 *)FUN_00aae9af();
    local_c = 0x13;
    if (puVar9 == (undefined4 *)0x0) {
      puVar9 = (undefined4 *)0x0;
    }
    else {
      FUN_0098ffc0();
      *puVar9 = &PTR_FUN_00e37c3c;
    }
    *local_510 = &PTR_FUN_00e38524;
    local_510[1] = 0;
    local_510[2] = 0;
    local_510[3] = 0;
    *(undefined1 *)(local_510 + 4) = 0;
    local_c = 0x14;
    *(undefined1 *)(local_510 + 5) = 0;
    local_510[7] = puVar9;
    local_510[0xd0] = 0xf;
    local_510[0xcf] = 0;
    *(undefined1 *)(local_510 + 0xcb) = 0;
    FUN_00408ed0();
    local_510[0xd2] = 0;
    local_510[0xd3] = 0;
    local_510[0xd4] = 0;
    *(undefined1 *)(local_510 + 0xd6) = 1;
    local_510[0xd7] = 0;
  }
  local_c = 0x10;
  if (bVar6) {
    bVar6 = false;
    if (0xf < local_488) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_488 = 0xf;
    local_48c = 0;
    local_49c = local_49c & 0xffffff00;
  }
  do {
    piVar12 = (int *)local_510[7];
    if ((char)piVar12[0x44] == '\0') {
      iVar10 = (**(code **)(*piVar12 + 4))();
      piVar12[2] = iVar10;
      if (iVar10 == 0) {
        piVar12[3] = 0x13;
      }
      *(undefined1 *)(piVar12 + 0x44) = 1;
    }
    piVar12 = piVar12 + 3;
    piVar16 = local_224;
    for (iVar10 = 0x41; iVar10 != 0; iVar10 = iVar10 + -1) {
      *piVar16 = *piVar12;
      piVar12 = piVar12 + 1;
      piVar16 = piVar16 + 1;
    }
    if (local_224[0] == 0x13) goto LAB_00875dce;
    piVar12 = (int *)local_510[7];
    if ((char)piVar12[0x44] == '\0') {
      iVar10 = (**(code **)(*piVar12 + 4))();
      piVar12[2] = iVar10;
      if (iVar10 == 0) {
        piVar12[3] = 0x13;
      }
      *(undefined1 *)(piVar12 + 0x44) = 1;
    }
    piVar12 = piVar12 + 3;
    piVar16 = local_330;
    for (iVar10 = 0x41; iVar10 != 0; iVar10 = iVar10 + -1) {
      *piVar16 = *piVar12;
      piVar12 = piVar12 + 1;
      piVar16 = piVar16 + 1;
    }
    if ((local_330[0] == 4) || (local_330[0] == 0x13)) goto LAB_00875dce;
    FUN_009a1440();
    if (local_510[8] == 0x7b6) {
      puVar15 = (uint *)(param_1 + 0x28);
    }
    else {
      if (local_510[8] != 0x7b7) break;
      puVar15 = (uint *)(param_1 + 0xc);
    }
    while( true ) {
      piVar12 = (int *)local_510[7];
      if ((char)piVar12[0x44] == '\0') {
        iVar10 = (**(code **)(*piVar12 + 4))();
        piVar12[2] = iVar10;
        if (iVar10 == 0) {
          piVar12[3] = 0x13;
        }
        *(undefined1 *)(piVar12 + 0x44) = 1;
      }
      piVar12 = piVar12 + 3;
      piVar16 = local_120;
      for (iVar10 = 0x41; iVar10 != 0; iVar10 = iVar10 + -1) {
        *piVar16 = *piVar12;
        piVar12 = piVar12 + 1;
        piVar16 = piVar16 + 1;
      }
      if ((local_120[0] == 4) || (local_120[0] == 0x13)) break;
      FUN_009a1440();
      pcVar11 = (char *)(local_510 + 9);
      local_4ec = 0xf;
      local_4f0 = 0;
      local_500[0] = local_500[0] & 0xffffff00;
      do {
        cVar1 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar1 != '\0');
      FUN_00409350();
      local_c._0_1_ = 0x18;
      piVar12 = (int *)FUN_00aae9af();
      local_c._0_1_ = 0x19;
      if (piVar12 == (int *)0x0) {
        local_50c = (int *)0x0;
      }
      else {
        local_504 = piVar12;
        FUN_00408ed0(local_500,0,0xffffffff);
        local_50c = (int *)FUN_008743c0(piVar12);
      }
      local_c = CONCAT31(local_c._1_3_,0x18);
      local_504 = local_50c;
      FUN_008b2480();
      ppiVar3 = (int **)puVar15[1];
      if ((&local_504 < ppiVar3) && (ppiVar4 = (int **)*puVar15, ppiVar4 <= &local_504)) {
        if (ppiVar3 == (int **)puVar15[2]) {
          uVar14 = (int)ppiVar3 - (int)ppiVar4 >> 2;
          if (0x3ffffffe < uVar14) {
LAB_00875f29:
                    /* WARNING: Subroutine does not return */
            FUN_00aad3ad();
          }
          if ((uint)((int)puVar15[2] - (int)ppiVar4 >> 2) < uVar14 + 1) {
            FUN_004bf300();
          }
        }
        if ((undefined4 *)puVar15[1] != (undefined4 *)0x0) {
          *(undefined4 *)puVar15[1] =
               *(undefined4 *)(*puVar15 + ((int)&local_504 - (int)ppiVar4 >> 2) * 4);
        }
      }
      else {
        if (ppiVar3 == (int **)puVar15[2]) {
          uVar14 = (int)((int)ppiVar3 - *puVar15) >> 2;
          if (0x3ffffffe < uVar14) goto LAB_00875f29;
          if ((uint)((int)((int)puVar15[2] - *puVar15) >> 2) < uVar14 + 1) {
            FUN_004bf300();
          }
        }
        if ((undefined4 *)puVar15[1] != (undefined4 *)0x0) {
          *(undefined4 *)puVar15[1] = local_50c;
        }
      }
      puVar15[1] = puVar15[1] + 4;
      (**(code **)(*local_50c + 0xc))();
      local_c = CONCAT31(local_c._1_3_,0x10);
      if (0xf < local_4ec) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
    (**(code **)(*(int *)local_510[7] + 4))();
  } while( true );
  local_4ec = 0xf;
  local_4f0 = 0;
  local_500[0] = local_500[0] & 0xffffff00;
  FUN_00409350();
  local_c._0_1_ = 0x16;
  uVar13 = FUN_004015b0();
  local_c = CONCAT31(local_c._1_3_,0x17);
  FUN_00987d50();
  FUN_00418e30(uVar13);
  FUN_00418e30();
  piVar12 = (int *)FUN_00418e30();
  FUN_00408be0();
  bVar5 = false;
  if (((*(byte *)(*(int *)(*piVar12 + 4) + 0xc + (int)piVar12) & 6) == 0) &&
     (iVar10 = (**(code **)(**(int **)(*(int *)(*piVar12 + 4) + 0x38 + (int)piVar12) + 0x34))(),
     iVar10 == -1)) {
    bVar5 = true;
  }
  if (bVar5) {
    FUN_00401120();
  }
  local_c._0_1_ = 0x16;
  FUN_00987ac0();
  ppuStack_378 = std::ios_base::vftable;
  FUN_00aad52d();
  local_c = CONCAT31(local_c._1_3_,0x10);
  if (0xf < local_4ec) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
LAB_00875dce:
  (**(code **)*local_510)();
  local_4f0 = 0xf;
  uStack_4f4 = 0;
  local_504 = (int *)((uint)local_504 & 0xffffff00);
  FUN_00409350();
  puStack_10._0_1_ = 0x1a;
  FUN_004015b0();
  puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,0x1b);
  FUN_00987d50();
  uVar13 = FUN_00418e30();
  FUN_00418e30(uVar13,&DAT_00e009e0);
  piVar12 = (int *)FUN_00455470();
  FUN_00408be0(piVar12);
  bVar5 = false;
  if (((*(byte *)(*(int *)(*piVar12 + 4) + 0xc + (int)piVar12) & 6) == 0) &&
     (iVar10 = (**(code **)(**(int **)(*(int *)(*piVar12 + 4) + 0x38 + (int)piVar12) + 0x34))(),
     iVar10 == -1)) {
    bVar5 = true;
  }
  if (bVar5) {
    FUN_00401120();
  }
  local_c._0_1_ = 0x1a;
  FUN_00987ac0();
  ppuStack_378 = std::ios_base::vftable;
  FUN_00aad52d();
  if (0xf < local_4ec) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_c._0_1_ = 6;
  uVar7 = (undefined1)local_c;
  local_c._0_1_ = 6;
  if (0xf < local_4d0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  goto LAB_00875800;
}

