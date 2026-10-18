// FUN_005f73c0 @ 005f73c0 body=[[005f73c0, 005f73f7]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005f73c0(void)

{
  undefined4 in_ECX;
  undefined4 *unaff_ESI;
  
  _DAT_012588d0 = _DAT_012588d0 + 1;
  *unaff_ESI = CHistoryEntry::vftable;
  unaff_ESI[1] = 0x18d;
  unaff_ESI[2] = 43800000;
  unaff_ESI[2] = DAT_01259abc;
  unaff_ESI[3] = in_ECX;
  *unaff_ESI = CAddWarGoalChange::vftable;
  FUN_0094bd40();
  return;
}

