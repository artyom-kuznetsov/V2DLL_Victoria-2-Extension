// FUN_005273a0 @ 005273a0 body=[[005273a0, 00527702] [00527706, 00527763] [00527767, 00527781] [00527785, 005277fe] [00527802, 00527820] [00527824, 0052789e] [005278a2, 005278c0] [005278c4, 005279ae] [005279b2, 005279d0] [005279d4, 00527a1f] [00527a23, 00527a56] [00527a5a, 00527b5d] [00527b61, 00527b82] [00527b86, 00527bab] [00527baf, 00527bd1] [00527bd5, 00527bf1] [00527bf5, 00527c0f] [00527c13, 00527c77] [00527c7b, 00527c9f] [00527ca3, 00527cd6] [00527cda, 00527ced] [00527cf1, 00527d05]]


undefined1 * FUN_005273a0(undefined8 *param_1,undefined1 *param_2,int param_3,int param_4)

{
  int *piVar1;
  undefined1 *puVar2;
  uint uVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 *puVar7;
  uint *puVar8;
  int *piVar9;
  int iVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined8 local_18c;
  undefined1 local_174 [8];
  undefined4 local_16c;
  undefined4 local_168;
  undefined1 local_128 [4];
  uint local_124;
  undefined4 local_114;
  uint local_110;
  undefined1 local_108 [8];
  int local_100;
  uint local_f8 [4];
  undefined4 local_e8;
  uint local_e4;
  undefined4 local_dc;
  undefined4 local_d8;
  uint local_d0;
  undefined4 local_c0;
  uint local_bc;
  uint local_b4;
  undefined1 local_ac [4];
  int local_a8;
  undefined4 local_a4;
  uint local_a0;
  uint local_98 [4];
  undefined4 local_88;
  uint local_84;
  undefined1 *local_7c;
  uint local_78 [4];
  undefined4 local_68;
  uint local_64;
  undefined8 local_5c;
  uint local_54;
  int local_50;
  uint local_4c [4];
  undefined4 local_3c;
  uint local_38;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puVar2 = param_2;
  puVar7 = (undefined1 *)param_1;
  puStack_c = &LAB_00ba1d0f;
  local_10 = ExceptionList;
  iVar10 = 0;
  local_50 = 0;
  local_bc = 0xf;
  local_c0 = 0;
  local_d0 = local_d0 & 0xffffff00;
  local_8 = 0;
  iVar6 = *(int *)(param_4 + 0x54);
  if (param_3 != iVar6) {
    ExceptionList = &local_10;
    *(undefined4 *)(param_2 + 0x14) = 0xf;
    local_18c = 0xffffffff00000000;
    *(undefined4 *)(param_2 + 0x10) = 0;
    *param_2 = 0;
    FUN_00408ed0();
    if (local_bc < 0x10) {
      ExceptionList = local_10;
      return puVar2;
    }
    local_18c._4_4_ = (undefined1 *)local_d0;
    goto LAB_00527ce9;
  }
  if (*(int *)(param_3 + 0x5c) != 2) {
    ExceptionList = &local_10;
    *(undefined4 *)(param_2 + 0x14) = 0xf;
    local_18c = 0xffffffff00000000;
    *(undefined4 *)(param_2 + 0x10) = 0;
    *param_2 = 0;
    FUN_00408ed0();
    if (local_bc < 0x10) {
      ExceptionList = local_10;
      return puVar2;
    }
    local_18c._4_4_ = (undefined1 *)local_d0;
    goto LAB_00527ce9;
  }
  local_18c = CONCAT44(0x527467,(undefined4)local_18c);
  ExceptionList = &local_10;
  cVar4 = FUN_005268f0();
  if (cVar4 == '\0') {
    param_1 = *(undefined8 **)(puVar7 + 0x9c);
    if (DAT_0125873c == '\0') {
      iVar10 = *(int *)(*(int *)(DAT_012586dc + 0x40) + 0xac) / 1000;
    }
    local_18c = CONCAT44(iVar10,0x5274a4);
    FUN_00424810();
    local_18c = CONCAT44(local_78,&param_1);
    uVar5 = FUN_0043b700();
    puVar7 = param_2;
    local_18c = CONCAT44(uVar5,param_2);
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_0042c180();
    local_18c._4_4_ = (undefined1 *)local_78[0];
    if (local_64 < 0x10) {
      ExceptionList = local_10;
      return puVar7;
    }
    goto LAB_00527ce9;
  }
  if (*(char *)(iVar6 + 0x59) == '\0') {
LAB_005275e1:
    local_18c = 0x1005275ee;
    FUN_008a8650();
    local_16c = *(undefined4 *)(puVar7 + 0x1c);
    local_168 = *(undefined4 *)(puVar7 + 0x20);
    local_110 = 0xf;
    local_114 = 0;
    local_124 = local_124 & 0xffffff00;
    local_8._0_1_ = 6;
    local_5c = 0;
    local_50 = DAT_01258a3c;
    local_14 = 1;
    if (4 < (int)(*(int *)(DAT_01258a3c + 0x10) - *(int *)(DAT_01258a3c + 0xc) & 0xfffffffcU)) {
      do {
        iVar6 = local_14;
        piVar1 = *(int **)(*(int *)(local_50 + 0xc) + local_14 * 4);
        if (*(int *)(*(int *)(*(int *)((int)param_1 + 0x860) + *(int *)(param_3 + 0x50) * 4) + 0x50)
            < *(int *)(param_4 + 0x50)) {
          piVar9 = piVar1 + 0x14;
          puVar7 = local_128;
        }
        else {
          piVar9 = piVar1 + 0x20;
          puVar7 = local_108;
        }
        local_18c = CONCAT44(local_174,puVar7);
        puVar8 = (uint *)(**(code **)(*piVar9 + 0x18))();
        local_54 = *puVar8;
        piVar9 = (int *)(*(int *)((int)param_1 + 0x8c0) + iVar6 * 8);
        if (*piVar9 != 0 || piVar9[1] != 0) {
          local_18c = 0x1700dfeb68;
          local_84 = 0xf;
          local_88 = 0;
          local_98[0] = local_98[0] & 0xffffff00;
          FUN_00409350();
          local_18c = CONCAT44(local_98,local_ac);
          local_8._0_1_ = 7;
          FUN_009a8ee0();
          local_8._0_1_ = 9;
          if (0xf < local_84) {
            local_18c = CONCAT44(local_98[0],&UNK_00527703);
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_18c = 0x800dfdc54;
          local_84 = 0xf;
          local_88 = 0;
          local_98[0] = local_98[0] & 0xffffff00;
          local_1c = 0xf;
          local_20 = 0;
          local_30[0] = local_30[0] & 0xffffff00;
          FUN_00409350();
          local_8._0_1_ = 10;
          local_18c = CONCAT44(local_4c,0x52773e);
          uVar5 = (**(code **)(*piVar1 + 0x18))();
          local_8._0_1_ = 0xb;
          local_18c = CONCAT44(uVar5,0x527751);
          FUN_009a9980();
          if (0xf < local_38) {
            local_18c = CONCAT44(local_4c[0],&UNK_00527764);
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_8._0_1_ = 9;
          local_38 = 0xf;
          local_3c = 0;
          local_4c[0] = local_4c[0] & 0xffffff00;
          if (0xf < local_1c) {
            local_18c = CONCAT44(local_30[0],&UNK_00527782);
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_18c = 0x800dfeb80;
          local_1c = 0xf;
          local_20 = 0;
          local_30[0] = local_30[0] & 0xffffff00;
          FUN_00409350();
          uVar3 = local_54;
          local_7c = (undefined1 *)&local_18c;
          local_18c._4_4_ = (undefined1 *)0x0;
          local_100 = (int)local_54 >> 0x1f;
          local_8._0_1_ = 0xc;
          uVar11 = __allmul(local_54,local_100,100000,0);
          uVar5 = __alldiv(uVar11,1000,0);
          local_18c = CONCAT44(local_18c._4_4_,uVar5);
          uVar5 = FUN_00988a50();
          local_8._0_1_ = 0xd;
          local_18c = CONCAT44(uVar5,0x5277ec);
          FUN_009a9980();
          if (0xf < local_38) {
            local_18c = CONCAT44(local_4c[0],&UNK_005277ff);
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_8._0_1_ = 9;
          local_38 = 0xf;
          local_3c = 0;
          local_4c[0] = local_4c[0] & 0xffffff00;
          if (0xf < local_1c) {
            local_18c = CONCAT44(local_30[0],&UNK_00527821);
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_18c = 0x800dfeb8c;
          local_1c = 0xf;
          local_20 = 0;
          local_30[0] = local_30[0] & 0xffffff00;
          FUN_00409350();
          local_7c = (undefined1 *)&local_18c;
          local_18c._4_4_ = (undefined1 *)0x0;
          local_8._0_1_ = 0xe;
          uVar11 = __allmul(1000 - local_54,(int)(1000 - local_54) >> 0x1f,100000,0);
          uVar5 = __alldiv(uVar11,1000,0);
          local_18c = CONCAT44(local_18c._4_4_,uVar5);
          uVar5 = FUN_00988a50();
          local_8._0_1_ = 0xf;
          local_18c = CONCAT44(uVar5,0x52788c);
          FUN_009a9980();
          if (0xf < local_38) {
            local_18c = CONCAT44(local_4c[0],&UNK_0052789f);
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_8._0_1_ = 9;
          local_38 = 0xf;
          local_3c = 0;
          local_4c[0] = local_4c[0] & 0xffffff00;
          if (0xf < local_1c) {
            local_18c = CONCAT44(local_30[0],&UNK_005278c1);
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          iVar6 = local_14 * 8;
          local_dc = *(undefined4 *)(*(int *)((int)param_1 + 0x8c0) + iVar6);
          local_d8 = *(undefined4 *)(*(int *)((int)param_1 + 0x8c0) + 4 + iVar6);
          local_18c = 0x1f40000;
          uVar11 = __alldiv(uVar3 << 0x1e,
                            (local_100 << 0xf | uVar3 >> 0x11) << 0xf | (uVar3 & 0x1ffff) >> 2);
          local_18c = CONCAT44(local_d8,local_dc);
          lVar12 = __allmul(uVar11);
          local_18c = 0x700dfeb98;
          local_5c = (lVar12 >> 0xf) + local_5c;
          local_1c = 0xf;
          local_20 = 0;
          local_30[0] = local_30[0] & 0xffffff00;
          FUN_00409350();
          local_8._0_1_ = 0x10;
          local_7c = (undefined1 *)&local_18c;
          local_18c = __allmul(*(undefined4 *)(*(int *)((int)param_1 + 0x8c0) + iVar6),
                               *(undefined4 *)(*(int *)((int)param_1 + 0x8c0) + 4 + iVar6),0x320000,
                               0);
          local_18c = local_18c >> 0xf;
          uVar5 = FUN_00988bb0(local_4c,0);
          local_8._0_1_ = 0x11;
          local_18c = CONCAT44(uVar5,0x52799c);
          FUN_009a9980();
          if (0xf < local_38) {
            local_18c = CONCAT44(local_4c[0],&UNK_005279af);
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_8._0_1_ = 9;
          local_38 = 0xf;
          local_3c = 0;
          local_4c[0] = local_4c[0] & 0xffffff00;
          if (0xf < local_1c) {
            local_18c = CONCAT44(local_30[0],&UNK_005279d1);
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_18c = CONCAT44(0x5279d9,(undefined4)local_18c);
          iVar6 = FUN_00475500();
          local_18c = *(undefined8 *)(iVar6 + 0x74);
          FUN_009a9880(*(undefined8 *)(iVar6 + 0x6c));
          local_18c = 0xffffffff00000000;
          local_8._0_1_ = 0x12;
          FUN_00448aa0();
          if (0xf < local_64) {
            local_18c = CONCAT44(local_78[0],&UNK_00527a20);
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_8._0_1_ = 0x13;
          local_18c = CONCAT44(0x527a32,(undefined4)local_18c);
          FUN_009adb70();
          local_8._0_1_ = 6;
          iVar6 = local_14;
          if (local_a8 != 0) {
            local_18c = CONCAT44(0x527a4b,(undefined4)local_18c);
            FUN_009e6a80();
            local_18c = CONCAT44(local_a8,&UNK_00527a57);
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
        }
        local_14 = iVar6 + 1;
      } while (local_14 < *(int *)(local_50 + 0x10) - *(int *)(local_50 + 0xc) >> 2);
    }
    local_18c = 0x200df8514;
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    FUN_00409350();
    param_1 = &local_18c;
    local_8._0_1_ = 0x14;
    local_18c = __allmul((undefined4)local_5c,local_5c._4_4_,0x320000,0);
    local_18c = local_18c >> 0xf;
    uVar5 = FUN_00988bb0(local_78,2);
    local_8._0_1_ = 0x15;
    local_18c = 0x200df963c;
    local_84 = 0xf;
    local_88 = 0;
    local_98[0] = local_98[0] & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 0x16;
    local_18c = CONCAT44(uVar5,0x527b08);
    FUN_00988f20();
    local_8._0_1_ = 0x17;
    local_18c = CONCAT44(local_30,0x527b1d);
    uVar5 = FUN_00988f20();
    local_18c = CONCAT44(uVar5,local_4c);
    local_8._0_1_ = 0x18;
    FUN_0042c180();
    local_18c = 0xffffffff00000000;
    local_8._0_1_ = 0x19;
    FUN_00448aa0();
    if (0xf < local_38) {
      local_18c = CONCAT44(local_4c[0],&UNK_00527b5e);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_38 = 0xf;
    local_3c = 0;
    local_4c[0] = local_4c[0] & 0xffffff00;
    if (0xf < local_a0) {
      local_18c = CONCAT44(local_b4,&UNK_00527b83);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_a0 = 0xf;
    local_a4 = 0;
    local_b4 = local_b4 & 0xffffff00;
    if (0xf < local_e4) {
      local_18c = CONCAT44(local_f8[0],&UNK_00527bac);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_e4 = 0xf;
    local_e8 = 0;
    local_f8[0] = local_f8[0] & 0xffffff00;
    if (0xf < local_84) {
      local_18c = CONCAT44(local_98[0],&UNK_00527bd2);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_84 = 0xf;
    local_88 = 0;
    local_98[0] = local_98[0] & 0xffffff00;
    if (0xf < local_64) {
      local_18c = CONCAT44(local_78[0],&UNK_00527bf2);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 6;
    local_64 = 0xf;
    local_68 = 0;
    local_78[0] = local_78[0] & 0xffffff00;
    if (0xf < local_1c) {
      local_18c = CONCAT44(local_30[0],&UNK_00527c10);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_18c = 0xffffffff00000000;
    FUN_00448aa0();
    local_18c = 0x100000000;
    (**(code **)(*(int *)(param_4 + 0x58) + 0x2c))(local_f8,local_174,0);
    local_8._0_1_ = 0x1a;
    local_18c = CONCAT44(local_78,0x527c57);
    FUN_00989330();
    local_18c = 0xffffffff00000000;
    local_8._0_1_ = 0x1b;
    FUN_00448aa0();
    puVar7 = param_2;
    if (0xf < local_64) {
      local_18c = CONCAT44(local_78[0],&UNK_00527c78);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = CONCAT31(local_8._1_3_,6);
    local_64 = 0xf;
    local_68 = 0;
    local_78[0] = local_78[0] & 0xffffff00;
    if (0xf < local_e4) {
      local_18c = CONCAT44(local_f8[0],&UNK_00527ca0);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_18c = 0xffffffff00000000;
    *(undefined4 *)(param_2 + 0x14) = 0xf;
    *(undefined4 *)(param_2 + 0x10) = 0;
    *param_2 = 0;
    FUN_00408ed0();
    if (0xf < local_110) {
      local_18c = CONCAT44(local_124,&UNK_00527cd7);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_18c._4_4_ = (undefined1 *)local_d0;
    if (0xf < local_bc) {
LAB_00527ce9:
      local_18c = CONCAT44(local_18c._4_4_,&UNK_00527cee);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  else {
    if (*(int *)(*(int *)(*(int *)(puVar7 + 0x860) + *(int *)(param_3 + 0x50) * 4) + 0x50) + 1 <
        *(int *)(param_4 + 0x50)) {
      local_18c = CONCAT44(0x527511,(undefined4)local_18c);
      FUN_009885d0();
      local_18c = CONCAT44(local_78,local_ac);
      local_8._0_1_ = 2;
      FUN_009a8ee0();
      local_8._0_1_ = 3;
      local_18c = CONCAT44(0x52752f,(undefined4)local_18c);
      iVar6 = FUN_00475500();
      puVar7 = param_2;
      local_18c = *(undefined8 *)(iVar6 + 0x74);
      FUN_009a9880(*(undefined8 *)(iVar6 + 0x6c));
      local_8 = CONCAT31(local_8._1_3_,2);
    }
    else {
      if (*(int *)(*(int *)(*(int *)(puVar7 + 0x860) + *(int *)(param_3 + 0x50) * 4) + 0x50) + -1 <=
          *(int *)(param_4 + 0x50)) goto LAB_005275e1;
      local_18c = CONCAT44(0x527591,(undefined4)local_18c);
      FUN_009885d0();
      local_18c = CONCAT44(local_78,local_ac);
      local_8._0_1_ = 4;
      FUN_009a8ee0();
      local_8._0_1_ = 5;
      local_18c = CONCAT44(0x5275b0,(undefined4)local_18c);
      iVar6 = FUN_00475500();
      puVar7 = param_2;
      local_18c = *(undefined8 *)(iVar6 + 0x74);
      FUN_009a9880(*(undefined8 *)(iVar6 + 0x6c));
      local_8 = CONCAT31(local_8._1_3_,4);
    }
    local_18c._4_4_ = local_ac;
    local_18c = CONCAT44(local_18c._4_4_,0x527561);
    FUN_009a9740();
    local_18c = CONCAT44(0x527569,(undefined4)local_18c);
    FUN_00408ad0();
    local_18c = CONCAT44(0x527574,(undefined4)local_18c);
    FUN_00408ad0();
  }
  ExceptionList = local_10;
  return puVar7;
}

