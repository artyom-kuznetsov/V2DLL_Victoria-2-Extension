// FUN_006cef80 @ 006cef80 body=[[006cef80, 006cef9c]]


undefined4 FUN_006cef80(void)

{
  char cVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x6c) != 0) {
    cVar1 = (**(code **)(**(int **)(in_ECX + 0x6c) + 0x38))();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}

