// FUN_008e5660 @ 008e5660 body=[[008e5660, 008e5722] [008e5726, 008e5756] [008e575a, 008e5777] [008e5780, 008e57f0] [008e57f4, 008e5824] [008e5828, 008e5841] [008e5845, 008e588e] [008e5892, 008e58e8] [008e58f0, 008e594a] [008e594e, 008e598f] [008e5993, 008e59d4] [008e59d8, 008e5a0b]]


undefined1 * FUN_008e5660(undefined1 *param_1,undefined4 param_2,char param_3)

{
  int iVar1;
  int iVar2;
  uint local_68 [4];
  undefined4 local_58;
  uint local_54;
  uint local_4c [4];
  undefined4 local_3c;
  uint local_38;
  undefined1 local_30 [4];
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_1c;
  undefined4 local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00b66108;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  local_8 = 0;
  local_18 = 1;
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  if (param_3 == '\0') {
    FUN_00409350("WORK_AVAILABLE",0xe);
    local_8 = 5;
    FUN_009a8ee0(local_30,local_4c);
    local_8._0_1_ = 6;
    iVar1 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
    local_8._0_1_ = 7;
    FUN_00448aa0();
    if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_54 = 0xf;
    local_58 = 0;
    local_68[0] = local_68[0] & 0xffffff00;
    local_8._0_1_ = 8;
    FUN_009adb70();
    if (local_2c != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = (uint)local_8._1_3_ << 8;
    local_2c = 0;
    local_28 = 0;
    local_24 = 0;
    if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  else {
    FUN_00409350("NOT_WORK_AVAILABLE",0x12);
    local_8 = 1;
    FUN_009a8ee0(local_30,local_4c);
    local_8._0_1_ = 2;
    iVar1 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
    local_8._0_1_ = 3;
    FUN_00448aa0();
    if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_54 = 0xf;
    local_58 = 0;
    local_68[0] = local_68[0] & 0xffffff00;
    local_8._0_1_ = 4;
    FUN_009adb70();
    if (local_2c != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = (uint)local_8._1_3_ << 8;
    local_2c = 0;
    local_28 = 0;
    local_24 = 0;
    if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  local_24 = 0;
  local_28 = 0;
  local_2c = 0;
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  FUN_00409350(&DAT_00ded950,1);
  local_8 = 9;
  FUN_00448aa0();
  local_8 = local_8 & 0xffffff00;
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if (DAT_0131bb34 == 0) {
    iVar1 = FUN_00aae9af();
    local_8 = 10;
    if (iVar1 != 0) {
      FUN_0041a160();
    }
    local_8 = local_8 & 0xffffff00;
    FUN_00423700();
  }
  iVar1 = *(int *)(local_14 + 0x1c);
  local_1c = DAT_0131bb34;
  while( true ) {
    if (iVar1 == 0) {
      FUN_00448740(&DAT_00dee2cc,1);
      ExceptionList = local_10;
      return param_1;
    }
    if (iVar1 != *(int *)(local_14 + 0x1c)) {
      FUN_00448740(&DAT_00df8148,2);
    }
    local_38 = 0xf;
    local_3c = 0;
    local_4c[0] = local_4c[0] & 0xffffff00;
    FUN_00409350(&DAT_00df963c,2);
    local_8 = 0xb;
    FUN_00448aa0();
    local_8 = local_8 & 0xffffff00;
    if (0xf < local_38) break;
    iVar2 = FUN_005c2ad0();
    if (iVar2 == 0) {
      iVar2 = FUN_0096bb70();
    }
    FUN_0096d650(iVar2,local_68);
    local_8 = 0xc;
    FUN_00448aa0();
    local_8 = local_8 & 0xffffff00;
    if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_38 = 0xf;
    local_3c = 0;
    local_4c[0] = local_4c[0] & 0xffffff00;
    FUN_00409350(&DAT_00df8514,2);
    local_8 = 0xd;
    FUN_00448aa0();
    local_8 = local_8 & 0xffffff00;
    if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    iVar1 = *(int *)(iVar1 + 0x20);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

