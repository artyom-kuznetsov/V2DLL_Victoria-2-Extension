// FUN_00592ad0 @ 00592ad0 body=[[00592ad0, 00592b28]]


void FUN_00592ad0(void)

{
  int iVar1;
  int *piVar2;
  int *unaff_ESI;
  int unaff_EDI;
  
  FUN_00401000(0x3f000000);
  iVar1 = FUN_00b31c00();
  *unaff_ESI = iVar1;
  iVar1 = *(int *)(unaff_EDI + 0x30) - *(int *)(unaff_EDI + 0x2c) >> 2;
  if (0 < iVar1) {
    piVar2 = *(int **)(unaff_EDI + 0x2c);
    do {
      *unaff_ESI = *unaff_ESI + *piVar2 * 1000;
      piVar2 = piVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

