// FUN_00859560 @ 00859560  (requested 00859560, first bytes: 55 8B EC 56 8B F1 C7 06)


void FUN_00859560(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = CAIResearch::vftable;
  FUN_00825ec0();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  return;
}

