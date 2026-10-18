// FUN_0098d3b0 @ 0098d3b0 body=[[0098d3b0, 0098d48a] [0098d490, 0098d843] [0098d847, 0098d859]]


/* WARNING: Removing unreachable block (ram,0x0098d7d1) */
/* WARNING: Removing unreachable block (ram,0x0098d7eb) */

void FUN_0098d3b0(int *param_1,float *param_2,int param_3,int param_4)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  float *pfVar12;
  float *pfVar13;
  int *piVar14;
  int iVar15;
  float fVar16;
  int local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3bf88;
  local_10 = ExceptionList;
  local_8 = 0;
  fVar16 = 3.4028235e+38;
  iVar9 = param_4 - param_3 >> 2;
  piVar14 = (int *)0x0;
  iVar15 = -1;
  local_1c = 0;
  ExceptionList = &local_10;
  if (0 < iVar9) {
    do {
      piVar3 = *(int **)(param_3 + local_1c * 4);
      fVar5 = (float)piVar3[0x21] - (float)param_1[0x21];
      fVar6 = (float)piVar3[0x23] - (float)param_1[0x23];
      if (piVar3 != param_1) {
        iVar4 = piVar3[0x52];
        iVar11 = piVar3[0x53] - iVar4 >> 3;
        iVar10 = 0;
        if (3 < iVar11) {
          fVar1 = *param_2;
          fVar2 = param_2[1];
          pfVar12 = (float *)(iVar4 + 8);
          pfVar13 = (float *)(iVar4 + 0x14);
          do {
            fVar7 = (pfVar12[-2] + fVar5) - fVar1;
            fVar8 = (pfVar12[-1] + fVar6) - fVar2;
            fVar7 = fVar7 * fVar7 + fVar8 * fVar8;
            if (fVar7 < fVar16) {
              piVar14 = piVar3;
              iVar15 = iVar10;
              fVar16 = fVar7;
            }
            fVar7 = (*pfVar12 + fVar5) - fVar1;
            fVar8 = (pfVar13[-2] + fVar6) - fVar2;
            fVar7 = fVar7 * fVar7 + fVar8 * fVar8;
            if (fVar7 < fVar16) {
              iVar15 = iVar10 + 1;
              piVar14 = piVar3;
              fVar16 = fVar7;
            }
            fVar7 = (pfVar12[2] + fVar5) - fVar1;
            fVar8 = (fVar6 + *pfVar13) - fVar2;
            fVar7 = fVar7 * fVar7 + fVar8 * fVar8;
            if (fVar7 < fVar16) {
              iVar15 = iVar10 + 2;
              piVar14 = piVar3;
              fVar16 = fVar7;
            }
            fVar7 = (pfVar12[4] + fVar5) - fVar1;
            fVar8 = (pfVar13[2] + fVar6) - fVar2;
            fVar7 = fVar7 * fVar7 + fVar8 * fVar8;
            if (fVar7 < fVar16) {
              iVar15 = iVar10 + 3;
              piVar14 = piVar3;
              fVar16 = fVar7;
            }
            pfVar13 = pfVar13 + 8;
            iVar10 = iVar10 + 4;
            pfVar12 = pfVar12 + 8;
          } while (iVar10 < iVar11 + -3);
        }
        if (iVar10 < iVar11) {
          pfVar12 = (float *)(piVar3[0x52] + iVar10 * 8);
          do {
            fVar1 = (*pfVar12 + fVar5) - *param_2;
            fVar2 = (pfVar12[1] + fVar6) - param_2[1];
            fVar1 = fVar1 * fVar1 + fVar2 * fVar2;
            if (fVar1 < fVar16) {
              piVar14 = piVar3;
              iVar15 = iVar10;
              fVar16 = fVar1;
            }
            iVar10 = iVar10 + 1;
            pfVar12 = pfVar12 + 2;
          } while (iVar10 < iVar11);
        }
      }
      local_1c = local_1c + 1;
    } while (local_1c < iVar9);
    ExceptionList = &local_10;
    if (piVar14 != (int *)0x0) {
      iVar9 = piVar14[0x52];
      iVar4 = param_1[0x52];
      ExceptionList = &local_10;
      if (iVar4 != param_1[0x53]) {
        ExceptionList = &local_10;
        param_1[0x53] = iVar4;
      }
      FUN_0098f050(param_1[0x52],iVar9,iVar9 + iVar15 * 8,param_1);
      param_1[0x57] = iVar15 + -1;
      param_1[0x58] = piVar14[0x53] - piVar14[0x52] >> 3;
      (**(code **)(*param_1 + 0xa4))(piVar14 + 0x15);
    }
  }
  if (param_3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_3);
  }
  ExceptionList = local_10;
  return;
}

