// FUN_0078ccb0 @ 0078ccb0 body=[[0078ccb0, 0078cd2c] [0078cd30, 0078cefb] [0078ceff, 0078cf2a] [0078cf2e, 0078cf54] [0078cf58, 0078cf7e] [0078cf82, 0078cfa8] [0078cfac, 0078cfcc] [0078cfd0, 0078cfe7] [0078cfeb, 0078d008] [0078d00c, 0078d02c] [0078d030, 0078d07c] [0078d080, 0078d0da] [0078d0de, 0078d0f9] [0078d0fd, 0078d113] [0078d117, 0078d12b] [0078d134, 0078d14c] [0078d150, 0078d1bf] [0078d1c3, 0078d257] [0078d25b, 0078d27c] [0078d280, 0078d390] [0078d394, 0078d435] [0078d439, 0078d44f] [0078d453, 0078d469] [0078d46d, 0078d48a] [0078d48e, 0078d4db] [0078d4df, 0078d644] [0078d648, 0078d662] [0078d666, 0078d675] [0078d679, 0078d6c1] [0078d6ca, 0078d8a1] [0078d8a5, 0078d8c4] [0078d8c8, 0078d8e8] [0078d8ec, 0078d915] [0078d919, 0078d93c] [0078d940, 0078d95d] [0078d961, 0078d977] [0078d97b, 0078ded0]]


