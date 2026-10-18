// FUN_00b05710 @ 00b05710 body=[[00b05710, 00b057a4]]


void FUN_00b05710(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00b38dce;
  local_c = ExceptionList;
  uVar1 = DAT_00ef259c ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *in_ECX = &PTR_FUN_00ddfcc8;
  local_4 = 2;
  FUN_00b04e30(uVar1);
  FUN_00ae81c0(in_ECX);
  local_4._0_1_ = 1;
  if (in_ECX[0x19] != 0) {
    (*(code *)PTR__free_00f01b10)(in_ECX[0x19]);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  if (in_ECX[0x15] != 0) {
    (*(code *)PTR__free_00f01b10)(in_ECX[0x15]);
  }
  local_4 = 0xffffffff;
  FUN_00b01dc0();
  ExceptionList = local_c;
  return;
}

