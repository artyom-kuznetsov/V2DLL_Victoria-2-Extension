// FUN_0053d680 @ 0053d680 body=[[0053d680, 0053d7e1]]


void FUN_0053d680(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char in_AL;
  int iVar5;
  
  *(char *)(param_1 + 0x31) = in_AL;
  if (in_AL == '\0') {
    FUN_005340a0();
  }
  else {
    if ((*(int *)(param_1 + 0xcfc) != 0) &&
       (piVar1 = *(int **)(*(int *)(*(int *)(*(int *)(DAT_012587e4[1] +
                                                     *(int *)(param_1 + 0xcfc) * 4) + 0xbe8) +
                                   *(int *)(param_1 + 0x20) * 4) + 0x24), piVar1 != (int *)0x0)) {
      FUN_0090e050();
      (**(code **)(*piVar1 + 0x2c))();
      (**(code **)*piVar1)(1);
    }
    piVar1 = DAT_012587e4;
    if (*(int *)(param_1 + 0x142c) != 0) {
      FUN_00533f20(*(undefined4 *)(DAT_012587e4[1] + *(int *)(param_1 + 0x142c) * 4));
    }
    iVar5 = 0;
    if (0 < *piVar1) {
      do {
        iVar4 = DAT_012586dc;
        iVar2 = *(int *)(piVar1[1] + iVar5 * 4);
        iVar3 = *(int *)(iVar2 + 0x20);
        iVar2 = *(int *)(*(int *)(*(int *)(piVar1[1] + *(int *)(iVar2 + 0x20) * 4) + 0xbe8) +
                        *(int *)(param_1 + 0x20) * 4);
        *(undefined4 *)(iVar2 + 0x48) = 0;
        iVar4 = *(int *)(*(int *)(iVar4 + 0x30) + 0x404);
        if (iVar4 < 0) {
          *(int *)(iVar2 + 0x4c) = -iVar4;
          *(int *)(iVar2 + 0x48) = iVar4;
        }
        else {
          *(undefined4 *)(iVar2 + 0x4c) = 0;
        }
        iVar2 = *(int *)(*(int *)(*(int *)(piVar1[1] + iVar3 * 4) + 0xbe8) +
                        *(int *)(param_1 + 0x20) * 4);
        if (*(int *)(iVar2 + 0x40) != 2) {
          *(undefined4 *)(iVar2 + 0x44) = *(undefined4 *)(DAT_012588e8 + 0xb0c);
        }
        iVar5 = iVar5 + 1;
        *(undefined4 *)(iVar2 + 0x40) = 2;
      } while (iVar5 < *piVar1);
      return;
    }
  }
  return;
}

