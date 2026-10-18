// FUN_007361f0 @ 007361f0 body=[[007361f0, 007363c3] [007363c7, 007363f0] [007363f4, 0073641d] [00736421, 00736447] [0073644b, 007364c4] [007364c8, 00736688] [0073668c, 007366bb] [007366bf, 007366e7] [007366eb, 007367d9] [007367dd, 0073680c] [00736810, 00736838] [0073683c, 007368d9] [007368dd, 0073690c] [00736910, 00736935] [00736939, 007369d3] [007369d7, 007369fe] [00736a02, 00736a2a] [00736a2e, 00736ab6] [00736aba, 00736ad8] [00736adc, 00736b2a] [00736b2e, 00736b4c] [00736b50, 00736c12] [00736c16, 00736c30] [00736c34, 00736c51] [00736c55, 00736cf4] [00736cf8, 00736d17] [00736d1b, 00736d38] [00736d3c, 00736ddf] [00736de3, 00736dfd] [00736e01, 00736e1e] [00736e22, 00736ed4] [00736ed8, 00736ef3] [00736ef7, 00736f14] [00736f1d, 00736f70] [00736f74, 00736fbd] [00736fc1, 0073706f] [00737073, 00737253]]


undefined1 * FUN_007361f0(undefined1 *param_1,int *param_2)

