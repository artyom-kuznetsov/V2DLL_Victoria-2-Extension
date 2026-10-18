// FUN_00584030 @ 00584030 body=[[00584030, 00584068]]


uint FUN_00584030(void)

{
  uint in_EAX;
  int in_ECX;
  
  if ((*(int *)(in_ECX + 0x40) != 0) && (*(int *)(in_ECX + 0x48) != 0)) {
    in_EAX = *(uint *)(DAT_012587e4 + 4);
    if (*(char *)(*(int *)(in_EAX + *(int *)(in_ECX + 0x48) * 4) + 0x31) != '\0') {
      return CONCAT31((int3)(in_EAX >> 8),1);
    }
  }
  return in_EAX & 0xffffff00;
}

