// FUN_0078f980 @ 0078f980 body=[[0078f980, 0078f9fc] [0078fa00, 0078fb05] [0078fb09, 0078fb33] [0078fb37, 0078fb71] [0078fb75, 0078fb96] [0078fb9a, 0078fbbc] [0078fbc0, 0078fd74] [0078fd78, 0078fda2] [0078fda6, 0078fdcb] [0078fdcf, 0078fdf4] [0078fdf8, 0078fe1d] [0078fe21, 0078fe46] [0078fe4a, 0078fe6f] [0078fe73, 0078fe92] [0078fe96, 0078feb2] [0078feb6, 0078fed8] [0078fedc, 0078fef9] [0078fefd, 0078ff25] [0078ff29, 0078ffc3] [0078ffc7, 0078fff3] [0078fffc, 007900ea] [007900ee, 00790113] [00790117, 0079013a] [0079013e, 0079015e] [00790162, 0079018f] [00790193, 007901e8] [007901ec, 007901fd] [00790206, 00790a42]]


undefined1 * FUN_0078f980(undefined1 *param_1,int *param_2)

{
  byte bVar1;
  int *piVar2;
  undefined4 uVar3;
  char cVar4;
  byte *pbVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  char *pcVar9;
  char *pcVar10;
  bool bVar11;
  uint local_158;
  uint local_150 [4];
  undefined4 local_140;
  uint local_13c;
  uint local_134;
  undefined4 local_124;
  uint local_120;
  undefined4 local_118;
  uint local_114 [4];
  undefined4 local_104;
  uint local_100;
  uint local_f8 [2];
  undefined1 local_f0 [8];
  undefined4 local_e8;
  uint local_e4;
  uint local_dc [4];
  undefined4 local_cc;
  uint local_c8;
  uint local_c0 [2];
  undefined1 local_b8 [8];
  undefined4 local_b0;
  uint local_ac;
  uint local_a4 [2];
  undefined1 local_9c [8];
  undefined4 local_94;
  uint local_90;
  uint local_88;
  undefined1 local_80 [4];
  int local_7c;
  undefined4 local_78;
  uint local_74;
  uint local_6c [4];
  undefined4 local_5c;
  uint local_58;
  undefined1 local_50 [20];
  uint local_3c;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  undefined4 local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00b6c388;
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
  local_118 = 1;
  pbVar5 = (byte *)(**(code **)(*param_2 + 0x44))();
  if (0xf < *(uint *)(pbVar5 + 0x14)) {
    pbVar5 = *(byte **)pbVar5;
  }
  pcVar9 = "attach_unit_button";
  do {
    bVar1 = *pbVar5;
    bVar11 = bVar1 < (byte)*pcVar9;
    if (bVar1 != *pcVar9) {
LAB_0078fa20:
      iVar6 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
      goto LAB_0078fa25;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar5[1];
    bVar11 = bVar1 < (byte)pcVar9[1];
    if (bVar1 != pcVar9[1]) goto LAB_0078fa20;
    pbVar5 = pbVar5 + 2;
    pcVar9 = pcVar9 + 2;
  } while (bVar1 != 0);
  iVar6 = 0;
LAB_0078fa25:
  if (iVar6 == 0) {
    if (*(int *)(*(int *)(local_14 + 600) + 0x54) < 1) {
      iVar6 = FUN_0078f7d0();
      if (iVar6 == 0) {
        local_58 = 0xf;
        local_5c = 0;
        local_6c[0] = local_6c[0] & 0xffffff00;
        FUN_00409350("UW_NOT_POSSIBLE_TO_ATTACH",0x19);
        local_8 = 0x1e;
        FUN_009a8ee0(local_80,local_6c);
        local_8._0_1_ = 0x1f;
        iVar6 = FUN_00475500();
        FUN_009a9880(*(undefined8 *)(iVar6 + 0x6c),*(undefined8 *)(iVar6 + 0x74));
        local_8._0_1_ = 0x20;
        FUN_00408ed0();
        if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_20 = 0xf;
        local_24 = 0;
        local_34[0] = local_34[0] & 0xffffff00;
        local_8 = CONCAT31(local_8._1_3_,0x1e);
        FUN_009a9740();
        if (local_58 < 0x10) {
          ExceptionList = local_10;
          return param_1;
        }
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      iVar6 = FUN_0078f7d0();
      local_ac = 0xf;
      local_b0 = 0;
      local_c0[0] = local_c0[0] & 0xffffff00;
      pcVar9 = (char *)(iVar6 + 0xc0);
      do {
        cVar4 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar4 != '\0');
      FUN_00409350((char *)(iVar6 + 0xc0),(int)pcVar9 - (iVar6 + 0xc1));
      local_8 = 0x21;
      piVar8 = (int *)FUN_0078f7d0();
      local_90 = 0xf;
      local_94 = 0;
      local_a4[0] = local_a4[0] & 0xffffff00;
      FUN_00409350(&DAT_00ded950,1);
      local_8._0_1_ = 0x22;
      local_58 = 0xf;
      local_5c = 0;
      local_6c[0] = local_6c[0] & 0xffffff00;
      FUN_00409350(&DAT_00df9b68,1);
      local_8._0_1_ = 0x23;
      FUN_00988f20();
      local_8._0_1_ = 0x24;
      local_18 = FUN_00988f20();
      local_8._0_1_ = 0x25;
      (**(code **)(*piVar8 + 0x20))();
      FUN_00988f20();
      if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_20 = 0xf;
      local_24 = 0;
      local_34[0] = local_34[0] & 0xffffff00;
      if (0xf < local_c8) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_c8 = 0xf;
      local_cc = 0;
      local_dc[0] = local_dc[0] & 0xffffff00;
      if (local_58 < 0x10) {
        local_58 = 0xf;
        local_5c = 0;
        local_6c[0] = local_6c[0] & 0xffffff00;
        if (0xf < local_90) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_90 = 0xf;
        local_94 = 0;
        local_a4[0] = local_a4[0] & 0xffffff00;
        local_8._0_1_ = 0x2b;
        if (0xf < local_ac) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_ac = 0xf;
        local_b0 = 0;
        local_c0[0] = local_c0[0] & 0xffffff00;
        FUN_0042c180(local_114,local_50);
        local_8 = CONCAT31(local_8._1_3_,0x2c);
        FUN_00408ed0();
        if (0xf < local_100) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        if (local_3c < 0x10) {
          ExceptionList = local_10;
          return param_1;
        }
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_58 = 0xf;
    local_5c = 0;
    local_6c[0] = local_6c[0] & 0xffffff00;
    FUN_00409350(&DAT_00dee2cc,1);
    local_8 = 1;
    local_90 = 0xf;
    local_94 = 0;
    local_a4[0] = local_a4[0] & 0xffffff00;
    FUN_00409350("UW_UNITS_ATTACHED",0x11);
    local_8._0_1_ = 2;
    FUN_009a8ee0(local_80,local_a4);
    local_8._0_1_ = 3;
    iVar6 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar6 + 0x6c),*(undefined8 *)(iVar6 + 0x74));
    local_8._0_1_ = 4;
    FUN_00988f20();
    local_8._0_1_ = 5;
    FUN_00408ed0();
    if (0xf < local_ac) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_ac = 0xf;
    local_b0 = 0;
    local_c0[0] = local_c0[0] & 0xffffff00;
    if (0xf < local_e4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_e4 = 0xf;
    local_e8 = 0;
    local_f8[0] = local_f8[0] & 0xffffff00;
    local_8._0_1_ = 6;
    FUN_009adb70();
    if (local_7c != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_7c = 0;
    local_78 = 0;
    local_74 = 0;
    if (local_90 < 0x10) {
      local_8 = (uint)local_8._1_3_ << 8;
      local_90 = 0xf;
      local_94 = 0;
      local_a4[0] = local_a4[0] & 0xffffff00;
      if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      piVar8 = *(int **)(*(int *)(local_14 + 600) + 0x4c);
      while( true ) {
        if (piVar8 == (int *)0x0) {
          ExceptionList = local_10;
          return param_1;
        }
        piVar2 = (int *)piVar8[2];
        piVar8 = (int *)*piVar8;
        local_58 = 0xf;
        local_5c = 0;
        local_6c[0] = local_6c[0] & 0xffffff00;
        FUN_00409350(&DAT_00dfcd84,2);
        local_8 = 7;
        local_74 = 0xf;
        local_78 = 0;
        local_88 = local_88 & 0xffffff00;
        FUN_00409350(&DAT_00dfbfa4,2);
        local_8._0_1_ = 8;
        local_e4 = 0xf;
        local_e8 = 0;
        local_f8[0] = local_f8[0] & 0xffffff00;
        piVar7 = piVar8 + 0x30;
        do {
          iVar6 = *piVar7;
          piVar7 = (int *)((int)piVar7 + 1);
        } while ((char)iVar6 != '\0');
        FUN_00409350(piVar8 + 0x30,(int)piVar7 - ((int)piVar8 + 0xc1));
        local_8._0_1_ = 9;
        local_18 = (**(code **)(*piVar8 + 0x90))();
        local_8._0_1_ = 10;
        local_ac = 0xf;
        local_b0 = 0;
        local_c0[0] = local_c0[0] & 0xffffff00;
        FUN_00409350();
        local_8._0_1_ = 0xb;
        local_90 = 0xf;
        local_94 = 0;
        local_a4[0] = local_a4[0] & 0xffffff00;
        FUN_00409350();
        local_8._0_1_ = 0xc;
        FUN_00988f20(local_f8);
        local_8._0_1_ = 0xd;
        local_14 = FUN_00988f20(local_c0);
        local_8._0_1_ = 0xe;
        (**(code **)(*piVar8 + 0x20))();
        FUN_00988f20();
        local_8._0_1_ = 0xf;
        FUN_00988f20();
        local_8._0_1_ = 0x10;
        FUN_00988f20();
        local_8._0_1_ = 0x11;
        FUN_00988f20();
        if (0xf < local_13c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_13c = 0xf;
        local_140 = 0;
        local_150[0] = local_150[0] & 0xffffff00;
        if (0xf < local_120) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_120 = 0xf;
        local_124 = 0;
        local_134 = local_134 & 0xffffff00;
        if (0xf < local_158) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_158 = 0xf;
        if (0xf < local_100) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_100 = 0xf;
        local_104 = 0;
        local_114[0] = local_114[0] & 0xffffff00;
        if (0xf < local_c8) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_c8 = 0xf;
        local_cc = 0;
        local_dc[0] = local_dc[0] & 0xffffff00;
        if (0xf < local_90) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_90 = 0xf;
        local_94 = 0;
        local_a4[0] = local_a4[0] & 0xffffff00;
        if (0xf < local_ac) break;
        local_ac = 0xf;
        local_b0 = 0;
        local_c0[0] = local_c0[0] & 0xffffff00;
        if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_20 = 0xf;
        local_24 = 0;
        local_34[0] = local_34[0] & 0xffffff00;
        if (0xf < local_e4) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_e4 = 0xf;
        local_e8 = 0;
        local_f8[0] = local_f8[0] & 0xffffff00;
        if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_74 = 0xf;
        local_78 = 0;
        local_88 = local_88 & 0xffffff00;
        local_8._0_1_ = 0x1d;
        if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_58 = 0xf;
        local_5c = 0;
        local_6c[0] = local_6c[0] & 0xffffff00;
        FUN_00448aa0();
        local_8 = (uint)local_8._1_3_ << 8;
        piVar8 = piVar2;
        if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  pbVar5 = (byte *)(**(code **)(*param_2 + 0x44))();
  if (0xf < *(uint *)(pbVar5 + 0x14)) {
    pbVar5 = *(byte **)pbVar5;
  }
  pcVar9 = "detach_unit_button";
  do {
    bVar1 = *pbVar5;
    bVar11 = bVar1 < (byte)*pcVar9;
    if (bVar1 != *pcVar9) {
LAB_00790240:
      iVar6 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
      goto LAB_00790245;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar5[1];
    bVar11 = bVar1 < (byte)pcVar9[1];
    if (bVar1 != pcVar9[1]) goto LAB_00790240;
    pbVar5 = pbVar5 + 2;
    pcVar9 = pcVar9 + 2;
  } while (bVar1 != 0);
  iVar6 = 0;
LAB_00790245:
  if (iVar6 == 0) {
    if (*(int *)(*(int *)(local_14 + 600) + 0x5c) == 0) {
      ExceptionList = local_10;
      return param_1;
    }
    iVar6 = *(int *)(*(int *)(local_14 + 600) + 0x5c);
    pcVar10 = (char *)(iVar6 + 0xc0);
    local_c8 = 0xf;
    local_cc = 0;
    local_dc[0] = local_dc[0] & 0xffffff00;
    pcVar9 = pcVar10;
    do {
      cVar4 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar4 != '\0');
    FUN_00409350(pcVar10,(int)pcVar9 - (iVar6 + 0xc1));
    local_8 = 0x2d;
    piVar8 = *(int **)(*(int *)(local_14 + 600) + 0x5c);
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    FUN_00409350(&DAT_00ded950,1);
    local_8._0_1_ = 0x2e;
    FUN_009885d0();
    local_8._0_1_ = 0x2f;
    FUN_00988f20();
    local_8._0_1_ = 0x30;
    local_18 = FUN_00988f20();
    local_8._0_1_ = 0x31;
    (**(code **)(*piVar8 + 0x20))();
    FUN_00988f20();
    FUN_00408ad0();
    FUN_00408ad0();
    FUN_00408ad0();
    FUN_00408ad0();
    local_8._0_1_ = 0x37;
    FUN_00408ad0();
    FUN_0042c180(local_150,local_50);
    local_8 = CONCAT31(local_8._1_3_,0x38);
    FUN_00408ed0();
    FUN_00408ad0();
  }
  else {
    (**(code **)(*param_2 + 0x44))();
    cVar4 = FUN_0040b360();
    if (cVar4 == '\0') {
      (**(code **)(*param_2 + 0x44))();
      cVar4 = FUN_0040b360();
      if (cVar4 == '\0') {
        (**(code **)(*param_2 + 0x44))();
        cVar4 = FUN_0040b360();
        if (cVar4 == '\0') {
          (**(code **)(*param_2 + 0x44))();
          cVar4 = FUN_0040b360();
          if (cVar4 == '\0') {
            (**(code **)(*param_2 + 0x44))();
            cVar4 = FUN_0040b360();
            if (cVar4 == '\0') {
              ExceptionList = local_10;
              return param_1;
            }
            FUN_009885d0();
            local_8 = 0x4c;
            FUN_009a8ee0(local_80,local_50);
            local_8._0_1_ = 0x4d;
            iVar6 = FUN_00475500();
            FUN_009a9880(*(undefined8 *)(iVar6 + 0x6c),*(undefined8 *)(iVar6 + 0x74));
            local_8._0_1_ = 0x4e;
            FUN_00408ed0();
            FUN_00408ad0();
            local_8._0_1_ = 0x4c;
            FUN_009a9740();
            local_8 = (uint)local_8._1_3_ << 8;
            FUN_00408ad0();
            if (*(int *)(local_14 + 600) == 0) {
              ExceptionList = local_10;
              return param_1;
            }
            if (*(char *)(*(int *)(local_14 + 600) + 0x78) == '\0') {
              ExceptionList = local_10;
              return param_1;
            }
            FUN_00989030();
            switch(*(undefined4 *)(*(int *)(local_14 + 600) + 0x80)) {
            case 1:
              FUN_009885d0();
              local_8 = 0x4f;
              FUN_009a8ee0(local_80,local_50);
              local_8._0_1_ = 0x50;
              iVar6 = FUN_00475500();
              FUN_009a9880(*(undefined8 *)(iVar6 + 0x6c),*(undefined8 *)(iVar6 + 0x74));
              local_8._0_1_ = 0x51;
              FUN_00989020();
              FUN_00408ad0();
              local_8 = CONCAT31(local_8._1_3_,0x4f);
              FUN_009a9740();
              break;
            case 2:
              FUN_009885d0();
              local_8 = 0x52;
              FUN_009a8ee0(local_f0,local_34);
              local_8._0_1_ = 0x53;
              iVar6 = FUN_00475500();
              FUN_009a9880(*(undefined8 *)(iVar6 + 0x6c),*(undefined8 *)(iVar6 + 0x74));
              local_8._0_1_ = 0x54;
              FUN_00989020();
              FUN_00408ad0();
              local_8 = CONCAT31(local_8._1_3_,0x52);
              FUN_009a9740();
              break;
            case 3:
              FUN_009885d0();
              local_8 = 0x55;
              FUN_009a8ee0(local_b8,local_dc);
              local_8._0_1_ = 0x56;
              iVar6 = FUN_00475500();
              FUN_009a9880(*(undefined8 *)(iVar6 + 0x6c),*(undefined8 *)(iVar6 + 0x74));
              local_8._0_1_ = 0x57;
              FUN_00989020();
              FUN_00408ad0();
              local_8 = CONCAT31(local_8._1_3_,0x55);
              FUN_009a9740();
              break;
            case 4:
              FUN_009885d0();
              local_8 = 0x58;
              FUN_009a8ee0(local_9c,local_114);
              local_8._0_1_ = 0x59;
              iVar6 = FUN_00475500();
              FUN_009a9880(*(undefined8 *)(iVar6 + 0x6c),*(undefined8 *)(iVar6 + 0x74));
              local_8._0_1_ = 0x5a;
              FUN_00989020();
              FUN_00408ad0();
              local_8 = CONCAT31(local_8._1_3_,0x58);
              FUN_009a9740();
              break;
            default:
              goto switchD_00790822_default;
            }
          }
          else {
            FUN_009885d0();
            local_8 = 0x49;
            FUN_009a8ee0(local_80,local_50);
            local_8._0_1_ = 0x4a;
            iVar6 = FUN_00475500();
            FUN_009a9880(*(undefined8 *)(iVar6 + 0x6c),*(undefined8 *)(iVar6 + 0x74));
            local_8._0_1_ = 0x4b;
            FUN_00408ed0();
            FUN_00408ad0();
            local_8 = CONCAT31(local_8._1_3_,0x49);
            FUN_009a9740();
          }
        }
        else {
          FUN_009885d0();
          local_8 = 0x46;
          FUN_009a8ee0(local_80,local_50);
          local_8._0_1_ = 0x47;
          iVar6 = FUN_00475500();
          FUN_009a9880(*(undefined8 *)(iVar6 + 0x6c),*(undefined8 *)(iVar6 + 0x74));
          local_8._0_1_ = 0x48;
          FUN_00408ed0();
          FUN_00408ad0();
          local_8 = CONCAT31(local_8._1_3_,0x46);
          FUN_009a9740();
        }
      }
      else {
        iVar6 = FUN_0078e720();
        if (iVar6 == 0) {
          uVar3 = *(undefined4 *)(local_14 + 0x260);
          cVar4 = FUN_00791a30();
          if (cVar4 == '\0') {
            FUN_009885d0();
            local_8 = 0x40;
            FUN_009a8ee0(local_80,local_50);
            local_8._0_1_ = 0x41;
            iVar6 = FUN_00475500();
            FUN_009a9880(*(undefined8 *)(iVar6 + 0x6c),*(undefined8 *)(iVar6 + 0x74));
            local_8._0_1_ = 0x42;
            FUN_00408ed0();
            FUN_00408ad0();
            local_8 = CONCAT31(local_8._1_3_,0x40);
            FUN_009a9740();
          }
          else {
            FUN_00790e90(uVar3,local_50);
            local_8 = 0x3f;
            FUN_00408ed0();
          }
        }
        else {
          FUN_009885d0();
          local_8 = 0x43;
          FUN_009a8ee0(local_80,local_50);
          local_8._0_1_ = 0x44;
          iVar6 = FUN_00475500();
          FUN_009a9880(*(undefined8 *)(iVar6 + 0x6c),*(undefined8 *)(iVar6 + 0x74));
          local_8._0_1_ = 0x45;
          FUN_00408ed0();
          FUN_00408ad0();
          local_8 = CONCAT31(local_8._1_3_,0x43);
          FUN_009a9740();
        }
      }
    }
    else {
      iVar6 = (**(code **)(**(int **)(local_14 + 600) + 0x2c))();
      if (*(char *)(*(int *)(*(int *)(iVar6 + 0xdc) + 0x5c) + 0x2a) == '\0') {
        FUN_009885d0();
        local_8 = 0x39;
        FUN_009a8ee0(local_80,local_50);
        local_8._0_1_ = 0x3a;
        iVar6 = FUN_00475500();
        FUN_009a9880(*(undefined8 *)(iVar6 + 0x6c),*(undefined8 *)(iVar6 + 0x74));
        local_8._0_1_ = 0x3b;
        FUN_00408ed0();
        FUN_00408ad0();
        local_8 = CONCAT31(local_8._1_3_,0x39);
        FUN_009a9740();
      }
      else {
        FUN_009885d0();
        local_8 = 0x3c;
        FUN_009a8ee0(local_80,local_50);
        local_8._0_1_ = 0x3d;
        iVar6 = FUN_00475500();
        FUN_009a9880(*(undefined8 *)(iVar6 + 0x6c),*(undefined8 *)(iVar6 + 0x74));
        local_8._0_1_ = 0x3e;
        FUN_00408ed0();
        FUN_00408ad0();
        local_8 = CONCAT31(local_8._1_3_,0x3c);
        FUN_009a9740();
      }
    }
  }
  FUN_00408ad0();
switchD_00790822_default:
  ExceptionList = local_10;
  return param_1;
}

