// FUN_0051af10 @ 0051af10  (requested 0051AF10, first bytes: 55 8B EC 83 E4 F8 83 EC)


undefined4 FUN_0051af10(char param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_EAX;
  int in_ECX;
  
  iVar1 = *(int *)(in_EAX + 4);
  iVar2 = *(int *)(in_ECX + 0x20);
  if (((iVar1 == iVar2) ||
      (iVar3 = *(int *)(DAT_012587e4 + 4),
      *(int *)(*(int *)(iVar3 + *(int *)(in_EAX + 4) * 4) + 0xcfc) == iVar2)) ||
     (*(int *)(in_ECX + 0xcfc) == iVar1)) {
    return 1;
  }
  if ((*(int *)(in_ECX + 0xcfc) != 0) &&
     (*(int *)(in_ECX + 0xcfc) == *(int *)(*(int *)(iVar3 + *(int *)(in_EAX + 4) * 4) + 0xcfc))) {
    return 1;
  }
  if (*(char *)(in_ECX + 0x67c) != '\0') {
    if (*(int *)(*(int *)(*(int *)(*(int *)(iVar3 + *(int *)(in_EAX + 4) * 4) + 0xbe8) + iVar2 * 4)
                + 0x20) != 0) {
      return 1;
    }
    if (*(char *)(*(int *)(*(int *)(*(int *)(iVar3 + *(int *)(in_EAX + 4) * 4) + 0xbe8) + iVar2 * 4)
                 + 0x70) != '\0') {
      return 1;
    }
  }
  if ((param_1 != '\0') &&
     (*(char *)(*(int *)(*(int *)(*(int *)(iVar3 + iVar2 * 4) + 0xbe8) + iVar1 * 4) + 0x60) != '\0')
     ) {
    return 1;
  }
  return 0;
}

