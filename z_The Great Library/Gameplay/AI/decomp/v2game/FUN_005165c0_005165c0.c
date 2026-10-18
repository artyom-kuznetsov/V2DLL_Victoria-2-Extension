// FUN_005165c0 @ 005165c0 body=[[005165c0, 005165cc] [005165d0, 005165f8] [00516602, 00516621]]


void FUN_005165c0(void)

{
  int *piVar1;
  int unaff_EDI;
  
  for (piVar1 = *(int **)(unaff_EDI + 0xce4); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
    if ((undefined4 *)*piVar1 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar1)(1);
    }
  }
  if (*(int *)(unaff_EDI + 0xce4) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(unaff_EDI + 0xce4));
  }
  *(undefined4 *)(unaff_EDI + 0xce4) = 0;
  *(undefined4 *)(unaff_EDI + 0xce8) = 0;
  *(undefined4 *)(unaff_EDI + 0xcec) = 0;
  return;
}

