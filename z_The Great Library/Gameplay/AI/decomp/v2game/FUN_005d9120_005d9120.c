// FUN_005d9120 @ 005d9120 body=[[005d9120, 005d9173]]


void FUN_005d9120(void)

{
  int iVar1;
  int *in_EAX;
  int in_ECX;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  piVar2 = *(int **)(in_ECX + 0x38);
  *in_EAX = 100000;
  if (piVar2 == (int *)0x0) {
    *in_EAX = 0;
    return;
  }
  do {
    iVar3 = *piVar2;
    iVar1 = *(int *)(iVar3 + 0x74);
    piVar2 = (int *)piVar2[2];
    if ((iVar1 == 0) || (*(char *)(iVar1 + 0x164) == '\0')) {
      iVar4 = *(int *)(iVar3 + 0x40);
    }
    else {
      iVar4 = 0;
    }
    if (iVar4 < *in_EAX) {
      if ((iVar1 == 0) || (*(char *)(iVar1 + 0x164) == '\0')) {
        iVar3 = *(int *)(iVar3 + 0x40);
      }
      else {
        iVar3 = 0;
      }
      *in_EAX = iVar3;
    }
  } while (piVar2 != (int *)0x0);
  return;
}

