// FUN_00ade8b0 @ 00ade8b0 body=[[00ade8b0, 00ade939]]


void FUN_00ade8b0(void)

{
  int *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00b3783e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 2;
  FUN_00ade020(DAT_00ef259c ^ (uint)&stack0xffffffec);
  local_4._0_1_ = 1;
  if (in_ECX[0xc] != 0) {
    (*(code *)PTR__free_00f01b10)(in_ECX[0xc]);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  if (in_ECX[8] != 0) {
    (*(code *)PTR__free_00f01b10)(in_ECX[8]);
  }
  local_4 = 0xffffffff;
  if (*in_ECX != 0) {
    (*(code *)PTR__free_00f01b10)(*in_ECX);
  }
  ExceptionList = local_c;
  return;
}

