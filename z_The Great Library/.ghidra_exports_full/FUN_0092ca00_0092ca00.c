// FUN_0092ca00 @ 0092ca00 body=[[0092ca00, 0092ca62]]


void FUN_0092ca00(void)

{
  undefined4 *in_EAX;
  
  in_EAX[2] = 0x2d2d2d;
  *in_EAX = CRelation::vftable;
  in_EAX[5] = 0;
  in_EAX[1] = 0x18d;
  in_EAX[3] = 0;
  in_EAX[4] = 0x2d2d2d;
  in_EAX[6] = 43800000;
  in_EAX[6] = DAT_01259abc;
  in_EAX[7] = 43800000;
  in_EAX[7] = DAT_01259abc;
  *(undefined1 *)(in_EAX + 8) = 0;
  *in_EAX = CPayingReparations::vftable;
  return;
}

