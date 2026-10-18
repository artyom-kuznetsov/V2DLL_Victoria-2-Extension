// FUN_00a2cf10 @ 00a2cf10 body=[[00a2cf10, 00a2cf2b]]


void FUN_00a2cf10(void)

{
  char cVar1;
  int iVar2;
  int in_EAX;
  
  iVar2 = *(int *)(in_EAX + 8);
  cVar1 = *(char *)(iVar2 + 0x31);
  while (cVar1 == '\0') {
    iVar2 = *(int *)(iVar2 + 8);
    cVar1 = *(char *)(iVar2 + 0x31);
  }
  return;
}

