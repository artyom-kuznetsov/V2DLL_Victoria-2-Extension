// FUN_009f2650 @ 009f2650 body=[[009f2650, 009f26ce] [009f26d2, 009f270b]]


/* WARNING: Removing unreachable block (ram,0x009f26c6) */

void FUN_009f2650(undefined4 param_1)

{
  char cVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3def8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_009a0940(param_1);
  FUN_0099f770(param_1,0);
  FUN_00409350(&DAT_00ded94d,0);
  local_8 = 0;
  cVar1 = FUN_00416db0();
  local_8 = 0xffffffff;
  if (cVar1 == '\0') {
    FUN_009a0940(param_1);
    FUN_0099f770(param_1,0);
  }
  ExceptionList = local_10;
  return;
}

