// FUN_0046e4c0 @ 0046e4c0 body=[[0046e4c0, 0046e530]]


undefined4 FUN_0046e4c0(void)

{
  int iVar1;
  int in_ECX;
  char cVar2;
  
  iVar1 = *(int *)(in_ECX + 4);
  if (iVar1 == 0) {
    cVar2 = '\0';
  }
  else {
    cVar2 = *(char *)(iVar1 + 0x67);
    (**(code **)(*(int *)(iVar1 + 0x18) + 0x38))();
  }
  if ((((*(int *)(in_ECX + 0x40) != 0) &&
       (iVar1 = *(int *)(*(int *)(in_ECX + 0x40) + 4), iVar1 != 0)) &&
      (*(char *)(iVar1 + 0x67) != '\0')) && (iVar1 != 0)) {
    (**(code **)(*(int *)(iVar1 + 0x18) + 0x38))();
  }
  FUN_0046e540();
  if ((cVar2 != '\0') && (*(int *)(in_ECX + 4) != 0)) {
    (**(code **)(*(int *)(*(int *)(in_ECX + 4) + 0x18) + 0x34))();
    (**(code **)(**(int **)(in_ECX + 4) + 0x2c))();
  }
  return 1;
}

