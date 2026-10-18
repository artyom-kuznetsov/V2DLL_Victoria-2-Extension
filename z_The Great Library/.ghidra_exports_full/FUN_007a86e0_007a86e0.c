// FUN_007a86e0 @ 007a86e0 body=[[007a86e0, 007a877a] [007a877e, 007a87db] [007a87df, 007a87f9] [007a87fd, 007a88ec] [007a88f0, 007a8913] [007a8917, 007a89d3] [007a89ea, 007a8a0d]]


void FUN_007a86e0(int param_1)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 auStack_e0 [12];
  undefined4 uStack_d4;
  int iStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined1 auStack_c4 [4];
  undefined4 uStack_c0;
  int iStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined *puStack_b0;
  uint *puStack_ac;
  uint *puStack_a8;
  uint *puStack_a4;
  uint local_94 [4];
  undefined4 local_84;
  uint local_80;
  undefined1 *local_78;
  uint local_74 [4];
  undefined4 local_64;
  uint local_60;
  uint local_58 [2];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  uint local_44;
  undefined4 local_40;
  uint local_3c [4];
  undefined4 local_2c;
  uint local_28;
  uint local_20;
  int local_1c;
  undefined1 local_15;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b59833;
  local_10 = ExceptionList;
  local_14 = (undefined1 *)0x0;
  if (*(char *)(param_1 + 0x3c4) == '\0') {
    puStack_a4 = (uint *)0x0;
    puStack_a8 = (uint *)&DAT_00ded94d;
    local_60 = 0xf;
    local_64 = 0;
    local_74[0] = local_74[0] & 0xffffff00;
    puStack_ac = (uint *)0x7a8731;
    ExceptionList = &local_10;
    FUN_00409350();
    local_8 = 0;
    puStack_a4 = (uint *)0x13;
    puStack_a8 = (uint *)0xe1798c;
    local_28 = 0xf;
    local_2c = 0;
    local_3c[0] = local_3c[0] & 0xffffff00;
    puStack_ac = (uint *)0x7a874c;
    FUN_00409350();
    local_8._0_1_ = 1;
    puStack_a4 = local_3c;
    puStack_a8 = (uint *)0x7a8761;
    iVar3 = (**(code **)(**(int **)(param_1 + 0x3b8) + 0x48))();
    local_15 = *(int *)(iVar3 + 0x6c) == 1;
    local_8._0_1_ = 0;
    if (0xf < local_28) {
      puStack_a8 = (uint *)local_3c[0];
                    /* WARNING: Subroutine does not return */
      puStack_ac = (uint *)&UNK_007a877b;
      FUN_00aae91b();
    }
    if ((bool)local_15) {
      puStack_a8 = (uint *)0xf;
      puStack_ac = (uint *)0xe179a0;
      local_28 = 0xf;
      local_2c = 0;
      local_3c[0] = local_3c[0] & 0xffffff00;
      puStack_b0 = (undefined *)0x7a879a;
      FUN_00409350();
      local_8._0_1_ = 2;
      puStack_a8 = local_3c;
      puStack_ac = (uint *)0x7a87af;
      iVar3 = (**(code **)(**(int **)(param_1 + 0x3b8) + 0x40))();
      puStack_ac = local_58;
      puStack_b0 = (undefined *)0x7a87bd;
      puStack_b0 = (undefined *)(**(code **)(*(int *)(iVar3 + 0x54) + 0x4c))();
      puStack_a8 = (uint *)0xffffffff;
      puStack_ac = (uint *)0x0;
      local_8._0_1_ = 3;
      uStack_b4 = 0x7a87cd;
      FUN_00408ed0();
      if (0xf < local_44) {
        puStack_a8 = (uint *)local_58[0];
                    /* WARNING: Subroutine does not return */
        puStack_ac = (uint *)&UNK_007a87dc;
        FUN_00aae91b();
      }
      local_8._0_1_ = 0;
      local_44 = 0xf;
      local_48 = 0;
      local_58[0] = local_58[0] & 0xffffff00;
      if (0xf < local_28) {
        puStack_a8 = (uint *)local_3c[0];
                    /* WARNING: Subroutine does not return */
        puStack_ac = (uint *)&UNK_007a87fa;
        FUN_00aae91b();
      }
    }
    local_8._0_1_ = 0;
    puStack_a8 = (uint *)0xa0;
    puStack_ac = (uint *)0x7a8807;
    local_1c = FUN_00aae9af();
    local_8._0_1_ = 4;
    uVar2 = (undefined1)local_8;
    local_8._0_1_ = 4;
    if (local_1c == 0) {
      local_1c = 0;
      local_8._0_1_ = uVar2;
    }
    else {
      puStack_a8 = (uint *)0xb;
      puStack_ac = (uint *)0xe17954;
      local_28 = 0xf;
      local_2c = 0;
      local_3c[0] = local_3c[0] & 0xffffff00;
      puStack_b0 = (undefined *)0x7a8831;
      FUN_00409350();
      local_8 = CONCAT31(local_8._1_3_,5);
      puStack_a8 = local_3c;
      local_14 = (undefined1 *)0x1;
      puStack_ac = (uint *)0x7a884d;
      iVar3 = (**(code **)(**(int **)(param_1 + 0x3b8) + 0x40))();
      puStack_ac = local_94;
      puStack_b0 = (undefined *)0x7a885f;
      uVar4 = (**(code **)(*(int *)(iVar3 + 0x54) + 0x4c))();
      local_8._0_1_ = 6;
      local_8._1_3_ = 0;
      local_14 = (undefined1 *)0x3;
      local_50 = 0;
      local_4c = 0;
      local_48 = 0;
      local_44 = 0;
      local_40 = 0;
      puStack_b0 = (undefined *)0x7a888e;
      local_20 = (**(code **)(**(int **)(*(int *)(param_1 + 0x3a0) + 0x38) + 0x5c))();
      local_20 = local_20 & 0xffff;
      puStack_b0 = (undefined *)0x7a88a4;
      (**(code **)(**(int **)(*(int *)(param_1 + 0x3a0) + 0x38) + 0x58))();
      puStack_a8 = local_74;
      puStack_ac = (uint *)0x0;
      puStack_b0 = (undefined *)(param_1 + 0x3dc);
      uStack_b8 = 2;
      iStack_bc = local_1c;
      uStack_c0 = 0x7a88c4;
      uStack_b4 = uVar4;
      local_1c = FUN_00a15f70();
    }
    if (((uint)local_14 & 2) != 0) {
      local_14 = (undefined1 *)((uint)local_14 & 0xfffffffd);
      if (0xf < local_80) {
        puStack_a8 = (uint *)local_94[0];
                    /* WARNING: Subroutine does not return */
        puStack_ac = (uint *)&UNK_007a88ed;
        FUN_00aae91b();
      }
      local_80 = 0xf;
      local_84 = 0;
      local_94[0] = local_94[0] & 0xffffff00;
    }
    local_8 = 0;
    if (((uint)local_14 & 1) != 0) {
      if (0xf < local_28) {
        puStack_a8 = (uint *)local_3c[0];
                    /* WARNING: Subroutine does not return */
        puStack_ac = (uint *)&UNK_007a8914;
        FUN_00aae91b();
      }
      local_28 = 0xf;
      local_2c = 0;
      local_3c[0] = local_3c[0] & 0xffffff00;
    }
    puStack_a8 = (uint *)0x7c;
    puStack_ac = (uint *)0x7a8927;
    local_20 = FUN_00aae9af();
    local_8._0_1_ = 9;
    if (local_20 == 0) {
      puStack_a8 = (uint *)0x0;
    }
    else {
      puStack_a8 = (uint *)0x1;
      local_14 = auStack_c4;
      uStack_c8 = 0xffffffff;
      uStack_cc = 0;
      iStack_d0 = param_1 + 0x3f8;
      puStack_b0 = (undefined *)0xf;
      uStack_b4 = 0;
      auStack_c4[0] = 0;
      uStack_d4 = 0x7a8956;
      FUN_00408ed0();
      local_78 = auStack_e0;
      local_8._0_1_ = 10;
      uStack_cc = 0xf;
      iStack_d0 = 0;
      auStack_e0[0] = 0;
      FUN_00408ed0(param_1 + 0x3dc,0,0xffffffff);
      local_8._0_1_ = 9;
      puStack_a8 = (uint *)FUN_00a04ad0(local_1c);
    }
    local_8 = (uint)local_8._1_3_ << 8;
    puStack_ac = (uint *)0x7a89a4;
    (**(code **)(**(int **)(*(int *)(param_1 + 0x3a0) + 0x38) + 0x18))();
    iVar3 = *(int *)(param_1 + 0x3a0);
    puVar1 = *(undefined4 **)(iVar3 + 0x1b8);
    if (puVar1 != (undefined4 *)0x0) {
      puStack_ac = (uint *)0x1;
      puStack_b0 = (undefined *)0x7a89bc;
      (**(code **)*puVar1)();
    }
    *(int *)(iVar3 + 0x1b8) = local_1c;
    if (0xf < local_60) {
      puStack_ac = (uint *)local_74[0];
                    /* WARNING: Subroutine does not return */
      puStack_b0 = &UNK_007a89d4;
      FUN_00aae91b();
    }
  }
  else {
    puStack_a4 = (uint *)0x7a89fb;
    ExceptionList = &local_10;
    (**(code **)(*(int *)(*(int *)(param_1 + 0x3b8) + 0x18) + 0x38))();
  }
  ExceptionList = local_10;
  return;
}

