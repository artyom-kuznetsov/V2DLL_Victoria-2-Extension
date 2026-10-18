// FUN_004a2e00 @ 004a2e00 body=[[004a2e00, 004a2e22] [004a2e2e, 004a2e48]]


void FUN_004a2e00(void)

{
  int iVar1;
  int unaff_EDI;
  
  iVar1 = *(int *)(*(int *)(unaff_EDI + 4) + 4);
  if (*(char *)(iVar1 + 0x11) == '\0') {
    FUN_004a2e50(*(undefined4 *)(iVar1 + 8));
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(iVar1);
  }
  *(int *)(*(int *)(unaff_EDI + 4) + 4) = *(int *)(unaff_EDI + 4);
  *(undefined4 *)*(undefined4 *)(unaff_EDI + 4) = *(undefined4 *)(unaff_EDI + 4);
  *(int *)(*(int *)(unaff_EDI + 4) + 8) = *(int *)(unaff_EDI + 4);
  *(undefined4 *)(unaff_EDI + 8) = 0;
  return;
}

