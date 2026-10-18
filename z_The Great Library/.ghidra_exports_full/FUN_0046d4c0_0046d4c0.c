// FUN_0046d4c0 @ 0046d4c0 body=[[0046d4c0, 0046d50c]]


undefined4 FUN_0046d4c0(void)

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
  FUN_0046d9c0(in_ECX);
  if ((cVar2 != '\0') && (*(int *)(in_ECX + 4) != 0)) {
    (**(code **)(*(int *)(*(int *)(in_ECX + 4) + 0x18) + 0x34))();
    (**(code **)(**(int **)(in_ECX + 4) + 0x2c))();
  }
  return 1;
}

