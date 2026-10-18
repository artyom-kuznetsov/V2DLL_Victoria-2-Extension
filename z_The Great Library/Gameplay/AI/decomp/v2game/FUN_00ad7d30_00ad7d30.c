// FUN_00ad7d30 @ 00ad7d30 body=[[00ad7d30, 00ad7e8e]]


void FUN_00ad7d30(void)

{
  int in_ECX;
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00b37202;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xc;
  FUN_00ad7c70(DAT_00ef259c ^ (uint)&stack0xffffffe8);
  local_4._0_1_ = 0xb;
  if (*(int *)(in_ECX + 0xe8) != 0) {
    (*(code *)PTR__free_00f01b10)(*(int *)(in_ECX + 0xe8));
  }
  local_4 = CONCAT31(local_4._1_3_,10);
  if (*(int *)(in_ECX + 0xdc) != 0) {
    uVar1 = 0;
    do {
      (*(code *)**(undefined4 **)(*(int *)(in_ECX + 0xd8) + uVar1 * 8))(0);
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(in_ECX + 0xdc));
  }
  if (*(int *)(in_ECX + 0xd8) != 0) {
    (*(code *)PTR__free_00f01b10)(*(int *)(in_ECX + 0xd8));
  }
  local_4._0_1_ = 9;
  FUN_00ad3120();
  local_4._0_1_ = 8;
  if (*(int *)(in_ECX + 0xb8) != 0) {
    (*(code *)PTR__free_00f01b10)(*(int *)(in_ECX + 0xb8));
  }
  local_4._0_1_ = 7;
  FUN_00b13650();
  local_4._0_1_ = 6;
  FUN_00b13650();
  local_4._0_1_ = 5;
  if (*(int *)(in_ECX + 0x90) != 0) {
    (*(code *)PTR__free_00f01b10)(*(int *)(in_ECX + 0x90));
  }
  local_4._0_1_ = 4;
  if (*(int *)(in_ECX + 0x80) != 0) {
    (*(code *)PTR__free_00f01b10)(*(int *)(in_ECX + 0x80));
  }
  local_4._0_1_ = 3;
  FUN_00ae0090();
  local_4._0_1_ = 2;
  FUN_00aecb20();
  local_4._0_1_ = 1;
  FUN_00aecb20();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00aecb20();
  local_4 = 0xffffffff;
  FUN_00ae0dd0();
  ExceptionList = local_c;
  return;
}

