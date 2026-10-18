// FUN_006c7130 @ 006c7130 body=[[006c7130, 006c716b] [006c716f, 006c7177]]


int FUN_006c7130(uint param_1)

{
  int in_ECX;
  
  *(undefined ***)(in_ECX + 0x60) = CButtonObserverGlue<COutlinerEntry>::vftable;
  FUN_00779a30();
  FUN_009b1e70();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX);
  }
  return in_ECX;
}