undefined1 * FUN_0078ccb0(undefined1 *param_1,int *param_2)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  char *pcVar12;
  bool bVar13;
  undefined8 uVar14;
  int local_1b0;
  undefined1 local_1a0 [72];
  int local_158;
  undefined4 local_154;
  undefined4 local_150;
  uint local_148;
  undefined4 local_138;
  uint local_134;
  uint local_12c;
  undefined4 local_11c;
  uint local_118;
  uint local_110;
  undefined4 local_100;
  uint local_fc;
  undefined4 local_f4;
  uint local_f0;
  undefined4 local_e0;
  uint local_dc;
  char local_d4 [4];
  uint local_d0;
  undefined4 local_c0;
  uint local_bc;
  uint local_b4;
  int local_a8;
  undefined4 local_a4;
  uint local_a0;
  uint local_98;
  undefined4 local_88;
  uint local_84;
  uint local_7c [4];
  undefined4 local_6c;
  uint local_68;
  int local_60;
  undefined4 local_5c;
  int local_58;
  uint local_54;
  undefined4 local_44;
  uint local_40;
  uint local_38 [4];
  undefined4 local_28;
  uint local_24;
  undefined8 local_1c;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00b896f6;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x30) = 0xf;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0xf;
  *(undefined4 *)(param_1 + 0x48) = 0;
  param_1[0x38] = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  param_1[0x58] = 1;
  local_8 = 0;
  local_f4 = 1;
  pbVar3 = (byte *)(**(code **)(*param_2 + 0x44))();
  if (0xf < *(uint *)(pbVar3 + 0x14)) {
    pbVar3 = *(byte **)pbVar3;
  }
  pcVar12 = "unitstatus_dugin";
  do {
    bVar1 = *pbVar3;
    bVar13 = bVar1 < (byte)*pcVar12;
    if (bVar1 != *pcVar12) {
LAB_0078cd50:
      iVar4 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
      goto LAB_0078cd55;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar13 = bVar1 < (byte)pcVar12[1];
    if (bVar1 != pcVar12[1]) goto LAB_0078cd50;
    pbVar3 = pbVar3 + 2;
    pcVar12 = pcVar12 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_0078cd55:
  if (iVar4 == 0) {
    iVar4 = *(int *)(local_14 + 0x28);
    local_1c._0_4_ = *(undefined4 *)(iVar4 + 0xc0);
    local_58 = *(int *)(iVar4 + 0x184);
    pcVar12 = &DAT_00df8518;
    if (local_58 <
        *(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar4 + 0xc4) * 4) + 0xbcc)
                + 0x1c)) {
      pcVar12 = &DAT_00df963c;
    }
    local_84 = 0xf;
    local_88 = 0;
    local_98 = local_98 & 0xffffff00;
    do {
      cVar2 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar2 != '\0');
    FUN_00409350();
    local_8 = 1;
    local_40 = 0xf;
    local_44 = 0;
    local_54 = local_54 & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 2;
    local_a0 = 0xf;
    local_a4 = 0;
    local_b4 = local_b4 & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 3;
    FUN_00988a50();
    local_8._0_1_ = 4;
    FUN_00988f20();
    local_8._0_1_ = 5;
    FUN_00988f20();
    local_1c._4_4_ = &stack0xfffffdf4;
    local_8._0_1_ = 6;
    FUN_00988a50();
    local_8._0_1_ = 7;
    FUN_00988f20();
    local_8._0_1_ = 8;
    FUN_00988f20();
    local_8._0_1_ = 9;
    FUN_0043ec10();
    local_8._0_1_ = 10;
    FUN_00408ed0();
    if (0xf < local_118) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_118 = 0xf;
    local_11c = 0;
    local_12c = local_12c & 0xffffff00;
    if (0xf < local_134) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_134 = 0xf;
    local_138 = 0;
    local_148 = local_148 & 0xffffff00;
    if (0xf < local_fc) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_fc = 0xf;
    local_100 = 0;
    local_110 = local_110 & 0xffffff00;
    if (0xf < local_dc) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_dc = 0xf;
    local_e0 = 0;
    local_f0 = local_f0 & 0xffffff00;
    if (0xf < local_bc) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_bc = 0xf;
    local_c0 = 0;
    local_d0 = local_d0 & 0xffffff00;
    if (0xf < local_68) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_68 = 0xf;
    local_6c = 0;
    local_7c[0] = local_7c[0] & 0xffffff00;
    if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_24 = 0xf;
    local_28 = 0;
    local_38[0] = local_38[0] & 0xffffff00;
    if (0xf < local_a0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_a0 = 0xf;
    local_a4 = 0;
    local_b4 = local_b4 & 0xffffff00;
    if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_40 = 0xf;
    local_44 = 0;
    local_54 = local_54 & 0xffffff00;
    local_8._0_1_ = 0xb;
    pcVar12 = __itoa(**(int **)(DAT_012586dc + 0x20) / 1000,local_d4,10);
    do {
      cVar2 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar2 != '\0');
    FUN_00409350();
    local_8._0_1_ = 0xc;
    FUN_0079e340();
    local_8._0_1_ = 0xd;
    FUN_00988fa0();
    local_8 = CONCAT31(local_8._1_3_,0xe);
    FUN_00448aa0();
    if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_24 = 0xf;
    local_28 = 0;
    local_38[0] = local_38[0] & 0xffffff00;
    if (0xf < local_68) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_68 = 0xf;
    local_6c = 0;
    local_7c[0] = local_7c[0] & 0xffffff00;
    if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_84) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  else {
    pbVar3 = (byte *)(**(code **)(*param_2 + 0x44))();
    if (0xf < *(uint *)(pbVar3 + 0x14)) {
      pbVar3 = *(byte **)pbVar3;
    }
    pcVar12 = "supply_status";
    do {
      bVar1 = *pbVar3;
      bVar13 = bVar1 < (byte)*pcVar12;
      if (bVar1 != *pcVar12) {
LAB_0078d170:
        iVar4 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
        goto LAB_0078d175;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar13 = bVar1 < (byte)pcVar12[1];
      if (bVar1 != pcVar12[1]) goto LAB_0078d170;
      pbVar3 = pbVar3 + 2;
      pcVar12 = pcVar12 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_0078d175:
    if (iVar4 == 0) {
      local_40 = 0xf;
      local_44 = 0;
      local_54 = local_54 & 0xffffff00;
      FUN_00409350();
      local_8 = 0xf;
      FUN_009a8ee0();
      local_8._0_1_ = 0x11;
      if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_40 = 0xf;
      local_44 = 0;
      local_54 = local_54 & 0xffffff00;
      local_84 = 0xf;
      local_88 = 0;
      local_98 = local_98 & 0xffffff00;
      FUN_00409350();
      iVar11 = local_14;
      local_8._0_1_ = 0x12;
      iVar4 = *(int *)(*(int *)(local_14 + 0x28) + 0xb0);
      uVar14 = __allmul(iVar4,iVar4 >> 0x1f,100000,0);
      __alldiv(uVar14,1000,0);
      FUN_00988a50();
      local_8._0_1_ = 0x13;
      FUN_009a9980();
      if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8._0_1_ = 0x11;
      local_24 = 0xf;
      local_28 = 0;
      local_38[0] = local_38[0] & 0xffffff00;
      if (0xf < local_84) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      FUN_00561bd0();
      if (*(int *)(iVar11 + 0x28) == 0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        puVar5 = (undefined4 *)(*(int *)(iVar11 + 0x28) + 0x38);
      }
      piVar7 = (int *)*puVar5;
      while (piVar7 != (int *)0x0) {
        local_8._0_1_ = 0x14;
        iVar4 = *piVar7;
        piVar7 = (int *)piVar7[2];
        FUN_0047db00();
        local_8._0_1_ = 0x15;
        local_5c = *(undefined4 *)(*(int *)(local_14 + 0x28) + 0xc0);
        iVar11 = *(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                           *(int *)(*(int *)(local_14 + 0x28) + 0xc4) * 4) + 0xa60)
                         + 0x48);
        uVar6 = iVar11 + 1000;
        uVar14 = __alldiv(iVar11 * 0x40000000,
                          (((int)uVar6 >> 0x1f) << 0xf | uVar6 >> 0x11) << 0xf |
                          (uVar6 & 0x1ffff) >> 2);
        uVar6 = *(uint *)(*(int *)(iVar4 + 0x38) + 0xc4);
        local_1c = uVar14;
        uVar14 = __alldiv(uVar6 << 0x1e,
                          (((int)uVar6 >> 0x1f) << 0xf | uVar6 >> 0x11) << 0xf |
                          (uVar6 & 0x1ffff) >> 2);
        __allmul(uVar14,local_1c);
        FUN_0047de60();
        FUN_0047dc20();
        local_8._0_1_ = 0x14;
        if (local_1b0 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_1b0 = 0;
      }
      local_8._0_1_ = 0x14;
      local_84 = 0xf;
      local_88 = 0;
      local_98 = local_98 & 0xffffff00;
      FUN_00409350();
      local_8._0_1_ = 0x16;
      local_40 = 0xf;
      local_44 = 0;
      local_54 = local_54 & 0xffffff00;
      FUN_00409350();
      local_8._0_1_ = 0x17;
      FUN_00561d10(local_1a0,local_7c);
      local_8._0_1_ = 0x18;
      FUN_00988fa0();
      local_8._0_1_ = 0x19;
      FUN_009a9980();
      if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_24 = 0xf;
      local_28 = 0;
      local_38[0] = local_38[0] & 0xffffff00;
      if (0xf < local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_68 = 0xf;
      local_6c = 0;
      local_7c[0] = local_7c[0] & 0xffffff00;
      if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8._0_1_ = 0x14;
      local_40 = 0xf;
      local_44 = 0;
      local_54 = local_54 & 0xffffff00;
      if (0xf < local_84) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      iVar4 = FUN_00475500();
      FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c));
      local_8._0_1_ = 0x1a;
      FUN_00408ed0();
      local_8._0_1_ = 0x14;
      if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      cVar2 = (**(code **)(**(int **)(local_14 + 0x28) + 0x3c))();
      if (cVar2 != '\0') {
        local_1c._0_4_ = *(undefined4 *)(*(int *)(local_14 + 0x28) + 0xc0);
        FUN_0051f8c0();
        if (0 < (int)&stack0xfffffdf4) {
          FUN_00401000();
          iVar4 = FUN_00b31c00();
          __alldiv((longlong)iVar4 * (longlong)(int)&stack0xfffffdf4,1000,0);
          FUN_00988a50();
          local_8._0_1_ = 0x1b;
          FUN_0042c180();
          local_8._0_1_ = 0x1c;
          FUN_00988fa0();
          local_8._0_1_ = 0x1d;
          FUN_00448aa0();
          FUN_00408ad0();
          FUN_00408ad0();
          local_8._0_1_ = 0x14;
          FUN_00408ad0();
        }
      }
      FUN_0047e3e0();
      FUN_00988bb0(local_7c,3);
      local_8._0_1_ = 0x1e;
      FUN_0042c180();
      local_8 = CONCAT31(local_8._1_3_,0x1f);
      FUN_00408ed0();
      if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_24 = 0xf;
      local_28 = 0;
      local_38[0] = local_38[0] & 0xffffff00;
      if (0xf < local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      if (local_158 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_158 = 0;
      local_154 = 0;
      local_150 = 0;
      local_8 = 0x20;
      FUN_009adb70();
      if (local_a8 != 0) {
        FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
    else {
      (**(code **)(*param_2 + 0x44))();
      cVar2 = FUN_0040b360();
      if (cVar2 == '\0') {
        (**(code **)(*param_2 + 0x44))();
        cVar2 = FUN_0040b360();
        if (cVar2 == '\0') {
          (**(code **)(*param_2 + 0x44))();
          cVar2 = FUN_0040b360();
          if (cVar2 == '\0') {
            ExceptionList = local_10;
            return param_1;
          }
          iVar4 = *(int *)(*(int *)(DAT_012586dc + 0x20) + 200);
          if (iVar4 == 0) {
            iVar4 = -1;
          }
          else {
            iVar4 = (int)(1000000 / (longlong)iVar4);
          }
          piVar7 = (int *)FUN_005ccdf0();
          uVar14 = __allmul(*piVar7,*piVar7 >> 0x1f);
          iVar11 = __alldiv(uVar14);
          local_60 = __alldiv((longlong)iVar11 * (longlong)iVar4);
          local_60 = local_60 / 1000;
          if (100 < local_60) {
            local_60 = 100;
          }
          iVar4 = *(int *)(*(int *)(DAT_012586dc + 0x20) + 0x14);
          piVar7 = (int *)FUN_005cce80();
          uVar14 = __allmul(*piVar7,*piVar7 >> 0x1f);
          iVar11 = __alldiv(uVar14);
          if (iVar4 == 0) {
            local_58 = -1;
          }
          else if ((iVar11 < -0x189373) || (0x20c49a < iVar11)) {
            local_1c._4_4_ = (undefined1 *)(iVar11 >> 0x1f);
            local_58 = iVar4 >> 0x1f;
            uVar14 = __allmul(iVar11,local_1c._4_4_);
            local_58 = __alldiv(uVar14);
          }
          else {
            local_58 = (iVar11 * 1000) / iVar4;
          }
          iVar4 = *(int *)(*(int *)(DAT_012586dc + 0x20) + 0x14);
          local_1c._4_4_ = *(undefined1 **)(*(int *)(DAT_012586dc + 0x20) + 200);
          piVar7 = (int *)FUN_005cd690();
          iVar11 = __alldiv((longlong)*piVar7 * (longlong)(int)local_1c._4_4_);
          uVar14 = __allmul(iVar11,iVar11 >> 0x1f);
          iVar11 = __alldiv(uVar14);
          if ((iVar4 != 0) && ((iVar11 < -0x189373 || (0x20c49a < iVar11)))) {
            local_1c._4_4_ = (undefined1 *)(iVar4 >> 0x1f);
            local_1c._0_4_ = iVar4;
            uVar14 = __allmul(iVar11,iVar11 >> 0x1f);
            iVar4 = __alldiv(uVar14);
            local_1c._4_4_ = (undefined1 *)(iVar4 >> 0x1f);
          }
          FUN_0054a540();
          local_8 = 0x32;
          FUN_00408ed0();
          local_8 = local_8 & 0xffffff00;
          FUN_00408ad0();
          FUN_00988970();
          local_8 = 0x33;
          uVar9 = FUN_00988970();
          local_8._0_1_ = 0x34;
          uVar10 = FUN_009888f0();
          local_8._0_1_ = 0x35;
          FUN_0043e9a0(local_38,&DAT_00df7e90,uVar10,"ENGINEERUNITS",uVar9);
          local_8 = CONCAT31(local_8._1_3_,0x36);
        }
        else {
          piVar7 = (int *)FUN_005ccd20();
          uVar14 = __allmul(*piVar7,*piVar7 >> 0x1f);
          iVar8 = __alldiv(uVar14);
          iVar4 = *(int *)(DAT_012586dc + 0x20);
          iVar11 = *(int *)(iVar4 + 0xc4);
          if (iVar11 == 0) {
            iVar11 = -1;
          }
          else {
            iVar11 = (int)(1000000 / (longlong)iVar11);
          }
          __alldiv((longlong)((iVar8 / 1000) * 1000) * (longlong)iVar11);
          iVar4 = *(int *)(iVar4 + 0x14);
          piVar7 = (int *)FUN_005ccce0();
          uVar14 = __allmul(*piVar7,*piVar7 >> 0x1f);
          iVar11 = __alldiv(uVar14);
          if (iVar4 == 0) {
            local_60 = -1;
          }
          else if ((iVar11 < -0x189373) || (0x20c49a < iVar11)) {
            local_58 = iVar4 >> 0x1f;
            uVar14 = __allmul(iVar11,iVar11 >> 0x1f);
            local_60 = __alldiv(uVar14);
          }
          else {
            local_60 = (iVar11 * 1000) / iVar4;
          }
          iVar4 = *(int *)(*(int *)(DAT_012586dc + 0x20) + 0x14);
          local_58 = *(int *)(*(int *)(DAT_012586dc + 0x20) + 0xc4);
          piVar7 = (int *)FUN_005cd690();
          iVar11 = __alldiv((longlong)*piVar7 * (longlong)local_58);
          uVar14 = __allmul(iVar11,iVar11 >> 0x1f);
          iVar11 = __alldiv(uVar14);
          if ((iVar4 != 0) && ((iVar11 < -0x189373 || (0x20c49a < iVar11)))) {
            local_1c._4_4_ = (undefined1 *)(iVar4 >> 0x1f);
            uVar14 = __allmul(iVar11,iVar11 >> 0x1f);
            iVar4 = __alldiv(uVar14);
            local_1c._4_4_ = (undefined1 *)(iVar4 >> 0x1f);
          }
          FUN_0054a540();
          local_8 = 0x2d;
          FUN_00408ed0();
          local_8 = local_8 & 0xffffff00;
          FUN_00408ad0();
          local_1c._4_4_ = &stack0xfffffdf8;
          FUN_00988970();
          local_1c._4_4_ = &stack0xfffffdf8;
          local_8 = 0x2e;
          uVar9 = FUN_00988970();
          local_8._0_1_ = 0x2f;
          uVar10 = FUN_009888f0();
          local_8._0_1_ = 0x30;
          FUN_0043e9a0(local_38,&DAT_00df7e90,uVar10,"RECONUNITS",uVar9);
          local_8 = CONCAT31(local_8._1_3_,0x31);
        }
        FUN_00408ed0();
        FUN_00408ad0();
        FUN_00408ad0();
        FUN_00408ad0();
        FUN_00408ad0();
      }
      else {
        local_24 = 0xf;
        local_28 = 0;
        local_38[0] = local_38[0] & 0xffffff00;
        FUN_00409350();
        local_8 = 0x21;
        FUN_009885d0();
        local_8._0_1_ = 0x22;
        FUN_009a8ee0();
        local_8._0_1_ = 0x23;
        iVar4 = FUN_00475500();
        FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c));
        local_8._0_1_ = 0x24;
        FUN_00988f20();
        local_8._0_1_ = 0x25;
        FUN_00408ed0();
        FUN_00408ad0();
        FUN_00408ad0();
        local_8._0_1_ = 0x22;
        FUN_009a9740();
        FUN_00408ad0();
        local_8 = (uint)local_8._1_3_ << 8;
        FUN_00408ad0();
        if (*(int *)(local_14 + 0x28) == 0) {
          puVar5 = (undefined4 *)0x0;
        }
        else {
          puVar5 = (undefined4 *)(*(int *)(local_14 + 0x28) + 0x38);
        }
        puVar5 = (undefined4 *)*puVar5;
        while (puVar5 != (undefined4 *)0x0) {
          piVar7 = (int *)*puVar5;
          puVar5 = (undefined4 *)puVar5[2];
          FUN_005bba70();
          local_8 = 0x26;
          local_84 = 0xf;
          local_88 = 0;
          local_98 = local_98 & 0xffffff00;
          FUN_00409350();
          local_8._0_1_ = 0x27;
          local_40 = 0xf;
          local_44 = 0;
          local_54 = local_54 & 0xffffff00;
          FUN_00409350();
          local_8._0_1_ = 0x28;
          (**(code **)(*piVar7 + 0x20))();
          local_8._0_1_ = 0x29;
          FUN_00988f20();
          local_8._0_1_ = 0x2a;
          FUN_00988f20();
          local_8._0_1_ = 0x2b;
          FUN_00988f20();
          local_8._0_1_ = 0x2c;
          FUN_00448aa0();
          if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_24 = 0xf;
          local_28 = 0;
          local_38[0] = local_38[0] & 0xffffff00;
          if (0xf < local_68) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_68 = 0xf;
          local_6c = 0;
          local_7c[0] = local_7c[0] & 0xffffff00;
          if (0xf < local_bc) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_bc = 0xf;
          local_c0 = 0;
          local_d0 = local_d0 & 0xffffff00;
          if (0xf < local_dc) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_dc = 0xf;
          local_e0 = 0;
          local_f0 = local_f0 & 0xffffff00;
          if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_40 = 0xf;
          local_44 = 0;
          local_54 = local_54 & 0xffffff00;
          if (0xf < local_84) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_8 = (uint)local_8._1_3_ << 8;
          if (0xf < local_fc) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
        }
      }
    }
  }
  ExceptionList = local_10;
  return param_1;
}

