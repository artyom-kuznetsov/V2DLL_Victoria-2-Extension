// FUN_00680520 @ 00680520 body=[[00680520, 006805a0] [006805a4, 00680615] [00680619, 00680876] [0068087a, 00680a51] [00680a55, 00680aa3] [00680aa7, 00680b89] [00680b90, 00680caa] [00680cae, 00680d25] [00680d29, 00680d8c] [00680d90, 00680dde] [00680de0, 00680f10] [00680f14, 00680f80] [00680f84, 00680fe7] [00680feb, 00681130] [00681134, 00681186] [00681190, 00681264] [00681268, 00681301] [00681305, 0068132b] [0068132f, 00681629] [00681630, 006817d4] [006817d8, 006817ee]]


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_00680520(int param_1)

{
  undefined4 uVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  undefined1 *puVar5;
  uint *puVar6;
  undefined4 *puVar7;
  int *piVar8;
  char *pcVar9;
  undefined4 *****pppppuVar10;
  uint uVar11;
  int *in_ECX;
  undefined4 unaff_EBX;
  int *unaff_ESI;
  int iVar12;
  char *pcVar13;
  uint uVar14;
  uint *puVar15;
  undefined4 ***pppuVar16;
  int *piStack_94bc;
  int iVar17;
  undefined4 ****ppppuVar18;
  undefined4 ****ppppuStack_94ac;
  char cStack_94a8;
  int *piStack_94a4;
  uint local_949c;
  uint local_9498;
  int *piStack_9490;
  int iStack_948c;
  int *local_9488;
  uint local_9484;
  int local_947c;
  undefined4 uStack_9478;
  undefined4 uStack_9474;
  uint local_9470;
  undefined4 uStack_9468;
  uint uStack_9464;
  undefined4 uStack_9460;
  uint local_945c;
  char acStack_9458 [4];
  undefined4 local_9454;
  char local_9450 [236];
  uint auStack_9364 [9419];
  void *pvStack_38;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b624e0;
  pvStack_14 = ExceptionList;
  uStack_1c = 0x680546;
  ExceptionList = &pvStack_14;
  FUN_0043acd0();
  local_c = 0;
  FUN_009a0940();
  FUN_0099f770();
  local_c = 0xffffffff;
  if (0xf < local_945c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_9484 = 0xf;
  local_9488 = (int *)0x0;
  local_9498 = local_9498 & 0xffffff00;
  piVar3 = in_ECX + 0x2d7;
  do {
    iVar4 = *piVar3;
    piVar3 = (int *)((int)piVar3 + 1);
  } while ((char)iVar4 != '\0');
  FUN_00409350();
  local_c = 1;
  FUN_009a0940();
  FUN_0099f770();
  local_c = 0xffffffff;
  if (0xf < local_9484) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_947c = in_ECX[0x2d7];
  local_9484 = 0xf;
  local_9488 = (int *)0x0;
  local_9498 = local_9498 & 0xffffff00;
  FUN_0052fc10();
  FUN_009a0940();
  local_9454 = 0xc;
  _sprintf(local_9450,"%d");
  FUN_0099ff90();
  FUN_004013e0();
  iVar4 = FUN_0068b610();
  local_949c = CONCAT31(local_949c._1_3_,*(undefined1 *)(iVar4 + 0x30));
  FUN_009a0940();
  local_9454 = 0xe;
  _sprintf(local_9450,"%s");
  FUN_0099ff90();
  FUN_004013e0();
  FUN_0068b610();
  FUN_009a0940();
  local_9454 = 0xc;
  _sprintf(local_9450,"%d");
  FUN_0099ff90();
  FUN_004013e0();
  FUN_009a0940();
  local_9454 = 0xc;
  _sprintf(local_9450,"%d");
  FUN_0099ff90();
  FUN_004013e0();
  FUN_009a0940();
  local_9454 = 0xc;
  _sprintf(local_9450,"%d");
  FUN_0099ff90();
  FUN_004013e0();
  FUN_009a0940();
  local_9454 = 0xc;
  _sprintf(local_9450,"%d");
  FUN_0099ff90();
  FUN_004013e0();
  if (in_ECX == (int *)0xffffff9c) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = in_ECX + 0x22;
  }
  FUN_009a0940();
  (**(code **)(*piVar3 + 4))();
  FUN_009a0940();
  (**(code **)(in_ECX[0x2eb] + 4))();
  FUN_0043acd0(in_ECX + 0x2c4,&uStack_9478);
  pvStack_14 = (void *)0x2;
  FUN_009a0940(param_1);
  FUN_0099f770(param_1,0);
  uVar1 = DAT_00f09568;
  pvStack_14 = (void *)0xffffffff;
  if (0xf < uStack_9464) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_9478);
  }
  FUN_009a0940(param_1);
  local_945c = 0xc;
  _sprintf(acStack_9458,"%d",uVar1);
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  piVar3 = (int *)in_ECX[0x2f3];
  FUN_009a0940(param_1);
  (**(code **)(*piVar3 + 4))(param_1);
  cStack_94a8 = (char)in_ECX[0x2e5];
  FUN_009a0940(param_1);
  uStack_9460 = 0xe;
  puVar5 = &DAT_00dfbbd0;
  if (cStack_94a8 == '\0') {
    puVar5 = &DAT_00dfbbd4;
  }
  _sprintf((char *)&local_945c,"%s",puVar5);
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  cStack_94a8 = *(char *)((int)in_ECX + 0xb95);
  FUN_009a0940(param_1);
  uStack_9460 = 0xe;
  puVar5 = &DAT_00dfbbd0;
  if (cStack_94a8 == '\0') {
    puVar5 = &DAT_00dfbbd4;
  }
  _sprintf((char *)&local_945c,"%s",puVar5);
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  FUN_009a0940(param_1);
  (**(code **)(in_ECX[0x305] + 4))(param_1);
  FUN_009a0940(param_1);
  (**(code **)(in_ECX[0x31b] + 4))(param_1);
  FUN_0068f0d0();
  FUN_00409c60(param_1);
  local_9498 = 0xf;
  local_949c = 0;
  ppppuStack_94ac = (undefined4 ****)((uint)ppppuStack_94ac & 0xffffff00);
  piVar3 = in_ECX + 0x33a;
  do {
    iVar4 = *piVar3;
    piVar3 = (int *)((int)piVar3 + 1);
  } while ((char)iVar4 != '\0');
  FUN_00409350(in_ECX + 0x33a,(int)piVar3 - ((int)in_ECX + 0xce9));
  uStack_20 = 3;
  FUN_009a0940(param_1);
  FUN_0099f770(param_1,0);
  uStack_20 = 0xffffffff;
  if (0xf < local_9498) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(ppppuStack_94ac);
  }
  FUN_0043acd0(in_ECX + 0x33c,&ppppuStack_94ac);
  uStack_20 = 4;
  FUN_009a0940(param_1);
  FUN_0099f770(param_1,0);
  iVar4 = DAT_01258a3c;
  uStack_20 = 0xffffffff;
  if (0xf < local_9498) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(ppppuStack_94ac);
  }
  puVar6 = (uint *)(DAT_01258a3c + 0xc);
  local_9498 = 0xf;
  local_949c = 0;
  ppppuStack_94ac = (undefined4 ****)((uint)ppppuStack_94ac & 0xffffff00);
  piStack_9490 = (int *)*puVar6;
  while (((int *)*puVar6 <= piStack_9490 && (piStack_9490 < *(int **)(iVar4 + 0x10)))) {
    piVar3 = (int *)*piStack_9490;
    piStack_9490 = piStack_9490 + 1;
    cVar2 = (**(code **)(*piVar3 + 0x20))();
    if ((cVar2 != '\0') && (1 < (int)((double)((piVar3[0x74] + -43800000) / 0x18) / 365.0))) {
      FUN_009a0940(param_1);
      (**(code **)(*piVar3 + 4))(param_1);
    }
  }
  FUN_0043cd10(in_ECX + 2,0);
  puVar6 = auStack_9364;
  iVar4 = 0x1266;
  do {
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6 = puVar6 + 2;
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  FUN_009c1750();
  piStack_94bc = (int *)0x0;
  iVar4 = (**(code **)(*in_ECX + 0x18))();
  if (0 < iVar4) {
    do {
      for (piVar3 = *(int **)(*(int *)(in_ECX[0x2b3] + (int)piStack_94bc * 4) + 0xd8);
          piVar3 != (int *)0x0; piVar3 = (int *)piVar3[2]) {
        piVar8 = (int *)*piVar3;
        cVar2 = (**(code **)(*piVar8 + 0x34))();
        if (cVar2 != '\0') {
          iVar4 = piVar8[0x18] + -0x1268;
          if ((-1 < iVar4) && (auStack_9364[iVar4 * 2 + 1] < (uint)piVar8[0x19])) {
            auStack_9364[iVar4 * 2 + 1] = piVar8[0x19];
          }
        }
      }
      piStack_94bc = (int *)((int)piStack_94bc + 1);
      iVar4 = (**(code **)(*in_ECX + 0x18))();
    } while ((int)piStack_94bc < iVar4);
  }
  puVar6 = auStack_9364;
  piStack_94bc = (int *)0x1267;
  do {
    if (puVar6[1] != 0) {
      FUN_009a0940(param_1);
      FUN_0099f020(puVar6);
    }
    puVar6 = puVar6 + 2;
    piStack_94bc = (int *)((int)piStack_94bc + -1);
  } while (piStack_94bc != (int *)0x0);
  FUN_009a0940(param_1);
  if (*(int *)(param_1 + 4) == -1) {
    *(undefined4 *)(param_1 + 4) = 0;
  }
  else {
    puVar7 = (undefined4 *)FUN_00990880();
    uStack_20 = 6;
    uStack_9468 = 0x10;
    if (0xf < (uint)puVar7[5]) {
      puVar7 = (undefined4 *)*puVar7;
    }
    __snprintf((char *)&uStack_9464,0xff,"%s",puVar7);
    FUN_0099ff90(param_1);
    uStack_20 = 0xffffffff;
    if (0xf < local_9470) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_9484);
    }
    if ((*(char *)(param_1 + 0xc) == '\0') && (*(int *)(param_1 + 4) != 0)) {
      FUN_009a08a0(param_1,*(int *)(param_1 + 4) + -1);
    }
    puVar7 = (undefined4 *)FUN_00990880();
    uStack_20 = 7;
    uStack_9468 = 3;
    if (0xf < (uint)puVar7[5]) {
      puVar7 = (undefined4 *)*puVar7;
    }
    __snprintf((char *)&uStack_9464,0xff,"%s",puVar7);
    FUN_0099ff90(param_1);
    uStack_20 = 0xffffffff;
    if (0xf < local_9470) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_9484);
    }
    puVar7 = (undefined4 *)FUN_00990880();
    uStack_20 = 8;
    uStack_9468 = 0x10;
    if (0xf < (uint)puVar7[5]) {
      puVar7 = (undefined4 *)*puVar7;
    }
    __snprintf((char *)&uStack_9464,0xff,"%s",puVar7);
    FUN_0099ff90(param_1);
    uStack_20 = 0xffffffff;
    if (0xf < local_9470) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_9484);
    }
    local_9470 = 0xf;
    uStack_9474 = 0;
    local_9484 = local_9484 & 0xffffff00;
  }
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  uVar14 = 0;
  if (unaff_ESI[0x2da] != 0) {
    piVar3 = (int *)unaff_ESI[0x2db];
    do {
      if (*piVar3 != 0) break;
      uVar14 = uVar14 + 1;
      piVar3 = piVar3 + 1;
    } while (uVar14 < (uint)unaff_ESI[0x2da]);
  }
  piStack_94bc = (int *)0x0;
  piVar3 = *(int **)(unaff_ESI[0x2db] + uVar14 * 4);
