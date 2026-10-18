// FUN_004b6090 @ 004b6090 body=[[004b6090, 004b60b7]]


uint FUN_004b6090(void)

{
  int iVar1;
  uint in_EAX;
  int in_ECX;
  
  if (*(char *)(in_EAX + 0x131) != '\0') {
    iVar1 = *(int *)(*(int *)(in_ECX + 0x118) + *(int *)(in_EAX + 0x134) * 4);
    return CONCAT31((int3)((uint)iVar1 >> 8),DAT_0125ceac < *(int *)(iVar1 + 0x20));
  }
  return in_EAX & 0xffffff00;
}

