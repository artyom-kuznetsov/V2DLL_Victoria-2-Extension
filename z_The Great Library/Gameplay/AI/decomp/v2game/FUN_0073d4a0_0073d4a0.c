// FUN_0073d4a0 @ 0073d4a0 body=[[0073d4a0, 0073d4d2]]


void FUN_0073d4a0(void)

{
  undefined4 *unaff_ESI;
  
  unaff_ESI[0x41] = CButtonObserver::vftable;
  unaff_ESI[0x36] = CButtonObserver::vftable;
  unaff_ESI[0x2e] = CCheckBoxObserver::vftable;
  unaff_ESI[0x26] = CCheckBoxObserver::vftable;
  unaff_ESI[0x1e] = CCheckBoxObserver::vftable;
  unaff_ESI[0x16] = CCheckBoxObserver::vftable;
  unaff_ESI[0xb] = CButtonObserver::vftable;
  *unaff_ESI = CButtonObserver::vftable;
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

