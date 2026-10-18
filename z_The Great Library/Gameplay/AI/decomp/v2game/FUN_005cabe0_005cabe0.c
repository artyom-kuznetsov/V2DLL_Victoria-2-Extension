// FUN_005cabe0 @ 005cabe0 body=[[005cabe0, 005cadda] [005cadde, 005cae1e]]


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Type propagation algorithm not settling */

int * FUN_005cabe0(int param_1)

{
  code *pcVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  size_t asStack_30 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b45dce;
  local_10 = ExceptionList;
  piVar3 = (int *)0x0;
  if (0 < *(int *)(param_1 + 0x40)) {
    ExceptionList = &local_10;
    if (DAT_0125fdd8 == 0) {
      asStack_30[3] = 0x1c;
      asStack_30[2] = 0x5cac1a;
      ExceptionList = &local_10;
      iVar4 = FUN_00aae9af();
      local_8 = 0;
      if (iVar4 == 0) {
        asStack_30[3] = 0;
      }
      else {
        asStack_30[3] = 0x5cac32;
        asStack_30[3] = FUN_008b0060();
      }
      local_8 = 0xffffffff;
      asStack_30[2] = 0x5cac43;
      FUN_005c2810();
    }
    iVar9 = *(int *)(DAT_0125fdd8 + 0x10) - *(int *)(DAT_0125fdd8 + 0xc) >> 2;
    asStack_30[3] = 0x5cac5f;
    iVar4 = iVar9 * -4;
    asStack_30[3 - iVar9] = iVar9 * 4;
    asStack_30[2 - iVar9] = 0;
    asStack_30[1 - iVar9] = (size_t)(&stack0xffffffe0 + iVar4);
    asStack_30[-iVar9] = 0x5cac6a;
    _memset((void *)asStack_30[1 - iVar9],asStack_30[2 - iVar9],asStack_30[3 - iVar9]);
    piVar3 = *(int **)(param_1 + 0x38);
    while (piVar3 != (int *)0x0) {
      iVar5 = *piVar3;
      iVar8 = *(int *)(*(int *)(iVar5 + 0x38) + 0x24);
      piVar3 = (int *)piVar3[2];
      *(float *)(&stack0xffffffe0 + iVar8 * 4 + iVar4) =
           (float)*(int *)(*(int *)(iVar5 + 0x38) + 0xbc) / 1000.0 +
           *(float *)(&stack0xffffffe0 + iVar8 * 4 + iVar4);
    }
    fVar10 = 0.0;
    iVar5 = 0;
    param_1 = 0;
    iVar8 = 0;
    if (3 < iVar9) {
      iVar6 = 2;
      pfVar7 = (float *)(&stack0xffffffe8 + iVar4);
      do {
        if (fVar10 < pfVar7[-2]) {
          fVar10 = pfVar7[-2];
          param_1 = iVar5;
        }
        if (fVar10 < pfVar7[-1]) {
          param_1 = iVar6 + -1;
          fVar10 = pfVar7[-1];
        }
        if (fVar10 < *pfVar7) {
          fVar10 = *pfVar7;
          param_1 = iVar6;
        }
        if (fVar10 < pfVar7[1]) {
          param_1 = iVar6 + 1;
          fVar10 = pfVar7[1];
        }
        iVar5 = iVar5 + 4;
        pfVar7 = pfVar7 + 4;
        iVar6 = iVar6 + 4;
        iVar8 = param_1;
      } while (iVar5 < iVar9 + -3);
    }
    for (; iVar5 < iVar9; iVar5 = iVar5 + 1) {
      if (fVar10 < *(float *)(&stack0xffffffe0 + iVar5 * 4 + iVar4)) {
        iVar8 = iVar5;
        fVar10 = *(float *)(&stack0xffffffe0 + iVar5 * 4 + iVar4);
      }
    }
    if (DAT_0125fdd8 == 0) {
      asStack_30[3 - iVar9] = 0x1c;
      asStack_30[2 - iVar9] = 0x5cad94;
      iVar4 = FUN_00aae9af();
      local_8 = 1;
      if (iVar4 == 0) {
        iVar4 = 0;
      }
      else {
        asStack_30[3 - iVar9] = 0x5cadac;
        iVar4 = FUN_008b0060();
      }
      iVar5 = DAT_0125fdd8;
      local_8 = 2;
      if ((iVar4 != DAT_0125fdd8) && (DAT_0125fdd8 != 0)) {
        asStack_30[3 - iVar9] = DAT_0125fdd8;
        asStack_30[2 - iVar9] = 0x5cadd5;
        FUN_005c1a70();
        asStack_30[3 - iVar9] = iVar5;
                    /* WARNING: Subroutine does not return */
        asStack_30[2 - iVar9] = (size_t)&UNK_005caddb;
        FUN_00aae91b();
      }
      local_8 = 0xffffffff;
      DAT_0125fdd8 = iVar4;
    }
    piVar3 = *(int **)(*(int *)(DAT_0125fdd8 + 0xc) + iVar8 * 4);
    if (piVar3 != (int *)0x0) {
      pcVar1 = *(code **)(*piVar3 + 0x24);
      asStack_30[3 - iVar9] = 0x5cadff;
      cVar2 = (*pcVar1)();
      if (cVar2 == '\0') {
        piVar3 = (int *)0x0;
      }
    }
  }
  ExceptionList = local_10;
  return piVar3;
}

