// FUN_005ac460 @ 005ac460 body=[[005ac460, 005ac4a3] [005ac4a7, 005ac4ad]]


void FUN_005ac460(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = CMessageDialog<CProvince>::vftable;
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

