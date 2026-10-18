// FUN_00b1ef00 @ 00b1ef00 body=[[00b1ef00, 00b1ef5d]]


void FUN_00b1ef00(undefined4 param_1)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00b3a078;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00b1f080(DAT_00ef259c ^ (uint)&stack0xffffffec);
  local_4 = 0;
  *in_ECX = &PTR_FUN_00de0a90;
  FUN_00b1f120(param_1,1);
  ExceptionList = local_c;
  return;
}

