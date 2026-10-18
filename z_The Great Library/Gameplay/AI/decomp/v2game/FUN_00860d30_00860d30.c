// FUN_00860d30 @ 00860d30  (requested 00860D30, first bytes: 51 8B 47 38 8B 4F 34 50)


void FUN_00860d30(void)

{
  undefined4 *unaff_ESI;
  int unaff_EDI;
  
  FUN_00825e50(*(undefined4 *)(unaff_EDI + 0x34),*(undefined4 *)(unaff_EDI + 0x38));
  unaff_ESI[0x19] = unaff_EDI;
  *unaff_ESI = CAIPlan::vftable;
  unaff_ESI[0x1b] = 0;
  unaff_ESI[0x1c] = 43800000;
  unaff_ESI[0x1c] = DAT_01259abc;
  _sprintf((char *)(unaff_ESI + 0x25),"_CAI_PLAN_UNDEFINED_");
  unaff_ESI[0x1a] = unaff_ESI;
  unaff_ESI[0x1d] = 0;
  unaff_ESI[0x1e] = 0;
  unaff_ESI[0x1f] = 0;
  unaff_ESI[0x20] = 0;
  unaff_ESI[0x21] = 0;
  unaff_ESI[0x22] = 0;
  unaff_ESI[0x23] = 0;
  unaff_ESI[0x24] = 0;
  return;
}

