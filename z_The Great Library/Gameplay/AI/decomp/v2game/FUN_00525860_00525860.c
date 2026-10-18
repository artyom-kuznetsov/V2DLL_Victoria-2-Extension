// FUN_00525860 @ 00525860 body=[[00525860, 00525959] [00525960, 00525a14]]


void FUN_00525860(int param_1)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  piVar3 = (int *)(DAT_01258a48 + 0x48);
  iVar4 = 0;
  iVar5 = *(int *)(DAT_01258a48 + 0x4c) - *piVar3 >> 2;
  if (0 < iVar5) {
    do {
      piVar1 = *(int **)(*piVar3 + iVar4 * 4);
      cVar2 = (**(code **)(*piVar1 + 0x18))();
      if ((cVar2 != '\0') &&
         (cVar2 = (**(code **)(**(int **)(*(int *)(param_1 + 0x850) + piVar1[0x14] * 4) + 0x34))(),
         cVar2 == '\0')) {
        *(undefined4 *)(*(int *)(param_1 + 0x850) + piVar1[0x14] * 4) = *(undefined4 *)piVar1[2];
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar5);
  }
  piVar3 = (int *)(DAT_01258a48 + 0x38);
  iVar5 = *(int *)(DAT_01258a48 + 0x3c) - *(int *)(DAT_01258a48 + 0x38) >> 2;
  iVar4 = 0;
  if (0 < iVar5) {
    do {
      piVar1 = *(int **)(*piVar3 + iVar4 * 4);
      cVar2 = (**(code **)(*piVar1 + 0x18))();
      if ((cVar2 != '\0') &&
         (cVar2 = (**(code **)(**(int **)(*(int *)(param_1 + 0x860) + piVar1[0x14] * 4) + 0x34))(),
         cVar2 == '\0')) {
        *(undefined4 *)(*(int *)(param_1 + 0x860) + piVar1[0x14] * 4) = *(undefined4 *)piVar1[2];
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar5);
  }
  if (*(char *)(param_1 + 0x12d0) == '\0') {
    piVar3 = (int *)(DAT_01258a48 + 0x68);
    iVar5 = *(int *)(DAT_01258a48 + 0x6c) - *(int *)(DAT_01258a48 + 0x68) >> 2;
    iVar4 = 0;
    if (0 < iVar5) {
      do {
        piVar1 = *(int **)(*piVar3 + iVar4 * 4);
        cVar2 = (**(code **)(*piVar1 + 0x18))();
        if ((cVar2 != '\0') &&
           (cVar2 = (**(code **)(**(int **)(*(int *)(param_1 + 0x880) + piVar1[0x14] * 4) + 0x34))()
           , cVar2 == '\0')) {
          *(undefined4 *)(*(int *)(param_1 + 0x880) + piVar1[0x14] * 4) = *(undefined4 *)piVar1[2];
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar5);
    }
    piVar3 = (int *)(DAT_01258a48 + 0x58);
    iVar5 = *(int *)(DAT_01258a48 + 0x5c) - *(int *)(DAT_01258a48 + 0x58) >> 2;
    iVar4 = 0;
    if (0 < iVar5) {
      do {
        piVar1 = *(int **)(*piVar3 + iVar4 * 4);
        cVar2 = (**(code **)(*piVar1 + 0x18))();
        if ((cVar2 != '\0') &&
           (cVar2 = (**(code **)(**(int **)(*(int *)(param_1 + 0x870) + piVar1[0x14] * 4) + 0x34))()
           , cVar2 == '\0')) {
          *(undefined4 *)(*(int *)(param_1 + 0x870) + piVar1[0x14] * 4) = *(undefined4 *)piVar1[2];
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar5);
    }
  }
  return;
}

