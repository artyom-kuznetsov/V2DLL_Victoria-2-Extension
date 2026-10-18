// FUN_0048e190 @ 0048e190 body=[[0048e190, 0048e20d]]


void FUN_0048e190(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int in_ECX;
  
  for (piVar3 = *(int **)(in_ECX + 4); piVar3 != (int *)0x0; piVar3 = (int *)piVar3[2]) {
    if (*piVar3 == param_1) goto LAB_0048e1fb;
  }
  iVar1 = *(int *)(in_ECX + 8);
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
  iVar2 = *(int *)(in_ECX + 0xc);
  *(int **)(in_ECX + 8) = piVar3;
  *(int *)(in_ECX + 0xc) = iVar2 + 1;
  if (iVar2 != 0) {
    *(int **)(iVar1 + 8) = piVar3;
    FUN_0048dff0();
    FUN_0048e3b0();
    return;
  }
  *(int **)(in_ECX + 4) = piVar3;
LAB_0048e1fb:
  FUN_0048dff0();
  FUN_0048e3b0();
  return;
}

