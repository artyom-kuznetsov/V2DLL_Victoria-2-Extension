// FUN_004446c0 @ 004446c0 body=[[004446c0, 004446d4] [004446d8, 00444700] [00444704, 00444739]]


void FUN_004446c0(void)

{
  undefined4 *unaff_ESI;
  
  if (0xf < (uint)unaff_ESI[0x34]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(unaff_ESI[0x2f]);
  }
  unaff_ESI[0x34] = 0xf;
  unaff_ESI[0x33] = 0;
  *(undefined1 *)(unaff_ESI + 0x2f) = 0;
  if (unaff_ESI[0x25] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(unaff_ESI[0x25]);
  }
  unaff_ESI[0x25] = 0;
  unaff_ESI[0x26] = 0;
  unaff_ESI[0x27] = 0;
  unaff_ESI[0x16] = CButtonObserver::vftable;
  unaff_ESI[0xb] = CButtonObserver::vftable;
  *unaff_ESI = CMapIcon::vftable;
  if ((int *)unaff_ESI[4] != (int *)0x0) {
    (**(code **)(*(int *)unaff_ESI[4] + 0x50))();
    unaff_ESI[4] = 0;
  }
  return;
}

