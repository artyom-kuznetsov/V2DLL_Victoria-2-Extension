// FUN_00444740 @ 00444740 body=[[00444740, 00444754] [00444758, 0044479f]]


void FUN_00444740(void)

{
  undefined4 *unaff_ESI;
  
  if (0xf < (uint)unaff_ESI[0x3e]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(unaff_ESI[0x39]);
  }
  unaff_ESI[0x3e] = 0xf;
  unaff_ESI[0x3d] = 0;
  *(undefined1 *)(unaff_ESI + 0x39) = 0;
  unaff_ESI[0x27] = CButtonObserver::vftable;
  unaff_ESI[0x1c] = CButtonObserver::vftable;
  unaff_ESI[0x11] = CButtonObserver::vftable;
  *unaff_ESI = CMapIcon::vftable;
  if ((int *)unaff_ESI[4] != (int *)0x0) {
    (**(code **)(*(int *)unaff_ESI[4] + 0x50))();
    unaff_ESI[4] = 0;
  }
  return;
}

