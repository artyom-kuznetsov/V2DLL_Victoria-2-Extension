// FUN_00504c10 @ 00504c10 body=[[00504c10, 00504c9c] [00504ca0, 00504e79] [00504e80, 00504fff]]


void FUN_00504c10(int param_1,uint *param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int local_1c;
  int local_10;
  int local_c [2];
  
  iVar7 = *(int *)(DAT_012586dc + 0x60);
  iVar4 = *(int *)(iVar7 + 0x94) / 1000;
  iVar5 = *(int *)(iVar7 + 0x98) / 1000;
  local_10 = param_3 / (*(int *)(iVar7 + 0x90) / 1000);
  if (local_10 < iVar4) {
    local_10 = iVar4;
  }
  if (iVar5 < local_10) {
    local_10 = iVar5;
  }
  iVar4 = FUN_0050e450();
  iVar7 = param_2[1] - *param_2;
joined_r0x00504c95:
  if (local_10 <= iVar7 >> 2) {
    return;
  }
  piVar1 = *(int **)(param_1 + 0x9d8);
  local_1c = 0;
  local_c[0] = 0;
  piVar8 = piVar1;
LAB_00504cb9:
  do {
    if ((piVar8 < piVar1) || (*(int **)(param_1 + 0x9dc) <= piVar8)) goto LAB_00504f0e;
    iVar7 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *piVar8 * 4);
    piVar8 = piVar8 + 1;
  } while (((((*(int *)(iVar7 + 0x134) != *(int *)(param_1 + 0x20)) ||
             (*(int *)(iVar7 + 0xe8) != iVar4)) || (*(int *)(iVar7 + 300) == 0)) ||
           (*(int *)(iVar7 + 0x158) == 0)) ||
          ((*(int *)(*(int *)(*(int *)(iVar7 + 0x118) + DAT_01258720 * 4) + 0x20) < 1 &&
           (0 < (int)(param_2[1] - *param_2 & 0xfffffffc)))));
  piVar6 = (int *)*param_2;
  piVar2 = (int *)param_2[1];
  iVar7 = *(int *)(iVar7 + 0x58);
  piVar9 = piVar6;
  if (piVar6 != piVar2) {
    do {
      if (*piVar9 == iVar7) break;
      piVar9 = piVar9 + 1;
    } while (piVar9 != piVar2);
    if (piVar9 != piVar2) goto LAB_00504cb9;
  }
  param_3 = 0;
  if (((((int)piVar2 - (int)piVar6 & 0xfffffffcU) != 0) || (iVar4 == 0)) ||
     ((*(char *)(iVar4 + 0x38) != '\0' ||
      (iVar5 = FUN_0048e120(), *(int *)(iVar5 + 4) != *(int *)(param_1 + 0x20))))) {
LAB_00504df2:
    if (((int *)*param_2 <= piVar6) && (piVar6 < (int *)param_2[1])) goto code_r0x00504dfc;
    piVar6 = piVar1;
    while ((*(int **)(param_1 + 0x9d8) <= piVar6 && (piVar6 < *(int **)(param_1 + 0x9dc)))) {
      iVar5 = *piVar6;
      piVar6 = piVar6 + 1;
      iVar11 = *(int *)(*(int *)(DAT_0125870c + 0x2aa4) + iVar7 * 4);
      iVar5 = *(int *)(*(int *)(DAT_0125870c + 0x2aa4) + iVar5 * 4);
      uVar12 = *(int *)(iVar11 + 0x34) - *(int *)(iVar5 + 0x34);
      iVar11 = *(int *)(iVar11 + 0x38) - *(int *)(iVar5 + 0x38);
      iVar5 = (uVar12 ^ (int)uVar12 >> 0x1f) - ((int)uVar12 >> 0x1f);
      if (*(int *)(DAT_0125870c + 0x2abc) / 2 < iVar5) {
        uVar12 = *(int *)(DAT_0125870c + 0x2abc) - iVar5;
      }
      iVar5 = iVar11 * iVar11 + uVar12 * uVar12;
      iVar5 = (int)(iVar5 + (iVar5 >> 0x1f & 0xfU)) >> 4;
      if (iVar5 < 400) {
        param_3 = param_3 + (400 - iVar5);
      }
    }
    goto LAB_00504da0;
  }
  if (*(int *)(param_1 + 0xbe4) == iVar7) {
    param_3 = 250000;
  }
  else {
    cVar3 = FUN_004c3e90(*(int *)(param_1 + 0xbe4));
    if (cVar3 == '\0') {
      param_3 = FUN_004a0f40(DAT_0125870c);
      param_3 = 0xf424 - param_3;
    }
    else {
      param_3 = 0xf424;
    }
  }
