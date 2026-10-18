// FUN_00492490 @ 00492490 body=[[00492490, 0049252c]]


void FUN_00492490(void)

{
  undefined4 *in_EAX;
  
  *in_EAX = &PTR_FUN_00e3a544;
  in_EAX[1] = 0x18d;
  in_EAX[2] = DAT_01268fec;
  in_EAX[3] = DAT_01268ff0;
  *(undefined1 *)(in_EAX + 4) = 0;
  in_EAX[10] = 0xf;
  in_EAX[9] = 0;
  *(undefined1 *)(in_EAX + 5) = 0;
  in_EAX[0xc] = CSelectable::vftable;
  *(undefined1 *)(in_EAX + 0xd) = 0;
  *in_EAX = CConstruction::vftable;
  in_EAX[0xc] = CConstruction::vftable;
  in_EAX[0xe] = 43800000;
  in_EAX[0xe] = DAT_01259abc;
  in_EAX[0xf] = 43800000;
  in_EAX[0xf] = DAT_01259abc;
  in_EAX[0x11] = 0;
  in_EAX[0x12] = 0;
  in_EAX[0x13] = 0x2d2d2d;
  in_EAX[0x14] = 0;
  in_EAX[0x15] = 0;
  *in_EAX = CBuildingConstruction::vftable;
  in_EAX[0xc] = CBuildingConstruction::vftable;
  in_EAX[0x16] = 0;
  in_EAX[0x17] = 0;
  return;
}

