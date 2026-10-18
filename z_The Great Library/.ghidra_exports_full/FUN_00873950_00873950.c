// FUN_00873950 @ 00873950 body=[[00873950, 008739d7]]


void FUN_00873950(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3e903;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = (undefined1 *)FUN_00aae9af();
  local_8 = 0;
  if (puVar1 != (undefined1 *)0x0) {
    *(undefined4 *)(puVar1 + 0x14) = 0xf;
    *(undefined4 *)(puVar1 + 0x10) = 0;
    *puVar1 = 0;
    FUN_00408ed0(param_2,0);
  }
  local_8 = 1;
  FUN_00873d40();
  ExceptionList = local_10;
  return;
}

