// FUN_009a9b50 @ 009a9b50 body=[[009a9b50, 009a9b67] [009a9b6b, 009a9b7b]]


void FUN_009a9b50(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00e38ecc;
  if (0xf < (uint)in_ECX[7]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[2]);
  }
  in_ECX[7] = 0xf;
  in_ECX[6] = 0;
  *(undefined1 *)(in_ECX + 2) = 0;
  return;
}

