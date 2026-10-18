// FUN_00815c00 @ 00815c00 body=[[00815c00, 00815c39] [00815c47, 00815c66] [00815c6a, 00815c7a] [00815c7e, 00815c86]]


void FUN_00815c00(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int unaff_EDI;
  
  iVar3 = *(int *)(unaff_EDI + 0x10);
  while (iVar3 != 0) {
    if (*(int *)(unaff_EDI + 0x10) != 0) {
      uVar2 = *(int *)(unaff_EDI + 0x10) + -1 + *(int *)(unaff_EDI + 0xc);
      if (*(uint *)(unaff_EDI + 8) <= uVar2) {
        uVar2 = uVar2 - *(uint *)(unaff_EDI + 8);
      }
      puVar1 = *(undefined4 **)(*(int *)(unaff_EDI + 4) + uVar2 * 4);
      FUN_0098bf40();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(*puVar1);
    }
    iVar3 = *(int *)(unaff_EDI + 0x10);
  }
  iVar3 = *(int *)(unaff_EDI + 8);
  while (iVar3 != 0) {
    iVar3 = iVar3 + -1;
    if (*(int *)(*(int *)(unaff_EDI + 4) + iVar3 * 4) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(*(undefined4 *)(*(int *)(unaff_EDI + 4) + iVar3 * 4));
    }
  }
  if (*(int *)(unaff_EDI + 4) == 0) {
    *(undefined4 *)(unaff_EDI + 4) = 0;
    *(undefined4 *)(unaff_EDI + 8) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(*(int *)(unaff_EDI + 4));
}

