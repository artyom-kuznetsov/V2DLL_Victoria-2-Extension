// FUN_005944b0 @ 005944b0 body=[[005944b0, 00594575]]


void FUN_005944b0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int in_ECX;
  
  if (param_1 == 0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = (undefined4 *)(param_1 + 0x38);
  }
  piVar3 = (int *)*puVar2;
  while (piVar3 != (int *)0x0) {
    iVar1 = *piVar3;
    piVar3 = (int *)piVar3[2];
    *(undefined4 *)(iVar1 + 0x7c) = 0;
    *(undefined4 *)(iVar1 + 0x80) = 0;
  }
  for (piVar3 = *(int **)(in_ECX + 0x20); piVar3 != (int *)0x0; piVar3 = (int *)piVar3[2]) {
    if (*piVar3 == param_1) goto LAB_0059453b;
  }
  iVar1 = *(int *)(in_ECX + 0x24);
  piVar3 = (int *)FUN_00aae9af(0x10);
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    *piVar3 = param_1;
    piVar3[1] = iVar1;
    piVar3[2] = 0;
    *(undefined1 *)(piVar3 + 3) = 0;
  }
  iVar4 = *(int *)(in_ECX + 0x28);
  *(int **)(in_ECX + 0x24) = piVar3;
  *(int *)(in_ECX + 0x28) = iVar4 + 1;
  if (iVar4 == 0) {
    *(int **)(in_ECX + 0x20) = piVar3;
  }
  else {
    *(int **)(iVar1 + 8) = piVar3;
  }
LAB_0059453b:
  iVar1 = *(int *)(in_ECX + 0x38);
  iVar4 = *(int *)(in_ECX + 0x34);
  if (iVar4 != iVar1) {
    do {
      if (*(int *)(iVar4 + 4) == *(int *)(param_1 + 0xc4)) break;
      iVar4 = iVar4 + 8;
    } while (iVar4 != iVar1);
    if (iVar4 != iVar1) {
      return;
    }
  }
  FUN_004d61d0();
  return;
}

