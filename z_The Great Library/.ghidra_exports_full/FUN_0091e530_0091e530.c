// FUN_0091e530 @ 0091e530 body=[[0091e530, 0091e5d1]]


uint FUN_0091e530(void)

{
  int iVar1;
  uint uVar2;
  int in_ECX;
  
  uVar2 = *(uint *)(DAT_012587e4 + 4);
  iVar1 = *(int *)(uVar2 + *(int *)(in_ECX + 0x14) * 4);
  if ((*(char *)(iVar1 + 0xcf5) != '\0') || (*(char *)(iVar1 + 0xcf4) != '\0')) {
    if (*(int *)(*(int *)(uVar2 + *(int *)(in_ECX + 0x14) * 4) + 0xcfc) == *(int *)(in_ECX + 0xc))
    goto LAB_0091e583;
  }
  iVar1 = *(int *)(uVar2 + *(int *)(in_ECX + 0xc) * 4);
  if ((*(char *)(iVar1 + 0xcf5) != '\0') || (*(char *)(iVar1 + 0xcf4) != '\0')) {
    uVar2 = *(uint *)(*(int *)(uVar2 + *(int *)(in_ECX + 0xc) * 4) + 0xcfc);
    if (uVar2 == *(uint *)(in_ECX + 0x14)) {
LAB_0091e583:
      return CONCAT31((int3)(uVar2 >> 8),1);
    }
  }
  return uVar2 & 0xffffff00;
}

