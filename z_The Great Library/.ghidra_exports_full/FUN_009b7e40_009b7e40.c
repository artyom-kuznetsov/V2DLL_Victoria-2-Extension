// FUN_009b7e40 @ 009b7e40 body=[[009b7e40, 009b7f82] [009b7f86, 009b802a] [009b802e, 009b8049]]


undefined4 * FUN_009b7e40(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined **local_80 [19];
  int local_34;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b57301;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[1] = 0x18d;
  *param_1 = &PTR_FUN_00e3a14c;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  local_8 = 0;
  uStack_7 = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0x10000;
  param_1[0xd] = 0;
  param_1[0xe] = 0x400;
  param_1[0xf] = 0x2d0;
  param_1[0x10] = 0x3c;
  *(undefined2 *)(param_1 + 0x11) = 0x100;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  param_1[0x15] = 0x42480000;
  param_1[0x16] = 0x800;
  iVar1 = GetSystemMetrics(0);
  local_34 = GetSystemMetrics(1);
  if (iVar1 < 0x400) {
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    FUN_00409350("graphicssettings.cpp",0x14);
    local_8 = 1;
    FUN_004015b0(local_30,0x42,0x1000);
    local_8 = 2;
    uVar2 = FUN_00987d20(0x400);
    uVar2 = FUN_00455470(uVar2);
    FUN_00401280(uVar2);
    local_8 = 1;
    FUN_00987ac0(local_80);
    local_80[0] = std::ios_base::vftable;
    FUN_00aad52d(local_80);
    local_8 = 0;
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_30[0]);
    }
    param_1[0xe] = 0x400;
  }
  else {
    param_1[0xe] = iVar1;
  }
  if (local_34 < 0x2d0) {
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    FUN_00409350("graphicssettings.cpp",0x14);
    local_8 = 3;
    FUN_004015b0(local_30,0x4c,0x1000);
    local_8 = 4;
    uVar2 = FUN_00987d20(0x2d0);
    uVar2 = FUN_00455470(uVar2);
    FUN_00401280(uVar2);
    _local_8 = CONCAT31(uStack_7,3);
    FUN_00987ac0(local_80);
    local_80[0] = std::ios_base::vftable;
    FUN_00aad52d(local_80);
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_30[0]);
    }
    param_1[0xf] = 0x2d0;
  }
  else {
    param_1[0xf] = local_34;
  }
  ExceptionList = local_10;
  return param_1;
}

