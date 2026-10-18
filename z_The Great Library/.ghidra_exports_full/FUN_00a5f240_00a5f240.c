// FUN_00a5f240 @ 00a5f240 body=[[00a5f240, 00a5f304]]


void FUN_00a5f240(void)

{
  undefined4 *in_ECX;
  int *piVar1;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00b3b524;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = &PTR_FUN_00e42080;
  in_ECX[6] = &PTR_LAB_00e420e0;
  in_ECX[0xc] = &PTR_LAB_00e420f0;
  in_ECX[0x12] = &PTR_LAB_00e42100;
  in_ECX[0x18] = &PTR_LAB_00e42110;
  local_8 = 4;
  piVar1 = in_ECX + 0x26;
  local_14 = 3;
  do {
    if ((undefined4 *)*piVar1 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar1)(1);
    }
    piVar1 = piVar1 + 1;
    local_14 = local_14 + -1;
  } while (local_14 != 0);
  local_8._0_1_ = 3;
  FUN_00a5f660();
  local_8._0_1_ = 2;
  FUN_00a5f590();
  local_8._0_1_ = 1;
  FUN_00a5f4c0();
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_00a5f3f0();
  local_8 = 0xffffffff;
  FUN_00a5f320();
  ExceptionList = local_10;
  return;
}

