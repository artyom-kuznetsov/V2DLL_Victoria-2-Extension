// FUN_008d2e80 @ 008d2e80 body=[[008d2e80, 008d2efd]]


bool FUN_008d2e80(int param_1)

{
  int iVar1;
  int in_ECX;
  int local_8;
  
  iVar1 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4) + 0x156c);
  if (*(char *)(in_ECX + 0x18) != '\0') {
    FUN_008a8dc0();
    return *(int *)(iVar1 + 0x14) == local_8;
  }
  if (*(char *)(in_ECX + 0x19) != '\0') {
    return *(int *)(iVar1 + 0x14) == *(int *)(*(int *)(param_1 + 0x24) + 0x30);
  }
  return *(int *)(iVar1 + 0x14) == *(int *)(in_ECX + 0x20);
}

