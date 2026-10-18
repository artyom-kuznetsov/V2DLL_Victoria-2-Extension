// FUN_00455d30 @ 00455d30 body=[[00455d30, 00455d7a]]


undefined4 FUN_00455d30(void)

{
  int in_ECX;
  char cVar1;
  
  if (*(int *)(in_ECX + 4) == 0) {
    cVar1 = '\0';
  }
  else {
    cVar1 = *(char *)(*(int *)(in_ECX + 4) + 0x67);
  }
  FUN_00455d80();
  if ((cVar1 != '\0') && (*(int *)(in_ECX + 4) != 0)) {
    FUN_00456110(in_ECX);
    FUN_004562e0();
    (**(code **)(*(int *)(*(int *)(in_ECX + 4) + 0x18) + 0x34))();
    (**(code **)(**(int **)(in_ECX + 4) + 0x2c))();
  }
  return 1;
}

