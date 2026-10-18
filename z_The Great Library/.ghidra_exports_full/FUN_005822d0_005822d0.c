// FUN_005822d0 @ 005822d0 body=[[005822d0, 005822ec]]


undefined4 FUN_005822d0(void)

{
  int in_ECX;
  
  if ((*(int *)(in_ECX + 0x50) != 0) &&
     ((*(int *)(in_ECX + 0x40) - *(int *)(in_ECX + 0x3c) & 0xfffffff8U) == 0x18)) {
    return 1;
  }
  return 0;
}

