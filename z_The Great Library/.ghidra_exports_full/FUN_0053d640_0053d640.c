// FUN_0053d640 @ 0053d640 body=[[0053d640, 0053d678]]


uint FUN_0053d640(void)

{
  uint in_EAX;
  int in_ECX;
  
  if ((*(char *)(in_ECX + 0x12d0) != '\0') && (*(char *)(in_ECX + 0x31) == '\0')) {
    in_EAX = *(int *)(*(int *)(DAT_012586dc + 0x40) + 0x50) / 1000;
    if (*(int *)(in_ECX + 0x1404) <= (int)in_EAX) {
      return CONCAT31((int3)(in_EAX >> 8),1);
    }
  }
  return in_EAX & 0xffffff00;
}

