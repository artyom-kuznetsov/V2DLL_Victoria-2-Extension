// FUN_006e2970 @ 006e2970 body=[[006e2970, 006e29b4]]


void FUN_006e2970(void)

{
  int iVar1;
  int in_ECX;
  
  FUN_006e28e0(*(char *)(in_ECX + 0xc) == '\0');
  iVar1 = *(int *)(*(int *)(in_ECX + 0x10) + 0x1c8);
  if (iVar1 == 0) {
    FUN_006f3e70();
    return;
  }
  if (iVar1 == 1) {
    FUN_006f7140(*(int *)(in_ECX + 0x10));
  }
  return;
}

