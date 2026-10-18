// FUN_00a16c30 @ 00a16c30 body=[[00a16c30, 00a16c6e]]


void FUN_00a16c30(int param_1)

{
  undefined1 *unaff_ESI;
  
  *(undefined4 *)(unaff_ESI + 0x14) = 0xf;
  *(undefined4 *)(unaff_ESI + 0x10) = 0;
  *unaff_ESI = 0;
  if (param_1 == 3) {
    FUN_00409350("DIPLOMACY_TOURNY",0x10);
    return;
  }
  FUN_00409350("DIPLOMACY_NORMAL",0x10);
  return;
}

