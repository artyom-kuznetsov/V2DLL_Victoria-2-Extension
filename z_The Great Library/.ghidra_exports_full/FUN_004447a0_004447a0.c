// FUN_004447a0 @ 004447a0 body=[[004447a0, 004447b4] [004447b8, 004447e2] [004447e6, 00444815]]


void FUN_004447a0(void)

{
  undefined4 *unaff_ESI;
  
  if (0xf < (uint)unaff_ESI[0x27]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(unaff_ESI[0x22]);
  }
  unaff_ESI[0x27] = 0xf;
  unaff_ESI[0x26] = 0;
  *(undefined1 *)(unaff_ESI + 0x22) = 0;
  if (0xf < (uint)unaff_ESI[0x20]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(unaff_ESI[0x1b]);
  }
  unaff_ESI[0x20] = 0xf;
  unaff_ESI[0x1f] = 0;
  *(undefined1 *)(unaff_ESI + 0x1b) = 0;
  unaff_ESI[0xf] = CButtonObserver::vftable;
  *unaff_ESI = CMapIcon::vftable;
  if ((int *)unaff_ESI[4] != (int *)0x0) {
    (**(code **)(*(int *)unaff_ESI[4] + 0x50))();
    unaff_ESI[4] = 0;
  }
  return;
}

