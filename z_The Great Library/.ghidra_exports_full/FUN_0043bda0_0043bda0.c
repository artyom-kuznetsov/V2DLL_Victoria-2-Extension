// FUN_0043bda0 @ 0043bda0 body=[[0043bda0, 0043bdb4] [0043bdb8, 0043bdd6] [0043bdda, 0043bde8]]


void FUN_0043bda0(void)

{
  undefined4 *unaff_ESI;
  
  *unaff_ESI = &PTR_FUN_00e3aef0;
  if (0xf < (uint)unaff_ESI[0xe]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(unaff_ESI[9]);
  }
  unaff_ESI[0xe] = 0xf;
  unaff_ESI[0xd] = 0;
  *(undefined1 *)(unaff_ESI + 9) = 0;
  if (0xf < (uint)unaff_ESI[7]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(unaff_ESI[2]);
  }
  unaff_ESI[6] = 0;
  unaff_ESI[7] = 0xf;
  *(undefined1 *)(unaff_ESI + 2) = 0;
  return;
}

