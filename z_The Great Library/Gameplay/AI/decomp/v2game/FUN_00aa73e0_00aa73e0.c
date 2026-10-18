// FUN_00aa73e0 @ 00aa73e0 body=[[00aa73e0, 00aa7433]]


void FUN_00aa73e0(void)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  int *in_ECX;
  int iVar4;
  int *piVar5;
  
  puVar2 = (undefined4 *)*in_ECX;
  if (*(char *)((int)puVar2 + 0x25) != '\0') {
    *in_ECX = puVar2[2];
    return;
  }
  piVar5 = (int *)*puVar2;
  if (*(char *)((int)piVar5 + 0x25) == '\0') {
    iVar3 = piVar5[2];
    if (*(char *)(piVar5[2] + 0x25) == '\0') {
      do {
        iVar4 = iVar3;
        iVar3 = *(int *)(iVar4 + 8);
      } while (*(char *)(iVar3 + 0x25) == '\0');
      *in_ECX = iVar4;
      return;
    }
  }
  else {
    piVar5 = (int *)puVar2[1];
    cVar1 = *(char *)((int)piVar5 + 0x25);
    while ((cVar1 == '\0' && (*in_ECX == *piVar5))) {
      *in_ECX = (int)piVar5;
      piVar5 = (int *)piVar5[1];
      cVar1 = *(char *)((int)piVar5 + 0x25);
    }
    if (*(char *)(*in_ECX + 0x25) != '\0') {
      return;
    }
  }
  *in_ECX = (int)piVar5;
  return;
}

