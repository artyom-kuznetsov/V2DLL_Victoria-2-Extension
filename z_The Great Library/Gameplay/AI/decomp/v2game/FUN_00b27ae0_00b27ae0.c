// FUN_00b27ae0 @ 00b27ae0 body=[[00b27ae0, 00b27b5d]]


int * FUN_00b27ae0(void)

{
  char cVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  char *unaff_EDI;
  
  piVar2 = (int *)(*DAT_013f3aa8)(0xc,0);
  if (piVar2 == (int *)0x0) {
    FUN_00b1f840("Out of memory");
    return (int *)0x0;
  }
  *piVar2 = 0;
  piVar2[1] = 0;
  piVar2[2] = 0;
  pcVar3 = unaff_EDI;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  iVar4 = (*DAT_013f3aa8)(pcVar3 + (1 - (int)(unaff_EDI + 1)),0);
  if (iVar4 == 0) {
    (*DAT_013f3ab0)(piVar2);
    FUN_00b1f840("Out of memory");
    return (int *)0x0;
  }
  *piVar2 = iVar4;
  iVar4 = iVar4 - (int)unaff_EDI;
  do {
    cVar1 = *unaff_EDI;
    unaff_EDI[iVar4] = cVar1;
    unaff_EDI = unaff_EDI + 1;
  } while (cVar1 != '\0');
  return piVar2;
}

