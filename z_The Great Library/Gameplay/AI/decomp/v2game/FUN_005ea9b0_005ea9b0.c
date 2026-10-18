// FUN_005ea9b0 @ 005ea9b0 body=[[005ea9b0, 005eaae0]]


undefined4 * FUN_005ea9b0(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  code *pcVar2;
  undefined1 local_30 [28];
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b5a49e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005e8a60(param_1);
  local_8 = 0;
  *in_ECX = CTechSchoolChange::vftable;
  uVar1 = FUN_00576f80();
  local_14 = FUN_00579dc0(uVar1);
  if (local_14 == 0) {
    FUN_009885d0();
    local_8._0_1_ = 1;
    FUN_004015b0(local_30,0x40a,0x10004);
    local_8._0_1_ = 2;
    pcVar2 = FUN_00401280;
    uVar1 = FUN_00987d20("\' used in history, while not existing.",FUN_00401280);
    uVar1 = FUN_00989050(uVar1);
    FUN_00418e30(uVar1);
    FUN_00408bd0(pcVar2);
    local_8._0_1_ = 1;
    FUN_00401650();
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_00408ad0();
    in_ECX[4] = 0;
  }
  else {
    uVar1 = FUN_004f6360();
    in_ECX[4] = uVar1;
  }
  ExceptionList = local_10;
  return in_ECX;
}

