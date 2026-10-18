// FUN_00a7c400 @ 00a7c400 body=[[00a7c400, 00a7c423]]


int FUN_00a7c400(void)

{
  int in_ECX;
  
  if ((*(int *)(in_ECX + 0x14) != 0) &&
     ((*(int *)(in_ECX + 0x10) == 2 || (*(int *)(in_ECX + 0x10) == 3)))) {
    if (*(int *)(in_ECX + 0x14) == 1) {
      return in_ECX + 0x18;
    }
    return *(int *)(in_ECX + 0x18);
  }
  return 0;
}

