// FUN_009c1350 @ 009c1350 body=[[009c1350, 009c136c] [009c1370, 009c1380]]


void FUN_009c1350(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00e3a544;
  FUN_009c1650();
  if (0xf < (uint)in_ECX[10]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[5]);
  }
  in_ECX[10] = 0xf;
  in_ECX[9] = 0;
  *(undefined1 *)(in_ECX + 5) = 0;
  return;
}

