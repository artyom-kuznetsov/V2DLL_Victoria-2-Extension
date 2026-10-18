// FUN_00520e60 @ 00520e60 body=[[00520e60, 00520e6c] [00520e70, 00520e98] [00520ea2, 00520ec1]]


void FUN_00520e60(void)

{
  int *piVar1;
  int unaff_EDI;
  
  for (piVar1 = *(int **)(unaff_EDI + 0xe44); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
    if ((undefined4 *)*piVar1 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar1)(1);
    }
  }
  if (*(int *)(unaff_EDI + 0xe44) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(unaff_EDI + 0xe44));
  }
  *(undefined4 *)(unaff_EDI + 0xe44) = 0;
  *(undefined4 *)(unaff_EDI + 0xe48) = 0;
  *(undefined4 *)(unaff_EDI + 0xe4c) = 0;
  return;
}

