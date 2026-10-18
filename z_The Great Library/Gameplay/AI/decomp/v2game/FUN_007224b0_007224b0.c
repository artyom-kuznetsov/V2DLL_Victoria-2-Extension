// FUN_007224b0 @ 007224b0 body=[[007224b0, 007229fd] [00722a01, 00722a29] [00722a2d, 00722a52] [00722a56, 00722a8b] [00722a8f, 00722bd4] [00722bd8, 00722c1c] [00722c20, 00722e5f] [00722e63, 00722e92] [00722e96, 00722ec0] [00722ec4, 00722eee] [00722ef2, 00722f1c] [00722f20, 00722f4a] [00722f4e, 00722f72] [00722f76, 00722f91] [00722f95, 00722fb0] [00722fb4, 00722fdc] [00722fe0, 00723407]]


/* WARNING: Removing unreachable block (ram,0x00722cab) */

undefined4 FUN_007224b0(undefined4 param_1,int *param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint uVar5;
  char cVar6;
  int iVar7;
  byte *pbVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  int in_ECX;
  char *pcVar13;
  int *piVar14;
  bool bVar15;
  ulonglong uVar16;
  uint auStack_234 [4];
  undefined4 uStack_224;
  uint uStack_220;
  int iStack_218;
  uint auStack_214 [4];
  undefined4 uStack_204;
  uint uStack_200;
  uint uStack_1f8;
  undefined4 uStack_1e8;
  uint uStack_1e4;
  int iStack_1dc;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  int iStack_1c8;
  uint uStack_1c4;
  undefined4 uStack_1b4;
  uint uStack_1b0;
  uint uStack_1a8;
  undefined4 uStack_198;
  uint uStack_194;
  int iStack_18c;
  undefined8 uStack_188;
  undefined4 uStack_180;
  uint uStack_17c;
  undefined4 uStack_16c;
  uint uStack_168;
  undefined1 local_160;
  undefined4 local_150;
  undefined4 local_14c;
  undefined1 local_144;
  undefined4 local_134;
  undefined4 local_130;
  undefined1 local_128;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_10c;
  undefined1 local_108;
  int local_100;
  int iStack_fc;
  uint uStack_e4;
  undefined4 uStack_d4;
  uint uStack_d0;
  uint uStack_c8;
  undefined4 uStack_b8;
  uint uStack_b4;
  uint uStack_ac;
  undefined4 uStack_9c;
  uint uStack_98;
  uint uStack_90;
  undefined4 uStack_80;
  uint uStack_7c;
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
  puStack_10 = &LAB_00b920d7;
  local_14 = ExceptionList;
  local_14c = 0xf;
  local_130 = 0xf;
  local_114 = 0xf;
  local_150 = 0;
  local_160 = 0;
  local_134 = 0;
  local_144 = 0;
  local_118 = 0;
  local_128 = 0;
  local_10c = 0;
  local_108 = 1;
  local_c = 0;
  iVar7 = *(int *)(*(int *)(in_ECX + 0x494) + 4);
  if ((iVar7 != 0) && (*(char *)(iVar7 + 0x67) != '\0')) {
    ExceptionList = &local_14;
    iVar7 = FUN_00476ba0();
    local_c._0_1_ = 1;
    FUN_00408ed0(iVar7);
    FUN_00408ed0(iVar7 + 0x1c);
    FUN_00408ed0(iVar7 + 0x38);
    local_10c = *(undefined4 *)(iVar7 + 0x54);
    local_108 = *(undefined1 *)(iVar7 + 0x58);
    local_c = (uint)local_c._1_3_ << 8;
    FUN_00459820();
    goto LAB_007225cc;
  }
  local_100 = *(int *)(DAT_012588e8 + 0xb5c);
  iVar7 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4);
  ExceptionList = &local_14;
  pbVar8 = (byte *)(**(code **)(*param_2 + 0x44))();
  if (0xf < *(uint *)(pbVar8 + 0x14)) {
    pbVar8 = *(byte **)pbVar8;
  }
  pcVar13 = "goods_need_gov_desc";
  do {
    bVar4 = *pbVar8;
    bVar15 = bVar4 < (byte)*pcVar13;
    if (bVar4 != *pcVar13) {
LAB_00722660:
      iVar9 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
      goto LAB_00722665;
    }
    if (bVar4 == 0) break;
    bVar4 = pbVar8[1];
    bVar15 = bVar4 < (byte)pcVar13[1];
    if (bVar4 != pcVar13[1]) goto LAB_00722660;
    pbVar8 = pbVar8 + 2;
    pcVar13 = pcVar13 + 2;
  } while (bVar4 != 0);
  iVar9 = 0;
