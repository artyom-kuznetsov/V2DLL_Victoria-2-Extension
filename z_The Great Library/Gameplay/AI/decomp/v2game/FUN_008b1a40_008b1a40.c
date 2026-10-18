// FUN_008b1a40 @ 008b1a40 body=[[008b1a40, 008b1aa1]]


void FUN_008b1a40(void)

{
  undefined4 uVar1;
  undefined4 *unaff_ESI;
  
  unaff_ESI[1] = 0x18d;
  *unaff_ESI = CActiveMission::vftable;
  uVar1 = FUN_008aff70();
  unaff_ESI[2] = uVar1;
  FUN_008a8650(0);
  FUN_008a8650(0);
  unaff_ESI[0x27] = 43800000;
  unaff_ESI[0x27] = DAT_01259abc;
  unaff_ESI[0x29] = 0;
  unaff_ESI[0x28] = 0x2d2d2d;
  return;
}

