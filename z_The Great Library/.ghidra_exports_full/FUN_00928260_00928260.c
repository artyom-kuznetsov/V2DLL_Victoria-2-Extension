// FUN_00928260 @ 00928260 body=[[00928260, 009282f6]]


undefined4 FUN_00928260(void)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int in_ECX;
  
  iVar1 = *(int *)(*(int *)(DAT_012588e8 + 0xcf8) + 8);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x60) == *(int *)(in_ECX + 0x14))) {
    iVar5 = FUN_00425a40();
    iVar2 = *(int *)(in_ECX + 0xc);
    if ((*(int *)(iVar5 + 4) == iVar2) || (cVar4 = '\0', *(int *)(iVar1 + 0x18) == iVar2)) {
      cVar4 = '\x01';
    }
    iVar5 = FUN_00425ac0();
    if ((*(int *)(iVar5 + 4) == iVar2) || (*(int *)(iVar1 + 0x20) == iVar2)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if ((cVar4 != '\0') || (bVar3)) {
      cVar4 = FUN_00425e20(cVar4);
      if (cVar4 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}

