// FUN_004d8b60 @ 004d8b60 body=[[004d8b60, 004d8df3] [004d8df7, 004d8e28] [004d8e2c, 004d8e47] [004d8e4b, 004d8e58] [004d8e5c, 004d8e70]]


undefined4 * FUN_004d8b60(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  uint in_stack_0000001c;
  undefined4 *in_stack_00000024;
  uint local_4c;
  uint local_44 [4];
  undefined4 local_34;
  uint local_30;
  undefined1 local_28 [4];
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  iVar1 = DAT_012586ec;
  puStack_c = &LAB_00b75557;
  local_10 = ExceptionList;
  local_8 = 0;
  uStack_7 = 0;
  ExceptionList = &local_10;
  param_1[2] = 0;
  if (iVar1 == 0) {
    local_14 = FUN_00aae9af();
    local_8 = 1;
    if (local_14 == 0) {
      iVar1 = 0;
      DAT_012586ec = iVar1;
    }
    else {
      iVar1 = FUN_0044bbb0();
      DAT_012586ec = iVar1;
    }
  }
  local_8 = 0;
  param_1[3] = iVar1;
  *param_1 = CBuilding::vftable;
  param_1[5] = 0;
  param_1[6] = 9999;
  param_1[1] = 0x18d;
  param_1[0xd] = 0xf;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  FUN_00408ed0();
  param_1[0x14] = 0xf;
  param_1[0x13] = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  param_1[0x16] = in_stack_00000024;
  param_1[0x17] = 0;
  in_stack_00000024 = param_1 + 0x18;
  param_1[0x19] = 0x18d;
  *in_stack_00000024 = CGoodsPool::vftable;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  local_8 = 4;
  _memset(param_1 + 0x1a,0,0x40);
  FUN_00423920();
  param_1[0x2e] = 0;
  *(undefined2 *)(param_1 + 0x2f) = 0;
  *(undefined1 *)((int)param_1 + 0xbe) = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 1;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  *(undefined2 *)(param_1 + 0x36) = 0;
  param_1[0x37] = 0;
  *(undefined2 *)(param_1 + 0x38) = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  *(undefined1 *)(param_1 + 0x3d) = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  *(undefined1 *)(param_1 + 0x41) = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  *(undefined1 *)(param_1 + 0x45) = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  *(undefined1 *)(param_1 + 0x49) = 0;
  _local_8 = CONCAT31(uStack_7,10);
  *(undefined2 *)(param_1 + 0x4a) = 0;
  param_1[0x4b] = 0;
  *(undefined2 *)(param_1 + 0x4c) = 0;
  param_1[0x4d] = 0xffffffff;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  if ((DAT_00f0ec08 == 0) || (piVar2 = (int *)FUN_009e6c10(), piVar2 == (int *)0x0)) {
    iVar1 = 0xc;
  }
  else {
    iVar1 = *piVar2;
  }
  param_1[7] = iVar1;
  if (iVar1 == 0xc) {
    uVar3 = FUN_009902d0(&param_2,0);
    param_1[7] = uVar3;
  }
  local_30 = 0xf;
  local_34 = 0;
  local_44[0] = local_44[0] & 0xffffff00;
  FUN_00408ed0();
  local_8 = 0xb;
  FUN_009a8ee0(local_28,local_44);
  local_8 = 0xc;
  iVar1 = FUN_00475500();
  FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
  local_8 = 0xd;
  FUN_00408ed0();
  if (0xf < local_4c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  _local_8 = CONCAT31(uStack_7,0xe);
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
  if (0xf < in_stack_0000001c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_1;
}

