// FUN_009110f0 @ 009110f0 body=[[009110f0, 0091112d]]


void FUN_009110f0(undefined4 param_1)

{
  int *piVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x3c) != 0) {
    piVar1 = *(int **)(in_ECX + 0x3c);
    (**(code **)(*piVar1 + 0x20))();
    FUN_009a0940(param_1);
    (**(code **)(*piVar1 + 4))(param_1);
  }
  FUN_009a2520(param_1);
  return;
}

