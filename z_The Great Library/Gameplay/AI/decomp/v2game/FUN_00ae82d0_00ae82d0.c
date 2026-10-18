// FUN_00ae82d0 @ 00ae82d0 body=[[00ae82d0, 00ae834e]]


void FUN_00ae82d0(void)

{
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00b37f33;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 2;
  FUN_00ae7b20(DAT_00ef259c ^ (uint)&stack0xffffffec);
  FUN_00ae7f60();
  local_4._0_1_ = 1;
  FUN_00b1b480();
  local_4 = (uint)local_4._1_3_ << 8;
  if (*(int *)(in_ECX + 0x10) != 0) {
    (*(code *)PTR__free_00f01b10)(*(int *)(in_ECX + 0x10));
  }
  local_4 = 0xffffffff;
  FUN_00ae8670();
  ExceptionList = local_c;
  return;
}

