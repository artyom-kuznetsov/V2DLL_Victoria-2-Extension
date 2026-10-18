// FUN_00429f80 @ 00429f80 body=[[00429f80, 00429fc4]]


void FUN_00429f80(void)

{
  undefined4 *unaff_ESI;
  
  unaff_ESI[2] = 0;
  unaff_ESI[1] = 0x18d;
  *unaff_ESI = CCrisisManager::vftable;
  unaff_ESI[3] = 43800000;
  unaff_ESI[3] = DAT_01259abc;
  if ((undefined4 *)unaff_ESI[2] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)unaff_ESI[2])(1);
  }
  unaff_ESI[2] = 0;
  unaff_ESI[3] = DAT_01259abc;
  return;
}

