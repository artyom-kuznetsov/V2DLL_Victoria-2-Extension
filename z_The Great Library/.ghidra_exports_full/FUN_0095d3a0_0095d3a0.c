// FUN_0095d3a0 @ 0095d3a0 body=[[0095d3a0, 0095d44e] [0095d452, 0095d517] [0095d51b, 0095d535] [0095d539, 0095d603] [0095d607, 0095d638] [0095d63c, 0095d657] [0095d65b, 0095d675] [0095d679, 0095d6c8] [0095d6cc, 0095d77f] [0095d783, 0095d7b3] [0095d7b7, 0095d7d2] [0095d7d6, 0095d897] [0095d89b, 0095d8b6] [0095d8ba, 0095d916] [0095d91a, 0095d92e]]


/* WARNING: Removing unreachable block (ram,0x0095d6ee) */

undefined1 * FUN_0095d3a0(int param_1,undefined1 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 local_c4;
  uint local_b0 [4];
  undefined4 local_a0;
  uint local_9c;
  undefined1 local_94 [4];
  int local_90;
  undefined4 local_80;
  uint local_7c;
  undefined4 local_6c;
  uint local_68;
  uint local_60 [4];
  undefined4 local_50;
  uint local_4c;
  undefined1 local_44 [4];
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b83328;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *(undefined4 *)(param_2 + 0x14) = 0xf;
  *param_2 = 0;
  *(undefined4 *)(param_2 + 0x30) = 0xf;
  *(undefined4 *)(param_2 + 0x2c) = 0;
  param_2[0x1c] = 0;
  *(undefined4 *)(param_2 + 0x4c) = 0xf;
  *(undefined4 *)(param_2 + 0x48) = 0;
  param_2[0x38] = 0;
  *(undefined4 *)(param_2 + 0x54) = 0;
  param_2[0x58] = 1;
  local_8 = 0;
  local_c4 = 0xd00dfed78;
  local_80 = 1;
  local_9c = 0xf;
  local_a0 = 0;
  local_b0[0] = local_b0[0] & 0xffffff00;
  FUN_00409350();
  local_c4 = CONCAT44(local_b0,local_94);
  local_8 = 1;
  FUN_009a8ee0();
  local_8._0_1_ = 3;
  if (0xf < local_9c) {
    local_c4 = CONCAT44(local_b0[0],&UNK_0095d44f);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_c4 = 0x300df7e90;
  local_9c = 0xf;
  local_a0 = 0;
  local_b0[0] = local_b0[0] & 0xffffff00;
  local_4c = 0xf;
  local_50 = 0;
  local_60[0] = local_60[0] & 0xffffff00;
  FUN_00409350();
  local_14 = (undefined1 *)&local_c4;
  local_8._0_1_ = 4;
  local_c4 = __allmul(*(undefined4 *)(param_1 + 0x138),*(undefined4 *)(param_1 + 0x13c),0x320000,0);
  local_c4 = local_c4 >> 0xf;
  uVar2 = FUN_00988bb0(local_30,1);
  local_8._0_1_ = 5;
  local_c4 = 0x400095d4c8;
  local_14 = (undefined1 *)FUN_00aae9af();
  local_8._0_1_ = 6;
  if (local_14 == (undefined1 *)0x0) {
    local_14 = (undefined1 *)0x0;
  }
  else {
    local_c4 = CONCAT44(uVar2,local_94);
    local_14 = (undefined1 *)FUN_009a9ce0();
  }
  local_8._0_1_ = 5;
  local_c4 = CONCAT44(&local_14,local_60);
  FUN_009e6810();
  if (0xf < local_1c) {
    local_c4 = CONCAT44(local_30[0],&UNK_0095d518);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 3;
  local_1c = 0xf;
  local_20 = 0;
  uVar1 = local_30[0] >> 8;
  local_30[0] = uVar1 << 8;
  if (0xf < local_4c) {
    local_c4 = CONCAT44(local_60[0],&UNK_0095d536);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_c4 = 0xe00dfedb8;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = uVar1 << 8;
  FUN_00409350();
  local_8._0_1_ = 7;
  local_c4 = 0x400dfd184;
  local_4c = 0xf;
  local_50 = 0;
  local_60[0] = local_60[0] & 0xffffff00;
  FUN_00409350();
  local_c4 = CONCAT44(local_30,local_44);
  local_8._0_1_ = 8;
  FUN_009a8ee0();
  local_8._0_1_ = 9;
  local_c4 = CONCAT44(0x95d589,(undefined4)local_c4);
  iVar3 = FUN_00475500();
  local_c4 = *(undefined8 *)(iVar3 + 0x74);
  uVar2 = FUN_009a9880(*(undefined8 *)(iVar3 + 0x6c));
  local_8._0_1_ = 10;
  local_c4 = 0x400095d5b8;
  local_14 = (undefined1 *)FUN_00aae9af();
  local_8._0_1_ = 0xb;
  if (local_14 == (undefined1 *)0x0) {
    local_14 = (undefined1 *)0x0;
  }
  else {
    local_c4 = CONCAT44(uVar2,local_94);
    local_14 = (undefined1 *)FUN_009a9ce0();
  }
  local_8._0_1_ = 10;
  local_c4 = CONCAT44(&local_14,local_60);
  FUN_009e6810();
  if (0xf < local_68) {
    local_c4 = CONCAT44(local_7c,&UNK_0095d604);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_68 = 0xf;
  local_6c = 0;
  local_7c = local_7c & 0xffffff00;
  local_8._0_1_ = 0xc;
  local_c4 = CONCAT44(0x95d621,(undefined4)local_c4);
  FUN_009adb70();
  if (local_40 != 0) {
    local_c4 = CONCAT44(0x95d630,(undefined4)local_c4);
    FUN_009e6a80();
    local_c4 = CONCAT44(local_40,&UNK_0095d639);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  if (0xf < local_4c) {
    local_c4 = CONCAT44(local_60[0],&UNK_0095d658);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 3;
  local_4c = 0xf;
  local_50 = 0;
  local_60[0] = local_60[0] & 0xffffff00;
  if (0xf < local_1c) {
    local_c4 = CONCAT44(local_30[0],&UNK_0095d676);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_c4 = CONCAT44(0x95d67e,(undefined4)local_c4);
  iVar3 = FUN_00475500();
  local_c4 = *(undefined8 *)(iVar3 + 0x74);
  FUN_009a9880(*(undefined8 *)(iVar3 + 0x6c));
  local_8._0_1_ = 0xd;
  local_c4 = 0xffffffff00000000;
  FUN_00408ed0();
  local_8._0_1_ = 3;
  if (0xf < local_68) {
    local_c4 = CONCAT44(local_7c,&UNK_0095d6c9);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_c4 = CONCAT44(0x95d6d7,(undefined4)local_c4);
  lVar4 = FUN_00b31c36();
  if (*(longlong *)(param_1 + 0x138) < lVar4) {
    if (*(char *)(param_1 + 0x1d1) == '\0') {
      local_c4 = CONCAT44(*(int *)(param_1 + 0x68) + 0x168,param_2 + 0x1c);
      FUN_0095ca80();
      if (*(int *)(param_2 + 0x2c) != 0) {
        local_c4 = 0xe00e35f44;
        local_1c = 0xf;
        local_20 = 0;
        local_30[0] = local_30[0] & 0xffffff00;
        FUN_00409350();
        local_c4 = CONCAT44(local_30,local_44);
        local_8._0_1_ = 0x12;
        FUN_009a8ee0();
        local_8._0_1_ = 0x13;
        local_c4 = CONCAT44(0x95d844,(undefined4)local_c4);
        iVar3 = FUN_00475500();
        local_c4 = *(undefined8 *)(iVar3 + 0x74);
        FUN_009a9880(*(undefined8 *)(iVar3 + 0x6c));
        local_8._0_1_ = 0x14;
        local_c4 = CONCAT44(param_2 + 0x1c,0x95d876);
        FUN_00988f20();
        local_c4 = 0xffffffff00000000;
        local_8._0_1_ = 0x15;
        FUN_00408ed0();
        if (0xf < local_68) {
          local_c4 = CONCAT44(local_7c,&UNK_0095d898);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_68 = 0xf;
        local_6c = 0;
        local_7c = local_7c & 0xffffff00;
        if (0xf < local_4c) {
          local_c4 = CONCAT44(local_60[0],&UNK_0095d8b7);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_4c = 0xf;
        local_50 = 0;
        local_60[0] = local_60[0] & 0xffffff00;
        local_8 = CONCAT31(local_8._1_3_,0x12);
        local_c4 = CONCAT44(local_44,0x95d8d0);
        FUN_009a9740();
        if (0xf < local_1c) {
          local_c4 = CONCAT44(local_30[0],0x95d8de);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
      }
    }
    else {
      local_c4 = 0x1800e35f28;
      local_1c = 0xf;
      local_20 = 0;
      local_30[0] = local_30[0] & 0xffffff00;
      FUN_00409350();
      local_c4 = CONCAT44(local_30,local_44);
      local_8._0_1_ = 0xe;
      FUN_009a8ee0();
      local_8._0_1_ = 0xf;
      local_c4 = CONCAT44(0x95d73a,(undefined4)local_c4);
      iVar3 = FUN_00475500();
      local_c4 = *(undefined8 *)(iVar3 + 0x74);
      FUN_009a9880(*(undefined8 *)(iVar3 + 0x6c));
      local_8._0_1_ = 0x10;
      local_c4 = 0xffffffff00000000;
      FUN_00408ed0();
      if (0xf < local_68) {
        local_c4 = CONCAT44(local_7c,&UNK_0095d780);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_68 = 0xf;
      local_6c = 0;
      local_7c = local_7c & 0xffffff00;
      local_8._0_1_ = 0x11;
      local_c4 = CONCAT44(0x95d79c,(undefined4)local_c4);
      FUN_009adb70();
      if (local_40 != 0) {
        local_c4 = CONCAT44(0x95d7ab,(undefined4)local_c4);
        FUN_009e6a80();
        local_c4 = CONCAT44(local_40,&UNK_0095d7b4);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8 = CONCAT31(local_8._1_3_,3);
      local_40 = 0;
      local_3c = 0;
      local_38 = 0;
      if (0xf < local_1c) {
        local_c4 = CONCAT44(local_30[0],&UNK_0095d7d3);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_c4 = CONCAT44(*(int *)(param_1 + 0x68) + 0x168,0x95d7e7);
      FUN_0095cc10();
    }
  }
  local_8 = 0x16;
  local_c4 = CONCAT44(0x95d8f6,(undefined4)local_c4);
  FUN_009adb70();
  if (local_90 != 0) {
    local_c4 = CONCAT44(0x95d90b,(undefined4)local_c4);
    FUN_009e6a80();
    local_c4 = CONCAT44(local_90,&UNK_0095d917);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_2;
}

