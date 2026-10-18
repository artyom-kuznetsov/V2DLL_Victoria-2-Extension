// FUN_00aea730 @ 00aea730 body=[[00aea730, 00aea7e4]]


void FUN_00aea730(void)

{
  int *piVar1;
  uint uVar2;
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00b37f9e;
  local_c = ExceptionList;
  uVar2 = DAT_00ef259c ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  piVar1 = (int *)in_ECX[7];
  local_4 = 2;
  in_ECX[6] = &PTR_FUN_00ddd998;
  in_ECX[7] = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  piVar1 = (int *)in_ECX[5];
  local_4._0_1_ = 1;
  in_ECX[4] = &PTR_FUN_00ddd998;
  in_ECX[5] = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)in_ECX[3];
  local_4 = (uint)local_4._1_3_ << 8;
  in_ECX[2] = &PTR_FUN_00ddd998;
  in_ECX[3] = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)in_ECX[1];
  local_4 = 0xffffffff;
  *in_ECX = &PTR_FUN_00ddd998;
  in_ECX[1] = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
  }
  ExceptionList = local_c;
  return;
}

