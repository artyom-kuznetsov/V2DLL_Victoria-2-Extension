// FUN_009e78a0 @ 009e78a0 body=[[009e78a0, 009e78b8] [009e78bc, 009e78e3] [009e78e8, 009e78f3]]


void FUN_009e78a0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00e3c320;
  if (0xf < (uint)in_ECX[0xb]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[6]);
  }
  in_ECX[0xb] = 0xf;
  in_ECX[10] = 0;
  *(undefined1 *)(in_ECX + 6) = 0;
  if (in_ECX[2] != 0) {
    FUN_00413860();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[2]);
  }
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  return;
}

