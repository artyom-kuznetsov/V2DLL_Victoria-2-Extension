// FUN_0075a970 @ 0075a970 body=[[0075a970, 0075ac31]]


void FUN_0075a970(undefined4 param_1)

{
  int iVar1;
  undefined1 *unaff_EDI;
  undefined1 local_100 [20];
  undefined1 local_ec [20];
  undefined1 local_d8 [20];
  undefined1 local_c4 [20];
  undefined1 local_b0 [20];
  undefined1 local_9c [28];
  undefined1 local_80 [28];
  undefined1 local_64 [28];
  undefined1 local_48 [28];
  undefined1 local_2c [28];
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b6d8ec;
  local_10 = ExceptionList;
  switch(param_1) {
  case 0:
    ExceptionList = &local_10;
    FUN_009885d0();
    local_8 = 0;
    FUN_009a8ee0(local_d8,local_80);
    local_8._0_1_ = 1;
    iVar1 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_009a9740();
    FUN_00408ad0();
    ExceptionList = local_10;
    return;
  case 1:
    ExceptionList = &local_10;
    FUN_009885d0();
    local_8 = 2;
    FUN_009a8ee0(local_100,local_2c);
    local_8._0_1_ = 3;
    iVar1 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
    local_8 = CONCAT31(local_8._1_3_,2);
    FUN_009a9740();
    FUN_00408ad0();
    ExceptionList = local_10;
    return;
  case 2:
    ExceptionList = &local_10;
    FUN_009885d0();
    local_8 = 4;
    FUN_009a8ee0(local_ec,local_64);
    local_8._0_1_ = 5;
    iVar1 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
    local_8 = CONCAT31(local_8._1_3_,4);
    FUN_009a9740();
    FUN_00408ad0();
    ExceptionList = local_10;
    return;
  case 3:
    ExceptionList = &local_10;
    FUN_009885d0();
    local_8 = 6;
    FUN_009a8ee0(local_c4,local_9c);
    local_8._0_1_ = 7;
    iVar1 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
    local_8 = CONCAT31(local_8._1_3_,6);
    FUN_009a9740();
    FUN_00408ad0();
    ExceptionList = local_10;
    return;
  case 4:
    ExceptionList = &local_10;
    FUN_009885d0();
    local_8 = 8;
    FUN_009a8ee0(local_b0,local_48);
    local_8._0_1_ = 9;
    iVar1 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
    local_8 = CONCAT31(local_8._1_3_,8);
    FUN_009a9740();
    FUN_00408ad0();
    ExceptionList = local_10;
    return;
  default:
    ExceptionList = &local_10;
    *(undefined4 *)(unaff_EDI + 0x14) = 0xf;
    *(undefined4 *)(unaff_EDI + 0x10) = 0;
    *unaff_EDI = 0;
    FUN_00409350(&DAT_00ded94d,0);
    ExceptionList = local_10;
    return;
  }
}

