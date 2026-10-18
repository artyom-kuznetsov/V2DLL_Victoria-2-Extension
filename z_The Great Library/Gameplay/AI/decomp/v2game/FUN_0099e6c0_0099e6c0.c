// FUN_0099e6c0 @ 0099e6c0 body=[[0099e6c0, 0099e708] [0099e711, 0099e719]]


void FUN_0099e6c0(void)

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
      if (*(char *)(iVar3 + 0x14) != '\0') break;
      iVar3 = *(int *)(iVar3 + 0x10);
    }
    iVar1 = *(int *)(iVar3 + 0x10);
    if ((char)unaff_EDI[3] == '\0') break;
    *(undefined1 *)(iVar3 + 0x14) = 1;
    iVar3 = iVar1;
  }
  iVar2 = *(int *)(iVar3 + 0xc);
  if (iVar2 != 0) {
    *(int *)(iVar2 + 0x10) = iVar1;
  }
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0xc) = iVar2;
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

