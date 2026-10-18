// FUN_00b0c1e0 @ 00b0c1e0 body=[[00b0c1e0, 00b0c266]]


void FUN_00b0c1e0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00b39404;
  local_c = ExceptionList;
  uVar1 = DAT_00ef259c ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *in_ECX = &PTR_FUN_00ddfe94;
  local_4 = 2;
  FUN_00b0c180(uVar1);
  local_4._0_1_ = 1;
  if (in_ECX[9] != 0) {
    (*(code *)PTR__free_00f01b10)(in_ECX[9]);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  if (in_ECX[5] != 0) {
    (*(code *)PTR__free_00f01b10)(in_ECX[5]);
  }
  local_4 = 0xffffffff;
  FUN_00b12aa0();
  ExceptionList = local_c;
  return;
}

