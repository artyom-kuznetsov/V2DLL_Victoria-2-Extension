// FUN_00aa7350 @ 00aa7350 body=[[00aa7350, 00aa736c]]


void FUN_00aa7350(int param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 8);
  cVar1 = *(char *)(iVar2 + 0x25);
  while (cVar1 == '\0') {
    iVar2 = *(int *)(iVar2 + 8);
    cVar1 = *(char *)(iVar2 + 0x25);
  }
  return;
}

