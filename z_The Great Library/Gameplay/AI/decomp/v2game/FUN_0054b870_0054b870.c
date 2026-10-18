// FUN_0054b870 @ 0054b870 body=[[0054b870, 0054b8b3] [0054b8b7, 0054b8bd]]


void FUN_0054b870(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = CMessageDialog<CEU3Idler>::vftable;
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

