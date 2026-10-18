// FUN_00909b10 @ 00909b10 body=[[00909b10, 00909b53] [00909b57, 00909b5d]]


void FUN_00909b10(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = CMessageDialog<CSelectEventOptionCommand>::vftable;
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

