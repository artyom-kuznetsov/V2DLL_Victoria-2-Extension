// FUN_009d3e50 @ 009d3e50 body=[[009d3e50, 009d3e6e]]


void FUN_009d3e50(void)

{
  char cVar1;
  int iVar2;
  int in_EAX;
  
  iVar2 = *(int *)(in_EAX + 8);
  cVar1 = *(char *)(iVar2 + 0x129);
  while (cVar1 == '\0') {
    iVar2 = *(int *)(iVar2 + 8);
    cVar1 = *(char *)(iVar2 + 0x129);
  }
  return;
}

