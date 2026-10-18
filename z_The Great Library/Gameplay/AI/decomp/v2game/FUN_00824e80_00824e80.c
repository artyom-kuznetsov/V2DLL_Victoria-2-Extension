// FUN_00824e80 @ 00824e80 body=[[00824e80, 00824e9c] [00824ea0, 00824ea8] [00824eb2, 00824f2e]]


void FUN_00824e80(int param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  
  iVar2 = DAT_012587e4;
  if (*(int *)(param_1 + 0x98) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(param_1 + 0x98));
  }
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  if (*(char *)(*(int *)(*(int *)(iVar2 + 4) + *(int *)(param_1 + 0x38) * 4) + 0x67c) != '\0') {
    piVar1 = *(int **)(DAT_0125870c + 0x2214);
    while (piVar1 != (int *)0x0) {
      iVar2 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *piVar1 * 4);
      piVar1 = (int *)piVar1[2];
      if ((*(char *)(*(int *)(iVar2 + 0x5c) + 0xd9) != '\0') &&
         (cVar3 = FUN_004c3e20(), cVar3 == '\0')) {
        FUN_00824ab0(param_1,iVar2);
      }
    }
  }
  return;
}

