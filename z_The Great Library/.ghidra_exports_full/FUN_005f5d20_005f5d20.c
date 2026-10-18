// FUN_005f5d20 @ 005f5d20 body=[[005f5d20, 005f5da7]]


undefined4 * FUN_005f5d20(undefined4 param_1)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b62528;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005f3c40(param_1);
  local_8 = 0;
  *in_ECX = CPartyLoyaltyChange::vftable;
  FUN_009885d0();
  FUN_00409800();
  FUN_00409800();
  in_ECX[0x10] = 0;
  ExceptionList = local_10;
  return in_ECX;
}

