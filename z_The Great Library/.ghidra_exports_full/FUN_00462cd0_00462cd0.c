// FUN_00462cd0 @ 00462cd0 body=[[00462cd0, 00462d1a]]


void FUN_00462cd0(void)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *in_EAX;
  
  iVar2 = *in_EAX;
  if (*(char *)(iVar2 + 0x2d) == '\0') {
    piVar3 = *(int **)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x2d) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x2d);
      piVar4 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x2d);
        piVar3 = piVar4;
        piVar4 = (int *)*piVar4;
      }
      *in_EAX = (int)piVar3;
      return;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x2d);
    while ((cVar1 == '\0' && (*in_EAX == *(int *)(iVar2 + 8)))) {
      *in_EAX = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x2d);
    }
    *in_EAX = iVar2;
  }
  return;
}

