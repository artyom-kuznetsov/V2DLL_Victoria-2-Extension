// FUN_008a5910 @ 008a5910 body=[[008a5910, 008a5937]]


void FUN_008a5910(void)

{
  undefined4 *unaff_ESI;
  
  unaff_ESI[1] = 0x18d;
  *unaff_ESI = CDelayedEvent::vftable;
  unaff_ESI[2] = 0;
  FUN_008a8650(0);
  unaff_ESI[0x15] = 0;
  return;
}

