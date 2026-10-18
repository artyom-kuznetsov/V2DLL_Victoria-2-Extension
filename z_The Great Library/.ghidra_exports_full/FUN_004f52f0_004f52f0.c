// FUN_004f52f0 @ 004f52f0 body=[[004f52f0, 004f539f] [004f53a3, 004f53ba] [004f53c0, 004f53db]]


void FUN_004f52f0(int param_1)

{
  int iVar1;
  undefined4 in_ECX;
  uint local_44 [4];
  undefined4 local_34;
  uint local_30;
  undefined1 local_28 [4];
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b81eea;
  local_10 = ExceptionList;
  local_14 = 0;
  if (*(int *)(param_1 + 0x1d0) == 0) {
    local_30 = 0xf;
    local_34 = 0;
    local_44[0] = local_44[0] & 0xffffff00;
    ExceptionList = &local_10;
    FUN_00409350("GOODS_PROJECT_COMPLETE",0x16);
    local_8 = 0;
    FUN_009a8ee0(local_28,local_44);
    local_8._0_1_ = 1;
    iVar1 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
    local_8 = CONCAT31(local_8._1_3_,2);
    FUN_009adb70();
    if (local_24 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_24 = 0;
    local_20 = 0;
    local_1c = 0;
    if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  else {
    ExceptionList = &local_10;
    FUN_008606c0(*(int *)(param_1 + 0x1d0),in_ECX);
  }
  ExceptionList = local_10;
  return;
}

