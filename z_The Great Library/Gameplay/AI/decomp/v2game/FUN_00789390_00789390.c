// FUN_00789390 @ 00789390 body=[[00789390, 00789435]]


bool FUN_00789390(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  
  cVar1 = FUN_005e5800();
  if (cVar1 == '\0') {
    return false;
  }
  iVar2 = FUN_009c16d0(*(undefined4 *)(in_ECX + 0x6c),*(undefined4 *)(in_ECX + 0x70));
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = iVar2 + -8;
  }
  iVar2 = *(int *)(iVar2 + 0xd8);
  iVar3 = DAT_01258a94;
  if (*(uint *)(in_ECX + 0xbc) < 0x1269) {
    iVar3 = DAT_01258a98;
  }
  if (iVar3 != 0) {
    iVar3 = FUN_009c1d40();
    *(int *)(in_ECX + 0xb8) = iVar3;
    return iVar2 == iVar3;
  }
  *(undefined4 *)(in_ECX + 0xb8) = 0;
  return iVar2 == 0;
}

