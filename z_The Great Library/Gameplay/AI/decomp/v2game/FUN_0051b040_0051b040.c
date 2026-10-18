// FUN_0051b040 @ 0051b040  (requested 0051B040, first bytes: 55 8B EC 83 EC 10 53 56)


bool FUN_0051b040(int param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int in_EAX;
  
  iVar1 = *(int *)(in_EAX + 300);
  if (((((*(int *)(*(int *)(*(int *)(param_1 + 0xbe8) + iVar1 * 4) + 0x34) == 0) &&
        (*(int *)(*(int *)(*(int *)(param_1 + 0xbe8) + *(int *)(in_EAX + 0x134) * 4) + 0x34) == 0))
       && (*(char *)(*(int *)(in_EAX + 0x5c) + 0x2a) != '\0')) &&
      ((cVar3 = FUN_0051af10(1), cVar3 != '\x01' && (cVar3 = FUN_0051af10(1), cVar3 != '\x01')))) &&
     (iVar1 != 0)) {
    iVar1 = *(int *)(DAT_012587e4 + 4);
    iVar2 = *(int *)(iVar1 + *(int *)(in_EAX + 300) * 4);
    if ((((*(char *)(iVar2 + 0xcf5) == '\0') && (*(char *)(iVar2 + 0xcf4) == '\0')) ||
        ((cVar3 = FUN_0051af10(1), cVar3 != '\x01' &&
         (*(int *)(*(int *)(*(int *)(param_1 + 0xbe8) +
                           *(int *)(*(int *)(iVar1 + *(int *)(in_EAX + 300) * 4) + 0xcfc) * 4) +
                  0x34) == 0)))) &&
       (((iVar2 = *(int *)(iVar1 + *(int *)(in_EAX + 0x134) * 4), *(char *)(iVar2 + 0xcf5) == '\0'
         && (*(char *)(iVar2 + 0xcf4) == '\0')) ||
        ((cVar3 = FUN_0051af10(1), cVar3 != '\x01' &&
         (*(int *)(*(int *)(*(int *)(param_1 + 0xbe8) +
                           *(int *)(*(int *)(iVar1 + *(int *)(in_EAX + 0x134) * 4) + 0xcfc) * 4) +
                  0x34) == 0)))))) {
      cVar3 = FUN_00416e40();
      return cVar3 != '\0';
    }
  }
  return true;
}

