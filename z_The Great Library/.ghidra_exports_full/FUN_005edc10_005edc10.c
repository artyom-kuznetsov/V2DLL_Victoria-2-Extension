// FUN_005edc10 @ 005edc10 body=[[005edc10, 005edc43]]


void FUN_005edc10(void)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  int *unaff_ESI;
  int *unaff_EDI;
  
  cVar2 = (**(code **)(*unaff_EDI + 0x20))();
  if (cVar2 != '\0') {
    unaff_EDI[2] = *unaff_ESI;
    return;
  }
  piVar3 = (int *)unaff_EDI[3];
  if (piVar3 != (int *)0x0) {
    do {
      iVar1 = *piVar3;
      piVar3 = (int *)piVar3[2];
      *(int *)(iVar1 + 8) = *unaff_ESI;
    } while (piVar3 != (int *)0x0);
    unaff_EDI[2] = *unaff_ESI;
    return;
  }
  unaff_EDI[2] = *unaff_ESI;
  return;
}

