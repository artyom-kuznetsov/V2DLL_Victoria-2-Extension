// FUN_0071b840 @ 0071b840 body=[[0071b840, 0071b911] [0071b915, 0071ba41] [0071ba45, 0071ba75] [0071ba79, 0071ba99] [0071ba9d, 0071bc7a] [0071bc7e, 0071bca8] [0071bcac, 0071bcd1] [0071bcd5, 0071bcfa] [0071bcfe, 0071bd23] [0071bd27, 0071bd4c] [0071bd50, 0071bd75] [0071bd79, 0071bd98] [0071bd9c, 0071bdb8] [0071bdbc, 0071bdde] [0071bde2, 0071becf] [0071bed3, 0071bf01] [0071bf05, 0071bf97] [0071bf9b, 0071bfca] [0071bfd3, 0071c5dc]]


/* WARNING: Removing unreachable block (ram,0x0071bb10) */
/* WARNING: Removing unreachable block (ram,0x0071c04b) */

undefined1 * FUN_0071b840(int *param_1,undefined1 *param_2,int *param_3)

{
  undefined4 *puVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  byte *pbVar7;
  int iVar8;
  uint *puVar9;
  int iVar10;
  uint *puVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int iVar14;
  char *pcVar15;
  bool bVar16;
  longlong lVar17;
  uint *puStack_198;
  uint *puStack_194;
  uint local_184;
  uint local_170;
  uint local_168 [4];
  undefined4 local_158;
  uint local_154;
  uint local_14c;
  undefined4 local_13c;
  uint local_138;
  uint local_130;
  undefined4 local_120;
  uint local_11c;
  uint local_114;
  undefined4 local_104;
  uint local_100;
  uint local_f8 [4];
  undefined4 local_e8;
  uint local_e4;
  int local_dc;
  undefined4 local_d8;
  uint local_d4 [2];
  uint local_cc [9];
  undefined4 local_a8;
  uint local_a4;
  uint local_9c [4];
  undefined4 local_8c;
  uint local_88;
  uint local_78;
  int local_74;
  uint *local_70;
  uint *puStack_6c;
  undefined8 local_60;
  uint local_58 [4];
  undefined4 local_48;
  uint local_44;
  uint local_3c [4];
  undefined4 local_2c;
  uint local_28;
  uint *local_20;
  undefined1 *local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00b8a95d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_2 + 0x14) = 0xf;
  *(undefined4 *)(param_2 + 0x10) = 0;
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
  local_18 = 1;
  puStack_194 = (uint *)0x71b8a5;
  pbVar7 = (byte *)(**(code **)(*param_3 + 0x44))();
  if (0xf < *(uint *)(pbVar7 + 0x14)) {
    pbVar7 = *(byte **)pbVar7;
  }
  pcVar15 = "goods_type";
  do {
    bVar2 = *pbVar7;
    bVar16 = bVar2 < (byte)*pcVar15;
    if (bVar2 != *pcVar15) {
LAB_0071b8d2:
      iVar8 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
      goto LAB_0071b8d7;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar7[1];
    bVar16 = bVar2 < (byte)pcVar15[1];
    if (bVar2 != pcVar15[1]) goto LAB_0071b8d2;
    pbVar7 = pbVar7 + 2;
    pcVar15 = pcVar15 + 2;
  } while (bVar2 != 0);
  iVar8 = 0;
LAB_0071b8d7:
  if (iVar8 == 0) {
    puStack_198 = (uint *)*param_1;
    puStack_194 = local_3c;
    FUN_005659c0();
    puStack_194 = (uint *)0xffffffff;
    puStack_198 = (uint *)0x0;
    local_8 = 1;
    FUN_00408ed0();
    iVar8 = DAT_012588e8;
    local_8 = local_8 & 0xffffff00;
    if (0xf < local_28) {
      puStack_194 = (uint *)local_3c[0];
                    /* WARNING: Subroutine does not return */
      puStack_198 = (uint *)&UNK_0071b912;
      FUN_00aae91b();
    }
    iVar10 = *(int *)(*param_1 + 8);
    local_28 = 0xf;
    local_2c = 0;
    local_3c[0] = local_3c[0] & 0xffffff00;
    local_cc[0] = 0;
    local_cc[1] = 0;
    local_cc[2] = 0;
    local_cc[3] = 0;
    local_cc[4] = 0;
    local_70 = (uint *)(*(int *)(DAT_012588e8 + 0xbcc) + 0x7d4);
    puStack_198 = (uint *)(*(int *)(DAT_012588e8 + 0xbcc) + 0x814);
    iVar14 = *(int *)(DAT_012588e8 + 0xadc);
    puStack_6c = puStack_198;
    if (iVar14 != iVar14 + (*(int *)(DAT_012588e8 + 0xae0) - iVar14 >> 2) * 4) {
      puStack_194 = (uint *)iVar10;
      FUN_007244b0(iVar14);
    }
    local_dc = *(int *)(iVar8 + 0xbcc);
    puStack_194 = (uint *)0x13;
    puStack_198 = (uint *)0xe11524;
    local_88 = 0xf;
    local_8c = 0;
    local_9c[0] = local_9c[0] & 0xffffff00;
    FUN_00409350();
    puStack_194 = local_9c;
    puStack_198 = &local_78;
    local_8 = 2;
    FUN_009a8ee0();
    local_8._0_1_ = 3;
    puStack_194 = (uint *)0x71ba00;
    iVar8 = FUN_00475500();
    puStack_198 = (uint *)*(undefined8 *)(iVar8 + 0x74);
    puStack_194 = (uint *)((ulonglong)*(undefined8 *)(iVar8 + 0x74) >> 0x20);
    FUN_009a9880();
    puStack_194 = (uint *)0xffffffff;
    puStack_198 = (uint *)0x0;
    local_8._0_1_ = 4;
    FUN_00408ed0();
    if (0xf < local_28) {
      puStack_194 = (uint *)local_3c[0];
                    /* WARNING: Subroutine does not return */
      puStack_198 = (uint *)&UNK_0071ba42;
      FUN_00aae91b();
    }
    local_28 = 0xf;
    local_2c = 0;
    local_3c[0] = local_3c[0] & 0xffffff00;
    local_8._0_1_ = 5;
    puStack_194 = (uint *)0x71ba5e;
    FUN_009adb70();
    if (local_74 != 0) {
      puStack_194 = (uint *)0x71ba6d;
      FUN_009e6a80();
      puStack_194 = (uint *)local_74;
                    /* WARNING: Subroutine does not return */
      puStack_198 = (uint *)&UNK_0071ba76;
      FUN_00aae91b();
    }
    local_8 = (uint)local_8._1_3_ << 8;
    local_74 = 0;
    local_70 = (uint *)0x0;
    puStack_6c = (uint *)0x0;
    if (0xf < local_88) {
      puStack_194 = (uint *)local_9c[0];
                    /* WARNING: Subroutine does not return */
      puStack_198 = (uint *)&UNK_0071ba9a;
      FUN_00aae91b();
    }
    param_3 = (int *)0x0;
    puStack_194 = (uint *)0x71baab;
    local_60 = FUN_00b31c36();
    do {
      uVar3 = local_cc[(int)param_3];
      iVar8 = *(int *)(uVar3 + 0x20) * 0x58 + *(int *)(local_dc + 0x7d4);
      iVar14 = *(int *)(uVar3 + 0x20) * 0x58 + *(int *)(local_dc + 0x814);
      puVar9 = (uint *)(*(int *)(iVar14 + 0x48) + (uint)*(byte *)(iVar14 + 8 + iVar10) * 8);
      uVar4 = *puVar9;
      puVar11 = (uint *)(*(int *)(iVar8 + 0x48) + (uint)*(byte *)(iVar8 + 8 + iVar10) * 8);
      uVar5 = *puVar11;
      local_70 = (uint *)(uVar5 - uVar4);
      iVar8 = (puVar11[1] - puVar9[1]) - (uint)(uVar5 < uVar4);
      if (local_60 < CONCAT44(iVar8,local_70)) {
        puStack_194 = (uint *)0x4;
        puStack_198 = (uint *)&DAT_00dfd504;
        local_28 = 0xf;
        local_2c = 0;
        local_3c[0] = local_3c[0] & 0xffffff00;
        FUN_00409350();
        local_8 = 6;
        puStack_194 = (uint *)0x3;
        puStack_198 = (uint *)&DAT_00df7f68;
        local_88 = 0xf;
        local_8c = 0;
        local_9c[0] = local_9c[0] & 0xffffff00;
        FUN_00409350();
        local_1c = (undefined1 *)&puStack_198;
        local_8._0_1_ = 7;
        puStack_198 = local_70;
        puStack_194 = (uint *)iVar8;
        local_1c = (undefined1 *)FUN_00988bb0();
        local_8._0_1_ = 8;
        puStack_194 = (uint *)0x71bb99;
        local_d8 = FUN_004f97a0();
        puStack_198 = (uint *)(uVar3 + 0x1c);
        local_8._0_1_ = 9;
        local_e4 = 0xf;
        local_e8 = 0;
        local_f8[0] = local_f8[0] & 0xffffff00;
        puStack_194 = puStack_198;
        do {
          uVar4 = *puStack_194;
          puStack_194 = (uint *)((int)puStack_194 + 1);
        } while ((char)uVar4 != '\0');
        puStack_194 = (uint *)((int)puStack_194 - (uVar3 + 0x1d));
        FUN_00409350();
        puStack_194 = local_f8;
        local_8._0_1_ = 10;
        puStack_198 = (uint *)0x71bbf2;
        FUN_00988fa0();
        puStack_194 = local_9c;
        local_8._0_1_ = 0xb;
        puStack_198 = (uint *)0x71bc0d;
        FUN_00988f20();
        puStack_194 = (uint *)local_d8;
        local_8._0_1_ = 0xc;
        puStack_198 = (uint *)0x71bc25;
        FUN_00988f20();
        puStack_194 = local_3c;
        local_8._0_1_ = 0xd;
        puStack_198 = (uint *)0x71bc3a;
        FUN_00988f20();
        puStack_194 = (uint *)local_1c;
        local_8._0_1_ = 0xe;
        puStack_198 = (uint *)0x71bc4f;
        FUN_00988f20();
        puStack_194 = (uint *)0xffffffff;
        local_8._0_1_ = 0xf;
        puStack_198 = (uint *)0x0;
        FUN_00448aa0();
        if (0xf < local_154) {
          puStack_194 = (uint *)local_168[0];
                    /* WARNING: Subroutine does not return */
          puStack_198 = (uint *)&UNK_0071bc7b;
          FUN_00aae91b();
        }
        local_154 = 0xf;
        local_158 = 0;
        local_168[0] = local_168[0] & 0xffffff00;
        if (0xf < local_138) {
          puStack_194 = (uint *)local_14c;
                    /* WARNING: Subroutine does not return */
          puStack_198 = (uint *)&UNK_0071bca9;
          FUN_00aae91b();
        }
        local_138 = 0xf;
        local_13c = 0;
        local_14c = local_14c & 0xffffff00;
        if (0xf < local_170) {
          puStack_194 = (uint *)local_184;
                    /* WARNING: Subroutine does not return */
          puStack_198 = (uint *)&UNK_0071bcd2;
          FUN_00aae91b();
        }
        local_170 = 0xf;
        local_184 = local_184 & 0xffffff00;
        if (0xf < local_11c) {
          puStack_194 = (uint *)local_130;
                    /* WARNING: Subroutine does not return */
          puStack_198 = (uint *)&UNK_0071bcfb;
          FUN_00aae91b();
        }
        local_11c = 0xf;
        local_120 = 0;
        local_130 = local_130 & 0xffffff00;
        if (0xf < local_100) {
          puStack_194 = (uint *)local_114;
                    /* WARNING: Subroutine does not return */
          puStack_198 = (uint *)&UNK_0071bd24;
          FUN_00aae91b();
        }
        local_100 = 0xf;
        local_104 = 0;
        local_114 = local_114 & 0xffffff00;
        if (0xf < local_e4) {
          puStack_194 = (uint *)local_f8[0];
                    /* WARNING: Subroutine does not return */
          puStack_198 = (uint *)&UNK_0071bd4d;
          FUN_00aae91b();
        }
        local_e4 = 0xf;
        local_e8 = 0;
        local_f8[0] = local_f8[0] & 0xffffff00;
        if (0xf < local_a4) {
          puStack_194 = (uint *)local_cc[5];
                    /* WARNING: Subroutine does not return */
          puStack_198 = (uint *)&UNK_0071bd76;
          FUN_00aae91b();
        }
        local_a4 = 0xf;
        local_a8 = 0;
        local_cc[5] = local_cc[5] & 0xffffff00;
        if (0xf < local_44) {
          puStack_194 = (uint *)local_58[0];
                    /* WARNING: Subroutine does not return */
          puStack_198 = (uint *)&UNK_0071bd99;
          FUN_00aae91b();
        }
        local_44 = 0xf;
        local_48 = 0;
        local_58[0] = local_58[0] & 0xffffff00;
        if (0xf < local_88) {
          puStack_194 = (uint *)local_9c[0];
                    /* WARNING: Subroutine does not return */
          puStack_198 = (uint *)&UNK_0071bdb9;
          FUN_00aae91b();
        }
        local_8 = (uint)local_8._1_3_ << 8;
        local_88 = 0xf;
        local_8c = 0;
        local_9c[0] = local_9c[0] & 0xffffff00;
        if (0xf < local_28) {
          puStack_194 = (uint *)local_3c[0];
                    /* WARNING: Subroutine does not return */
          puStack_198 = (uint *)&UNK_0071bddf;
          FUN_00aae91b();
        }
      }
      param_3 = (int *)((int)param_3 + 1);
    } while ((int)param_3 < 5);
  }
  else {
    puStack_194 = (uint *)0x71be01;
    pbVar7 = (byte *)(**(code **)(*param_3 + 0x44))();
    if (0xf < *(uint *)(pbVar7 + 0x14)) {
      pbVar7 = *(byte **)pbVar7;
    }
    pcVar15 = "selling_indicator";
    do {
      bVar2 = *pbVar7;
      bVar16 = bVar2 < (byte)*pcVar15;
      if (bVar2 != *pcVar15) {
LAB_0071be30:
        iVar8 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
        goto LAB_0071be35;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar7[1];
      bVar16 = bVar2 < (byte)pcVar15[1];
      if (bVar2 != pcVar15[1]) goto LAB_0071be30;
      pbVar7 = pbVar7 + 2;
      pcVar15 = pcVar15 + 2;
    } while (bVar2 != 0);
    iVar8 = 0;
LAB_0071be35:
    if (iVar8 == 0) {
      puStack_194 = (uint *)0x71be47;
      iVar8 = (**(code **)(*param_3 + 0x4c))();
      if (iVar8 == 3) {
        puStack_194 = (uint *)0xd;
        puStack_198 = (uint *)0xe11538;
        local_28 = 0xf;
        local_2c = 0;
        local_3c[0] = local_3c[0] & 0xffffff00;
        FUN_00409350();
        puStack_194 = local_3c;
        puStack_198 = local_cc;
        local_8 = 0x10;
        FUN_009a8ee0();
        local_8._0_1_ = 0x11;
        puStack_194 = (uint *)0x71be8f;
        iVar8 = FUN_00475500();
        puStack_198 = (uint *)*(undefined8 *)(iVar8 + 0x74);
        puStack_194 = (uint *)((ulonglong)*(undefined8 *)(iVar8 + 0x74) >> 0x20);
        FUN_009a9880();
        puStack_194 = (uint *)0xffffffff;
        puStack_198 = (uint *)0x0;
        local_8._0_1_ = 0x12;
        FUN_00408ed0();
        if (0xf < local_44) {
          puStack_194 = (uint *)local_58[0];
                    /* WARNING: Subroutine does not return */
          puStack_198 = (uint *)&UNK_0071bed0;
          FUN_00aae91b();
        }
        puStack_194 = local_cc;
        local_44 = 0xf;
        local_48 = 0;
        local_58[0] = local_58[0] & 0xffffff00;
        local_8._0_1_ = 0x10;
        puStack_198 = (uint *)0x71bef0;
        FUN_009a9740();
        local_8 = (uint)local_8._1_3_ << 8;
        if (0xf < local_28) {
          puStack_194 = (uint *)local_3c[0];
                    /* WARNING: Subroutine does not return */
          puStack_198 = (uint *)&UNK_0071bf02;
          FUN_00aae91b();
        }
      }
      puStack_194 = (uint *)0x71bf0f;
      iVar8 = (**(code **)(*param_3 + 0x4c))();
      if (iVar8 == 2) {
        puStack_194 = (uint *)0xc;
        puStack_198 = (uint *)0xe11548;
        local_28 = 0xf;
        local_2c = 0;
        local_3c[0] = local_3c[0] & 0xffffff00;
        FUN_00409350();
        puStack_194 = local_3c;
        puStack_198 = local_cc;
        local_8 = 0x13;
        FUN_009a8ee0();
        local_8._0_1_ = 0x14;
        puStack_194 = (uint *)0x71bf57;
        iVar8 = FUN_00475500();
        puStack_198 = (uint *)*(undefined8 *)(iVar8 + 0x74);
        puStack_194 = (uint *)((ulonglong)*(undefined8 *)(iVar8 + 0x74) >> 0x20);
        FUN_009a9880();
        puStack_194 = (uint *)0xffffffff;
        puStack_198 = (uint *)0x0;
        local_8._0_1_ = 0x15;
        FUN_00408ed0();
        if (0xf < local_44) {
          puStack_194 = (uint *)local_58[0];
                    /* WARNING: Subroutine does not return */
          puStack_198 = (uint *)&UNK_0071bf98;
          FUN_00aae91b();
        }
        puStack_194 = local_cc;
        local_44 = 0xf;
        local_48 = 0;
        local_58[0] = local_58[0] & 0xffffff00;
        local_8 = CONCAT31(local_8._1_3_,0x13);
        puStack_198 = (uint *)0x71bfb8;
        FUN_009a9740();
        if (0xf < local_28) {
          puStack_194 = (uint *)local_3c[0];
                    /* WARNING: Subroutine does not return */
          puStack_198 = (uint *)&UNK_0071bfcb;
          FUN_00aae91b();
        }
      }
    }
    else {
      puStack_194 = (uint *)0x71bfdf;
      (**(code **)(*param_3 + 0x44))();
      puStack_194 = (uint *)0x71bfe9;
      cVar6 = FUN_0040b360();
      if (cVar6 == '\0') {
        puStack_194 = (uint *)0x71c1b2;
        (**(code **)(*param_3 + 0x44))();
        puStack_194 = (uint *)0x71c1bc;
        cVar6 = FUN_0040b360();
        if (cVar6 != '\0') {
          iVar8 = *(int *)(DAT_012588e8 + 0xbcc);
          iVar10 = *(int *)(DAT_012588e8 + 0xb60) * 0x58 + *(int *)(iVar8 + 0x814);
          puVar9 = (uint *)(*(int *)(iVar10 + 0x48) +
                           (uint)*(byte *)(*(int *)(*param_1 + 8) + 8 + iVar10) * 8);
          local_60._0_4_ = *puVar9;
          local_60._4_4_ = puVar9[1];
          puVar1 = (undefined4 *)
                   (*(int *)(iVar8 + 0x50) +
                   (uint)*(byte *)(*(int *)(*param_1 + 8) + 0x10 + iVar8) * 8);
          puStack_198 = (uint *)*puVar1;
          puStack_194 = (uint *)puVar1[1];
          FUN_006e2150(*param_1);
          puVar11 = (uint *)FUN_004730d0();
          local_20 = (uint *)(*puVar11 - (uint)local_60);
          puVar9 = (uint *)(*(int *)(iVar8 + 0x270) +
                           (uint)*(byte *)(*(int *)(*param_1 + 8) + 0x230 + iVar8) * 8);
          local_1c = (undefined1 *)
                     ((puVar11[1] - local_60._4_4_) - (uint)(*puVar11 < (uint)local_60));
          uVar3 = puVar9[1];
          if (((int)uVar3 < (int)local_1c) ||
             (((int)uVar3 <= (int)local_1c && ((uint *)*puVar9 <= local_20)))) {
            puStack_194 = (uint *)0x71c2f2;
            FUN_009885d0();
            puStack_198 = local_cc;
            local_8 = 0x20;
            local_18 = 0x11;
            puStack_194 = local_58;
            FUN_009a8ee0();
            local_8 = 0x21;
            local_18 = 0x31;
            puStack_194 = (uint *)0x71c325;
            iVar10 = FUN_00475500();
            puStack_198 = (uint *)*(undefined8 *)(iVar10 + 0x74);
            puStack_194 = (uint *)((ulonglong)*(undefined8 *)(iVar10 + 0x74) >> 0x20);
            FUN_009a9880();
            local_8 = 0x22;
            local_18 = 0x71;
          }
          else {
            puStack_194 = (uint *)0x71c27f;
            FUN_009885d0();
            puStack_198 = &local_78;
            local_8 = 0x1d;
            local_18 = 3;
            puStack_194 = local_cc + 5;
            FUN_009a8ee0();
            local_8 = 0x1e;
            local_18 = 7;
            puStack_194 = (uint *)0x71c2af;
            iVar10 = FUN_00475500();
            puStack_198 = (uint *)*(undefined8 *)(iVar10 + 0x74);
            puStack_194 = (uint *)((ulonglong)*(undefined8 *)(iVar10 + 0x74) >> 0x20);
            FUN_009a9880();
            local_8 = 0x1f;
            local_18 = 0xf;
          }
          puStack_194 = (uint *)0xffffffff;
          puStack_198 = (uint *)0x0;
          FUN_00408ed0();
          if ((local_18 & 0x40) != 0) {
            local_18 = local_18 & 0xffffffbf;
            puStack_194 = (uint *)0x71c37a;
            FUN_00408ad0();
          }
          local_8 = 0x20;
          if ((local_18 & 0x20) != 0) {
            local_18 = local_18 & 0xffffffdf;
            puStack_194 = local_cc;
            puStack_198 = (uint *)0x71c397;
            FUN_009a9740();
          }
          if ((local_18 & 0x10) != 0) {
            local_18 = local_18 & 0xffffffef;
            puStack_194 = (uint *)0x71c3a9;
            FUN_00408ad0();
          }
          if ((local_18 & 8) != 0) {
            local_18 = local_18 & 0xfffffff7;
            puStack_194 = (uint *)0x71c3be;
            FUN_00408ad0();
          }
          local_8 = 0x1d;
          if ((local_18 & 4) != 0) {
            local_18 = local_18 & 0xfffffffb;
            puStack_194 = &local_78;
            puStack_198 = (uint *)0x71c3d8;
            FUN_009a9740();
          }
          local_8 = 0;
          if ((local_18 & 2) != 0) {
            local_18 = local_18 & 0xfffffffd;
            puStack_194 = (uint *)0x71c3f0;
            FUN_00408ad0();
          }
          puStack_194 = (uint *)0x71c400;
          FUN_009885d0();
          local_8 = 0x23;
          puStack_194 = (uint *)0x71c414;
          FUN_009885d0();
          local_8._0_1_ = 0x24;
          FUN_006e2150();
          puStack_194 = (uint *)FUN_00988bb0();
          puStack_198 = local_d4;
          local_8._0_1_ = 0x25;
          uVar12 = FUN_0042c180();
          local_8._0_1_ = 0x26;
          puVar1 = (undefined4 *)
                   (*(int *)(iVar8 + 0x270) +
                   (uint)*(byte *)(*(int *)(*param_1 + 8) + 0x230 + iVar8) * 8);
          puStack_198 = (uint *)*puVar1;
          puStack_194 = (uint *)puVar1[1];
          puStack_194 = (uint *)FUN_00988bb0();
          puStack_198 = local_9c;
          local_8._0_1_ = 0x27;
          uVar13 = FUN_0042c180();
          local_8._0_1_ = 0x28;
          puStack_198 = local_20;
          puStack_194 = (uint *)local_1c;
          puStack_194 = (uint *)FUN_00988bb0();
          puStack_198 = local_168;
          local_8._0_1_ = 0x29;
          FUN_0042c180();
          local_8._0_1_ = 0x2a;
          puStack_194 = local_58;
          puStack_198 = (uint *)0x71c4fc;
          FUN_00988f20();
          local_8._0_1_ = 0x2b;
          puStack_198 = (uint *)0x71c50e;
          puStack_194 = (uint *)uVar13;
          FUN_00988f20();
          puStack_194 = local_cc + 5;
          local_8._0_1_ = 0x2c;
          puStack_198 = (uint *)0x71c526;
          FUN_00988f20();
          local_8._0_1_ = 0x2d;
          puStack_198 = (uint *)0x71c53b;
          puStack_194 = (uint *)uVar12;
          FUN_00988f20();
          puStack_194 = (uint *)0xffffffff;
          local_8 = CONCAT31(local_8._1_3_,0x2e);
          puStack_198 = (uint *)0x0;
          FUN_00408ed0();
          puStack_194 = (uint *)0x71c555;
          FUN_00408ad0();
          puStack_194 = (uint *)0x71c560;
          FUN_00408ad0();
          puStack_194 = (uint *)0x71c56b;
          FUN_00408ad0();
          puStack_194 = (uint *)0x71c576;
          FUN_00408ad0();
          puStack_194 = (uint *)0x71c581;
          FUN_00408ad0();
          puStack_194 = (uint *)0x71c589;
          FUN_00408ad0();
          puStack_194 = (uint *)0x71c594;
          FUN_00408ad0();
          puStack_194 = (uint *)0x71c59f;
          FUN_00408ad0();
          puStack_194 = (uint *)0x71c5aa;
          FUN_00408ad0();
          puStack_194 = (uint *)0x71c5b2;
          FUN_00408ad0();
          puStack_194 = (uint *)0x71c5ba;
          FUN_00408ad0();
          puStack_194 = (uint *)0x71c5c5;
          FUN_00408ad0();
        }
      }
      else {
        iVar8 = *(int *)(DAT_012588e8 + 0xbcc);
        puVar9 = (uint *)(*(int *)(iVar8 + 800) +
                         (uint)*(byte *)(iVar8 + 0x2e0 + *(int *)(*param_1 + 8)) * 8);
        uVar3 = *puVar9;
        puVar11 = (uint *)(*(int *)(iVar8 + 0x2c8) +
                          (uint)*(byte *)(iVar8 + 0x288 + *(int *)(*param_1 + 8)) * 8);
        uVar4 = *puVar11;
        local_20 = (uint *)(uVar4 - uVar3);
        iVar8 = (puVar11[1] - puVar9[1]) - (uint)(uVar4 < uVar3);
        puStack_194 = (uint *)0x71c045;
        local_1c = (undefined1 *)iVar8;
        lVar17 = FUN_00b31c36();
        if (lVar17 < CONCAT44(iVar8,local_20)) {
          puStack_198 = local_20;
          puStack_194 = (uint *)iVar8;
          puStack_194 = (uint *)FUN_00988bb0();
          puStack_198 = local_58;
          local_8 = 0x16;
          FUN_0042c180();
          local_8 = CONCAT31(local_8._1_3_,0x17);
        }
        else {
          puStack_198 = (uint *)0xd2f1a9fc;
          puStack_194 = (uint *)0xbf50624d;
          puVar9 = (uint *)FUN_0048b5d0();
          if (((int)puVar9[1] < (int)local_1c) ||
             (((int)puVar9[1] <= (int)local_1c && ((uint *)*puVar9 <= local_20)))) {
            puStack_194 = (uint *)0x71c12e;
            FUN_009885d0();
            puStack_198 = local_cc;
            local_8 = 0x1a;
            puStack_194 = local_58;
            FUN_009a8ee0();
            local_8._0_1_ = 0x1b;
            puStack_194 = (uint *)0x71c150;
            iVar8 = FUN_00475500();
            puStack_198 = (uint *)*(undefined8 *)(iVar8 + 0x74);
            puStack_194 = (uint *)((ulonglong)*(undefined8 *)(iVar8 + 0x74) >> 0x20);
            FUN_009a9880();
            puStack_194 = (uint *)0xffffffff;
            puStack_198 = (uint *)0x0;
            local_8._0_1_ = 0x1c;
            FUN_00408ed0();
            puStack_194 = (uint *)0x71c18c;
            FUN_00408ad0();
            puStack_194 = local_cc;
            local_8 = CONCAT31(local_8._1_3_,0x1a);
            puStack_198 = (uint *)0x71c19c;
            FUN_009a9740();
            puStack_194 = (uint *)0x71c1a4;
            FUN_00408ad0();
            ExceptionList = local_10;
            return param_2;
          }
          puStack_198 = local_20;
          puStack_194 = (uint *)local_1c;
          puStack_194 = (uint *)FUN_00988bb0();
          puStack_198 = local_58;
          local_8 = 0x18;
          FUN_0042c180();
          local_8 = CONCAT31(local_8._1_3_,0x19);
        }
        puStack_194 = (uint *)0xffffffff;
        puStack_198 = (uint *)0x0;
        FUN_00408ed0();
        puStack_194 = (uint *)0x71c111;
        FUN_00408ad0();
        puStack_194 = (uint *)0x71c11c;
        FUN_00408ad0();
      }
    }
  }
  ExceptionList = local_10;
  return param_2;
}

