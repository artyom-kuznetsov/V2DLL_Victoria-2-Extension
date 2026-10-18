// FUN_006881d0 @ 006881d0 body=[[006881d0, 00688822] [0068882e, 0068887f] [00688889, 006888ac] [006888b0, 006888e8] [006888f2, 00688aa9] [00688aad, 00688ae3] [00688af0, 00688b9e] [00688ba2, 00688c1c] [00688c20, 00688e68] [00688e70, 00688ecc] [00688ed0, 0068922c] [00689230, 006892a6] [006892aa, 006892ea] [006892ee, 0068941b]]


/* WARNING: Removing unreachable block (ram,0x006888ab) */
/* WARNING: Removing unreachable block (ram,0x006888b0) */
/* WARNING: Removing unreachable block (ram,0x006888de) */

void FUN_006881d0(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  void *pvVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  int iVar14;
  int *piVar15;
  int local_74;
  int local_6c;
  uint uStack_4c;
  undefined8 uStack_48;
  undefined1 uStack_40;
  undefined4 uStack_30;
  undefined8 uStack_2c;
  undefined8 uStack_24;
  undefined1 uStack_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00bae1af;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  if (*(int *)(param_1 + 0xb60) == param_2[1]) {
    ExceptionList = &pvStack_14;
    iVar5 = FUN_00aae9af();
    local_c = 0;
    if (iVar5 != 0) {
      (**(code **)(**(int **)(param_1 + 0xb24) + 0x44))();
      FUN_007297a0(iVar5,*param_3,param_3[1],*(undefined4 *)(DAT_012588e8 + 0xb5c));
    }
    local_c = 0xffffffff;
    iVar5 = (**(code **)(**(int **)(param_1 + 0xb24) + 0x44))();
    (**(code **)(**(int **)(iVar5 + 0x38) + 0x18))();
  }
  local_74 = 0;
  if (0 < (int)(*(int *)(param_1 + 0xb9c) - *(int *)(param_1 + 0xb98) & 0xfffffff0U)) {
    local_6c = 0;
    do {
      piVar13 = *(int **)(*(int *)(param_1 + 0xb98) + local_6c);
      while (piVar13 != (int *)0x0) {
        iVar5 = *piVar13;
        piVar13 = (int *)piVar13[2];
        if (*(int *)(iVar5 + 0x3c) == param_2[1]) {
          *(undefined4 *)(iVar5 + 0x38) = *param_3;
          *(undefined4 *)(iVar5 + 0x3c) = param_3[1];
        }
      }
      local_6c = local_6c + 0x10;
      local_74 = local_74 + 1;
    } while (local_74 < *(int *)(param_1 + 0xb9c) - *(int *)(param_1 + 0xb98) >> 4);
  }
  iVar5 = *(int *)(DAT_012587e4[1] + param_2[1] * 4);
  iVar11 = *(int *)(DAT_012587e4[1] + param_3[1] * 4);
  piVar13 = *(int **)(iVar5 + 0x9f8);
joined_r0x0068833c:
  if (piVar13 != (int *)0x0) {
    piVar15 = (int *)piVar13[2];
    iVar12 = *(int *)(*(int *)(param_1 + 0xacc) + *piVar13 * 4);
    puVar7 = *(undefined4 **)(iVar12 + 0x14c);
    puVar9 = *(undefined4 **)(iVar12 + 0x148);
    piVar13 = piVar15;
    if (puVar9 != puVar7) goto code_r0x0068836f;
    goto LAB_00688386;
  }
  if (0 < (int)(*(int *)(param_1 + 0xae0) - *(int *)(param_1 + 0xadc) & 0xfffffffcU)) {
    iVar12 = 0;
    do {
      iVar14 = *(int *)(*(int *)(param_1 + 0xadc) + iVar12 * 4);
      iVar1 = *(int *)(*(int *)(iVar14 + 0xbe8) + param_2[1] * 4);
      *(undefined4 *)(iVar1 + 8) = *param_3;
      *(undefined4 *)(iVar1 + 0xc) = param_3[1];
      iVar1 = *(int *)(*(int *)(iVar14 + 0xbe8) + param_3[1] * 4);
      *(undefined4 *)(iVar1 + 8) = *param_2;
      *(undefined4 *)(iVar1 + 0xc) = param_2[1];
      iVar14 = *(int *)(iVar14 + 0xbe8);
      uVar10 = *(undefined4 *)(iVar14 + param_2[1] * 4);
      iVar1 = param_3[1];
      *(undefined4 *)(iVar14 + param_2[1] * 4) = *(undefined4 *)(iVar14 + iVar1 * 4);
      *(undefined4 *)(iVar14 + iVar1 * 4) = uVar10;
      iVar12 = iVar12 + 1;
    } while (iVar12 < *(int *)(param_1 + 0xae0) - *(int *)(param_1 + 0xadc) >> 2);
  }
  piVar13 = *(int **)(param_1 + 0xa84);
  while (piVar13 != (int *)0x0) {
    piVar15 = (int *)*piVar13;
    piVar13 = (int *)piVar13[2];
    if (piVar15[3] == param_2[1]) {
      (**(code **)(*piVar15 + 0x20))();
    }
    else if (piVar15[3] == param_3[1]) {
      (**(code **)(*piVar15 + 0x20))();
    }
    if ((piVar15[5] == param_2[1]) || (piVar15[5] == param_3[1])) {
      (**(code **)(*piVar15 + 0x24))();
    }
  }
  uVar6 = *(uint *)(iVar5 + 0xd38);
  while ((*(uint *)(iVar5 + 0xd38) <= uVar6 && (uVar6 < *(uint *)(iVar5 + 0xd3c)))) {
    iVar12 = *(int *)(DAT_012587e4[1] + *(int *)(uVar6 + 4) * 4);
    uVar6 = uVar6 + 8;
    if (*(int *)(iVar12 + 0xcfc) == param_2[1]) {
      *(undefined4 *)(iVar12 + 0xcf8) = *param_3;
      *(undefined4 *)(iVar12 + 0xcfc) = param_3[1];
    }
  }
  puVar7 = *(undefined4 **)(param_1 + 0xb3c);
  while (puVar7 != (undefined4 *)0x0) {
    uVar10 = *puVar7;
    puVar7 = (undefined4 *)puVar7[2];
    FUN_00938150(uVar10,*param_2,param_2[1]);
  }
  if (*(int *)(*(int *)(param_1 + 0xcf8) + 8) != 0) {
    FUN_00425bc0();
  }
  uVar10 = *param_3;
  uVar2 = param_3[1];
  iVar12 = param_2[1];
  if (*(int *)(iVar5 + 0xc10) == iVar12) {
    *(undefined4 *)(iVar5 + 0xc0c) = uVar10;
    *(undefined4 *)(iVar5 + 0xc10) = uVar2;
  }
  if (*(int *)(iVar5 + 0xc58) == iVar12) {
    *(undefined4 *)(iVar5 + 0xc54) = uVar10;
    *(undefined4 *)(iVar5 + 0xc58) = uVar2;
  }
  iVar12 = param_2[1];
  if ((iVar12 < *(int *)(param_1 + 0xaf0) - *(int *)(param_1 + 0xaec) >> 2) &&
     (*(int *)(*(int *)(param_1 + 0xaec) + iVar12 * 4) == 0)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
    if (*(int *)(param_1 + 0xb60) == iVar12) {
      *(undefined4 *)(param_1 + 0xb5c) = *param_3;
      *(undefined4 *)(param_1 + 0xb60) = param_3[1];
    }
    iVar12 = param_2[1];
    if ((iVar12 < *(int *)(param_1 + 0xb00) - *(int *)(param_1 + 0xafc) >> 2) &&
       ((int)param_3[1] < *(int *)(param_1 + 0xb00) - *(int *)(param_1 + 0xafc) >> 2)) {
      iVar14 = *(int *)(param_1 + 0xafc);
      uVar10 = *(undefined4 *)(iVar14 + iVar12 * 4);
      *(undefined4 *)(iVar14 + iVar12 * 4) = *(undefined4 *)(iVar14 + param_3[1] * 4);
      *(undefined4 *)(*(int *)(param_1 + 0xafc) + param_3[1] * 4) = uVar10;
    }
  }
  uVar10 = *(undefined4 *)(iVar5 + 0xce0);
  *(undefined4 *)(iVar5 + 0xce0) = *(undefined4 *)(iVar11 + 0xce0);
  *(undefined4 *)(iVar11 + 0xce0) = uVar10;
  FUN_004f97c0(iVar11);
  FUN_004f97c0(iVar5);
  iVar12 = *(int *)(iVar11 + 0x9f8);
  uStack_4c = uStack_4c & 0xffffff00;
  while (iVar12 != 0) {
    iVar12 = *(int *)(iVar12 + 8);
    FUN_0057aab0();
  }
  local_c = 1;
  if (*(int *)(iVar11 + 0x9f8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  *(undefined4 *)(iVar11 + 0xa00) = 0;
  *(undefined4 *)(iVar11 + 0x9f8) = 0;
  *(undefined4 *)(iVar11 + 0x9fc) = 0;
  *(undefined1 *)(iVar11 + 0xa04) = 0;
  iVar12 = *(int *)(iVar5 + 0x9f8);
  while (iVar12 != 0) {
    iVar12 = *(int *)(iVar12 + 8);
    FUN_0057aab0();
  }
  if (*(int *)(iVar5 + 0x9f8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  *(undefined4 *)(iVar5 + 0xa00) = 0;
  *(undefined4 *)(iVar5 + 0x9f8) = 0;
  *(undefined4 *)(iVar5 + 0x9fc) = 0;
  *(undefined1 *)(iVar5 + 0xa04) = 0;
  local_c = 0xffffffff;
  iVar12 = *(int *)(*(int *)(iVar5 + 0x84c) + 0x54);
  FUN_004f99f0();
  FUN_0050e350();
  piVar13 = *(int **)(iVar5 + 0x83c);
  do {
    if (piVar13 == (int *)0x0) goto LAB_00688938;
    iVar14 = *piVar13;
    piVar13 = (int *)piVar13[2];
  } while (*(int *)(iVar14 + 0x54) != iVar12);
  *(int *)(iVar5 + 0x84c) = iVar14;
  FUN_0051c890();
  FUN_0050ea30();
LAB_00688938:
  piVar13 = DAT_012587e4;
  for (uVar6 = *(uint *)(iVar5 + 0x1418);
      (*(uint *)(iVar5 + 0x1418) <= uVar6 && (uVar6 < *(uint *)(iVar5 + 0x141c))); uVar6 = uVar6 + 8
      ) {
    iVar12 = *(int *)(piVar13[1] + *(int *)(uVar6 + 4) * 4);
    *(undefined4 *)(iVar12 + 0x1428) = *param_3;
    *(undefined4 *)(iVar12 + 0x142c) = param_3[1];
  }
  FUN_004fb5c0();
  FUN_004fb5c0();
  *(ulonglong *)(iVar5 + 0x928) = (ulonglong)uStack_4c << 0x20;
  *(undefined8 *)(iVar5 + 0x930) = uStack_48;
  *(undefined4 *)(iVar5 + 0x924) = 0;
  *(undefined1 *)(iVar5 + 0x938) = uStack_40;
  *(undefined8 *)(iVar11 + 0x928) = uStack_2c;
  *(undefined4 *)(iVar11 + 0x924) = uStack_30;
  *(undefined8 *)(iVar11 + 0x930) = uStack_24;
  *(undefined1 *)(iVar11 + 0x938) = uStack_1c;
  local_6c = 0;
  if (DAT_0131bd5c == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)FUN_00aae9af();
    local_c = 2;
    if (puVar7 == (undefined4 *)0x0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      puVar7[1] = 0x1ff;
      *puVar7 = 0;
      pvVar8 = (void *)FUN_00aad56b();
      puVar7[2] = pvVar8;
      _memset(pvVar8,0,puVar7[1] * 4);
      puVar7[3] = 0;
      puVar7[4] = 0;
      puVar7[5] = 0;
    }
    local_c = 3;
    if ((puVar7 != DAT_0131bd5c) && (DAT_0131bd5c != (undefined4 *)0x0)) {
      FUN_0090cd00();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_c = 0xffffffff;
    piVar13 = DAT_012587e4;
    DAT_0131bd5c = puVar7;
  }
  iVar12 = (int)(DAT_0131bd5c[4] - DAT_0131bd5c[3]) >> 2;
  if (0 < iVar12) {
    do {
      if (DAT_0131bd5c == (undefined4 *)0x0) {
        puVar7 = (undefined4 *)FUN_00aae9af();
        local_c = 4;
        if (puVar7 == (undefined4 *)0x0) {
          puVar7 = (undefined4 *)0x0;
        }
        else {
          puVar7[1] = 0x1ff;
          *puVar7 = 0;
          pvVar8 = (void *)FUN_00aad56b();
          puVar7[2] = pvVar8;
          _memset(pvVar8,0,puVar7[1] * 4);
          puVar7[3] = 0;
          puVar7[4] = 0;
          puVar7[5] = 0;
        }
        local_c = 5;
        if ((puVar7 != DAT_0131bd5c) && (DAT_0131bd5c != (undefined4 *)0x0)) {
          FUN_0090cd00();
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_c = 0xffffffff;
        DAT_0131bd5c = puVar7;
      }
      iVar14 = *(int *)(DAT_0131bd5c[3] + local_6c * 4);
      iVar1 = *(int *)(iVar14 + 0x40);
      uVar10 = *(undefined4 *)(*(int *)(iVar5 + 0x154c) + iVar1 * 4);
      *(undefined4 *)(*(int *)(iVar5 + 0x154c) + iVar1 * 4) =
           *(undefined4 *)(*(int *)(iVar11 + 0x154c) + iVar1 * 4);
      local_6c = local_6c + 1;
      *(undefined4 *)(*(int *)(iVar11 + 0x154c) + *(int *)(iVar14 + 0x40) * 4) = uVar10;
      piVar13 = DAT_012587e4;
    } while (local_6c < iVar12);
  }
  local_74 = 0;
  piVar15 = piVar13;
  if (0 < *piVar13) {
    do {
      iVar12 = *(int *)(*(int *)(piVar13[1] + local_74 * 4) + 0x20);
      if (iVar12 != 0) {
        iVar12 = *(int *)(piVar15[1] + iVar12 * 4);
        piVar15 = *(int **)(iVar12 + 0xe8c);
        while ((*(int **)(iVar12 + 0xe8c) <= piVar15 && (piVar15 < *(int **)(iVar12 + 0xe90)))) {
          iVar14 = *piVar15;
          piVar15 = piVar15 + 1;
          if (*(int *)(iVar14 + 0xc) == param_2[1]) {
            *(undefined4 *)(iVar14 + 8) = *param_3;
            *(undefined4 *)(iVar14 + 0xc) = param_3[1];
          }
        }
        FUN_005e6510(param_2);
        FUN_005e6510(param_3);
        piVar15 = DAT_012587e4;
      }
      local_74 = local_74 + 1;
    } while (local_74 < *piVar13);
  }
  iVar12 = piVar15[1];
  if (*(int *)(*(int *)(iVar12 + param_2[1] * 4) + 0xe88) != 0) {
    *(undefined4 *)(*(int *)(*(int *)(iVar12 + param_2[1] * 4) + 0xe88) + 8) =
         *(undefined4 *)(iVar12 + param_3[1] * 4);
  }
  iVar12 = param_3[1];
  iVar14 = piVar15[1];
  uVar10 = *(undefined4 *)(iVar14 + param_2[1] * 4);
  *(undefined4 *)(iVar14 + param_2[1] * 4) = *(undefined4 *)(iVar14 + iVar12 * 4);
  *(undefined4 *)(piVar15[1] + iVar12 * 4) = uVar10;
  iVar12 = param_3[1];
  iVar14 = *(int *)(param_1 + 0xadc);
  uVar10 = *(undefined4 *)(iVar14 + param_2[1] * 4);
  *(undefined4 *)(iVar14 + param_2[1] * 4) = *(undefined4 *)(iVar14 + iVar12 * 4);
  *(undefined4 *)(iVar14 + iVar12 * 4) = uVar10;
  piVar13 = (int *)(param_2[1] * 0x10 + *(int *)(param_1 + 0xbf0));
  iVar12 = 0;
  iVar14 = piVar13[1] - *piVar13 >> 2;
  if (0 < iVar14) {
    do {
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0xbf0) + param_3[1] * 0x10) + iVar12 * 4) =
           *(undefined4 *)(*(int *)(*(int *)(param_1 + 0xbf0) + param_2[1] * 0x10) + iVar12 * 4);
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0xbf0) + param_2[1] * 0x10) + iVar12 * 4) =
           DAT_01258804;
      iVar12 = iVar12 + 1;
    } while (iVar12 < iVar14);
  }
  piVar13 = *(int **)(*(int *)(piVar15[1] + param_3[1] * 4) + 0x148c);
  while (piVar13 != (int *)0x0) {
    iVar12 = *piVar13;
    piVar13 = (int *)piVar13[2];
    for (piVar15 = *(int **)(iVar12 + 8); piVar15 != (int *)0x0; piVar15 = (int *)piVar15[2]) {
      cVar4 = FUN_00645fd0();
      if (cVar4 != '\0') {
        FUN_00645de0(*(undefined4 *)(*(int *)(DAT_012588dc + 0x20d8) + *piVar15 * 4));
      }
    }
  }
  piVar13 = *(int **)(DAT_0125870c + 0x2a88);
  do {
    if ((piVar13 < *(int **)(DAT_0125870c + 0x2a88)) ||
       (*(int **)(DAT_0125870c + 0x2a8c) <= piVar13)) goto LAB_00688f25;
    iVar12 = *piVar13;
    piVar13 = piVar13 + 1;
    iVar14 = 0;
    piVar15 = (int *)(iVar12 + 0x98);
    do {
      if (*piVar15 == param_2[1]) {
        *(undefined4 *)(iVar12 + 0x94 + iVar14 * 0x1c) = *param_3;
        *(undefined4 *)(iVar12 + 0x98 + iVar14 * 0x1c) = param_3[1];
        break;
      }
      iVar14 = iVar14 + 1;
      piVar15 = piVar15 + 7;
    } while (iVar14 < 4);
  } while( true );
