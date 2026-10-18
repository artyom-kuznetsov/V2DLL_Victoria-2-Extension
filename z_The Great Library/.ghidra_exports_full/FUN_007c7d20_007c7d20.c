// FUN_007c7d20 @ 007c7d20 body=[[007c7d20, 007c7d84]]


int * FUN_007c7d20(int *param_1)

{
  int iVar1;
  int *in_EAX;
  int *piVar2;
  int iVar3;
  
  if (in_EAX[0x41] != 0) {
    piVar2 = (int *)(**(code **)(*in_EAX + 0x2c))();
    iVar1 = *piVar2;
    (**(code **)(*(int *)(in_EAX[0x41] + 0x54) + 0x10))();
    for (iVar3 = FUN_00b31c00(); (iVar1 != 0 && (0 < iVar3)); iVar3 = iVar3 + -1) {
      iVar1 = *(int *)(iVar1 + 8);
    }
    *param_1 = iVar1;
    return param_1;
  }
  piVar2 = (int *)(**(code **)(*in_EAX + 0x2c))();
  *param_1 = *piVar2;
  return param_1;
}

