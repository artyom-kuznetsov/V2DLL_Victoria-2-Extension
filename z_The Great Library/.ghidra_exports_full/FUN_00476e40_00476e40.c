// FUN_00476e40 @ 00476e40 body=[[00476e40, 00476e84]]


undefined4 FUN_00476e40(void)

{
  int in_ECX;
  char cVar1;
  
  if (*(int *)(in_ECX + 4) == 0) {
    cVar1 = '\0';
  }
  else {
    cVar1 = *(char *)(*(int *)(in_ECX + 4) + 0x67);
  }
  FUN_00476e90(in_ECX);
  if ((cVar1 != '\0') && (*(int *)(in_ECX + 4) != 0)) {
    FUN_00477ad0();
    (**(code **)(*(int *)(*(int *)(in_ECX + 4) + 0x18) + 0x34))();
    (**(code **)(**(int **)(in_ECX + 4) + 0x2c))();
  }
  return 1;
}

