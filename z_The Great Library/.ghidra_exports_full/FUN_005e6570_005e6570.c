// FUN_005e6570 @ 005e6570 body=[[005e6570, 005e6599]]


undefined4 * FUN_005e6570(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  FUN_005eda00();
  *in_ECX = CCountryHistory::vftable;
  in_ECX[8] = param_1;
  return in_ECX;
}

