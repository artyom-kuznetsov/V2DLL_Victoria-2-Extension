// FUN_005ed840 @ 005ed840 body=[[005ed840, 005ed8b9]]


void FUN_005ed840(char param_1)

{
  int *piVar1;
  int in_ECX;
  
  if (*(char *)(in_ECX + 0xc) != '\0') {
    param_1 = param_1 == '\0';
  }
  if (param_1 != '\0') {
    FUN_004a7bc0(*(undefined4 *)(in_ECX + 0x10));
    (**(code **)(**(int **)(in_ECX + 0x10) + 0x28))();
    return;
  }
  for (piVar1 = *(int **)(DAT_012588e8 + 0xa84);
      (piVar1 != (int *)0x0 && (*piVar1 != *(int *)(in_ECX + 0x10))); piVar1 = (int *)piVar1[2]) {
  }
  FUN_005f2ae0(piVar1);
  (**(code **)(**(int **)(in_ECX + 0x10) + 0x2c))();
  return;
}

