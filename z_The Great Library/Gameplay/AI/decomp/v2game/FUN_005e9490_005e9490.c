// FUN_005e9490 @ 005e9490 body=[[005e9490, 005e94f7]]


undefined4 * FUN_005e9490(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b62528;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005e8a60(param_1);
  local_8 = 0;
  *in_ECX = CPartyChange::vftable;
  uVar1 = FUN_00979200();
  in_ECX[4] = uVar1;
  uVar1 = FUN_00979200();
  in_ECX[5] = uVar1;
  ExceptionList = local_10;
  return in_ECX;
}

