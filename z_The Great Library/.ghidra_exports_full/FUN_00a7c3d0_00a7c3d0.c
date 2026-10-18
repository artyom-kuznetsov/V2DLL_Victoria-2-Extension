// FUN_00a7c3d0 @ 00a7c3d0 body=[[00a7c3d0, 00a7c3f2]]


int FUN_00a7c3d0(void)

{
  int in_ECX;
  
  if ((*(int *)(in_ECX + 0x14) != 0) &&
     ((*(int *)(in_ECX + 0x10) == 0 || (*(int *)(in_ECX + 0x10) == 1)))) {
    if (*(int *)(in_ECX + 0x14) == 1) {
      return in_ECX + 0x18;
    }
    return *(int *)(in_ECX + 0x18);
  }
  return 0;
}

