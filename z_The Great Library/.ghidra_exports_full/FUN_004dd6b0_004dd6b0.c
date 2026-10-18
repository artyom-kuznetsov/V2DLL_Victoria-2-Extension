// FUN_004dd6b0 @ 004dd6b0 body=[[004dd6b0, 004dd76f] [004dd773, 004dd793] [004dd797, 004ddb3d] [004ddb41, 004ddb6b] [004ddb6f, 004ddb94] [004ddb98, 004ddbbd] [004ddbc1, 004ddbe6] [004ddbea, 004ddc0f] [004ddc13, 004ddc38] [004ddc3c, 004ddc61] [004ddc65, 004ddc84] [004ddc88, 004ddc9e] [004ddca2, 004ddcbe] [004ddcc2, 004ddcea] [004ddcee, 004ddd8f] [004ddd93, 004dddad] [004dddb1, 004dddd1] [004dddd5, 004dddff]]


/* WARNING: Removing unreachable block (ram,0x004dd875) */
/* WARNING: Removing unreachable block (ram,0x004dd905) */

undefined4
FUN_004dd6b0(int param_1,undefined4 param_2,int param_3,undefined4 *param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int *piVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  undefined8 *puVar7;
  uint *puVar8;
  undefined4 uVar9;
  char *pcVar10;
  uint uVar11;
  char *pcVar12;
  longlong lVar13;
  undefined8 uVar14;
  undefined8 local_20c;
  uint local_1f8;
  uint local_1e4;
  uint local_1dc;
  uint local_1c8;
  uint local_1c0;
  uint local_1ac;
  uint local_1a4;
  uint local_190;
  uint local_188;
  uint local_174;
  uint local_16c;
  uint local_158;
  undefined8 local_14c;
  undefined4 local_140;
  uint local_138 [4];
  undefined4 local_128;
  uint local_124;
  undefined4 local_11c;
  uint local_114 [4];
  undefined4 local_104;
  uint local_100;
  uint local_f8 [4];
  undefined4 local_e8;
  uint local_e4;
  uint local_dc [4];
  undefined4 local_cc;
  uint local_c8;
  uint local_c0 [4];
  undefined4 local_b0;
  uint local_ac;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  undefined8 local_94;
  undefined8 local_8c;
  undefined1 local_80 [4];
  int local_7c;
  undefined4 local_78;
  undefined4 local_74;
  uint local_6c [4];
  undefined4 local_5c;
  uint local_58;
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  undefined1 *local_20;
  uint local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00b753cf;
  local_10 = ExceptionList;
  local_8 = 0;
  local_34 = 0;
  local_20c._4_4_ = (uint *)0x10;
  local_20c._0_4_ = "MAINTENANCE_DESC";
  local_c8 = 0xf;
  local_cc = 0;
  local_dc[0] = local_dc[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350();
  local_20c._4_4_ = local_dc;
  local_20c._0_4_ = local_80;
  local_8 = 1;
  FUN_009a8ee0();
  local_8._0_1_ = 2;
  local_20c._4_4_ = (uint *)0x4dd723;
  iVar6 = FUN_00475500();
  local_20c._0_4_ = *(char **)(iVar6 + 0x74);
  local_20c._4_4_ = *(uint **)(iVar6 + 0x78);
  FUN_009a9880();
  local_34 = 1;
  local_8._0_1_ = 3;
  local_20c._4_4_ = (uint *)0x4dd758;
  FUN_009adb70();
  if (local_7c != 0) {
    local_20c._4_4_ = (uint *)0x4dd767;
    FUN_009e6a80();
    local_20c._4_4_ = (uint *)local_7c;
                    /* WARNING: Subroutine does not return */
    local_20c._0_4_ = &UNK_004dd770;
    FUN_00aae91b();
  }
  local_8 = (uint)local_8._1_3_ << 8;
  local_7c = 0;
  local_78 = 0;
  local_74 = 0;
  if (0xf < local_c8) {
    local_20c._4_4_ = (uint *)local_dc[0];
                    /* WARNING: Subroutine does not return */
    local_20c._0_4_ = &UNK_004dd794;
    FUN_00aae91b();
  }
  local_20c._4_4_ = (uint *)param_4[1];
  local_20c._0_4_ = (char *)*param_4;
  local_c8 = 0xf;
  local_cc = 0;
  local_dc[0] = local_dc[0] & 0xffffff00;
  local_1c = 0x8000;
  local_18 = 0;
  __allmul();
  local_20c._4_4_ = (uint *)param_6;
  local_20c._0_4_ = (char *)param_5;
  lVar13 = __allmul();
  lVar13 = lVar13 >> 0xf;
  local_28 = (undefined4)((ulonglong)lVar13 >> 0x20);
  iVar6 = *(int *)(DAT_012587f0 + 0x10) - *(int *)(DAT_012587f0 + 0xc) >> 2;
  param_4 = (undefined4 *)0x0;
  local_24 = iVar6;
  if (0 < iVar6) {
    do {
      local_20c._4_4_ = (uint *)((ulonglong)lVar13 >> 0x20);
      local_2c = (undefined4)lVar13;
      piVar1 = (int *)(*(int *)(param_1 + 0xd8) + (uint)*(byte *)(param_1 + 0x98 + (int)param_4) * 8
                      );
      iVar4 = piVar1[1];
      if ((-1 < iVar4) && ((0 < iVar4 || (*piVar1 != 0)))) {
        local_20c._0_4_ = (char *)local_2c;
        __allmul();
        local_20c._4_4_ = (uint *)param_8;
        local_20c._0_4_ = (char *)param_7;
        local_20c = __allmul();
        local_20c = local_20c >> 0xf;
        iVar6 = (int)((ulonglong)local_20c >> 0x20);
        local_9c = (uint)local_20c;
        if (local_20c < 1) {
          local_14c = 0;
          puVar7 = &local_14c;
        }
        else {
          uVar14 = __alldiv();
          local_94 = uVar14;
          puVar7 = &local_94;
        }
        local_20c._0_4_ = *(char **)puVar7;
        local_20c._4_4_ = *(uint **)((int)puVar7 + 4);
        lVar13 = __allmul();
        lVar13 = lVar13 >> 0xf;
        lVar5 = lVar13 + CONCAT44(DAT_0125cf34,DAT_0125cf30);
        local_11c = (int)lVar5;
        local_140 = (int)((ulonglong)lVar13 >> 0x20);
        if (CONCAT44(local_18,local_1c) < lVar5) {
          local_a0 = local_18;
          local_a4 = local_1c;
          puVar8 = &local_a4;
        }
        else {
          local_8c = lVar13 + CONCAT44(DAT_0125cf34,DAT_0125cf30);
          puVar8 = (uint *)&local_8c;
        }
        local_1c = *puVar8;
        local_18 = puVar8[1];
        uVar11 = (uint)*(byte *)((int)param_4 + 8 + param_3);
        pcVar12 = &DAT_00df8510;
        iVar4 = *(int *)(*(int *)(param_3 + 0x48) + uVar11 * 8 + 4);
        if ((iVar6 <= iVar4) &&
           ((iVar6 < iVar4 || (local_9c <= *(uint *)(*(int *)(param_3 + 0x48) + uVar11 * 8))))) {
          pcVar12 = &DAT_00df8518;
        }
        local_20c._4_4_ = (uint *)0x1;
        local_20c._0_4_ = &DAT_00ded950;
        local_124 = 0xf;
        local_128 = 0;
        local_138[0] = local_138[0] & 0xffffff00;
        FUN_00409350();
        local_8 = 4;
        local_20c._4_4_ = (uint *)0x3;
        local_20c._0_4_ = &DAT_00dfc948;
        local_e4 = 0xf;
        local_e8 = 0;
        local_f8[0] = local_f8[0] & 0xffffff00;
        FUN_00409350();
        local_8._0_1_ = 5;
        local_20c._0_4_ = *(char **)(*(int *)(DAT_012587f0 + 0xc) + (int)param_4 * 4);
        local_20c._4_4_ = local_6c;
        local_30 = FUN_005659c0();
        local_20 = (undefined1 *)&local_20c;
        local_8._0_1_ = 6;
        local_20c._0_4_ = (char *)local_9c;
        local_20c._4_4_ = (uint *)iVar6;
        local_20 = (undefined1 *)FUN_00988bb0();
        local_8._0_1_ = 7;
        puVar2 = (undefined4 *)
                 (*(int *)(param_3 + 0x48) + (uint)*(byte *)((int)param_4 + 8 + param_3) * 8);
        local_20c._0_4_ = (char *)*puVar2;
        local_20c._4_4_ = (uint *)puVar2[1];
        uVar9 = FUN_00988bb0();
        local_8._0_1_ = 8;
        local_ac = 0xf;
        local_b0 = 0;
        local_c0[0] = local_c0[0] & 0xffffff00;
        pcVar10 = pcVar12;
        do {
          cVar3 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar3 != '\0');
        local_20c._4_4_ = (uint *)((int)pcVar10 - (int)(pcVar12 + 1));
        local_20c._0_4_ = pcVar12;
        FUN_00409350();
        local_20c._4_4_ = local_c0;
        local_8._0_1_ = 9;
        local_20c._0_4_ = (char *)0x4ddaa6;
        FUN_00988fa0();
        local_8._0_1_ = 10;
        local_20c._0_4_ = (char *)0x4ddabb;
        local_20c._4_4_ = (uint *)uVar9;
        FUN_00988f20();
        local_20c._4_4_ = local_f8;
        local_8._0_1_ = 0xb;
        local_20c._0_4_ = (char *)0x4ddad3;
        FUN_00988f20();
        local_20c._4_4_ = (uint *)local_20;
        local_8._0_1_ = 0xc;
        local_20c._0_4_ = (char *)0x4ddae8;
        FUN_00988f20();
        local_20c._4_4_ = local_138;
        local_8._0_1_ = 0xd;
        local_20c._0_4_ = (char *)0x4ddb00;
        FUN_00988f20();
        local_20c._4_4_ = (uint *)local_30;
        local_8._0_1_ = 0xe;
        local_20c._0_4_ = (char *)0x4ddb15;
        FUN_00988f20();
        local_20c._4_4_ = (uint *)0xffffffff;
        local_20c._0_4_ = (char *)0x0;
        local_8._0_1_ = 0xf;
        FUN_00448aa0();
        lVar13 = CONCAT44(local_28,local_2c);
        if (0xf < local_1e4) {
          local_20c._4_4_ = (uint *)local_1f8;
                    /* WARNING: Subroutine does not return */
          local_20c._0_4_ = &UNK_004ddb3e;
          FUN_00aae91b();
        }
        local_1e4 = 0xf;
        local_1f8 = local_1f8 & 0xffffff00;
        if (0xf < local_174) {
          local_20c._4_4_ = (uint *)local_188;
                    /* WARNING: Subroutine does not return */
          local_20c._0_4_ = &UNK_004ddb6c;
          FUN_00aae91b();
        }
        local_174 = 0xf;
        local_188 = local_188 & 0xffffff00;
        if (0xf < local_1ac) {
          local_20c._4_4_ = (uint *)local_1c0;
                    /* WARNING: Subroutine does not return */
          local_20c._0_4_ = &UNK_004ddb95;
          FUN_00aae91b();
        }
        local_1ac = 0xf;
        local_1c0 = local_1c0 & 0xffffff00;
        if (0xf < local_158) {
          local_20c._4_4_ = (uint *)local_16c;
                    /* WARNING: Subroutine does not return */
          local_20c._0_4_ = &UNK_004ddbbe;
          FUN_00aae91b();
        }
        local_158 = 0xf;
        local_16c = local_16c & 0xffffff00;
        if (0xf < local_190) {
          local_20c._4_4_ = (uint *)local_1a4;
                    /* WARNING: Subroutine does not return */
          local_20c._0_4_ = &UNK_004ddbe7;
          FUN_00aae91b();
        }
        local_190 = 0xf;
        local_1a4 = local_1a4 & 0xffffff00;
        if (0xf < local_1c8) {
          local_20c._4_4_ = (uint *)local_1dc;
                    /* WARNING: Subroutine does not return */
          local_20c._0_4_ = &UNK_004ddc10;
          FUN_00aae91b();
        }
        local_1c8 = 0xf;
        local_1dc = local_1dc & 0xffffff00;
        if (0xf < local_ac) {
          local_20c._4_4_ = (uint *)local_c0[0];
                    /* WARNING: Subroutine does not return */
          local_20c._0_4_ = &UNK_004ddc39;
          FUN_00aae91b();
        }
        local_ac = 0xf;
        local_b0 = 0;
        local_c0[0] = local_c0[0] & 0xffffff00;
        if (0xf < local_100) {
          local_20c._4_4_ = (uint *)local_114[0];
                    /* WARNING: Subroutine does not return */
          local_20c._0_4_ = &UNK_004ddc62;
          FUN_00aae91b();
        }
        local_100 = 0xf;
        local_104 = 0;
        local_114[0] = local_114[0] & 0xffffff00;
        if (0xf < local_3c) {
          local_20c._4_4_ = (uint *)local_50[0];
                    /* WARNING: Subroutine does not return */
          local_20c._0_4_ = &UNK_004ddc85;
          FUN_00aae91b();
        }
        local_3c = 0xf;
        local_40 = 0;
        local_50[0] = local_50[0] & 0xffffff00;
        if (0xf < local_58) {
          local_20c._4_4_ = (uint *)local_6c[0];
                    /* WARNING: Subroutine does not return */
          local_20c._0_4_ = &UNK_004ddc9f;
          FUN_00aae91b();
        }
        local_58 = 0xf;
        local_5c = 0;
        local_6c[0] = local_6c[0] & 0xffffff00;
        if (0xf < local_e4) {
          local_20c._4_4_ = (uint *)local_f8[0];
                    /* WARNING: Subroutine does not return */
          local_20c._0_4_ = &UNK_004ddcbf;
          FUN_00aae91b();
        }
        local_8 = (uint)local_8._1_3_ << 8;
        local_e4 = 0xf;
        local_e8 = 0;
        local_f8[0] = local_f8[0] & 0xffffff00;
        iVar6 = local_24;
        if (0xf < local_124) {
          local_20c._4_4_ = (uint *)local_138[0];
                    /* WARNING: Subroutine does not return */
          local_20c._0_4_ = &UNK_004ddceb;
          FUN_00aae91b();
        }
      }
      local_2c = (undefined4)lVar13;
      param_4 = (undefined4 *)((int)param_4 + 1);
    } while ((int)param_4 < iVar6);
    if (((int)local_18 < 1) && (((int)local_18 < 0 || (local_1c < 0x8000)))) {
      local_20c._4_4_ = (uint *)0x0;
      local_20c._0_4_ = (char *)0x1;
      local_20c._4_4_ = (uint *)FUN_009c80d0(local_114);
      local_20c._0_4_ = (char *)local_50;
      local_8 = 0x10;
      FUN_0042c180();
      local_8._0_1_ = 0x11;
      FUN_00988fa0();
      local_20c._4_4_ = (uint *)0xffffffff;
      local_8 = CONCAT31(local_8._1_3_,0x12);
      local_20c._0_4_ = (char *)0x0;
      FUN_00448aa0();
      if (0xf < local_58) {
        local_20c._4_4_ = (uint *)local_6c[0];
                    /* WARNING: Subroutine does not return */
        local_20c._0_4_ = &UNK_004ddd90;
        FUN_00aae91b();
      }
      local_58 = 0xf;
      local_5c = 0;
      local_6c[0] = local_6c[0] & 0xffffff00;
      if (local_3c < 0x10) {
        local_3c = 0xf;
        local_40 = 0;
        local_50[0] = local_50[0] & 0xffffff00;
        if (local_100 < 0x10) {
          ExceptionList = local_10;
          return param_2;
        }
        local_20c._4_4_ = (uint *)local_114[0];
                    /* WARNING: Subroutine does not return */
        local_20c._0_4_ = &UNK_004dddd2;
        FUN_00aae91b();
      }
      local_20c._4_4_ = (uint *)local_50[0];
                    /* WARNING: Subroutine does not return */
      local_20c._0_4_ = &UNK_004dddae;
      FUN_00aae91b();
    }
  }
  ExceptionList = local_10;
  return param_2;
}

