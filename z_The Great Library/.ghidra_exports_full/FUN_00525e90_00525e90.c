// FUN_00525e90 @ 00525e90 body=[[00525e90, 00525eff] [00525f17, 00525f4c] [00525f64, 00525fe8] [00526000, 005262bf]]


void FUN_00525e90(int param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined1 *unaff_EDI;
  uint local_54;
  undefined1 local_4c [28];
  uint local_30;
  undefined4 local_20;
  uint local_1c;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00ba1d92;
  local_10 = ExceptionList;
  local_1c = 0xf;
  local_20 = 0;
  local_30 = local_30 & 0xffffff00;
  local_8 = 0;
  if (param_2 != *(int *)(param_3 + 0x54)) {
    ExceptionList = &local_10;
    *(undefined4 *)(unaff_EDI + 0x10) = 0;
    *(undefined4 *)(unaff_EDI + 0x14) = 0xf;
    *unaff_EDI = 0;
    FUN_00408ed0();
    if (local_1c < 0x10) {
      ExceptionList = local_10;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if (*(int *)(param_2 + 0x5c) != 5) {
    ExceptionList = &local_10;
    *(undefined4 *)(unaff_EDI + 0x10) = 0;
    *(undefined4 *)(unaff_EDI + 0x14) = 0xf;
    *unaff_EDI = 0;
    FUN_00408ed0();
    if (local_1c < 0x10) {
      ExceptionList = local_10;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = &local_10;
  cVar1 = FUN_005268f0();
  if (cVar1 == '\0') {
    FUN_00424810();
    FUN_0043b700();
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_0042c180();
    if (local_54 < 0x10) {
      ExceptionList = local_10;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if (*(char *)(*(int *)(param_3 + 0x54) + 0x59) != '\0') {
    if (*(int *)(*(int *)(*(int *)(param_1 + 0x880) + *(int *)(param_2 + 0x50) * 4) + 0x50) + 1 <
        *(int *)(param_3 + 0x50)) {
      FUN_009885d0();
      local_8._0_1_ = 2;
      FUN_009a8ee0();
      local_8._0_1_ = 3;
      FUN_00475500();
      FUN_009a9880();
      local_8 = CONCAT31(local_8._1_3_,2);
      FUN_009a9740();
      FUN_00408ad0();
      goto LAB_005262a4;
    }
    if (*(int *)(param_3 + 0x50) <
        *(int *)(*(int *)(*(int *)(param_1 + 0x880) + *(int *)(param_2 + 0x50) * 4) + 0x50) + -1) {
      FUN_009885d0();
      local_8._0_1_ = 4;
      FUN_009a8ee0();
      local_8._0_1_ = 5;
      FUN_00475500();
      FUN_009a9880();
      local_8 = CONCAT31(local_8._1_3_,4);
      FUN_009a9740();
      FUN_00408ad0();
      goto LAB_005262a4;
    }
  }
  if (0 < *(int *)(param_3 + 0x1c0)) {
    FUN_00542bc0();
    iVar2 = __alldiv();
    FUN_009885d0();
    FUN_009c98f0(local_4c,iVar2 < *(int *)(param_1 + 0xe3c));
    local_8._0_1_ = 6;
    FUN_00448aa0();
    local_8._0_1_ = 0;
    FUN_00408ad0();
    FUN_009885d0();
    local_8._0_1_ = 7;
    FUN_00988a50();
    local_8._0_1_ = 8;
    FUN_0042c180();
    local_8._0_1_ = 9;
    FUN_00988f20();
    local_8._0_1_ = 10;
    FUN_00448aa0();
    FUN_00408ad0();
    FUN_00408ad0();
    FUN_00408ad0();
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_00408ad0();
  }
  FUN_008a8650();
  (**(code **)(*(int *)(param_3 + 0x58) + 0x2c))();
  local_8._0_1_ = 0xb;
  FUN_00989330();
  local_8._0_1_ = 0xc;
  FUN_00448aa0();
  FUN_00408ad0();
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_00408ad0();
  *(undefined4 *)(unaff_EDI + 0x14) = 0xf;
  *(undefined4 *)(unaff_EDI + 0x10) = 0;
  *unaff_EDI = 0;
  FUN_00408ed0();
LAB_005262a4:
  FUN_00408ad0();
  ExceptionList = local_10;
  return;
}

