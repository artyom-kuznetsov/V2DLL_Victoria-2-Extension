// FUN_005e13b0 @ 005e13b0  (requested 005E13B0, first bytes: 55 8B EC 6A FF 68 71 5B)


undefined4 * FUN_005e13b0(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int local_58;
  int local_54;
  int local_50;
  uint local_4c [4];
  undefined4 local_3c;
  uint local_38;
  uint local_30;
  undefined4 local_20;
  uint local_1c;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b45b71;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[1] = 0x18d;
  *param_1 = CCommand::vftable;
  param_1[7] = 0xf;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  local_8 = 0;
  param_1[0xb] = 0x410;
  param_1[0xc] = 0x410;
  *(undefined2 *)(param_1 + 0xd) = 0xffff;
  FUN_00409350(&DAT_00ded94d,0);
  param_1[9] = 0;
  *(undefined2 *)(param_1 + 10) = 0;
  *(undefined2 *)((int)param_1 + 0x36) = 0;
  param_1[0xe] = 0;
  *param_1 = CMergeCommand::vftable;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  local_8._1_3_ = 0;
  piVar5 = (int *)*param_2;
  do {
    if (piVar5 == (int *)0x0) {
      ExceptionList = local_10;
      return param_1;
    }
    piVar1 = (int *)piVar5[2];
    iVar2 = *piVar5;
    local_58 = 0;
    local_38 = 0xf;
    local_3c = 0;
    local_4c[0] = local_4c[0] & 0xffffff00;
    local_8._0_1_ = 3;
    local_54 = DAT_01268fec;
    local_50 = DAT_01268ff0;
    if (iVar2 != 0) {
      local_50 = *(int *)(iVar2 + 0x14);
      local_54 = *(int *)(iVar2 + 0x10);
      uVar4 = FUN_00632170(iVar2 + 8);
      local_8._0_1_ = 4;
      FUN_00408ed0(uVar4,0,0xffffffff);
      if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_30);
      }
      local_1c = 0xf;
      local_20 = 0;
      local_30 = local_30 & 0xffffff00;
      local_58 = iVar2;
    }
    local_8._0_1_ = 5;
    iVar2 = param_1[0x10];
    piVar5 = (int *)FUN_00aae9af(0x34);
    local_8._0_1_ = 6;
    local_14 = piVar5;
    if (piVar5 == (int *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      *piVar5 = local_58;
      piVar5[1] = local_54;
      piVar5[2] = local_50;
      piVar5[8] = 0xf;
      piVar5[7] = 0;
      *(undefined1 *)(piVar5 + 3) = 0;
      FUN_00408ed0(local_4c,0,0xffffffff);
      piVar5[10] = iVar2;
      piVar5[0xb] = 0;
      *(undefined1 *)(piVar5 + 0xc) = 0;
    }
    iVar3 = param_1[0x11];
    param_1[0x10] = piVar5;
    param_1[0x11] = iVar3 + 1;
    if (iVar3 == 0) {
      param_1[0xf] = piVar5;
    }
    else {
      *(int **)(iVar2 + 0x2c) = piVar5;
    }
    local_8._0_1_ = 2;
    piVar5 = piVar1;
  } while (local_38 < 0x10);
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_4c[0]);
}

