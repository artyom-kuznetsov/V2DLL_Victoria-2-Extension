// FUN_005f7470 @ 005f7470 body=[[005f7470, 005f74a3]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005f7470(void)

{
  undefined4 *in_EAX;
  undefined4 in_EDX;
  
  _DAT_012588d0 = _DAT_012588d0 + 1;
  *in_EAX = CHistoryEntry::vftable;
  in_EAX[1] = 0x18d;
  in_EAX[2] = 43800000;
  in_EAX[2] = DAT_01259abc;
  in_EAX[3] = in_EDX;
  *in_EAX = CBattleResultChange::vftable;
  in_EAX[4] = 0;
  return;
}

