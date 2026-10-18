// FUN_0052fb40 @ 0052fb40 body=[[0052fb40, 0052fb98]]


uint FUN_0052fb40(void)

{
  uint in_EAX;
  int in_ECX;
  int in_EDX;
  
  if (*(char *)(in_EDX + 0x31) != '\0') {
    in_EAX = *(uint *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 4) * 4);
    if ((((*(char *)(in_EAX + 0x31) == '\0') && (*(char *)(in_EAX + 0x12d0) != '\0')) &&
        (*(char *)(in_EAX + 0xb60) != '\0')) &&
       (in_EAX = *(uint *)(*(int *)(in_EDX + 0xbe8) + *(int *)(in_ECX + 4) * 4),
       *(int *)(in_EAX + 0x34) == 0)) {
      return CONCAT31((int3)(in_EAX >> 8),1);
    }
  }
  return in_EAX & 0xffffff00;
}

