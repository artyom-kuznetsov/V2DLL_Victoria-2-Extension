// FUN_004d7740 @ 004d7740 body=[[004d7740, 004d78a8] [004d78ac, 004d78d6] [004d78da, 004d78ff] [004d7903, 004d7928] [004d792c, 004d7961] [004d7965, 004d797b] [004d797f, 004d79a0] [004d79a4, 004d79c3] [004d79c7, 004d79e0] [004d79e4, 004d7b13] [004d7b17, 004d7b3c] [004d7b40, 004d7b65] [004d7b69, 004d7b8e] [004d7b92, 004d7bc7] [004d7bcb, 004d7be1] [004d7be5, 004d7c06] [004d7c0a, 004d7c29] [004d7c2d, 004d7c46] [004d7c4a, 004d7d78] [004d7d7c, 004d7da1] [004d7da5, 004d7dca] [004d7dce, 004d7df3] [004d7df7, 004d7e2c] [004d7e30, 004d7e46] [004d7e4a, 004d7e6b] [004d7e6f, 004d7e8e] [004d7e92, 004d7eab] [004d7eaf, 004d7f6f] [004d7f73, 004d7f98] [004d7f9c, 004d7fc1] [004d7fc5, 004d7fe7] [004d7feb, 004d8027] [004d802b, 004d803f]]


/* WARNING: Removing unreachable block (ram,0x004d7de8) */
/* WARNING: Removing unreachable block (ram,0x004d7b83) */
/* WARNING: Removing unreachable block (ram,0x004d7e60) */
/* WARNING: Removing unreachable block (ram,0x004d7bfb) */

