// FUN_00425f80 @ 00425f80 body=[[00425f80, 004260db] [004260e0, 004264ac]]


int * FUN_00425f80(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  bool bVar7;
  int in_EAX;
  int iVar8;
  int iVar9;
  int iVar10;
  int in_ECX;
  int *piVar11;
  int *piVar12;
  int iVar13;
  undefined8 uVar14;
  int local_30;
  int local_14;
  
  iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 4) * 4);
  iVar10 = *(int *)(in_EAX + 4);
  iVar2 = *(int *)(*(int *)(DAT_012587e4 + 4) + iVar10 * 4);
  iVar3 = *(int *)(*(int *)(iVar1 + 0xbe8) + iVar10 * 4);
  iVar8 = *(int *)(iVar3 + 0x3c);
  if (iVar8 + 0x189373U < 0x39580e) {
    local_14 = (iVar8 * 1000) / 250000;
  }
  else {
    uVar14 = __allmul(iVar8,iVar8 >> 0x1f,1000,0);
    local_14 = __alldiv(uVar14,250000,0);
  }
  if (local_14 < 0) {
    local_14 = 0;
  }
  else if (1000 < local_14) {
    local_14 = 1000;
  }
  iVar8 = *(int *)(iVar2 + 0x9dc);
  iVar9 = *(int *)(iVar2 + 0x9d8);
  *param_1 = 0;
  if ((int)(iVar8 - iVar9 & 0xfffffffcU) < 1) {
    local_14 = 0;
  }
  FUN_00401000(0x47c35040);
  iVar8 = FUN_00b31c00();
  iVar9 = __alldiv((longlong)iVar8 * (longlong)local_14,1000,0);
  iVar8 = *(int *)(in_ECX + 4);
  *param_1 = iVar9;
  if (*(int *)(iVar2 + 0xcfc) == iVar8) {
    *param_1 = iVar9 + 1000000;
  }
  if (*(int *)(iVar2 + 0x142c) == iVar8) {
    *param_1 = *param_1 + 1000000;
  }
  if (*(int *)(iVar3 + 0x20) != 0) {
    *param_1 = *param_1 + 100000;
  }
  piVar12 = *(int **)(iVar2 + 0x9f8);
  bVar7 = false;
  if (piVar12 != (int *)0x0) {
    do {
      iVar9 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *piVar12 * 4);
      piVar12 = (int *)piVar12[2];
      if (*(int *)(iVar9 + 300) == iVar8) {
        *param_1 = *param_1 + -1000000;
        bVar7 = false;
        break;
      }
      if (!bVar7) {
        iVar9 = *(int *)(iVar9 + 0x5c);
        iVar6 = (*(int *)(iVar9 + 0xcc) - *(int *)(iVar9 + 200)) / 0x24;
        iVar13 = 0;
        if (0 < iVar6) {
          piVar11 = (int *)(*(int *)(iVar9 + 200) + 4);
          do {
            if (*(int *)(*(int *)(*(int *)(DAT_0125870c + 0x2238) + *piVar11 * 4) + 300) == iVar8) {
              bVar7 = true;
              break;
            }
            iVar13 = iVar13 + 1;
            piVar11 = piVar11 + 9;
          } while (iVar13 < iVar6);
        }
      }
    } while (piVar12 != (int *)0x0);
  }
  iVar9 = 0;
  local_30 = 0;
  iVar8 = *(int *)(*(int *)(DAT_012588e8 + 0xcf8) + 8);
  if (iVar8 != 0) {
    if (*(int *)(iVar8 + 0x18) == iVar10) {
      iVar9 = *(int *)(iVar8 + 0x20);
      iVar8 = FUN_00425ac0();
    }
    else {
      if (*(int *)(iVar8 + 0x20) != iVar10) goto LAB_004261e7;
      iVar9 = *(int *)(iVar8 + 0x18);
      iVar8 = FUN_00425a40();
    }
    local_30 = *(int *)(iVar8 + 4);
  }
LAB_004261e7:
  piVar12 = *(int **)(iVar1 + 0x3c0);
  piVar11 = piVar12;
  do {
    if (piVar11 == (int *)0x0) goto LAB_0042620d;
    iVar8 = *piVar11;
    piVar11 = (int *)piVar11[2];
  } while (*(int *)(iVar8 + 0xc) != iVar10);
  *param_1 = *param_1 + -40000;
LAB_0042620d:
  piVar11 = *(int **)(iVar1 + 0x3dc);
  piVar4 = piVar11;
  do {
    if (piVar4 == (int *)0x0) goto LAB_00426236;
    iVar8 = *piVar4;
    piVar4 = (int *)piVar4[2];
  } while (*(int *)(iVar8 + 0xc) != iVar10);
  *param_1 = *param_1 + -40000;
