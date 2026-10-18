// FUN_00b0ef90 @ 00b0ef90 body=[[00b0ef90, 00b0efe5]]


void FUN_00b0ef90(void)

{
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00b396c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00b00e80(DAT_00ef259c ^ (uint)&stack0xffffffec);
  local_4 = 0;
  *in_ECX = &PTR_FUN_00de009c;
  FUN_00b1c670();
  ExceptionList = local_c;
  return;
}

