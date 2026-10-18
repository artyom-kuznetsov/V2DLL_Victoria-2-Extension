// FUN_00646150 @ 00646150 body=[[00646150, 0064617b] [0064617f, 00646185]]


void FUN_00646150(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = CEU3Gui::vftable;
  in_ECX[1] = CEU3Gui::vftable;
  in_ECX[3] = CEU3Gui::vftable;
  FUN_009a3030(in_ECX);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  return;
}

