// FUN_006ca820 @ 006ca820 body=[[006ca820, 006ca848] [006ca84c, 006ca854]]


undefined4 * FUN_006ca820(uint param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = CButtonObserverGlue<COutlinerEntry>::vftable;
  FUN_00779a30();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX);
  }
  return in_ECX;
}

