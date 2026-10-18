// FUN_00b11930 @ 00b11930 body=[[00b11930, 00b11a25]]


void FUN_00b11930(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00b39a3f;
  local_c = ExceptionList;
  uVar1 = DAT_00ef259c ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  *in_ECX = &PTR_FUN_00de03c4;
  local_4 = 5;
  if (in_ECX[0x16] != 0) {
    (*(code *)PTR__free_00f01b10)(in_ECX[0x16],uVar1);
  }
  local_4._0_1_ = 4;
  if (in_ECX[0x12] != 0) {
    (*(code *)PTR__free_00f01b10)(in_ECX[0x12]);
  }
  local_4._0_1_ = 3;
  if (in_ECX[0xe] != 0) {
    (*(code *)PTR__free_00f01b10)(in_ECX[0xe]);
  }
  local_4._0_1_ = 2;
  if (in_ECX[10] != 0) {
    (*(code *)PTR__free_00f01b10)(in_ECX[10]);
  }
  local_4._0_1_ = 1;
  if (in_ECX[6] != 0) {
    (*(code *)PTR__free_00f01b10)(in_ECX[6]);
  }
  uVar1 = 0;
  local_4 = (uint)local_4._1_3_ << 8;
  if (in_ECX[3] != 0) {
    do {
      FUN_00b13650();
      uVar1 = uVar1 + 1;
    } while (uVar1 < (uint)in_ECX[3]);
  }
  if (in_ECX[2] != 0) {
    (*(code *)PTR__free_00f01b10)(in_ECX[2]);
  }
  local_4 = 0xffffffff;
  FUN_00adf8b0();
  ExceptionList = local_c;
  return;
}

