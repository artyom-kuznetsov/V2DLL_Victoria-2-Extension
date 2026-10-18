// FUN_007feb80 @ 007feb80 body=[[007feb80, 007fec2e] [007fec30, 007fed37] [007fed3d, 007fee4b] [007fee4f, 007feeac] [007feeb5, 007fef8b] [007fef8f, 007ff15d] [007ff161, 007ff29d] [007ff2a1, 007ff2d6] [007ff2da, 007ff302]]


/* WARNING: Removing unreachable block (ram,0x007fedde) */

void FUN_007feb80(int param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  undefined4 uVar9;
  bool bVar10;
  longlong lVar11;
  undefined1 local_15c [8];
  undefined4 uStack_154;
  int iStack_150;
  uint local_14c;
  undefined8 local_148;
  uint local_128 [4];
  uint local_118;
  uint local_114;
  int local_10c;
  undefined1 *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  uint local_e4 [4];
  uint local_d4;
  uint local_d0;
  uint local_c8 [4];
  uint local_b8;
  uint local_b4;
  int local_ac;
  uint local_a8;
  int local_a4;
  undefined **local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 local_90;
  undefined1 local_88;
  undefined **local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined1 local_6c;
  int *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined **local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38;
  undefined1 local_34 [32];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b42ef4;
  local_14 = ExceptionList;
  bVar1 = false;
  local_80 = 0x18d;
  local_84 = CColor::vftable;
  local_7c = DAT_00f092fc;
  uStack_78 = DAT_00f092fc;
  local_74 = DAT_00f092fc;
  uStack_70 = DAT_00f092fc;
  local_6c = 1;
  local_148._4_4_ = (uint *)0x7fec01;
  ExceptionList = &local_14;
  local_f0 = FUN_00b31c36();
  local_ac = *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x1c) >> 2;
  local_10c = 1;
  if (1 < local_ac) {
    do {
      iVar7 = *(int *)(*(int *)(*(int *)(param_1 + 0x1c) + local_10c * 4) + 0xc);
      local_148._4_4_ = (uint *)0x0;
      local_f8 = 0;
      local_148._0_4_ = &DAT_00ded94d;
      local_100 = 0;
      local_d0 = 0xf;
      local_d4 = 0;
      local_e4[0] = local_e4[0] & 0xffffff00;
      local_14c = 0x7fec7a;
      FUN_00409350();
      local_c = 0;
      local_148._4_4_ = (uint *)0x0;
      local_148._0_4_ = &DAT_00ded94d;
      local_b4 = 0xf;
      local_b8 = 0;
      local_c8[0] = local_c8[0] & 0xffffff00;
      local_14c = 0x7feca9;
      FUN_00409350();
      if (0 < (int)(*(int *)(iVar7 + 0x378) - *(int *)(iVar7 + 0x374) & 0xfffffffcU)) {
        piVar8 = *(int **)(iVar7 + 0x374);
        while ((local_c._0_1_ = 1, *(int **)(iVar7 + 0x374) <= piVar8 &&
               (piVar8 < *(int **)(iVar7 + 0x378)))) {
          local_148._4_4_ = (uint *)*piVar8;
          piVar8 = piVar8 + 1;
          if ((local_f8._4_4_ <= *(int *)((int)local_148._4_4_ + 0xc)) &&
             ((local_f8._4_4_ < *(int *)((int)local_148._4_4_ + 0xc) ||
              ((uint)local_f8 < *(uint *)((int)local_148._4_4_ + 8))))) {
            local_148._0_4_ = (undefined1 *)0x7fed09;
            local_f8 = *(undefined8 *)((int)local_148._4_4_ + 8);
            local_14c = FUN_004a8270();
            local_148._4_4_ = (uint *)0xffffffff;
            local_148._0_4_ = (undefined1 *)0x0;
            local_c._0_1_ = 2;
            iStack_150 = 0x7fed1f;
            FUN_00408ed0();
            local_c._0_1_ = 1;
            if (0xf < local_114) {
              local_148._4_4_ = (uint *)local_128[0];
                    /* WARNING: Subroutine does not return */
              local_148._0_4_ = &UNK_007fed38;
              FUN_00aae91b();
            }
          }
        }
        if (4 < (int)(*(int *)(iVar7 + 0x378) - *(int *)(iVar7 + 0x374) & 0xfffffffcU)) {
          local_68 = *(int **)(iVar7 + 0x374);
          while ((local_c._0_1_ = 1, *(int **)(iVar7 + 0x374) <= local_68 &&
                 (local_68 < *(int **)(iVar7 + 0x378)))) {
            iVar5 = *local_68;
            local_a4 = *(int *)(iVar5 + 0xc);
            local_68 = local_68 + 1;
            local_a8 = *(uint *)(iVar5 + 8);
            if ((local_a4 < local_100._4_4_) ||
               ((local_a4 <= local_100._4_4_ && (local_a8 <= (uint)local_100)))) {
LAB_007fee22:
              bVar10 = false;
            }
            else {
              local_148._0_4_ = (undefined1 *)0x7fedbf;
              local_148._4_4_ = (uint *)iVar5;
              iVar3 = FUN_004a8270();
              uVar6 = local_d4;
              bVar1 = true;
              uVar4 = *(uint *)(iVar3 + 0x10);
              local_148._4_4_ = (uint *)uVar4;
              if (local_d4 <= uVar4) {
                local_148._4_4_ = (uint *)local_d4;
              }
              local_148._0_4_ = (undefined1 *)0x7fedf9;
              iVar3 = FUN_00414bd0();
              bVar10 = false;
              if (iVar3 == 0) {
                if (uVar4 < uVar6) {
                  uVar4 = 0xffffffff;
                }
                else {
                  uVar4 = (uint)(uVar4 != uVar6);
                }
                bVar10 = uVar4 == 0;
              }
              if (bVar10) goto LAB_007fee22;
              bVar10 = true;
            }
            local_c._0_1_ = 1;
            local_c._1_3_ = 0;
            if ((bVar1) && (bVar1 = false, 0xf < local_114)) {
              local_148._4_4_ = (uint *)local_128[0];
                    /* WARNING: Subroutine does not return */
              local_148._0_4_ = &UNK_007fee4c;
              FUN_00aae91b();
            }
            if (bVar10) {
              local_100 = CONCAT44(local_a4,local_a8);
              local_148._0_4_ = (undefined1 *)0x7fee77;
              local_148._4_4_ = (uint *)iVar5;
              local_14c = FUN_004a8270();
              local_148._4_4_ = (uint *)0xffffffff;
              local_148._0_4_ = (undefined1 *)0x0;
              local_c._0_1_ = 4;
              iStack_150 = 0x7fee90;
              FUN_00408ed0();
              local_c._0_1_ = 1;
              if (0xf < local_114) {
                local_148._4_4_ = (uint *)local_128[0];
                    /* WARNING: Subroutine does not return */
                local_148._0_4_ = &UNK_007feead;
                FUN_00aae91b();
              }
            }
          }
        }
      }
      local_c._0_1_ = 1;
      local_98 = CONCAT44(uStack_78,local_7c);
      local_148._4_4_ = (uint *)0x0;
      local_90 = CONCAT44(uStack_70,local_74);
      uVar9 = 0x18d;
      local_148._0_4_ = &DAT_00ded94d;
      local_9c = 0x18d;
      local_a0 = CColor::vftable;
      local_88 = 1;
      local_114 = 0xf;
      local_118 = 0;
      local_128[0] = local_128[0] & 0xffffff00;
      local_14c = 0x7fef1a;
      FUN_00409350();
      uVar6 = local_d4;
      uVar4 = local_114;
      local_148._4_4_ = (uint *)local_118;
      if (local_d4 < local_118) {
        local_148._4_4_ = (uint *)local_d4;
      }
      local_148._0_4_ = (undefined1 *)0x7fef4e;
      iVar5 = FUN_00414bd0();
      bVar10 = false;
      if (iVar5 == 0) {
        if (uVar6 < local_118) {
          uVar6 = 0xffffffff;
        }
        else {
          uVar6 = (uint)(uVar6 != local_118);
        }
        bVar10 = uVar6 == 0;
      }
      local_c._0_1_ = 1;
      if (0xf < uVar4) {
        local_148._4_4_ = (uint *)local_128[0];
                    /* WARNING: Subroutine does not return */
        local_148._0_4_ = &UNK_007fef8c;
        FUN_00aae91b();
      }
      if (!bVar10) {
        local_108 = local_15c;
        local_148._0_4_ = (undefined1 *)0xf;
        local_14c = 0;
        local_15c[0] = 0;
        FUN_00408ed0(local_e4,0,0xffffffff);
        local_108 = *(undefined1 **)(iVar7 + 0x128);
        iVar5 = FUN_0053ee50(*(undefined4 *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar7 + 300) * 4)
                            );
        if (iVar5 != 0) {
          local_14c = local_f8._4_4_ << 0xf | (uint)local_f8 >> 0x11;
          iStack_150 = (uint)local_f8 << 0xf;
          uStack_154 = 0x7ff012;
          local_148 = local_f0;
          lVar11 = __alldiv();
          local_148._4_4_ = local_128;
          local_108 = (undefined1 *)(float)((float10)lVar11 * (float10)3.0517578125e-05);
          local_148._0_4_ = (undefined1 *)0x7ff04e;
          local_60 = lVar11;
          iVar5 = FUN_009b7270();
          local_98 = *(undefined8 *)(iVar5 + 8);
          uVar9 = *(undefined4 *)(iVar5 + 4);
          local_88 = *(undefined1 *)(iVar5 + 0x18);
          local_90 = *(undefined8 *)(iVar5 + 0x10);
          local_9c = uVar9;
        }
      }
      local_148._4_4_ = (uint *)0x0;
      local_48 = local_98;
      local_148._0_4_ = &DAT_00ded94d;
      local_50 = CColor::vftable;
      local_40 = local_90;
      local_38 = local_88;
      local_114 = 0xf;
      local_118 = 0;
      local_128[0] = local_128[0] & 0xffffff00;
      local_14c = 0x7ff0ea;
      local_4c = uVar9;
      FUN_00409350();
      uVar2 = local_b8;
      uVar6 = local_114;
      uVar4 = local_118;
      local_148._4_4_ = (uint *)local_b8;
      if (local_118 <= local_b8) {
        local_148._4_4_ = (uint *)local_118;
      }
      local_148._0_4_ = (undefined1 *)0x7ff126;
      iVar5 = FUN_00414bd0();
      bVar10 = false;
      if (iVar5 == 0) {
        if (uVar2 < uVar4) {
          uVar4 = 0xffffffff;
        }
        else {
          uVar4 = (uint)(uVar2 != uVar4);
        }
        bVar10 = uVar4 == 0;
      }
      local_c = CONCAT31(local_c._1_3_,1);
      if (0xf < uVar6) {
        local_148._4_4_ = (uint *)local_128[0];
                    /* WARNING: Subroutine does not return */
        local_148._0_4_ = &UNK_007ff15e;
        FUN_00aae91b();
      }
      if (!bVar10) {
        local_108 = local_15c;
        local_148._0_4_ = (undefined1 *)0xf;
        local_14c = 0;
        local_15c[0] = 0;
        FUN_00408ed0(local_c8,0,0xffffffff);
        local_108 = *(undefined1 **)(iVar7 + 0x128);
        iVar7 = FUN_0053ee50(*(undefined4 *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar7 + 300) * 4)
                            );
        if (iVar7 != 0) {
          local_14c = local_100._4_4_ << 0xf | (uint)local_100 >> 0x11;
          iStack_150 = (uint)local_100 << 0xf;
          uStack_154 = 0x7ff1e4;
          local_148 = local_f0;
          lVar11 = __alldiv();
          local_148._4_4_ = (uint *)local_34;
          local_108 = (undefined1 *)(float)((float10)lVar11 * (float10)3.0517578125e-05);
          local_148._0_4_ = (undefined1 *)0x7ff223;
          local_58 = lVar11;
          iVar7 = FUN_009b7270();
          local_48 = *(undefined8 *)(iVar7 + 8);
          local_4c = *(undefined4 *)(iVar7 + 4);
          local_38 = *(undefined1 *)(iVar7 + 0x18);
          local_40 = *(undefined8 *)(iVar7 + 0x10);
        }
      }
      local_148._4_4_ = (uint *)0x7ff262;
      uVar9 = FUN_009b6df0();
      iVar7 = local_10c;
      **(undefined4 **)(*(int *)(param_1 + 0x1c) + local_10c * 4) = uVar9;
      local_148._4_4_ = (uint *)0x7ff27d;
      uVar9 = FUN_009b6df0();
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar7 * 4) + 4) = uVar9;
      if (0xf < local_b4) {
        local_148._4_4_ = (uint *)local_c8[0];
                    /* WARNING: Subroutine does not return */
        local_148._0_4_ = &UNK_007ff29e;
        FUN_00aae91b();
      }
      local_c = 0xffffffff;
      local_b4 = 0xf;
      local_b8 = 0;
      local_c8[0] = local_c8[0] & 0xffffff00;
      if (0xf < local_d0) {
        local_148._4_4_ = (uint *)local_e4[0];
                    /* WARNING: Subroutine does not return */
        local_148._0_4_ = &UNK_007ff2d7;
        FUN_00aae91b();
      }
      local_10c = iVar7 + 1;
    } while (local_10c < local_ac);
  }
  ExceptionList = local_14;
  return;
}

