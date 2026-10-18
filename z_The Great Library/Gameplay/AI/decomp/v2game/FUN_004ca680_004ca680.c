// FUN_004ca680 @ 004ca680 body=[[004ca680, 004ca6c1]]


void FUN_004ca680(void)

{
  undefined4 *unaff_ESI;
  
  unaff_ESI[1] = 0x18d;
  *unaff_ESI = CColonizationData::vftable;
  unaff_ESI[2] = 0;
  unaff_ESI[3] = 0;
  unaff_ESI[4] = 43800000;
  unaff_ESI[4] = DAT_01259abc;
  unaff_ESI[5] = 0;
  _eh_vector_constructor_iterator_(unaff_ESI + 6,0x1c,4,FUN_004ca290,FUN_004010c0);
  return;
}

