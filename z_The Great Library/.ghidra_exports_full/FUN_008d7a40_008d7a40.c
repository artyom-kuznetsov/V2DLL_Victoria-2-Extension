// FUN_008d7a40 @ 008d7a40 body=[[008d7a40, 008d7a8e]]


bool FUN_008d7a40(int param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4);
  if ((*(char *)(iVar1 + 0xcf5) == '\0') && (*(char *)(iVar1 + 0xcf4) == '\0')) {
    return *(char *)(in_ECX + 0x1c) == '\0';
  }
  return *(char *)(in_ECX + 0x1c) == '\x01';
}

