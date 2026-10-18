// FUN_008f19c0 @ 008f19c0 body=[[008f19c0, 008f1a3f] [008f1a43, 008f1b3c] [008f1b40, 008f1b65] [008f1b69, 008f1b8b] [008f1b8f, 008f1bc1] [008f1bc5, 008f1be0] [008f1be4, 008f1bff] [008f1c03, 008f1c19] [008f1c1d, 008f1d12] [008f1d16, 008f1d38] [008f1d3c, 008f1d61] [008f1d65, 008f1d9a] [008f1d9e, 008f1db9] [008f1dbd, 008f1dd8] [008f1ddc, 008f1df2] [008f1df6, 008f1e12] [008f1e16, 008f1e2b]]


/* WARNING: Removing unreachable block (ram,0x008f1e07) */

undefined4 FUN_008f19c0(undefined4 param_1,undefined4 param_2,char param_3)

{
  int iVar1;
  int in_ECX;
  uint local_bc;
  uint local_a0;
  uint local_84;
  uint local_7c [4];
  undefined4 local_6c;
  uint local_68;
  uint local_60;
  undefined4 local_50;
  uint local_4c;
  uint local_44 [4];
  undefined4 local_34;
  uint local_30;
  undefined4 local_28;
  undefined1 local_24 [4];
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b65ac5;
  local_10 = ExceptionList;
  local_28 = 0;
  local_8 = 1;
  uStack_7 = 0;
  ExceptionList = &local_10;
  if (*(int *)(in_ECX + 0x1c) != 0) {
    ExceptionList = &local_10;
    FUN_00974c50();
    local_8 = 2;
    FUN_00408ed0();
    local_8 = 1;
    if (0xf < local_84) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  local_8 = 1;
  if (param_3 == '\0') {
    local_68 = 0xf;
    local_6c = 0;
    local_7c[0] = local_7c[0] & 0xffffff00;
    FUN_00409350(&DAT_00dfc7b4,3);
    local_8 = 0xb;
    local_4c = 0xf;
    local_50 = 0;
    local_60 = local_60 & 0xffffff00;
    FUN_00409350(&DAT_00df963c,2);
    local_8 = 0xc;
    local_30 = 0xf;
    local_34 = 0;
    local_44[0] = local_44[0] & 0xffffff00;
    FUN_00409350("MAJORITY_IS",0xb);
    local_8 = 0xd;
    FUN_009a8ee0(local_24,local_44);
    local_8 = 0xe;
    iVar1 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
    local_8 = 0xf;
    FUN_00988f20();
    local_8 = 0x10;
    FUN_00988f20();
    local_8 = 0x11;
    FUN_00988f20();
    local_28 = 1;
    if (0xf < local_84) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_bc) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_a0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    _local_8 = CONCAT31(uStack_7,0x12);
    FUN_009adb70();
    if (local_20 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_30 = 0xf;
    local_34 = 0;
    local_44[0] = local_44[0] & 0xffffff00;
    if (0xf < local_4c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_4c = 0xf;
    local_50 = 0;
    local_60 = local_60 & 0xffffff00;
    if (0xf < local_68) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  else {
    local_30 = 0xf;
    local_34 = 0;
    local_44[0] = local_44[0] & 0xffffff00;
    FUN_00409350(&DAT_00dfc7b4,3);
    local_8 = 3;
    local_4c = 0xf;
    local_50 = 0;
    local_60 = local_60 & 0xffffff00;
    FUN_00409350(&DAT_00df963c,2);
    local_8 = 4;
    local_68 = 0xf;
    local_6c = 0;
    local_7c[0] = local_7c[0] & 0xffffff00;
    FUN_00409350("MAJORITY_IS_NOT",0xf);
    local_8 = 5;
    FUN_009a8ee0(local_24,local_7c);
    local_8 = 6;
    iVar1 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
    local_8 = 7;
    FUN_00988f20();
    local_8 = 8;
    FUN_00988f20();
    local_8 = 9;
    FUN_00988f20();
    local_28 = 1;
    if (0xf < local_a0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_bc) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_84) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    _local_8 = CONCAT31(uStack_7,10);
    FUN_009adb70();
    if (local_20 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    if (0xf < local_68) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_68 = 0xf;
    local_6c = 0;
    local_7c[0] = local_7c[0] & 0xffffff00;
    if (0xf < local_4c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_4c = 0xf;
    local_50 = 0;
    local_60 = local_60 & 0xffffff00;
    if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  ExceptionList = local_10;
  return param_1;
}

