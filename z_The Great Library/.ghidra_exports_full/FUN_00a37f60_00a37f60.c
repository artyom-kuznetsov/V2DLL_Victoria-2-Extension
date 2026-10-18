// FUN_00a37f60 @ 00a37f60 body=[[00a37f60, 00a3819a]]


uint FUN_00a37f60(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined1 local_3d0 [56];
  undefined1 local_398 [156];
  undefined1 local_2fc [748];
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b525e7;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar1 = FUN_0040b360();
  uVar1 = uVar1 & 0xff;
  if (uVar1 == 0) {
    FUN_00408fc0();
    FUN_004471e0();
    local_8 = 0;
    FUN_00989b40(0x5c);
    FUN_00989b50();
    local_8._0_1_ = 1;
    FUN_00989b30();
    local_8._0_1_ = 0;
    FUN_00408ad0();
    FUN_00987ea0(local_398,2);
    local_8._0_1_ = 2;
    uVar2 = FUN_00418e30(local_398,&DAT_00e40724,local_2fc,&DAT_00e004e4,param_3);
    uVar2 = FUN_0054a180(uVar2);
    uVar2 = FUN_00418e30(uVar2);
    uVar2 = FUN_00455470(uVar2);
    uVar2 = FUN_00418e30(uVar2);
    FUN_00989050(uVar2);
    FUN_00988010();
    local_8._0_1_ = 3;
    FUN_00408fc0();
    FUN_009885d0();
    local_8._0_1_ = 4;
    piVar3 = (int *)FUN_0043a900();
    (**(code **)(*piVar3 + 0x14))(local_3d0);
    local_8._0_1_ = 3;
    FUN_00408ad0();
    local_8._0_1_ = 2;
    FUN_00408ad0();
    piVar3 = (int *)FUN_0043a900();
    (**(code **)(*piVar3 + 0x34))();
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_00988060();
    local_8 = 0xffffffff;
    uVar1 = FUN_00408ad0();
  }
  ExceptionList = local_10;
  return uVar1;
}

