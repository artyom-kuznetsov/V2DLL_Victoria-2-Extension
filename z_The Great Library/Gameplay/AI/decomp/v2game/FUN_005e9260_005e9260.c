// FUN_005e9260 @ 005e9260 body=[[005e9260, 005e93e6]]


void FUN_005e9260(void)

{
  undefined4 uVar1;
  int in_ECX;
  code *pcVar2;
  undefined1 local_68 [84];
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b8df23;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0098fc50();
  FUN_009885d0();
  local_8 = 0;
  uVar1 = FUN_00971910();
  local_14 = FUN_00972050(uVar1);
  local_8 = 0xffffffff;
  FUN_00408ad0();
  if (local_14 == 0) {
    FUN_009885d0();
    local_8 = 1;
    FUN_004f97a0();
    local_8._0_1_ = 2;
    FUN_004015b0(local_68,0x24f,0x10004);
    local_8._0_1_ = 3;
    pcVar2 = FUN_00401280;
    uVar1 = FUN_0098fc50(&DAT_00df12c8,FUN_00401280);
    uVar1 = FUN_00987d20(uVar1);
    uVar1 = FUN_00418e30(uVar1);
    uVar1 = FUN_00418e30(uVar1);
    FUN_00989050(uVar1);
    FUN_00408bd0(pcVar2);
    local_8._0_1_ = 2;
    FUN_00401650();
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_00408ad0();
    local_8 = 0xffffffff;
    FUN_00408ad0();
  }
  else {
    *(int *)(in_ECX + 0x10) = local_14;
  }
  ExceptionList = local_10;
  return;
}