LAB_00722665:
  if (iVar9 == 0) {
    if (*(int *)(in_ECX + 0x6c) != 0) {
      uVar10 = (uint)*(byte *)(*(int *)(*(int *)(in_ECX + 0x6c) + 8) + 0xecc + iVar7);
      uVar16 = __allmul(*(undefined4 *)(*(int *)(iVar7 + 0xf0c) + uVar10 * 8),
                        *(undefined4 *)(*(int *)(iVar7 + 0xf0c) + uVar10 * 8 + 4));
      if (((uint)uVar16 >> 0xf != 0 || (uVar16 & 0x7fff00000000) != 0) ||
          (int)((longlong)uVar16 >> 0x2f) != 0) {
        FUN_00988bb0(auStack_214,2);
        local_c._0_1_ = 2;
        uVar11 = FUN_0042c180();
        local_c._0_1_ = 3;
        FUN_00448aa0(uVar11);
        FUN_00408ad0();
        local_c = (uint)local_c._1_3_ << 8;
        FUN_00408ad0();
      }
      puVar1 = (undefined4 *)
               (*(int *)(iVar7 + 0xf64) +
               (uint)*(byte *)(*(int *)(*(int *)(in_ECX + 0x6c) + 8) + 0xf24 + iVar7) * 8);
      uVar16 = __allmul(*puVar1,puVar1[1]);
      if (((uint)uVar16 >> 0xf != 0 || (uVar16 & 0x7fff00000000) != 0) ||
          (int)((longlong)uVar16 >> 0x2f) != 0) {
        FUN_00988bb0(auStack_214,2);
        local_c._0_1_ = 4;
        uVar11 = FUN_0042c180();
        local_c._0_1_ = 5;
        FUN_00448aa0(uVar11);
        FUN_00408ad0();
        local_c = (uint)local_c._1_3_ << 8;
        FUN_00408ad0();
      }
      puVar1 = (undefined4 *)
               (*(int *)(iVar7 + 0x1014) +
               (uint)*(byte *)(*(int *)(*(int *)(in_ECX + 0x6c) + 8) + 0xfd4 + iVar7) * 8);
      uVar16 = __allmul(*puVar1,puVar1[1]);
      if (((uint)uVar16 >> 0xf != 0 || (uVar16 & 0x7fff00000000) != 0) ||
          (int)((longlong)uVar16 >> 0x2f) != 0) {
        FUN_00988bb0(auStack_214,2);
        local_c._0_1_ = 6;
        uVar11 = FUN_0042c180();
        local_c._0_1_ = 7;
        FUN_00448aa0(uVar11);
        FUN_00408ad0();
        local_c = (uint)local_c._1_3_ << 8;
        FUN_00408ad0();
      }
      uVar10 = (uint)*(byte *)(iVar7 + 0xf7c + *(int *)(*(int *)(in_ECX + 0x6c) + 8));
      if (*(int *)(*(int *)(iVar7 + 0xfbc) + uVar10 * 8) != 0 ||
          *(int *)(*(int *)(iVar7 + 0xfbc) + uVar10 * 8 + 4) != 0) {
        FUN_00988bb0(auStack_214,2);
        local_c._0_1_ = 8;
        uVar11 = FUN_0042c180();
        local_c._0_1_ = 9;
        FUN_00448aa0(uVar11);
        FUN_00408ad0();
        local_c = (uint)local_c._1_3_ << 8;
        FUN_00408ad0();
      }
      goto LAB_007225cc;
    }
  }
  else {
    (**(code **)(*param_2 + 0x44))();
    cVar6 = FUN_0040b360();
    if (cVar6 == '\0') {
      (**(code **)(*param_2 + 0x44))();
      cVar6 = FUN_0040b360();
      if (cVar6 == '\0') {
        (**(code **)(*param_2 + 0x44))();
        cVar6 = FUN_0040b360();
        if (cVar6 == '\0') {
          (**(code **)(*param_2 + 0x44))();
          cVar6 = FUN_0040b360();
          if (cVar6 == '\0') {
            (**(code **)(*param_2 + 0x44))();
            cVar6 = FUN_0040b360();
            if (cVar6 == '\0') {
              (**(code **)(*param_2 + 0x44))();
              cVar6 = FUN_0040b360();
              if (cVar6 == '\0') goto LAB_0072333b;
              FUN_009885d0();
              local_c._0_1_ = 0x27;
              FUN_009a8ee0();
              local_c._0_1_ = 0x28;
              iVar7 = FUN_00475500();
              uVar11 = FUN_009a9880((int)*(undefined8 *)(iVar7 + 0x6c),
                                    (int)((ulonglong)*(undefined8 *)(iVar7 + 0x6c) >> 0x20));
              local_c._0_1_ = 0x29;
              FUN_00408ed0(uVar11);
              FUN_00408ad0();
              local_c._0_1_ = 0x27;
              goto LAB_00723321;
            }
          }
          FUN_009885d0();
          local_c._0_1_ = 0x24;
          FUN_009a8ee0();
          local_c._0_1_ = 0x25;
          iVar7 = FUN_00475500();
          uVar11 = FUN_009a9880((int)*(undefined8 *)(iVar7 + 0x6c),
                                (int)((ulonglong)*(undefined8 *)(iVar7 + 0x6c) >> 0x20));
          local_c._0_1_ = 0x26;
          FUN_00408ed0(uVar11);
          FUN_00408ad0();
          local_c._0_1_ = 0x24;
        }
        else {
          cVar6 = (**(code **)(*param_2 + 0xc0))();
          if (cVar6 == '\0') {
            FUN_009885d0();
            local_c._0_1_ = 0x21;
            FUN_009a8ee0();
            local_c._0_1_ = 0x22;
            iVar7 = FUN_00475500();
            uVar11 = FUN_009a9880((int)*(undefined8 *)(iVar7 + 0x6c),
                                  (int)((ulonglong)*(undefined8 *)(iVar7 + 0x6c) >> 0x20));
            local_c._0_1_ = 0x23;
            FUN_00408ed0(uVar11);
            FUN_00408ad0();
            local_c._0_1_ = 0x21;
          }
          else {
            FUN_009885d0();
            local_c._0_1_ = 0x1e;
            FUN_009a8ee0();
            local_c._0_1_ = 0x1f;
            iVar7 = FUN_00475500();
            uVar11 = FUN_009a9880((int)*(undefined8 *)(iVar7 + 0x6c),
                                  (int)((ulonglong)*(undefined8 *)(iVar7 + 0x6c) >> 0x20));
            local_c._0_1_ = 0x20;
            FUN_00408ed0(uVar11);
            FUN_00408ad0();
            local_c._0_1_ = 0x1e;
          }
        }
      }
      else {
        FUN_009885d0();
        local_c._0_1_ = 0x1b;
        FUN_009a8ee0();
        local_c._0_1_ = 0x1c;
        iVar7 = FUN_00475500();
        uVar11 = FUN_009a9880((int)*(undefined8 *)(iVar7 + 0x6c),
                              (int)((ulonglong)*(undefined8 *)(iVar7 + 0x6c) >> 0x20));
        local_c._0_1_ = 0x1d;
        FUN_00408ed0(uVar11);
        FUN_00408ad0();
        local_c._0_1_ = 0x1b;
      }
LAB_00723321:
      FUN_009a9740();
      local_c = (uint)local_c._1_3_ << 8;
      FUN_00408ad0();
    }
    else {
      iStack_1c8 = (**(code **)(*param_2 + 0x4c))();
      iStack_1c8 = iStack_1c8 + -2;
      uStack_1b0 = 0xf;
      uStack_1b4 = 0;
      uStack_1c4 = uStack_1c4 & 0xffffff00;
      FUN_00409350();
      local_c._0_1_ = 10;
      FUN_005659c0();
      local_c._0_1_ = 0xb;
      FUN_00988fa0();
      local_c._0_1_ = 0xc;
      uVar11 = FUN_00988f20();
      local_c._0_1_ = 0xd;
      FUN_00408ed0(uVar11);
      iVar7 = DAT_012588e8;
      if (0xf < uStack_168) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      uStack_168 = 0xf;
      uStack_16c = 0;
      uStack_17c = uStack_17c & 0xffffff00;
      if (0xf < uStack_1e4) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      uStack_1e4 = 0xf;
      uStack_1e8 = 0;
      uStack_1f8 = uStack_1f8 & 0xffffff00;
      if (0xf < uStack_194) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_c._0_1_ = 0;
      uStack_194 = 0xf;
      uStack_198 = 0;
      uStack_1a8 = uStack_1a8 & 0xffffff00;
      if (0xf < uStack_1b0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      uStack_1b0 = 0xf;
      uStack_1b4 = 0;
      uStack_1c4 = uStack_1c4 & 0xffffff00;
      iStack_1dc = 0;
      uStack_1d8 = 0;
      uStack_1d0 = 0;
      local_100 = *(int *)(DAT_012588e8 + 0xbcc) + 0x7d4;
      iStack_fc = *(int *)(DAT_012588e8 + 0xbcc) + 0x814;
      iVar12 = *(int *)(DAT_012588e8 + 0xadc);
      iVar9 = iVar12 + (*(int *)(DAT_012588e8 + 0xae0) - iVar12 >> 2) * 4;
      if (iVar12 != iVar9) {
        FUN_007244b0(iVar12,iVar9,local_100);
      }
      iStack_18c = *(int *)(iVar7 + 0xbcc);
      uStack_1e4 = 0xf;
      uStack_1e8 = 0;
      uStack_1f8 = uStack_1f8 & 0xffffff00;
      FUN_00409350();
      local_c._0_1_ = 0xe;
      FUN_009a8ee0();
      local_c._0_1_ = 0xf;
      iVar7 = FUN_00475500();
      uVar11 = FUN_009a9880((int)*(undefined8 *)(iVar7 + 0x6c),
                            (int)((ulonglong)*(undefined8 *)(iVar7 + 0x6c) >> 0x20));
      local_c._0_1_ = 0x10;
      FUN_00408ed0(uVar11);
      if (0xf < uStack_194) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      uStack_194 = 0xf;
      uStack_198 = 0;
      uStack_1a8 = uStack_1a8 & 0xffffff00;
      local_c._0_1_ = 0xe;
      FUN_009a9740();
      local_c = (uint)local_c._1_3_ << 8;
      if (0xf < uStack_1e4) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      iStack_218 = 0;
      uStack_188 = FUN_00b31c36();
      do {
        iVar7 = (&iStack_1dc)[iStack_218];
        iVar9 = *(int *)(iVar7 + 0x20);
        iVar12 = iVar9 * 0x58 + *(int *)(iStack_18c + 0x7d4);
        iVar9 = iVar9 * 0x58 + *(int *)(iStack_18c + 0x814);
        puVar2 = (uint *)(*(int *)(iVar9 + 0x48) + (uint)*(byte *)(iVar9 + 8 + iStack_1c8) * 8);
        uVar10 = *puVar2;
        puVar3 = (uint *)(*(int *)(iVar12 + 0x48) + (uint)*(byte *)(iVar12 + 8 + iStack_1c8) * 8);
        uVar5 = *puVar3;
        local_100 = uVar5 - uVar10;
        if (uStack_188 < CONCAT44((puVar3[1] - puVar2[1]) - (uint)(uVar5 < uVar10),local_100)) {
          uStack_168 = 0xf;
          uStack_16c = 0;
          uStack_17c = uStack_17c & 0xffffff00;
          FUN_00409350();
          local_c._0_1_ = 0x11;
          uStack_1e4 = 0xf;
          uStack_1e8 = 0;
          uStack_1f8 = uStack_1f8 & 0xffffff00;
          FUN_00409350();
          local_c._0_1_ = 0x12;
          FUN_00988bb0(auStack_234,2);
          local_c._0_1_ = 0x13;
          uStack_180 = FUN_004f97a0();
          pcVar13 = (char *)(iVar7 + 0x1c);
          local_c._0_1_ = 0x14;
          uStack_1b0 = 0xf;
          uStack_1b4 = 0;
          uStack_1c4 = uStack_1c4 & 0xffffff00;
          do {
            cVar6 = *pcVar13;
            pcVar13 = pcVar13 + 1;
          } while (cVar6 != '\0');
          FUN_00409350();
          local_c._0_1_ = 0x15;
          FUN_00988fa0();
          local_c._0_1_ = 0x16;
          FUN_00988f20();
          local_c._0_1_ = 0x17;
          FUN_00988f20();
          local_c._0_1_ = 0x18;
          FUN_00988f20();
          local_c._0_1_ = 0x19;
          uVar11 = FUN_00988f20();
          local_c._0_1_ = 0x1a;
          FUN_00448aa0(uVar11);
          if (0xf < uStack_194) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          uStack_194 = 0xf;
          uStack_198 = 0;
          uStack_1a8 = uStack_1a8 & 0xffffff00;
          if (0xf < uStack_d0) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          uStack_d0 = 0xf;
          uStack_d4 = 0;
          uStack_e4 = uStack_e4 & 0xffffff00;
          if (0xf < uStack_7c) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          uStack_7c = 0xf;
          uStack_80 = 0;
          uStack_90 = uStack_90 & 0xffffff00;
          if (0xf < uStack_b4) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          uStack_b4 = 0xf;
          uStack_b8 = 0;
          uStack_c8 = uStack_c8 & 0xffffff00;
          if (0xf < uStack_98) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          uStack_98 = 0xf;
          uStack_9c = 0;
          uStack_ac = uStack_ac & 0xffffff00;
          if (0xf < uStack_1b0) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          uStack_1b0 = 0xf;
          uStack_1b4 = 0;
          uStack_1c4 = uStack_1c4 & 0xffffff00;
          if (0xf < uStack_200) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          uStack_200 = 0xf;
          uStack_204 = 0;
          auStack_214[0] = auStack_214[0] & 0xffffff00;
          if (0xf < uStack_220) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          uStack_220 = 0xf;
          uStack_224 = 0;
          auStack_234[0] = auStack_234[0] & 0xffffff00;
          if (0xf < uStack_1e4) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_c = (uint)local_c._1_3_ << 8;
          uStack_1e4 = 0xf;
          uStack_1e8 = 0;
          uStack_1f8 = uStack_1f8 & 0xffffff00;
          if (0xf < uStack_168) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
        }
        iStack_218 = iStack_218 + 1;
      } while (iStack_218 < 5);
    }
  }
LAB_0072333b:
  piVar14 = *(int **)(in_ECX + 0x5c);
  while (piVar14 != (int *)0x0) {
    iVar7 = *piVar14;
    piVar14 = (int *)piVar14[2];
    cVar6 = (**(code **)(*(int *)(*(int *)(iVar7 + 4) + 0x18) + 0x94))();
    if (cVar6 != '\0') {
      FUN_0071b840(iVar7);
      FUN_00459820();
      ExceptionList = local_14;
      return param_1;
    }
  }
  piVar14 = *(int **)(in_ECX + 0x308);
  while ((*(int **)(in_ECX + 0x308) <= piVar14 && (piVar14 < *(int **)(in_ECX + 0x30c)))) {
    iVar7 = *piVar14;
    piVar14 = piVar14 + 1;
    cVar6 = (**(code **)(*(int *)(iVar7 + 0x1c) + 0x58))();
    if (cVar6 != '\0') {
      FUN_0071a6f0();
      FUN_00459820();
      ExceptionList = local_14;
      return param_1;
    }
  }
LAB_007225cc:
  FUN_0040c830();
  FUN_00459820();
  ExceptionList = local_14;
  return param_1;
}

