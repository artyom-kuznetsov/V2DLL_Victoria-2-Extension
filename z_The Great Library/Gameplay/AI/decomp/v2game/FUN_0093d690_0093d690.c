// FUN_0093d690 @ 0093d690 body=[[0093d690, 0093d6b2] [0093d6be, 0093d6d8]]


void FUN_0093d690(void)

{
  int iVar1;
  int unaff_EDI;
  
  iVar1 = *(int *)(*(int *)(unaff_EDI + 4) + 4);
  if (*(char *)(iVar1 + 0x15) == '\0') {
    FUN_00aa9f30(*(undefined4 *)(iVar1 + 8));
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(iVar1);
  }
  *(int *)(*(int *)(unaff_EDI + 4) + 4) = *(int *)(unaff_EDI + 4);
  *(undefined4 *)*(undefined4 *)(unaff_EDI + 4) = *(undefined4 *)(unaff_EDI + 4);
  *(int *)(*(int *)(unaff_EDI + 4) + 8) = *(int *)(unaff_EDI + 4);
  *(undefined4 *)(unaff_EDI + 8) = 0;
  return;
}

