// FUN_005cc4d0 @ 005cc4d0 body=[[005cc4d0, 005cc529]]


undefined4 FUN_005cc4d0(void)

{
  char cVar1;
  int in_ECX;
  undefined1 auStack_14 [4];
  int local_10 [3];
  
  if (*(int *)(in_ECX + 0x108) == 0) {
    return 0;
  }
  (**(code **)(**(int **)(in_ECX + 0x108) + 0x58))(local_10);
  if ((*(int *)(in_ECX + 0xc4) != local_10[0]) &&
     (cVar1 = FUN_005cc2e0(auStack_14,0), cVar1 == '\0')) {
    return 0;
  }
  return 1;
}

