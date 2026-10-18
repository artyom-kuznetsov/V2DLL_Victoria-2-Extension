// FUN_0048dff0 @ 0048dff0 body=[[0048dff0, 0048e008] [0048e012, 0048e060]]


void FUN_0048dff0(void)

{
  int *piVar1;
  int unaff_EDI;
  int local_8;
  
  if (*(int *)(unaff_EDI + 0x28) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(unaff_EDI + 0x28));
  }
  *(undefined4 *)(unaff_EDI + 0x28) = 0;
  *(undefined4 *)(unaff_EDI + 0x2c) = 0;
  *(undefined4 *)(unaff_EDI + 0x30) = 0;
  if (*(int *)(unaff_EDI + 0xc) != 0) {
    piVar1 = *(int **)(unaff_EDI + 4);
    while (piVar1 != (int *)0x0) {
      local_8 = *piVar1;
      piVar1 = (int *)piVar1[2];
      if ((*(int *)(local_8 + 300) != 0) && (*(int *)(local_8 + 0x158) != 0)) {
        FUN_0048ff00((undefined4 *)(unaff_EDI + 0x28),&local_8);
      }
    }
  }
  return;
}

