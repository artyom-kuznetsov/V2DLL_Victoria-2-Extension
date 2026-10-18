// FUN_00545f20 @ 00545f20 body=[[00545f20, 0054605e] [00546062, 00546090] [00546094, 005460c9] [005460cd, 0054620f] [00546213, 00546242] [00546246, 0054626d] [00546271, 00546292] [00546296, 005462b7] [005462bb, 005462df] [005462e3, 00546305] [00546309, 005464ff] [00546503, 00546523] [00546527, 00546545] [00546549, 00546571] [00546575, 00546624] [00546628, 00546648] [0054664c, 0054666a] [0054666e, 00546696] [0054669a, 005467de]]


undefined1 * FUN_00545f20(int param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  uint *local_180;
  int **local_17c;
  uint *local_168;
  int *local_164;
  undefined1 *local_160;
  uint *local_15c;
  uint local_158 [4];
  undefined4 local_148;
  uint local_144;
  uint local_13c [4];
  undefined4 local_12c;
  uint local_128;
  uint local_120 [4];
  undefined4 local_110;
  uint local_10c;
  uint local_104;
  undefined4 local_f4;
  uint local_f0;
  int local_e8;
  int local_e4;
  int local_e0;
  uint local_dc;
  undefined4 local_cc;
  uint local_c8;
  uint local_c0 [4];
  undefined4 local_b0;
  uint local_ac;
  uint local_a4 [4];
  undefined4 local_94;
  uint local_90;
  uint local_88;
  undefined4 local_78;
  uint local_74;
  uint local_6c;
  undefined4 local_5c;
  uint local_58;
  uint local_50;
  undefined4 local_40;
  uint local_3c;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b815f5;
  local_14 = ExceptionList;
  local_160 = (undefined1 *)0x0;
  if (*(int *)(*(int *)(DAT_012586dc + 0x40) + 0x50) / 1000 < *(int *)(param_1 + 0x1404)) {
    local_17c = (int **)param_2;
    local_180 = (uint *)0x545f7f;
    ExceptionList = &local_14;
    FUN_00475d50();
  }
  else {
    local_c8 = 0xf;
    local_cc = 0;
    local_dc = local_dc & 0xffffff00;
    local_c = 0;
    local_17c = (int **)0x1;
    local_180 = (uint *)&DAT_00dee2cc;
    local_ac = 0xf;
    local_b0 = 0;
    local_c0[0] = local_c0[0] & 0xffffff00;
    ExceptionList = &local_14;
    FUN_00409350();
    local_c._0_1_ = 1;
    uVar2 = *(int *)(param_1 + 0x15c4) - *(int *)(param_1 + 0x15c0);
    local_17c = &local_164;
    local_164 = (int *)(((int)uVar2 < 1) - 1 & uVar2);
    local_180 = local_34;
    FUN_0054a540();
    local_17c = (int **)local_c0;
    local_c._0_1_ = 2;
    local_180 = (uint *)0x54602c;
    FUN_00988f20();
    local_17c = (int **)0xffffffff;
    local_180 = (uint *)0x0;
    local_c._0_1_ = 3;
    FUN_00448aa0();
    if (0xf < local_58) {
      local_17c = (int **)local_6c;
                    /* WARNING: Subroutine does not return */
      local_180 = (uint *)&UNK_0054605f;
      FUN_00aae91b();
    }
    local_58 = 0xf;
    local_5c = 0;
    local_6c = local_6c & 0xffffff00;
    if (0xf < local_20) {
      local_17c = (int **)local_34[0];
                    /* WARNING: Subroutine does not return */
      local_180 = (uint *)&UNK_00546091;
      FUN_00aae91b();
    }
    local_c._0_1_ = 0;
    uVar1 = (undefined1)local_c;
    local_c._0_1_ = 0;
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    if (0xf < local_ac) {
      local_17c = (int **)local_c0[0];
                    /* WARNING: Subroutine does not return */
      local_180 = (uint *)&UNK_005460ca;
      FUN_00aae91b();
    }
    local_ac = 0xf;
    local_b0 = 0;
    local_c0[0] = local_c0[0] & 0xffffff00;
    if (0 < *(int *)(*(int *)(param_1 + 0xbcc) + 0x5c)) {
      local_17c = (int **)0x2;
      local_144 = 0xf;
      local_180 = (uint *)&DAT_00dedc20;
      local_148 = 0;
      local_158[0] = local_158[0] & 0xffffff00;
      FUN_00409350();
      local_c._0_1_ = 4;
      local_17c = (int **)local_13c;
      local_180 = (uint *)0x546140;
      uVar3 = FUN_009888f0();
      local_c._0_1_ = 5;
      local_17c = (int **)0x4;
      local_180 = (uint *)&DAT_00dfd73c;
      local_90 = 0xf;
      local_94 = 0;
      local_a4[0] = local_a4[0] & 0xffffff00;
      FUN_00409350();
      local_17c = (int **)local_120;
      local_c._0_1_ = 6;
      local_180 = (uint *)0x54618d;
      FUN_00475d50();
      local_17c = (int **)local_a4;
      local_c._0_1_ = 7;
      local_180 = (uint *)0x5461ab;
      FUN_00988f20();
      local_c._0_1_ = 8;
      local_180 = (uint *)0x5461c2;
      local_17c = (int **)uVar3;
      FUN_00988f20();
      local_17c = (int **)local_158;
      local_c._0_1_ = 9;
      local_180 = (uint *)0x5461dd;
      FUN_00988f20();
      local_17c = (int **)0xffffffff;
      local_180 = (uint *)0x0;
      local_c._0_1_ = 10;
      FUN_00448aa0();
      if (0xf < local_74) {
        local_17c = (int **)local_88;
                    /* WARNING: Subroutine does not return */
        local_180 = (uint *)&UNK_00546210;
        FUN_00aae91b();
      }
      local_74 = 0xf;
      local_78 = 0;
      local_88 = local_88 & 0xffffff00;
      if (0xf < local_3c) {
        local_17c = (int **)local_50;
                    /* WARNING: Subroutine does not return */
        local_180 = (uint *)&UNK_00546243;
        FUN_00aae91b();
      }
      local_3c = 0xf;
      local_40 = 0;
      local_50 = local_50 & 0xffffff00;
      if (0xf < local_f0) {
        local_17c = (int **)local_104;
                    /* WARNING: Subroutine does not return */
        local_180 = (uint *)&UNK_0054626e;
        FUN_00aae91b();
      }
      local_f0 = 0xf;
      local_f4 = 0;
      local_104 = local_104 & 0xffffff00;
      if (0xf < local_10c) {
        local_17c = (int **)local_120[0];
                    /* WARNING: Subroutine does not return */
        local_180 = (uint *)&UNK_00546293;
        FUN_00aae91b();
      }
      local_10c = 0xf;
      local_110 = 0;
      local_120[0] = local_120[0] & 0xffffff00;
      if (0xf < local_90) {
        local_17c = (int **)local_a4[0];
                    /* WARNING: Subroutine does not return */
        local_180 = (uint *)&UNK_005462b8;
        FUN_00aae91b();
      }
      local_90 = 0xf;
      local_94 = 0;
      local_a4[0] = local_a4[0] & 0xffffff00;
      if (0xf < local_128) {
        local_17c = (int **)local_13c[0];
                    /* WARNING: Subroutine does not return */
        local_180 = (uint *)&UNK_005462e0;
        FUN_00aae91b();
      }
      local_c._0_1_ = 0;
      local_128 = 0xf;
      local_12c = 0;
      local_13c[0] = local_13c[0] & 0xffffff00;
      if (0xf < local_144) {
        local_17c = (int **)local_158[0];
                    /* WARNING: Subroutine does not return */
        local_180 = (uint *)&UNK_00546306;
        FUN_00aae91b();
      }
      local_17c = (int **)0x1;
      local_180 = (uint *)&DAT_00dee2cc;
      FUN_00448740();
      uVar1 = (undefined1)local_c;
    }
    local_c._0_1_ = uVar1;
    piVar8 = *(int **)(param_1 + 0x149c);
    local_15c = (uint *)0x0;
    if (piVar8 != (int *)0x0) {
      do {
        iVar4 = 0;
        piVar7 = (int *)(*piVar8 + 0x98);
        do {
          if (*piVar7 == *(int *)(param_1 + 0x20)) {
            iVar4 = *(int *)(*piVar8 + 0xa0 + iVar4 * 0x1c);
            goto LAB_0054634f;
          }
          iVar4 = iVar4 + 1;
          piVar7 = piVar7 + 7;
        } while (iVar4 < 4);
        iVar4 = 0;
LAB_0054634f:
        piVar8 = (int *)piVar8[2];
        local_15c = local_15c + iVar4 * 0xfa;
      } while (piVar8 != (int *)0x0);
    }
    iVar4 = *(int *)(DAT_012586dc + 0x40);
    local_e4 = *(int *)(iVar4 + 0x110);
    local_e0 = *(int *)(iVar4 + 0x114);
    local_160 = *(undefined1 **)(iVar4 + 0x11c);
    local_e8 = *(int *)(iVar4 + 0x118);
    local_168 = (uint *)0x0;
    piVar8 = *(int **)(param_1 + 0xe44);
    while (piVar8 != (int *)0x0) {
      local_164 = (int *)piVar8[2];
      iVar4 = *piVar8;
      iVar5 = *(int *)(iVar4 + 0x84);
      piVar8 = local_164;
      if (0 < iVar5) {
        if (iVar5 == 1) {
          local_17c = (int **)(((float)(*(int *)(iVar4 + 0x4c) - *(int *)(iVar4 + 0x48) >> 2) +
                               0.0005) * 1000.0);
          local_180 = (uint *)0x546426;
          FUN_00401000();
          local_17c = (int **)0x54642e;
          iVar4 = FUN_00b31c00();
          local_17c = (int **)0x0;
          local_180 = (uint *)0x3e8;
          iVar4 = __alldiv((longlong)iVar4 * (longlong)local_e4);
          local_168 = (uint *)((int)local_168 + iVar4);
          piVar8 = local_164;
        }
        else if (iVar5 == 2) {
          local_17c = (int **)(((float)(*(int *)(iVar4 + 0x4c) - *(int *)(iVar4 + 0x48) >> 2) +
                               0.0005) * 1000.0);
          local_180 = (uint *)0x54672b;
          FUN_00401000();
          local_17c = (int **)0x546733;
          iVar5 = FUN_00b31c00();
          local_17c = (int **)0x0;
          local_180 = (uint *)0x3e8;
          iVar5 = __alldiv((longlong)iVar5 * (longlong)local_e0);
          local_17c = (int **)(((float)*(int *)(iVar4 + 0x68) + 0.0005) * 1000.0);
          local_180 = (uint *)0x54677c;
          FUN_00401000();
          local_17c = (int **)0x546784;
          iVar6 = FUN_00b31c00();
          local_17c = (int **)0x0;
          local_180 = (uint *)0x3e8;
          iVar6 = __alldiv((longlong)iVar6 * (longlong)local_e8);
          iVar6 = iVar6 + iVar5;
          for (piVar7 = *(int **)(iVar4 + 0x48);
              (local_168 = (uint *)((int)local_168 + iVar6), piVar8 = local_164,
              *(int **)(iVar4 + 0x48) <= piVar7 && (piVar7 < *(int **)(iVar4 + 0x4c)));
              piVar7 = piVar7 + 1) {
            local_17c = (int **)0x0;
            local_180 = (uint *)0x3e8;
            iVar6 = __alldiv((longlong)
                             *(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + *piVar7 * 4) + 0x2b8
                                     ) * (longlong)(int)local_160);
          }
        }
      }
    }
    if (0 < (int)local_15c) {
      local_17c = (int **)0x1;
      local_180 = (uint *)&DAT_00dee2cc;
      local_144 = 0xf;
      local_148 = 0;
      local_158[0] = local_158[0] & 0xffffff00;
      FUN_00409350();
      local_17c = (int **)0x1;
      local_160 = (undefined1 *)&local_180;
      local_c._0_1_ = 0xb;
      local_180 = local_15c;
      local_17c = (int **)FUN_00988a50();
      local_180 = local_120;
      local_c._0_1_ = 0xc;
      FUN_0042c180();
      local_17c = (int **)local_158;
      local_c._0_1_ = 0xd;
      local_180 = (uint *)0x5464d3;
      FUN_00988f20();
      local_17c = (int **)0xffffffff;
      local_180 = (uint *)0x0;
      local_c._0_1_ = 0xe;
      FUN_00448aa0();
      if (0xf < local_128) {
        local_17c = (int **)local_13c[0];
                    /* WARNING: Subroutine does not return */
        local_180 = (uint *)&UNK_00546500;
        FUN_00aae91b();
      }
      local_128 = 0xf;
      local_12c = 0;
      local_13c[0] = local_13c[0] & 0xffffff00;
      if (0xf < local_10c) {
        local_17c = (int **)local_120[0];
                    /* WARNING: Subroutine does not return */
        local_180 = (uint *)&UNK_00546524;
        FUN_00aae91b();
      }
      local_10c = 0xf;
      local_110 = 0;
      local_120[0] = local_120[0] & 0xffffff00;
      if (0xf < local_f0) {
        local_17c = (int **)local_104;
                    /* WARNING: Subroutine does not return */
        local_180 = (uint *)&UNK_00546546;
        FUN_00aae91b();
      }
      local_c._0_1_ = 0;
      local_f0 = 0xf;
      local_f4 = 0;
      local_104 = local_104 & 0xffffff00;
      if (0xf < local_144) {
        local_17c = (int **)local_158[0];
                    /* WARNING: Subroutine does not return */
        local_180 = (uint *)&UNK_00546572;
        FUN_00aae91b();
      }
    }
    if (0 < (int)local_168) {
      local_17c = (int **)0x1;
      local_180 = (uint *)&DAT_00dee2cc;
      local_144 = 0xf;
      local_148 = 0;
      local_158[0] = local_158[0] & 0xffffff00;
      FUN_00409350();
      local_17c = (int **)0x1;
      local_160 = (undefined1 *)&local_180;
      local_c._0_1_ = 0xf;
      local_180 = local_168;
      local_17c = (int **)FUN_00988a50();
      local_180 = local_120;
      local_c._0_1_ = 0x10;
      FUN_0042c180();
      local_17c = (int **)local_158;
      local_c._0_1_ = 0x11;
      local_180 = (uint *)0x5465f8;
      FUN_00988f20();
      local_17c = (int **)0xffffffff;
      local_180 = (uint *)0x0;
      local_c._0_1_ = 0x12;
      FUN_00448aa0();
      if (0xf < local_128) {
        local_17c = (int **)local_13c[0];
                    /* WARNING: Subroutine does not return */
        local_180 = (uint *)&UNK_00546625;
        FUN_00aae91b();
      }
      local_128 = 0xf;
      local_12c = 0;
      local_13c[0] = local_13c[0] & 0xffffff00;
      if (0xf < local_10c) {
        local_17c = (int **)local_120[0];
                    /* WARNING: Subroutine does not return */
        local_180 = (uint *)&UNK_00546649;
        FUN_00aae91b();
      }
      local_10c = 0xf;
      local_110 = 0;
      local_120[0] = local_120[0] & 0xffffff00;
      if (0xf < local_f0) {
        local_17c = (int **)local_104;
                    /* WARNING: Subroutine does not return */
        local_180 = (uint *)&UNK_0054666b;
        FUN_00aae91b();
      }
      local_c._0_1_ = 0;
      local_f0 = 0xf;
      local_f4 = 0;
      local_104 = local_104 & 0xffffff00;
      if (0xf < local_144) {
        local_17c = (int **)local_158[0];
                    /* WARNING: Subroutine does not return */
        local_180 = (uint *)&UNK_00546697;
        FUN_00aae91b();
      }
    }
    local_17c = (int **)0xffffffff;
    local_180 = (uint *)0x0;
    *(undefined4 *)(param_2 + 0x14) = 0xf;
    *(undefined4 *)(param_2 + 0x10) = 0;
    *param_2 = 0;
    FUN_00408ed0();
    if (0xf < local_c8) {
      local_17c = (int **)local_dc;
                    /* WARNING: Subroutine does not return */
      local_180 = (uint *)0x5466d2;
      FUN_00aae91b();
    }
  }
  ExceptionList = local_14;
  return param_2;
}

