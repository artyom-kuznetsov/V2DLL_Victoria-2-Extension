// FUN_00505010 @ 00505010 body=[[00505010, 0050506c] [00505070, 005050cc] [005050d0, 00505152] [00505156, 00505225] [00505230, 005052c3] [005052d0, 00505465] [0050546f, 00505649] [00505650, 005056da] [005056de, 0050575c] [00505760, 005058b9] [005058bd, 005058ed] [005058f1, 00505967] [0050596b, 005059ec] [005059f0, 00505e93]]


void FUN_00505010(void)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int ******ppppppiVar5;
  undefined4 uVar6;
  char *pcVar7;
  int ******ppppppiVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  int *******pppppppiVar12;
  int iVar13;
  int *****pppppiVar14;
  int unaff_ESI;
  int iVar15;
  int *******pppppppiVar16;
  bool bVar17;
  int local_1c4;
  int local_1bc;
  int ******local_1b8 [2];
  int ****ppppiStack_1b0;
  uint uStack_1a8;
  uint uStack_1a4;
  undefined4 uStack_198;
  uint uStack_194;
  uint uStack_184;
  undefined4 uStack_174;
  uint uStack_170;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_118;
  undefined4 local_114;
  undefined **ppuStack_60;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00ba1e25;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  FUN_00501d60();
  FUN_009b7950();
  FUN_008a8650();
  local_118 = *(undefined4 *)(unaff_ESI + 0x1c);
  local_114 = *(undefined4 *)(unaff_ESI + 0x20);
  local_1c4 = 1;
  while( true ) {
    if (DAT_0125eadc == 0) {
      local_1b8[0] = (int ******)FUN_00aae9af();
      local_c = 0;
      if (local_1b8[0] == (int ******)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = FUN_00576fe0();
      }
      local_c = 1;
      local_1b8[0] = (int ******)0x0;
      if ((iVar3 != DAT_0125eadc) && (DAT_0125eadc != 0)) {
        FUN_00576d10();
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_c = 0xffffffff;
      DAT_0125eadc = iVar3;
    }
    if (*(int *)(DAT_0125eadc + 0x68) - *(int *)(DAT_0125eadc + 100) >> 2 <= local_1c4) break;
    if (DAT_0125eadc == 0) {
      local_1b8[0] = (int ******)FUN_00aae9af();
      local_c = 2;
      if (local_1b8[0] == (int ******)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = FUN_00576fe0();
      }
      local_c = 3;
      local_1b8[0] = (int ******)0x0;
      if ((iVar3 != DAT_0125eadc) && (DAT_0125eadc != 0)) {
        FUN_00576d10();
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_c = 0xffffffff;
      DAT_0125eadc = iVar3;
    }
    iVar3 = *(int *)(*(int *)(DAT_0125eadc + 100) + local_1c4 * 4);
    if (((int)(*(int *)(unaff_ESI + 0x9dc) - *(int *)(unaff_ESI + 0x9d8) & 0xfffffffcU) < 1) ||
       (cVar2 = (**(code **)(*(int *)(iVar3 + 0x54) + 0x18))(), cVar2 == '\0')) {
      iVar10 = *(int *)(unaff_ESI + 0x51c);
      piVar4 = (int *)FUN_00aae9af();
      if (piVar4 == (int *)0x0) {
        piVar4 = (int *)0x0;
      }
      else {
        *piVar4 = iVar3;
        piVar4[1] = iVar10;
        piVar4[2] = 0;
        *(undefined1 *)(piVar4 + 3) = 0;
      }
      iVar3 = *(int *)(unaff_ESI + 0x520);
      *(int **)(unaff_ESI + 0x51c) = piVar4;
      *(int *)(unaff_ESI + 0x520) = iVar3 + 1;
      if (iVar3 == 0) {
        *(int **)(unaff_ESI + 0x518) = piVar4;
LAB_005053bc:
        local_1c4 = local_1c4 + 1;
      }
      else {
        local_1c4 = local_1c4 + 1;
        *(int **)(iVar10 + 8) = piVar4;
      }
    }
    else {
      for (piVar4 = *(int **)(unaff_ESI + 0x4f8); piVar4 != (int *)0x0; piVar4 = (int *)piVar4[2]) {
        if (*piVar4 == iVar3) goto LAB_005053bc;
      }
      iVar10 = *(int *)(unaff_ESI + 0x4fc);
      piVar4 = (int *)FUN_00aae9af();
      if (piVar4 == (int *)0x0) {
        piVar4 = (int *)0x0;
      }
      else {
        *piVar4 = iVar3;
        piVar4[1] = iVar10;
        piVar4[2] = 0;
        *(undefined1 *)(piVar4 + 3) = 0;
      }
      iVar15 = *(int *)(unaff_ESI + 0x500);
      *(int **)(unaff_ESI + 0x4fc) = piVar4;
      *(int *)(unaff_ESI + 0x500) = iVar15 + 1;
      if (iVar15 == 0) {
        *(int **)(unaff_ESI + 0x4f8) = piVar4;
      }
      else {
        *(int **)(iVar10 + 8) = piVar4;
      }
      iVar10 = 0;
      iVar15 = DAT_0125a5b8 - DAT_0125a5b4 >> 2;
      if (0 < iVar15) {
        do {
          piVar4 = (int *)(*(int *)(unaff_ESI + 0xa60) + iVar10 * 8);
          *piVar4 = *piVar4 + *(int *)(iVar10 * 8 + *(int *)(iVar3 + 0x18));
          iVar10 = iVar10 + 1;
        } while (iVar10 < iVar15);
      }
      if (DAT_012586f0 != '\0') {
        iVar10 = *(int *)(unaff_ESI + 0xa54);
        piVar4 = (int *)FUN_00aae9af();
        if (piVar4 == (int *)0x0) {
          piVar4 = (int *)0x0;
        }
        else {
          *piVar4 = iVar3;
          piVar4[1] = iVar10;
          piVar4[2] = 0;
          *(undefined1 *)(piVar4 + 3) = 0;
        }
        iVar15 = *(int *)(unaff_ESI + 0xa58);
        *(int **)(unaff_ESI + 0xa54) = piVar4;
        *(int *)(unaff_ESI + 0xa58) = iVar15 + 1;
        if (iVar15 == 0) {
          *(int **)(unaff_ESI + 0xa50) = piVar4;
        }
        else {
          *(int **)(iVar10 + 8) = piVar4;
        }
      }
      iVar10 = 0;
      local_1b8[0] = (int ******)(DAT_0125a5b8 - DAT_0125a5b4 >> 2);
      if (0 < (int)local_1b8[0]) {
        do {
          piVar4 = (int *)(*(int *)(unaff_ESI + 0xa90) + iVar10 * 8);
          *piVar4 = *piVar4 + *(int *)(iVar10 * 8 + *(int *)(iVar3 + 0x18));
          iVar10 = iVar10 + 1;
        } while (iVar10 < (int)local_1b8[0]);
      }
      if (DAT_012586f0 != '\0') {
        iVar10 = *(int *)(unaff_ESI + 0xa84);
        piVar4 = (int *)FUN_00aae9af();
        if (piVar4 == (int *)0x0) {
          piVar4 = (int *)0x0;
        }
        else {
          *piVar4 = iVar3;
          piVar4[1] = iVar10;
          piVar4[2] = 0;
          *(undefined1 *)(piVar4 + 3) = 0;
        }
        iVar3 = *(int *)(unaff_ESI + 0xa88);
        *(int **)(unaff_ESI + 0xa84) = piVar4;
        *(int *)(unaff_ESI + 0xa88) = iVar3 + 1;
        if (iVar3 == 0) {
          *(int **)(unaff_ESI + 0xa80) = piVar4;
        }
        else {
          *(int **)(iVar10 + 8) = piVar4;
        }
      }
      local_1b8[0] = (int ******)&stack0xfffffe2c;
      FUN_00568dc0();
      local_1c4 = local_1c4 + 1;
    }
  }
  do {
    bVar17 = true;
    piVar4 = *(int **)(unaff_ESI + 0x508);
    if (*(int **)(unaff_ESI + 0x508) == (int *)0x0) break;
    do {
      piVar1 = (int *)piVar4[2];
      iVar3 = *piVar4;
      for (piVar4 = *(int **)(unaff_ESI + 0x4f8); piVar4 != (int *)0x0; piVar4 = (int *)piVar4[2]) {
        if (*piVar4 == iVar3) goto LAB_005054da;
      }
      for (piVar4 = *(int **)(unaff_ESI + 0x508); piVar4 != (int *)0x0; piVar4 = (int *)piVar4[2]) {
        if (*piVar4 == iVar3) {
          if (piVar4 != (int *)0x0) {
            if (*(char *)(unaff_ESI + 0x514) == '\0') {
              iVar3 = piVar4[1];
              iVar10 = piVar4[2];
              if (iVar3 != 0) {
                *(int *)(iVar3 + 8) = iVar10;
              }
              if (iVar10 != 0) {
                *(int *)(iVar10 + 4) = iVar3;
              }
              if (piVar4 == *(int **)(unaff_ESI + 0x508)) {
                *(int *)(unaff_ESI + 0x508) = iVar10;
              }
              if (piVar4 == *(int **)(unaff_ESI + 0x50c)) {
                *(int *)(unaff_ESI + 0x50c) = iVar3;
              }
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
            *(undefined1 *)(piVar4 + 3) = 1;
          }
          break;
        }
      }
      iVar10 = *(int *)(unaff_ESI + 0x4fc);
      piVar4 = (int *)FUN_00aae9af();
      if (piVar4 == (int *)0x0) {
        piVar4 = (int *)0x0;
      }
      else {
        *piVar4 = iVar3;
        piVar4[1] = iVar10;
        piVar4[2] = 0;
        *(undefined1 *)(piVar4 + 3) = 0;
      }
      iVar3 = *(int *)(unaff_ESI + 0x500);
      *(int **)(unaff_ESI + 0x4fc) = piVar4;
      *(int *)(unaff_ESI + 0x500) = iVar3 + 1;
      if (iVar3 == 0) {
        *(int **)(unaff_ESI + 0x4f8) = piVar4;
      }
      else {
        *(int **)(iVar10 + 8) = piVar4;
      }
      local_1b8[0] = (int ******)&stack0xfffffe2c;
      FUN_00568dc0();
      bVar17 = false;
LAB_005054da:
      piVar4 = piVar1;
    } while (piVar1 != (int *)0x0);
  } while (!bVar17);
  pppppiVar14 = *(int ******)(unaff_ESI + 0x9d8);
  while ((*(int ******)(unaff_ESI + 0x9d8) <= pppppiVar14 &&
         (pppppiVar14 < *(int ******)(unaff_ESI + 0x9dc)))) {
    iVar3 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + (int)*pppppiVar14 * 4);
    ppppppiVar5 = *(int *******)(iVar3 + 0x194);
    local_1b8[0] = (int ******)(iVar3 + 0x194);
    pppppiVar14 = pppppiVar14 + 1;
    local_1bc = 0;
    ppppiStack_1b0 = (int ****)pppppiVar14;
    if (0 < (int)(*(int *)(iVar3 + 0x198) - (int)ppppppiVar5 & 0xfffffff0U)) {
      local_1c4 = 0;
      do {
        iVar3 = *(int *)((int)ppppppiVar5 + local_1c4);
        pppppiVar14 = (int *****)ppppiStack_1b0;
        while (ppppiStack_1b0 = (int ****)pppppiVar14, iVar3 != 0) {
          iVar10 = *(int *)(iVar3 + 0x27c);
          for (piVar4 = *(int **)(unaff_ESI + 0xe54); piVar4 != (int *)0x0;
              piVar4 = (int *)piVar4[2]) {
            if (*piVar4 == *(int *)(iVar3 + 0x6c)) goto LAB_00505588;
          }
          if (*(int *)(iVar3 + 0x6c) == *(int *)(unaff_ESI + 0xe64)) {
LAB_00505588:
            FUN_00965240();
            uVar6 = *(undefined4 *)(unaff_ESI + 0x12c0);
            uVar11 = *(undefined4 *)(unaff_ESI + 0x12c4);
          }
          else {
            FUN_00965240();
            uVar6 = *(undefined4 *)(unaff_ESI + 0x12c8);
            uVar11 = *(undefined4 *)(unaff_ESI + 0x12cc);
          }
          *(undefined4 *)(iVar3 + 0x11c) = uVar11;
          *(undefined4 *)(iVar3 + 0x118) = uVar6;
          iVar3 = iVar10;
          pppppiVar14 = (int *****)ppppiStack_1b0;
        }
        ppppppiVar5 = (int ******)*local_1b8[0];
        local_1c4 = local_1c4 + 0x10;
        local_1bc = local_1bc + 1;
      } while (local_1bc < (int)local_1b8[0][1] - (int)ppppppiVar5 >> 4);
    }
  }
  FUN_008a8650();
  uStack_160 = *(undefined4 *)(unaff_ESI + 0x1c);
  uStack_15c = *(undefined4 *)(unaff_ESI + 0x20);
  iVar3 = *(int *)(unaff_ESI + 0x174);
  piVar4 = DAT_012587e4;
  while (DAT_012587e4 = piVar4, iVar3 != 0) {
    iVar3 = *(int *)(iVar3 + 0x20);
    uStack_194 = 0xf;
    uStack_198 = 0;
    uStack_1a8 = uStack_1a8 & 0xffffff00;
    FUN_00408ed0();
    local_c._0_1_ = 10;
    local_c._1_3_ = 0;
    iVar10 = DAT_01319730;
    if (DAT_01319730 == 0) {
      local_1b8[0] = (int ******)FUN_00aae9af();
      local_c._0_1_ = 0xb;
      if (local_1b8[0] == (int ******)0x0) {
        iVar10 = 0;
      }
      else {
        iVar10 = FUN_008750a0();
      }
      local_c = CONCAT31(local_c._1_3_,0xc);
      local_1b8[0] = (int ******)0x0;
      if ((iVar10 != DAT_01319730) && (DAT_01319730 != 0)) {
        FUN_00875160();
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
    DAT_01319730 = iVar10;
    local_c._0_1_ = 10;
    iVar10 = FUN_005c2ad0();
    if (iVar10 == 0) {
      if (DAT_01319730 == 0) {
        local_1b8[0] = (int ******)FUN_00aae9af();
        local_c._0_1_ = 0xd;
        if (local_1b8[0] == (int ******)0x0) {
          iVar10 = 0;
        }
        else {
          iVar10 = FUN_008750a0();
        }
        local_c = CONCAT31(local_c._1_3_,0xe);
        local_1b8[0] = (int ******)0x0;
        if ((iVar10 != DAT_01319730) && (DAT_01319730 != 0)) {
          FUN_00875160();
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_c._0_1_ = 10;
        DAT_01319730 = iVar10;
      }
      iVar10 = FUN_005c2ad0();
      if (iVar10 != 0) goto LAB_005058ff;
      uStack_170 = 0xf;
      uStack_174 = 0;
      uStack_184 = uStack_184 & 0xffffff00;
      FUN_00409350();
      local_c._0_1_ = 0xf;
      uVar6 = FUN_004015b0();
      pcVar7 = (char *)(unaff_ESI + 0x1c);
      local_c = CONCAT31(local_c._1_3_,0x10);
      do {
        cVar2 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar2 != '\0');
      FUN_00987d50(uVar6,unaff_ESI + 0x1c);
      uVar6 = FUN_00418e30(uVar6," has unknown decision \'");
      pppppppiVar12 = (int *******)local_1b8[0];
      if (uStack_1a4 < 0x10) {
        pppppppiVar12 = local_1b8;
      }
      uVar6 = FUN_00418e30(uVar6,pppppppiVar12);
      piVar4 = (int *)FUN_00418e30(uVar6,&DAT_00dfe3cc);
      FUN_00408be0(piVar4);
      bVar17 = false;
      if (((*(byte *)(*(int *)(*piVar4 + 4) + 0xc + (int)piVar4) & 6) == 0) &&
         (iVar10 = (**(code **)(**(int **)(*(int *)(*piVar4 + 4) + 0x38 + (int)piVar4) + 0x34))(),
         iVar10 == -1)) {
        bVar17 = true;
      }
      if (bVar17) {
        FUN_00401120();
      }
      local_c = CONCAT31(local_c._1_3_,0xf);
      FUN_00987ac0();
      ppuStack_60 = std::ios_base::vftable;
      FUN_00aad52d();
      if (0xf < uStack_170) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_c = 0xffffffff;
      uStack_170 = 0xf;
      uStack_174 = 0;
      uStack_184 = uStack_184 & 0xffffff00;
      if (0xf < uStack_194) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
    else {
LAB_005058ff:
      (**(code **)(*(int *)(iVar10 + 0x5c) + 0x2c))();
      if ((*(char *)(DAT_012588e8 + 0xd1c) != '\0') && (*(char *)(iVar10 + 0x9c) != '\0')) {
        FUN_00468770();
        FUN_00457b00();
      }
      local_c = 0xffffffff;
      if (0xf < uStack_194) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
    local_c = 0xffffffff;
    uStack_194 = 0xf;
    uStack_198 = 0;
    uStack_1a8 = uStack_1a8 & 0xffffff00;
    piVar4 = DAT_012587e4;
  }
  pppppppiVar12 = *(int ********)(DAT_012588e8 + 0xb0c);
  iVar3 = 0;
  if (0 < *piVar4) {
    do {
      iVar10 = *(int *)(piVar4[1] + iVar3 * 4);
      ppppiStack_1b0 = *(int *****)(iVar10 + 0x1c);
      iVar10 = *(int *)(*(int *)(unaff_ESI + 0xbe8) + *(int *)(iVar10 + 0x20) * 4);
      if ((int)pppppppiVar12 < *(int *)(iVar10 + 0x68)) {
        *(int ********)(iVar10 + 0x68) = DAT_01259abc;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *piVar4);
  }
  piVar4 = *(int **)(DAT_012588e8 + 0xb3c);
  while (piVar4 != (int *)0x0) {
    piVar1 = (int *)piVar4[2];
    iVar3 = *piVar4;
    ppppppiVar5 = *(int *******)(iVar3 + 0x30);
    local_1b8[0] = (int ******)(iVar3 + 0x2c);
    ppppppiVar8 = (int ******)*local_1b8[0];
    bVar17 = ppppppiVar8 == ppppppiVar5;
    if (!bVar17) {
      do {
        if (ppppppiVar8[1] == *(int ******)(unaff_ESI + 0x20)) break;
        ppppppiVar8 = ppppppiVar8 + 2;
      } while (ppppppiVar8 != ppppppiVar5);
      bVar17 = ppppppiVar8 == ppppppiVar5;
    }
    iVar10 = *(int *)(iVar3 + 0x40);
    iVar15 = *(int *)(iVar3 + 0x3c);
    if (iVar15 != iVar10) {
      do {
        if (*(int *)(iVar15 + 4) == *(int *)(unaff_ESI + 0x20)) break;
        iVar15 = iVar15 + 8;
      } while (iVar15 != iVar10);
    }
    pppppppiVar16 = (int *******)(iVar3 + 0x3c);
    piVar4 = piVar1;
    if ((!bVar17) || (pppppppiVar16 = (int *******)local_1b8[0], iVar15 != iVar10)) {
      iVar3 = 0;
      iVar10 = (int)pppppppiVar16[1] - (int)*pppppppiVar16 >> 3;
      if (0 < iVar10) {
        do {
          ppppiStack_1b0 = (int ****)(*pppppppiVar16)[iVar3 * 2];
          iVar15 = iVar3 * 2;
          iVar3 = iVar3 + 1;
          *(int ********)
           (*(int *)(*(int *)(unaff_ESI + 0xbe8) + (int)(*pppppppiVar16)[iVar15 + 1] * 4) + 0x68) =
               pppppppiVar12;
        } while (iVar3 < iVar10);
      }
    }
  }
  if (*(char *)(unaff_ESI + 0x67c) == '\0') {
    piVar4 = *(int **)(DAT_012588e8 + 0xb4c);
    pppppppiVar16 = DAT_01259abc;
joined_r0x00505c58:
    if (piVar4 != (int *)0x0) {
      iVar3 = *piVar4;
      iVar10 = *(int *)(iVar3 + 0x30);
      iVar15 = *(int *)(iVar3 + 0x2c);
      piVar4 = (int *)piVar4[2];
      if (iVar15 == iVar10) goto LAB_00505c82;
      do {
        if (*(int *)(iVar15 + 4) == *(int *)(unaff_ESI + 0x20)) break;
        iVar15 = iVar15 + 8;
      } while (iVar15 != iVar10);
      if (iVar15 == iVar10) goto LAB_00505c82;
      goto LAB_00505ca0;
    }
    local_1b8[0] = (int ******)(pppppppiVar12 + -0xa71570);
    iVar10 = (int)((double)((int)local_1b8[0] / 0x18) / 365.0);
    local_1c4 = (int)local_1b8[0] / 0x18 - (int)((float)iVar10 * 365.0);
    iVar15 = 0;
    iVar3 = local_1c4 - DAT_00f1027c;
    if (-1 < iVar3) {
      iVar15 = 0;
      do {
        iVar15 = iVar15 + 1;
        iVar3 = iVar3 - (&DAT_00f1027c)[iVar15];
      } while (-1 < iVar3);
    }
    iVar13 = (int)((float)((int)(pppppppiVar16 + -0xa71570) / 0x18) / 365.0);
    iVar3 = 0;
    for (iVar9 = ((int)(pppppppiVar16 + -0xa71570) / 0x18 - (int)((float)iVar13 * 365.0)) -
                 DAT_00f1027c; -1 < iVar9; iVar9 = iVar9 - (&DAT_00f1027c)[iVar3]) {
      iVar3 = iVar3 + 1;
    }
    iVar3 = __alldiv((longlong)((iVar15 + iVar10 * 0xc) * 1000 + (iVar13 * 0xc + iVar3) * -1000) *
                     (longlong)DAT_0125dc0c);
    iVar3 = 3000 - iVar3;
    if (iVar3 < 0) {
      iVar3 = 0;
    }
    if (iVar3 < 0) {
      iVar3 = 0;
    }
    else {
      iVar10 = *(int *)(*(int *)(unaff_ESI + 0xa60) + 0x28);
      if (iVar10 < iVar3) {
        iVar3 = iVar10;
      }
    }
    *(int *)(unaff_ESI + 0x680) = iVar3;
  }
  else {
    piVar4 = *(int **)(DAT_012588e8 + 0xb3c);
    pppppppiVar16 = pppppppiVar12;
joined_r0x00505aa7:
    if (piVar4 != (int *)0x0) {
      iVar3 = *piVar4;
      iVar10 = *(int *)(iVar3 + 0x30);
      iVar15 = *(int *)(iVar3 + 0x2c);
      piVar4 = (int *)piVar4[2];
      if (iVar15 == iVar10) goto LAB_00505ad2;
      do {
        if (*(int *)(iVar15 + 4) == *(int *)(unaff_ESI + 0x20)) break;
        iVar15 = iVar15 + 8;
      } while (iVar15 != iVar10);
      if (iVar15 == iVar10) goto LAB_00505ad2;
      goto LAB_00505af0;
    }
    iVar15 = (int)((double)((int)(pppppppiVar12 + -0xa71570) / 0x18) / 365.0);
    local_1c4 = (int)(pppppppiVar12 + -0xa71570) / 0x18 - (int)((float)iVar15 * 365.0);
    iVar3 = 0;
    for (iVar10 = local_1c4 - DAT_00f1027c; -1 < iVar10; iVar10 = iVar10 - (&DAT_00f1027c)[iVar3]) {
      iVar3 = iVar3 + 1;
    }
    local_1b8[0] = (int ******)(pppppppiVar16 + -0xa71570);
    iVar13 = (int)((float)((int)local_1b8[0] / 0x18) / 365.0);
    iVar10 = 0;
    for (iVar9 = ((int)local_1b8[0] / 0x18 - (int)((float)iVar13 * 365.0)) - DAT_00f1027c;
        -1 < iVar9; iVar9 = iVar9 - (&DAT_00f1027c)[iVar10]) {
      iVar10 = iVar10 + 1;
    }
    iVar3 = __alldiv((longlong)((iVar3 + iVar15 * 0xc) * 1000 + (iVar13 * 0xc + iVar10) * -1000) *
                     (longlong)DAT_0125dc0c);
    if (10000 < iVar3) {
      iVar3 = 10000;
    }
    if (iVar3 < 0) {
      *(undefined4 *)(unaff_ESI + 0x680) = 0;
    }
    else {
      iVar10 = *(int *)(*(int *)(unaff_ESI + 0xa60) + 0x28);
      if (iVar10 < iVar3) {
        iVar3 = iVar10;
      }
      *(int *)(unaff_ESI + 0x680) = iVar3;
    }
  }
  local_1c4 = local_1c4 - DAT_00f1027c;
  if (-1 < local_1c4) {
    piVar4 = &DAT_00f1027c;
    do {
      piVar4 = piVar4 + 1;
      local_1c4 = local_1c4 - *piVar4;
    } while (-1 < local_1c4);
  }
  iVar3 = ((int)local_1b8[0] / 0x18 -
          (int)((float)(int)((double)((int)local_1b8[0] / 0x18) / 365.0) * 365.0)) - DAT_00f1027c;
  if (-1 < iVar3) {
    piVar4 = &DAT_00f1027c;
    do {
      piVar4 = piVar4 + 1;
      iVar3 = iVar3 - *piVar4;
    } while (-1 < iVar3);
  }
  if (*(char *)(unaff_ESI + 0x12d0) == '\0') {
    iVar3 = 3;
  }
  else if (*(char *)(unaff_ESI + 0x31) == '\0') {
    iVar3 = (*(int *)(*(int *)(DAT_012586dc + 0x40) + 0x50) / 1000 < *(int *)(unaff_ESI + 0x1404)) +
            1;
  }
  else {
    iVar3 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00505e8d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&PTR_LAB_005061c4)[iVar3])();
  return;
LAB_00505c82:
  iVar10 = *(int *)(iVar3 + 0x40);
  iVar3 = *(int *)(iVar3 + 0x3c);
  if (iVar3 != iVar10) {
    do {
      if (*(int *)(iVar3 + 4) == *(int *)(unaff_ESI + 0x20)) break;
      iVar3 = iVar3 + 8;
    } while (iVar3 != iVar10);
    if (iVar3 != iVar10) {
LAB_00505ca0:
      FUN_009366b0();
      if ((int)pppppppiVar16 < (int)local_1b8[0]) {
        pppppppiVar16 = (int *******)local_1b8[0];
      }
    }
  }
  goto joined_r0x00505c58;
LAB_00505ad2:
  iVar10 = *(int *)(iVar3 + 0x40);
  iVar3 = *(int *)(iVar3 + 0x3c);
  if (iVar3 != iVar10) {
    do {
      if (*(int *)(iVar3 + 4) == *(int *)(unaff_ESI + 0x20)) break;
      iVar3 = iVar3 + 8;
    } while (iVar3 != iVar10);
    if (iVar3 != iVar10) {
LAB_00505af0:
      FUN_00936640();
      if ((int)local_1b8[0] < (int)pppppppiVar16) {
        pppppppiVar16 = (int *******)local_1b8[0];
      }
    }
  }
  goto joined_r0x00505aa7;
}