code_r0x0068836f:
  do {
    if (puVar9[1] == param_3[1]) break;
    puVar9 = puVar9 + 2;
  } while (puVar9 != puVar7);
  if (puVar9 == puVar7) {
LAB_00688386:
    puVar9 = *(undefined4 **)(iVar12 + 0x148);
    if (puVar9 != puVar7) {
      do {
        if (puVar9[1] == param_3[1]) break;
        puVar9 = puVar9 + 2;
      } while (puVar9 != puVar7);
      if (puVar9 != puVar7) goto joined_r0x0068833c;
    }
    if ((param_3 < puVar7) && (puVar9 = *(undefined4 **)(iVar12 + 0x148), puVar9 <= param_3)) {
      if (puVar7 == *(undefined4 **)(iVar12 + 0x150)) {
        uVar6 = (int)puVar7 - *(int *)(iVar12 + 0x148) >> 3;
        if (0x1ffffffe < uVar6) goto LAB_006885af;
        if ((uint)((int)*(undefined4 **)(iVar12 + 0x150) - *(int *)(iVar12 + 0x148) >> 3) <
            uVar6 + 1) {
          FUN_004237e0();
        }
      }
      puVar7 = (undefined4 *)(*(int *)(iVar12 + 0x148) + ((int)param_3 - (int)puVar9 >> 3) * 8);
      puVar9 = *(undefined4 **)(iVar12 + 0x14c);
      if (puVar9 != (undefined4 *)0x0) {
        *puVar9 = *puVar7;
        puVar9[1] = puVar7[1];
      }
    }
    else {
      if (puVar7 == *(undefined4 **)(iVar12 + 0x150)) {
        uVar6 = (int)puVar7 - *(int *)(iVar12 + 0x148) >> 3;
        if (0x1ffffffe < uVar6) goto LAB_006885af;
        if ((uint)((int)*(undefined4 **)(iVar12 + 0x150) - *(int *)(iVar12 + 0x148) >> 3) <
            uVar6 + 1) {
          FUN_004237e0();
        }
      }
      puVar7 = *(undefined4 **)(iVar12 + 0x14c);
      if (puVar7 != (undefined4 *)0x0) {
        *puVar7 = *param_3;
        puVar7[1] = param_3[1];
      }
    }
    *(int *)(iVar12 + 0x14c) = *(int *)(iVar12 + 0x14c) + 8;
    FUN_0050e2d0();
  }
  goto joined_r0x0068833c;
