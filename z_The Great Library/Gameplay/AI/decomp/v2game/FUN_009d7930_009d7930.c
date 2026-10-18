// FUN_009d7930 @ 009d7930 body=[[009d7930, 009d7947] [009d794b, 009d795b]]


void FUN_009d7930(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00e3b540;
  if (0xf < (uint)in_ECX[10]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[5]);
  }
  in_ECX[10] = 0xf;
  in_ECX[9] = 0;
  *(undefined1 *)(in_ECX + 5) = 0;
  return;
}

