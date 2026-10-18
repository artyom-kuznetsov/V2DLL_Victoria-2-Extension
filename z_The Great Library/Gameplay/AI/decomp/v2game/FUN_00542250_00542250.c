// FUN_00542250 @ 00542250 body=[[00542250, 005422d2]]


void FUN_00542250(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  
  iVar2 = DAT_01258a48;
  iVar4 = *(int *)(DAT_01258a48 + 0x5c) - *(int *)(DAT_01258a48 + 0x58) >> 2;
  while( true ) {
    do {
      iVar4 = iVar4 + -1;
      if (iVar4 < 1) {
        return;
      }
      piVar1 = *(int **)(*(int *)(iVar2 + 0x58) + iVar4 * 4);
      cVar3 = (**(code **)(*piVar1 + 0x18))();
    } while (cVar3 == '\0');
    if (param_2 < 1) break;
    cVar3 = (**(code **)(**(int **)(*(int *)(param_1 + 0x870) + piVar1[0x14] * 4) + 0x34))();
    if (cVar3 != '\0') {
      if (*(int *)(*(int *)(*(int *)(param_1 + 0x870) + piVar1[0x14] * 4) + 0x50) !=
          *(int *)(*(int *)piVar1[2] + 0x50)) {
        param_2 = param_2 + -1;
        *(int *)(*(int *)(param_1 + 0x870) + piVar1[0x14] * 4) = *(int *)piVar1[2];
      }
    }
  }
  return;
}

