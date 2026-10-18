// FUN_0055da90 @ 0055da90 body=[[0055da90, 0055dae2]]


void FUN_0055da90(void)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *in_EAX;
  
  piVar2 = (int *)*in_EAX;
  if (*(char *)((int)piVar2 + 0x45) != '\0') {
    *in_EAX = piVar2[2];
    return;
  }
  iVar3 = *piVar2;
  if (*(char *)(iVar3 + 0x45) != '\0') {
    piVar2 = (int *)piVar2[1];
    cVar1 = *(char *)((int)piVar2 + 0x45);
    while ((cVar1 == '\0' && (*in_EAX == *piVar2))) {
      *in_EAX = (int)piVar2;
      piVar2 = (int *)piVar2[1];
      cVar1 = *(char *)((int)piVar2 + 0x45);
    }
    if (*(char *)(*in_EAX + 0x45) == '\0') {
      *in_EAX = (int)piVar2;
    }
    return;
  }
  cVar1 = *(char *)(*(int *)(iVar3 + 8) + 0x45);
  iVar4 = *(int *)(iVar3 + 8);
  while (cVar1 == '\0') {
    cVar1 = *(char *)(*(int *)(iVar4 + 8) + 0x45);
    iVar3 = iVar4;
    iVar4 = *(int *)(iVar4 + 8);
  }
  *in_EAX = iVar3;
  return;
}

