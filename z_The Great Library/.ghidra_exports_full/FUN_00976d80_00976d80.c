// FUN_00976d80 @ 00976d80 body=[[00976d80, 00976db1]]


void FUN_00976d80(void)

{
  undefined4 *unaff_ESI;
  
  unaff_ESI[1] = 0x18d;
  *unaff_ESI = CPartyLoyalty::vftable;
  unaff_ESI[2] = 0;
  unaff_ESI[3] = 0;
  unaff_ESI[9] = 0xf;
  unaff_ESI[8] = 0;
  *(undefined1 *)(unaff_ESI + 4) = 0;
  FUN_00409350(&DAT_00ded94d,0);
  return;
}

