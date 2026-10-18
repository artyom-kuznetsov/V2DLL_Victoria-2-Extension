// FUN_0072e960 @ 0072e960 body=[[0072e960, 0072e9a3] [0072e9a7, 0072e9ad]]


void FUN_0072e960(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = CMessageDialog<CCancelMissionCommand>::vftable;
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

