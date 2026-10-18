// FUN_005ea3b0 @ 005ea3b0 body=[[005ea3b0, 005ea3ec]]


undefined4 * FUN_005ea3b0(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *in_ECX;
  
  FUN_005e8a60(param_1);
  *in_ECX = CHistoricalFriendChange::vftable;
  puVar2 = (undefined4 *)FUN_004014a0();
  uVar1 = puVar2[1];
  in_ECX[4] = *puVar2;
  in_ECX[5] = uVar1;
  return in_ECX;
}

