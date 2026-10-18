// FUN_00a6fe40 @ 00a6fe40 body=[[00a6fe40, 00a6ff08] [00a6ff0c, 00a6ffe2] [00a700f8, 00a7010f]]


void FUN_00a6fe40(void)

{
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  HRESULT local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00b54677;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffd9c;
  local_8 = 0;
  ExceptionList = &local_10;
  local_18 = CoInitializeEx((LPVOID)0x0,0xc);
  if (local_18 == -0x7ffefefa) {
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 1;
    FUN_004015b0();
    local_8._0_1_ = 2;
    FUN_00987d20();
    FUN_00401280();
    local_8._0_1_ = 1;
    FUN_00987ac0();
    FUN_00aad52d();
    local_8 = (uint)local_8._1_3_ << 8;
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_18 = CoInitializeEx((LPVOID)0x0,0xe);
  }
  if (local_18 == 1) {
    DAT_01258b2f = 0;
    ExceptionList = local_10;
    return;
  }
  if (local_18 != 0) {
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 3;
    FUN_00409350("Com initialization failed!",0x1a);
    FUN_00a6fdc0(local_34);
    local_8._0_1_ = 4;
    FUN_00408ed0();
    local_8._0_1_ = 5;
    FUN_00408ed0();
    local_8 = CONCAT31(local_8._1_3_,4);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8();
  }
  DAT_01258b2f = 1;
  ExceptionList = local_10;
  return;
}

