// FUN_004a7e70 @ 004a7e70 body=[[004a7e70, 004a7fcf] [004a7fd3, 004a809e] [004a80a2, 004a80dd] [004a80e1, 004a8103] [004a8107, 004a8172]]


undefined4 FUN_004a7e70(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined1 local_d0 [4];
  int local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  int local_bc [4];
  undefined4 local_ac;
  uint local_a8;
  int local_a0;
  uint local_9c;
  undefined4 local_8c;
  uint local_88;
  undefined4 local_80;
  undefined1 local_78;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_5c;
  undefined4 local_4c;
  undefined4 local_48;
  undefined1 local_40;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_24;
  undefined1 local_20;
  void *pvStack_1c;
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
  puStack_10 = &LAB_00b766c9;
  local_14 = ExceptionList;
  local_80 = 0;
  local_64 = 0xf;
  local_68 = 0;
  local_78 = 0;
  local_48 = 0xf;
  local_4c = 0;
  local_5c = 0;
  local_2c = 0xf;
  local_30 = 0;
  local_40 = 0;
  local_24 = 0;
  local_20 = 1;
  local_c = 0;
  ExceptionList = &local_14;
  if (param_2 != 0) {
    if ((*(int *)(param_2 + 300) == *(int *)(DAT_012588e8 + 0xb60)) ||
       (local_80 = *(undefined4 *)(DAT_012588e8 + 0xb5c),
       *(char *)(*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                           *(int *)(DAT_012588e8 + 0xb60) * 4) + 0xbe8) +
                         *(int *)(param_2 + 300) * 4) + 0x60) != '\0')) {
      local_a8 = 0xf;
      local_ac = 0;
      local_bc[0] = (uint)local_bc[0]._1_3_ << 8;
      ExceptionList = &local_14;
      FUN_00409350(&DAT_00dfc860,4);
      local_c._0_1_ = 1;
      FUN_009a8ee0(local_d0,local_bc);
      local_c._0_1_ = 2;
      iVar1 = FUN_00475500();
      FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
      local_c._0_1_ = 3;
      FUN_00408ed0();
      if (0xf < local_88) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_88 = 0xf;
      local_8c = 0;
      local_9c = local_9c & 0xffffff00;
      local_c._0_1_ = 4;
      FUN_009adb70();
      if (local_cc != 0) {
        FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_cc = 0;
      local_c8 = 0;
      local_c4 = 0;
    }
    else {
      local_a8 = 0xf;
      local_ac = 0;
      local_bc[0] = (uint)local_bc[0]._1_3_ << 8;
      ExceptionList = &local_14;
      FUN_00409350("OTHER_PORT",10);
      local_c._0_1_ = 5;
      FUN_009a8ee0(local_d0,local_bc);
      local_c._0_1_ = 6;
      iVar1 = FUN_00475500();
      FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
      local_c._0_1_ = 7;
      FUN_00408ed0();
      if (0xf < local_88) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_88 = 0xf;
      local_8c = 0;
      local_9c = local_9c & 0xffffff00;
      local_c._0_1_ = 5;
      FUN_009a9740();
    }
    local_c = (uint)local_c._1_3_ << 8;
    if (0xf < local_a8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (*(int *)(local_a0 + 0x10) != 0) {
      (**(code **)(*(int *)**(undefined4 **)(local_a0 + 8) + 0xc))(param_1,param_2);
      FUN_00459820();
      ExceptionList = pvStack_1c;
      return param_1;
    }
  }
  FUN_0040c830();
  FUN_00459820();
  ExceptionList = local_14;
  return param_1;
}

