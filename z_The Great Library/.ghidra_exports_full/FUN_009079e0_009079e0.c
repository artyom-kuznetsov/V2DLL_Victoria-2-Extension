// FUN_009079e0 @ 009079e0 body=[[009079e0, 00907a23] [00907a27, 00907a2d]]


void FUN_009079e0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = CMessageDialog<CExecuteDecisionCommand>::vftable;
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

