// FUN_00581f90 @ 00581f90 body=[[00581f90, 00581fac]]


undefined4 FUN_00581f90(void)

{
  int in_ECX;
  
  if ((*(int *)(in_ECX + 0x50) != 0) &&
     ((*(int *)(in_ECX + 0x40) - *(int *)(in_ECX + 0x3c) & 0xfffffff8U) == 0x20)) {
    return 1;
  }
  return 0;
}

