// FUN_00905780 @ 00905780 body=[[00905780, 009057ae]]


uint FUN_00905780(int param_1)

{
  uint in_EAX;
  uint uVar1;
  int in_ECX;
  
  if ((*(char *)(in_ECX + 0x40) != '\0') && (in_EAX = 0, *(int *)(param_1 + 0x28) != 0)) {
    uVar1 = FUN_00464fb0(*(int *)(param_1 + 0x28),*(undefined4 *)(in_ECX + 0x20));
    return uVar1;
  }
  return in_EAX & 0xffffff00;
}

