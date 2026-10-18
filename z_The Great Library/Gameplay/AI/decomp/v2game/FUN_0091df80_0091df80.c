// FUN_0091df80 @ 0091df80 body=[[0091df80, 0091e073]]


uint FUN_0091df80(void)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  int in_ECX;
  
  uVar1 = *(uint *)(DAT_012587e4 + 4);
  if (((*(char *)(*(int *)(uVar1 + *(int *)(in_ECX + 0xc) * 4) + 0x31) != '\0') &&
      (*(char *)(*(int *)(uVar1 + *(int *)(in_ECX + 0x14) * 4) + 0x31) != '\0')) &&
     (*(int *)(*(int *)(DAT_012588e8 + 0xcf8) + 8) != 0)) {
    return uVar1 & 0xffffff00;
  }
  iVar2 = *(int *)(uVar1 + *(int *)(in_ECX + 0x14) * 4);
  if ((*(char *)(iVar2 + 0xcf5) != '\0') || (*(char *)(iVar2 + 0xcf4) != '\0')) {
    if (*(int *)(*(int *)(uVar1 + *(int *)(in_ECX + 0x14) * 4) + 0xcfc) != *(int *)(in_ECX + 0xc)) {
      bVar3 = true;
      goto LAB_0091e034;
    }
  }
  bVar3 = false;
LAB_0091e034:
  if (*(int *)(*(int *)(*(int *)(*(int *)(uVar1 + *(int *)(in_ECX + 0xc) * 4) + 0xbe8) +
                       *(int *)(in_ECX + 0x14) * 4) + 0x20) == 0) {
    iVar2 = *(int *)(uVar1 + *(int *)(in_ECX + 0xc) * 4);
    if (((*(char *)(iVar2 + 0xcf5) == '\0') && (*(char *)(iVar2 + 0xcf4) == '\0')) && (!bVar3)) {
      return 1;
    }
  }
  return 0;
}

