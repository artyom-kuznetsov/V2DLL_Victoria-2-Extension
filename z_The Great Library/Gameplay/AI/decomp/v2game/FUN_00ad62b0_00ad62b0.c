// FUN_00ad62b0 @ 00ad62b0 body=[[00ad62b0, 00ad633d]]


void FUN_00ad62b0(undefined4 param_1)

{
  uint uVar1;
  int local_1c [3];
  undefined2 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00b3703e;
  local_c = ExceptionList;
  uVar1 = DAT_00ef259c ^ (uint)&stack0xffffffdc;
  ExceptionList = &local_c;
  local_1c[0] = 0;
  local_1c[1] = 0;
  local_1c[2] = 0;
  local_10 = 1;
  local_4 = 0;
  FUN_00ad61b0(local_1c);
  FUN_00ad6210(local_1c,param_1);
  local_4 = 0xffffffff;
  if (local_1c[0] != 0) {
    (*(code *)PTR__free_00f01b10)(local_1c[0],uVar1);
  }
  ExceptionList = local_c;
  return;
}

