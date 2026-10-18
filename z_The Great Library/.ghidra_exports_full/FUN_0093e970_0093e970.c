// FUN_0093e970 @ 0093e970 body=[[0093e970, 0093e9b3] [0093e9b7, 0093e9bd]]


void FUN_0093e970(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = CMessageDialog<CWar>::vftable;
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

