// FUN_005e8a60 @ 005e8a60 body=[[005e8a60, 005e8a89]]


undefined4 * FUN_005e8a60(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  FUN_005ed9b0();
  *in_ECX = CCountryHistoryEntry::vftable;
  in_ECX[3] = param_1;
  return in_ECX;
}

