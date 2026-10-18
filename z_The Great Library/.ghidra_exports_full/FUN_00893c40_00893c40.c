// FUN_00893c40 @ 00893c40 body=[[00893c40, 00893cb6]]


int FUN_00893c40(void)

{
  int in_EAX;
  int iVar1;
  int in_ECX;
  
  if (*(char *)(in_EAX + 0x1c) != '\0') {
    iVar1 = FUN_008a8dc0();
    return *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar1 + 4) * 4) + 0xe64);
  }
  if (*(char *)(in_EAX + 0x1d) != '\0') {
    return *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x30) * 4) + 0xe64);
  }
  iVar1 = *(int *)(in_EAX + 0x20);
  if (iVar1 == 0) {
    iVar1 = FUN_00561180();
  }
  return iVar1;
}

