// FUN_007e7130 @ 007e7130 body=[[007e7130, 007e72eb]]


void FUN_007e7130(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4,int *param_5,
                 uint *param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint *puVar13;
  int iVar14;
  int iVar15;
  
  iVar1 = param_4[1];
  iVar2 = *param_4;
  iVar3 = param_5[1];
  iVar4 = *param_5;
  iVar14 = param_1[1] - *param_1 >> 3;
  iVar15 = 0;
  puVar13 = param_6;
  if (0 < iVar14) {
    do {
      iVar12 = *param_1;
      iVar10 = *(int *)(iVar12 + iVar15 * 8);
      iVar5 = *(int *)(iVar12 + 4 + iVar15 * 8);
      iVar15 = iVar15 + 1;
      if (iVar15 < iVar14) {
        piVar8 = (int *)(iVar12 + iVar15 * 8);
        iVar12 = iVar10;
        do {
          iVar12 = iVar12 + 1;
          if ((iVar12 != *piVar8) || (puVar13 = param_6, iVar5 != piVar8[1])) break;
          iVar15 = iVar15 + 1;
          iVar10 = iVar10 + 1;
          piVar8 = piVar8 + 2;
        } while (iVar15 < iVar14);
      }
      FUN_007e6d50(iVar10,iVar5,param_3,&stack0x0000001c,param_4,param_5);
    } while (iVar15 < iVar14);
  }
  FUN_007e6ef0(param_4,param_5,iVar1 - iVar2 >> 3,iVar3 - iVar4 >> 1);
  piVar8 = param_4;
  if ((int)(puVar13[1] - *puVar13 & 0xfffffffc) < (int)(param_4[1] - *param_4 >> 1 & 0xfffffffcU)) {
    do {
      puVar6 = (undefined4 *)puVar13[1];
      if ((&param_2 < puVar6) && (puVar7 = (undefined4 *)*puVar13, puVar7 <= &param_2)) {
        if (puVar6 == (undefined4 *)puVar13[2]) {
          uVar9 = (int)puVar6 - (int)puVar7 >> 2;
          if (0x3ffffffe < uVar9) {
LAB_007e72e2:
                    /* WARNING: Subroutine does not return */
            FUN_00aad3ad("vector<T> too long");
          }
          uVar9 = uVar9 + 1;
          uVar11 = (int)puVar13[2] - (int)puVar7 >> 2;
          if (uVar11 < uVar9) {
            if (0x3fffffff - (uVar11 >> 1) < uVar11) {
              uVar11 = 0;
            }
            else {
              uVar11 = uVar11 + (uVar11 >> 1);
            }
            if (uVar11 < uVar9) {
              uVar11 = uVar9;
            }
            FUN_004bf300(uVar11);
            piVar8 = param_4;
          }
        }
        if ((undefined4 *)puVar13[1] != (undefined4 *)0x0) {
          *(undefined4 *)puVar13[1] =
               *(undefined4 *)(*puVar13 + ((int)&param_2 - (int)puVar7 >> 2) * 4);
        }
      }
      else {
        if (puVar6 == (undefined4 *)puVar13[2]) {
          uVar9 = (int)((int)puVar6 - *puVar13) >> 2;
          if (0x3ffffffe < uVar9) goto LAB_007e72e2;
          uVar9 = uVar9 + 1;
          uVar11 = (int)((int)puVar13[2] - *puVar13) >> 2;
          if (uVar11 < uVar9) {
            if (0x3fffffff - (uVar11 >> 1) < uVar11) {
              uVar11 = 0;
            }
            else {
              uVar11 = uVar11 + (uVar11 >> 1);
            }
            if (uVar11 < uVar9) {
              uVar11 = uVar9;
            }
            FUN_004bf300(uVar11);
            piVar8 = param_4;
          }
        }
        if ((undefined4 *)puVar13[1] != (undefined4 *)0x0) {
          *(undefined4 *)puVar13[1] = param_2;
        }
      }
      puVar13[1] = puVar13[1] + 4;
    } while ((int)(puVar13[1] - *puVar13 & 0xfffffffc) <
             (int)(piVar8[1] - *piVar8 >> 1 & 0xfffffffcU));
  }
  return;
}

