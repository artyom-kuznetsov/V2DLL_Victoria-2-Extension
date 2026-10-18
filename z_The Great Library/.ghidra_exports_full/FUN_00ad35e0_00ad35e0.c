// FUN_00ad35e0 @ 00ad35e0 body=[[00ad35e0, 00ad36df]]


void FUN_00ad35e0(void)

{
  int iVar1;
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00b36d72;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 2;
  if (*(undefined4 **)(in_ECX + 0x2c) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(in_ECX + 0x2c))(1,DAT_00ef259c ^ (uint)&stack0xffffffe8);
  }
  iVar1 = *(int *)(in_ECX + 0x34);
  if (iVar1 != 0) {
    FUN_00ae37e0();
    (*(code *)PTR__free_00f01b10)(iVar1);
  }
  iVar1 = *(int *)(in_ECX + 0x30);
  if (iVar1 != 0) {
    FUN_00ad41c0();
    (*(code *)PTR__free_00f01b10)(iVar1);
  }
  iVar1 = *(int *)(in_ECX + 0x38);
  if (iVar1 != 0) {
    FUN_00ae4090();
    (*(code *)PTR__free_00f01b10)(iVar1);
  }
  iVar1 = *(int *)(in_ECX + 0x3c);
  if (iVar1 != 0) {
    FUN_00ae6d00();
    (*(code *)PTR__free_00f01b10)(iVar1);
  }
  (*(code *)PTR__free_00f01b10)(*(undefined4 *)(in_ECX + 0x40));
  iVar1 = *(int *)(in_ECX + 0x44);
  if (iVar1 != 0) {
    FUN_00ae82d0();
    (*(code *)PTR__free_00f01b10)(iVar1);
  }
  local_4._0_1_ = 1;
  FUN_00b13650();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00b13650();
  local_4 = 0xffffffff;
  FUN_00b13650();
  ExceptionList = local_c;
  return;
}