LAB_00504da0:
  if (local_1c < param_3) {
    local_1c = param_3;
    local_c[0] = iVar7;
  }
  goto LAB_00504cb9;
LAB_00504f0e:
  if (local_c[0] == 0) {
    return;
  }
  piVar1 = (int *)param_2[1];
  if ((local_c < piVar1) && (piVar8 = (int *)*param_2, piVar8 <= local_c)) {
    if (piVar1 == (int *)param_2[2]) {
      uVar12 = (int)piVar1 - (int)piVar8 >> 2;
      if (0x3ffffffe < uVar12) {
LAB_00504ff6:
                    /* WARNING: Subroutine does not return */
        FUN_00aad3ad("vector<T> too long");
      }
      uVar12 = uVar12 + 1;
      uVar10 = (int)param_2[2] - (int)piVar8 >> 2;
      if (uVar10 < uVar12) {
        if (0x3fffffff - (uVar10 >> 1) < uVar10) {
          uVar10 = 0;
        }
        else {
          uVar10 = uVar10 + (uVar10 >> 1);
        }
        if (uVar10 < uVar12) {
          uVar10 = uVar12;
        }
        FUN_004bf300(uVar10);
      }
    }
    if ((undefined4 *)param_2[1] != (undefined4 *)0x0) {
      *(undefined4 *)param_2[1] = *(undefined4 *)(*param_2 + ((int)local_c - (int)piVar8 >> 2) * 4);
    }
  }
  else {
    if (piVar1 == (int *)param_2[2]) {
      uVar12 = (int)((int)piVar1 - *param_2) >> 2;
      if (0x3ffffffe < uVar12) goto LAB_00504ff6;
      uVar12 = uVar12 + 1;
      uVar10 = (int)((int)param_2[2] - *param_2) >> 2;
      if (uVar10 < uVar12) {
        if (0x3fffffff - (uVar10 >> 1) < uVar10) {
          uVar10 = 0;
        }
        else {
          uVar10 = uVar10 + (uVar10 >> 1);
        }
        if (uVar10 < uVar12) {
          uVar10 = uVar12;
        }
        FUN_004bf300(uVar10);
      }
    }
    if ((int *)param_2[1] != (int *)0x0) {
      *(int *)param_2[1] = local_c[0];
    }
  }
  param_2[1] = param_2[1] + 4;
  iVar7 = param_2[1] - *param_2;
  goto joined_r0x00504c95;
code_r0x00504dfc:
  iVar5 = *piVar6;
  piVar6 = piVar6 + 1;
  iVar11 = *(int *)(*(int *)(DAT_0125870c + 0x2aa4) + iVar7 * 4);
  iVar5 = *(int *)(*(int *)(DAT_0125870c + 0x2aa4) + iVar5 * 4);
  uVar12 = *(int *)(iVar11 + 0x34) - *(int *)(iVar5 + 0x34);
  iVar11 = *(int *)(iVar11 + 0x38) - *(int *)(iVar5 + 0x38);
  iVar5 = (uVar12 ^ (int)uVar12 >> 0x1f) - ((int)uVar12 >> 0x1f);
  if (*(int *)(DAT_0125870c + 0x2abc) / 2 < iVar5) {
    uVar12 = *(int *)(DAT_0125870c + 0x2abc) - iVar5;
  }
  iVar5 = iVar11 * iVar11 + uVar12 * uVar12;
  if ((int)(iVar5 + (iVar5 >> 0x1f & 0xfU)) >> 4 < 400) goto LAB_00504cb9;
  goto LAB_00504df2;
}

