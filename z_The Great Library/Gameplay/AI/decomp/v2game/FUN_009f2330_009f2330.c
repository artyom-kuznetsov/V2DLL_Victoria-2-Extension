// FUN_009f2330 @ 009f2330 body=[[009f2330, 009f2347] [009f234b, 009f235b]]


void FUN_009f2330(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00e3cffc;
  if (0xf < (uint)in_ECX[7]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[2]);
  }
  in_ECX[7] = 0xf;
  in_ECX[6] = 0;
  *(undefined1 *)(in_ECX + 2) = 0;
  return;
}

