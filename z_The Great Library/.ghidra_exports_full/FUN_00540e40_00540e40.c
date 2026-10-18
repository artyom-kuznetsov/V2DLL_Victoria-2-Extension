// FUN_00540e40 @ 00540e40 body=[[00540e40, 00540e79]]


int FUN_00540e40(void)

{
  int iVar1;
  int iVar2;
  int in_EDX;
  int *piVar3;
  int unaff_EDI;
  
  iVar1 = *(int *)(in_EDX + 0x1594) - *(int *)(in_EDX + 0x1590) >> 2;
  iVar2 = 0;
  if (0 < iVar1) {
    piVar3 = *(int **)(in_EDX + 0x1590);
    do {
      if (*(int *)(*piVar3 + 0xc) == unaff_EDI) {
        return (*(int **)(in_EDX + 0x1590))[iVar2];
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar2 < iVar1);
  }
  return 0;
}

