// FUN_00493e80 @ 00493e80 body=[[00493e80, 00493ec3] [00493ec7, 00493ecd]]


void FUN_00493e80(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = CMessageDialog<CInGameIdler>::vftable;
  in_ECX[0x60] = CButtonObserver::vftable;
  in_ECX[0x55] = CButtonObserver::vftable;
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