LAB_00680de8:
  do {
    uVar11 = unaff_ESI[0x2da];
    if ((uVar11 <= uVar14) || (piVar3 == (int *)0x0)) break;
    piStack_94bc = (int *)*piVar3;
    piStack_94a4 = (int *)piVar3[1];
    if ((piStack_94a4 == (int *)0x0) && (uVar14 = uVar14 + 1, uVar14 < uVar11)) {
      piVar3 = (int *)(unaff_ESI[0x2db] + uVar14 * 4);
      do {
        if (*piVar3 != 0) break;
        uVar14 = uVar14 + 1;
        piVar3 = piVar3 + 1;
      } while (uVar14 < uVar11);
      if (uVar14 < uVar11) {
        piStack_94a4 = *(int **)(unaff_ESI[0x2db] + uVar14 * 4);
      }
    }
    for (puVar7 = *(undefined4 **)(*(int *)(DAT_012588e8 + 0xb24) + 0x60);
        puVar7 != (undefined4 *)0x0; puVar7 = (undefined4 *)puVar7[2]) {
      piVar8 = (int *)(**(code **)(*(int *)*puVar7 + 0x14))();
      piVar3 = piStack_94a4;
      if (piVar8 == piStack_94bc) goto LAB_00680de8;
    }
    piStack_9490 = (int *)piStack_94bc[2];
    iStack_948c = piStack_94bc[3];
    FUN_009a0940(param_1);
    FUN_0099f020(&piStack_9490);
    piVar3 = piStack_94a4;
  } while( true );
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
  if ((*(char *)(param_1 + 0xc) == '\0') && (*(int *)(param_1 + 4) != 0)) {
    piStack_94bc = (int *)(*(int *)(param_1 + 4) + -1);
    puVar7 = (undefined4 *)FUN_00990880();
    uStack_20 = 0xb;
    uStack_9468 = 0x11;
    if (0xf < (uint)puVar7[5]) {
      puVar7 = (undefined4 *)*puVar7;
    }
    __snprintf((char *)&uStack_9464,0xff,"%s",puVar7);
    FUN_009a0530(param_1);
    uStack_20 = 0xffffffff;
    if (0xf < local_9470) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_9484);
    }
  }
  if (*(int *)(param_1 + 4) != -1) {
    puVar7 = (undefined4 *)FUN_00990880();
    uStack_20 = 0xc;
    uStack_9468 = 4;
    if (0xf < (uint)puVar7[5]) {
      puVar7 = (undefined4 *)*puVar7;
    }
    __snprintf((char *)&uStack_9464,0xff,"%s",puVar7);
    FUN_0099ff90(param_1);
    uStack_20 = 0xffffffff;
    if (0xf < local_9470) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_9484);
    }
    puVar7 = (undefined4 *)FUN_00990880();
    uStack_20 = 0xd;
    uStack_9468 = 0x10;
    if (0xf < (uint)puVar7[5]) {
      puVar7 = (undefined4 *)*puVar7;
    }
    __snprintf((char *)&uStack_9464,0xff,"%s",puVar7);
    FUN_0099ff90(param_1);
    uStack_20 = 0xffffffff;
    if (0xf < local_9470) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_9484);
    }
  }
  iVar4 = 0;
  piStack_9490 = (int *)(unaff_ESI[0x2b8] - unaff_ESI[0x2b7] >> 2);
  if (0 < (int)piStack_9490) {
    do {
      iVar17 = *(int *)(unaff_ESI[0x2b7] + iVar4 * 4);
      piStack_94bc = (int *)(iVar17 + 0x68);
      if (piStack_94bc != (int *)0x0) {
        iVar12 = 0;
        local_9488 = (int *)(*(int *)(iVar17 + 0x6c) - *piStack_94bc >> 2);
        if (0 < (int)local_9488) {
          do {
            piVar3 = *(int **)(*piStack_94bc + iVar12 * 4);
            FUN_009a0940(param_1);
            (**(code **)(*piVar3 + 4))(param_1);
            iVar12 = iVar12 + 1;
          } while (iVar12 < (int)local_9488);
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)piStack_9490);
  }
  iVar17 = 0;
  iVar4 = (**(code **)(*unaff_ESI + 0x18))();
  if (0 < iVar4) {
    do {
      iVar4 = *(int *)(unaff_ESI[0x2b3] + iVar17 * 4);
      if (*(int *)(iVar4 + 0x58) != 0) {
        uStack_9468 = 0xc;
        _sprintf((char *)&uStack_9464,"%d",*(undefined4 *)(iVar4 + 0x58));
        FUN_0099ff90(param_1);
        puVar7 = (undefined4 *)FUN_00990880();
        uStack_20 = 0xe;
        uStack_9468 = 1;
        if (0xf < (uint)puVar7[5]) {
          puVar7 = (undefined4 *)*puVar7;
        }
        __snprintf((char *)&uStack_9464,0xff,"%s",puVar7);
        FUN_0099ff90(param_1);
        uStack_20 = 0xffffffff;
        if (0xf < local_9470) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_9484);
        }
        (**(code **)(**(int **)(unaff_ESI[0x2b3] + iVar17 * 4) + 4))(param_1);
      }
      iVar17 = iVar17 + 1;
      iVar4 = (**(code **)(*unaff_ESI + 0x18))();
    } while (iVar17 < iVar4);
  }
  iVar4 = (**(code **)(*unaff_ESI + 0x1c))();
  if (1 < iVar4) {
    do {
      pcVar13 = (char *)(*(int *)(unaff_ESI[0x2b7] + 4) + 0x1c);
      local_9498 = 0xf;
      local_949c = 0;
      ppppuStack_94ac = (undefined4 ****)((uint)ppppuStack_94ac & 0xffffff00);
      pcVar9 = pcVar13;
      do {
        cVar2 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar2 != '\0');
      FUN_00409350(pcVar13,(int)pcVar9 - (*(int *)(unaff_ESI[0x2b7] + 4) + 0x1d));
      uStack_20._0_1_ = 0xf;
      uStack_20._1_3_ = 0;
      local_9488 = *(int **)(unaff_ESI[0x2b7] + 4);
      if ((*(char *)(param_1 + 0xc) == '\0') && (*(int *)(param_1 + 4) != 0)) {
        piStack_9490 = (int *)(*(int *)(param_1 + 4) + -1);
        puVar7 = (undefined4 *)FUN_00990880();
        uStack_20._0_1_ = 0x10;
        uStack_9468 = 0x11;
        if (0xf < (uint)puVar7[5]) {
          puVar7 = (undefined4 *)*puVar7;
        }
        __snprintf((char *)&uStack_9464,0xff,"%s",puVar7);
        FUN_009a0530(param_1);
        uStack_20._0_1_ = 0xf;
        if (0xf < local_9470) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_9484);
        }
      }
      uStack_20._0_1_ = 0xf;
      uStack_9468 = 0xf;
      pppppuVar10 = (undefined4 *****)ppppuStack_94ac;
      if (local_9498 < 0x10) {
        pppppuVar10 = &ppppuStack_94ac;
      }
      __snprintf((char *)&uStack_9464,0xff,"%s",pppppuVar10);
      FUN_0099ff90(param_1);
      puVar7 = (undefined4 *)FUN_00990880();
      uStack_20._0_1_ = 0x11;
      uStack_9468 = 1;
      if (0xf < (uint)puVar7[5]) {
        puVar7 = (undefined4 *)*puVar7;
      }
      __snprintf((char *)&uStack_9464,0xff,"%s",puVar7);
      FUN_0099ff90(param_1);
      uStack_20 = CONCAT31(uStack_20._1_3_,0xf);
      if (0xf < local_9470) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_9484);
      }
      (**(code **)(*local_9488 + 4))(param_1);
      uStack_24 = 0xffffffff;
      if (0xf < local_949c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(unaff_EBX);
      }
      piStack_94bc = (int *)((int)piStack_94bc + 1);
      iVar4 = (**(code **)(iRam00000001 + 0x1c))();
    } while ((int)piStack_94bc < iVar4);
  }
  piStack_94bc = (int *)0x0;
  if (0 < (int)(unaff_ESI[0x2e7] - unaff_ESI[0x2e6] & 0xfffffff0U)) {
    iVar4 = 0;
    do {
      if ((unaff_ESI[0x2e7] - unaff_ESI[0x2e6] & 0xfffffff0U) != 0) {
        for (puVar7 = *(undefined4 **)(unaff_ESI[0x2e6] + iVar4); puVar7 != (undefined4 *)0x0;
            puVar7 = (undefined4 *)puVar7[2]) {
          piVar3 = (int *)*puVar7;
          FUN_009a0940(param_1);
          (**(code **)(*piVar3 + 4))(param_1);
        }
      }
      iVar4 = iVar4 + 0x10;
      piStack_94bc = (int *)((int)piStack_94bc + 1);
    } while ((int)piStack_94bc < unaff_ESI[0x2e7] - unaff_ESI[0x2e6] >> 4);
  }
  FUN_009a0940(param_1);
  (**(code **)(unaff_ESI[0x29f] + 4))(param_1);
  FUN_009a0940(param_1);
  (**(code **)(unaff_ESI[0x2ad] + 4))(param_1);
  puVar7 = (undefined4 *)unaff_ESI[0x2cf];
  while (puVar7 != (undefined4 *)0x0) {
    piVar3 = (int *)*puVar7;
    puVar7 = (undefined4 *)puVar7[2];
    FUN_009a0940(param_1);
    (**(code **)(*piVar3 + 4))(param_1);
    unaff_ESI = piStack_94bc;
  }
  puVar7 = (undefined4 *)unaff_ESI[0x2d3];
  while (puVar7 != (undefined4 *)0x0) {
    piVar3 = (int *)*puVar7;
    puVar7 = (undefined4 *)puVar7[2];
    FUN_009a0940(param_1);
    (**(code **)(*piVar3 + 4))(param_1);
  }
  FUN_0043cd10(piStack_94bc + 0x300,0);
  ppppuVar18 = (undefined4 ****)0x0;
  ppppuStack_94ac = (undefined4 ****)0x0;
  uStack_28 = 0x12;
  iVar4 = 0;
  if (0 < (int)(piStack_94bc[0x2f9] - piStack_94bc[0x2f8] & 0xfffffffcU)) {
    do {
      pppuVar16 = *(undefined4 ****)(*(int *)(piStack_94bc[0x2f8] + iVar4 * 4) + 0x20);
      uVar11 = (int)ppppuVar18 >> 2;
      uVar14 = (int)ppppuStack_94ac >> 2;
      if (&stack0xffff6b40 < ppppuVar18) {
        if (ppppuVar18 == ppppuStack_94ac) {
          if (0x3ffffffe < uVar11) {
LAB_006817a0:
                    /* WARNING: Subroutine does not return */
            FUN_00aad3ad("vector<T> too long");
          }
          uVar11 = uVar11 + 1;
          if (uVar14 < uVar11) {
            if (0x3fffffff - (uVar14 >> 1) < uVar14) {
              uVar14 = 0;
            }
            else {
              uVar14 = uVar14 + (uVar14 >> 1);
            }
            if (uVar14 < uVar11) {
              uVar14 = uVar11;
            }
            FUN_004bf300(uVar14);
          }
        }
        if (ppppuVar18 != (undefined4 ****)0x0) {
          *ppppuVar18 = *(undefined4 ****)(((int)&stack0xffff6b40 >> 2) * 4);
        }
      }
      else {
        if (ppppuVar18 == ppppuStack_94ac) {
          if (0x3ffffffe < uVar11) goto LAB_006817a0;
          uVar11 = uVar11 + 1;
          if (uVar14 < uVar11) {
            if (0x3fffffff - (uVar14 >> 1) < uVar14) {
              uVar14 = 0;
            }
            else {
              uVar14 = uVar14 + (uVar14 >> 1);
            }
            if (uVar14 < uVar11) {
              uVar14 = uVar11;
            }
            FUN_004bf300(uVar14);
          }
        }
        if (ppppuVar18 != (undefined4 ****)0x0) {
          *ppppuVar18 = pppuVar16;
        }
      }
      iVar4 = iVar4 + 1;
      ppppuVar18 = ppppuVar18 + 1;
    } while (iVar4 < piStack_94bc[0x2f9] - piStack_94bc[0x2f8] >> 2);
  }
  FUN_0043cd10(&stack0xffff6b4c,0);
  FUN_00409c60(param_1);
  local_9498 = *(int *)(piStack_94bc[0x2c9] + 0x1e24);
  if (local_9498 != 0) {
    pppuVar16 = (undefined4 ***)0x0;
    piStack_9490 = (int *)(**(code **)(*piStack_94bc + 0x1c))();
    if (0 < (int)piStack_9490) {
      do {
        piVar3 = (int *)(*(int *)(*(int *)(piStack_94bc[0x2b7] + (int)pppuVar16 * 4) + 0x20) * 0x10
                        + *(int *)(local_9498 + 0x350));
        iVar4 = 0;
        if (0 < (int)(piVar3[1] - *piVar3 & 0xfffffffcU)) {
          do {
            FUN_009a0940(param_1);
            FUN_0099fe90(0);
            *(undefined1 *)(*(int *)(*piVar3 + iVar4 * 4) + 0x1cd) = 1;
            iVar17 = iVar4;
            FUN_004037c0(*(undefined4 *)(*piVar3 + iVar4 * 4),param_1,1);
            *(undefined1 *)(*(int *)(*piVar3 + iVar4 * 4) + 0x1cd) = 0;
            *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
            if ((*(char *)(param_1 + 0xc) == '\0') && (*(int *)(param_1 + 4) != 0)) {
              FUN_009a08a0(param_1,*(int *)(param_1 + 4) + -1);
            }
            if (*(int *)(param_1 + 4) != -1) {
              FUN_004013e0(param_1);
              FUN_004013e0(param_1);
            }
            iVar4 = iVar17 + 1;
          } while (iVar4 < piVar3[1] - *piVar3 >> 2);
        }
        pppuVar16 = (undefined4 ***)((int)pppuVar16 + 1);
      } while ((int)pppuVar16 < (int)piStack_9490);
    }
  }
  piVar3 = (int *)piStack_94bc[0x33d];
  FUN_009a0940(param_1);
  (**(code **)(*piVar3 + 4))(param_1);
  piVar3 = (int *)piStack_94bc[0x33e];
  FUN_009a0940(param_1);
  (**(code **)(*piVar3 + 4))(param_1);
  piVar3 = *(int **)(DAT_0125870c + 0x2a88);
  puVar6 = (uint *)(DAT_0125870c + 0x2a88);
  puVar15 = puVar6;
  do {
    while( true ) {
      if ((piVar3 < (int *)*puVar6) || ((int *)puVar6[1] <= piVar3)) {
        if (piStack_94bc == (int *)0x0) {
          ExceptionList = pvStack_38;
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(piStack_94bc);
      }
      iVar4 = *piVar3;
      piVar3 = piVar3 + 1;
      if ((*(int *)(iVar4 + 0x80) == 0) && (*(int *)(iVar4 + 0x84) == DAT_01259abc)) break;
LAB_006817aa:
      FUN_009a0940(param_1);
      puVar6 = puVar15;
      (**(code **)(*(int *)(iVar4 + 0x74) + 4))(param_1);
      puVar15 = puVar6;
    }
    iVar17 = 0;
    piVar8 = (int *)(iVar4 + 0x98);
    do {
      if (*piVar8 != 0) goto LAB_006817aa;
      iVar17 = iVar17 + 1;
      piVar8 = piVar8 + 7;
    } while (iVar17 < 4);
  } while( true );
}

