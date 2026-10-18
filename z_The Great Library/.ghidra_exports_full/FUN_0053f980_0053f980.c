// FUN_0053f980 @ 0053f980 body=[[0053f980, 0053fa4b]]


void FUN_0053f980(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = DAT_012588e8;
  if (*(int *)(DAT_012588e8 + 0xb60) == *(int *)(param_1 + 0x20)) {
    *(undefined4 *)(*(int *)(*(int *)(DAT_012588e8 + 0xb24) + 0x24) + 0x20) = 1;
  }
  piVar4 = *(int **)(param_1 + 0x9d8);
  while ((*(int **)(param_1 + 0x9d8) <= piVar4 && (piVar4 < *(int **)(param_1 + 0x9dc)))) {
    puVar1 = *(undefined4 **)(*(int *)(*(int *)(iVar5 + 0xacc) + *piVar4 * 4) + 0xd8);
    piVar4 = piVar4 + 1;
    while (puVar1 != (undefined4 *)0x0) {
      piVar2 = (int *)*puVar1;
      puVar1 = (undefined4 *)puVar1[2];
      cVar3 = (**(code **)(*piVar2 + 0x34))();
      iVar5 = DAT_012588e8;
      if (cVar3 != '\0') {
        FUN_0053f5c0(param_1,piVar2);
        iVar5 = DAT_012588e8;
      }
    }
  }
  iVar5 = *(int *)(param_1 + 0x15dc);
  iVar6 = 0;
  if (0 < (int)(*(int *)(param_1 + 0x15e0) - iVar5 & 0xfffffffcU)) {
    do {
      FUN_0053f7b0(param_1,*(undefined4 *)(iVar5 + iVar6 * 4));
      iVar5 = *(int *)(param_1 + 0x15dc);
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(param_1 + 0x15e0) - iVar5 >> 2);
  }
  return;
}

