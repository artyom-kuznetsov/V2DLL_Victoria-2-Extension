// FUN_0059c320 @ 0059c320 body=[[0059c320, 0059c3cb]]


undefined4 FUN_0059c320(int param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int *in_ECX;
  
  cVar1 = (**(code **)(*(int *)in_ECX[4] + 0x40))(param_1);
  cVar2 = (**(code **)(*(int *)in_ECX[5] + 0x40))(param_1);
  if (cVar2 == '\0') {
    if (cVar1 != '\0') {
      if (param_1 != 0) {
        (**(code **)(*(int *)in_ECX[5] + 0x2c))(param_1);
        iVar3 = (**(code **)(*in_ECX + 0x24))();
        if (iVar3 == 3) {
          *(int **)(param_1 + 0x70) = in_ECX;
          return 1;
        }
        *(int **)(param_1 + 0x74) = in_ECX;
        FUN_005d0fe0(0);
      }
      return 1;
    }
  }
  else if (cVar1 == '\0') {
    (**(code **)(*(int *)in_ECX[4] + 0x2c))(param_1);
    iVar3 = (**(code **)(*in_ECX + 0x24))();
    if (iVar3 == 3) {
      *(int **)(param_1 + 0x70) = in_ECX;
      return 1;
    }
    *(int **)(param_1 + 0x74) = in_ECX;
    FUN_005d0fe0(1);
    return 1;
  }
  return 0;
}

