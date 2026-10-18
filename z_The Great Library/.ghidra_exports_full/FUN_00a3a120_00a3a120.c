// FUN_00a3a120 @ 00a3a120 body=[[00a3a120, 00a3a13b]]


void FUN_00a3a120(void)

{
  char cVar1;
  int iVar2;
  int in_EAX;
  
  iVar2 = *(int *)(in_EAX + 8);
  cVar1 = *(char *)(iVar2 + 0x41);
  while (cVar1 == '\0') {
    iVar2 = *(int *)(iVar2 + 8);
    cVar1 = *(char *)(iVar2 + 0x41);
  }
  return;
}

