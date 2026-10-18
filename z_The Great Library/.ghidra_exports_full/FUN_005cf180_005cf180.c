// FUN_005cf180 @ 005cf180 body=[[005cf180, 005cf1ab]]


bool FUN_005cf180(void)

{
  char cVar1;
  int in_EAX;
  
  if (*(char *)(in_EAX + 0x104) != '\0') {
    return true;
  }
  if (*(int *)(in_EAX + 0x74) != 0) {
    cVar1 = (**(code **)(**(int **)(in_EAX + 0x74) + 0x2c))();
    return cVar1 != '\0';
  }
  return 0 < *(int *)(in_EAX + 0x40);
}

