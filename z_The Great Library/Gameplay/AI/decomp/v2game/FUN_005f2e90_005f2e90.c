// FUN_005f2e90 @ 005f2e90 body=[[005f2e90, 005f2eb9]]


undefined4 * FUN_005f2e90(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  FUN_005eda00();
  *in_ECX = CProvinceHistory::vftable;
  in_ECX[8] = param_1;
  return in_ECX;
}