{
  int *piVar1;
  code *pcVar2;
  char cVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 uVar8;
  char *pcVar9;
  int *piVar10;
  int in_ECX;
  char *pcVar11;
  int iVar12;
  int iVar13;
  undefined1 local_238 [92];
  uint local_1dc;
  undefined4 local_1cc;
  uint local_1c8;
  uint local_1c0 [4];
  undefined4 local_1b0;
  uint local_1ac;
  uint local_1a4 [4];
  undefined4 local_194;
  uint local_190;
  uint local_188 [4];
  undefined4 local_178;
  uint local_174;
  uint local_16c [4];
  undefined4 local_15c;
  uint local_158;
  uint local_150;
  undefined4 local_140;
  uint local_13c;
  uint local_134 [4];
  undefined4 local_124;
  uint local_120;
  uint local_118 [4];
  undefined4 local_108;
  uint local_104;
  uint local_fc [4];
  undefined4 local_ec;
  uint local_e8;
  undefined4 local_e0;
  uint local_d8 [4];
  undefined4 local_c8;
  uint local_c4;
  uint local_bc [4];
  undefined4 local_ac;
  uint local_a8;
  undefined4 local_a0;
  char local_9c [4];
  uint local_98 [4];
  undefined4 local_88;
  uint local_84;
  int local_7c;
  int *local_78;
  undefined4 local_74;
  int *local_70;
  uint local_6c [4];
  undefined4 local_5c;
  uint local_58;
  uint local_50 [2];
  undefined1 local_48 [8];
  undefined4 local_40;
  uint local_3c;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  int *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  piVar7 = param_2;
  puStack_c = &LAB_00b8a355;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
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
  local_a0 = 1;
  local_14 = in_ECX;
  puVar4 = (undefined4 *)(**(code **)(*param_2 + 0x44))();
  if (0xf < (uint)puVar4[5]) {
    puVar4 = (undefined4 *)*puVar4;
  }
  iVar5 = FUN_00aafe90(puVar4,"unit_folder_");
  if (iVar5 == 0) {
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = local_50[0] & 0xffffff00;
    FUN_00409350(&DAT_00dfad80,4);
    local_8 = 0x28;
    iVar5 = (**(code **)(**(int **)(in_ECX + 0x60) + 0x7c))(local_50);
    cVar3 = (**(code **)(*(int *)(iVar5 + 4) + 0x94))(param_2);
    local_8 = local_8 & 0xffffff00;
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_50[0]);
    }
    if (cVar3 == '\0') {
      FUN_009885d0();
      local_8 = 0x2b;
      iVar5 = (**(code **)(**(int **)(local_14 + 0x60) + 0x7c))(local_34);
      cVar3 = (**(code **)(*(int *)(iVar5 + 4) + 0x94))(param_2);
      local_8 = local_8 & 0xffffff00;
      if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_34[0]);
      }
      if (cVar3 == '\0') {
        (**(code **)(*param_2 + 0x44))();
        cVar3 = FUN_0040b360();
        if (cVar3 == '\0') {
          ExceptionList = local_10;
          return param_1;
        }
        FUN_009885d0();
        local_8 = 0x31;
        FUN_009a8ee0(local_48,local_34);
        local_8._0_1_ = 0x32;
        iVar5 = FUN_00475500();
        FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c),*(undefined8 *)(iVar5 + 0x74));
        local_8._0_1_ = 0x33;
        FUN_00408ed0();
        FUN_00408ad0();
        local_8 = CONCAT31(local_8._1_3_,0x31);
        FUN_009a9740();
      }
      else {
        FUN_009885d0();
        local_8 = 0x2c;
        piVar10 = (int *)(**(code **)(**(int **)(local_14 + 0x60) + 0x7c))(local_34);
        piVar10 = (int *)(**(code **)(*piVar10 + 0x2c))();
        piVar10 = (int *)*piVar10;
        local_8 = local_8 & 0xffffff00;
        FUN_00408ad0();
        param_2 = (int *)0x0;
        if (piVar10 == (int *)0x0) {
          ExceptionList = local_10;
          return param_1;
        }
        do {
          local_70 = (int *)*piVar10;
          piVar10 = (int *)piVar10[2];
          cVar3 = (**(code **)(*(int *)((int)local_70 + 0x1c) + 0x58))(piVar7);
          if (cVar3 != '\0') {
            param_2 = local_70;
          }
        } while (piVar10 != (int *)0x0);
        if (param_2 == (int *)0x0) {
          ExceptionList = local_10;
          return param_1;
        }
        iVar5 = FUN_00732f40();
        if (iVar5 == 0) {
          ExceptionList = local_10;
          return param_1;
        }
        piVar7 = *(int **)(iVar5 + 0x88);
        uVar6 = (**(code **)(**(int **)(iVar5 + 0x48) + 0x1c))(local_98);
        local_8 = 0x2d;
        uVar8 = (**(code **)(*piVar7 + 0x18))(local_6c);
        local_8._0_1_ = 0x2e;
        FUN_0043ec10(local_34,&DAT_00dfbf14,uVar8,&DAT_00df8310,uVar6);
        local_8._0_1_ = 0x2f;
        FUN_00989020();
        FUN_00408ad0();
        FUN_00408ad0();
        local_8 = (uint)local_8._1_3_ << 8;
        FUN_00408ad0();
        if (*(int *)(iVar5 + 0x54) == 0) {
          ExceptionList = local_10;
          return param_1;
        }
        FUN_00989030();
        FUN_008606c0(*(undefined4 *)(iVar5 + 0x54),local_34);
        local_8 = 0x30;
        FUN_00989020();
      }
      FUN_00408ad0();
    }
    else {
      FUN_009885d0();
      local_8 = 0x29;
      piVar7 = (int *)(**(code **)(**(int **)(local_14 + 0x60) + 0x7c))(local_50);
      puVar4 = (undefined4 *)(**(code **)(*piVar7 + 0x2c))();
      piVar7 = (int *)*puVar4;
      local_8 = local_8 & 0xffffff00;
      if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_50[0]);
      }
      local_3c = 0xf;
      local_40 = 0;
      local_50[0] = local_50[0] & 0xffffff00;
      do {
        if (piVar7 == (int *)0x0) {
          ExceptionList = local_10;
          return param_1;
        }
        iVar5 = *piVar7;
        piVar7 = (int *)piVar7[2];
        cVar3 = (**(code **)(*(int *)(iVar5 + 0x1c) + 0x58))(param_2);
      } while (cVar3 == '\0');
      FUN_00731a10(iVar5,local_238,param_2);
      local_8 = 0x2a;
      FUN_004115d0();
      FUN_00459820();
    }
  }
  else {
    puVar4 = (undefined4 *)(**(code **)(*param_2 + 0x44))();
    if (0xf < (uint)puVar4[5]) {
      puVar4 = (undefined4 *)*puVar4;
    }
    local_70 = (int *)FUN_00aaf0c5(puVar4 + 3);
    iVar5 = (**(code **)(*param_2 + 0xb0))();
    if (DAT_0125fdd8 == 0) {
      local_78 = (int *)FUN_00aae9af(0x1c);
      local_8 = 1;
      if (local_78 == (int *)0x0) {
        uVar6 = 0;
      }
      else {
        uVar6 = FUN_008b0060();
      }
      local_8 = local_8 & 0xffffff00;
      FUN_005c2810(uVar6);
    }
    local_18 = (int *)(DAT_0125fdd8 + 0xc);
    iVar12 = *(int *)(DAT_0125fdd8 + 0x10) - *(int *)(DAT_0125fdd8 + 0xc) >> 2;
    iVar13 = 0;
    if (0 < iVar12) {
      do {
        cVar3 = (**(code **)(**(int **)(*local_18 + iVar13 * 4) + 0x24))();
        if ((cVar3 != '\0') && (*(int **)(*(int *)(*local_18 + iVar13 * 4) + 0x28) == local_70)) {
          local_3c = 0xf;
          local_40 = 0;
          local_50[0] = local_50[0] & 0xffffff00;
          local_14 = iVar13;
          FUN_00409350(&DAT_00df8514,2);
          local_8 = 2;
          uVar6 = (**(code **)(**(int **)(*local_18 + iVar13 * 4) + 0x18))(local_118);
          local_8._0_1_ = 3;
          FUN_00988fa0(uVar6);
          local_8._0_1_ = 4;
          uVar6 = FUN_00988f20(local_50);
          local_8._0_1_ = 5;
          FUN_00408ed0(uVar6,0,0xffffffff);
          if (0xf < local_13c) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_150);
          }
          local_13c = 0xf;
          local_140 = 0;
          local_150 = local_150 & 0xffffff00;
          if (0xf < local_1c8) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_1dc);
          }
          local_1c8 = 0xf;
          local_1cc = 0;
          local_1dc = local_1dc & 0xffffff00;
          if (0xf < local_104) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_118[0]);
          }
          local_8 = (uint)local_8._1_3_ << 8;
          local_104 = 0xf;
          local_108 = 0;
          local_118[0] = local_118[0] & 0xffffff00;
          if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_50[0]);
          }
          local_3c = 0xf;
          local_40 = 0;
          local_50[0] = local_50[0] & 0xffffff00;
          if (iVar5 != 3) goto LAB_00736b5f;
          param_2 = (int *)0x0;
          goto LAB_00736470;
        }
        iVar13 = iVar13 + 1;
      } while (iVar13 < iVar12);
    }
  }
  ExceptionList = local_10;
  return param_1;
