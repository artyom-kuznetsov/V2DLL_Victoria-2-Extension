// FUN_009dc4a0 @ 009dc4a0 body=[[009dc4a0, 009dc4cd] [009dc4d1, 009dc4f2] [009dc4f6, 009dc505]]


void FUN_009dc4a0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00e3bae0;
  if ((FILE *)in_ECX[0xc] != (FILE *)0x0) {
    _fclose((FILE *)in_ECX[0xc]);
  }
  in_ECX[0xc] = 0;
  if (0xf < (uint)in_ECX[0x12]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0xd]);
  }
  in_ECX[0x12] = 0xf;
  in_ECX[0x11] = 0;
  *(undefined1 *)(in_ECX + 0xd) = 0;
  *in_ECX = &PTR_FUN_00e3b540;
  if (0xf < (uint)in_ECX[10]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[5]);
  }
  in_ECX[9] = 0;
  in_ECX[10] = 0xf;
  *(undefined1 *)(in_ECX + 5) = 0;
  return;
}

