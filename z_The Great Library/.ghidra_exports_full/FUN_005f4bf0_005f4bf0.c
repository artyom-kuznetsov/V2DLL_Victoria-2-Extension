// FUN_005f4bf0 @ 005f4bf0 body=[[005f4bf0, 005f4c4b]]


undefined4 * FUN_005f4bf0(undefined4 param_1,undefined4 param_2)

{
  undefined4 *in_ECX;
  
  FUN_005f3c40(param_1);
  *in_ECX = CBuildingChange::vftable;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = param_2;
  return in_ECX;
}

