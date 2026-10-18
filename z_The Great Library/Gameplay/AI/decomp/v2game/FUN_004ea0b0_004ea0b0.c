// FUN_004ea0b0 @ 004ea0b0 body=[[004ea0b0, 004ea0f3] [004ea0f7, 004ea0fd]]


void FUN_004ea0b0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = CMessageDialog<CMessageHandler>::vftable;
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

