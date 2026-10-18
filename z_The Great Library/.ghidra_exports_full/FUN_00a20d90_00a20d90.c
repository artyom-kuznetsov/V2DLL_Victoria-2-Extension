// FUN_00a20d90 @ 00a20d90 body=[[00a20d90, 00a20d9f] [00a20da3, 00a20dad]]


void FUN_00a20d90(void)

{
  int iVar1;
  int iVar2;
  int unaff_EDI;
  
  iVar2 = 0;
  do {
    iVar1 = *(int *)(unaff_EDI + iVar2 * 4);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(iVar1);
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x100);
  return;
}