LAB_00736470:
  if (DAT_0125eadc == (int *)0x0) {
    local_70 = (int *)FUN_00aae9af(0x9c);
    local_8 = 6;
    if (local_70 == (int *)0x0) {
      piVar7 = (int *)0x0;
    }
    else {
      piVar7 = (int *)FUN_00576fe0(local_70);
    }
    piVar10 = DAT_0125eadc;
    local_8 = 7;
    local_70 = (int *)0x0;
    if ((piVar7 != DAT_0125eadc) && (DAT_0125eadc != (int *)0x0)) {
      FUN_00576d10(DAT_0125eadc);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(piVar10);
    }
    local_8 = 0;
    iVar13 = local_14;
    DAT_0125eadc = piVar7;
  }
  if (DAT_0125eadc[1] - *DAT_0125eadc >> 2 <= (int)param_2) {
LAB_00736a50:
    if (*(int *)(param_1 + 0x10) == 0) {
      piVar7 = *(int **)(*local_18 + iVar13 * 4);
      pcVar2 = *(code **)(*piVar7 + 0x18);
      if (*(char *)((int)piVar7 + 0x3a) == '\0') {
        uVar6 = (*pcVar2)(local_6c);
        local_8 = 0x18;
        uVar6 = FUN_0042c180(local_34,uVar6);
        local_8._0_1_ = 0x19;
        FUN_00408ed0(uVar6,0,0xffffffff);
        if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_34[0]);
        }
        local_8 = (uint)local_8._1_3_ << 8;
        local_20 = 0xf;
        local_24 = 0;
        local_34[0] = local_34[0] & 0xffffff00;
        if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_6c[0]);
        }
        local_6c[0] = local_6c[0] & 0xffffff00;
      }
      else {
        uVar6 = (*pcVar2)(local_34);
        local_8 = 0x16;
        uVar6 = FUN_0042c180(local_6c,uVar6);
        local_8._0_1_ = 0x17;
        FUN_00408ed0(uVar6,0,0xffffffff);
        if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_6c[0]);
        }
        local_8 = (uint)local_8._1_3_ << 8;
        local_58 = 0xf;
        local_5c = 0;
        local_6c[0] = local_6c[0] & 0xffffff00;
        if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_34[0]);
        }
        local_34[0] = local_34[0] & 0xffffff00;
      }
      local_20 = 0xf;
      local_24 = 0;
      local_58 = 0xf;
      local_5c = 0;
    }
