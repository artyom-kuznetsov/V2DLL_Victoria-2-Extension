// FUN_00804790 @ 00804790 body=[[00804790, 008047cb] [008047cf, 00804844] [00804848, 00804858] [0080485c, 00804864]]


void FUN_00804790(void)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int unaff_EDI;
  
  iVar4 = *(int *)(unaff_EDI + 0x10);
  while (iVar4 != 0) {
    if (*(int *)(unaff_EDI + 0x10) != 0) {
      uVar3 = *(int *)(unaff_EDI + 0x10) + -1 + *(int *)(unaff_EDI + 0xc);
      if (*(uint *)(unaff_EDI + 8) <= uVar3) {
        uVar3 = uVar3 - *(uint *)(unaff_EDI + 8);
      }
      piVar1 = *(int **)(*(int *)(unaff_EDI + 4) + uVar3 * 4);
      if (0xf < (uint)piVar1[0xe]) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(piVar1[9]);
      }
      piVar1[0xe] = 0xf;
      piVar1[0xd] = 0;
      *(undefined1 *)(piVar1 + 9) = 0;
      piVar2 = (int *)*piVar1;
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 8))(piVar2);
      }
      piVar2 = (int *)piVar1[1];
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 8))(piVar2);
      }
      piVar2 = (int *)piVar1[2];
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 8))(piVar2);
      }
      piVar1[2] = 0;
      *piVar1 = 0;
      piVar1[1] = 0;
      piVar1[3] = 0;
      piVar1[4] = 0;
      piVar1[7] = 0;
      piVar1 = (int *)(unaff_EDI + 0x10);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        *(undefined4 *)(unaff_EDI + 0xc) = 0;
      }
    }
    iVar4 = *(int *)(unaff_EDI + 0x10);
  }
  iVar4 = *(int *)(unaff_EDI + 8);
  while (iVar4 != 0) {
    iVar4 = iVar4 + -1;
    if (*(int *)(*(int *)(unaff_EDI + 4) + iVar4 * 4) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(*(undefined4 *)(*(int *)(unaff_EDI + 4) + iVar4 * 4));
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

