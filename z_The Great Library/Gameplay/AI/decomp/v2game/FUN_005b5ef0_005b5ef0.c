// FUN_005b5ef0 @ 005b5ef0 body=[[005b5ef0, 005b5fc2]]


void FUN_005b5ef0(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  FUN_005c3c80(*(undefined4 *)(param_1 + 0x7c));
  iVar1 = *(int *)(param_1 + 0x80);
  iVar4 = DAT_0125fe14 - DAT_0125fe10 >> 2;
  iVar3 = 0;
  if (0 < iVar4) {
    do {
      piVar2 = (int *)(*(int *)(param_1 + 0x48) + iVar3 * 8);
      *piVar2 = *piVar2 + *(int *)(iVar3 * 8 + *(int *)(iVar1 + 0x18));
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar4);
  }
  iVar3 = *(int *)(param_1 + 0x3c);
  piVar2 = (int *)FUN_00aae9af(0x10);
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    *piVar2 = iVar1;
    piVar2[1] = iVar3;
    piVar2[2] = 0;
    *(undefined1 *)(piVar2 + 3) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x40);
  *(int **)(param_1 + 0x3c) = piVar2;
  *(int *)(param_1 + 0x40) = iVar1 + 1;
  if (iVar1 == 0) {
    *(int **)(param_1 + 0x38) = piVar2;
  }
  else {
    *(int **)(iVar3 + 8) = piVar2;
  }
  piVar2 = (int *)(*(int *)(param_1 + 0x48) + *(int *)(*(int *)(param_1 + 0xe0) + 0x24) * 8);
  *piVar2 = *piVar2 + *(int *)(param_1 + 0xdc);
  piVar2 = (int *)(*(int *)(param_1 + 0x48) + *(int *)(*(int *)(param_1 + 0x114) + 0x24) * 8);
  *piVar2 = *piVar2 + *(int *)(param_1 + 0x110);
  FUN_005b82c0();
  return;
}