LAB_00736b5f:
    local_e0 = *(undefined4 *)(DAT_012588e8 + 0xb5c);
    iVar5 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4);
    piVar7 = *(int **)(*(int *)(*(int *)(iVar5 + 0xbcc) + 0x310) +
                      *(int *)(*(int *)(*local_18 + local_14 * 4) + 0x24) * 4);
    if (piVar7 == (int *)0x0) {
      ExceptionList = local_10;
      return param_1;
    }
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = local_50[0] & 0xffffff00;
    FUN_00409350(&DAT_00ded94d,0);
    local_8 = 0x1a;
    uVar6 = (**(code **)(*piVar7 + 0x20))(local_6c,local_50,0,1);
    local_8._0_1_ = 0x1b;
    FUN_00988fa0(uVar6);
    local_8._0_1_ = 0x1c;
    FUN_00448aa0();
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_34[0]);
    }
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_6c[0]);
    }
    local_8 = (uint)local_8._1_3_ << 8;
    local_58 = 0xf;
    local_5c = 0;
    local_6c[0] = local_6c[0] & 0xffffff00;
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_50[0]);
    }
    if (0 < piVar7[0x28]) {
      local_3c = 0xf;
      local_40 = 0;
      local_50[0] = local_50[0] & 0xffffff00;
      local_8 = 0x1d;
      pcVar9 = __itoa(piVar7[0x28],local_9c,10);
      pcVar11 = pcVar9;
      do {
        cVar3 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar3 != '\0');
      FUN_00409350(pcVar9,(int)pcVar11 - (int)(pcVar9 + 1));
      local_8 = 0x1e;
      FUN_0042c180(local_6c,local_50);
      local_8._0_1_ = 0x1f;
      FUN_00988fa0();
      local_8._0_1_ = 0x20;
      FUN_00448aa0();
      if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_34[0]);
      }
      local_20 = 0xf;
      local_24 = 0;
      local_34[0] = local_34[0] & 0xffffff00;
      if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_6c[0]);
      }
      local_8 = (uint)local_8._1_3_ << 8;
      local_58 = 0xf;
      local_5c = 0;
      local_6c[0] = local_6c[0] & 0xffffff00;
      if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_50[0]);
      }
    }
    local_20 = 0xf;
    local_24 = 0;
    local_58 = 0xf;
    local_5c = 0;
    if (piVar7[0x29] < 0) {
      ExceptionList = local_10;
      return param_1;
    }
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = local_50[0] & 0xffffff00;
    local_8 = 0x21;
    pcVar9 = __itoa(piVar7[0x29],local_9c,10);
    pcVar11 = pcVar9;
    do {
      cVar3 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar3 != '\0');
    FUN_00409350(pcVar9,(int)pcVar11 - (int)(pcVar9 + 1));
    local_8 = 0x22;
    FUN_0042c180(local_6c,local_50);
    local_8._0_1_ = 0x23;
    FUN_00988fa0();
    local_8._0_1_ = 0x24;
    FUN_00448aa0();
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_34[0]);
    }
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_6c[0]);
    }
    local_8 = (uint)local_8._1_3_ << 8;
    local_58 = 0xf;
    local_5c = 0;
    local_6c[0] = local_6c[0] & 0xffffff00;
    if (local_3c < 0x10) {
      iVar13 = piVar7[9];
      if (*(int *)(iVar5 + 0x144) - *(int *)(iVar5 + 0x140) >> 2 < iVar13) {
        iVar12 = 0;
      }
      else {
        iVar12 = *(int *)(*(int *)(iVar5 + 0x140) + iVar13 * 4);
      }
      if (*(int *)(iVar5 + 0x154) - *(int *)(iVar5 + 0x150) >> 2 < iVar13) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(*(int *)(iVar5 + 0x150) + iVar13 * 4);
      }
      if (iVar12 < iVar5) {
        ExceptionList = local_10;
        return param_1;
      }
      uVar6 = FUN_009888f0(local_98);
      local_8 = 0x25;
      FUN_0042c180(local_6c,uVar6);
      local_8._0_1_ = 0x26;
      FUN_00988fa0();
      local_8 = CONCAT31(local_8._1_3_,0x27);
      FUN_00448aa0();
      if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_34[0]);
      }
      local_20 = 0xf;
      local_24 = 0;
      local_34[0] = local_34[0] & 0xffffff00;
      if (local_58 < 0x10) {
        local_58 = 0xf;
        local_5c = 0;
        local_6c[0] = local_6c[0] & 0xffffff00;
        if (local_84 < 0x10) {
          ExceptionList = local_10;
          return param_1;
        }
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_98[0]);
      }
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_6c[0]);
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50[0]);
  }
  piVar7 = *(int **)(*DAT_0125eadc + (int)param_2 * 4);
  cVar3 = (**(code **)(*piVar7 + 0x20))();
  if (((cVar3 != '\0') && (piVar7[0xd3] == *(int *)(*local_18 + iVar13 * 4))) &&
     (local_74 = *(undefined4 *)(DAT_012588e8 + 0xb5c),
     *(int *)(*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                        *(int *)(DAT_012588e8 + 0xb60) * 4) + 0xbcc) + 0x2b8) +
             piVar7[0xb9] * 4) == 0)) {
    uVar6 = (**(code **)(**(int **)(*local_18 + local_14 * 4) + 0x18))(local_98);
    local_8 = 10;
    uVar8 = (**(code **)(*piVar7 + 0x18))(local_bc);
    local_8._0_1_ = 0xb;
    uVar6 = FUN_0043ec10(local_d8,&DAT_00dfd13c,uVar8,&DAT_00e01db8,uVar6);
    local_8._0_1_ = 0xc;
    FUN_00408ed0(uVar6,0,0xffffffff);
    if (0xf < local_c4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_d8[0]);
    }
    local_c4 = 0xf;
    local_c8 = 0;
    local_d8[0] = local_d8[0] & 0xffffff00;
    if (0xf < local_a8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_bc[0]);
    }
    local_8 = (uint)local_8._1_3_ << 8;
    local_a8 = 0xf;
    local_ac = 0;
    local_bc[0] = local_bc[0] & 0xffffff00;
    if (0xf < local_84) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_98[0]);
    }
    local_84 = 0xf;
    local_88 = 0;
    local_98[0] = local_98[0] & 0xffffff00;
    iVar13 = local_14;
    goto LAB_00736a50;
  }
  cVar3 = (**(code **)(*piVar7 + 0x20))();
  if (((cVar3 != '\0') && (piVar7[0xd2] == *(int *)(*local_18 + iVar13 * 4))) &&
     (local_74 = *(undefined4 *)(DAT_012588e8 + 0xb5c),
     0 < *(int *)(*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                            *(int *)(DAT_012588e8 + 0xb60) * 4) + 0xbcc) + 0x2b8) +
                 piVar7[0xb9] * 4))) {
    uVar6 = (**(code **)(**(int **)(*local_18 + local_14 * 4) + 0x18))(local_d8);
    local_8 = 0xd;
    uVar8 = (**(code **)(*piVar7 + 0x18))(local_bc);
    local_8._0_1_ = 0xe;
    uVar6 = FUN_0043ec10(local_98,&DAT_00dfd13c,uVar8,&DAT_00e01db8,uVar6);
    local_8._0_1_ = 0xf;
    FUN_00408ed0(uVar6,0,0xffffffff);
    if (0xf < local_84) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_98[0]);
    }
    local_84 = 0xf;
    local_88 = 0;
    local_98[0] = local_98[0] & 0xffffff00;
    if (0xf < local_a8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_bc[0]);
    }
    local_8 = (uint)local_8._1_3_ << 8;
    local_a8 = 0xf;
    local_ac = 0;
    local_bc[0] = local_bc[0] & 0xffffff00;
    if (0xf < local_c4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_d8[0]);
    }
    local_c4 = 0xf;
    local_c8 = 0;
    local_d8[0] = local_d8[0] & 0xffffff00;
    iVar13 = local_14;
    goto LAB_00736a50;
  }
  piVar10 = (int *)piVar7[0x32];
  if (piVar10 == (int *)0x0) {
LAB_00736854:
    param_2 = (int *)((int)param_2 + 1);
    iVar13 = local_14;
  }
  else {
    local_70 = (int *)(*local_18 + local_14 * 4);
    local_7c = *local_70;
    do {
      iVar5 = *piVar10;
      piVar10 = (int *)piVar10[2];
      local_78 = piVar10;
      if (*(int *)(iVar5 + 0x3bc) == local_7c) {
        local_e0 = *(undefined4 *)(DAT_012588e8 + 0xb5c);
        piVar1 = *(int **)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4)
                          + 0x4f8);
        while( true ) {
          if (piVar1 == (int *)0x0) {
            uVar6 = (**(code **)(*(int *)*local_70 + 0x18))(local_1c0);
            local_8 = 0x10;
            uVar8 = (**(code **)(*piVar7 + 0x18))(local_188);
            local_8._0_1_ = 0x11;
            uVar6 = FUN_0043ec10(local_fc,&DAT_00dfd13c,uVar8,&DAT_00e01db8,uVar6);
            local_8._0_1_ = 0x12;
            FUN_00408ed0(uVar6,0,0xffffffff);
            if (0xf < local_e8) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b(local_fc[0]);
            }
            local_e8 = 0xf;
            local_ec = 0;
            local_fc[0] = local_fc[0] & 0xffffff00;
            if (0xf < local_174) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b(local_188[0]);
            }
            local_8 = (uint)local_8._1_3_ << 8;
            local_174 = 0xf;
            local_178 = 0;
            local_188[0] = local_188[0] & 0xffffff00;
            if (0xf < local_1ac) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b(local_1c0[0]);
            }
            param_2 = (int *)((int)param_2 + 1);
            local_1ac = 0xf;
            local_1b0 = 0;
            local_1c0[0] = local_1c0[0] & 0xffffff00;
            iVar13 = local_14;
            goto LAB_00736470;
          }
          if (*piVar1 == iVar5) break;
          piVar1 = (int *)piVar1[2];
        }
      }
      if (*(int *)(iVar5 + 0x3b8) == local_7c) {
        local_e0 = *(undefined4 *)(DAT_012588e8 + 0xb5c);
        for (piVar1 = *(int **)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                        *(int *)(DAT_012588e8 + 0xb60) * 4) + 0x4f8);
            piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
          if (*piVar1 == iVar5) {
            uVar6 = (**(code **)(*(int *)*local_70 + 0x18))(local_16c);
            local_8 = 0x13;
            uVar8 = (**(code **)(*piVar7 + 0x18))(local_1a4);
            local_8._0_1_ = 0x14;
            uVar6 = FUN_0043ec10(local_134,&DAT_00dfd13c,uVar8,&DAT_00e01db8,uVar6);
            local_8._0_1_ = 0x15;
            FUN_00408ed0(uVar6,0,0xffffffff);
            if (0xf < local_120) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b(local_134[0]);
            }
            local_120 = 0xf;
            local_124 = 0;
            local_134[0] = local_134[0] & 0xffffff00;
            if (0xf < local_190) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b(local_1a4[0]);
            }
            local_8 = (uint)local_8._1_3_ << 8;
            local_190 = 0xf;
            local_194 = 0;
            local_1a4[0] = local_1a4[0] & 0xffffff00;
            if (0xf < local_158) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b(local_16c[0]);
            }
            local_158 = 0xf;
            local_15c = 0;
            local_16c[0] = local_16c[0] & 0xffffff00;
            goto LAB_00736854;
          }
        }
      }
    } while (piVar10 != (int *)0x0);
    param_2 = (int *)((int)param_2 + 1);
    iVar13 = local_14;
  }
  goto LAB_00736470;
}

