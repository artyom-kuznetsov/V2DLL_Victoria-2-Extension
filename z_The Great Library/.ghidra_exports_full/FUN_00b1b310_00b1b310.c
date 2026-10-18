// FUN_00b1b310 @ 00b1b310 body=[[00b1b310, 00b1b3b0]]


undefined4 FUN_00b1b310(undefined4 param_1)

{
  char cVar1;
  undefined1 local_24 [24];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00b39f58;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00b19de0(DAT_00ef259c ^ (uint)&stack0xffffffd8);
  local_4 = 0;
  cVar1 = FUN_00b19e10(param_1,0);
  if (cVar1 == '\0') {
    local_4 = 0xffffffff;
    FUN_00b1a080();
    ExceptionList = local_c;
    return 0;
  }
  FUN_00b1b180(local_24,1);
  local_4 = 0xffffffff;
  FUN_00b1a080();
  ExceptionList = local_c;
  return 1;
}

