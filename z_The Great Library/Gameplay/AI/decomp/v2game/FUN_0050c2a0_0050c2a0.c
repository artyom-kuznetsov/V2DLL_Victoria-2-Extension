// FUN_0050c2a0 @ 0050c2a0 body=[[0050c2a0, 0050c6c1]]


void FUN_0050c2a0(int param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  undefined8 uVar13;
  longlong lVar14;
  int local_10;
  
  iVar5 = param_1;
  if (0 < (int)(*(int *)(param_1 + 0x9dc) - *(int *)(param_1 + 0x9d8) & 0xfffffffcU)) {
    puVar6 = (uint *)FUN_0096afd0(param_1 + 0x12e8,param_1 + 0xa48);
    uVar2 = *puVar6;
    puVar1 = (uint *)(iVar5 + 2000);
    uVar8 = *puVar1;
    *puVar1 = *puVar1 + uVar2;
    iVar10 = DAT_012586dc;
    *(int *)(iVar5 + 0x7d4) = *(int *)(iVar5 + 0x7d4) + puVar6[1] + (uint)CARRY4(uVar8,uVar2);
    uVar8 = *(uint *)(*(int *)(iVar10 + 0x20) + 0x28);
    uVar13 = __alldiv(uVar8 << 0x1e,((int)uVar8 >> 0x1f) << 0x1e | uVar8 >> 2,0x1f40000,0);
    lVar14 = __allmul(uVar13,0x18000,0);
    lVar14 = lVar14 >> 0xf;
    iVar10 = (int)((ulonglong)lVar14 >> 0x20);
    if ((iVar10 <= *(int *)(iVar5 + 0x7d4)) &&
       ((iVar10 < *(int *)(iVar5 + 0x7d4) || ((uint)lVar14 < *(uint *)(iVar5 + 2000))))) {
      *(longlong *)(iVar5 + 2000) = lVar14;
    }
  }
  for (iVar10 = *(int *)(iVar5 + 0xe44); iVar10 != 0; iVar10 = *(int *)(iVar10 + 8)) {
    FUN_004d0f60();
  }
  FUN_00979430(iVar5 + 0x8b0);
  iVar10 = *(int *)(*(int *)(iVar5 + 0xa60) + 0x250);
  if (0 < iVar10) {
    iVar10 = __alldiv((longlong)(*(int *)(*(int *)(iVar5 + 0xbcc) + 0x288) + 1000) *
                      (longlong)iVar10,1000,0);
  }
  *(int *)(iVar5 + 0xea0) = *(int *)(iVar5 + 0xea0) + iVar10;
  if (*(int *)(iVar5 + 0xea0) < 0) {
    *(undefined4 *)(iVar5 + 0xea0) = 0;
  }
  iVar10 = *(int *)(*(int *)(iVar5 + 0xa60) + 0x238) + *(int *)(iVar5 + 0x1430);
  if (iVar10 < 0) {
    iVar10 = 0;
  }
  *(int *)(iVar5 + 0x1430) = iVar10;
  FUN_0051b430();
  piVar9 = DAT_012587e4;
  FUN_005068f0(iVar5);
  iVar10 = *(int *)(iVar5 + 0x7b4);
  while (iVar10 != 0) {
    iVar10 = *(int *)(iVar10 + 8);
    FUN_005c92a0(&param_1);
  }
  if ((*(char *)(DAT_012588e8 + 0xd1c) != '\0') &&
     (0 < (int)(*(int *)(iVar5 + 0x9dc) - *(int *)(iVar5 + 0x9d8) & 0xfffffffcU))) {
    FUN_00501e10(0,0);
  }
  FUN_0050ea30(iVar5);
  FUN_0051c890(iVar5);
  if (((*(char *)(iVar5 + 0x1c) != 'R') || (*(char *)(iVar5 + 0x1d) != 'E')) ||
     (*(char *)(iVar5 + 0x1e) != 'B')) {
    piVar12 = (int *)(iVar5 + 0x680);
    *piVar12 = *piVar12 + *(int *)(*(int *)(iVar5 + 0xa60) + 0x20);
    if (-1 < *piVar12) {
      iVar10 = *(int *)(*(int *)(iVar5 + 0xa60) + 0x28);
      if (iVar10 < *(int *)(iVar5 + 0x680)) {
        *(int *)(iVar5 + 0x680) = iVar10;
      }
      goto LAB_0050c479;
    }
  }
  *(undefined4 *)(iVar5 + 0x680) = 0;
LAB_0050c479:
  param_1 = 0;
  piVar12 = DAT_012587e4;
  if (0 < *piVar9) {
    do {
      iVar10 = *(int *)(piVar9[1] + param_1 * 4);
      iVar3 = *(int *)(iVar10 + 0x20);
      iVar4 = *(int *)(piVar12[1] + *(int *)(iVar10 + 0x20) * 4);
      if (0 < (int)(*(int *)(iVar4 + 0x9dc) - *(int *)(iVar4 + 0x9d8) & 0xfffffffcU)) {
        FUN_005183f0(*(undefined4 *)(iVar10 + 0x1c),*(undefined4 *)(iVar10 + 0x20));
        if (local_10 + 0x189373U < 0x39580e) {
          iVar10 = (local_10 * 1000) / 2000;
        }
        else {
          uVar13 = __allmul(local_10,local_10 >> 0x1f,1000,0);
          iVar10 = __alldiv(uVar13,2000,0);
        }
        iVar4 = *(int *)(*(int *)(iVar5 + 0xbe8) + iVar3 * 4);
        iVar10 = iVar10 + *(int *)(iVar4 + 0x3c);
        *(undefined1 *)(iVar4 + 0x71) = 1;
        iVar11 = iVar10;
        if (DAT_0131b1e8 < iVar10) {
          iVar11 = DAT_0131b1e8;
        }
        if (iVar11 < DAT_0131b2c8) {
          iVar11 = DAT_0131b2c8;
        }
        *(int *)(iVar4 + 0x3c) = iVar11;
        piVar12 = DAT_012587e4;
        iVar3 = *(int *)(*(int *)(*(int *)(DAT_012587e4[1] + iVar3 * 4) + 0xbe8) +
                        *(int *)(iVar5 + 0x20) * 4);
        *(undefined1 *)(iVar3 + 0x71) = 1;
        if (DAT_0131b1e8 < iVar10) {
          iVar10 = DAT_0131b1e8;
        }
        if (iVar10 < DAT_0131b2c8) {
          iVar10 = DAT_0131b2c8;
        }
        *(int *)(iVar3 + 0x3c) = iVar10;
      }
      param_1 = param_1 + 1;
    } while (param_1 < *piVar9);
  }
  puVar7 = (undefined4 *)FUN_00969ed0(iVar5 + 0x12e8);
  uVar13 = __allmul(*puVar7,puVar7[1],0x1f40000,0);
  uVar8 = (uint)uVar13 >> 0x1e | (int)((ulonglong)uVar13 >> 0x20) << 2;
  uVar13 = __allmul(uVar8,(int)uVar8 >> 0x1f,1000,0);
  iVar10 = __alldiv(uVar13,45000,0);
  iVar10 = iVar10 + *(int *)(iVar5 + 0x1a8);
  *(int *)(iVar5 + 0x1a8) = iVar10;
  if (iVar10 < 1000) {
    *(undefined4 *)(iVar5 + 0x1a8) = 1000;
  }
  if (100000 < *(int *)(iVar5 + 0x1a8)) {
    *(undefined4 *)(iVar5 + 0x1a8) = 100000;
  }
  FUN_0051c040(iVar5);
  iVar10 = __alldiv((longlong)*(int *)(*(int *)(DAT_012586dc + 0x40) + 100) *
                    (longlong)
                    (*(int *)(*(int *)(iVar5 + 0xbcc) + 0x298) +
                    *(int *)(*(int *)(iVar5 + 0xa60) + 0x310) + 1000),1000,0);
  *(int *)(iVar5 + 0x65c) = *(int *)(iVar5 + 0x65c) + iVar10;
  if (*(int *)(iVar5 + 0x65c) < 0) {
    *(undefined4 *)(iVar5 + 0x65c) = 0;
  }
  if (9000 < *(int *)(iVar5 + 0x65c)) {
    *(undefined4 *)(iVar5 + 0x65c) = 9000;
  }
  iVar10 = *(int *)(iVar5 + 0x15a0);
  piVar9 = (int *)FUN_00540ee0(iVar5,&param_1);
  iVar10 = *piVar9 + iVar10;
  *(int *)(iVar5 + 0x15a0) = iVar10;
  if (iVar10 < 0) {
    *(undefined4 *)(iVar5 + 0x15a0) = 0;
    return;
  }
  iVar3 = *(int *)(*(int *)(DAT_012586dc + 0x40) + 0xc4);
  if (iVar3 < iVar10) {
    *(int *)(iVar5 + 0x15a0) = iVar3;
  }
  return;
}