undefined1 * FUN_004d7740(int *param_1,undefined1 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint extraout_ECX;
  undefined8 uVar3;
  undefined8 local_124;
  undefined4 local_10c;
  uint local_f8;
  undefined4 local_f0;
  uint local_dc;
  uint local_d4 [4];
  undefined4 local_c4;
  uint local_c0;
  uint local_b8 [4];
  undefined4 local_a8;
  uint local_a4;
  uint local_9c [4];
  undefined4 local_8c;
  uint local_88;
  uint local_80 [4];
  undefined4 local_70;
  uint local_6c;
  uint local_64 [4];
  undefined4 local_54;
  uint local_50;
  uint local_48 [4];
  undefined4 local_38;
  uint local_34;
  undefined1 local_2c [4];
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00b756e6;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_2 + 0x14) = 0xf;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *param_2 = 0;
  local_8 = 0;
  local_124 = 0x300dfc7b4;
  local_6c = 0xf;
  local_70 = 0;
  local_80[0] = local_80[0] & 0xffffff00;
  FUN_00409350();
  local_8 = 1;
  local_124 = 0x1500dfd8b4;
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  FUN_00409350();
  local_14 = (undefined1 *)&local_124;
  local_8._0_1_ = 2;
  local_124 = CONCAT44(2,param_1[0x23]);
  local_14 = (undefined1 *)FUN_00988a50();
  local_8._0_1_ = 3;
  local_124 = 0x200df963c;
  local_50 = 0xf;
  local_54 = 0;
  local_64[0] = local_64[0] & 0xffffff00;
  FUN_00409350();
  local_124 = CONCAT44(local_48,local_2c);
  local_8._0_1_ = 4;
  local_18 = FUN_009a8ee0();
  local_8._0_1_ = 5;
  local_124 = CONCAT44(0x4d781c,(undefined4)local_124);
  iVar1 = FUN_00475500();
  local_124 = *(undefined8 *)(iVar1 + 0x74);
  FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c));
  local_8._0_1_ = 6;
  local_124 = CONCAT44(local_64,0x4d7857);
  FUN_00988f20();
  local_8._0_1_ = 7;
  local_124 = CONCAT44(local_14,0x4d786c);
  FUN_00988f20();
  local_8._0_1_ = 8;
  local_124 = CONCAT44(local_80,0x4d7881);
  FUN_00988f20();
  local_124 = 0xffffffff00000000;
  local_8._0_1_ = 9;
  FUN_00448aa0();
  if (0xf < local_dc) {
    local_124 = CONCAT44(local_f0,&UNK_004d78a9);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if (0xf < local_f8) {
    local_124 = CONCAT44(local_10c,&UNK_004d78d7);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if (0xf < local_a4) {
    local_124 = CONCAT44(local_b8[0],&UNK_004d7900);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_a4 = 0xf;
  local_a8 = 0;
  local_b8[0] = local_b8[0] & 0xffffff00;
  if (0xf < local_c0) {
    local_124 = CONCAT44(local_d4[0],&UNK_004d7929);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_c0 = 0xf;
  local_c4 = 0;
  local_d4[0] = local_d4[0] & 0xffffff00;
  local_8._0_1_ = 10;
  local_124 = CONCAT44(0x4d794a,(undefined4)local_124);
  FUN_009adb70();
  if (local_28 != 0) {
    local_124 = CONCAT44(0x4d7959,(undefined4)local_124);
    FUN_009e6a80();
    local_124 = CONCAT44(local_28,&UNK_004d7962);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  if (0xf < local_50) {
    local_124 = CONCAT44(local_64[0],&UNK_004d797c);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_50 = 0xf;
  local_54 = 0;
  local_64[0] = local_64[0] & 0xffffff00;
  if (0xf < local_88) {
    local_124 = CONCAT44(local_9c[0],&UNK_004d79a1);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_88 = 0xf;
  local_8c = 0;
  local_9c[0] = local_9c[0] & 0xffffff00;
  if (0xf < local_34) {
    local_124 = CONCAT44(local_48[0],&UNK_004d79c4);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8 = (uint)local_8._1_3_ << 8;
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  if (0xf < local_6c) {
    local_124 = CONCAT44(local_80[0],&UNK_004d79e1);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if (param_1[0x27] != 0) {
    local_124 = 0x300dfc7b4;
    local_6c = 0xf;
    local_70 = 0;
    local_80[0] = local_80[0] & 0xffffff00;
    FUN_00409350();
    local_8 = 0xb;
    local_124 = 0xe00dfd8cc;
    local_50 = 0xf;
    local_54 = 0;
    local_64[0] = local_64[0] & 0xffffff00;
    FUN_00409350();
    local_14 = (undefined1 *)&local_124;
    local_8._0_1_ = 0xc;
    local_124 = CONCAT44(2,param_1[0x27]);
    local_18 = FUN_00988a50();
    local_8._0_1_ = 0xd;
    local_124 = 0x200df963c;
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    FUN_00409350();
    local_124 = CONCAT44(local_64,local_2c);
    local_8._0_1_ = 0xe;
    local_14 = (undefined1 *)FUN_009a8ee0();
    local_8._0_1_ = 0xf;
    local_124 = CONCAT44(0x4d7a86,(undefined4)local_124);
    iVar1 = FUN_00475500();
    local_124 = *(undefined8 *)(iVar1 + 0x74);
    FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c));
    local_8._0_1_ = 0x10;
    local_124 = CONCAT44(local_48,0x4d7ac1);
    FUN_00988f20();
    local_8._0_1_ = 0x11;
    local_124 = CONCAT44(local_18,0x4d7ad6);
    FUN_00988f20();
    local_8._0_1_ = 0x12;
    local_124 = CONCAT44(local_80,0x4d7aeb);
    FUN_00988f20();
    local_8._0_1_ = 0x13;
    local_124 = 0xffffffff00000000;
    FUN_00448aa0();
    if (0xf < local_88) {
      local_124 = CONCAT44(local_9c[0],&UNK_004d7b14);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_88 = 0xf;
    local_8c = 0;
    local_9c[0] = local_9c[0] & 0xffffff00;
    if (0xf < local_c0) {
      local_124 = CONCAT44(local_d4[0],&UNK_004d7b3d);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_c0 = 0xf;
    local_c4 = 0;
    local_d4[0] = local_d4[0] & 0xffffff00;
    if (0xf < local_a4) {
      local_124 = CONCAT44(local_b8[0],&UNK_004d7b66);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_a4 = 0xf;
    local_a8 = 0;
    local_b8[0] = local_b8[0] & 0xffffff00;
    local_8._0_1_ = 0x14;
    local_124 = CONCAT44(0x4d7bb0,(undefined4)local_124);
    FUN_009adb70();
    if (local_28 != 0) {
      local_124 = CONCAT44(0x4d7bbf,(undefined4)local_124);
      FUN_009e6a80();
      local_124 = CONCAT44(local_28,&UNK_004d7bc8);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    if (0xf < local_34) {
      local_124 = CONCAT44(local_48[0],&UNK_004d7be2);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    if (0xf < local_50) {
      local_124 = CONCAT44(local_64[0],&UNK_004d7c2a);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = (uint)local_8._1_3_ << 8;
    local_50 = 0xf;
    local_54 = 0;
    local_64[0] = local_64[0] & 0xffffff00;
    if (0xf < local_6c) {
      local_124 = CONCAT44(local_80[0],&UNK_004d7c47);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  local_20 = 0;
  local_24 = 0;
  local_28 = 0;
  local_34 = 0xf;
  local_38 = 0;
  local_50 = 0xf;
  local_54 = 0;
  if (param_1[0x26] != 0) {
    local_124 = 0x300dfc7b4;
    local_6c = 0xf;
    local_70 = 0;
    local_80[0] = local_80[0] & 0xffffff00;
    FUN_00409350();
    local_8 = 0x15;
    local_124 = 0xf00dfd8dc;
    local_50 = 0xf;
    local_54 = 0;
    local_64[0] = local_64[0] & 0xffffff00;
    FUN_00409350();
    local_14 = (undefined1 *)&local_124;
    local_8._0_1_ = 0x16;
    local_124 = CONCAT44(2,param_1[0x26]);
    local_18 = FUN_00988a50();
    local_8._0_1_ = 0x17;
    local_124 = 0x200df963c;
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    FUN_00409350();
    local_124 = CONCAT44(local_64,local_2c);
    local_8._0_1_ = 0x18;
    local_14 = (undefined1 *)FUN_009a8ee0();
    local_8._0_1_ = 0x19;
    local_124 = CONCAT44(0x4d7ceb,(undefined4)local_124);
    iVar1 = FUN_00475500();
    local_124 = *(undefined8 *)(iVar1 + 0x74);
    FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c));
    local_8._0_1_ = 0x1a;
    local_124 = CONCAT44(local_48,0x4d7d26);
    FUN_00988f20();
    local_8._0_1_ = 0x1b;
    local_124 = CONCAT44(local_18,0x4d7d3b);
    FUN_00988f20();
    local_8._0_1_ = 0x1c;
    local_124 = CONCAT44(local_80,0x4d7d50);
    FUN_00988f20();
    local_8._0_1_ = 0x1d;
    local_124 = 0xffffffff00000000;
    FUN_00448aa0();
    if (0xf < local_88) {
      local_124 = CONCAT44(local_9c[0],&UNK_004d7d79);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_88 = 0xf;
    local_8c = 0;
    local_9c[0] = local_9c[0] & 0xffffff00;
    if (0xf < local_c0) {
      local_124 = CONCAT44(local_d4[0],&UNK_004d7da2);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_c0 = 0xf;
    local_c4 = 0;
    local_d4[0] = local_d4[0] & 0xffffff00;
    if (0xf < local_a4) {
      local_124 = CONCAT44(local_b8[0],&UNK_004d7dcb);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_a4 = 0xf;
    local_a8 = 0;
    local_b8[0] = local_b8[0] & 0xffffff00;
    local_8._0_1_ = 0x1e;
    local_124 = CONCAT44(0x4d7e15,(undefined4)local_124);
    FUN_009adb70();
    if (local_28 != 0) {
      local_124 = CONCAT44(0x4d7e24,(undefined4)local_124);
      FUN_009e6a80();
      local_124 = CONCAT44(local_28,&UNK_004d7e2d);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    if (0xf < local_34) {
      local_124 = CONCAT44(local_48[0],&UNK_004d7e47);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    if (0xf < local_50) {
      local_124 = CONCAT44(local_64[0],&UNK_004d7e8f);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = (uint)local_8._1_3_ << 8;
    local_50 = 0xf;
    local_54 = 0;
    local_64[0] = local_64[0] & 0xffffff00;
    if (0xf < local_6c) {
      local_124 = CONCAT44(local_80[0],&UNK_004d7eac);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  local_20 = 0;
  local_24 = 0;
  local_28 = 0;
  local_34 = 0xf;
  local_38 = 0;
  local_50 = 0xf;
  local_54 = 0;
  if (param_1[0x25] != 0) {
    local_124 = 0x100dee2cc;
    local_6c = 0xf;
    local_70 = 0;
    local_80[0] = local_80[0] & 0xffffff00;
    FUN_00409350();
    local_14 = (undefined1 *)((int)&local_124 + 4);
    local_8 = 0x1f;
    local_124 = (ulonglong)extraout_ECX << 0x20;
    uVar3 = __allmul(-param_1[0x25],-param_1[0x25] >> 0x1f,100000);
    local_124 = local_124 & 0xffffffff00000000;
    uVar2 = __alldiv(uVar3,1000);
    local_124 = CONCAT44(uVar2,local_b8);
    uVar2 = FUN_00988970();
    local_124 = CONCAT44(uVar2,local_d4);
    local_8._0_1_ = 0x20;
    FUN_0042c180();
    local_8._0_1_ = 0x21;
    local_124 = CONCAT44(local_80,0x4d7f47);
    FUN_00988f20();
    local_124 = 0xffffffff00000000;
    local_8._0_1_ = 0x22;
    FUN_00448aa0();
    if (0xf < local_88) {
      local_124 = CONCAT44(local_9c[0],&UNK_004d7f70);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_88 = 0xf;
    local_8c = 0;
    local_9c[0] = local_9c[0] & 0xffffff00;
    if (0xf < local_c0) {
      local_124 = CONCAT44(local_d4[0],&UNK_004d7f99);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_c0 = 0xf;
    local_c4 = 0;
    local_d4[0] = local_d4[0] & 0xffffff00;
    if (0xf < local_a4) {
      local_124 = CONCAT44(local_b8[0],&UNK_004d7fc2);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = (uint)local_8._1_3_ << 8;
    local_a4 = 0xf;
    local_a8 = 0;
    local_b8[0] = local_b8[0] & 0xffffff00;
    if (0xf < local_6c) {
      local_124 = CONCAT44(local_80[0],&UNK_004d7fe8);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  local_124._4_4_ = local_9c;
  local_124._0_4_ = 0x4d7ffe;
  uVar2 = (**(code **)(*param_1 + 0x1c))();
  local_124._0_4_ = 0xffffffff;
  local_8 = 0x23;
  FUN_00448aa0(uVar2,0);
  if (local_88 < 0x10) {
    ExceptionList = local_10;
    return param_2;
  }
  local_124 = CONCAT44(local_124._4_4_,local_9c[0]);
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

