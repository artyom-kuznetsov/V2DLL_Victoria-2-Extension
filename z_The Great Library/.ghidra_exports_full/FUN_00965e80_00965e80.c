// FUN_00965e80 @ 00965e80 body=[[00965e80, 00965f52] [00965f56, 00965f79] [00965f7d, 00966016] [0096601a, 0096603d] [00966041, 009660e1] [009660e5, 00966108] [0096610c, 009661ab] [009661af, 009661d2] [009661d6, 0096626f] [00966273, 00966296] [0096629a, 0096633a] [0096633e, 00966361] [00966365, 00966404] [00966408, 0096642b] [0096642f, 009664cf] [009664d3, 009664f2] [009664f6, 00966518]]


undefined1 * FUN_00965e80(int param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  undefined8 local_64;
  undefined4 local_50 [5];
  uint local_3c;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  undefined1 *local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00b64609;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_2 + 0x14) = 0xf;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *param_2 = 0;
  local_8 = 0;
  local_64._0_4_ = *(uint **)(param_1 + 0x1d8);
  local_64._4_4_ = *(int *)(param_1 + 0x1dc);
  local_14 = 1;
  if ((uint *)local_64 != (uint *)0x0 || local_64._4_4_ != 0) {
    local_18 = (undefined1 *)&local_64;
    local_64 = __alldiv((int)(uint *)local_64 << 0xf,
                        local_64._4_4_ << 0xf | (uint)(uint *)local_64 >> 0x11,DAT_00f0e018,
                        DAT_00f0e01c);
    uVar1 = FUN_00988bb0(local_50,2);
    local_64._0_4_ = local_34;
    local_8 = 1;
    local_64._4_4_ = uVar1;
    uVar1 = FUN_0042c180();
    local_64._4_4_ = 0xffffffff;
    local_64._0_4_ = (uint *)0x0;
    local_8._0_1_ = 2;
    FUN_00448aa0(uVar1);
    if (0xf < local_20) {
      local_64._4_4_ = local_34[0];
                    /* WARNING: Subroutine does not return */
      local_64._0_4_ = (uint *)&UNK_00965f53;
      FUN_00aae91b();
    }
    local_8 = (uint)local_8._1_3_ << 8;
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    if (0xf < local_3c) {
      local_64._4_4_ = local_50[0];
                    /* WARNING: Subroutine does not return */
      local_64._0_4_ = (uint *)&UNK_00965f7a;
      FUN_00aae91b();
    }
    local_64._4_4_ = 1;
    local_64._0_4_ = (uint *)&DAT_00dee2cc;
    FUN_00448740();
  }
  local_64._0_4_ = *(uint **)(param_1 + 0x1e0);
  local_64._4_4_ = *(int *)(param_1 + 0x1e4);
  if ((uint *)local_64 != (uint *)0x0 || local_64._4_4_ != 0) {
    local_18 = (undefined1 *)&local_64;
    local_64 = __alldiv((int)(uint *)local_64 << 0xf,
                        local_64._4_4_ << 0xf | (uint)(uint *)local_64 >> 0x11,DAT_00f0e018,
                        DAT_00f0e01c);
    uVar1 = FUN_00988bb0(local_50,2);
    local_64._0_4_ = local_34;
    local_8 = 3;
    local_64._4_4_ = uVar1;
    uVar1 = FUN_0042c180();
    local_64._4_4_ = 0xffffffff;
    local_64._0_4_ = (uint *)0x0;
    local_8._0_1_ = 4;
    FUN_00448aa0(uVar1);
    if (0xf < local_20) {
      local_64._4_4_ = local_34[0];
                    /* WARNING: Subroutine does not return */
      local_64._0_4_ = (uint *)&UNK_00966017;
      FUN_00aae91b();
    }
    local_8 = (uint)local_8._1_3_ << 8;
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    if (0xf < local_3c) {
      local_64._4_4_ = local_50[0];
                    /* WARNING: Subroutine does not return */
      local_64._0_4_ = (uint *)&UNK_0096603e;
      FUN_00aae91b();
    }
    local_64._4_4_ = 1;
    local_64._0_4_ = (uint *)&DAT_00dee2cc;
    FUN_00448740();
  }
  local_64._0_4_ = *(uint **)(param_1 + 0x1e8);
  local_64._4_4_ = *(int *)(param_1 + 0x1ec);
  if ((uint *)local_64 != (uint *)0x0 || local_64._4_4_ != 0) {
    local_18 = (undefined1 *)&local_64;
    local_64 = __alldiv((int)(uint *)local_64 << 0xf,
                        local_64._4_4_ << 0xf | (uint)(uint *)local_64 >> 0x11,DAT_00f0e018,
                        DAT_00f0e01c);
    uVar1 = FUN_00988bb0(local_50,2);
    local_64._0_4_ = local_34;
    local_8 = 5;
    local_64._4_4_ = uVar1;
    uVar1 = FUN_0042c180();
    local_64._4_4_ = 0xffffffff;
    local_64._0_4_ = (uint *)0x0;
    local_8._0_1_ = 6;
    FUN_00448aa0(uVar1);
    if (0xf < local_20) {
      local_64._4_4_ = local_34[0];
                    /* WARNING: Subroutine does not return */
      local_64._0_4_ = (uint *)&UNK_009660e2;
      FUN_00aae91b();
    }
    local_8 = (uint)local_8._1_3_ << 8;
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    if (0xf < local_3c) {
      local_64._4_4_ = local_50[0];
                    /* WARNING: Subroutine does not return */
      local_64._0_4_ = (uint *)&UNK_00966109;
      FUN_00aae91b();
    }
    local_64._4_4_ = 1;
    local_64._0_4_ = (uint *)&DAT_00dee2cc;
    FUN_00448740();
  }
  local_64._0_4_ = *(uint **)(param_1 + 0x1f0);
  local_64._4_4_ = *(int *)(param_1 + 500);
  if ((uint *)local_64 != (uint *)0x0 || local_64._4_4_ != 0) {
    local_18 = (undefined1 *)&local_64;
    local_64 = __alldiv((int)(uint *)local_64 << 0xf,
                        local_64._4_4_ << 0xf | (uint)(uint *)local_64 >> 0x11,DAT_00f0e018,
                        DAT_00f0e01c);
    uVar1 = FUN_00988bb0(local_50,2);
    local_64._0_4_ = local_34;
    local_8 = 7;
    local_64._4_4_ = uVar1;
    uVar1 = FUN_0042c180();
    local_64._4_4_ = 0xffffffff;
    local_64._0_4_ = (uint *)0x0;
    local_8._0_1_ = 8;
    FUN_00448aa0(uVar1);
    if (0xf < local_20) {
      local_64._4_4_ = local_34[0];
                    /* WARNING: Subroutine does not return */
      local_64._0_4_ = (uint *)&UNK_009661ac;
      FUN_00aae91b();
    }
    local_8 = (uint)local_8._1_3_ << 8;
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    if (0xf < local_3c) {
      local_64._4_4_ = local_50[0];
                    /* WARNING: Subroutine does not return */
      local_64._0_4_ = (uint *)&UNK_009661d3;
      FUN_00aae91b();
    }
    local_64._4_4_ = 1;
    local_64._0_4_ = (uint *)&DAT_00dee2cc;
    FUN_00448740();
  }
  local_64._0_4_ = *(uint **)(param_1 + 0x1f8);
  local_64._4_4_ = *(int *)(param_1 + 0x1fc);
  if ((uint *)local_64 != (uint *)0x0 || local_64._4_4_ != 0) {
    local_18 = (undefined1 *)&local_64;
    local_64 = __alldiv((int)(uint *)local_64 << 0xf,
                        local_64._4_4_ << 0xf | (uint)(uint *)local_64 >> 0x11,DAT_00f0e018,
                        DAT_00f0e01c);
    uVar1 = FUN_00988bb0(local_50,2);
    local_64._0_4_ = local_34;
    local_8 = 9;
    local_64._4_4_ = uVar1;
    uVar1 = FUN_0042c180();
    local_64._4_4_ = 0xffffffff;
    local_64._0_4_ = (uint *)0x0;
    local_8._0_1_ = 10;
    FUN_00448aa0(uVar1);
    if (0xf < local_20) {
      local_64._4_4_ = local_34[0];
                    /* WARNING: Subroutine does not return */
      local_64._0_4_ = (uint *)&UNK_00966270;
      FUN_00aae91b();
    }
    local_8 = (uint)local_8._1_3_ << 8;
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    if (0xf < local_3c) {
      local_64._4_4_ = local_50[0];
                    /* WARNING: Subroutine does not return */
      local_64._0_4_ = (uint *)&UNK_00966297;
      FUN_00aae91b();
    }
    local_64._4_4_ = 1;
    local_64._0_4_ = (uint *)&DAT_00dee2cc;
    FUN_00448740();
  }
  local_64._0_4_ = *(uint **)(param_1 + 0x200);
  local_64._4_4_ = *(int *)(param_1 + 0x204);
  if ((uint *)local_64 != (uint *)0x0 || local_64._4_4_ != 0) {
    local_18 = (undefined1 *)&local_64;
    local_64 = __alldiv((int)(uint *)local_64 << 0xf,
                        local_64._4_4_ << 0xf | (uint)(uint *)local_64 >> 0x11,DAT_00f0e018,
                        DAT_00f0e01c);
    uVar1 = FUN_00988bb0(local_50,2);
    local_64._0_4_ = local_34;
    local_8 = 0xb;
    local_64._4_4_ = uVar1;
    uVar1 = FUN_0042c180();
    local_64._4_4_ = 0xffffffff;
    local_64._0_4_ = (uint *)0x0;
    local_8._0_1_ = 0xc;
    FUN_00448aa0(uVar1);
    if (0xf < local_20) {
      local_64._4_4_ = local_34[0];
                    /* WARNING: Subroutine does not return */
      local_64._0_4_ = (uint *)&UNK_0096633b;
      FUN_00aae91b();
    }
    local_8 = (uint)local_8._1_3_ << 8;
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    if (0xf < local_3c) {
      local_64._4_4_ = local_50[0];
                    /* WARNING: Subroutine does not return */
      local_64._0_4_ = (uint *)&UNK_00966362;
      FUN_00aae91b();
    }
    local_64._4_4_ = 1;
    local_64._0_4_ = (uint *)&DAT_00dee2cc;
    FUN_00448740();
  }
  local_64._0_4_ = *(uint **)(param_1 + 0x208);
  local_64._4_4_ = *(int *)(param_1 + 0x20c);
  if ((uint *)local_64 != (uint *)0x0 || local_64._4_4_ != 0) {
    local_18 = (undefined1 *)&local_64;
    local_64 = __alldiv((int)(uint *)local_64 << 0xf,
                        local_64._4_4_ << 0xf | (uint)(uint *)local_64 >> 0x11,DAT_00f0e018,
                        DAT_00f0e01c);
    uVar1 = FUN_00988bb0(local_50,2);
    local_64._0_4_ = local_34;
    local_8 = 0xd;
    local_64._4_4_ = uVar1;
    uVar1 = FUN_0042c180();
    local_64._4_4_ = 0xffffffff;
    local_64._0_4_ = (uint *)0x0;
    local_8._0_1_ = 0xe;
    FUN_00448aa0(uVar1);
    if (0xf < local_20) {
      local_64._4_4_ = local_34[0];
                    /* WARNING: Subroutine does not return */
      local_64._0_4_ = (uint *)&UNK_00966405;
      FUN_00aae91b();
    }
    local_8 = (uint)local_8._1_3_ << 8;
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    if (0xf < local_3c) {
      local_64._4_4_ = local_50[0];
                    /* WARNING: Subroutine does not return */
      local_64._0_4_ = (uint *)&UNK_0096642c;
      FUN_00aae91b();
    }
    local_64._4_4_ = 1;
    local_64._0_4_ = (uint *)&DAT_00dee2cc;
    FUN_00448740();
  }
  local_64._0_4_ = *(uint **)(param_1 + 0x210);
  local_64._4_4_ = *(int *)(param_1 + 0x214);
  if ((uint *)local_64 != (uint *)0x0 || local_64._4_4_ != 0) {
    local_64 = __alldiv((int)(uint *)local_64 << 0xf,
                        local_64._4_4_ << 0xf | (uint)(uint *)local_64 >> 0x11,DAT_00f0e018,
                        DAT_00f0e01c);
    uVar1 = FUN_00988bb0(local_50,2);
    local_64._0_4_ = local_34;
    local_8 = 0xf;
    local_64._4_4_ = uVar1;
    uVar1 = FUN_0042c180();
    local_64._4_4_ = 0xffffffff;
    local_64._0_4_ = (uint *)0x0;
    local_8._0_1_ = 0x10;
    FUN_00448aa0(uVar1);
    if (0xf < local_20) {
      local_64._4_4_ = local_34[0];
                    /* WARNING: Subroutine does not return */
      local_64._0_4_ = (uint *)&UNK_009664d0;
      FUN_00aae91b();
    }
    local_8 = (uint)local_8._1_3_ << 8;
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    if (0xf < local_3c) {
      local_64._4_4_ = local_50[0];
                    /* WARNING: Subroutine does not return */
      local_64._0_4_ = (uint *)&UNK_009664f3;
      FUN_00aae91b();
    }
    local_64._4_4_ = 1;
    local_64._0_4_ = (uint *)&DAT_00dee2cc;
    FUN_00448740();
  }
  ExceptionList = local_10;
  return param_2;
}

