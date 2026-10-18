// FUN_009c1b50 @ 009c1b50 body=[[009c1b50, 009c1bb9] [009c1bbd, 009c1bcd]]


/* WARNING: Removing unreachable block (ram,0x009c1bb1) */

void FUN_009c1b50(undefined4 param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3e088;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00408ed0(param_1,0,0xffffffff);
  local_8 = 0;
  FUN_00a72850();
  ExceptionList = local_10;
  return;
}

