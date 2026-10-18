// FUN_005f46b0 @ 005f46b0 body=[[005f46b0, 005f46ec]]


undefined4 * FUN_005f46b0(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *in_ECX;
  
  FUN_005f3c40(param_1);
  *in_ECX = CAddCoreChange::vftable;
  puVar2 = (undefined4 *)FUN_004014a0();
  uVar1 = puVar2[1];
  in_ECX[4] = *puVar2;
  in_ECX[5] = uVar1;
  return in_ECX;
}

