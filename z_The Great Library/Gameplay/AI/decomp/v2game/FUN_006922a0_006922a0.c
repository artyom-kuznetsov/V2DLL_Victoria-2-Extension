// FUN_006922a0 @ 006922a0 body=[[006922a0, 006922d0] [006922d4, 006922da]]


void FUN_006922a0(byte param_1)

{
  undefined4 *in_ECX;
  
  in_ECX[0x1c] = CCheckBoxObserver::vftable;
  in_ECX[0x17] = CTextBufferObserver::vftable;
  in_ECX[0xc] = CButtonObserver::vftable;
  in_ECX[1] = CButtonObserver::vftable;
  *in_ECX = CUpdateable::vftable;
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  return;
}

