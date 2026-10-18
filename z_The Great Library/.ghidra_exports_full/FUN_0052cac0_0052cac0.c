// FUN_0052cac0 @ 0052cac0 body=[[0052cac0, 0052cb47] [0052cb4b, 0052cbdf] [0052cbe3, 0052cc72] [0052cc76, 0052cc90] [0052cc94, 0052ccb1] [0052ccb5, 0052ccd8] [0052ccdc, 0052cd61] [0052cd65, 0052cd85] [0052cd89, 0052cda6] [0052cdaa, 0052ce44] [0052ce48, 0052ce5c]]


undefined1 * FUN_0052cac0(int param_1,undefined1 *param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  uint local_c4;
  undefined *puStack_c0;
  uint uStack_bc;
  uint *puStack_b8;
  uint *local_b4;
  uint *local_b0;
  uint *local_ac;
  uint local_98 [4];
  undefined4 local_88;
  uint local_84;
  uint local_7c [4];
  undefined4 local_6c;
  uint local_68;
  uint local_60 [4];
  undefined4 local_50;
  uint local_4c;
  uint local_44 [4];
  undefined4 local_34;
  uint local_30;
  uint *local_28;
  int local_24;
  undefined1 *local_1c;
  undefined4 local_18;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00b81943;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_2 + 0x14) = 0xf;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *param_2 = 0;
  local_ac = (uint *)0x0;
  local_8 = 0;
  local_b4 = (uint *)param_3;
  local_18 = 1;
  puStack_b8 = (uint *)0x52cb0c;
  cVar1 = FUN_004d04b0();
  if (cVar1 == '\0') {
    local_b0 = local_98;
    local_b4 = (uint *)param_3;
    puStack_b8 = (uint *)0x52cb21;
    local_b4 = (uint *)FUN_004d06a0();
    local_ac = (uint *)0xffffffff;
    local_b0 = (uint *)0x0;
    local_8 = 1;
    puStack_b8 = (uint *)0x52cb33;
    FUN_00448aa0();
    local_8 = local_8 & 0xffffff00;
    if (0xf < local_84) {
      local_ac = (uint *)local_98[0];
                    /* WARNING: Subroutine does not return */
      local_b0 = (uint *)&UNK_0052cb48;
      FUN_00aae91b();
    }
  }
  local_ac = (uint *)(param_1 + 0x1184);
  local_b0 = (uint *)0x0;
  local_b4 = (uint *)param_1;
  uStack_bc = 0x52cb63;
  FUN_004da720();
  local_1c = (undefined1 *)&local_c4;
  local_b0 = (uint *)0xf;
  local_b4 = (uint *)0x0;
  local_c4 = local_c4 & 0xffffff00;
  FUN_00409350(&DAT_00dedc20,2);
  if ((*(int *)(param_1 + 0xe7c) < local_24) ||
     ((*(int *)(param_1 + 0xe7c) <= local_24 && (*(uint **)(param_1 + 0xe78) <= local_28)))) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  local_b4 = (uint *)FUN_009c98f0(local_98,uVar2);
  local_ac = (uint *)0xffffffff;
  local_b0 = (uint *)0x0;
  local_8 = 2;
  puStack_b8 = (uint *)0x52cbcb;
  FUN_00448aa0();
  local_8 = local_8 & 0xffffff00;
  if (0xf < local_84) {
    local_ac = (uint *)local_98[0];
                    /* WARNING: Subroutine does not return */
    local_b0 = (uint *)&UNK_0052cbe0;
    FUN_00aae91b();
  }
  local_ac = (uint *)0x2;
  local_b0 = (uint *)&DAT_00dfc7c8;
  local_30 = 0xf;
  local_34 = 0;
  local_44[0] = local_44[0] & 0xffffff00;
  local_b4 = (uint *)0x52cbff;
  FUN_00409350();
  local_1c = (undefined1 *)&local_b0;
  local_8 = 3;
  local_b4 = (uint *)0x2;
  puStack_b8 = local_98;
  local_b0 = local_28;
  local_ac = (uint *)local_24;
  uStack_bc = 0x52cc24;
  FUN_00988bb0();
  local_ac = local_44;
  local_8._0_1_ = 4;
  local_b0 = (uint *)0x52cc36;
  local_ac = (uint *)FUN_00988f20();
  local_b0 = local_60;
  local_8._0_1_ = 5;
  local_b4 = (uint *)0x52cc4e;
  local_b4 = (uint *)FUN_0042c180();
  local_ac = (uint *)0xffffffff;
  local_b0 = (uint *)0x0;
  local_8._0_1_ = 6;
  puStack_b8 = (uint *)0x52cc60;
  FUN_00448aa0();
  if (0xf < local_4c) {
    local_ac = (uint *)local_60[0];
                    /* WARNING: Subroutine does not return */
    local_b0 = (uint *)&UNK_0052cc73;
    FUN_00aae91b();
  }
  local_4c = 0xf;
  local_50 = 0;
  local_60[0] = local_60[0] & 0xffffff00;
  if (local_68 < 0x10) {
    local_68 = 0xf;
    local_6c = 0;
    local_7c[0] = local_7c[0] & 0xffffff00;
    if (0xf < local_84) {
      local_ac = (uint *)local_98[0];
                    /* WARNING: Subroutine does not return */
      local_b0 = (uint *)&UNK_0052ccb2;
      FUN_00aae91b();
    }
    local_8 = (uint)local_8._1_3_ << 8;
    local_84 = 0xf;
    local_88 = 0;
    local_98[0] = local_98[0] & 0xffffff00;
    if (0xf < local_30) {
      local_ac = (uint *)local_44[0];
                    /* WARNING: Subroutine does not return */
      local_b0 = (uint *)&UNK_0052ccd9;
      FUN_00aae91b();
    }
    local_ac = (uint *)0x1;
    if (*(int *)(param_3 + 0x5c) == *(int *)(param_1 + 0x20)) {
      local_b0 = local_98;
      local_b4 = (uint *)0x52ce21;
      local_c4 = (**(code **)(*(int *)(param_1 + 0xaa8) + 0x20))();
      uStack_bc = 0xffffffff;
      puStack_c0 = (undefined *)0x0;
      local_8 = 0xb;
      FUN_00448aa0();
      uStack_bc = local_98[0];
    }
    else {
      local_b0 = (uint *)&DAT_00dee2cc;
      local_30 = 0xf;
      local_34 = 0;
      local_44[0] = local_44[0] & 0xffffff00;
      local_b4 = (uint *)0x52cd0a;
      FUN_00409350();
      local_8 = 7;
      local_ac = (uint *)0xc;
      local_b0 = local_7c;
      local_b4 = (uint *)0x52cd28;
      (**(code **)(*(int *)(param_1 + 0xaa8) + 0x20))();
      local_b4 = local_44;
      local_8._0_1_ = 8;
      puStack_b8 = (uint *)0x52cd3d;
      uStack_bc = FUN_00988f20();
      local_b4 = (uint *)0xffffffff;
      puStack_b8 = (uint *)0x0;
      local_8._0_1_ = 9;
      puStack_c0 = (undefined *)0x52cd4c;
      FUN_00448aa0();
      if (0xf < local_84) {
        local_b4 = (uint *)local_98[0];
                    /* WARNING: Subroutine does not return */
        puStack_b8 = (uint *)&UNK_0052cd62;
        FUN_00aae91b();
      }
      local_84 = 0xf;
      local_88 = 0;
      local_98[0] = local_98[0] & 0xffffff00;
      if (0xf < local_68) {
        local_b4 = (uint *)local_7c[0];
                    /* WARNING: Subroutine does not return */
        puStack_b8 = (uint *)&UNK_0052cd86;
        FUN_00aae91b();
      }
      local_8 = (uint)local_8._1_3_ << 8;
      local_68 = 0xf;
      local_6c = 0;
      local_7c[0] = local_7c[0] & 0xffffff00;
      if (0xf < local_30) {
        local_b4 = (uint *)local_44[0];
                    /* WARNING: Subroutine does not return */
        puStack_b8 = (uint *)&UNK_0052cda7;
        FUN_00aae91b();
      }
      local_28 = *(uint **)(param_3 + 0x58);
      local_30 = 0xf;
      local_34 = 0;
      local_44[0] = local_44[0] & 0xffffff00;
      local_b4 = (uint *)0x14;
      puStack_b8 = local_98;
      uStack_bc = 0x52cde9;
      local_c4 = (**(code **)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                               *(int *)(param_3 + 0x5c) * 4) + 0xaa8) + 0x20))();
      uStack_bc = 0xffffffff;
      puStack_c0 = (undefined *)0x0;
      local_8 = 10;
      FUN_00448aa0();
      uStack_bc = local_98[0];
    }
    if (0xf < local_84) {
                    /* WARNING: Subroutine does not return */
      puStack_c0 = &UNK_0052ce45;
      local_98[0] = uStack_bc;
      FUN_00aae91b();
    }
    ExceptionList = local_10;
    return param_2;
  }
  local_ac = (uint *)local_7c[0];
                    /* WARNING: Subroutine does not return */
  local_b0 = (uint *)&UNK_0052cc91;
  FUN_00aae91b();
}

