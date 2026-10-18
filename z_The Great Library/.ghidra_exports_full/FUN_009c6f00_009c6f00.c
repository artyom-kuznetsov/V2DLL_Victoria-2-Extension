// FUN_009c6f00 @ 009c6f00 body=[[009c6f00, 009c6f18] [009c6f1c, 009c6f39] [009c6f3d, 009c6f4c]]


void FUN_009c6f00(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00e3aef0;
  if (0xf < (uint)in_ECX[0xe]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[9]);
  }
  in_ECX[0xe] = 0xf;
  in_ECX[0xd] = 0;
  *(undefined1 *)(in_ECX + 9) = 0;
  if (0xf < (uint)in_ECX[7]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[2]);
  }
  in_ECX[6] = 0;
  in_ECX[7] = 0xf;
  *(undefined1 *)(in_ECX + 2) = 0;
  return;
}

