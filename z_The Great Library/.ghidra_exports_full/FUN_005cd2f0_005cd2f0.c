// FUN_005cd2f0 @ 005cd2f0 body=[[005cd2f0, 005cd3cd]]


bool FUN_005cd2f0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  int in_ECX;
  
  iVar1 = *(int *)(*(int *)(in_ECX + 0xdc) + 0x134);
  if (*(int *)(param_1 + 0x134) != iVar1) {
    iVar2 = *(int *)(DAT_012587e4 + 4);
    iVar3 = *(int *)(iVar2 + *(int *)(param_1 + 0x134) * 4);
    iVar4 = *(int *)(iVar2 + *(int *)(*(int *)(in_ECX + 0xdc) + 0x134) * 4);
    if (((((*(char *)(iVar3 + 0xcf5) == '\0') && (*(char *)(iVar3 + 0xcf4) == '\0')) &&
         (*(char *)(iVar4 + 0xcf5) == '\0')) && (*(char *)(iVar4 + 0xcf4) == '\0')) ||
       ((*(int *)(iVar3 + 0xcfc) != iVar1 && (*(int *)(iVar4 + 0xcfc) != *(int *)(param_1 + 0x134)))
       )) {
      cVar5 = FUN_0051b040(*(undefined4 *)(iVar2 + *(int *)(in_ECX + 0xc4) * 4));
      return cVar5 == '\x01';
    }
  }
  return true;
}

