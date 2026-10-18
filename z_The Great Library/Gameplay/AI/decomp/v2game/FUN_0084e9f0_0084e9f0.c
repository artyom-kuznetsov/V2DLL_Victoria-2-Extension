// FUN_0084e9f0 @ 0084e9f0 body=[[0084e9f0, 0084ef2c]]


void FUN_0084e9f0(int param_1,uint *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int *piVar15;
  float10 fVar16;
  undefined8 uVar17;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_10 [2];
  char local_7;
  char local_6;
  char local_5;
  
  iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x38) * 4);
  iVar7 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(iVar1 + 0xbe4) * 4);
  iVar6 = *(int *)(*(int *)(iVar7 + 0x9c) + 8) + 1000;
  iVar7 = *(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar7 + 300) * 4) + 0xbcc
                           ) + 0x2c);
  uVar17 = __allmul(iVar6,iVar6 >> 0x1f,2000,0);
  iVar6 = __alldiv(uVar17,1000,0);
  iVar7 = __alldiv((longlong)iVar6 * (longlong)(iVar7 + 1000),1000,0);
  FUN_004e9b90();
  local_28 = ((int)param_3 - iVar7 / 3000) * 3;
  if ((0 < local_28) && (piVar8 = *(int **)(iVar1 + 0xe44), piVar8 != (int *)0x0)) {
    iVar7 = 0;
    do {
      iVar6 = *piVar8;
      piVar8 = (int *)piVar8[2];
      iVar7 = iVar7 + *(int *)(iVar6 + 200);
    } while (piVar8 != (int *)0x0);
    if (iVar7 != 0) {
      do {
        piVar8 = *(int **)(iVar1 + 0x9d8);
        local_24 = -10000;
        local_1c = 0;
        local_10[0] = 0;
        piVar15 = piVar8;
LAB_0084eb1b:
        iVar6 = local_10[0];
        if ((piVar8 <= piVar15) && (piVar15 < *(int **)(iVar1 + 0x9dc))) {
          iVar6 = *(int *)(DAT_012588e8 + 0xacc);
          iVar2 = *(int *)(iVar6 + *piVar15 * 4);
          piVar9 = (int *)*param_2;
          piVar3 = (int *)param_2[1];
          piVar15 = piVar15 + 1;
          if (piVar9 != piVar3) goto LAB_0084eb60;
          goto LAB_0084eb6f;
        }
        if (local_10[0] == 0) {
          return;
        }
        piVar8 = (int *)param_2[1];
        if (local_10 < piVar8) {
          piVar15 = (int *)*param_2;
          if (local_10 < piVar15) goto LAB_0084eedd;
          if (piVar8 == (int *)param_2[2]) {
            FUN_007b94a0();
          }
          if ((undefined4 *)param_2[1] != (undefined4 *)0x0) {
            *(undefined4 *)param_2[1] =
                 *(undefined4 *)(*param_2 + ((int)local_10 - (int)piVar15 >> 2) * 4);
          }
        }
        else {
LAB_0084eedd:
          if (piVar8 == (int *)param_2[2]) {
            FUN_007b94a0();
          }
          if ((int *)param_2[1] != (int *)0x0) {
            *(int *)param_2[1] = iVar6;
          }
        }
        param_2[1] = param_2[1] + 4;
        local_1c = (int)((ulonglong)((longlong)local_1c * 0x55555555) >> 0x20) - local_1c;
        local_28 = ((local_1c >> 1) - (local_1c >> 0x1f)) * 3 + local_28;
      } while (0 < local_28);
    }
  }
  return;
LAB_0084eb60:
  do {
    if (*piVar9 == *(int *)(iVar2 + 0x58)) break;
    piVar9 = piVar9 + 1;
  } while (piVar9 != piVar3);
  if (piVar9 != piVar3) goto LAB_0084eb1b;
