// FUN_005884d0 @ 005884d0 body=[[005884d0, 005884e7]]


undefined1 FUN_005884d0(void)

{
  int in_ECX;
  
  if ((*(int *)(in_ECX + 0x40) != 0) &&
     ((*(int *)(in_ECX + 0x44) != 0 || (*(int *)(in_ECX + 0x4c) != 0)))) {
    return 1;
  }
  return 0;
}