LAB_00688f25:
  FUN_0068c040();
  FUN_0068d250();
  piVar13 = *(int **)(DAT_012588e8 + 0xabc);
  do {
    if (piVar13 == (int *)0x0) {
      local_74 = 0;
      local_6c = 0;
      iVar12 = (**(code **)(**(int **)(param_1 + 0xb24) + 0x44))();
      if (*(char *)(iVar12 + 0x34) == '\x01') {
        piVar13 = (int *)(param_1 + 0xa4);
        iVar12 = 0;
        if (0 < (int)(*(int *)(param_1 + 0xa8) - *(int *)(param_1 + 0xa4) & 0xfffffffcU)) {
          piVar15 = (int *)*piVar13;
          do {
            iVar14 = *piVar15;
            iVar1 = iVar14;
            if ((*(int *)(iVar14 + 0x34) != param_2[1]) &&
               (iVar1 = local_74, *(int *)(iVar14 + 0x34) == param_3[1])) {
              local_6c = iVar14;
            }
            local_74 = iVar1;
            iVar12 = iVar12 + 1;
            piVar15 = piVar15 + 1;
          } while (iVar12 < *(int *)(param_1 + 0xa8) - *piVar13 >> 2);
          if (local_74 != 0) {
            for (piVar13 = (int *)*piVar13;
                (piVar13 != *(int **)(param_1 + 0xa8) && (*piVar13 != local_74));
                piVar13 = piVar13 + 1) {
            }
            FUN_0068f020();
            FUN_0044be00();
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          if (local_6c != 0) {
            for (piVar13 = (int *)*piVar13;
                (piVar13 != *(int **)(param_1 + 0xa8) && (*piVar13 != local_6c));
                piVar13 = piVar13 + 1) {
            }
            FUN_0068f020();
            FUN_0044be00();
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
        }
      }
      iVar12 = FUN_00aae9af();
      local_c = 6;
      if (iVar12 == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = FUN_0081df60(iVar12);
      }
      local_c = 0xffffffff;
      *(undefined4 *)(iVar11 + 0x208) = uVar10;
      FUN_0068f390();
      if (bVar3) {
        iVar11 = FUN_00aae9af();
        local_c = 7;
        if (iVar11 == 0) {
          uVar10 = 0;
        }
        else {
          uVar10 = FUN_0081df60(iVar11);
        }
        local_c = 0xffffffff;
        *(undefined4 *)(iVar5 + 0x208) = uVar10;
        FUN_0068f390();
      }
      for (uVar6 = *(uint *)(param_1 + 0xadc);
          (*(uint *)(param_1 + 0xadc) <= uVar6 && (uVar6 < *(uint *)(param_1 + 0xae0)));
          uVar6 = uVar6 + 4) {
        FUN_00517af0();
      }
      for (uVar6 = *(uint *)(iVar5 + 0xd58);
          (*(uint *)(iVar5 + 0xd58) <= uVar6 && (uVar6 < *(uint *)(iVar5 + 0xd5c)));
          uVar6 = uVar6 + 8) {
        FUN_00515490();
      }
      ExceptionList = pvStack_14;
      return;
    }
    piVar15 = (int *)piVar13[2];
    iVar12 = *piVar13;
    iVar14 = *(int *)(iVar12 + 0x10);
    puVar7 = *(undefined4 **)(iVar14 + 0x38);
    puVar9 = *(undefined4 **)(iVar14 + 0x34);
    if (puVar9 != puVar7) {
      do {
        if (puVar9[1] == param_2[1]) break;
        puVar9 = puVar9 + 2;
      } while (puVar9 != puVar7);
      if (puVar9 != puVar7) {
        if ((param_3 < puVar7) && (puVar9 = *(undefined4 **)(iVar14 + 0x34), puVar9 <= param_3)) {
          if (puVar7 == *(undefined4 **)(iVar14 + 0x3c)) {
            uVar6 = (int)puVar7 - (int)puVar9 >> 3;
            if (0x1ffffffe < uVar6) goto LAB_006885af;
            if ((uint)((int)*(undefined4 **)(iVar14 + 0x3c) - (int)puVar9 >> 3) < uVar6 + 1) {
              FUN_004237e0();
            }
          }
          puVar9 = (undefined4 *)(*(int *)(iVar14 + 0x34) + ((int)param_3 - (int)puVar9 >> 3) * 8);
          puVar7 = *(undefined4 **)(iVar14 + 0x38);
          if (puVar7 != (undefined4 *)0x0) {
            *puVar7 = *puVar9;
            uVar10 = puVar9[1];
LAB_00689053:
            puVar7[1] = uVar10;
          }
        }
        else {
          if (puVar7 == *(undefined4 **)(iVar14 + 0x3c)) {
            uVar6 = (int)puVar7 - *(int *)(iVar14 + 0x34) >> 3;
            if (0x1ffffffe < uVar6) {
LAB_006885af:
                    /* WARNING: Subroutine does not return */
              FUN_00aad3ad();
            }
            if ((uint)((int)*(undefined4 **)(iVar14 + 0x3c) - *(int *)(iVar14 + 0x34) >> 3) <
                uVar6 + 1) {
              FUN_004237e0();
            }
          }
          puVar7 = *(undefined4 **)(iVar14 + 0x38);
          if (puVar7 != (undefined4 *)0x0) {
            *puVar7 = *param_3;
            uVar10 = param_3[1];
            goto LAB_00689053;
          }
        }
        *(int *)(iVar14 + 0x38) = *(int *)(iVar14 + 0x38) + 8;
        iVar14 = *(int *)(*(int *)(iVar12 + 0x10) + 0x34);
        iVar1 = *(int *)(*(int *)(iVar12 + 0x10) + 0x38);
        if (iVar14 != iVar1) {
          do {
            if (*(int *)(iVar14 + 4) == param_2[1]) break;
            iVar14 = iVar14 + 8;
          } while (iVar14 != iVar1);
        }
        FUN_0042ba80();
      }
    }
    iVar14 = *(int *)(iVar12 + 0x14);
    puVar7 = *(undefined4 **)(iVar14 + 0x38);
    puVar9 = *(undefined4 **)(iVar14 + 0x34);
    piVar13 = piVar15;
    if (puVar9 != puVar7) {
      do {
        if (puVar9[1] == param_2[1]) break;
        puVar9 = puVar9 + 2;
      } while (puVar9 != puVar7);
      if (puVar9 != puVar7) {
        if ((param_3 < puVar7) && (puVar9 = *(undefined4 **)(iVar14 + 0x34), puVar9 <= param_3)) {
          if (puVar7 == *(undefined4 **)(iVar14 + 0x3c)) {
            uVar6 = (int)puVar7 - (int)puVar9 >> 3;
            if (0x1ffffffe < uVar6) goto LAB_006885af;
            if ((uint)((int)*(undefined4 **)(iVar14 + 0x3c) - (int)puVar9 >> 3) < uVar6 + 1) {
              FUN_004237e0();
            }
          }
          puVar9 = (undefined4 *)(*(int *)(iVar14 + 0x34) + ((int)param_3 - (int)puVar9 >> 3) * 8);
          puVar7 = *(undefined4 **)(iVar14 + 0x38);
          if (puVar7 != (undefined4 *)0x0) {
            *puVar7 = *puVar9;
            uVar10 = puVar9[1];
LAB_0068918f:
            puVar7[1] = uVar10;
          }
        }
        else {
          if (puVar7 == *(undefined4 **)(iVar14 + 0x3c)) {
            uVar6 = (int)puVar7 - *(int *)(iVar14 + 0x34) >> 3;
            if (0x1ffffffe < uVar6) goto LAB_006885af;
            if ((uint)((int)*(undefined4 **)(iVar14 + 0x3c) - *(int *)(iVar14 + 0x34) >> 3) <
                uVar6 + 1) {
              FUN_004237e0();
            }
          }
          puVar7 = *(undefined4 **)(iVar14 + 0x38);
          if (puVar7 != (undefined4 *)0x0) {
            *puVar7 = *param_3;
            uVar10 = param_3[1];
            goto LAB_0068918f;
          }
        }
        *(int *)(iVar14 + 0x38) = *(int *)(iVar14 + 0x38) + 8;
        iVar14 = *(int *)(*(int *)(iVar12 + 0x14) + 0x34);
        iVar12 = *(int *)(*(int *)(iVar12 + 0x14) + 0x38);
        if (iVar14 != iVar12) {
          do {
            if (*(int *)(iVar14 + 4) == param_2[1]) break;
            iVar14 = iVar14 + 8;
          } while (iVar14 != iVar12);
        }
        FUN_0042ba80();
      }
    }
  } while( true );
}

