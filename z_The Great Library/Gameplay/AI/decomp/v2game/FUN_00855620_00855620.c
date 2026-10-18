// FUN_00855620 @ 00855620 body=[[00855620, 0085562c] [00855630, 00855638] [00855643, 0085566d]]


void FUN_00855620(void)

{
  undefined4 *unaff_EDI;
  
  if (unaff_EDI[0x2c] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(unaff_EDI[0x2c]);
  }
  unaff_EDI[0x2c] = 0;
  unaff_EDI[0x2d] = 0;
  unaff_EDI[0x2e] = 0;
  *unaff_EDI = CAIMilitaryPlan::vftable;
  FUN_00825ec0();
  return;
}

