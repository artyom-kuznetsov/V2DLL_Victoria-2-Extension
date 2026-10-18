// FUN_0091e280 @ 0091e280 body=[[0091e280, 0091e2e5]]


undefined4 FUN_0091e280(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  iVar1 = *(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0xc) * 4) +
                           0xbe8) + *(int *)(in_ECX + 0x14) * 4);
  if (*(int *)(iVar1 + 0x20) != 0) {
    iVar2 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0xc) * 4);
    if (((*(char *)(iVar2 + 0xcf5) == '\0') && (*(char *)(iVar2 + 0xcf4) == '\0')) &&
       (*(char *)(iVar1 + 0x70) == '\0')) {
      return 1;
    }
  }
  return 0;
}

