// FUN_00465270 @ 00465270 body=[[00465270, 004652b8] [004652bc, 004652e1]]


/* WARNING: Removing unreachable block (ram,0x004652b3) */

void FUN_00465270(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00bb8828;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  FUN_00466a90();
  local_8 = 0xffffffff;
  FUN_00466780();
  ExceptionList = local_10;
  return;
}

