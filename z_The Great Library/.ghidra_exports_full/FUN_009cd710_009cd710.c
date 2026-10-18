// FUN_009cd710 @ 009cd710 body=[[009cd710, 009cd727] [009cd72b, 009cd73b]]


void FUN_009cd710(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00e3b228;
  if (0xf < (uint)in_ECX[8]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[3]);
  }
  in_ECX[8] = 0xf;
  in_ECX[7] = 0;
  *(undefined1 *)(in_ECX + 3) = 0;
  return;
}

