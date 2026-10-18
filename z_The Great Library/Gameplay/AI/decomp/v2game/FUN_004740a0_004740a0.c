// FUN_004740a0 @ 004740a0 body=[[004740a0, 004740c8] [004740d3, 004740e8]]


void FUN_004740a0(void)

{
  undefined1 *puVar1;
  int iVar2;
  int unaff_EDI;
  
  puVar1 = (undefined1 *)(unaff_EDI + 0x18);
  iVar2 = 0x21;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 8;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  if (*(int *)(unaff_EDI + 8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(unaff_EDI + 8));
  }
  *(undefined4 *)(unaff_EDI + 8) = 0;
  *(undefined4 *)(unaff_EDI + 0xc) = 0;
  *(undefined4 *)(unaff_EDI + 0x10) = 0;
  return;
}

