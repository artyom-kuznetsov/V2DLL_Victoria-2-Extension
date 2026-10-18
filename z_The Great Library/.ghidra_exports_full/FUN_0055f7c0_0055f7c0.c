// FUN_0055f7c0 @ 0055f7c0 body=[[0055f7c0, 0055f942] [0055f946, 0055f9c8] [0055f9cc, 0055f9ff] [0055fa03, 0055fa1a] [0055fa1e, 0055fa2c] [0055fa30, 0055fa44]]


undefined4 * FUN_0055f7c0(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  uint in_stack_0000001c;
  undefined4 in_stack_00000024;
  uint local_58;
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  uint local_34;
  undefined1 local_2c [4];
  int local_28;
  undefined4 local_24;
  uint local_20;
  undefined4 local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b72796;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  local_8 = 1;
  uStack_7 = 0;
  param_1[1] = 0x18d;
  *param_1 = CCultureGroup::vftable;
  *(undefined1 *)(param_1 + 6) = 1;
  local_18 = 0x2d2d2d;
  param_1[7] = 0x2d2d2d;
  param_1[8] = 0;
  param_1[0xe] = 0xf;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  FUN_00408ed0();
  param_1[0x15] = 0xf;
  param_1[0x14] = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  uVar1 = DAT_00f092fc;
  local_8 = 3;
  param_1[0x17] = in_stack_00000024;
  param_1[0x19] = 0x18d;
  param_1[0x18] = CColor::vftable;
  param_1[0x1a] = uVar1;
  param_1[0x1b] = uVar1;
  param_1[0x1c] = uVar1;
  param_1[0x1d] = uVar1;
  *(undefined1 *)(param_1 + 0x1e) = 1;
  param_1[0x24] = 0xf;
  param_1[0x23] = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  FUN_00409350("Generic",7);
  param_1[0x2b] = 0xf;
  param_1[0x2a] = 0;
  *(undefined1 *)(param_1 + 0x26) = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  local_8 = 7;
  param_1[0x3a] = 0xf;
  param_1[0x39] = 0;
  *(undefined1 *)(param_1 + 0x35) = 0;
  FUN_00409350(&DAT_00ded94d,0);
  local_8 = 8;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  local_20 = 0xf;
  local_24 = 0;
  local_34 = local_34 & 0xffffff00;
  FUN_00409350("noculturegroup",0xe);
  local_8 = 9;
  cVar3 = FUN_00416db0();
  local_8 = 8;
  uVar2 = local_8;
  local_8 = 8;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if (cVar3 == '\0') {
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = local_50[0] & 0xffffff00;
    FUN_00408ed0();
    local_8 = 10;
    FUN_009a8ee0(local_2c,local_50);
    local_8 = 0xb;
    iVar4 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
    local_8 = 0xc;
    FUN_00408ed0();
    if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = 0xd;
    FUN_009adb70();
    if (local_28 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    uVar2 = local_8;
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  local_8 = uVar2;
  if (0xf < in_stack_0000001c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_1;
}

