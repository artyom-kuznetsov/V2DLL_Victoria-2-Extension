// FUN_005ed640 @ 005ed640 body=[[005ed640, 005ed673]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005ed640(void)

{
  undefined4 *in_EAX;
  undefined1 in_DL;
  
  _DAT_012588d0 = _DAT_012588d0 + 1;
  *in_EAX = CHistoryEntry::vftable;
  in_EAX[1] = 0x18d;
  in_EAX[2] = 43800000;
  in_EAX[2] = DAT_01259abc;
  *(undefined1 *)(in_EAX + 3) = in_DL;
  *in_EAX = CVassalChange::vftable;
  in_EAX[4] = 0;
  return;
}

