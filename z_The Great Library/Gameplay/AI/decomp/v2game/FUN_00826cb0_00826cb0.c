// FUN_00826cb0 @ 00826cb0 body=[[00826cb0, 00826d1b]]


undefined4 FUN_00826cb0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 in_ECX;
  undefined **local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b51e18;
  local_10 = ExceptionList;
  local_8 = 0;
  local_14 = CSafePathFind::vftable;
  ExceptionList = &local_10;
  uVar1 = FUN_00826aa0(in_ECX,param_1,param_2,&local_14);
  FUN_00849e90();
  ExceptionList = local_10;
  return uVar1;
}

