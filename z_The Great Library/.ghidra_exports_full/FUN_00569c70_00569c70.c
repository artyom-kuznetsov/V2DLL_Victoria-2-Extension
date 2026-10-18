// FUN_00569c70 @ 00569c70 body=[[00569c70, 00569e6c] [00569e70, 00569ea3] [00569ea7, 00569ec2] [00569ec6, 0056a015] [0056a019, 0056a02d]]


undefined4 * FUN_00569c70(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int in_stack_00000018;
  uint in_stack_0000001c;
  int in_stack_00000024;
  uint local_48;
  uint local_40 [4];
  undefined4 local_30;
  uint local_2c;
  undefined1 local_24 [4];
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b93402;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  FUN_0056bfd0();
  local_8._0_1_ = 1;
  *param_1 = CTechnology::vftable;
  param_1[0xaa] = 0x18d;
  param_1[0xb0] = 0xf;
  param_1[0xaf] = 0;
  *(undefined1 *)(param_1 + 0xab) = 0;
  FUN_00408ed0();
  local_8._0_1_ = 2;
  param_1[0xb7] = 0xf;
  param_1[0xb6] = 0;
  *(undefined1 *)(param_1 + 0xb2) = 0;
  FUN_00409350(&DAT_00ded94d,0);
  param_1[0xba] = 1;
  param_1[0xbb] = 0;
  param_1[0xbd] = 0x18d;
  param_1[0xbe] = 0;
  param_1[0xbf] = 0;
  param_1[0xc0] = 0;
  *(undefined2 *)(param_1 + 0xc2) = 0;
  param_1[0xbc] = CAndTrigger::vftable;
  *(undefined1 *)(param_1 + 0xc3) = 0;
  param_1[0xc4] = 0;
  param_1[0xca] = 0xf;
  param_1[0xc9] = 0;
  *(undefined1 *)(param_1 + 0xc5) = 0;
  param_1[0xcc] = 0;
  param_1[0xcd] = 0;
  param_1[0xce] = 0;
  *(undefined1 *)(param_1 + 0xcf) = 0;
  param_1[0xd0] = 0;
  param_1[0xd1] = 0;
  *(undefined1 *)(param_1 + 0xd6) = 1;
  param_1[0xd7] = 0;
  param_1[0xd8] = 0;
  param_1[0xd9] = 0;
  *(undefined1 *)(param_1 + 0xda) = 0;
  param_1[0xdb] = 0;
  param_1[0xdd] = 0x18d;
  param_1[0xdc] = CMeanTimeToHappen::vftable;
  param_1[0xdf] = 0;
  param_1[0xe0] = 0;
  param_1[0xe1] = 0;
  param_1[0xde] = 1000;
  local_8._0_1_ = 8;
  param_1[0xb9] = in_stack_00000024;
  if (in_stack_00000018 != 0) {
    uVar1 = FUN_009902d0(&param_2,0);
    param_1[0xaa] = uVar1;
  }
  local_2c = 0xf;
  local_30 = 0;
  local_40[0] = local_40[0] & 0xffffff00;
  FUN_00408ed0();
  local_8._0_1_ = 9;
  in_stack_00000024 = FUN_009a8ee0(local_24,local_40);
  local_8._0_1_ = 10;
  iVar2 = FUN_00475500();
  FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c),*(undefined8 *)(iVar2 + 0x74));
  local_8._0_1_ = 0xb;
  FUN_00408ed0();
  if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 0xc;
  FUN_009adb70();
  if (local_20 != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 8;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  if (local_2c < 0x10) {
    if (DAT_01258814 == 0) {
      in_stack_00000024 = FUN_00aae9af();
      local_8._0_1_ = 0xd;
      if (in_stack_00000024 == 0) {
        DAT_01258814 = 0;
      }
      else {
        DAT_01258814 = FUN_00576cd0();
      }
    }
    local_8._0_1_ = 8;
    param_1[0xc4] = DAT_01258814;
    if (DAT_01258820 == 0) {
      in_stack_00000024 = FUN_00aae9af();
      local_8._0_1_ = 0xe;
      if (in_stack_00000024 == 0) {
        DAT_01258820 = 0;
      }
      else {
        DAT_01258820 = FUN_005be0f0();
      }
    }
    iVar2 = DAT_01258820;
    local_8._0_1_ = 8;
    param_1[0xd2] = DAT_01258820;
    if (iVar2 == 0) {
      in_stack_00000024 = FUN_00aae9af();
      local_8._0_1_ = 0xf;
      if (in_stack_00000024 == 0) {
        iVar2 = 0;
        DAT_01258820 = iVar2;
      }
      else {
        iVar2 = FUN_005be0f0();
        DAT_01258820 = iVar2;
      }
    }
    local_8._0_1_ = 8;
    param_1[0xd3] = iVar2;
    if (DAT_01258730 == 0) {
      in_stack_00000024 = FUN_00aae9af();
      local_8._0_1_ = 0x10;
      if (in_stack_00000024 == 0) {
        DAT_01258730 = 0;
      }
      else {
        DAT_01258730 = FUN_004dac50();
      }
    }
    local_8._0_1_ = 8;
    param_1[0xd5] = DAT_01258730;
    uVar1 = FUN_0055e380();
    param_1[0xd4] = uVar1;
    param_1[0xd0] = 0;
    *(undefined1 *)(param_1 + 0xc3) = 1;
    param_1[7] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    param_1[0x1f] = 0;
    param_1[0x1e] = 0;
    *(undefined1 *)(param_1 + 0xe3) = 0;
    if (in_stack_0000001c < 0x10) {
      ExceptionList = local_10;
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

