// FUN_00906ed0 @ 00906ed0 body=[[00906ed0, 00906ef2]]


undefined4 FUN_00906ed0(void)

{
  char cVar1;
  int in_ECX;
  
  if ((*(int *)(in_ECX + 0x3c) != 0) && (*(int *)(in_ECX + 0x54) != 0)) {
    cVar1 = (**(code **)(**(int **)(in_ECX + 0x54) + 0x20))();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}

