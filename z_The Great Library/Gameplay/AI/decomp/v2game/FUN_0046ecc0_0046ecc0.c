// FUN_0046ecc0 @ 0046ecc0 body=[[0046ecc0, 0046ed26]]


undefined4 FUN_0046ecc0(void)

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
  FUN_0046ed30();
  if (((cVar2 != '\0') && (iVar1 = *(int *)(in_ECX + 4), iVar1 != 0)) &&
     (*(char *)(iVar1 + 0x67) == '\0')) {
    (**(code **)(*(int *)(iVar1 + 0x18) + 0x34))();
    (**(code **)(**(int **)(in_ECX + 4) + 0x2c))();
    FUN_0046f0d0();
    FUN_0046f490(in_ECX);
  }
  return 1;
}

