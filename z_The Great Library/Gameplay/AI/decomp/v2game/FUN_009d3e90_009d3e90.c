// FUN_009d3e90 @ 009d3e90 body=[[009d3e90, 009d3ee7]]


void FUN_009d3e90(void)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *in_EAX;
  
  iVar2 = *in_EAX;
  if (*(char *)(iVar2 + 0x129) == '\0') {
    piVar3 = *(int **)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x129) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x129);
      piVar4 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x129);
        piVar3 = piVar4;
        piVar4 = (int *)*piVar4;
      }
      *in_EAX = (int)piVar3;
      return;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x129);
    while ((cVar1 == '\0' && (*in_EAX == *(int *)(iVar2 + 8)))) {
      *in_EAX = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x129);
    }
    *in_EAX = iVar2;
  }
  return;
}

