// FUN_0050ea30 @ 0050ea30 body=[[0050ea30, 0050eacc] [0050ead0, 0050ead8] [0050eae2, 0050ec06]]


void FUN_0050ea30(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b74c2c;
  pvStack_14 = ExceptionList;
  DAT_012586f0 = *(int *)(DAT_012588e8 + 0xb60) == *(int *)(param_1 + 0x20);
  iVar3 = DAT_0125a5b8 - DAT_0125a5b4 >> 2;
  iVar4 = 0;
  ExceptionList = &pvStack_14;
  if (0 < iVar3) {
    ExceptionList = &pvStack_14;
    FUN_00401000(0x3f000000);
    uVar1 = FUN_00b31c00();
    do {
      iVar5 = iVar4 * 8;
      iVar4 = iVar4 + 1;
      *(undefined4 *)(*(int *)(param_1 + 0xa90) + iVar5) = uVar1;
    } while (iVar4 < iVar3);
  }
  if (*(int *)(param_1 + 0xa80) == 0) {
    *(undefined4 *)(param_1 + 0xa80) = 0;
    *(undefined4 *)(param_1 + 0xa84) = 0;
    *(undefined4 *)(param_1 + 0xa88) = 0;
    if (DAT_0125a69c == 0) {
      iVar3 = FUN_00aae9af(0xc4);
      local_c = 0;
      if (iVar3 == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = FUN_008b0060();
      }
      local_c = 0xffffffff;
      FUN_0044ec00(uVar1);
    }
    iVar3 = *(int *)(DAT_0125a69c + 0x74);
    iVar5 = DAT_0125a5b8 - DAT_0125a5b4 >> 2;
    iVar4 = 0;
    if (0 < iVar5) {
      do {
        piVar2 = (int *)(*(int *)(param_1 + 0xa90) + iVar4 * 8);
        *piVar2 = *piVar2 + *(int *)(*(int *)(iVar3 + 0x18) + iVar4 * 8);
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar5);
    }
    if (DAT_012586f0 != '\0') {
      iVar4 = *(int *)(param_1 + 0xa84);
      piVar2 = (int *)FUN_00aae9af(0x10);
      if (piVar2 == (int *)0x0) {
        piVar2 = (int *)0x0;
      }
      else {
        *piVar2 = iVar3;
        piVar2[1] = iVar4;
        piVar2[2] = 0;
        *(undefined1 *)(piVar2 + 3) = 0;
      }
      iVar3 = *(int *)(param_1 + 0xa88);
      *(int **)(param_1 + 0xa84) = piVar2;
      *(int *)(param_1 + 0xa88) = iVar3 + 1;
      if (iVar3 == 0) {
        *(int **)(param_1 + 0xa80) = piVar2;
      }
      else {
        *(int **)(iVar4 + 8) = piVar2;
      }
    }
    if (*(char *)(param_1 + 0x12d0) == '\0') {
      iVar3 = 3;
    }
    else if (*(char *)(param_1 + 0x31) == '\0') {
      iVar3 = (*(int *)(*(int *)(DAT_012586dc + 0x40) + 0x50) / 1000 < *(int *)(param_1 + 0x1404)) +
              1;
    }
    else {
      iVar3 = 0;
    }
                    /* WARNING: Could not recover jumptable at 0x0050ec00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&PTR_LAB_00511108)[iVar3])();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(*(int *)(param_1 + 0xa80));
}

