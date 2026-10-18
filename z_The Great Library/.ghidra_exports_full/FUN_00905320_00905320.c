// FUN_00905320 @ 00905320 body=[[00905320, 0090535c]]


uint FUN_00905320(int param_1)

{
  uint in_EAX;
  int in_ECX;
  
  if ((*(char *)(in_ECX + 0x24) != '\0') && (in_EAX = *(uint *)(param_1 + 0x28), in_EAX != 0)) {
    if (*(int *)(in_ECX + 0x1c) < *(int *)(in_EAX + 0x58) - *(int *)(in_EAX + 0x54) >> 2) {
      return (uint)(*(int *)(*(int *)(in_EAX + 0x54) + *(int *)(in_ECX + 0x1c) * 4) ==
                   *(int *)(in_ECX + 0x20));
    }
  }
  return in_EAX & 0xffffff00;
}