LAB_0084eb6f:
  local_10[1] = 0;
  if ((*(int *)(iVar2 + 300) != 0) && (*(int *)(iVar2 + 0x158) != 0)) {
    local_10[1] = 5;
  }
  iVar12 = *(int *)(DAT_012587e4 + 4);
  iVar13 = *(int *)(*(int *)(iVar2 + 0x9c) + 8) + 1000;
  iVar11 = *(int *)(*(int *)(*(int *)(iVar12 + *(int *)(iVar2 + 300) * 4) + 0xbcc) + 0x2c);
  uVar17 = __allmul(iVar13,iVar13 >> 0x1f,2000,0);
  iVar10 = __alldiv(uVar17,1000,0);
  iVar10 = __alldiv((longlong)iVar10 * (longlong)(iVar11 + 1000),1000,0);
  iVar11 = *(int *)(iVar2 + 0x5c);
  local_10[1] = local_10[1] + iVar10 / 1000;
  iVar10 = 0;
  local_6 = '\0';
  local_7 = '\0';
  bVar5 = true;
  local_5 = '\0';
  if (0 < (*(int *)(iVar11 + 0xcc) - *(int *)(iVar11 + 200)) / 0x24) {
    piVar9 = *(int **)(iVar11 + 200);
    do {
      if ((*piVar9 != 4) &&
         (iVar4 = *(int *)(iVar6 + piVar9[1] * 4), *(char *)(*(int *)(iVar4 + 0x5c) + 0x2a) != '\0')
         ) {
        iVar4 = *(int *)(iVar4 + 300);
        bVar5 = false;
        if (iVar4 == 0) {
          local_6 = '\x01';
        }
        else if (iVar4 == *(int *)(param_1 + 0x38)) {
          local_5 = '\x01';
        }
        else {
          local_7 = '\x01';
        }
      }
      piVar9 = piVar9 + 9;
      iVar10 = iVar10 + 1;
    } while (iVar10 < (*(int *)(iVar11 + 0xcc) - *(int *)(iVar11 + 200)) / 0x24);
    if (!bVar5) goto LAB_0084ecc6;
  }
  local_10[1] = local_10[1] + -1000;
LAB_0084ecc6:
  if (local_5 == '\0') {
    local_10[1] = local_10[1] + -200;
  }
  if (local_6 != '\0') {
    local_10[1] = local_10[1] + -0x28;
  }
  if (local_7 != '\0') {
    local_10[1] = local_10[1] + 0x23;
  }
  param_3 = (int *)*param_2;
  local_20 = (int)piVar3 - (int)param_3 >> 2;
  local_18 = 0x540be400;
  if (0 < local_20) {
    iVar6 = *(int *)(*(int *)(DAT_0125870c + 0x2aa4) + *(int *)(iVar2 + 0x58) * 4);
    do {
      iVar11 = *(int *)(*(int *)(DAT_0125870c + 0x2aa4) + *param_3 * 4);
      uVar14 = *(int *)(iVar6 + 0x34) - *(int *)(iVar11 + 0x34);
      iVar10 = *(int *)(iVar6 + 0x38) - *(int *)(iVar11 + 0x38);
      iVar11 = (uVar14 ^ (int)uVar14 >> 0x1f) - ((int)uVar14 >> 0x1f);
      if (*(int *)(DAT_0125870c + 0x2abc) / 2 < iVar11) {
        uVar14 = *(int *)(DAT_0125870c + 0x2abc) - iVar11;
      }
      iVar11 = iVar10 * iVar10 + uVar14 * uVar14;
      iVar11 = (int)(iVar11 + (iVar11 >> 0x1f & 0xfU)) >> 4;
      if (iVar11 < local_18) {
        local_18 = iVar11;
      }
      param_3 = param_3 + 1;
      local_20 = local_20 + -1;
    } while (local_20 != 0);
  }
  fVar16 = (float10)FUN_00401030((float)local_18);
  FUN_0040b340((float)(fVar16 - (float10)500.0));
  iVar6 = FUN_00b31c00();
  iVar6 = (int)(((float)*(int *)(*(int *)(iVar2 + 0x188) + 200) / (float)iVar7) * 200.0 +
               (float)local_10[1]) - iVar6;
  if (local_24 < iVar6) {
    local_10[0] = *(int *)(iVar2 + 0x58);
    iVar2 = *(int *)(*(int *)(*(int *)(iVar12 + *(int *)(iVar2 + 300) * 4) + 0xbcc) + 0x2c);
    uVar17 = __allmul(iVar13,iVar13 >> 0x1f,2000,0);
    iVar12 = __alldiv(uVar17,1000,0);
    local_1c = __alldiv((longlong)iVar12 * (longlong)(iVar2 + 1000),1000,0);
    local_1c = local_1c / 1000;
    local_24 = iVar6;
    if (0x24 < local_1c) {
      local_1c = 0x24;
    }
  }
  goto LAB_0084eb1b;
}

