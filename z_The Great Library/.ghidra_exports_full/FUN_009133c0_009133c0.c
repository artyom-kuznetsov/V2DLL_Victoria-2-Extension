// FUN_009133c0 @ 009133c0 body=[[009133c0, 00913400]]


void FUN_009133c0(undefined4 param_1)

{
  char cVar1;
  int in_ECX;
  
  FUN_009112b0(param_1);
  if (*(int *)(in_ECX + 0x34) != 0) {
    cVar1 = (**(code **)(**(int **)(in_ECX + 0x34) + 0x1c))();
    if (cVar1 != '\0') {
      FUN_009a0940(param_1);
      (**(code **)(*(int *)(in_ECX + 0x28) + 4))(param_1);
    }
  }
  return;
}

