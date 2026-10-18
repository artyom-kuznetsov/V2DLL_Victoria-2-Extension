// FUN_004460d0 @ 004460d0 body=[[004460d0, 00446107]]


void FUN_004460d0(void)

{
  undefined4 *unaff_ESI;
  
  FUN_005c5e00(unaff_ESI);
  unaff_ESI[0x6d] = 0;
  unaff_ESI[0x6a] = 0;
  unaff_ESI[0x69] = 0;
  unaff_ESI[0x6c] = 0;
  *(undefined1 *)(unaff_ESI + 0x6b) = 0;
  *unaff_ESI = CArmy::vftable;
  unaff_ESI[2] = CArmy::vftable;
  return;
}

