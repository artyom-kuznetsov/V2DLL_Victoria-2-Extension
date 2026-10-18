// FUN_0042c9d0 @ 0042c9d0 body=[[0042c9d0, 0042ca13] [0042ca17, 0042ca1d]]


void FUN_0042c9d0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = CMessageDialog<CCountry>::vftable;
  in_ECX[0x5e] = CButtonObserver::vftable;
  in_ECX[0x53] = CButtonObserver::vftable;
  in_ECX[0x46] = CButtonObserver::vftable;
  in_ECX[0x3b] = CButtonObserver::vftable;
  FUN_006a81a0();
  FUN_00640880();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  return;
}

