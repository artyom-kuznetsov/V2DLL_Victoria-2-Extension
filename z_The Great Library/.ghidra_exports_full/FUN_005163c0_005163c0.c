// FUN_005163c0 @ 005163c0 body=[[005163c0, 00516422]]


void FUN_005163c0(void)

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
  *in_EAX = CAlliance::vftable;
  return;
}

