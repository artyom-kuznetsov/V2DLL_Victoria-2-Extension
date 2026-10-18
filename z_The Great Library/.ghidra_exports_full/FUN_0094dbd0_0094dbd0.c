// FUN_0094dbd0 @ 0094dbd0 body=[[0094dbd0, 0094dc53] [0094dc57, 0094dc80] [0094dc84, 0094dd0a] [0094dd0e, 0094dd2d] [0094dd31, 0094ddb1] [0094ddb5, 0094ddd3] [0094ddd7, 0094de64] [0094de68, 0094de86] [0094de8a, 0094df23] [0094df27, 0094df45] [0094df49, 0094e070] [0094e074, 0094e096] [0094e09f, 0094e0d0] [0094e0d4, 0094e0fe] [0094e102, 0094e127] [0094e12b, 0094e14a] [0094e14e, 0094e168] [0094e16c, 0094e1c1] [0094e1c5, 0094e1da]]


/* WARNING: Removing unreachable block (ram,0x0094dc78) */

undefined4 FUN_0094dbd0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint local_dc;
  uint local_c0;
  uint local_a4;
  uint local_88;
  undefined1 local_60 [4];
  int local_5c;
  uint local_4c;
  undefined4 local_3c;
  uint local_38;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b83436;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00409350("_short",6);
  local_8 = 1;
  uVar1 = FUN_00988f20();
  local_8._0_1_ = 2;
  FUN_009a8ee0(local_60,uVar1);
  if (0xf < local_c0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 5;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("ACTOR",5);
  local_8._0_1_ = 6;
  FUN_0055dd40();
  local_8._0_1_ = 7;
  local_14 = FUN_00aae9af();
  local_8._0_1_ = 8;
  if (local_14 == 0) {
    local_14 = 0;
  }
  else {
    local_14 = FUN_009a9ce0();
  }
  local_8._0_1_ = 7;
  FUN_009e6810(local_30,&local_14);
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 5;
  local_38 = 0xf;
  local_3c = 0;
  local_4c = local_4c & 0xffffff00;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("RECIPIENT",9);
  local_8._0_1_ = 9;
  FUN_0055dd40();
  local_8._0_1_ = 10;
  local_14 = FUN_00aae9af();
  local_8._0_1_ = 0xb;
  if (local_14 == 0) {
    local_14 = 0;
  }
  else {
    local_14 = FUN_009a9ce0();
  }
  local_8._0_1_ = 10;
  FUN_009e6810(local_30,&local_14);
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 5;
  local_38 = 0xf;
  local_3c = 0;
  local_4c = local_4c & 0xffffff00;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    FUN_00409350("THIRD",5);
    local_8._0_1_ = 0xc;
    FUN_0055dd40();
    local_8._0_1_ = 0xd;
    local_14 = FUN_00aae9af();
    local_8._0_1_ = 0xe;
    if (local_14 == 0) {
      local_14 = 0;
    }
    else {
      local_14 = FUN_009a9ce0();
    }
    local_8._0_1_ = 0xd;
    FUN_009e6810(local_30,&local_14);
    if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 5;
    local_38 = 0xf;
    local_3c = 0;
    local_4c = local_4c & 0xffffff00;
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  iVar2 = param_1;
  local_8._0_1_ = 5;
  local_38 = 0xf;
  local_3c = 0;
  if (*(char *)(*(int *)(param_1 + 0xc) + 0x1dc) == '\0') {
    if (*(int *)(param_1 + 0x28) != 0) {
      local_1c = 0xf;
      local_20 = 0;
      local_30[0] = (uint)local_30[0]._1_3_ << 8;
      FUN_00409350("STATE",5);
      local_8._0_1_ = 0x12;
      (**(code **)(**(int **)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(iVar2 + 0x28) * 4)
                             + 0x188) + 0x20))();
      local_8._0_1_ = 0x13;
      FUN_009a9980();
      if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8._0_1_ = 5;
      local_38 = 0xf;
      local_3c = 0;
      local_4c = local_4c & 0xffffff00;
      if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
  }
  else {
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = (uint)local_30[0]._1_3_ << 8;
    FUN_00409350("STATE",5);
    local_8._0_1_ = 0xf;
    FUN_00475d50();
    local_8._0_1_ = 0x10;
    local_14 = FUN_00aae9af();
    local_8._0_1_ = 0x11;
    if (local_14 == 0) {
      local_14 = 0;
    }
    else {
      local_14 = FUN_009a9ce0();
    }
    local_8._0_1_ = 0x10;
    FUN_009e6810(local_30,&local_14);
    if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 5;
    local_38 = 0xf;
    local_3c = 0;
    local_4c = local_4c & 0xffffff00;
    iVar2 = param_1;
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  local_8._0_1_ = 5;
  local_38 = 0xf;
  local_3c = 0;
  if (*(int *)(iVar2 + 0x3c) != 0) {
    local_38 = 0xf;
    local_3c = 0;
    FUN_00409350(&DAT_00dedc20,2);
    local_8._0_1_ = 0x14;
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    FUN_00409350("REGION",6);
    local_8._0_1_ = 0x15;
    (**(code **)(**(int **)(iVar2 + 0x3c) + 0x18))();
    local_8._0_1_ = 0x16;
    FUN_00988fa0();
    local_8._0_1_ = 0x17;
    FUN_00988f20();
    local_8._0_1_ = 0x18;
    param_1 = FUN_00aae9af();
    local_8._0_1_ = 0x19;
    if (param_1 == 0) {
      param_1 = 0;
    }
    else {
      param_1 = FUN_009a9ce0();
    }
    local_8._0_1_ = 0x18;
    FUN_009e6810(local_30,&param_1);
    if (0xf < local_88) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_a4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_dc) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 5;
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  local_8._0_1_ = 5;
  iVar2 = FUN_00475500();
  FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c),*(undefined8 *)(iVar2 + 0x74));
  local_8 = 0x1a;
  FUN_009adb70();
  if (local_5c != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_2;
}

