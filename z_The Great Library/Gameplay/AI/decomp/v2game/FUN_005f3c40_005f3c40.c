// FUN_005f3c40 @ 005f3c40 body=[[005f3c40, 005f3c69]]


undefined4 * FUN_005f3c40(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  FUN_005ed9b0();
  *in_ECX = CProvinceHistoryEntry::vftable;
  in_ECX[3] = param_1;
  return in_ECX;
}

