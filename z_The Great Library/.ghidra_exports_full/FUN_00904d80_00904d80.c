// FUN_00904d80 @ 00904d80 body=[[00904d80, 00904dd3]]


uint FUN_00904d80(uint param_1)

{
  uint in_EAX;
  uint uVar1;
  int in_ECX;
  
  if ((*(char *)(in_ECX + 0x28) != '\0') && (in_EAX = param_1, *(int *)(param_1 + 0x28) != 0)) {
    uVar1 = FUN_004650e0(*(int *)(param_1 + 0x28));
    return uVar1;
  }
  return in_EAX & 0xffffff00;
}

