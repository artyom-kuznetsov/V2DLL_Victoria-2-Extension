// FUN_00973cf0 @ 00973cf0 body=[[00973cf0, 00973d96] [00973d9a, 00973e76] [00973e7a, 00973e9e] [00973ea2, 00973ebe] [00973ec2, 00973ef7] [00973efb, 00973f16] [00973f1a, 00973f3d] [00973f41, 00973fd8] [00973fde, 0097400d]]


/* WARNING: Removing unreachable block (ram,0x00973f32) */

undefined1 * FUN_00973cf0(int param_1,undefined1 *param_2,undefined4 param_3)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  undefined1 local_100 [16];
  undefined4 local_f0;
  undefined4 local_ec;
  undefined1 *puStack_e8;
  undefined4 uStack_e4;
  uint local_c0;
  uint local_88;
  uint local_80 [4];
  undefined4 local_70;
  uint local_6c;
  undefined1 local_64 [20];
  uint local_50;
  undefined1 local_48 [4];
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 *local_34;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  undefined1 local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b63f56;
  local_10 = ExceptionList;
  local_34 = (undefined1 *)0x0;
  uStack_e4 = 0;
  if (*(int *)(param_1 + 0xc) == 0) {
    ExceptionList = &local_10;
    *(undefined4 *)(param_2 + 0x14) = 0xf;
    *(undefined4 *)(param_2 + 0x10) = 0;
    puStack_e8 = &DAT_00ded94d;
    *param_2 = 0;
    local_ec = 0x973ff9;
    FUN_00409350();
  }
  else {
    local_34 = local_100;
    local_ec = 0xf;
    local_f0 = 0;
    local_100[0] = 0;
    ExceptionList = &local_10;
    FUN_00409350(&DAT_00ded94d,0);
    (**(code **)(**(int **)(param_1 + 0xc) + 0x20))(local_64,param_3,0);
    local_8 = 0;
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    FUN_00409350(&DAT_00ded94d,0);
    local_8._0_1_ = 1;
    cVar2 = FUN_00416db0();
    local_11 = cVar2 == '\0';
    local_8._0_1_ = 0;
    uVar1 = (undefined1)local_8;
    local_8._0_1_ = 0;
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if ((bool)local_11) {
      FUN_00409350(&DAT_00dee2cc,1);
      local_8._0_1_ = 2;
      local_1c = 0xf;
      local_20 = 0;
      local_30[0] = local_30[0] & 0xffffff00;
      FUN_00409350("ON_ENACT_UNCIV_REFORM",0x15);
      local_8._0_1_ = 3;
      FUN_009a8ee0(local_48,local_30);
      local_8._0_1_ = 4;
      iVar3 = FUN_00475500();
      FUN_009a9880(*(undefined8 *)(iVar3 + 0x6c),*(undefined8 *)(iVar3 + 0x74));
      local_8._0_1_ = 5;
      FUN_00988f20();
      local_8._0_1_ = 6;
      FUN_00988f20();
      local_8._0_1_ = 7;
      FUN_00408ed0();
      if (0xf < local_c0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_6c = 0xf;
      local_70 = 0;
      local_80[0] = local_80[0] & 0xffffff00;
      if (0xf < local_88) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8._0_1_ = 8;
      FUN_009adb70();
      if (local_44 != 0) {
        FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_44 = 0;
      local_40 = 0;
      local_3c = 0;
      if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8._0_1_ = 0;
      local_1c = 0xf;
      local_20 = 0;
      local_30[0] = local_30[0] & 0xffffff00;
      uVar1 = (undefined1)local_8;
      if ((*(int *)(param_1 + 8) != 0) &&
         (cVar2 = (**(code **)(**(int **)(param_1 + 8) + 0x18))(), uVar1 = (undefined1)local_8,
         cVar2 == '\0')) {
        (**(code **)(**(int **)(param_1 + 8) + 0x2c))(local_80,param_3,0,0,1);
        local_8._0_1_ = 9;
        FUN_00988fa0();
        local_8._0_1_ = 10;
        FUN_00448aa0();
        FUN_00408ad0();
        local_8._0_1_ = 0;
        FUN_00408ad0();
        uVar1 = (undefined1)local_8;
      }
    }
    local_8._0_1_ = uVar1;
    *(undefined4 *)(param_2 + 0x14) = 0xf;
    *(undefined4 *)(param_2 + 0x10) = 0;
    *param_2 = 0;
    FUN_00408ed0();
    if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  ExceptionList = local_10;
  return param_2;
}

