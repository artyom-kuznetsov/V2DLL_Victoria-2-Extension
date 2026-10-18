// FUN_005f5770 @ 005f5770 body=[[005f5770, 005f57c4]]


undefined4 * FUN_005f5770(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  
  FUN_005f3c40(param_1);
  *in_ECX = CGoodsChange::vftable;
  uVar1 = FUN_004c0fe0();
  in_ECX[4] = uVar1;
  uVar1 = FUN_004c0fe0();
  in_ECX[5] = uVar1;
  return in_ECX;
}

