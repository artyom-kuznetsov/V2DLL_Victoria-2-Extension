// FUN_005890c0 @ 005890c0 body=[[005890c0, 005890eb]]


void FUN_005890c0(void)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  
  iVar2 = DAT_012588e8;
  cVar1 = *(char *)(in_ECX + 0x3c);
  if (cVar1 != '\0') {
    FUN_0068e1e0(DAT_012588e8,cVar1);
  }
  *(char *)(iVar2 + 0xb95) = cVar1;
  return;
}

