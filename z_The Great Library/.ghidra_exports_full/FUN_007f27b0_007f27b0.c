// FUN_007f27b0 @ 007f27b0 body=[[007f27b0, 007f27be] [007f27c2, 007f2810]]


void FUN_007f27b0(void)

{
  int *piVar1;
  int *unaff_ESI;
  
  if (0xf < (uint)unaff_ESI[0xe]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(unaff_ESI[9]);
  }
  unaff_ESI[0xe] = 0xf;
  unaff_ESI[0xd] = 0;
  *(undefined1 *)(unaff_ESI + 9) = 0;
  piVar1 = (int *)*unaff_ESI;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)unaff_ESI[1];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)unaff_ESI[2];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  unaff_ESI[2] = 0;
  *unaff_ESI = 0;
  unaff_ESI[1] = 0;
  unaff_ESI[3] = 0;
  unaff_ESI[4] = 0;
  unaff_ESI[7] = 0;
  return;
}

