// FUN_00868540 @ 00868540 body=[[00868540, 0086857a] [0086857e, 008685b3] [008685b7, 008685c7] [008685cb, 008685d3]]


void FUN_00868540(void)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  int unaff_ESI;
  int iVar4;
  
  iVar4 = *(int *)(unaff_ESI + 0x10);
  while (iVar4 != 0) {
    if (*(int *)(unaff_ESI + 0x10) != 0) {
      uVar3 = *(int *)(unaff_ESI + 0x10) + -1 + *(int *)(unaff_ESI + 0xc);
      if (*(uint *)(unaff_ESI + 8) <= uVar3) {
        uVar3 = uVar3 - *(uint *)(unaff_ESI + 8);
      }
      puVar2 = *(undefined4 **)(*(int *)(unaff_ESI + 4) + uVar3 * 4);
      if (0xf < (uint)puVar2[5]) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(*puVar2);
      }
      puVar2[5] = 0xf;
      puVar2[4] = 0;
      *(undefined1 *)puVar2 = 0;
      piVar1 = (int *)(unaff_ESI + 0x10);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        *(undefined4 *)(unaff_ESI + 0xc) = 0;
      }
    }
    iVar4 = *(int *)(unaff_ESI + 0x10);
  }
  iVar4 = *(int *)(unaff_ESI + 8);
  while (iVar4 != 0) {
    iVar4 = iVar4 + -1;
    if (*(int *)(*(int *)(unaff_ESI + 4) + iVar4 * 4) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(*(undefined4 *)(*(int *)(unaff_ESI + 4) + iVar4 * 4));
    }
  }
  if (*(int *)(unaff_ESI + 4) == 0) {
    *(undefined4 *)(unaff_ESI + 4) = 0;
    *(undefined4 *)(unaff_ESI + 8) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(*(int *)(unaff_ESI + 4));
}

