// FUN_0090e000 @ 0090e000 body=[[0090e000, 0090e040]]


void FUN_0090e000(undefined4 param_1)

{
  int *piVar1;
  int *piVar2;
  int in_ECX;
  
  piVar1 = *(int **)(in_ECX + 8);
  while (piVar1 != (int *)0x0) {
    piVar2 = (int *)*piVar1;
    piVar1 = (int *)piVar1[2];
    if ((char)piVar2[8] == '\0') {
      (**(code **)(*piVar2 + 0x1c))();
      FUN_009a0940(param_1);
      (**(code **)(*piVar2 + 4))(param_1);
    }
  }
  return;
}

