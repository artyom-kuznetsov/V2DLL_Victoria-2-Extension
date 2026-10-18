// FUN_00472550 @ 00472550 body=[[00472550, 00472642] [00472646, 00472660] [00472664, 00472681] [00472685, 004726a8] [004726ac, 00472749] [0047274d, 00472773] [00472777, 004727a0] [004727a4, 004727ca] [004727ce, 0047289d] [004728a1, 004728ca] [004728ce, 004728f7] [004728fb, 00472921] [00472925, 00472a4c] [00472a50, 00472a79] [00472a7d, 00472aa6] [00472aaa, 00472ad3] [00472ad7, 00472afd] [00472b01, 00472c33] [00472c37, 00472c60] [00472c64, 00472c8d] [00472c91, 00472cb4] [00472cb8, 00472ccc]]


undefined1 * FUN_00472550(int param_1,undefined1 *param_2,undefined4 *param_3)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  uint *local_1a8;
  uint *local_1a4;
  undefined4 *local_194 [4];
  undefined4 local_184;
  uint local_180;
  undefined4 *local_178;
  undefined4 local_168;
  uint local_164;
  undefined4 *local_15c;
  undefined4 local_14c;
  uint local_148;
  undefined4 *local_140;
  undefined4 local_130;
  uint local_12c;
  undefined4 *local_124 [4];
  undefined4 local_114;
  uint local_110;
  undefined4 *local_108 [4];
  undefined4 local_f8;
  uint local_f4;
  undefined4 *local_ec [4];
  undefined4 local_dc;
  uint local_d8;
  undefined4 *local_d0 [4];
  undefined4 local_c0;
  uint local_bc;
  undefined4 *local_b4 [4];
  undefined4 local_a4;
  uint local_a0;
  undefined4 *local_98 [4];
  undefined4 local_88;
  uint local_84;
  undefined4 local_7c;
  undefined4 *local_78 [4];
  undefined4 local_68;
  uint local_64;
  undefined4 *local_5c [4];
  undefined4 local_4c;
  uint local_48;
  undefined4 *local_40 [4];
  undefined4 local_30;
  uint local_2c;
  undefined4 *local_24;
  undefined4 *local_20;
  undefined4 *local_1c;
  undefined4 *local_18;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00b7747b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_2 + 0x14) = 0xf;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *param_2 = 0;
  local_8 = 0;
  local_1c = (undefined4 *)*param_3;
  local_7c = 1;
  local_1a4 = (uint *)0x4725ab;
  local_20 = (undefined4 *)FUN_00526870();
  puVar3 = *(uint **)(*(int *)(DAT_012586dc + 0x40) + 0x84);
  local_1a4 = (uint *)0x1;
  local_1a8 = (uint *)&DAT_00dee2cc;
  local_2c = 0xf;
  local_30 = 0;
  local_40[0] = (undefined4 *)((uint)local_40[0] & 0xffffff00);
  FUN_00409350();
  local_18 = &local_1a4;
  local_8 = 1;
  local_1a8 = (uint *)local_98;
  local_1a4 = puVar3;
  local_1a4 = (uint *)FUN_00988970();
  local_1a8 = (uint *)local_78;
  local_8._0_1_ = 2;
  FUN_0042c180();
  local_1a4 = (uint *)local_40;
  local_8._0_1_ = 3;
  local_1a8 = (uint *)0x472621;
  FUN_00988f20();
  local_1a4 = (uint *)0xffffffff;
  local_1a8 = (uint *)0x0;
  local_8._0_1_ = 4;
  FUN_00448aa0();
  if (0xf < local_48) {
    local_1a4 = local_5c[0];
                    /* WARNING: Subroutine does not return */
    local_1a8 = (uint *)&UNK_00472643;
    FUN_00aae91b();
  }
  local_48 = 0xf;
  local_4c = 0;
  local_5c[0] = (undefined4 *)((uint)local_5c[0] & 0xffffff00);
  if (0xf < local_64) {
    local_1a4 = local_78[0];
                    /* WARNING: Subroutine does not return */
    local_1a8 = (uint *)&UNK_00472661;
    FUN_00aae91b();
  }
  local_64 = 0xf;
  local_68 = 0;
  uVar2 = (uint)local_78[0] >> 8;
  local_78[0] = (undefined4 *)(uVar2 << 8);
  if (0xf < local_84) {
    local_1a4 = local_98[0];
                    /* WARNING: Subroutine does not return */
    local_1a8 = (uint *)&UNK_00472682;
    FUN_00aae91b();
  }
  local_8 = (uint)local_8._1_3_ << 8;
  local_84 = 0xf;
  local_88 = 0;
  local_98[0] = (undefined4 *)((uint)local_98[0] & 0xffffff00);
  if (0xf < local_2c) {
    local_1a4 = local_40[0];
                    /* WARNING: Subroutine does not return */
    local_1a8 = (uint *)&UNK_004726a9;
    FUN_00aae91b();
  }
  local_1a4 = (uint *)0x1;
  local_1a8 = (uint *)&DAT_00dee2cc;
  local_64 = 0xf;
  local_68 = 0;
  local_78[0] = (undefined4 *)(uVar2 << 8);
  FUN_00409350();
  local_8 = 5;
  local_1a8 = *(uint **)(param_1 + 0x18);
  local_18 = &local_1a8;
  local_1a4 = *(uint **)(param_1 + 0x1c);
  local_1a4 = (uint *)FUN_00988bb0(local_124,0);
  local_1a8 = (uint *)local_108;
  local_8._0_1_ = 6;
  FUN_0042c180();
  local_1a4 = (uint *)local_78;
  local_8._0_1_ = 7;
  local_1a8 = (uint *)0x472725;
  FUN_00988f20();
  local_1a4 = (uint *)0xffffffff;
  local_1a8 = (uint *)0x0;
  local_8._0_1_ = 8;
  FUN_00448aa0();
  if (0xf < local_84) {
    local_1a4 = local_98[0];
                    /* WARNING: Subroutine does not return */
    local_1a8 = (uint *)&UNK_0047274a;
    FUN_00aae91b();
  }
  local_84 = 0xf;
  local_88 = 0;
  local_98[0] = (undefined4 *)((uint)local_98[0] & 0xffffff00);
  if (0xf < local_f4) {
    local_1a4 = local_108[0];
                    /* WARNING: Subroutine does not return */
    local_1a8 = (uint *)&UNK_00472774;
    FUN_00aae91b();
  }
  local_f4 = 0xf;
  local_f8 = 0;
  local_108[0] = (undefined4 *)((uint)local_108[0] & 0xffffff00);
  if (0xf < local_110) {
    local_1a4 = local_124[0];
                    /* WARNING: Subroutine does not return */
    local_1a8 = (uint *)&UNK_004727a1;
    FUN_00aae91b();
  }
  local_8 = (uint)local_8._1_3_ << 8;
  local_110 = 0xf;
  local_114 = 0;
  local_124[0] = (undefined4 *)((uint)local_124[0] & 0xffffff00);
  if (0xf < local_64) {
    local_1a4 = local_78[0];
                    /* WARNING: Subroutine does not return */
    local_1a8 = (uint *)&UNK_004727cb;
    FUN_00aae91b();
  }
  local_64 = 0xf;
  local_68 = 0;
  local_78[0] = (undefined4 *)((uint)local_78[0] & 0xffffff00);
  if (0 < (int)local_20) {
    local_1a4 = (uint *)0x0;
    local_1a8 = (uint *)0x3e8;
    puVar3 = (uint *)__alldiv((longlong)*(int *)(*(int *)(DAT_012586dc + 0x40) + 0x88) *
                              (longlong)((int)local_20 * 1000));
    local_1a4 = (uint *)0x1;
    local_1a8 = (uint *)&DAT_00dee2cc;
    local_48 = 0xf;
    local_4c = 0;
    local_5c[0] = (undefined4 *)((uint)local_5c[0] & 0xffffff00);
    FUN_00409350();
    local_1a4 = (uint *)0x0;
    local_18 = &local_1a8;
    local_8 = 9;
    local_1a8 = puVar3;
    local_1a4 = (uint *)FUN_00988a50();
    local_1a8 = (uint *)local_194;
    local_8._0_1_ = 10;
    FUN_0042c180();
    local_1a4 = (uint *)local_5c;
    local_8._0_1_ = 0xb;
    local_1a8 = (uint *)0x472876;
    FUN_00988f20();
    local_1a4 = (uint *)0xffffffff;
    local_1a8 = (uint *)0x0;
    local_8._0_1_ = 0xc;
    FUN_00448aa0();
    if (0xf < local_148) {
      local_1a4 = local_15c;
                    /* WARNING: Subroutine does not return */
      local_1a8 = (uint *)&UNK_0047289e;
      FUN_00aae91b();
    }
    local_148 = 0xf;
    local_14c = 0;
    local_15c = (undefined4 *)((uint)local_15c & 0xffffff00);
    if (0xf < local_180) {
      local_1a4 = local_194[0];
                    /* WARNING: Subroutine does not return */
      local_1a8 = (uint *)&UNK_004728cb;
      FUN_00aae91b();
    }
    local_180 = 0xf;
    local_184 = 0;
    local_194[0] = (undefined4 *)((uint)local_194[0] & 0xffffff00);
    if (0xf < local_12c) {
      local_1a4 = local_140;
                    /* WARNING: Subroutine does not return */
      local_1a8 = (uint *)&UNK_004728f8;
      FUN_00aae91b();
    }
    local_8 = (uint)local_8._1_3_ << 8;
    local_12c = 0xf;
    local_130 = 0;
    local_140 = (undefined4 *)((uint)local_140 & 0xffffff00);
    if (0xf < local_48) {
      local_1a4 = local_5c[0];
                    /* WARNING: Subroutine does not return */
      local_1a8 = (uint *)&UNK_00472922;
      FUN_00aae91b();
    }
    local_48 = 0xf;
    local_4c = 0;
    local_5c[0] = (undefined4 *)((uint)local_5c[0] & 0xffffff00);
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    local_1c = *(undefined4 **)(param_1 + 0x10);
    iVar1 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x14) * 4) + 0xe64);
    local_24 = *(undefined4 **)(iVar1 + 0x90);
    local_20 = *(undefined4 **)(iVar1 + 0x94);
    if (local_24 != (uint *)0x0 || local_20 != (uint *)0x0) {
      local_1a4 = (uint *)0x1;
      local_1a8 = (uint *)&DAT_00dee2cc;
      local_2c = 0xf;
      local_30 = 0;
      local_40[0] = (undefined4 *)((uint)local_40[0] & 0xffffff00);
      FUN_00409350();
      local_8 = 0xd;
      local_18 = &local_1a8;
      local_1a8 = local_24;
      local_1a4 = local_20;
      local_20 = (undefined4 *)FUN_009c89d0(local_d0,0);
      local_8._0_1_ = 0xe;
      local_1c = *(undefined4 **)(param_1 + 0x10);
      local_1a4 = *(uint **)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x14) * 4) +
                            0xe64);
      local_1a8 = (uint *)0x4729e9;
      uVar4 = FUN_00974c50();
      local_8._0_1_ = 0xf;
      local_1a4 = local_20;
      local_1a8 = (uint *)&DAT_00df7e90;
      FUN_0043ec10(local_b4,"CULTURE",uVar4);
      local_1a4 = (uint *)local_40;
      local_8._0_1_ = 0x10;
      local_1a8 = (uint *)0x472a25;
      FUN_00988f20();
      local_1a4 = (uint *)0xffffffff;
      local_1a8 = (uint *)0x0;
      local_8._0_1_ = 0x11;
      FUN_00448aa0();
      if (0xf < local_164) {
        local_1a4 = local_178;
                    /* WARNING: Subroutine does not return */
        local_1a8 = (uint *)&UNK_00472a4d;
        FUN_00aae91b();
      }
      local_164 = 0xf;
      local_168 = 0;
      local_178 = (undefined4 *)((uint)local_178 & 0xffffff00);
      if (0xf < local_a0) {
        local_1a4 = local_b4[0];
                    /* WARNING: Subroutine does not return */
        local_1a8 = (uint *)&UNK_00472a7a;
        FUN_00aae91b();
      }
      local_a0 = 0xf;
      local_a4 = 0;
      local_b4[0] = (undefined4 *)((uint)local_b4[0] & 0xffffff00);
      if (0xf < local_d8) {
        local_1a4 = local_ec[0];
                    /* WARNING: Subroutine does not return */
        local_1a8 = (uint *)&UNK_00472aa7;
        FUN_00aae91b();
      }
      local_d8 = 0xf;
      local_dc = 0;
      local_ec[0] = (undefined4 *)((uint)local_ec[0] & 0xffffff00);
      if (0xf < local_bc) {
        local_1a4 = local_d0[0];
                    /* WARNING: Subroutine does not return */
        local_1a8 = (uint *)&UNK_00472ad4;
        FUN_00aae91b();
      }
      local_8 = (uint)local_8._1_3_ << 8;
      local_bc = 0xf;
      local_c0 = 0;
      local_d0[0] = (undefined4 *)((uint)local_d0[0] & 0xffffff00);
      if (0xf < local_2c) {
        local_1a4 = local_40[0];
                    /* WARNING: Subroutine does not return */
        local_1a8 = (uint *)&UNK_00472afe;
        FUN_00aae91b();
      }
      local_2c = 0xf;
      local_30 = 0;
      local_40[0] = (undefined4 *)((uint)local_40[0] & 0xffffff00);
    }
  }
  local_1c = *(undefined4 **)(*(int *)(DAT_012586dc + 0x50) + 0x1b0);
  local_18 = *(undefined4 **)(*(int *)(DAT_012586dc + 0x50) + 0x1b4);
  uVar2 = *(uint *)(*(int *)(*(int *)(DAT_012587e4 + 4) + param_3[1] * 4) + 0x12f4);
  if (uVar2 != 0) {
    local_1a4 = (uint *)(uVar2 >> 0x11);
    local_1a8 = (uint *)(uVar2 << 0xf);
    uVar2 = *(uint *)(param_1 + 0x28);
    local_24 = local_1a8;
    uVar5 = __alldiv(uVar2 << 0x1e,(uVar2 >> 0x11) << 0xf | (uVar2 & 0x1ffff) >> 2);
    local_1a4 = local_18;
    local_1a8 = local_1c;
    lVar6 = __allmul(uVar5);
    local_1c = (undefined4 *)(lVar6 >> 0xf);
    local_1a4 = (uint *)0x1;
    local_1a8 = (uint *)&DAT_00dee2cc;
    local_2c = 0xf;
    local_30 = 0;
    local_40[0] = (undefined4 *)((uint)local_40[0] & 0xffffff00);
    FUN_00409350();
    local_8 = 0x12;
    local_1a8 = local_1c;
    local_1a4 = (uint *)((ulonglong)(lVar6 >> 0xf) >> 0x20);
    uVar4 = FUN_009c89d0(local_b4,0);
    local_8._0_1_ = 0x13;
    FUN_0042c180(local_ec,uVar4);
    local_1a4 = (uint *)local_40;
    local_8._0_1_ = 0x14;
    local_1a8 = (uint *)0x472c0c;
    FUN_00988f20();
    local_1a4 = (uint *)0xffffffff;
    local_1a8 = (uint *)0x0;
    local_8 = CONCAT31(local_8._1_3_,0x15);
    FUN_00448aa0();
    if (0xf < local_bc) {
      local_1a4 = local_d0[0];
                    /* WARNING: Subroutine does not return */
      local_1a8 = (uint *)&UNK_00472c34;
      FUN_00aae91b();
    }
    local_bc = 0xf;
    local_c0 = 0;
    local_d0[0] = (undefined4 *)((uint)local_d0[0] & 0xffffff00);
    if (0xf < local_d8) {
      local_1a4 = local_ec[0];
                    /* WARNING: Subroutine does not return */
      local_1a8 = (uint *)&UNK_00472c61;
      FUN_00aae91b();
    }
    local_d8 = 0xf;
    local_dc = 0;
    local_ec[0] = (undefined4 *)((uint)local_ec[0] & 0xffffff00);
    if (0xf < local_a0) {
      local_1a4 = local_b4[0];
                    /* WARNING: Subroutine does not return */
      local_1a8 = (uint *)&UNK_00472c8e;
      FUN_00aae91b();
    }
    local_a0 = 0xf;
    local_a4 = 0;
    local_b4[0] = (undefined4 *)((uint)local_b4[0] & 0xffffff00);
    if (0xf < local_2c) {
      local_1a4 = local_40[0];
                    /* WARNING: Subroutine does not return */
      local_1a8 = (uint *)&UNK_00472cb5;
      FUN_00aae91b();
    }
  }
  ExceptionList = local_10;
  return param_2;
}