LAB_00426236:
  if (iVar9 != 0) {
    iVar10 = *(int *)(*(int *)(*(int *)(iVar1 + 0xbe8) + iVar9 * 4) + 0x3c);
    if (iVar10 + 0x189373U < 0x39580e) {
      iVar10 = (iVar10 * 1000) / 250000;
    }
    else {
      uVar14 = __allmul(iVar10,iVar10 >> 0x1f,1000,0);
      iVar10 = __alldiv(uVar14,250000,0);
    }
    FUN_00401000(0x47435080);
    iVar8 = FUN_00b31c00();
    iVar10 = __alldiv((longlong)iVar8 * (longlong)iVar10,1000,0);
    *param_1 = *param_1 - iVar10;
    if (*(int *)(iVar3 + 0x20) != 0) {
      *param_1 = *param_1 + -1000000;
    }
    piVar4 = piVar12;
    if ((*(int *)(iVar3 + 0x34) == 0) && (*(int *)(DAT_012588e8 + 0xb0c) < *(int *)(iVar3 + 0x6c)))
    {
      *param_1 = *param_1 + -1000000;
    }
    do {
      piVar5 = piVar11;
      if (piVar4 == (int *)0x0) goto joined_r0x00426312;
      iVar10 = *piVar4;
      piVar4 = (int *)piVar4[2];
    } while (*(int *)(iVar10 + 0xc) != iVar9);
    *param_1 = *param_1 + 20000;
joined_r0x00426312:
    do {
      if (piVar5 == (int *)0x0) goto LAB_0042632a;
      iVar10 = *piVar5;
      piVar5 = (int *)piVar5[2];
    } while (*(int *)(iVar10 + 0xc) != iVar9);
    *param_1 = *param_1 + 20000;
  }
LAB_0042632a:
  if (local_30 != 0) {
    iVar10 = *(int *)(*(int *)(*(int *)(iVar1 + 0xbe8) + local_30 * 4) + 0x3c);
    if (iVar10 + 0x189373U < 0x39580e) {
      iVar10 = (iVar10 * 1000) / 250000;
    }
    else {
      uVar14 = __allmul(iVar10,iVar10 >> 0x1f,1000,0);
      iVar10 = __alldiv(uVar14,250000,0);
    }
    FUN_00401000(0x47435080);
    iVar8 = FUN_00b31c00();
    iVar10 = __alldiv((longlong)iVar8 * (longlong)iVar10,1000,0);
    *param_1 = *param_1 - iVar10;
    if (*(int *)(iVar3 + 0x20) != 0) {
      *param_1 = *param_1 + -1000000;
    }
    if ((*(int *)(iVar3 + 0x34) == 0) && (*(int *)(DAT_012588e8 + 0xb0c) < *(int *)(iVar3 + 0x6c)))
    {
      *param_1 = *param_1 + -1000000;
    }
    do {
      if (piVar12 == (int *)0x0) goto joined_r0x0042640e;
      iVar10 = *piVar12;
      piVar12 = (int *)piVar12[2];
    } while (*(int *)(iVar10 + 0xc) != local_30);
    *param_1 = *param_1 + 20000;
joined_r0x0042640e:
    do {
      if (piVar11 == (int *)0x0) goto LAB_00426426;
      iVar10 = *piVar11;
      piVar11 = (int *)piVar11[2];
    } while (*(int *)(iVar10 + 0xc) != local_30);
    *param_1 = *param_1 + 20000;
  }
LAB_00426426:
  iVar10 = *(int *)(iVar2 + 0xe64);
  for (piVar12 = *(int **)(iVar1 + 0xe54); piVar12 != (int *)0x0; piVar12 = (int *)piVar12[2]) {
    if (*piVar12 == iVar10) {
      *param_1 = *param_1 + 20000;
      break;
    }
  }
  piVar12 = *(int **)(iVar2 + 0xe54);
  iVar1 = *(int *)(iVar1 + 0xe64);
  do {
    if (piVar12 == (int *)0x0) {
LAB_00426476:
      if (iVar1 == iVar10) {
        *param_1 = *param_1 + 40000;
      }
      if (bVar7) {
        if (local_14 < 1) {
          if (local_14 < 0) {
            *param_1 = *param_1 + -30000;
            return param_1;
          }
        }
        else {
          *param_1 = *param_1 + 30000;
        }
      }
      return param_1;
    }
    if (*piVar12 == iVar1) {
      *param_1 = *param_1 + 20000;
      goto LAB_00426476;
    }
    piVar12 = (int *)piVar12[2];
  } while( true );
}

