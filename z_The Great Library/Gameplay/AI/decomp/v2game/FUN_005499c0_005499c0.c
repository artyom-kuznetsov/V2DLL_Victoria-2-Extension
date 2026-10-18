// FUN_005499c0 @ 005499c0 body=[[005499c0, 00549a08] [00549a11, 00549a19]]


void FUN_005499c0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *unaff_EDI;
  
  *(undefined1 *)(unaff_EDI + 3) = 0;
  iVar3 = *unaff_EDI;
  while( true ) {
    while( true ) {
      if (iVar3 == 0) {
        return;
      }
      if (*(char *)(iVar3 + 0xc) != '\0') break;
      iVar3 = *(int *)(iVar3 + 8);
    }
    iVar1 = *(int *)(iVar3 + 8);
    if ((char)unaff_EDI[3] == '\0') break;
    *(undefined1 *)(iVar3 + 0xc) = 1;
    iVar3 = iVar1;
  }
  iVar2 = *(int *)(iVar3 + 4);
  if (iVar2 != 0) {
    *(int *)(iVar2 + 8) = iVar1;
  }
  if (iVar1 != 0) {
    *(int *)(iVar1 + 4) = iVar2;
  }
  if (iVar3 == *unaff_EDI) {
    *unaff_EDI = iVar1;
  }
  if (iVar3 == unaff_EDI[1]) {
    unaff_EDI[1] = iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(iVar3);
}

