// FUN_004e6e50 @ 004e6e50 body=[[004e6e50, 004e6eaa] [004e6eb0, 004e701b] [004e7020, 004e7268] [004e7272, 004e7284]]


void FUN_004e6e50(int param_1,undefined4 *param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  void **ppvVar6;
  char cVar7;
  int *piVar8;
  undefined4 *puVar9;
  int *piVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  bool bVar15;
  int *local_30;
  int *local_2c;
  int local_28;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b52c38;
  local_10 = ExceptionList;
  if (param_4 == 0) {
    piVar14 = *(int **)(param_1 + 0x94);
    ExceptionList = &local_10;
    while (piVar14 != (int *)0x0) {
      piVar8 = (int *)piVar14[2];
      uVar3 = *(undefined4 *)(*(int *)(DAT_012588e8 + 0xacc) + *piVar14 * 4);
      cVar7 = FUN_004e6d70();
      piVar14 = piVar8;
      if (cVar7 != '\0') {
        iVar13 = param_2[1];
        puVar9 = (undefined4 *)FUN_00aae9af(0x10);
        if (puVar9 == (undefined4 *)0x0) {
          puVar9 = (undefined4 *)0x0;
        }
        else {
          *puVar9 = uVar3;
          puVar9[1] = iVar13;
          puVar9[2] = 0;
          *(undefined1 *)(puVar9 + 3) = 0;
        }
        iVar1 = param_2[2];
        param_2[1] = puVar9;
        param_2[2] = iVar1 + 1;
        if (iVar1 == 0) {
          *param_2 = puVar9;
        }
        else {
          *(undefined4 **)(iVar13 + 8) = puVar9;
        }
      }
    }
    if (*(int *)(*(int *)(param_1 + 0x30) + 0x100) == 4) {
      piVar14 = (int *)0x0;
      local_30 = (int *)0x0;
      local_2c = (int *)0x0;
      local_28 = 0;
      local_8 = 0;
      piVar8 = (int *)*param_2;
      while ((piVar8 != (int *)0x0 && (iVar13 = 0, param_2[2] + local_28 < 10))) {
        piVar11 = (int *)piVar8[2];
        iVar1 = *piVar8;
        iVar12 = *(int *)(iVar1 + 0x5c);
        piVar8 = piVar11;
        if (0 < (*(int *)(iVar12 + 0xcc) - *(int *)(iVar12 + 200)) / 0x24) {
          local_14 = 0;
          do {
            iVar12 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) +
                             *(int *)(*(int *)(iVar12 + 200) + 4 + local_14) * 4);
            piVar11 = local_30;
            piVar10 = local_2c;
            if ((*(char *)(*(int *)(iVar12 + 0x5c) + 0x2a) != '\0') && (*(int *)(iVar12 + 300) != 0)
               ) {
              for (piVar4 = (int *)*param_2; piVar5 = piVar14, piVar4 != (int *)0x0;
                  piVar4 = (int *)piVar4[2]) {
                if (*piVar4 == iVar12) goto LAB_004e71bc;
              }
              for (; piVar5 != (int *)0x0; piVar5 = (int *)piVar5[2]) {
                if (*piVar5 == iVar12) goto LAB_004e71bc;
              }
              cVar7 = FUN_004e6d70();
              if (cVar7 != '\0') {
                piVar10 = (int *)FUN_00aae9af(0x10);
                if (piVar10 == (int *)0x0) {
                  piVar10 = (int *)0x0;
                }
                else {
                  *piVar10 = iVar12;
                  piVar10[1] = (int)local_2c;
                  piVar10[2] = 0;
                  *(undefined1 *)(piVar10 + 3) = 0;
                }
                iVar12 = local_28 + 1;
                bVar15 = local_28 != 0;
                piVar14 = piVar10;
                piVar11 = piVar10;
                local_28 = iVar12;
                if (bVar15) {
                  local_2c[2] = (int)piVar10;
                  piVar14 = local_30;
                  piVar11 = local_30;
                }
              }
            }
LAB_004e71bc:
            local_2c = piVar10;
            local_30 = piVar11;
            iVar12 = *(int *)(iVar1 + 0x5c);
            local_14 = local_14 + 0x24;
            iVar13 = iVar13 + 1;
          } while (iVar13 < (*(int *)(iVar12 + 0xcc) - *(int *)(iVar12 + 200)) / 0x24);
        }
      }
      piVar8 = (int *)0x0;
      while (piVar14 != (int *)0x0) {
        iVar13 = param_2[1];
        piVar8 = (int *)piVar14[2];
        piVar11 = (int *)FUN_00aae9af(0x10);
        if (piVar11 == (int *)0x0) {
          piVar11 = (int *)0x0;
        }
        else {
          *piVar11 = *piVar14;
          piVar11[1] = iVar13;
          piVar11[2] = 0;
          *(undefined1 *)(piVar11 + 3) = 0;
        }
        iVar1 = param_2[2];
        param_2[1] = piVar11;
        param_2[2] = iVar1 + 1;
        piVar14 = piVar8;
        piVar8 = local_30;
        if (iVar1 == 0) {
          *param_2 = piVar11;
        }
        else {
          *(int **)(iVar13 + 8) = piVar11;
        }
      }
      if (piVar8 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(piVar8);
      }
    }
  }
  else {
    ppvVar6 = &local_10;
    if (*(int *)(param_1 + 0x48) != 0) {
      piVar14 = *(int **)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x48) * 4) +
                         0x9f8);
      ExceptionList = &local_10;
      while (piVar14 != (int *)0x0) {
        piVar8 = (int *)piVar14[2];
        iVar13 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *piVar14 * 4);
        piVar14 = piVar8;
        if ((*(int *)(iVar13 + 300) == param_4) &&
           (iVar13 != *(int *)(*(int *)(DAT_012588e8 + 0xacc) +
                              *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + param_4 * 4) + 0xbe4) *
                              4))) {
          iVar1 = param_2[1];
          piVar8 = (int *)FUN_00aae9af(0x10);
          if (piVar8 == (int *)0x0) {
            piVar8 = (int *)0x0;
          }
          else {
            *piVar8 = iVar13;
            piVar8[1] = iVar1;
            piVar8[2] = 0;
            *(undefined1 *)(piVar8 + 3) = 0;
          }
          iVar13 = param_2[2];
          param_2[1] = piVar8;
          param_2[2] = iVar13 + 1;
          if (iVar13 == 0) {
            *param_2 = piVar8;
          }
          else {
            *(int **)(iVar1 + 8) = piVar8;
          }
        }
      }
      ppvVar6 = ExceptionList;
      if (0 < (int)param_2[2]) {
        ExceptionList = local_10;
        return;
      }
    }
    ExceptionList = ppvVar6;
    iVar13 = *(int *)(*(int *)(DAT_012587e4 + 4) + param_4 * 4);
    piVar14 = *(int **)(iVar13 + 0x9d8);
    while ((*(int **)(iVar13 + 0x9d8) <= piVar14 && (piVar14 < *(int **)(iVar13 + 0x9dc)))) {
      iVar1 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *piVar14 * 4);
      iVar12 = *(int *)(*(int *)(param_1 + 0x34) + 0xe8);
      iVar2 = *(int *)(iVar1 + 0xe8);
      piVar14 = piVar14 + 1;
      if (iVar2 == iVar12) {
LAB_004e6faf:
        cVar7 = FUN_004e6d70();
        if (cVar7 != '\0') {
          iVar12 = param_2[1];
          piVar8 = (int *)FUN_00aae9af(0x10);
          if (piVar8 == (int *)0x0) {
            piVar8 = (int *)0x0;
          }
          else {
            *piVar8 = iVar1;
            piVar8[1] = iVar12;
            piVar8[2] = 0;
            *(undefined1 *)(piVar8 + 3) = 0;
          }
          iVar1 = param_2[2];
          param_2[1] = piVar8;
          param_2[2] = iVar1 + 1;
          if (iVar1 == 0) {
            *param_2 = piVar8;
          }
          else {
            *(int **)(iVar12 + 8) = piVar8;
          }
        }
      }
      else {
        for (puVar9 = *(undefined4 **)(iVar2 + 0x14); puVar9 != (undefined4 *)0x0;
            puVar9 = (undefined4 *)puVar9[2]) {
          if (*(int *)*puVar9 == iVar12) goto LAB_004e6faf;
        }
      }
    }
  }
  ExceptionList = local_10;
  return;
}

