// FUN_00b09990 @ 00b09990 body=[[00b09990, 00b099ed]]


void FUN_00b09990(void)

{
  int *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00b390f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  FUN_00b09af0(DAT_00ef259c ^ (uint)&stack0xffffffec);
  local_4 = 0xffffffff;
  if (*in_ECX != 0) {
    (*(code *)PTR__free_00f01b10)(*in_ECX);
  }
  ExceptionList = local_c;
  return;
}

