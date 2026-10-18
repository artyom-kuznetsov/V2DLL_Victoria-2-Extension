// FUN_00927130 @ 00927130 body=[[00927130, 00927218]]


undefined4 FUN_00927130(char param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int in_ECX;
  
  iVar1 = *(int *)(DAT_012587e4 + 4);
  iVar4 = *(int *)(iVar1 + *(int *)(in_ECX + 0xc) * 4);
  iVar2 = *(int *)(iVar4 + 0x141c);
  iVar4 = *(int *)(iVar4 + 0x1418);
  if (iVar4 != iVar2) {
    do {
      if (*(int *)(iVar4 + 4) == *(int *)(in_ECX + 0x14)) break;
      iVar4 = iVar4 + 8;
    } while (iVar4 != iVar2);
    if (iVar4 != iVar2) {
      return 0;
    }
  }
  iVar4 = *(int *)(iVar1 + *(int *)(in_ECX + 0x14) * 4);
  if ((*(char *)(iVar4 + 0xcf5) == '\0') && (*(char *)(iVar4 + 0xcf4) == '\0')) {
    iVar1 = *(int *)(iVar1 + *(int *)(in_ECX + 0xc) * 4);
    iVar4 = *(int *)(*(int *)(iVar1 + 0xbe8) + *(int *)(in_ECX + 0x14) * 4);
    if ((*(int *)(iVar4 + 0x3c) <= *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x480)) &&
       (((*(int *)(iVar1 + 0x156c) == 0 && (*(int *)(iVar4 + 0x34) == 0)) &&
        (cVar3 = FUN_0092e270(), cVar3 == '\0')))) {
      if (param_1 != '\0') {
        return 1;
      }
      if (*(int *)(in_ECX + 0x28) != 0) {
        uVar5 = FUN_0090d960(in_ECX + 8);
        return uVar5;
      }
    }
  }
  return 0;
}

