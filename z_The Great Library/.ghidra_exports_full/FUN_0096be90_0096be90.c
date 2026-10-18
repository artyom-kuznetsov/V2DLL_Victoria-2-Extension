// FUN_0096be90 @ 0096be90 body=[[0096be90, 0096c2ce] [0096c2d2, 0096c39a] [0096c39e, 0096c47c] [0096c480, 0096c529] [0096c52d, 0096c550] [0096c554, 0096c60c] [0096c610, 0096c63f] [0096c643, 0096c65b] [0096c665, 0096c679]]


undefined4 * FUN_0096be90(undefined4 *param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined1 local_8c [8];
  int local_84;
  int local_74;
  undefined4 local_70;
  undefined4 local_6c;
  uint local_5c;
  undefined4 local_4c;
  uint local_48;
  undefined **local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int local_34;
  int local_30;
  uint local_2c;
  undefined4 *local_20;
  int local_1c;
  undefined1 local_15;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b5854c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = CPopType::vftable;
  param_1[1] = 0x18d;
  param_1[7] = 0xf;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  FUN_00408ed0(param_2,0,0xffffffff);
  param_1[10] = param_3;
  *(undefined1 *)(param_1 + 0xb) = 1;
  param_1[0xe] = 1;
  param_1[0xf] = 3;
  *(undefined2 *)(param_1 + 0x10) = 0;
  *(undefined1 *)((int)param_1 + 0x42) = 0;
  param_1[0xc] = 0xffffffff;
  param_1[0xd] = 0xffffffff;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined2 *)(param_1 + 0x14) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x25] = 0x18d;
  param_1[0x24] = CMeanTimeToHappen::vftable;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x26] = 1000;
  param_1[0x2c] = 0x18d;
  param_1[0x2b] = CMeanTimeToHappen::vftable;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x2d] = 1000;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  uVar3 = DAT_00f092fc;
  param_1[0x3b] = 0x18d;
  param_1[0x3a] = CColor::vftable;
  param_1[0x3c] = uVar3;
  param_1[0x3d] = uVar3;
  param_1[0x3e] = uVar3;
  param_1[0x3f] = uVar3;
  *(undefined1 *)(param_1 + 0x40) = 1;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  local_20 = param_1 + 0x44;
  param_1[0x45] = 0x18d;
  *local_20 = CGoodsPool::vftable;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  local_8._0_1_ = 7;
  local_8._1_3_ = 0;
  _memset(param_1 + 0x46,0,0x40);
  FUN_00423920();
  local_20 = param_1 + 0x5a;
  param_1[0x5b] = 0x18d;
  *local_20 = CGoodsPool::vftable;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  local_8._0_1_ = 9;
  _memset(param_1 + 0x5c,0,0x40);
  FUN_00423920();
  local_20 = param_1 + 0x70;
  param_1[0x71] = 0x18d;
  *local_20 = CGoodsPool::vftable;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  local_8._0_1_ = 0xb;
  _memset(param_1 + 0x72,0,0x40);
  FUN_00423920();
  local_20 = param_1 + 0x86;
  param_1[0x87] = 0x18d;
  *local_20 = CGoodsPool::vftable;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  local_8._0_1_ = 0xd;
  _memset(param_1 + 0x88,0,0x40);
  FUN_00423920();
  local_20 = param_1 + 0x9c;
  param_1[0x9d] = 0x18d;
  *local_20 = CGoodsPool::vftable;
  param_1[0xae] = 0;
  param_1[0xaf] = 0;
  param_1[0xb0] = 0;
  local_8._0_1_ = 0xf;
  _memset(param_1 + 0x9e,0,0x40);
  FUN_00423920();
  local_20 = param_1 + 0xb2;
  param_1[0xb3] = 0x18d;
  *local_20 = CGoodsPool::vftable;
  param_1[0xc4] = 0;
  param_1[0xc5] = 0;
  param_1[0xc6] = 0;
  local_8._0_1_ = 0x11;
  _memset(param_1 + 0xb4,0,0x40);
  FUN_00423920();
  param_1[200] = 0;
  param_1[0xc9] = 0;
  param_1[0xca] = 0;
  param_1[0xcb] = 0;
  param_1[0xcc] = 0;
  param_1[0xcd] = 0;
  param_1[0xcf] = 0x18d;
  param_1[0xce] = CPopIncome::vftable;
  param_1[0xd1] = 0;
  param_1[0xd0] = 0x8000;
  param_1[0xd2] = 4;
  param_1[0xd4] = 0;
  param_1[0xd5] = 0;
  param_1[0xd7] = 0x18d;
  param_1[0xd6] = CPopIncome::vftable;
  param_1[0xd8] = 0x8000;
  param_1[0xd9] = 0;
  param_1[0xda] = 4;
  param_1[0xdc] = 0;
  param_1[0xdd] = 0;
  param_1[0xdf] = 0x18d;
  param_1[0xde] = CPopIncome::vftable;
  param_1[0xe0] = 0x8000;
  param_1[0xe1] = 0;
  param_1[0xe2] = 4;
  param_1[0xe4] = 0;
  param_1[0xe5] = 0;
  param_1[0xe6] = 0;
  *(undefined1 *)(param_1 + 0xe7) = 0;
  param_1[0xed] = 0xf;
  param_1[0xec] = 0;
  *(undefined1 *)(param_1 + 0xe8) = 0;
  param_1[0xf0] = 0;
  param_1[0xf1] = 0;
  param_1[0xf2] = 1;
  *(undefined1 *)(param_1 + 0xf4) = 0;
  param_1[0xf6] = 0;
  param_1[0xf7] = 0;
  param_1[0xf8] = 0;
  param_1[0xf9] = 0;
  local_8._0_1_ = 0x14;
  *(undefined1 *)(param_1 + 0xfb) = 0;
  local_2c = 0xf;
  local_30 = 0;
  local_40 = (undefined **)((uint)local_40 & 0xffffff00);
  FUN_00409350("null_pop",8);
  local_8._0_1_ = 0x15;
  cVar2 = FUN_00416db0();
  local_15 = cVar2 == '\0';
  local_8._0_1_ = 0x14;
  if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_40);
  }
  if ((bool)local_15) {
    uVar3 = FUN_0096bb70();
    param_1[0xf5] = uVar3;
  }
  else {
    param_1[0xf5] = param_1;
  }
  uVar3 = FUN_009902d0(param_2,0);
  param_1[9] = uVar3;
  FUN_009b7500();
  local_20 = (undefined4 *)0x0;
  if (0 < (int)(*(int *)(DAT_01258a3c + 0x10) - *(int *)(DAT_01258a3c + 0xc) & 0xfffffffcU)) {
    do {
      local_3c = 0x18d;
      local_40 = CMeanTimeToHappen::vftable;
      local_34 = 0;
      local_30 = 0;
      local_2c = 0;
      local_38 = 1000;
      local_8._0_1_ = 0x16;
      FUN_0096ff70();
      local_40 = CMeanTimeToHappen::vftable;
      local_8._0_1_ = 0x17;
      iVar6 = local_30 - local_34 >> 2;
      local_1c = 0;
      iVar5 = local_34;
      if (0 < iVar6) {
        do {
          puVar4 = *(undefined4 **)(iVar5 + local_1c * 4);
          if (puVar4 != (undefined4 *)0x0) {
            (**(code **)*puVar4)(1);
            iVar5 = local_34;
          }
          local_1c = local_1c + 1;
        } while (local_1c < iVar6);
      }
      local_8._0_1_ = 0x14;
      if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(iVar5);
      }
      *(undefined4 *)(param_1[0x20] + ((int)(param_1[0x21] - param_1[0x20]) / 0x1c) * 0x1c + -0x14)
           = 0;
      local_20 = (undefined4 *)((int)local_20 + 1);
    } while ((int)local_20 < *(int *)(DAT_01258a3c + 0x10) - *(int *)(DAT_01258a3c + 0xc) >> 2);
  }
  local_1c = 0;
  if (0 < (int)(*(int *)(DAT_01258a48 + 0x1c) - *(int *)(DAT_01258a48 + 0x18) & 0xfffffffcU)) {
    do {
      local_3c = 0x18d;
      local_40 = CMeanTimeToHappen::vftable;
      local_34 = 0;
      local_30 = 0;
      local_2c = 0;
      local_38 = 1000;
      local_8._0_1_ = 0x18;
      FUN_0096ff70();
      local_40 = CMeanTimeToHappen::vftable;
      local_8._0_1_ = 0x19;
      iVar6 = local_30 - local_34 >> 2;
      local_20 = (undefined4 *)0x0;
      iVar5 = local_34;
      if (0 < iVar6) {
        do {
          puVar4 = *(undefined4 **)(iVar5 + (int)local_20 * 4);
          if (puVar4 != (undefined4 *)0x0) {
            (**(code **)*puVar4)(1);
            iVar5 = local_34;
          }
          local_20 = (undefined4 *)((int)local_20 + 1);
        } while ((int)local_20 < iVar6);
      }
      local_8._0_1_ = 0x14;
      if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(iVar5);
      }
      *(undefined4 *)(param_1[0x1c] + ((int)(param_1[0x1d] - param_1[0x1c]) / 0x1c) * 0x1c + -0x14)
           = 0;
      local_1c = local_1c + 1;
    } while (local_1c < *(int *)(DAT_01258a48 + 0x1c) - *(int *)(DAT_01258a48 + 0x18) >> 2);
  }
  if (0 < param_3) {
    local_2c = 0xf;
    local_30 = 0;
    local_40 = (undefined **)((uint)local_40 & 0xffffff00);
    FUN_00409350("_income",7);
    local_8._0_1_ = 0x1a;
    uVar3 = FUN_00988f20(&local_40);
    local_8._0_1_ = 0x1b;
    FUN_00408ed0(uVar3,0,0xffffffff);
    if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_5c);
    }
    local_8._0_1_ = 0x14;
    local_48 = 0xf;
    local_4c = 0;
    local_5c = local_5c & 0xffffff00;
    if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_40);
    }
    uVar3 = FUN_009902d0(param_1 + 0xe8,0);
    FUN_0044bc60(local_8c);
    local_8._0_1_ = 0x1c;
    param_1[0xef] = DAT_0125a5b8 - DAT_0125a5b4 >> 2;
    puVar4 = (undefined4 *)FUN_00aae9af(0x2c);
    local_8._0_1_ = 0x1d;
    if (puVar4 != (undefined4 *)0x0) {
      local_2c = 0xf;
      local_30 = 0;
      local_40 = (undefined **)((uint)local_40 & 0xffffff00);
      FUN_00408ed0(param_1 + 0xe8,0,0xffffffff);
      uVar1 = param_1[0xef];
      *puVar4 = CModifierDefinition::vftable;
      puVar4[6] = 0xf;
      puVar4[5] = 0;
      *(undefined1 *)(puVar4 + 1) = 0;
      local_8._0_1_ = 0x1f;
      puVar4[9] = uVar1;
      puVar4[8] = uVar3;
      FUN_00408ed0(&local_40,0,0xffffffff);
      *(undefined2 *)(puVar4 + 10) = 0x101;
      if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_40);
      }
      local_2c = 0xf;
      local_30 = 0;
      local_40 = (undefined **)((uint)local_40 & 0xffffff00);
    }
    local_8 = CONCAT31(local_8._1_3_,0x1c);
    FUN_0044ee00();
    if (local_74 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_74);
    }
    local_74 = 0;
    local_70 = 0;
    local_6c = 0;
    if (local_84 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_84);
    }
  }
  ExceptionList = local_10;
  return param_1;
}

