// FUN_004b1a10 @ 004b1a10 body=[[004b1a10, 004b1c3d] [004b1c57, 004b1ef6] [004b1efa, 004b1fb6]]


void FUN_004b1a10(void)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  int iVar10;
  undefined4 *puVar11;
  int *piVar12;
  int in_ECX;
  int *_Dst;
  int iVar13;
  bool bVar14;
  longlong lVar15;
  int local_38;
  int *local_34;
  undefined4 *local_30;
  int iStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int *local_20;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00ba2028;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  FUN_004b8720(in_ECX);
  FUN_004b8870(in_ECX);
  if ((*(int *)(in_ECX + 0x110) == 0) &&
     (*(int *)(in_ECX + 0x114) = *(int *)(in_ECX + 0x114) + 10000, 100000 < *(int *)(in_ECX + 0x114)
     )) {
    *(undefined4 *)(in_ECX + 0x114) = 100000;
  }
  local_20 = *(int **)(in_ECX + 0x130);
  iVar13 = *(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x134) * 4) +
                            0xbcc) + 0x30);
  FUN_00401000(0x42c90000);
  iVar10 = FUN_00b31c00();
  local_30 = (undefined4 *)__alldiv((longlong)iVar10 * (longlong)(iVar13 + 1000),1000,0);
  iVar13 = 0;
  bVar14 = false;
  if (0 < (int)(*(int *)(in_ECX + 0x11c) - *(int *)(in_ECX + 0x118) & 0xfffffffcU)) {
    do {
      iVar10 = *(int *)(*(int *)(in_ECX + 0x118) + iVar13 * 4);
      iVar3 = *(int *)(iVar10 + 0x24);
      *(int *)(iVar10 + 0x24) = *(int *)(iVar10 + 0x24) + (int)local_30;
      if (*(int *)(iVar10 + 0x20) < *(int *)(iVar10 + 0x24)) {
        *(int *)(iVar10 + 0x24) = *(int *)(iVar10 + 0x20);
      }
      iVar10 = *(int *)(*(int *)(*(int *)(in_ECX + 0x118) + iVar13 * 4) + 0x24) / 1000;
      iVar3 = iVar3 / 1000;
      if (iVar10 != iVar3 && -1 < iVar10 - iVar3) {
        bVar14 = true;
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 < *(int *)(in_ECX + 0x11c) - *(int *)(in_ECX + 0x118) >> 2);
    if (bVar14) {
      FUN_004b2610();
    }
  }
  local_38 = *(int *)(DAT_012588e8 + 0xb0c);
  local_34 = *(int **)(in_ECX + 0xd8);
  bVar8 = false;
  bVar14 = false;
  local_30 = (undefined4 *)0x0;
  puVar5 = local_30;
  local_30 = (undefined4 *)0x0;
  if (local_34 != (int *)0x0) {
    do {
      piVar4 = (int *)*local_34;
      if (local_38 < piVar4[0xf]) {
        local_34 = (int *)local_34[2];
        cVar9 = (**(code **)(*piVar4 + 0x34))();
        if (cVar9 == '\0') {
          (**(code **)(*piVar4 + 0x38))(&local_38,0);
        }
        else {
          cVar9 = *(char *)(piVar4[0x22] + 0x3a);
          bVar7 = bVar8;
          if (cVar9 != '\0') {
            bVar7 = bVar14;
          }
          if (bVar7) {
            piVar4[0xe] = piVar4[0xe] + 0x18;
            piVar4[0xf] = piVar4[0xf] + 0x18;
          }
          else {
            (**(code **)(*piVar4 + 0x38))(&local_38,0);
            if (cVar9 == '\0') {
              bVar8 = true;
            }
            else {
              bVar14 = true;
            }
          }
        }
      }
      else {
        local_34 = (int *)local_34[2];
        cVar9 = (**(code **)(*piVar4 + 0x24))();
        if (cVar9 == '\x01') {
          for (puVar5 = *(undefined4 **)(in_ECX + 0xd8); puVar5 != (undefined4 *)0x0;
              puVar5 = (undefined4 *)puVar5[2]) {
            if ((int *)*puVar5 == piVar4) {
              if (puVar5 != (undefined4 *)0x0) {
                if (*(char *)(in_ECX + 0xe4) == '\0') {
                  iVar13 = puVar5[1];
                  iVar10 = puVar5[2];
                  if (iVar13 != 0) {
                    *(int *)(iVar13 + 8) = iVar10;
                  }
                  if (iVar10 != 0) {
                    *(int *)(iVar10 + 4) = iVar13;
                  }
                  if (puVar5 == *(undefined4 **)(in_ECX + 0xd8)) {
                    *(int *)(in_ECX + 0xd8) = iVar10;
                  }
                  if (puVar5 == *(undefined4 **)(in_ECX + 0xdc)) {
                    *(int *)(in_ECX + 0xdc) = iVar13;
                  }
                    /* WARNING: Subroutine does not return */
                  FUN_00aae91b(puVar5);
                }
                local_30 = (undefined4 *)((int)local_30 + 1);
                *(undefined1 *)(puVar5 + 3) = 1;
                (**(code **)*piVar4)(1);
              }
              break;
            }
          }
        }
      }
    } while (local_34 != (int *)0x0);
    puVar5 = local_30;
    if ((0 < (int)local_30) && (*(int *)(in_ECX + 300) == *(int *)(DAT_012588e8 + 0xb60))) {
      FUN_00679970();
      puVar5 = local_30;
    }
  }
  local_30 = puVar5;
  if (*(int *)(in_ECX + 300) != *(int *)(in_ECX + 0x134)) {
    local_20 = *(int **)(in_ECX + 0x128);
    iVar13 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 300) * 4);
    if ((*(int *)(in_ECX + 0x134) == *(int *)(iVar13 + 0x20)) ||
       (((*(int *)(*(int *)(*(int *)(iVar13 + 0xbe8) + *(int *)(in_ECX + 0x134) * 4) + 0x34) == 0 &&
         (((*(char *)(in_ECX + 0x130) != 'R' || (*(char *)(in_ECX + 0x131) != 'E')) ||
          (*(char *)(in_ECX + 0x132) != 'B')))) &&
        (((*(char *)(iVar13 + 0x1c) != 'R' || (*(char *)(iVar13 + 0x1d) != 'E')) ||
         (*(char *)(iVar13 + 0x1e) != 'B')))))) {
      FUN_004b5730(in_ECX,in_ECX + 0x128,&local_38,1);
    }
  }
  if ((*(int *)(in_ECX + 300) == 0) && (*(int *)(in_ECX + 0x134) != 0)) {
    uStack_28 = 0x2d2d2d;
    uStack_24 = 0;
    FUN_004b5730(in_ECX,&uStack_28,&local_38,0);
  }
  iVar13 = DAT_012586dc;
  uVar6 = *(undefined4 *)(*(int *)(DAT_012586dc + 0x50) + 0x54);
  *(undefined4 *)(in_ECX + 0x30) = *(undefined4 *)(*(int *)(DAT_012586dc + 0x50) + 0x50);
  *(undefined4 *)(in_ECX + 0x34) = uVar6;
  if (*(int *)(in_ECX + 300) != 0) {
    FUN_004b9bd0();
    iVar13 = *(int *)(iVar13 + 0x50);
    lVar15 = __allmul((int)local_30 - (int)*(undefined4 **)(iVar13 + 0x58),
                      (iStack_2c - *(int *)(iVar13 + 0x5c)) -
                      (uint)(local_30 < *(undefined4 **)(iVar13 + 0x58)),
                      *(undefined4 *)(iVar13 + 0x60),*(undefined4 *)(iVar13 + 100));
    lVar15 = lVar15 >> 0xf;
    if (((int)((ulonglong)lVar15 >> 0x20) < 1) && (lVar15 < 0)) {
      local_30 = (undefined4 *)0x0;
      iStack_2c = 0;
      lVar15 = 0;
    }
    puVar1 = (uint *)(in_ECX + 0x30);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 + (uint)lVar15;
    *(int *)(in_ECX + 0x34) =
         *(int *)(in_ECX + 0x34) + (int)((ulonglong)lVar15 >> 0x20) +
         (uint)CARRY4(uVar2,(uint)lVar15);
  }
  local_20 = *(int **)(in_ECX + 900);
  do {
    do {
      if ((local_20 < *(int **)(in_ECX + 900)) || (*(int **)(in_ECX + 0x388) <= local_20)) {
        ExceptionList = pvStack_14;
        return;
      }
      puVar5 = (undefined4 *)*local_20;
      puVar5[0x15] = puVar5[0x15] + -1;
      local_20 = local_20 + 1;
    } while (0 < (int)puVar5[0x15]);
    local_34 = (int *)puVar5[2];
    if (DAT_01319b80 == (undefined4 *)0x0) {
      puVar11 = (undefined4 *)FUN_00aae9af(0xa08);
      if (puVar11 == (undefined4 *)0x0) {
        puVar11 = (undefined4 *)0x0;
      }
      else {
        *puVar11 = 0;
        puVar11[1] = 0;
        puVar11[2] = 0;
        puVar11[4] = 0;
        puVar11[5] = 0;
        puVar11[6] = 0;
        puVar11[8] = 0;
        puVar11[9] = 0;
        puVar11[10] = 0;
        puVar11[0xc] = 0;
        puVar11[0xd] = 0;
        puVar11[0xe] = 0;
        puVar11[0x280] = 0;
        puVar11[0x281] = 1;
        __time64((__time64_t *)0x0);
        FUN_009b7670();
        puVar11[0x280] = 0;
      }
      uStack_c = 0;
      uStack_28 = 0;
      if ((puVar11 != DAT_01319b80) && (local_30 = DAT_01319b80, DAT_01319b80 != (undefined4 *)0x0))
      {
        FUN_008a6680(DAT_01319b80);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_30);
      }
      uStack_c = 0xffffffff;
      DAT_01319b80 = puVar11;
    }
    FUN_008a8120(DAT_01319b80,puVar5 + 3);
    piVar12 = *(int **)(in_ECX + 0x388);
    piVar4 = *(int **)(in_ECX + 900);
    for (_Dst = piVar4; (_Dst != piVar12 && ((undefined4 *)*_Dst != puVar5)); _Dst = _Dst + 1) {
    }
    if (((((int)piVar12 - (int)piVar4 & 0xfffffffcU) != 0) && (piVar4 <= _Dst)) && (_Dst < piVar12))
    {
      if (_Dst == piVar12 + -1) {
        bVar14 = piVar4 == piVar12;
      }
      else {
        FID_conflict__memcpy(_Dst,_Dst + 1,((int)piVar12 - (int)(_Dst + 1) >> 2) * 4);
        piVar12 = *(int **)(in_ECX + 0x388);
        if (((int)piVar12 - (int)*(int **)(in_ECX + 900) & 0xfffffffcU) == 0) goto LAB_004b1f96;
        bVar14 = *(int **)(in_ECX + 900) == piVar12;
      }
      if (!bVar14) {
        *(int **)(in_ECX + 0x388) = piVar12 + -1;
      }
    }
LAB_004b1f96:
    (**(code **)*puVar5)(1);
  } while( true );
}

