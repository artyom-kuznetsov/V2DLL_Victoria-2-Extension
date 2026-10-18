// FUN_007993d0 @ 007993d0 body=[[007993d0, 00799419]]


undefined4 FUN_007993d0(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  int in_ECX;
  
  cVar1 = (**(code **)(*(int *)(*(int *)(in_ECX + 4) + 0x18) + 0x94))(param_1);
  if (cVar1 != '\0') {
    return 1;
  }
  if ((*(int **)(in_ECX + 0x18) != (int *)0x0) &&
     (*(char *)(**(int **)(in_ECX + 0x18) + 0x67) != '\0')) {
    uVar2 = FUN_00798330();
    return uVar2;
  }
  return 0;
}

