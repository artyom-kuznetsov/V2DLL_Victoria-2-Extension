// FUN_00713a90 @ 00713a90 body=[[00713a90, 00713c16] [00713c1a, 00713c4c] [00713c50, 00713cb7] [00713cc0, 00713dee] [00713df2, 00713e20] [00713e24, 00713e5f] [00713e63, 00713fb4] [00713fb8, 00713fe8] [00713fec, 00714012] [00714016, 00714039] [0071403d, 00714066] [0071406a, 00714093] [00714097, 007140c2] [007140cb, 007144b9] [007144c0, 00714547] [00714550, 007159c6] [007159d0, 007159f7] [00715a00, 00716b08] [00716b10, 00717678] [00717680, 007184f2] [007184f6, 0071851e] [00718522, 00718536] [0071853a, 00718554]]


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

undefined1 * FUN_00713a90(undefined1 *param_1,int *param_2)

{
  byte *pbVar1;
  byte bVar2;
  int *piVar3;
  uint *puVar4;
  ulonglong uVar5;
  undefined1 uVar6;
  char cVar7;
  undefined4 uVar8;
  byte *****pppppbVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  undefined8 *puVar14;
  int *piVar15;
  uint uVar16;
  uint *puVar17;
  undefined4 *puVar18;
  undefined4 uVar19;
  uint in_ECX;
  char *pcVar20;
  longlong *plVar21;
  undefined4 extraout_ECX;
  int unaff_EDI;
  bool bVar22;
  longlong lVar23;
  undefined8 uStack_314;
  undefined8 uStack_30c;
  undefined1 local_2f8 [4];
  int iStack_2f4;
  int iStack_2e4;
  undefined1 local_2dc [8];
  int iStack_2d4;
  int iStack_2c4;
  undefined1 local_29c [28];
  undefined1 local_280 [64];
  undefined1 local_240 [28];
  undefined1 local_224 [56];
  undefined4 local_1ec;
  undefined1 local_1e8 [28];
  undefined1 local_1cc [28];
  uint local_1b0 [4];
  undefined4 local_1a0;
  uint local_19c;
  uint local_194;
  uint local_190;
  undefined1 local_18c [28];
  undefined1 local_170 [28];
  uint local_154 [4];
  undefined4 local_144;
  uint local_140;
  uint local_138 [3];
  undefined4 *local_12c;
  undefined4 local_128;
  undefined8 local_124;
  uint local_11c [2];
  undefined1 local_114 [4];
  int local_110;
  undefined4 local_10c;
  longlong *local_108;
  uint *local_104;
  undefined1 local_100 [8];
  char *local_f8;
  longlong *local_f4;
  longlong *local_f0;
  char *local_ec;
  char *local_e8;
  uint local_e4 [2];
  undefined1 local_dc [8];
  undefined4 local_d4;
  uint local_d0;
  undefined1 local_c8 [28];
  byte ****local_ac [4];
  undefined4 local_9c;
  uint local_98;
  uint local_90 [4];
  undefined4 local_80;
  uint local_7c;
  undefined8 local_74;
  undefined8 local_6c;
  longlong *local_64;
  uint *local_60;
  int *local_5c;
  uint local_58;
  int local_54;
  undefined1 local_50 [28];
  undefined4 local_34 [5];
  uint local_20;
  undefined8 local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00bb1a33;
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
  iVar11 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4);
  local_1ec = 1;
  uStack_30c = CONCAT44(0x713b20,(undefined4 *)uStack_30c);
  local_58 = in_ECX;
  local_6c._0_4_ = *(undefined4 *)(DAT_012588e8 + 0xb5c);
  uVar8 = (**(code **)(*param_2 + 0x44))();
  uStack_30c = 0xffffffff00000000;
  local_98 = 0xf;
  local_9c = 0;
  local_ac[0] = (byte ****)((uint)local_ac[0] & 0xffffff00);
  uStack_314 = CONCAT44(uVar8,0x713b4b);
  FUN_00408ed0();
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  pppppbVar9 = (byte *****)local_ac[0];
  if (local_98 < 0x10) {
    pppppbVar9 = local_ac;
  }
  pcVar20 = "country_flag";
  do {
    bVar2 = *(byte *)pppppbVar9;
    bVar22 = bVar2 < (byte)*pcVar20;
    if (bVar2 != *pcVar20) {
LAB_00713b90:
      iVar10 = (1 - (uint)bVar22) - (uint)(bVar22 != 0);
      goto LAB_00713b95;
    }
    if (bVar2 == 0) break;
    bVar2 = *(byte *)((int)pppppbVar9 + 1);
    bVar22 = bVar2 < (byte)pcVar20[1];
    if (bVar2 != pcVar20[1]) goto LAB_00713b90;
    pppppbVar9 = (byte *****)((int)pppppbVar9 + 2);
    pcVar20 = pcVar20 + 2;
  } while (bVar2 != 0);
  iVar10 = 0;
LAB_00713b95:
  if (iVar10 == 0) {
    uStack_30c = CONCAT44(0x713baa,(undefined4 *)uStack_30c);
    iVar11 = (**(code **)(*param_2 + 0x80))();
    iVar11 = *(int *)(*(int *)(DAT_012587e4 + 4) + iVar11 * 4);
    iVar10 = *(int *)(iVar11 + 0x20);
    local_18 = *(longlong *)(iVar11 + 0x1c);
    uStack_30c = CONCAT44(0x713bd0,(undefined4 *)uStack_30c);
    uVar8 = FUN_0055dd40();
    uStack_30c = CONCAT44(uVar8,local_e4);
    local_8._0_1_ = 2;
    uStack_314 = CONCAT44(0x713beb,(undefined1 *)uStack_314);
    uVar8 = FUN_0042c180();
    uStack_30c = 0xffffffff00000000;
    local_8._0_1_ = 3;
    uStack_314 = CONCAT44(uVar8,0x713bfe);
    FUN_00408ed0();
    if (0xf < local_d0) {
      uStack_30c = CONCAT44(local_e4[0],&UNK_00713c17);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 1;
    uVar6 = (undefined1)local_8;
    local_8._0_1_ = 1;
    local_d0 = 0xf;
    local_d4 = 0;
    local_e4[0] = local_e4[0] & 0xffffff00;
    if ((longlong *)0xf < local_108) {
      uStack_30c = CONCAT44(local_11c[0],&UNK_00713c4d);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_108 = (longlong *)0xf;
    local_10c = 0;
    local_11c[0] = local_11c[0] & 0xffffff00;
    param_2 = *(int **)(*(int *)(DAT_012587e4 + 4) + iVar10 * 4);
    piVar15 = param_2;
    local_8._0_1_ = uVar6;
    if ((param_2[0x34f] - param_2[0x34e] & 0xfffffff8U) != 0) {
      local_f4 = (longlong *)0x0;
      local_f0 = (longlong *)0x0;
      local_ec = (char *)0x0;
      local_8._0_1_ = 4;
      plVar21 = (longlong *)param_2[0x34e];
      iVar11 = DAT_012588e8;
      while (((longlong *)param_2[0x34e] <= plVar21 && (plVar21 < (longlong *)param_2[0x34f]))) {
        piVar15 = (int *)((int)plVar21 + 4);
        local_18 = *plVar21;
        local_6c._0_4_ = *(undefined4 *)(iVar11 + 0xb5c);
        plVar21 = plVar21 + 1;
        if (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                               *(int *)(iVar11 + 0xb60) * 4) + 0xbe8) + *piVar15 * 4
                             ) + 0x34) != 0) {
          uStack_30c = CONCAT44(0x713d1b,(undefined4 *)uStack_30c);
          FUN_004d61d0();
          iVar11 = DAT_012588e8;
        }
      }
      if (((int)local_f0 - (int)local_f4 & 0xfffffff8U) != 0) {
        uStack_30c = 0xf00e10d04;
        local_108 = (longlong *)0xf;
        local_10c = 0;
        local_11c[0] = local_11c[0] & 0xffffff00;
        uStack_314 = CONCAT44(0x713d6b,(undefined1 *)uStack_314);
        FUN_00409350();
        uStack_30c = CONCAT44(local_11c,local_dc);
        local_8._0_1_ = 5;
        uStack_314 = CONCAT44(0x713d82,(undefined1 *)uStack_314);
        FUN_009a8ee0();
        local_8._0_1_ = 6;
        uStack_30c = CONCAT44(0x713d8d,(undefined4 *)uStack_30c);
        iVar11 = FUN_00475500();
        uStack_314 = *(undefined8 *)(iVar11 + 0x6c);
        uStack_30c = *(undefined8 *)(iVar11 + 0x74);
        uVar8 = FUN_009a9880();
        local_8._0_1_ = 7;
        uStack_30c = CONCAT44(uVar8,0x713dc7);
        uVar8 = FUN_00988fa0();
        uStack_30c = 0xffffffff00000000;
        local_8._0_1_ = 8;
        uStack_314 = CONCAT44(uVar8,0x713dda);
        FUN_00448aa0();
        if (0xf < (uint)local_124) {
          uStack_30c = CONCAT44(local_138[0],&UNK_00713def);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_124 = CONCAT44(local_124._4_4_,0xf);
        local_128 = 0;
        local_138[0] = local_138[0] & 0xffffff00;
        if (0xf < local_19c) {
          uStack_30c = CONCAT44(local_1b0[0],&UNK_00713e21);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_19c = 0xf;
        local_1a0 = 0;
        local_1b0[0] = local_1b0[0] & 0xffffff00;
        local_8._0_1_ = 5;
        uStack_30c = CONCAT44(local_dc,0x713e47);
        FUN_009a9740();
        local_8._0_1_ = 4;
        if ((longlong *)0xf < local_108) {
          uStack_30c = CONCAT44(local_11c[0],&UNK_00713e60);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_64 = local_f4;
        while( true ) {
          local_8._0_1_ = 4;
          if ((local_64 < local_f4) || (local_f0 <= local_64)) break;
          local_18 = *local_64;
          uStack_30c = CONCAT44(0x713ea9,(undefined4 *)uStack_30c);
          local_64 = local_64 + 1;
          uVar8 = FUN_0055dd40();
          local_8._0_1_ = 9;
          uStack_30c = 0x100ded950;
          local_124._0_4_ = 0xf;
          local_128 = 0;
          local_138[0] = local_138[0] & 0xffffff00;
          uStack_314 = CONCAT44(0x713edd,(undefined1 *)uStack_314);
          FUN_00409350();
          local_8._0_1_ = 10;
          pcVar20 = (char *)&local_18;
          local_108 = (longlong *)0xf;
          local_10c = 0;
          local_11c[0] = local_11c[0] & 0xffffff00;
          do {
            cVar7 = *pcVar20;
            pcVar20 = pcVar20 + 1;
          } while (cVar7 != '\0');
          uStack_30c = CONCAT44((int)pcVar20 - ((int)&local_18 + 1),&local_18);
          uStack_314 = CONCAT44(0x713f19,(undefined1 *)uStack_314);
          FUN_00409350();
          local_8._0_1_ = 0xb;
          uStack_30c = 0x200dfcaf8;
          local_d0 = 0xf;
          local_d4 = 0;
          local_e4[0] = local_e4[0] & 0xffffff00;
          uStack_314 = CONCAT44(0x713f4a,(undefined1 *)uStack_314);
          FUN_00409350();
          local_8._0_1_ = 0xc;
          uStack_30c = CONCAT44(local_11c,0x713f66);
          FUN_00988f20();
          local_8._0_1_ = 0xd;
          uStack_30c = CONCAT44(local_138,0x713f7e);
          FUN_00988f20();
          local_8._0_1_ = 0xe;
          uStack_30c = CONCAT44(uVar8,0x713f90);
          uVar8 = FUN_00988f20();
          uStack_30c = 0xffffffff00000000;
          local_8._0_1_ = 0xf;
          uStack_314 = CONCAT44(uVar8,0x713fa0);
          FUN_00448aa0();
          if (0xf < local_19c) {
            uStack_30c = CONCAT44(local_1b0[0],&UNK_00713fb5);
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_19c = 0xf;
          local_1a0 = 0;
          local_1b0[0] = local_1b0[0] & 0xffffff00;
          if (0xf < local_140) {
            uStack_30c = CONCAT44(local_154[0],&UNK_00713fe9);
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_140 = 0xf;
          local_144 = 0;
          local_154[0] = local_154[0] & 0xffffff00;
          if (0xf < local_7c) {
            uStack_30c = CONCAT44(local_90[0],&UNK_00714013);
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_7c = 0xf;
          local_80 = 0;
          local_90[0] = local_90[0] & 0xffffff00;
          if (0xf < local_d0) {
            uStack_30c = CONCAT44(local_e4[0],&UNK_0071403a);
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_d0 = 0xf;
          local_d4 = 0;
          local_e4[0] = local_e4[0] & 0xffffff00;
          if (0xf < local_108) {
            uStack_30c = CONCAT44(local_11c[0],&UNK_00714067);
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_108 = (longlong *)0xf;
          local_10c = 0;
          local_11c[0] = local_11c[0] & 0xffffff00;
          if (0xf < (uint)local_124) {
            uStack_30c = CONCAT44(local_138[0],&UNK_00714094);
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_8._0_1_ = 4;
          local_124 = CONCAT44(local_124._4_4_,0xf);
          local_128 = 0;
          local_138[0] = local_138[0] & 0xffffff00;
          if (0xf < local_20) {
            uStack_30c = CONCAT44(local_34[0],&UNK_007140c3);
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
        }
      }
      uStack_30c = CONCAT44(0x7140d6,(undefined4 *)uStack_30c);
      FUN_00aa8540();
      piVar15 = param_2;
    }
    goto LAB_00718522;
  }
  uStack_30c = CONCAT44(0x7140eb,(undefined4 *)uStack_30c);
  cVar7 = FUN_0040b360();
  if (cVar7 == '\0') {
    uStack_30c = CONCAT44(0x714103,(undefined4 *)uStack_30c);
    cVar7 = FUN_0040b360();
    if (cVar7 == '\0') {
      uStack_30c = CONCAT44(0x71411b,(undefined4 *)uStack_30c);
      cVar7 = FUN_0040b360();
      if (cVar7 != '\0') {
        uVar8 = *(undefined4 *)(DAT_012588e8 + 0xce4);
        uStack_30c = CONCAT44(local_1b0,0x714142);
        param_2 = (int *)FUN_009888f0();
        uStack_30c = 0x100df8514;
        uStack_314 = CONCAT44(&DAT_00df963c,uVar8);
        local_8._0_1_ = 0x12;
        uVar8 = FUN_009c99e0();
        local_8._0_1_ = 0x13;
        uVar12 = FUN_009c9b50(local_90,&DAT_00df963c,&DAT_00dedc20);
        local_8._0_1_ = 0x14;
        uVar8 = FUN_0043e9a0(local_34,&DAT_00dfd18c,uVar12,"CHANGE",uVar8,&DAT_00dff69c,param_2);
        uStack_30c = 0xffffffff00000000;
        local_8._0_1_ = 0x15;
        uStack_314 = CONCAT44(uVar8,0x7141be);
        FUN_00408ed0();
        uStack_30c = CONCAT44(0x7141c6,(undefined4 *)uStack_30c);
        FUN_00408ad0();
        uStack_30c = CONCAT44(0x7141d1,(undefined4 *)uStack_30c);
        FUN_00408ad0();
        uStack_30c = CONCAT44(0x7141dc,(undefined4 *)uStack_30c);
        FUN_00408ad0();
        local_8._0_1_ = 1;
        uStack_30c = CONCAT44(0x7141eb,(undefined4 *)uStack_30c);
        FUN_00408ad0();
        uStack_314._4_4_ = local_90;
        uStack_30c = 0xdedc2000df963c;
        uStack_314._0_4_ = (undefined1 *)0x71420e;
        uVar8 = FUN_009c9b50();
        uStack_314 = CONCAT44(uStack_314._4_4_,uVar8);
        local_8._0_1_ = 0x16;
        uVar8 = FUN_0042c180();
        uStack_30c = 0xffffffff00000000;
        local_8._0_1_ = 0x17;
        uStack_314 = CONCAT44(uVar8,0x71423a);
        FUN_00408ed0();
        uStack_30c = CONCAT44(0x714242,(undefined4 *)uStack_30c);
        FUN_00408ad0();
        uStack_30c = CONCAT44(0x71424d,(undefined4 *)uStack_30c);
        FUN_00408ad0();
        piVar15 = param_2;
        goto LAB_00718522;
      }
      uStack_30c = CONCAT44(0x714262,(undefined4 *)uStack_30c);
      cVar7 = FUN_0040b360();
      if (cVar7 == '\0') {
        uStack_30c = CONCAT44(0x714436,(undefined4 *)uStack_30c);
        cVar7 = FUN_0040b360();
        if (cVar7 == '\0') {
          uStack_30c = CONCAT44(0x71478c,(undefined4 *)uStack_30c);
          cVar7 = FUN_0040b360();
          if (cVar7 != '\0') {
            param_2 = (int *)((uint)(*(int *)(in_ECX + 0x338) != 0) +
                              (uint)(*(int *)(in_ECX + 0x370) != 0) +
                             (uint)(*(int *)(in_ECX + 0x354) != 0));
            if (*(int *)(in_ECX + 0x38c) != 0) {
              if (*(int *)(param_1 + 0x10) != 0) {
                uStack_30c = CONCAT44(0x7147fd,(undefined4 *)uStack_30c);
                FUN_00989030();
              }
              uStack_30c = CONCAT44(0x71480a,(undefined4 *)uStack_30c);
              FUN_009885d0();
              local_8._0_1_ = 0x2b;
              uStack_30c = CONCAT44(local_1b0,0x71481c);
              uVar8 = FUN_009888f0();
              uStack_30c = CONCAT44(uVar8,local_154);
              local_8._0_1_ = 0x2c;
              uStack_314 = CONCAT44(0x714837,(undefined1 *)uStack_314);
              FUN_0042c180();
              local_8._0_1_ = 0x2d;
              uStack_30c = CONCAT44(local_34,0x71484e);
              FUN_00988f20();
              local_8._0_1_ = 0x2e;
              uStack_30c = CONCAT44(0x714859,(undefined4 *)uStack_30c);
              FUN_00989020();
              uStack_30c = CONCAT44(0x714864,(undefined4 *)uStack_30c);
              FUN_00408ad0();
              uStack_30c = CONCAT44(0x71486f,(undefined4 *)uStack_30c);
              FUN_00408ad0();
              uStack_30c = CONCAT44(0x71487a,(undefined4 *)uStack_30c);
              FUN_00408ad0();
              local_8._0_1_ = 1;
              uStack_30c = CONCAT44(0x714886,(undefined4 *)uStack_30c);
              FUN_00408ad0();
              uVar16 = local_58;
              uStack_30c = CONCAT44(0x714894,(undefined4 *)uStack_30c);
              FUN_00989020();
              if (*(int *)(uVar16 + 0x3a8) != 0) {
                uStack_30c = CONCAT44(uVar16 + 0x398,0x7148b1);
                FUN_00988fa0();
                local_8._0_1_ = 0x2f;
                uStack_30c = CONCAT44(0x7148bd,(undefined4 *)uStack_30c);
                FUN_00989020();
                local_8._0_1_ = 1;
                uStack_30c = CONCAT44(0x7148c9,(undefined4 *)uStack_30c);
                FUN_00408ad0();
                if (*(int *)(uVar16 + 0x3c4) != 0) {
                  uStack_30c = CONCAT44(uVar16 + 0x3b4,0x7148e6);
                  FUN_00988fa0();
                  local_8._0_1_ = 0x30;
                  uStack_30c = CONCAT44(0x7148f2,(undefined4 *)uStack_30c);
                  FUN_00989020();
                  local_8._0_1_ = 1;
                  uStack_30c = CONCAT44(0x7148fe,(undefined4 *)uStack_30c);
                  FUN_00408ad0();
                }
              }
            }
            piVar15 = param_2;
            if (*(int *)(local_58 + 0x338) != 0) {
              if (*(int *)(param_1 + 0x10) != 0) {
                uStack_30c = CONCAT44(0x714920,(undefined4 *)uStack_30c);
                FUN_00989030();
              }
              uStack_30c = CONCAT44(0x71492d,(undefined4 *)uStack_30c);
              FUN_009885d0();
              local_8._0_1_ = 0x31;
              uStack_30c = CONCAT44(local_1b0,0x714940);
              uVar8 = FUN_009888f0();
              uStack_30c = CONCAT44(uVar8,local_154);
              local_8._0_1_ = 0x32;
              uStack_314 = CONCAT44(0x71495b,(undefined1 *)uStack_314);
              FUN_0042c180();
              local_8._0_1_ = 0x33;
              uStack_30c = CONCAT44(local_34,0x714972);
              FUN_00988f20();
              local_8._0_1_ = 0x34;
              uStack_30c = CONCAT44(0x71497d,(undefined4 *)uStack_30c);
              FUN_00989020();
              uStack_30c = CONCAT44(0x714988,(undefined4 *)uStack_30c);
              FUN_00408ad0();
              uStack_30c = CONCAT44(0x714993,(undefined4 *)uStack_30c);
              FUN_00408ad0();
              uStack_30c = CONCAT44(0x71499e,(undefined4 *)uStack_30c);
              FUN_00408ad0();
              local_8._0_1_ = 1;
              uStack_30c = CONCAT44(0x7149aa,(undefined4 *)uStack_30c);
              FUN_00408ad0();
              uVar16 = local_58;
              uStack_30c = CONCAT44(0x7149b8,(undefined4 *)uStack_30c);
              FUN_00989020();
              piVar15 = param_2;
              if (*(int *)(uVar16 + 0x354) != 0) {
                uStack_30c = CONCAT44(uVar16 + 0x344,0x7149d9);
                FUN_00988fa0();
                local_8._0_1_ = 0x35;
                uStack_30c = CONCAT44(0x7149e5,(undefined4 *)uStack_30c);
                FUN_00989020();
                local_8._0_1_ = 1;
                uStack_30c = CONCAT44(0x7149f1,(undefined4 *)uStack_30c);
                FUN_00408ad0();
                piVar15 = param_2;
                if (*(int *)(uVar16 + 0x370) != 0) {
                  uStack_30c = CONCAT44(uVar16 + 0x360,0x714a13);
                  FUN_00988fa0();
                  local_8._0_1_ = 0x36;
                  uStack_30c = CONCAT44(0x714a1f,(undefined4 *)uStack_30c);
                  FUN_00989020();
                  uStack_30c = CONCAT44(0x714a27,(undefined4 *)uStack_30c);
                  FUN_00408ad0();
                  piVar15 = param_2;
                }
              }
            }
            goto LAB_00718522;
          }
          uStack_30c = CONCAT44(0x714a3c,(undefined4 *)uStack_30c);
          cVar7 = FUN_0040b360();
          if (cVar7 != '\0') {
            piVar15 = *(int **)(iVar11 + 0x9d8);
            param_2 = (int *)0x0;
            local_18 = CONCAT44(iVar11 + 0x9d8,piVar15);
            uStack_30c = CONCAT44(0x714a65,(undefined4 *)uStack_30c);
            cVar7 = FUN_0043a860();
            if (cVar7 != '\0') {
              local_54 = *(int *)(DAT_012588e8 + 0xacc);
              do {
                param_2 = (int *)((int)param_2 + *(int *)(*(int *)(local_54 + *piVar15 * 4) + 0x50))
                ;
                piVar15 = piVar15 + 1;
                local_18 = CONCAT44(local_18._4_4_,piVar15);
                uStack_30c = CONCAT44(0x714a93,(undefined4 *)uStack_30c);
                cVar7 = FUN_0043a860();
              } while (cVar7 != '\0');
            }
            piVar15 = *(int **)(iVar11 + 0x7b4);
            local_58 = 0;
            while (piVar15 != (int *)0x0) {
              piVar3 = (int *)*piVar15;
              piVar15 = (int *)piVar15[2];
              uStack_30c = CONCAT44(0x714ab6,(undefined4 *)uStack_30c);
              cVar7 = (**(code **)(*piVar3 + 0x38))();
              if (cVar7 != '\0') {
                piVar3 = (int *)piVar3[0xe];
                while (piVar3 != (int *)0x0) {
                  iVar11 = *piVar3;
                  piVar3 = (int *)piVar3[2];
                  if ((*(int *)(iVar11 + 0x30) != 0) &&
                     (*(char *)(*(int *)(*(int *)(iVar11 + 0x30) + 0x68) + 0x42) != '\0')) {
                    local_58 = local_58 + 1;
                  }
                }
              }
            }
            uStack_30c = CONCAT44(local_154,0x714af0);
            uVar8 = FUN_009888f0();
            local_8._0_1_ = 0x37;
            uStack_30c = CONCAT44(local_90,0x714b05);
            uVar12 = FUN_009888f0();
            uStack_30c = CONCAT44(uVar8,&DAT_00dfad2c);
            uStack_314 = CONCAT44(uVar12,&DAT_00dfd18c);
            local_8._0_1_ = 0x38;
            uVar8 = FUN_0043ec10();
            uStack_30c = 0xffffffff00000000;
            local_8._0_1_ = 0x39;
            uStack_314 = CONCAT44(uVar8,0x714b36);
            FUN_00408ed0();
            uStack_30c = CONCAT44(0x714b3e,(undefined4 *)uStack_30c);
            FUN_00408ad0();
            uStack_30c = CONCAT44(0x714b49,(undefined4 *)uStack_30c);
            FUN_00408ad0();
            uStack_30c = CONCAT44(0x714b54,(undefined4 *)uStack_30c);
            FUN_00408ad0();
            piVar15 = param_2;
            goto LAB_00718522;
          }
          uStack_30c = CONCAT44(0x714b69,(undefined4 *)uStack_30c);
          cVar7 = FUN_0040b360();
          if (cVar7 == '\0') {
            uStack_30c = CONCAT44(0x7152fe,(undefined4 *)uStack_30c);
            cVar7 = FUN_0040b360();
            if (cVar7 != '\0') {
              if (*(char *)(iVar11 + 0x120) != '\0') {
                uStack_30c = CONCAT44(0x71531c,(undefined4 *)uStack_30c);
                FUN_009885d0();
                uStack_30c = CONCAT44(local_34,&local_f8);
                local_8._0_1_ = 0x68;
                uStack_314 = CONCAT44(0x71532f,(undefined1 *)uStack_314);
                FUN_009a8ee0();
                local_8._0_1_ = 0x69;
                uStack_30c = CONCAT44(0x71533a,(undefined4 *)uStack_30c);
                iVar11 = FUN_00475500();
                uStack_314 = *(undefined8 *)(iVar11 + 0x6c);
                uStack_30c = *(undefined8 *)(iVar11 + 0x74);
                uVar8 = FUN_009a9880();
                uStack_30c = 0xffffffff00000000;
                local_8._0_1_ = 0x6a;
                uStack_314 = CONCAT44(uVar8,0x71536c);
                FUN_00408ed0();
                uStack_30c = CONCAT44(0x715373,(undefined4 *)uStack_30c);
                FUN_00408ad0();
                local_8._0_1_ = 0x68;
                uStack_30c = CONCAT44(&local_f8,0x715383);
                FUN_009a9740();
                uStack_30c = CONCAT44(0x71538b,(undefined4 *)uStack_30c);
                FUN_00408ad0();
                piVar15 = param_2;
                goto LAB_00718522;
              }
              uStack_30c = CONCAT44(0x71539a,(undefined4 *)uStack_30c);
              FUN_009885d0();
              local_8._0_1_ = 0x6b;
              uStack_30c = CONCAT44(local_18c,0x7153ac);
              param_2 = (int *)FUN_00514960();
              local_8._0_1_ = 0x6c;
              uStack_30c = CONCAT44(local_1cc,0x7153c5);
              uVar8 = FUN_009888f0();
              uStack_30c = CONCAT44(uVar8,local_170);
              local_8._0_1_ = 0x6d;
              uStack_314 = CONCAT44(0x7153e0,(undefined1 *)uStack_314);
              FUN_0042c180();
              local_8._0_1_ = 0x6e;
              uStack_30c = CONCAT44(local_34,0x7153f8);
              FUN_00988f20();
              local_8._0_1_ = 0x6f;
              uStack_30c = CONCAT44(param_2,0x71540a);
              uVar8 = FUN_00988f20();
              uStack_30c = 0xffffffff00000000;
              local_8._0_1_ = 0x70;
              uStack_314 = CONCAT44(uVar8,0x71541a);
              FUN_00408ed0();
LAB_00717da4:
              uStack_30c = CONCAT44(0x717dac,(undefined4 *)uStack_30c);
              FUN_00408ad0();
              uStack_30c = CONCAT44(0x717db7,(undefined4 *)uStack_30c);
              FUN_00408ad0();
              uStack_30c = CONCAT44(0x717dc2,(undefined4 *)uStack_30c);
              FUN_00408ad0();
              uStack_30c = CONCAT44(0x717dcd,(undefined4 *)uStack_30c);
              FUN_00408ad0();
              uStack_30c = CONCAT44(0x717dd8,(undefined4 *)uStack_30c);
              FUN_00408ad0();
              uStack_30c = CONCAT44(0x717de0,(undefined4 *)uStack_30c);
              FUN_00408ad0();
              piVar15 = param_2;
              goto LAB_00718522;
            }
            uStack_30c = CONCAT44(0x71542f,(undefined4 *)uStack_30c);
            cVar7 = FUN_0040b360();
            if (cVar7 != '\0') {
              uStack_30c = CONCAT44(iVar11 + 0xa48,local_50);
              uStack_314 = CONCAT44(iVar11 + 0x12e8,0x71544e);
              uVar8 = FUN_0096b1a0();
              uStack_30c = 0xffffffff00000000;
              local_8._0_1_ = 0x71;
              uStack_314 = CONCAT44(uVar8,0x71545e);
              FUN_00408ed0();
              local_8._0_1_ = 1;
              uStack_30c = CONCAT44(0x71546a,(undefined4 *)uStack_30c);
              FUN_00408ad0();
              local_18 = *(longlong *)(iVar11 + 2000);
              uStack_30c = CONCAT44(0x715484,(undefined4 *)uStack_30c);
              FUN_0053e960();
              uStack_30c = CONCAT44(0x71548c,(undefined4 *)uStack_30c);
              cVar7 = FUN_0043e920();
              piVar15 = param_2;
              if (cVar7 != '\0') {
                param_2 = (int *)&uStack_30c;
                uStack_314 = CONCAT44(0x7154a1,(undefined1 *)uStack_314);
                FUN_0053e960();
                uStack_314 = CONCAT44(1,local_170);
                uVar8 = FUN_00988bb0();
                uStack_30c = CONCAT44(uVar8,local_c8);
                local_8._0_1_ = 0x72;
                uStack_314 = CONCAT44(0x7154ca,(undefined1 *)uStack_314);
                uVar8 = FUN_0042c180();
                local_8._0_1_ = 0x73;
                uStack_314 = CONCAT44(uVar8,0x7154dc);
                uVar8 = FUN_00988fa0();
                uStack_30c = 0xffffffff00000000;
                local_8._0_1_ = 0x74;
                uStack_314 = CONCAT44(uVar8,0x7154f0);
                FUN_00408ed0();
                uStack_30c = CONCAT44(0x7154f8,(undefined4 *)uStack_30c);
                FUN_00408ad0();
                uStack_30c = CONCAT44(0x715503,(undefined4 *)uStack_30c);
                FUN_00408ad0();
                uStack_30c = CONCAT44(0x71550e,(undefined4 *)uStack_30c);
                FUN_00408ad0();
                piVar15 = param_2;
              }
              goto LAB_00718522;
            }
            uStack_30c = CONCAT44(0x715523,(undefined4 *)uStack_30c);
            cVar7 = FUN_0040b360();
            if (cVar7 != '\0') {
              if (*(int *)(iVar11 + 0x4cc) == 0) {
                if (*(char *)(iVar11 + 0x12d0) == '\0') {
                  uStack_30c = CONCAT44(0x715700,(undefined4 *)uStack_30c);
                  FUN_009885d0();
                  uStack_30c = CONCAT44(local_34,&local_f8);
                  local_8._0_1_ = 0x7e;
                  uStack_314 = CONCAT44(0x715714,(undefined1 *)uStack_314);
                  FUN_009a8ee0();
                  local_8._0_1_ = 0x7f;
                  uStack_30c = CONCAT44(0x71571f,(undefined4 *)uStack_30c);
                  iVar11 = FUN_00475500();
                  uStack_314 = *(undefined8 *)(iVar11 + 0x6c);
                  uStack_30c = *(undefined8 *)(iVar11 + 0x74);
                  uVar8 = FUN_009a9880();
                  uStack_30c = 0xffffffff00000000;
                  local_8._0_1_ = 0x80;
                  uStack_314 = CONCAT44(uVar8,0x715751);
                  FUN_00408ed0();
                  uStack_30c = CONCAT44(0x715758,(undefined4 *)uStack_30c);
                  FUN_00408ad0();
                  local_8._0_1_ = 0x7e;
                  uStack_30c = CONCAT44(&local_f8,0x715768);
                  FUN_009a9740();
                  uStack_30c = CONCAT44(0x715770,(undefined4 *)uStack_30c);
                  FUN_00408ad0();
                  piVar15 = param_2;
                }
                else {
                  uStack_30c = CONCAT44(0x715682,(undefined4 *)uStack_30c);
                  FUN_009885d0();
                  uStack_30c = CONCAT44(local_34,&local_f8);
                  local_8._0_1_ = 0x7b;
                  uStack_314 = CONCAT44(0x715695,(undefined1 *)uStack_314);
                  FUN_009a8ee0();
                  local_8._0_1_ = 0x7c;
                  uStack_30c = CONCAT44(0x7156a0,(undefined4 *)uStack_30c);
                  iVar11 = FUN_00475500();
                  uStack_314 = *(undefined8 *)(iVar11 + 0x6c);
                  uStack_30c = *(undefined8 *)(iVar11 + 0x74);
                  uVar8 = FUN_009a9880();
                  uStack_30c = 0xffffffff00000000;
                  local_8._0_1_ = 0x7d;
                  uStack_314 = CONCAT44(uVar8,0x7156d2);
                  FUN_00408ed0();
                  uStack_30c = CONCAT44(0x7156d9,(undefined4 *)uStack_30c);
                  FUN_00408ad0();
                  local_8._0_1_ = 0x7b;
                  uStack_30c = CONCAT44(&local_f8,0x7156e9);
                  FUN_009a9740();
                  uStack_30c = CONCAT44(0x7156f1,(undefined4 *)uStack_30c);
                  FUN_00408ad0();
                  piVar15 = param_2;
                }
              }
              else {
                piVar15 = *(int **)(*(int *)(iVar11 + 0x4c4) + 0x24);
                uStack_30c._4_4_ = (longlong **)local_170;
                uStack_30c._0_4_ = &param_2;
                uStack_314 = CONCAT44(*(int *)(iVar11 + 0x4c4),0x715552);
                uVar8 = FUN_0057a230();
                uStack_30c = CONCAT44(uStack_30c._4_4_,uVar8);
                uStack_314 = CONCAT44(0x715558,(undefined1 *)uStack_314);
                uVar8 = FUN_0043b700();
                local_8._0_1_ = 0x75;
                uStack_30c = CONCAT44(local_c8,0x71556e);
                uVar12 = (**(code **)(*piVar15 + 0x18))();
                uStack_30c = CONCAT44(uVar8,&DAT_00dfa9f8);
                uStack_314 = CONCAT44(uVar12,&DAT_00dfd13c);
                local_8._0_1_ = 0x76;
                uVar8 = FUN_0043ec10();
                local_8._0_1_ = 0x77;
                uStack_30c = 0xffffffff00000000;
                uStack_314 = CONCAT44(uVar8,0x7155a2);
                FUN_00408ed0();
                uStack_30c = CONCAT44(0x7155aa,(undefined4 *)uStack_30c);
                FUN_00408ad0();
                uStack_30c = CONCAT44(0x7155b5,(undefined4 *)uStack_30c);
                FUN_00408ad0();
                local_8._0_1_ = 1;
                uStack_30c = CONCAT44(0x7155c4,(undefined4 *)uStack_30c);
                FUN_00408ad0();
                uStack_30c = CONCAT44(0x7155ce,(undefined4 *)uStack_30c);
                FUN_00989030();
                uStack_30c = *(undefined8 *)(local_58 + 0x2c);
                uStack_314 = CONCAT44(0x7155e7,(undefined1 *)uStack_314);
                FUN_0057a4c0();
                uStack_30c = CONCAT44(local_170,0x7155f5);
                uVar8 = FUN_009888f0();
                local_8._0_1_ = 0x78;
                param_2 = (int *)&uStack_30c;
                uStack_30c = (ulonglong)*(uint *)(*(int *)(iVar11 + 0x4c4) + 8);
                uStack_314 = CONCAT44(local_c8,0x71561a);
                uVar12 = FUN_00988a50();
                uStack_30c = CONCAT44(uVar8,&DAT_00dfeb48);
                uStack_314 = CONCAT44(uVar12,"INVESTED");
                local_8._0_1_ = 0x79;
                FUN_0043ec10();
                local_8._0_1_ = 0x7a;
                uStack_30c = CONCAT44(0x715647,(undefined4 *)uStack_30c);
                FUN_00989020();
                uStack_30c = CONCAT44(0x71564f,(undefined4 *)uStack_30c);
                FUN_00408ad0();
                uStack_30c = CONCAT44(0x71565a,(undefined4 *)uStack_30c);
                FUN_00408ad0();
                uStack_30c = CONCAT44(0x715665,(undefined4 *)uStack_30c);
                FUN_00408ad0();
                piVar15 = param_2;
              }
              goto LAB_00718522;
            }
            uStack_30c = CONCAT44(0x715785,(undefined4 *)uStack_30c);
            cVar7 = FUN_0040b360();
            if (cVar7 != '\0') {
              uVar8 = *(undefined4 *)(*(int *)(iVar11 + 0xbcc) + 0x7c);
              param_2 = (int *)((int)&uStack_314 + 4);
              if (*(int *)(iVar11 + 0x4cc) == 0) {
                uStack_314 = CONCAT44(uVar8,0x7157e8);
                FUN_0043a5b0();
                uStack_314 = CONCAT44(iVar11 + 0xa48,local_50);
                FUN_0096a4e0();
                local_8._0_1_ = 0x82;
                uStack_30c = CONCAT44(0x71580a,(undefined4 *)uStack_30c);
                FUN_00989020();
                local_8._0_1_ = 1;
                uStack_30c = CONCAT44(0x715816,(undefined4 *)uStack_30c);
                FUN_00408ad0();
                param_2 = (int *)&uStack_30c;
                uStack_30c = CONCAT44(1,*(undefined4 *)(iVar11 + 0xe3c));
                uStack_314 = CONCAT44(local_c8,0x715832);
                uVar8 = FUN_00988a50();
                uStack_30c = CONCAT44(uVar8,local_50);
                local_8._0_1_ = 0x83;
                uStack_314 = CONCAT44(0x71584a,(undefined1 *)uStack_314);
                FUN_0042c180();
                local_8._0_1_ = 0x84;
                uStack_30c = CONCAT44(0x715859,(undefined4 *)uStack_30c);
                FUN_00989020();
                uStack_30c = CONCAT44(0x715861,(undefined4 *)uStack_30c);
                FUN_00408ad0();
                uStack_30c = CONCAT44(0x71586c,(undefined4 *)uStack_30c);
                FUN_00408ad0();
                piVar15 = param_2;
              }
              else {
                uStack_314 = CONCAT44(uVar8,0x7157b4);
                param_2 = (int *)((int)&uStack_314 + 4);
                FUN_0043a5b0();
                uStack_314 = CONCAT44(iVar11 + 0xa48,local_50);
                FUN_0096a4e0();
                local_8._0_1_ = 0x81;
                uStack_30c = CONCAT44(0x7157d6,(undefined4 *)uStack_30c);
                FUN_00989020();
                uStack_30c = CONCAT44(0x7157de,(undefined4 *)uStack_30c);
                FUN_00408ad0();
                piVar15 = param_2;
              }
              goto LAB_00718522;
            }
            uStack_30c = CONCAT44(0x715881,(undefined4 *)uStack_30c);
            cVar7 = FUN_0040b360();
            if (cVar7 == '\0') {
              uStack_30c = CONCAT44(0x715c06,(undefined4 *)uStack_30c);
              cVar7 = FUN_0040b360();
              if (cVar7 != '\0') {
LAB_00718334:
                uStack_30c = CONCAT44(0x718341,(undefined4 *)uStack_30c);
                FUN_009885d0();
                uStack_30c = CONCAT44(local_34,&local_f8);
                local_8._0_1_ = 0x8f;
                uStack_314 = CONCAT44(0x718354,(undefined1 *)uStack_314);
                param_2 = (int *)FUN_009a8ee0();
                local_8._0_1_ = 0x90;
                uStack_30c = CONCAT44(0x718360,(undefined4 *)uStack_30c);
                iVar10 = FUN_00475500();
                uStack_314 = *(undefined8 *)(iVar10 + 0x6c);
                uStack_30c = *(undefined8 *)(iVar10 + 0x74);
                uVar8 = FUN_009a9880();
                uStack_30c = 0xffffffff00000000;
                local_8._0_1_ = 0x91;
                uStack_314 = CONCAT44(uVar8,0x718393);
                FUN_00408ed0();
                uStack_30c = CONCAT44(0x71839a,(undefined4 *)uStack_30c);
                FUN_00408ad0();
                local_8._0_1_ = 0x8f;
                uStack_30c = CONCAT44(&local_f8,0x7183aa);
                FUN_009a9740();
                local_8._0_1_ = 1;
                uStack_30c = CONCAT44(0x7183b6,(undefined4 *)uStack_30c);
                FUN_00408ad0();
                uStack_30c = CONCAT44(0x7183c6,(undefined4 *)uStack_30c);
                FUN_009885d0();
                param_2 = (int *)&uStack_30c;
                local_8._0_1_ = 0x92;
                uStack_30c = CONCAT44(local_90,1000);
                uStack_314 = CONCAT44(0x4a,local_c8);
                uVar8 = (**(code **)(*(int *)(iVar11 + 0xa48) + 0x24))();
                local_8._0_1_ = 0x93;
                uStack_30c = CONCAT44(uVar8,0x718401);
                FUN_00988fa0();
                local_8._0_1_ = 0x94;
                uStack_30c = CONCAT44(0x71840f,(undefined4 *)uStack_30c);
                FUN_00989020();
                uStack_30c = CONCAT44(0x718417,(undefined4 *)uStack_30c);
                FUN_00408ad0();
                uStack_30c = CONCAT44(0x718422,(undefined4 *)uStack_30c);
                FUN_00408ad0();
                local_8._0_1_ = 1;
                uStack_30c = CONCAT44(0x718431,(undefined4 *)uStack_30c);
                FUN_00408ad0();
                uStack_30c = CONCAT44(0x718441,(undefined4 *)uStack_30c);
                FUN_009885d0();
                local_8._0_1_ = 0x95;
                uStack_30c = CONCAT44(local_154,local_dc);
                uStack_314 = CONCAT44(0x718454,(undefined1 *)uStack_314);
                FUN_009a8ee0();
                local_8._0_1_ = 0x96;
                uStack_30c = CONCAT44(0x71845f,(undefined4 *)uStack_30c);
                FUN_00475500();
                uStack_30c = CONCAT44(0x71846c,(undefined4 *)uStack_30c);
                puVar14 = (undefined8 *)FUN_0040b440();
                uStack_314 = *puVar14;
                uStack_30c = puVar14[1];
                uVar8 = FUN_009a9880();
                uStack_30c = 0xffffffff00000000;
                local_8._0_1_ = 0x97;
                uStack_314 = CONCAT44(uVar8,0x71849e);
                FUN_00408ed0();
                uStack_30c = CONCAT44(0x7184a5,(undefined4 *)uStack_30c);
                FUN_00408ad0();
                local_8._0_1_ = 0x95;
                uStack_30c = CONCAT44(local_dc,0x7184b5);
                FUN_009a9740();
                uStack_30c = CONCAT44(0x7184c0,(undefined4 *)uStack_30c);
                FUN_00408ad0();
                piVar15 = param_2;
                goto LAB_00718522;
              }
              uStack_30c = CONCAT44(0x715c1e,(undefined4 *)uStack_30c);
              cVar7 = FUN_0040b360();
              if (cVar7 != '\0') goto LAB_00718334;
              uStack_30c = CONCAT44(0x715c36,(undefined4 *)uStack_30c);
              cVar7 = FUN_0040b360();
              if (cVar7 != '\0') {
LAB_007181bb:
                uStack_30c = CONCAT44(0x7181c8,(undefined4 *)uStack_30c);
                FUN_009885d0();
                uStack_30c = CONCAT44(local_34,local_dc);
                local_8._0_1_ = 0x98;
                uStack_314 = CONCAT44(0x7181db,(undefined1 *)uStack_314);
                FUN_009a8ee0();
                local_8._0_1_ = 0x99;
                uStack_30c = CONCAT44(0x7181e6,(undefined4 *)uStack_30c);
                FUN_00475500();
                uStack_30c = CONCAT44(0x7181f3,(undefined4 *)uStack_30c);
                puVar14 = (undefined8 *)FUN_0040b440();
                uStack_314 = *puVar14;
                uStack_30c = puVar14[1];
                uVar8 = FUN_009a9880();
                uStack_30c = 0xffffffff00000000;
                local_8._0_1_ = 0x9a;
                uStack_314 = CONCAT44(uVar8,0x718224);
                FUN_00408ed0();
                uStack_30c = CONCAT44(0x71822b,(undefined4 *)uStack_30c);
                FUN_00408ad0();
                local_8._0_1_ = 0x98;
                uStack_30c = CONCAT44(local_dc,0x71823b);
                FUN_009a9740();
                local_8._0_1_ = 1;
                uStack_30c = CONCAT44(0x718247,(undefined4 *)uStack_30c);
                FUN_00408ad0();
                uStack_30c = CONCAT44(0x718257,(undefined4 *)uStack_30c);
                FUN_009885d0();
                uStack_30c = CONCAT44(local_154,local_dc);
                local_8._0_1_ = 0x9b;
                uStack_314 = CONCAT44(0x71826a,(undefined1 *)uStack_314);
                FUN_009a8ee0();
                local_8._0_1_ = 0x9c;
                uStack_30c = CONCAT44(0x718275,(undefined4 *)uStack_30c);
                FUN_00475500();
                uStack_30c = CONCAT44(0x718282,(undefined4 *)uStack_30c);
                puVar14 = (undefined8 *)FUN_0040b440();
                uStack_314 = *puVar14;
                uStack_30c = puVar14[1];
                uVar8 = FUN_009a9880();
                uStack_30c = 0xffffffff00000000;
                local_8._0_1_ = 0x9d;
                uStack_314 = CONCAT44(uVar8,0x7182b4);
                FUN_00408ed0();
                uStack_30c = CONCAT44(0x7182bb,(undefined4 *)uStack_30c);
                FUN_00408ad0();
                local_8._0_1_ = 0x9b;
                uStack_30c = CONCAT44(local_dc,0x7182cb);
                FUN_009a9740();
                local_8._0_1_ = 1;
                uStack_30c = CONCAT44(0x7182da,(undefined4 *)uStack_30c);
                FUN_00408ad0();
                uStack_30c = CONCAT44(0x7182ea,(undefined4 *)uStack_30c);
                FUN_009885d0();
                local_8._0_1_ = 0x9e;
                local_ec = *(char **)(DAT_012588e8 + 0xb5c);
                uStack_30c = CONCAT44(local_90,*(undefined4 *)
                                                (*(int *)(DAT_012587e4 + 4) +
                                                *(int *)(DAT_012588e8 + 0xb60) * 4));
                uStack_314 = CONCAT44(0x71831a,(undefined1 *)uStack_314);
                FUN_0052fcd0();
                uStack_30c = CONCAT44(0x718324,(undefined4 *)uStack_30c);
                FUN_00989020();
                uStack_30c = CONCAT44(0x71832f,(undefined4 *)uStack_30c);
                FUN_00408ad0();
                piVar15 = param_2;
                goto LAB_00718522;
              }
              uStack_30c = CONCAT44(0x715c4e,(undefined4 *)uStack_30c);
              cVar7 = FUN_0040b360();
              if (cVar7 != '\0') goto LAB_007181bb;
              uStack_30c = CONCAT44(0x715c66,(undefined4 *)uStack_30c);
              cVar7 = FUN_0040b360();
              if (cVar7 != '\0') {
LAB_00717f6c:
                uStack_30c = CONCAT44(0x717f79,(undefined4 *)uStack_30c);
                FUN_009885d0();
                uStack_30c = CONCAT44(local_34,local_114);
                local_8._0_1_ = 0x9f;
                uStack_314 = CONCAT44(0x717f8c,(undefined1 *)uStack_314);
                FUN_009a8ee0();
                local_8._0_1_ = 0xa0;
                uStack_30c = CONCAT44(0x717f97,(undefined4 *)uStack_30c);
                FUN_00475500();
                uStack_30c = CONCAT44(0x717fa4,(undefined4 *)uStack_30c);
                puVar14 = (undefined8 *)FUN_0040b440();
                uStack_314 = *puVar14;
                uStack_30c = puVar14[1];
                uVar8 = FUN_009a9880();
                uStack_30c = 0xffffffff00000000;
                local_8._0_1_ = 0xa1;
                uStack_314 = CONCAT44(uVar8,0x717fd5);
                FUN_00408ed0();
                uStack_30c = CONCAT44(0x717fdc,(undefined4 *)uStack_30c);
                FUN_00408ad0();
                local_8._0_1_ = 0x9f;
                uStack_30c = CONCAT44(local_114,0x717fec);
                FUN_009a9740();
                local_8._0_1_ = 1;
                uStack_30c = CONCAT44(0x717ff8,(undefined4 *)uStack_30c);
                FUN_00408ad0();
                local_ec = *(char **)(DAT_012588e8 + 0xb5c);
                if (*(char *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                      *(int *)(DAT_012588e8 + 0xb60) * 4) + 0x120) != '\0') {
                  uStack_30c = CONCAT44(0x718036,(undefined4 *)uStack_30c);
                  FUN_009885d0();
                  uStack_30c = CONCAT44(local_34,local_dc);
                  local_8._0_1_ = 0xa2;
                  uStack_314 = CONCAT44(0x718049,(undefined1 *)uStack_314);
                  FUN_009a8ee0();
                  local_8._0_1_ = 0xa3;
                  uStack_30c = CONCAT44(0x718054,(undefined4 *)uStack_30c);
                  FUN_00475500();
                  uStack_30c = CONCAT44(0x718061,(undefined4 *)uStack_30c);
                  puVar14 = (undefined8 *)FUN_0040b440();
                  uStack_314 = *puVar14;
                  uStack_30c = puVar14[1];
                  uVar8 = FUN_009a9880();
                  local_8._0_1_ = 0xa4;
                  uStack_30c = CONCAT44(uVar8,0x718097);
                  FUN_00988fa0();
                  local_8._0_1_ = 0xa5;
                  uStack_30c = CONCAT44(0x7180a5,(undefined4 *)uStack_30c);
                  FUN_00989020();
                  uStack_30c = CONCAT44(0x7180ad,(undefined4 *)uStack_30c);
                  FUN_00408ad0();
                  uStack_30c = CONCAT44(0x7180b8,(undefined4 *)uStack_30c);
                  FUN_00408ad0();
                  local_8._0_1_ = 0xa2;
                  uStack_30c = CONCAT44(local_dc,0x7180c8);
                  FUN_009a9740();
                  local_8._0_1_ = 1;
                  uStack_30c = CONCAT44(0x7180d4,(undefined4 *)uStack_30c);
                  FUN_00408ad0();
                }
                uStack_30c = CONCAT44(0x7180e1,(undefined4 *)uStack_30c);
                FUN_009885d0();
                uStack_30c = CONCAT44(local_34,local_dc);
                local_8._0_1_ = 0xa6;
                uStack_314 = CONCAT44(0x7180f4,(undefined1 *)uStack_314);
                FUN_009a8ee0();
                local_8._0_1_ = 0xa7;
                uStack_30c = CONCAT44(0x7180ff,(undefined4 *)uStack_30c);
                FUN_00475500();
                uStack_30c = CONCAT44(0x71810c,(undefined4 *)uStack_30c);
                puVar14 = (undefined8 *)FUN_0040b440();
                uStack_314 = *puVar14;
                uStack_30c = puVar14[1];
                uVar8 = FUN_009a9880();
                uStack_30c = 0xffffffff00000000;
                local_8._0_1_ = 0xa8;
                uStack_314 = CONCAT44(uVar8,0x71813e);
                FUN_00408ed0();
                uStack_30c = CONCAT44(0x718145,(undefined4 *)uStack_30c);
                FUN_00408ad0();
                local_8._0_1_ = 0xa6;
                uStack_30c = CONCAT44(local_dc,0x718155);
                FUN_009a9740();
                local_8._0_1_ = 1;
                uStack_30c = CONCAT44(0x718161,(undefined4 *)uStack_30c);
                FUN_00408ad0();
                uStack_30c = CONCAT44(0x718171,(undefined4 *)uStack_30c);
                FUN_009885d0();
                local_8._0_1_ = 0xa9;
                local_ec = *(char **)(DAT_012588e8 + 0xb5c);
                uStack_30c = CONCAT44(local_90,*(undefined4 *)
                                                (*(int *)(DAT_012587e4 + 4) +
                                                *(int *)(DAT_012588e8 + 0xb60) * 4));
                uStack_314 = CONCAT44(0x7181a1,(undefined1 *)uStack_314);
                FUN_00530e40();
                uStack_30c = CONCAT44(0x7181ab,(undefined4 *)uStack_30c);
                FUN_00989020();
                uStack_30c = CONCAT44(0x7181b6,(undefined4 *)uStack_30c);
                FUN_00408ad0();
                piVar15 = param_2;
                goto LAB_00718522;
              }
              uStack_30c = CONCAT44(0x715c7e,(undefined4 *)uStack_30c);
              cVar7 = FUN_0040b360();
              if (cVar7 != '\0') goto LAB_00717f6c;
              uStack_30c = CONCAT44(0x715c96,(undefined4 *)uStack_30c);
              cVar7 = FUN_0040b360();
              if (cVar7 != '\0') {
                uStack_30c = CONCAT44(0x715cab,(undefined4 *)uStack_30c);
                FUN_009885d0();
                uStack_30c = CONCAT44(local_34,local_114);
                local_8._0_1_ = 0xaa;
                uStack_314 = CONCAT44(0x715cbe,(undefined1 *)uStack_314);
                FUN_009a8ee0();
                local_8._0_1_ = 0xab;
                uStack_30c = CONCAT44(0x715cc9,(undefined4 *)uStack_30c);
                FUN_00475500();
                uStack_30c = CONCAT44(0x715cd6,(undefined4 *)uStack_30c);
                puVar14 = (undefined8 *)FUN_0040b440();
                uStack_314 = *puVar14;
                uStack_30c = puVar14[1];
                uVar8 = FUN_009a9880();
                uStack_30c = 0xffffffff00000000;
                local_8._0_1_ = 0xac;
                uStack_314 = CONCAT44(uVar8,0x715d07);
                FUN_00408ed0();
                uStack_30c = CONCAT44(0x715d0e,(undefined4 *)uStack_30c);
                FUN_00408ad0();
                local_8._0_1_ = 0xaa;
                uStack_30c = CONCAT44(local_114,0x715d1e);
                FUN_009a9740();
                local_8._0_1_ = 1;
                uStack_30c = CONCAT44(0x715d2a,(undefined4 *)uStack_30c);
                FUN_00408ad0();
                local_ec = *(char **)(DAT_012588e8 + 0xb5c);
                uStack_30c = CONCAT44(local_c8,*(undefined4 *)
                                                (*(int *)(DAT_012587e4 + 4) +
                                                *(int *)(DAT_012588e8 + 0xb60) * 4));
                uStack_314 = CONCAT44(0x715d5a,(undefined1 *)uStack_314);
                uVar8 = FUN_00545f20();
                uStack_30c = 0xffffffff00000000;
                local_8._0_1_ = 0xad;
                uStack_314 = CONCAT44(uVar8,0x715d6b);
                FUN_00408ed0();
                uStack_30c = CONCAT44(0x715d76,(undefined4 *)uStack_30c);
                FUN_00408ad0();
                piVar15 = param_2;
                goto LAB_00718522;
              }
              uStack_30c = CONCAT44(0x715d8b,(undefined4 *)uStack_30c);
              cVar7 = FUN_0040b360();
              if (cVar7 != '\0') {
LAB_00717e7f:
                uStack_30c = CONCAT44(local_170,iVar11);
                uStack_314 = CONCAT44(0x717e8c,(undefined1 *)uStack_314);
                uVar8 = FUN_00537a30();
                local_8._0_1_ = 0xae;
                uStack_30c = CONCAT44(0x717e9f,(undefined4 *)uStack_30c);
                uVar12 = FUN_004f97a0();
                uStack_30c = CONCAT44(uVar8,&DAT_00e11004);
                uStack_314 = CONCAT44(uVar12,&DAT_00dfbf14);
                local_8._0_1_ = 0xaf;
                uVar8 = FUN_0043ec10();
                uStack_30c = 0xffffffff00000000;
                local_8._0_1_ = 0xb0;
                uStack_314 = CONCAT44(uVar8,0x717ed0);
                FUN_00408ed0();
                uStack_30c = CONCAT44(0x717ed8,(undefined4 *)uStack_30c);
                FUN_00408ad0();
                uStack_30c = CONCAT44(0x717ee3,(undefined4 *)uStack_30c);
                FUN_00408ad0();
                local_8._0_1_ = 1;
                uStack_30c = CONCAT44(0x717ef2,(undefined4 *)uStack_30c);
                FUN_00408ad0();
                uStack_30c = CONCAT44(0x717eff,(undefined4 *)uStack_30c);
                FUN_009885d0();
                uStack_30c = CONCAT44(local_34,local_dc);
                local_8._0_1_ = 0xb1;
                uStack_314 = CONCAT44(0x717f12,(undefined1 *)uStack_314);
                FUN_009a8ee0();
                local_8._0_1_ = 0xb2;
                uStack_30c = CONCAT44(0x717f1d,(undefined4 *)uStack_30c);
                FUN_00475500();
                uStack_30c = CONCAT44(0x717f2a,(undefined4 *)uStack_30c);
                puVar14 = (undefined8 *)FUN_0040b440();
                uStack_314 = *puVar14;
                uStack_30c = puVar14[1];
                uVar8 = FUN_009a9880();
                uStack_30c = 0xffffffff00000000;
                local_8._0_1_ = 0xb3;
                uStack_314 = CONCAT44(uVar8,0x717f5c);
                FUN_00408ed0();
                uStack_30c = CONCAT44(0x717f63,(undefined4 *)uStack_30c);
                FUN_00408ad0();
                local_8._0_1_ = 0xb1;
LAB_00716398:
                uStack_30c = CONCAT44(local_dc,0x7163a4);
                FUN_009a9740();
                uStack_30c = CONCAT44(0x7163ac,(undefined4 *)uStack_30c);
                FUN_00408ad0();
                piVar15 = param_2;
                goto LAB_00718522;
              }
              uStack_30c = CONCAT44(0x715da3,(undefined4 *)uStack_30c);
              cVar7 = FUN_0040b360();
              if (cVar7 != '\0') goto LAB_00717e7f;
              uStack_30c = CONCAT44(0x715dbb,(undefined4 *)uStack_30c);
              cVar7 = FUN_0040b360();
              if (cVar7 != '\0') goto LAB_00717e7f;
              uStack_30c = CONCAT44(0x715dd3,(undefined4 *)uStack_30c);
              cVar7 = FUN_0040b360();
              if (cVar7 != '\0') {
                uStack_30c = CONCAT44(0x715df3,(undefined4 *)uStack_30c);
                cVar7 = (**(code **)(**(int **)(in_ECX + 0x24) + 0x158))();
                if (cVar7 == '\0') {
                  local_f8 = "SLOWEST_SPEED";
                  local_f4 = (longlong *)0xe11050;
                  local_f0 = (longlong *)0xe1105c;
                  local_ec = "FAST_SPEED";
                  local_e8 = "FASTEST_SPEED";
                  uStack_30c = CONCAT44(0x715ec6,(undefined4 *)uStack_30c);
                  FUN_009885d0();
                  uStack_30c = CONCAT44(local_34,local_dc);
                  local_8._0_1_ = 0xb7;
                  uStack_314 = CONCAT44(0x715eda,(undefined1 *)uStack_314);
                  FUN_009a8ee0();
                  local_8._0_1_ = 0xb8;
                  uStack_30c = CONCAT44(0x715ee5,(undefined4 *)uStack_30c);
                  FUN_00475500();
                  uStack_30c = CONCAT44(0x715ef2,(undefined4 *)uStack_30c);
                  puVar14 = (undefined8 *)FUN_0040b440();
                  uStack_314 = *puVar14;
                  uStack_30c = puVar14[1];
                  uVar8 = FUN_009a9880();
                  uStack_30c = CONCAT44(uVar8,local_50);
                  local_8._0_1_ = 0xb9;
                  uStack_314 = CONCAT44(0x715f2e,(undefined1 *)uStack_314);
                  uVar8 = FUN_0042c180();
                  uStack_30c = 0xffffffff00000000;
                  local_8._0_1_ = 0xba;
                  uStack_314 = CONCAT44(uVar8,0x715f41);
                  FUN_00408ed0();
                  uStack_30c = CONCAT44(0x715f49,(undefined4 *)uStack_30c);
                  FUN_00408ad0();
                  uStack_30c = CONCAT44(0x715f50,(undefined4 *)uStack_30c);
                  FUN_00408ad0();
                  local_8._0_1_ = 0xb7;
                  uStack_30c = CONCAT44(local_dc,0x715f60);
                  FUN_009a9740();
                  uStack_30c = CONCAT44(0x715f68,(undefined4 *)uStack_30c);
                  FUN_00408ad0();
                  piVar15 = param_2;
                }
                else {
                  uStack_30c = CONCAT44(0x715e08,(undefined4 *)uStack_30c);
                  FUN_009885d0();
                  uStack_30c = CONCAT44(local_34,local_dc);
                  local_8._0_1_ = 0xb4;
                  uStack_314 = CONCAT44(0x715e1b,(undefined1 *)uStack_314);
                  FUN_009a8ee0();
                  local_8._0_1_ = 0xb5;
                  uStack_30c = CONCAT44(0x715e26,(undefined4 *)uStack_30c);
                  FUN_00475500();
                  uStack_30c = CONCAT44(0x715e33,(undefined4 *)uStack_30c);
                  puVar14 = (undefined8 *)FUN_0040b440();
                  uStack_314 = *puVar14;
                  uStack_30c = puVar14[1];
                  uVar8 = FUN_009a9880();
                  uStack_30c = 0xffffffff00000000;
                  local_8._0_1_ = 0xb6;
                  uStack_314 = CONCAT44(uVar8,0x715e64);
                  FUN_00408ed0();
                  uStack_30c = CONCAT44(0x715e6b,(undefined4 *)uStack_30c);
                  FUN_00408ad0();
                  local_8._0_1_ = 0xb4;
                  uStack_30c = CONCAT44(local_dc,0x715e7b);
                  FUN_009a9740();
                  uStack_30c = CONCAT44(0x715e83,(undefined4 *)uStack_30c);
                  FUN_00408ad0();
                  piVar15 = param_2;
                }
                goto LAB_00718522;
              }
              uStack_30c = CONCAT44(0x715f7d,(undefined4 *)uStack_30c);
              cVar7 = FUN_0040b360();
              if (cVar7 != '\0') {
                uStack_30c = CONCAT44(0x715f92,(undefined4 *)uStack_30c);
                cVar7 = (**(code **)(**(int **)(in_ECX + 0x24) + 0x158))();
                if (cVar7 == '\0') {
                  uStack_30c = CONCAT44(0x716016,(undefined4 *)uStack_30c);
                  FUN_009885d0();
                  uStack_30c = CONCAT44(local_34,local_dc);
                  local_8._0_1_ = 0xbe;
                  uStack_314 = CONCAT44(0x71602a,(undefined1 *)uStack_314);
                  FUN_009a8ee0();
                  local_8._0_1_ = 0xbf;
                  uStack_30c = CONCAT44(0x716035,(undefined4 *)uStack_30c);
                  FUN_00475500();
                  uStack_30c = CONCAT44(0x716042,(undefined4 *)uStack_30c);
                  puVar14 = (undefined8 *)FUN_0040b440();
                  uStack_314 = *puVar14;
                  uStack_30c = puVar14[1];
                  uVar8 = FUN_009a9880();
                  uStack_30c = 0xffffffff00000000;
                  local_8._0_1_ = 0xc0;
                  uStack_314 = CONCAT44(uVar8,0x716073);
                  FUN_00408ed0();
                  uStack_30c = CONCAT44(0x71607a,(undefined4 *)uStack_30c);
                  FUN_00408ad0();
                  local_8._0_1_ = 0xbe;
                }
                else {
                  uStack_30c = CONCAT44(0x715fa3,(undefined4 *)uStack_30c);
                  FUN_009885d0();
                  uStack_30c = CONCAT44(local_34,local_dc);
                  local_8._0_1_ = 0xbb;
                  uStack_314 = CONCAT44(0x715fb6,(undefined1 *)uStack_314);
                  FUN_009a8ee0();
                  local_8._0_1_ = 0xbc;
                  uStack_30c = CONCAT44(0x715fc1,(undefined4 *)uStack_30c);
                  FUN_00475500();
                  uStack_30c = CONCAT44(0x715fce,(undefined4 *)uStack_30c);
                  puVar14 = (undefined8 *)FUN_0040b440();
                  uStack_314 = *puVar14;
                  uStack_30c = puVar14[1];
                  uVar8 = FUN_009a9880();
                  uStack_30c = 0xffffffff00000000;
                  local_8._0_1_ = 0xbd;
                  uStack_314 = CONCAT44(uVar8,0x715fff);
                  FUN_00408ed0();
                  uStack_30c = CONCAT44(0x716006,(undefined4 *)uStack_30c);
                  FUN_00408ad0();
                  local_8._0_1_ = 0xbb;
                }
                uStack_30c = CONCAT44(local_dc,0x71608a);
                FUN_009a9740();
                local_8._0_1_ = 1;
                uStack_30c = CONCAT44(0x716096,(undefined4 *)uStack_30c);
                FUN_00408ad0();
                uVar16 = local_58;
                piVar15 = param_2;
                if (*(char *)(*(int *)(local_58 + 0x24) + 0x5c) != '\0') {
                  uStack_30c = CONCAT44(0x7160b5,(undefined4 *)uStack_30c);
                  cVar7 = (**(code **)(**(int **)(local_58 + 0x24) + 0x158))();
                  if (cVar7 != '\0') {
                    uStack_30c = CONCAT44(*(int *)(uVar16 + 0x24) + 0x1d88,local_50);
                    uStack_314 = CONCAT44(0x7160d5,(undefined1 *)uStack_314);
                    FUN_0042c180();
                    local_8._0_1_ = 0xc1;
                    uStack_30c = CONCAT44(0x7160e4,(undefined4 *)uStack_30c);
                    FUN_00989020();
                    local_8._0_1_ = 1;
                    uStack_30c = CONCAT44(0x7160f0,(undefined4 *)uStack_30c);
                    FUN_00408ad0();
                  }
                  piVar3 = *(int **)(DAT_012588e8 + 0x18);
                  piVar15 = param_2;
                  while (param_2 = piVar3, param_2 != (int *)0x0) {
                    piVar3 = (int *)param_2[0xf];
                    uStack_30c = CONCAT44(0x716114,(undefined4 *)uStack_30c);
                    FUN_00989030();
                    uStack_30c = CONCAT44(0x71611c,(undefined4 *)uStack_30c);
                    FUN_00989020();
                    uStack_30c = CONCAT44(0x716126,(undefined4 *)uStack_30c);
                    FUN_00989030();
                    uStack_30c = CONCAT44(local_50,param_2 + 0xd);
                    uStack_314 = CONCAT44(0x716136,(undefined1 *)uStack_314);
                    FUN_0043acd0();
                    local_8._0_1_ = 0xc2;
                    uStack_30c = CONCAT44(0x71613f,(undefined4 *)uStack_30c);
                    FUN_00989020();
                    local_8._0_1_ = 1;
                    uStack_30c = CONCAT44(0x71614b,(undefined4 *)uStack_30c);
                    FUN_00408ad0();
                    piVar15 = param_2;
                  }
                }
                goto LAB_00718522;
              }
              uStack_30c = CONCAT44(0x716164,(undefined4 *)uStack_30c);
              cVar7 = FUN_0040b360();
              if (cVar7 != '\0') {
                uStack_30c = CONCAT44(0x716175,(undefined4 *)uStack_30c);
                FUN_009885d0();
                uStack_30c = CONCAT44(local_34,local_dc);
                local_8._0_1_ = 0xc3;
                uStack_314 = CONCAT44(0x716188,(undefined1 *)uStack_314);
                FUN_009a8ee0();
                local_8._0_1_ = 0xc4;
                uStack_30c = CONCAT44(0x716193,(undefined4 *)uStack_30c);
                FUN_00475500();
                uStack_30c = CONCAT44(0x7161a0,(undefined4 *)uStack_30c);
                puVar14 = (undefined8 *)FUN_0040b440();
                uStack_314 = *puVar14;
                uStack_30c = puVar14[1];
                uVar8 = FUN_009a9880();
                uStack_30c = 0xffffffff00000000;
                local_8._0_1_ = 0xc5;
                uStack_314 = CONCAT44(uVar8,0x7161d1);
                FUN_00408ed0();
                uStack_30c = CONCAT44(0x7161d8,(undefined4 *)uStack_30c);
                FUN_00408ad0();
                local_8._0_1_ = 0xc3;
                goto LAB_00716398;
              }
              uStack_30c = CONCAT44(0x7161f1,(undefined4 *)uStack_30c);
              cVar7 = FUN_0040b360();
              if (cVar7 != '\0') {
                uStack_30c = CONCAT44(0x716202,(undefined4 *)uStack_30c);
                FUN_009885d0();
                uStack_30c = CONCAT44(local_34,local_dc);
                local_8._0_1_ = 0xc6;
                uStack_314 = CONCAT44(0x716215,(undefined1 *)uStack_314);
                FUN_009a8ee0();
                local_8._0_1_ = 199;
                uStack_30c = CONCAT44(0x716220,(undefined4 *)uStack_30c);
                FUN_00475500();
                uStack_30c = CONCAT44(0x71622d,(undefined4 *)uStack_30c);
                puVar14 = (undefined8 *)FUN_0040b440();
                uStack_314 = *puVar14;
                uStack_30c = puVar14[1];
                uVar8 = FUN_009a9880();
                uStack_30c = 0xffffffff00000000;
                local_8._0_1_ = 200;
                uStack_314 = CONCAT44(uVar8,0x71625e);
                FUN_00408ed0();
                uStack_30c = CONCAT44(0x716265,(undefined4 *)uStack_30c);
                FUN_00408ad0();
                local_8._0_1_ = 0xc6;
                goto LAB_00716398;
              }
              uStack_30c = CONCAT44(0x71627e,(undefined4 *)uStack_30c);
              cVar7 = FUN_0040b360();
              if (cVar7 != '\0') {
                uStack_30c = CONCAT44(0x716291,(undefined4 *)uStack_30c);
                cVar7 = FUN_006c9d30();
                if (cVar7 != '\0') {
                  uStack_30c = CONCAT44(0x7162a6,(undefined4 *)uStack_30c);
                  FUN_009885d0();
                  uStack_30c = CONCAT44(local_34,local_dc);
                  local_8._0_1_ = 0xc9;
                  uStack_314 = CONCAT44(0x7162b9,(undefined1 *)uStack_314);
                  FUN_009a8ee0();
                  local_8._0_1_ = 0xca;
                  uStack_30c = CONCAT44(0x7162c4,(undefined4 *)uStack_30c);
                  FUN_00475500();
                  uStack_30c = CONCAT44(0x7162d1,(undefined4 *)uStack_30c);
                  puVar14 = (undefined8 *)FUN_0040b440();
                  uStack_314 = *puVar14;
                  uStack_30c = puVar14[1];
                  uVar8 = FUN_009a9880();
                  uStack_30c = 0xffffffff00000000;
                  local_8._0_1_ = 0xcb;
                  uStack_314 = CONCAT44(uVar8,0x716302);
                  FUN_00408ed0();
                  uStack_30c = CONCAT44(0x716309,(undefined4 *)uStack_30c);
                  FUN_00408ad0();
                  local_8._0_1_ = 0xc9;
                  uStack_30c = CONCAT44(local_dc,0x716319);
                  FUN_009a9740();
                  uStack_30c = CONCAT44(0x716321,(undefined4 *)uStack_30c);
                  FUN_00408ad0();
                  piVar15 = param_2;
                  goto LAB_00718522;
                }
                uStack_30c = CONCAT44(0x716330,(undefined4 *)uStack_30c);
                FUN_009885d0();
                uStack_30c = CONCAT44(local_34,local_dc);
                local_8._0_1_ = 0xcc;
                uStack_314 = CONCAT44(0x716344,(undefined1 *)uStack_314);
                FUN_009a8ee0();
                local_8._0_1_ = 0xcd;
                uStack_30c = CONCAT44(0x71634f,(undefined4 *)uStack_30c);
                FUN_00475500();
                uStack_30c = CONCAT44(0x71635c,(undefined4 *)uStack_30c);
                puVar14 = (undefined8 *)FUN_0040b440();
                uStack_314 = *puVar14;
                uStack_30c = puVar14[1];
                uVar8 = FUN_009a9880();
                uStack_30c = 0xffffffff00000000;
                local_8._0_1_ = 0xce;
                uStack_314 = CONCAT44(uVar8,0x71638d);
                FUN_00408ed0();
                uStack_30c = CONCAT44(0x716394,(undefined4 *)uStack_30c);
                FUN_00408ad0();
                local_8._0_1_ = 0xcc;
                goto LAB_00716398;
              }
              uStack_30c = CONCAT44(0x7163c1,(undefined4 *)uStack_30c);
              cVar7 = FUN_0040b360();
              if (cVar7 == '\0') {
                uStack_30c = CONCAT44(0x716728,(undefined4 *)uStack_30c);
                cVar7 = FUN_0040b360();
                if (cVar7 != '\0') {
                  uStack_30c = CONCAT44(0xc,local_50);
                  uStack_314._0_4_ = (undefined1 *)0x716738;
                  uStack_314._4_4_ = (uint *)iVar11;
                  uVar8 = FUN_0053a6d0();
                  uStack_314._0_4_ = (undefined1 *)0xffffffff;
                  local_8._0_1_ = 0xe1;
                  FUN_00408ed0(uVar8,0);
                  local_8 = CONCAT31(local_8._1_3_,1);
                  uStack_314._0_4_ = (undefined1 *)0x716754;
                  FUN_00408ad0();
                  if (*(int *)(param_1 + 0x10) != 0) {
                    uStack_314._0_4_ = (undefined1 *)0x716766;
                    FUN_00989030();
                  }
                  uStack_314 = CONCAT44(uStack_314._4_4_,7);
                  FUN_0053a6d0(iVar11,local_50);
                  local_8._0_1_ = 0xe2;
                  uStack_30c = CONCAT44(0x71677d,(undefined4 *)uStack_30c);
                  FUN_00989020();
                  uStack_30c = CONCAT44(0x716785,(undefined4 *)uStack_30c);
                  FUN_00408ad0();
                  piVar15 = param_2;
                  goto LAB_00718522;
                }
                uStack_30c = CONCAT44(0x71679a,(undefined4 *)uStack_30c);
                cVar7 = FUN_0040b360();
                if (cVar7 == '\0') {
                  uStack_30c = CONCAT44(0x7167b2,(undefined4 *)uStack_30c);
                  cVar7 = FUN_0040b360();
                  if (cVar7 == '\0') {
                    uStack_30c = CONCAT44(0x7167ca,(undefined4 *)uStack_30c);
                    cVar7 = FUN_0040b360();
                    if (cVar7 != '\0') {
                      uStack_30c = CONCAT44(0xb,local_50);
                      uStack_314 = CONCAT44(iVar11,0x7167da);
                      uVar8 = FUN_0053a6d0();
                      uStack_30c = 0xffffffff00000000;
                      local_8._0_1_ = 0xe6;
                      uStack_314 = CONCAT44(uVar8,0x7167ea);
                      FUN_00408ed0();
                      uStack_30c = CONCAT44(0x7167f2,(undefined4 *)uStack_30c);
                      FUN_00408ad0();
                      piVar15 = param_2;
                      goto LAB_00718522;
                    }
                    uStack_30c = CONCAT44(0x716807,(undefined4 *)uStack_30c);
                    cVar7 = FUN_0040b360();
                    if (cVar7 != '\0') {
                      uStack_30c = CONCAT44(8,local_50);
                      uStack_314 = CONCAT44(iVar11,0x716817);
                      uVar8 = FUN_0053a6d0();
                      uStack_30c = 0xffffffff00000000;
                      local_8._0_1_ = 0xe7;
                      uStack_314 = CONCAT44(uVar8,0x716827);
                      FUN_00408ed0();
                      uStack_30c = CONCAT44(0x71682f,(undefined4 *)uStack_30c);
                      FUN_00408ad0();
                      piVar15 = param_2;
                      goto LAB_00718522;
                    }
                    uStack_30c = CONCAT44(0x716844,(undefined4 *)uStack_30c);
                    cVar7 = FUN_0040b360();
                    if (cVar7 != '\0') {
                      uStack_30c = ZEXT48(local_50);
                      uStack_314 = CONCAT44(iVar11,0x716854);
                      uVar8 = FUN_0053a6d0();
                      uStack_30c = 0xffffffff00000000;
                      local_8._0_1_ = 0xe8;
                      uStack_314 = CONCAT44(uVar8,0x716864);
                      FUN_00408ed0();
                      uStack_30c = CONCAT44(0x71686c,(undefined4 *)uStack_30c);
                      FUN_00408ad0();
                      piVar15 = param_2;
                      goto LAB_00718522;
                    }
                    uStack_30c = CONCAT44(0x716881,(undefined4 *)uStack_30c);
                    cVar7 = FUN_0040b360();
                    if (cVar7 != '\0') {
                      uStack_30c = CONCAT44(1,local_50);
                      uStack_314 = CONCAT44(iVar11,0x716891);
                      uVar8 = FUN_0053a6d0();
                      uStack_30c = 0xffffffff00000000;
                      local_8._0_1_ = 0xe9;
                      uStack_314 = CONCAT44(uVar8,0x7168a1);
                      FUN_00408ed0();
                      uStack_30c = CONCAT44(0x7168a9,(undefined4 *)uStack_30c);
                      FUN_00408ad0();
                      piVar15 = param_2;
                      goto LAB_00718522;
                    }
                    uStack_30c = CONCAT44(0x7168be,(undefined4 *)uStack_30c);
                    cVar7 = FUN_0040b360();
                    if (cVar7 != '\0') {
                      uStack_30c = CONCAT44(2,local_50);
                      uStack_314 = CONCAT44(iVar11,0x7168ce);
                      uVar8 = FUN_0053a6d0();
                      uStack_30c = 0xffffffff00000000;
                      local_8._0_1_ = 0xea;
                      uStack_314 = CONCAT44(uVar8,0x7168de);
                      FUN_00408ed0();
                      uStack_30c = CONCAT44(0x7168e6,(undefined4 *)uStack_30c);
                      FUN_00408ad0();
                      piVar15 = param_2;
                      goto LAB_00718522;
                    }
                    uStack_30c = CONCAT44(0x7168fb,(undefined4 *)uStack_30c);
                    cVar7 = FUN_0040b360();
                    if (cVar7 != '\0') {
                      uStack_30c = CONCAT44(3,local_50);
                      uStack_314 = CONCAT44(iVar11,0x71690b);
                      uVar8 = FUN_0053a6d0();
                      uStack_30c = 0xffffffff00000000;
                      local_8._0_1_ = 0xeb;
                      uStack_314 = CONCAT44(uVar8,0x71691b);
                      FUN_00408ed0();
                      uStack_30c = CONCAT44(0x716923,(undefined4 *)uStack_30c);
                      FUN_00408ad0();
                      piVar15 = param_2;
                      goto LAB_00718522;
                    }
                    uStack_30c = CONCAT44(0x716938,(undefined4 *)uStack_30c);
                    cVar7 = FUN_0040b360();
                    if (cVar7 != '\0') {
                      uStack_30c = CONCAT44(4,local_50);
                      uStack_314 = CONCAT44(iVar11,0x716948);
                      uVar8 = FUN_0053a6d0();
                      uStack_30c = 0xffffffff00000000;
                      local_8._0_1_ = 0xec;
                      uStack_314 = CONCAT44(uVar8,0x716958);
                      FUN_00408ed0();
                      uStack_30c = CONCAT44(0x716960,(undefined4 *)uStack_30c);
                      FUN_00408ad0();
                      piVar15 = param_2;
                      goto LAB_00718522;
                    }
                    uStack_30c = CONCAT44(0x716975,(undefined4 *)uStack_30c);
                    cVar7 = FUN_0040b360();
                    if (cVar7 != '\0') {
                      uStack_30c = CONCAT44(5,local_50);
                      uStack_314 = CONCAT44(iVar11,0x716985);
                      uVar8 = FUN_0053a6d0();
                      uStack_30c = 0xffffffff00000000;
                      local_8._0_1_ = 0xed;
                      uStack_314 = CONCAT44(uVar8,0x716995);
                      FUN_00408ed0();
                      uStack_30c = CONCAT44(0x71699d,(undefined4 *)uStack_30c);
                      FUN_00408ad0();
                      piVar15 = param_2;
                      goto LAB_00718522;
                    }
                    uStack_30c = CONCAT44(0x7169b2,(undefined4 *)uStack_30c);
                    cVar7 = FUN_0040b360();
                    if (cVar7 != '\0') {
                      uStack_30c = CONCAT44(6,local_50);
                      uStack_314 = CONCAT44(iVar11,0x7169c2);
                      uVar8 = FUN_0053a6d0();
                      uStack_30c = 0xffffffff00000000;
                      local_8._0_1_ = 0xee;
                      uStack_314 = CONCAT44(uVar8,0x7169d2);
                      FUN_00408ed0();
                      uStack_30c = CONCAT44(0x7169da,(undefined4 *)uStack_30c);
                      FUN_00408ad0();
                      piVar15 = param_2;
                      goto LAB_00718522;
                    }
                    uStack_30c = CONCAT44(0x7169ef,(undefined4 *)uStack_30c);
                    cVar7 = FUN_0040b360();
                    if (cVar7 == '\0') {
                      uStack_30c = CONCAT44(0x716a07,(undefined4 *)uStack_30c);
                      cVar7 = FUN_0040b360();
                      if (cVar7 == '\0') {
                        uStack_30c = CONCAT44(0x716a1f,(undefined4 *)uStack_30c);
                        cVar7 = FUN_0040b360();
                        if (cVar7 == '\0') {
                          uStack_30c = CONCAT44(0x716a37,(undefined4 *)uStack_30c);
                          cVar7 = FUN_0040b360();
                          if (cVar7 == '\0') {
                            uStack_30c = CONCAT44(0x716a4f,(undefined4 *)uStack_30c);
                            cVar7 = FUN_0040b360();
                            if (cVar7 == '\0') {
                              uStack_30c = CONCAT44(0x716a67,(undefined4 *)uStack_30c);
                              cVar7 = FUN_0040b360();
                              if (cVar7 == '\0') {
                                uStack_30c = CONCAT44(0x716a7f,(undefined4 *)uStack_30c);
                                cVar7 = FUN_0040b360();
                                if (cVar7 == '\0') {
                                  uStack_30c = CONCAT44(0x716a97,(undefined4 *)uStack_30c);
                                  cVar7 = FUN_0040b360();
                                  if (cVar7 == '\0') {
                                    uStack_30c = CONCAT44(0x716aaf,(undefined4 *)uStack_30c);
                                    cVar7 = FUN_0040b360();
                                    if (cVar7 == '\0') {
                                      uStack_30c = CONCAT44(0x716ac7,(undefined4 *)uStack_30c);
                                      cVar7 = FUN_0040b360();
                                      if (cVar7 == '\0') {
                                        uStack_30c = CONCAT44(0x716c85,(undefined4 *)uStack_30c);
                                        cVar7 = FUN_0040b360();
                                        if (cVar7 == '\0') {
                                          uStack_30c = CONCAT44(0x717077,(undefined4 *)uStack_30c);
                                          cVar7 = FUN_0040b360();
                                          if (cVar7 == '\0') {
                                            uStack_30c = CONCAT44(0x71722d,(undefined4 *)uStack_30c)
                                            ;
                                            cVar7 = FUN_0040b360();
                                            if (cVar7 == '\0') {
                                              uStack_30c = CONCAT44(0x717245,(undefined4 *)
                                                                             uStack_30c);
                                              cVar7 = FUN_0040b360();
                                              if (cVar7 == '\0') {
                                                uStack_30c = CONCAT44(0x71725d,(undefined4 *)
                                                                               uStack_30c);
                                                cVar7 = FUN_0040b360();
                                                piVar15 = param_2;
                                                if (cVar7 != '\0') {
                                                  uStack_30c = CONCAT44(0x717275,(undefined4 *)
                                                                                 uStack_30c);
                                                  FUN_009885d0();
                                                  local_8 = 0x13b;
                                                  uStack_30c = CONCAT44(0x717289,(undefined4 *)
                                                                                 uStack_30c);
                                                  FUN_009885d0();
                                                  local_8._0_1_ = 0x3c;
                                                  uStack_30c = CONCAT44(local_1e8,0x7172a4);
                                                  param_2 = (int *)(**(code **)(**(int **)(*(int *)(
                                                  iVar11 + 0x84c) + 0x54) + 0x18))();
                                                  local_8._0_1_ = 0x3d;
                                                  uStack_30c = CONCAT44(local_18c,
                                                                        *(undefined4 *)
                                                                         (iVar11 + 0x84c));
                                                  uStack_314 = CONCAT44(0x7172be,(undefined1 *)
                                                                                 uStack_314);
                                                  FUN_009790b0();
                                                  local_8._0_1_ = 0x3e;
                                                  uStack_30c = CONCAT44(local_34,0x7172d2);
                                                  FUN_00988f20();
                                                  local_8._0_1_ = 0x3f;
                                                  uStack_30c = CONCAT44(param_2,0x7172e7);
                                                  FUN_00988f20();
                                                  local_8._0_1_ = 0x40;
                                                  uStack_30c = CONCAT44(local_90,0x7172ff);
                                                  uVar8 = FUN_00988f20();
                                                  uStack_30c = CONCAT44(uVar8,local_50);
                                                  local_8._0_1_ = 0x41;
                                                  uStack_314 = CONCAT44(0x717317,(undefined1 *)
                                                                                 uStack_314);
                                                  uVar8 = FUN_0042c180();
                                                  uStack_30c = 0xffffffff00000000;
                                                  local_8 = CONCAT31(local_8._1_3_,0x42);
                                                  uStack_314 = CONCAT44(uVar8,0x71732a);
                                                  FUN_00408ed0();
                                                  uStack_30c = CONCAT44(0x717332,(undefined4 *)
                                                                                 uStack_30c);
                                                  FUN_00408ad0();
                                                  uStack_30c = CONCAT44(0x717339,(undefined4 *)
                                                                                 uStack_30c);
                                                  FUN_00408ad0();
                                                  uStack_30c = CONCAT44(0x717344,(undefined4 *)
                                                                                 uStack_30c);
                                                  FUN_00408ad0();
                                                  uStack_30c = CONCAT44(0x71734f,(undefined4 *)
                                                                                 uStack_30c);
                                                  FUN_00408ad0();
                                                  uStack_30c = CONCAT44(0x71735a,(undefined4 *)
                                                                                 uStack_30c);
                                                  FUN_00408ad0();
                                                  uStack_30c = CONCAT44(0x717365,(undefined4 *)
                                                                                 uStack_30c);
                                                  FUN_00408ad0();
                                                  uStack_30c = CONCAT44(0x71736d,(undefined4 *)
                                                                                 uStack_30c);
                                                  FUN_00408ad0();
                                                  local_8 = 1;
                                                  uStack_30c = CONCAT44(0x71737f,(undefined4 *)
                                                                                 uStack_30c);
                                                  FUN_00408ad0();
                                                  piVar15 = (int *)(DAT_01258a48 + 0x28);
                                                  local_54 = *(int *)(iVar11 + 0x84c);
                                                  iVar11 = *(int *)(DAT_01258a48 + 0x2c) - *piVar15
                                                           >> 2;
                                                  local_124 = (ulonglong)(uint)local_124;
                                                  local_18 = CONCAT44(iVar11,(uint)local_18);
                                                  param_2 = piVar15;
                                                  if (0 < iVar11) {
                                                    do {
                                                      iVar11 = (int)local_124._4_4_ * 4;
                                                      uStack_30c = CONCAT44(0x7173c7,(undefined4 *)
                                                                                     uStack_30c);
                                                      cVar7 = (**(code **)(**(int **)(iVar11 + *
                                                  piVar15) + 0x18))();
                                                  if (cVar7 != '\0') {
                                                    if (*(int *)(param_1 + 0x2c) != 0) {
                                                      uStack_30c = CONCAT44(0x7173e2,(undefined4 *)
                                                                                     uStack_30c);
                                                      FUN_00989030();
                                                    }
                                                    uStack_30c = CONCAT44(0x7173f2,(undefined4 *)
                                                                                   uStack_30c);
                                                    FUN_009885d0();
                                                    local_8 = 0x143;
                                                    uStack_30c = CONCAT44(0x717409,(undefined4 *)
                                                                                   uStack_30c);
                                                    FUN_009885d0();
                                                    local_8._0_1_ = 0x44;
                                                    uStack_30c = CONCAT44(0x71741d,(undefined4 *)
                                                                                   uStack_30c);
                                                    piVar15 = (int *)FUN_00978100();
                                                    uStack_30c = CONCAT44(local_e4,0x71742d);
                                                    uVar8 = (**(code **)(*piVar15 + 0x18))();
                                                    local_8._0_1_ = 0x45;
                                                    uStack_30c = CONCAT44(*(undefined4 *)
                                                                           (*param_2 + iVar11),
                                                                          0x717447);
                                                    FUN_00974c50();
                                                    local_8._0_1_ = 0x46;
                                                    uStack_30c = CONCAT44(local_154,0x71745f);
                                                    FUN_00988f20();
                                                    local_8._0_1_ = 0x47;
                                                    uStack_30c = CONCAT44(uVar8,0x717471);
                                                    FUN_00988f20();
                                                    local_8._0_1_ = 0x48;
                                                    uStack_30c = CONCAT44(local_1b0,0x717489);
                                                    FUN_00988f20();
                                                    local_8 = CONCAT31(local_8._1_3_,0x49);
                                                    uStack_30c = CONCAT44(0x717498,(undefined4 *)
                                                                                   uStack_30c);
                                                    FUN_00989020();
                                                    uStack_30c = CONCAT44(0x7174a3,(undefined4 *)
                                                                                   uStack_30c);
                                                    FUN_00408ad0();
                                                    uStack_30c = CONCAT44(0x7174ae,(undefined4 *)
                                                                                   uStack_30c);
                                                    FUN_00408ad0();
                                                    uStack_30c = CONCAT44(0x7174b9,(undefined4 *)
                                                                                   uStack_30c);
                                                    FUN_00408ad0();
                                                    uStack_30c = CONCAT44(0x7174c4,(undefined4 *)
                                                                                   uStack_30c);
                                                    FUN_00408ad0();
                                                    uStack_30c = CONCAT44(0x7174cf,(undefined4 *)
                                                                                   uStack_30c);
                                                    FUN_00408ad0();
                                                    uStack_30c = CONCAT44(0x7174da,(undefined4 *)
                                                                                   uStack_30c);
                                                    FUN_00408ad0();
                                                    local_8 = 1;
                                                    uStack_30c = CONCAT44(0x7174ec,(undefined4 *)
                                                                                   uStack_30c);
                                                    FUN_00408ad0();
                                                    piVar15 = param_2;
                                                  }
                                                  iVar11 = (int)local_124._4_4_ + 1;
                                                  local_124 = CONCAT44(iVar11,(uint)local_124);
                                                  } while (iVar11 < local_18._4_4_);
                                                  }
                                                  uStack_30c = CONCAT44(0x717515,(undefined4 *)
                                                                                 uStack_30c);
                                                  FUN_00989030();
                                                  uStack_30c = CONCAT44(local_50,local_54);
                                                  uStack_314 = CONCAT44(0x717522,(undefined1 *)
                                                                                 uStack_314);
                                                  FUN_00978130();
                                                  local_8._0_1_ = 0x4a;
                                                  local_8._1_3_ = 1;
                                                  uStack_30c = CONCAT44(0x71752e,(undefined4 *)
                                                                                 uStack_30c);
                                                  FUN_00989020();
                                                  uStack_30c = CONCAT44(0x717536,(undefined4 *)
                                                                                 uStack_30c);
                                                  FUN_00408ad0();
                                                  piVar15 = param_2;
                                                }
                                                goto LAB_00718522;
                                              }
                                            }
                                            param_2 = (int *)&uStack_30c;
                                            uStack_30c = CONCAT44(2,*(undefined4 *)(iVar11 + 0x1430)
                                                                 );
                                            uStack_314 = CONCAT44(local_c8,0x717557);
                                            uVar8 = FUN_00988a50();
                                            uStack_30c = CONCAT44(uVar8,local_50);
                                            local_8 = 0x136;
                                            uStack_314 = CONCAT44(0x717572,(undefined1 *)uStack_314)
                                            ;
                                            uVar8 = FUN_0042c180();
                                            uStack_30c = 0xffffffff00000000;
                                            local_8 = CONCAT31(local_8._1_3_,0x37);
                                            uStack_314 = CONCAT44(uVar8,0x717585);
                                            FUN_00408ed0();
                                            uStack_30c = CONCAT44(0x71758d,(undefined4 *)uStack_30c)
                                            ;
                                            FUN_00408ad0();
                                            local_8 = 1;
                                            uStack_30c = CONCAT44(0x71759f,(undefined4 *)uStack_30c)
                                            ;
                                            FUN_00408ad0();
                                            if (*(int *)(iVar11 + 0x1430) != 0) {
                                              uStack_30c = CONCAT44(local_c8,0x7175c0);
                                              uVar8 = (**(code **)(*(int *)(iVar11 + 0x60c) + 0x1c))
                                                                ();
                                              local_8 = 0x138;
                                              uStack_30c = CONCAT44(uVar8,0x7175d5);
                                              FUN_00988fa0();
                                              local_8 = CONCAT31(local_8._1_3_,0x39);
                                              uStack_30c = CONCAT44(0x7175e3,(undefined4 *)
                                                                             uStack_30c);
                                              FUN_00989020();
                                              uStack_30c = CONCAT44(0x7175eb,(undefined4 *)
                                                                             uStack_30c);
                                              FUN_00408ad0();
                                              local_8 = 1;
                                              uStack_30c = CONCAT44(0x7175fd,(undefined4 *)
                                                                             uStack_30c);
                                              FUN_00408ad0();
                                            }
                                            uStack_30c = CONCAT44(local_50,iVar11);
                                            uStack_314 = CONCAT44(0x717607,(undefined1 *)uStack_314)
                                            ;
                                            FUN_00534210();
                                            local_8._0_1_ = 0x3a;
                                            local_8._1_3_ = 1;
                                            uStack_30c = CONCAT44(0x717616,(undefined4 *)uStack_30c)
                                            ;
                                            FUN_00989020();
                                            uStack_30c = CONCAT44(0x71761e,(undefined4 *)uStack_30c)
                                            ;
                                            FUN_00408ad0();
                                            piVar15 = param_2;
                                          }
                                          else {
                                            uStack_30c = CONCAT44(0x71708c,(undefined4 *)uStack_30c)
                                            ;
                                            FUN_009885d0();
                                            local_8 = 300;
                                            uStack_30c = CONCAT44(0x7170a3,(undefined4 *)uStack_30c)
                                            ;
                                            local_104 = (uint *)FUN_009885d0();
                                            param_2 = (int *)&uStack_30c;
                                            local_8._0_1_ = 0x2d;
                                            uStack_30c = CONCAT44(2,*(undefined4 *)(iVar11 + 0x15a0)
                                                                 );
                                            uStack_314 = CONCAT44(local_1e8,0x7170c9);
                                            local_60 = (uint *)FUN_00988a50();
                                            local_8._0_1_ = 0x2e;
                                            uStack_30c = CONCAT44(0x7170e0,(undefined4 *)uStack_30c)
                                            ;
                                            uVar8 = FUN_009885d0();
                                            local_18 = CONCAT44(uVar8,(uint)local_18);
                                            uStack_30c = CONCAT44(local_34,local_dc);
                                            local_8._0_1_ = 0x2f;
                                            uStack_314 = CONCAT44(0x7170f7,(undefined1 *)uStack_314)
                                            ;
                                            param_2 = (int *)FUN_009a8ee0();
                                            local_8._0_1_ = 0x30;
                                            uStack_30c = CONCAT44(0x717103,(undefined4 *)uStack_30c)
                                            ;
                                            FUN_00475500();
                                            uStack_30c = CONCAT44(0x717110,(undefined4 *)uStack_30c)
                                            ;
                                            puVar14 = (undefined8 *)FUN_0040b440();
                                            uStack_314 = *puVar14;
                                            uStack_30c = puVar14[1];
                                            FUN_009a9880();
                                            local_8._0_1_ = 0x31;
                                            uStack_30c = CONCAT44((int)((ulonglong)local_18 >> 0x20)
                                                                  ,0x71714a);
                                            FUN_00988f20();
                                            local_8._0_1_ = 0x32;
                                            uStack_30c = CONCAT44(local_60,0x71715f);
                                            FUN_00988f20();
                                            local_8._0_1_ = 0x33;
                                            uStack_30c = CONCAT44(local_104,0x717174);
                                            uVar8 = FUN_00988f20();
                                            uStack_30c = 0xffffffff00000000;
                                            local_8._0_1_ = 0x34;
                                            uStack_314 = CONCAT44(uVar8,0x717184);
                                            FUN_00408ed0();
                                            uStack_30c = CONCAT44(0x71718b,(undefined4 *)uStack_30c)
                                            ;
                                            FUN_00408ad0();
                                            uStack_30c = CONCAT44(0x717196,(undefined4 *)uStack_30c)
                                            ;
                                            FUN_00408ad0();
                                            uStack_30c = CONCAT44(0x7171a1,(undefined4 *)uStack_30c)
                                            ;
                                            FUN_00408ad0();
                                            uStack_30c = CONCAT44(0x7171ac,(undefined4 *)uStack_30c)
                                            ;
                                            FUN_00408ad0();
                                            local_8 = CONCAT31(local_8._1_3_,0x2f);
                                            uStack_30c = CONCAT44(local_dc,0x7171bc);
                                            FUN_009a9740();
                                            uStack_30c = CONCAT44(0x7171c7,(undefined4 *)uStack_30c)
                                            ;
                                            FUN_00408ad0();
                                            uStack_30c = CONCAT44(0x7171d2,(undefined4 *)uStack_30c)
                                            ;
                                            FUN_00408ad0();
                                            uStack_30c = CONCAT44(0x7171dd,(undefined4 *)uStack_30c)
                                            ;
                                            FUN_00408ad0();
                                            local_8 = 1;
                                            uStack_30c = CONCAT44(0x7171ec,(undefined4 *)uStack_30c)
                                            ;
                                            FUN_00408ad0();
                                            uStack_30c = CONCAT44(local_224,iVar11);
                                            uStack_314 = CONCAT44(0x7171f9,(undefined1 *)uStack_314)
                                            ;
                                            uVar8 = FUN_005410d0();
                                            uStack_30c = 0xffffffff00000000;
                                            local_8._0_1_ = 0x35;
                                            local_8._1_3_ = 1;
                                            uStack_314 = CONCAT44(uVar8,0x71720d);
                                            FUN_00408ed0();
                                            uStack_30c = CONCAT44(0x717218,(undefined4 *)uStack_30c)
                                            ;
                                            FUN_00408ad0();
                                            piVar15 = param_2;
                                          }
                                        }
                                        else {
                                          uStack_30c = CONCAT44(0x716c97,(undefined4 *)uStack_30c);
                                          FUN_0052b510();
                                          uStack_30c = CONCAT44(0x716ca1,(undefined4 *)uStack_30c);
                                          FUN_0052b5d0();
                                          param_2 = (int *)&uStack_30c;
                                          uStack_314 = CONCAT44(0x716cb0,(undefined1 *)uStack_314);
                                          FUN_0041a3a0();
                                          uStack_314._0_4_ = local_170;
                                          uStack_314._4_4_ = (uint *)0x1;
                                          uVar8 = FUN_00988bb0();
                                          uStack_30c = CONCAT44(1,(undefined4 *)uStack_30c);
                                          param_2 = (int *)((int)&uStack_314 + 4);
                                          uStack_314._0_4_ = (undefined1 *)((int)&uStack_314 + 4);
                                          local_8 = 0x11e;
                                          FUN_0043a680();
                                          uStack_314 = CONCAT44(uStack_314._4_4_,local_c8);
                                          uVar12 = FUN_009c83c0();
                                          local_8._0_1_ = 0x1f;
                                          uVar8 = FUN_0043ec10(local_50,"YESTERDAY",uVar12,
                                                               &DAT_00e0e9a4,uVar8);
                                          iVar13 = 0;
                                          uStack_30c = 0xffffffff00000000;
                                          local_8 = CONCAT31(local_8._1_3_,0x20);
                                          uStack_314 = CONCAT44(uVar8,0x716d1f);
                                          FUN_00408ed0();
                                          uStack_30c = CONCAT44(0x716d27,(undefined4 *)uStack_30c);
                                          FUN_00408ad0();
                                          uStack_30c = CONCAT44(0x716d32,(undefined4 *)uStack_30c);
                                          FUN_00408ad0();
                                          uStack_30c = CONCAT44(0x716d3d,(undefined4 *)uStack_30c);
                                          FUN_00408ad0();
                                          local_12c = (undefined4 *)0x0;
                                          local_128 = 0;
                                          local_124 = ZEXT48(local_124._4_4_) << 0x20;
                                          local_8 = 0x121;
                                          uStack_30c = CONCAT44(0x716d64,(undefined4 *)uStack_30c);
                                          FUN_0043a880();
                                          iVar10 = **(int **)(iVar11 + 0xa0);
                                          *local_12c = *(undefined4 *)(iVar10 + 0x10);
                                          local_12c[1] = *(undefined4 *)(iVar10 + 0x14);
                                          iVar10 = *(int *)(*(int *)(iVar11 + 0xa0) + 4);
                                          local_12c[2] = *(undefined4 *)(iVar10 + 0x10);
                                          local_12c[3] = *(undefined4 *)(iVar10 + 0x14);
                                          iVar10 = *(int *)(*(int *)(iVar11 + 0xa0) + 8);
                                          uVar8 = *(undefined4 *)(iVar10 + 0x14);
                                          local_12c[4] = *(undefined4 *)(iVar10 + 0x10);
                                          local_12c[5] = uVar8;
                                          uStack_30c = CONCAT44(&local_12c,local_2f8);
                                          uStack_314 = CONCAT44(iVar11,0x716db7);
                                          FUN_0052a080();
                                          local_110 = 0;
                                          local_10c = 0;
                                          local_108 = (longlong *)0x0;
                                          local_8 = CONCAT31(local_8._1_3_,0x23);
                                          uStack_30c = CONCAT44(0x716ddb,(undefined4 *)uStack_30c);
                                          FUN_0043a880();
                                          iVar10 = local_110;
                                          do {
                                            uStack_30c = CONCAT44(iVar13,0x716def);
                                            puVar18 = (undefined4 *)FUN_0051b680();
                                            *(undefined4 *)(iVar10 + iVar13 * 8) = *puVar18;
                                            *(undefined4 *)(iVar10 + 4 + iVar13 * 8) = puVar18[1];
                                            iVar13 = iVar13 + 1;
                                          } while (iVar13 < 4);
                                          uStack_30c = ZEXT48(&local_110);
                                          uStack_314 = CONCAT44(local_29c,iVar11);
                                          FUN_00528c60();
                                          uStack_30c = CONCAT44(&DAT_00dfd24c,local_2f8);
                                          local_8._0_1_ = 0x24;
                                          uStack_314 = CONCAT44(0x716e31,(undefined1 *)uStack_314);
                                          FUN_00989720();
                                          uStack_30c = CONCAT44(&DAT_00dfd24c,local_2dc);
                                          uStack_314 = CONCAT44(0x716e42,(undefined1 *)uStack_314);
                                          FUN_00989720();
                                          uStack_30c = CONCAT44(&DAT_00e0203c,local_29c);
                                          uStack_314 = CONCAT44(0x716e53,(undefined1 *)uStack_314);
                                          FUN_00989720();
                                          uStack_30c = CONCAT44(&DAT_00e0203c,local_280);
                                          uStack_314 = CONCAT44(0x716e64,(undefined1 *)uStack_314);
                                          FUN_00989720();
                                          uStack_30c = CONCAT44(0x716e71,(undefined4 *)uStack_30c);
                                          FUN_009885d0();
                                          local_8._0_1_ = 0x25;
                                          uStack_30c = CONCAT44(local_34,0x716e86);
                                          FUN_00988f20();
                                          local_8._0_1_ = 0x26;
                                          uStack_30c = CONCAT44(0x716e97,(undefined4 *)uStack_30c);
                                          FUN_00989020();
                                          uStack_30c = CONCAT44(0x716e9f,(undefined4 *)uStack_30c);
                                          FUN_00408ad0();
                                          local_8._0_1_ = 0x24;
                                          uStack_30c = CONCAT44(0x716eab,(undefined4 *)uStack_30c);
                                          FUN_00408ad0();
                                          uStack_30c = CONCAT44(0x716eb6,(undefined4 *)uStack_30c);
                                          FUN_00989020();
                                          uStack_30c = CONCAT44(0x716ec6,(undefined4 *)uStack_30c);
                                          FUN_009885d0();
                                          local_8._0_1_ = 0x27;
                                          uStack_30c = CONCAT44(local_90,0x716edb);
                                          FUN_00988f20();
                                          local_8._0_1_ = 0x28;
                                          uStack_30c = CONCAT44(0x716ee6,(undefined4 *)uStack_30c);
                                          FUN_00989020();
                                          uStack_30c = CONCAT44(0x716eee,(undefined4 *)uStack_30c);
                                          FUN_00408ad0();
                                          local_8._0_1_ = 0x24;
                                          uStack_30c = CONCAT44(0x716efd,(undefined4 *)uStack_30c);
                                          FUN_00408ad0();
                                          uStack_30c = CONCAT44(0x716f08,(undefined4 *)uStack_30c);
                                          FUN_00989020();
                                          param_2 = *(int **)(DAT_012588e8 + 0xbcc);
                                          local_18 = CONCAT44(&uStack_30c,(uint)local_18);
                                          uStack_314 = CONCAT44(0x716f26,(undefined1 *)uStack_314);
                                          FUN_0047e500();
                                          uStack_314 = *(undefined8 *)(iVar11 + 0x1c);
                                          FUN_005fcdd0();
                                          uStack_30c = CONCAT44(iVar11,0x716f47);
                                          FUN_0052b5a0();
                                          uStack_30c = CONCAT44(iVar11,0x716f58);
                                          FUN_0052b4e0();
                                          uStack_30c = ZEXT48(&local_110);
                                          uStack_314 = CONCAT44(&local_ec,iVar11);
                                          param_2 = (int *)FUN_0052b1c0();
                                          uStack_30c = CONCAT44(&local_12c,iVar11);
                                          uStack_314 = CONCAT44(0x716f84,(undefined1 *)uStack_314);
                                          FUN_0052b610();
                                          uStack_30c._4_4_ = &local_64;
                                          uStack_30c._0_4_ = (undefined4 *)0x716f92;
                                          FUN_0043a680();
                                          uStack_30c = CONCAT44(uStack_30c._4_4_,&local_18);
                                          uStack_314 = CONCAT44(0x716fa0,(undefined1 *)uStack_314);
                                          FUN_004236c0();
                                          param_2 = (int *)((int)&uStack_314 + 4);
                                          uStack_314 = CONCAT44((uint)local_18 +
                                                                ((uint)local_74 - local_194),
                                                                local_170);
                                          uStack_30c = CONCAT44(2,local_18._4_4_ +
                                                                  ((local_74._4_4_ - local_190) -
                                                                  (uint)((uint)local_74 < local_194)
                                                                  ) + (uint)CARRY4((uint)local_18,
                                                                                   (uint)local_74 -
                                                                                   local_194));
                                          uVar8 = FUN_009c83c0();
                                          local_8._0_1_ = 0x29;
                                          uVar8 = FUN_0042c180(local_c8,uVar8);
                                          local_8._0_1_ = 0x2a;
                                          FUN_00988fa0(uVar8);
                                          local_8._0_1_ = 0x2b;
                                          uStack_30c = CONCAT44(0x717015,(undefined4 *)uStack_30c);
                                          FUN_00989020();
                                          uStack_30c = CONCAT44(0x71701d,(undefined4 *)uStack_30c);
                                          FUN_00408ad0();
                                          uStack_30c = CONCAT44(0x717028,(undefined4 *)uStack_30c);
                                          FUN_00408ad0();
                                          uStack_30c = CONCAT44(0x717033,(undefined4 *)uStack_30c);
                                          FUN_00408ad0();
                                          uStack_30c = CONCAT44(0x71703e,(undefined4 *)uStack_30c);
                                          FUN_00459820();
                                          uStack_30c = CONCAT44(0x717049,(undefined4 *)uStack_30c);
                                          FUN_00aa8540();
                                          uStack_30c = CONCAT44(0x717054,(undefined4 *)uStack_30c);
                                          FUN_00459820();
                                          uStack_30c = CONCAT44(0x71705f,(undefined4 *)uStack_30c);
                                          FUN_00aa8540();
                                          piVar15 = param_2;
                                        }
                                      }
                                      else {
                                        param_2 = (int *)(DAT_012588e8 + 0xccc);
                                        piVar15 = param_2;
                                        if (*(int *)(DAT_012588e8 + 0xccc) != 0) {
                                          puVar14 = *(undefined8 **)(DAT_012588e8 + 0xcc4);
                                          local_108 = *(longlong **)puVar14;
                                          local_104 = *(uint **)((int)puVar14 + 4);
                                          local_64 = local_108;
                                          local_60 = local_104;
                                          do {
                                            uVar8 = *(undefined4 *)puVar14;
                                            local_6c._4_4_ = *(undefined4 *)((int)puVar14 + 4);
                                            uStack_30c = *puVar14;
                                            puVar14 = *(undefined8 **)((int)puVar14 + 0xc);
                                            uStack_314 = CONCAT44(local_104,local_108);
                                            local_18 = CONCAT44(&uStack_314,(int)local_18);
                                            puVar18 = (undefined4 *)FUN_004730d0();
                                            local_108 = (longlong *)*puVar18;
                                            local_104 = (uint *)puVar18[1];
                                            uStack_30c = CONCAT44(local_6c._4_4_,uVar8);
                                            uStack_314 = CONCAT44(local_60,local_64);
                                            local_18 = CONCAT44(&uStack_314,(int)local_18);
                                            puVar18 = (undefined4 *)FUN_0048bfc0();
                                            local_64 = (longlong *)*puVar18;
                                            local_60 = (uint *)puVar18[1];
                                          } while (puVar14 != (undefined8 *)0x0);
                                          uStack_30c = CONCAT44(1,local_60);
                                          local_18 = CONCAT44((int)&uStack_314 + 4,(uint)local_18);
                                          uStack_314 = CONCAT44(local_64,local_1cc);
                                          uVar8 = FUN_009c83c0();
                                          local_8 = 0x11a;
                                          uStack_30c = CONCAT44(1,local_104);
                                          local_18 = CONCAT44((int)&uStack_314 + 4,(uint)local_18);
                                          uStack_314 = CONCAT44(local_108,local_170);
                                          uVar12 = FUN_009c83c0();
                                          local_8._0_1_ = 0x1b;
                                          uStack_30c = CONCAT44(local_c8,0x716c10);
                                          uVar19 = FUN_009888f0();
                                          uStack_30c = CONCAT44(uVar8,&DAT_00e11334);
                                          uStack_314 = CONCAT44(uVar12,&DAT_00dfad2c);
                                          local_8._0_1_ = 0x1c;
                                          uVar8 = FUN_0043e9a0(local_50,&DAT_00dff69c,uVar19);
                                          uStack_30c = 0xffffffff00000000;
                                          local_8._0_1_ = 0x1d;
                                          uStack_314 = CONCAT44(uVar8,0x716c47);
                                          FUN_00408ed0();
                                          uStack_30c = CONCAT44(0x716c4f,(undefined4 *)uStack_30c);
                                          FUN_00408ad0();
                                          uStack_30c = CONCAT44(0x716c5a,(undefined4 *)uStack_30c);
                                          FUN_00408ad0();
                                          uStack_30c = CONCAT44(0x716c65,(undefined4 *)uStack_30c);
                                          FUN_00408ad0();
                                          uStack_30c = CONCAT44(0x716c70,(undefined4 *)uStack_30c);
                                          FUN_00408ad0();
                                          piVar15 = param_2;
                                        }
                                      }
                                      goto LAB_00718522;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    local_60 = (uint *)(DAT_012587f4 * 0x10);
                    local_54 = *(int *)(in_ECX + 0x30) * 0x58 +
                               *(int *)(*(int *)(DAT_012588e8 + 0xbcc) + 0x814);
                    param_2 = (int *)(*(int *)(in_ECX + 0x30) * 0x58 +
                                     *(int *)(*(int *)(DAT_012588e8 + 0xbcc) + 0x7d4));
                    iVar11 = 0;
                    if (0 < DAT_012587f4) {
                      local_124 = CONCAT44(&stack0xfffffcfc,(uint)local_124);
                      local_18 = CONCAT44(local_54 - (int)param_2,(uint)local_18);
                      do {
                        pbVar1 = (byte *)(iVar11 + 8 + (int)param_2);
                        local_74 = *(undefined8 *)
                                    (*(int *)(local_54 + 0x48) + (uint)pbVar1[local_18._4_4_] * 8);
                        puVar17 = (uint *)(*(int *)((int)param_2 + 0x48) + (uint)*pbVar1 * 8);
                        local_194 = *puVar17;
                        local_190 = puVar17[1];
                        uStack_30c = CONCAT44(&local_ec,0x7176d4);
                        piVar15 = (int *)FUN_0043a680();
                        iVar10 = *piVar15;
                        iVar13 = piVar15[1];
                        *local_124._4_4_ = iVar11;
                        local_124._4_4_[2] = iVar10;
                        local_124._4_4_[3] = iVar13;
                        iVar11 = iVar11 + 1;
                        local_124 = CONCAT44(local_124._4_4_ + 4,(uint)local_124);
                      } while (iVar11 < DAT_012587f4);
                    }
                    uVar16 = (uint)param_2;
                    param_2 = (int *)((uint)param_2 & 0xffffff00);
                    uStack_30c = CONCAT44(uVar16,&stack0xfffffcfc) & 0xffffff00ffffffff;
                    uStack_314 = CONCAT44(0x717713,(undefined1 *)uStack_314);
                    FUN_00719610();
                    uStack_30c = CONCAT44(0x717726,(undefined4 *)uStack_30c);
                    FUN_009885d0();
                    local_8._0_1_ = 0xef;
                    uStack_30c = CONCAT44(0x717737,(undefined4 *)uStack_30c);
                    FUN_009885d0();
                    uStack_30c = CONCAT44(local_34,local_dc);
                    local_8._0_1_ = 0xf0;
                    uStack_314 = CONCAT44(0x71774a,(undefined1 *)uStack_314);
                    param_2 = (int *)FUN_009a8ee0();
                    local_8._0_1_ = 0xf1;
                    uStack_30c = CONCAT44(0x717756,(undefined4 *)uStack_30c);
                    FUN_00475500();
                    uStack_30c = CONCAT44(0x717763,(undefined4 *)uStack_30c);
                    puVar14 = (undefined8 *)FUN_0040b440();
                    uStack_314 = *puVar14;
                    uStack_30c = puVar14[1];
                    FUN_009a9880();
                    local_8._0_1_ = 0xf2;
                    uStack_30c = CONCAT44(local_90,0x71779d);
                    FUN_00988f20();
                    local_8._0_1_ = 0xf3;
                    uStack_30c = CONCAT44(0x7177a8,(undefined4 *)uStack_30c);
                    FUN_00989020();
                    uStack_30c = CONCAT44(0x7177b0,(undefined4 *)uStack_30c);
                    FUN_00408ad0();
                    uStack_30c = CONCAT44(0x7177bb,(undefined4 *)uStack_30c);
                    FUN_00408ad0();
                    local_8._0_1_ = 0xf0;
                    uStack_30c = CONCAT44(local_dc,0x7177cb);
                    FUN_009a9740();
                    uStack_30c = CONCAT44(0x7177d3,(undefined4 *)uStack_30c);
                    FUN_00408ad0();
                    local_8._0_1_ = 1;
                    uStack_30c = CONCAT44(0x7177e2,(undefined4 *)uStack_30c);
                    FUN_00408ad0();
                    local_6c = 0;
                    uStack_30c = CONCAT44(0x7177f6,(undefined4 *)uStack_30c);
                    cVar7 = FUN_0043a700();
                    if (cVar7 != '\0') {
                      uStack_30c = CONCAT44(0x71780e,(undefined4 *)uStack_30c);
                      FUN_009885d0();
                      local_8._0_1_ = 0xf4;
                      uStack_30c = CONCAT44(0x71781f,(undefined4 *)uStack_30c);
                      FUN_009885d0();
                      local_8._0_1_ = 0xf5;
                      param_2 = (int *)&uStack_30c;
                      uStack_314 = CONCAT44(2,local_1e8);
                      param_2 = (int *)FUN_00988bb0();
                      local_8._0_1_ = 0xf6;
                      uStack_30c = CONCAT44(local_18c,
                                            *(undefined4 *)
                                             (*(int *)(DAT_012587f0 + 0xc) + unaff_EDI * 4));
                      uStack_314 = CONCAT44(0x717866,(undefined1 *)uStack_314);
                      uVar8 = FUN_005659c0();
                      local_8._0_1_ = 0xf7;
                      uStack_30c = CONCAT44(uVar8,0x71787b);
                      FUN_00988fa0();
                      local_8._0_1_ = 0xf8;
                      uStack_30c = CONCAT44(local_34,0x717892);
                      FUN_00988f20();
                      local_8._0_1_ = 0xf9;
                      uStack_30c = CONCAT44(param_2,0x7178a7);
                      FUN_00988f20();
                      local_8._0_1_ = 0xfa;
                      uStack_30c = CONCAT44(local_90,0x7178bc);
                      FUN_00988f20();
                      local_8._0_1_ = 0xfb;
                      uStack_30c = CONCAT44(0x7178c7,(undefined4 *)uStack_30c);
                      FUN_00989020();
                      uStack_30c = CONCAT44(0x7178cf,(undefined4 *)uStack_30c);
                      FUN_00408ad0();
                      uStack_30c = CONCAT44(0x7178da,(undefined4 *)uStack_30c);
                      FUN_00408ad0();
                      uStack_30c = CONCAT44(0x7178e5,(undefined4 *)uStack_30c);
                      FUN_00408ad0();
                      uStack_30c = CONCAT44(0x7178f0,(undefined4 *)uStack_30c);
                      FUN_00408ad0();
                      uStack_30c = CONCAT44(0x7178fb,(undefined4 *)uStack_30c);
                      FUN_00408ad0();
                      uStack_30c = CONCAT44(0x717906,(undefined4 *)uStack_30c);
                      FUN_00408ad0();
                      uStack_30c = CONCAT44(0x71790e,(undefined4 *)uStack_30c);
                      FUN_00408ad0();
                      local_8._0_1_ = 1;
                      uStack_30c = CONCAT44(0x71791d,(undefined4 *)uStack_30c);
                      FUN_00408ad0();
                    }
                    local_6c = 0;
                    uStack_30c = CONCAT44(0x717931,(undefined4 *)uStack_30c);
                    cVar7 = FUN_0043a700();
                    if (cVar7 != '\0') {
                      uStack_30c = CONCAT44(0x717949,(undefined4 *)uStack_30c);
                      FUN_009885d0();
                      local_8._0_1_ = 0xfc;
                      uStack_30c = CONCAT44(0x71795a,(undefined4 *)uStack_30c);
                      FUN_009885d0();
                      local_8._0_1_ = 0xfd;
                      param_2 = (int *)&uStack_30c;
                      uStack_314 = CONCAT44(2,local_1e8);
                      param_2 = (int *)FUN_00988bb0();
                      local_8._0_1_ = 0xfe;
                      uStack_30c = CONCAT44(local_18c,
                                            *(undefined4 *)
                                             (*(int *)(DAT_012587f0 + 0xc) + iStack_2f4 * 4));
                      uStack_314 = CONCAT44(0x7179a2,(undefined1 *)uStack_314);
                      uVar8 = FUN_005659c0();
                      local_8 = CONCAT31(local_8._1_3_,0xff);
                      uStack_30c = CONCAT44(uVar8,0x7179b7);
                      FUN_00988fa0();
                      local_8 = 0x100;
                      uStack_30c = CONCAT44(local_34,0x7179d1);
                      FUN_00988f20();
                      local_8._0_1_ = 1;
                      uStack_30c = CONCAT44(param_2,0x7179e6);
                      FUN_00988f20();
                      local_8._0_1_ = 2;
                      uStack_30c = CONCAT44(local_90,0x7179fb);
                      FUN_00988f20();
                      local_8 = CONCAT31(local_8._1_3_,3);
                      uStack_30c = CONCAT44(0x717a06,(undefined4 *)uStack_30c);
                      FUN_00989020();
                      uStack_30c = CONCAT44(0x717a0e,(undefined4 *)uStack_30c);
                      FUN_00408ad0();
                      uStack_30c = CONCAT44(0x717a19,(undefined4 *)uStack_30c);
                      FUN_00408ad0();
                      uStack_30c = CONCAT44(0x717a24,(undefined4 *)uStack_30c);
                      FUN_00408ad0();
                      local_8 = 0xff;
                      uStack_30c = CONCAT44(0x717a36,(undefined4 *)uStack_30c);
                      FUN_00408ad0();
                      uStack_30c = CONCAT44(0x717a41,(undefined4 *)uStack_30c);
                      FUN_00408ad0();
                      uStack_30c = CONCAT44(0x717a4c,(undefined4 *)uStack_30c);
                      FUN_00408ad0();
                      uStack_30c = CONCAT44(0x717a54,(undefined4 *)uStack_30c);
                      FUN_00408ad0();
                      local_8._0_1_ = 1;
                      uStack_30c = CONCAT44(0x717a63,(undefined4 *)uStack_30c);
                      FUN_00408ad0();
                    }
                    local_6c = 0;
                    uStack_30c = CONCAT44(0x717a77,(undefined4 *)uStack_30c);
                    cVar7 = FUN_0043a700();
                    if (cVar7 != '\0') {
                      uStack_30c = CONCAT44(0x717a8f,(undefined4 *)uStack_30c);
                      FUN_009885d0();
                      local_8 = 0x104;
                      uStack_30c = CONCAT44(0x717aa3,(undefined4 *)uStack_30c);
                      FUN_009885d0();
                      local_8._0_1_ = 5;
                      param_2 = (int *)&uStack_30c;
                      uStack_314 = CONCAT44(2,local_1e8);
                      param_2 = (int *)FUN_00988bb0();
                      local_8._0_1_ = 6;
                      uStack_30c = CONCAT44(local_18c,
                                            *(undefined4 *)
                                             (*(int *)(DAT_012587f0 + 0xc) + iStack_2e4 * 4));
                      uStack_314 = CONCAT44(0x717aeb,(undefined1 *)uStack_314);
                      uVar8 = FUN_005659c0();
                      local_8._0_1_ = 7;
                      uStack_30c = CONCAT44(uVar8,0x717b00);
                      FUN_00988fa0();
                      local_8._0_1_ = 8;
                      uStack_30c = CONCAT44(local_34,0x717b17);
                      FUN_00988f20();
                      local_8._0_1_ = 9;
                      uStack_30c = CONCAT44(param_2,0x717b2c);
                      FUN_00988f20();
                      local_8._0_1_ = 10;
                      uStack_30c = CONCAT44(local_90,0x717b41);
                      FUN_00988f20();
                      local_8 = CONCAT31(local_8._1_3_,0xb);
                      uStack_30c = CONCAT44(0x717b4c,(undefined4 *)uStack_30c);
                      FUN_00989020();
                      uStack_30c = CONCAT44(0x717b54,(undefined4 *)uStack_30c);
                      FUN_00408ad0();
                      uStack_30c = CONCAT44(0x717b5f,(undefined4 *)uStack_30c);
                      FUN_00408ad0();
                      uStack_30c = CONCAT44(0x717b6a,(undefined4 *)uStack_30c);
                      FUN_00408ad0();
                      uStack_30c = CONCAT44(0x717b75,(undefined4 *)uStack_30c);
                      FUN_00408ad0();
                      uStack_30c = CONCAT44(0x717b80,(undefined4 *)uStack_30c);
                      FUN_00408ad0();
                      uStack_30c = CONCAT44(0x717b8b,(undefined4 *)uStack_30c);
                      FUN_00408ad0();
                      uStack_30c = CONCAT44(0x717b93,(undefined4 *)uStack_30c);
                      FUN_00408ad0();
                      local_8._0_1_ = 1;
                      local_8._1_3_ = 0;
                      uStack_30c = CONCAT44(0x717ba5,(undefined4 *)uStack_30c);
                      FUN_00408ad0();
                    }
                    local_6c = 0;
                    uStack_30c = CONCAT44(0x717bb9,(undefined4 *)uStack_30c);
                    cVar7 = FUN_0043a700();
                    if (cVar7 != '\0') {
                      uStack_30c = CONCAT44(0x717bd1,(undefined4 *)uStack_30c);
                      FUN_009885d0();
                      local_8 = 0x10c;
                      uStack_30c = CONCAT44(0x717be5,(undefined4 *)uStack_30c);
                      FUN_009885d0();
                      local_8._0_1_ = 0xd;
                      param_2 = (int *)&uStack_30c;
                      uStack_314 = CONCAT44(2,local_1e8);
                      param_2 = (int *)FUN_00988bb0();
                      local_8._0_1_ = 0xe;
                      uStack_30c = CONCAT44(local_18c,
                                            *(undefined4 *)
                                             (*(int *)(DAT_012587f0 + 0xc) + iStack_2d4 * 4));
                      uStack_314 = CONCAT44(0x717c2d,(undefined1 *)uStack_314);
                      uVar8 = FUN_005659c0();
                      local_8._0_1_ = 0xf;
                      uStack_30c = CONCAT44(uVar8,0x717c42);
                      FUN_00988fa0();
                      local_8._0_1_ = 0x10;
                      uStack_30c = CONCAT44(local_34,0x717c59);
                      FUN_00988f20();
                      local_8._0_1_ = 0x11;
                      uStack_30c = CONCAT44(param_2,0x717c6e);
                      FUN_00988f20();
                      local_8._0_1_ = 0x12;
                      uStack_30c = CONCAT44(local_90,0x717c83);
                      FUN_00988f20();
                      local_8 = CONCAT31(local_8._1_3_,0x13);
                      uStack_30c = CONCAT44(0x717c8e,(undefined4 *)uStack_30c);
                      FUN_00989020();
                      uStack_30c = CONCAT44(0x717c96,(undefined4 *)uStack_30c);
                      FUN_00408ad0();
                      uStack_30c = CONCAT44(0x717ca1,(undefined4 *)uStack_30c);
                      FUN_00408ad0();
                      uStack_30c = CONCAT44(0x717cac,(undefined4 *)uStack_30c);
                      FUN_00408ad0();
                      uStack_30c = CONCAT44(0x717cb7,(undefined4 *)uStack_30c);
                      FUN_00408ad0();
                      uStack_30c = CONCAT44(0x717cc2,(undefined4 *)uStack_30c);
                      FUN_00408ad0();
                      uStack_30c = CONCAT44(0x717ccd,(undefined4 *)uStack_30c);
                      FUN_00408ad0();
                      uStack_30c = CONCAT44(0x717cd5,(undefined4 *)uStack_30c);
                      FUN_00408ad0();
                      local_8._0_1_ = 1;
                      local_8._1_3_ = 0;
                      uStack_30c = CONCAT44(0x717ce7,(undefined4 *)uStack_30c);
                      FUN_00408ad0();
                    }
                    local_6c._0_4_ = 0;
                    local_6c._4_4_ = 0;
                    uStack_30c = CONCAT44(0x717cfb,(undefined4 *)uStack_30c);
                    cVar7 = FUN_0043a700();
                    piVar15 = param_2;
                    if (cVar7 == '\0') goto LAB_00718522;
                    uStack_30c = CONCAT44(0x717d10,(undefined4 *)uStack_30c);
                    FUN_009885d0();
                    local_8 = 0x114;
                    param_2 = (int *)&uStack_30c;
                    uStack_314 = CONCAT44(2,local_18c);
                    param_2 = (int *)FUN_00988bb0();
                    local_8._0_1_ = 0x15;
                    uStack_30c = CONCAT44(local_1cc,
                                          *(undefined4 *)
                                           (*(int *)(DAT_012587f0 + 0xc) + iStack_2c4 * 4));
                    uStack_314 = CONCAT44(0x717d5b,(undefined1 *)uStack_314);
                    uVar8 = FUN_005659c0();
                    local_8._0_1_ = 0x16;
                    uStack_30c = CONCAT44(uVar8,0x717d70);
                    FUN_00988fa0();
                    local_8._0_1_ = 0x17;
                    uStack_30c = CONCAT44(local_34,0x717d87);
                    FUN_00988f20();
                    local_8._0_1_ = 0x18;
                    uStack_30c = CONCAT44(param_2,0x717d99);
                    FUN_00988f20();
                    local_8._0_1_ = 0x19;
                    uStack_30c = CONCAT44(0x717da4,(undefined4 *)uStack_30c);
                    FUN_00989020();
                    goto LAB_00717da4;
                  }
                }
                if (*(char *)(iVar11 + 0x2e) != '\0') {
                  uStack_30c = CONCAT44(10,local_50);
                  uStack_314 = CONCAT44(iVar11,0x717df8);
                  uVar8 = FUN_0053a6d0();
                  uStack_30c = 0xffffffff00000000;
                  local_8._0_1_ = 0xe3;
                  uStack_314 = CONCAT44(uVar8,0x717e08);
                  FUN_00408ed0();
                  local_8._0_1_ = 1;
                  uStack_30c = CONCAT44(0x717e14,(undefined4 *)uStack_30c);
                  FUN_00408ad0();
                }
                if (*(char *)(iVar11 + 0x2d) != '\0') {
                  uStack_30c = CONCAT44(9,local_50);
                  uStack_314 = CONCAT44(iVar11,0x717e26);
                  uVar8 = FUN_0053a6d0();
                  uStack_30c = 0xffffffff00000000;
                  local_8._0_1_ = 0xe4;
                  uStack_314 = CONCAT44(uVar8,0x717e36);
                  FUN_00408ed0();
                  local_8._0_1_ = 1;
                  uStack_30c = CONCAT44(0x717e42,(undefined4 *)uStack_30c);
                  FUN_00408ad0();
                }
                piVar15 = param_2;
                if ((*(char *)(iVar11 + 0x2e) == '\0') && (*(char *)(iVar11 + 0x2d) == '\0')) {
                  uStack_30c = CONCAT44(10,local_50);
                  uStack_314 = CONCAT44(iVar11,0x717e62);
                  uVar8 = FUN_0053a6d0();
                  uStack_30c = 0xffffffff00000000;
                  local_8._0_1_ = 0xe5;
                  uStack_314 = CONCAT44(uVar8,0x717e72);
                  FUN_00408ed0();
                  uStack_30c = CONCAT44(0x717e7a,(undefined4 *)uStack_30c);
                  FUN_00408ad0();
                  piVar15 = param_2;
                }
                goto LAB_00718522;
              }
              param_2 = (int *)&uStack_30c;
              uStack_30c = CONCAT44(1,extraout_ECX);
              uStack_314 = CONCAT44(0x7163d8,(undefined1 *)uStack_314);
              FUN_0051b810();
              uStack_314 = CONCAT44(local_c8,0x7163e4);
              uVar8 = FUN_00988a50();
              uStack_30c = CONCAT44(uVar8,local_50);
              local_8._0_1_ = 0xcf;
              uStack_314 = CONCAT44(0x7163fc,(undefined1 *)uStack_314);
              uVar8 = FUN_0042c180();
              uStack_30c = 0xffffffff00000000;
              local_8._0_1_ = 0xd0;
              uStack_314 = CONCAT44(uVar8,0x71640f);
              FUN_00408ed0();
              uStack_30c = CONCAT44(0x716417,(undefined4 *)uStack_30c);
              FUN_00408ad0();
              local_8._0_1_ = 1;
              uStack_30c = CONCAT44(0x716426,(undefined4 *)uStack_30c);
              FUN_00408ad0();
              uStack_314 = (longlong)*(int *)(*(int *)(DAT_012586dc + 0x40) + 100) *
                           (longlong)
                           (*(int *)(*(int *)(iVar11 + 0xbcc) + 0x298) + 1000 +
                           *(int *)(*(int *)(iVar11 + 0xa60) + 0x310));
              uStack_30c = 1000;
              uVar8 = __alldiv();
              param_2 = (int *)&uStack_30c;
              uStack_30c = CONCAT44(1,uVar8);
              uStack_314 = CONCAT44(local_c8,0x716476);
              uVar8 = FUN_00988a50();
              uStack_30c = CONCAT44(uVar8,local_50);
              local_8._0_1_ = 0xd1;
              uStack_314 = CONCAT44(0x71648e,(undefined1 *)uStack_314);
              uVar8 = FUN_0042c180();
              uStack_30c = 0xffffffff00000000;
              local_8._0_1_ = 0xd2;
              uStack_314 = CONCAT44(uVar8,0x7164a4);
              FUN_00408ed0();
              uStack_30c = CONCAT44(0x7164ac,(undefined4 *)uStack_30c);
              FUN_00408ad0();
              local_8._0_1_ = 1;
              uStack_30c = CONCAT44(0x7164bb,(undefined4 *)uStack_30c);
              FUN_00408ad0();
              param_2 = (int *)&uStack_30c;
              uStack_30c = CONCAT44(1,*(undefined4 *)(*(int *)(DAT_012586dc + 0x40) + 100));
              uStack_314 = CONCAT44(local_170,0x7164dc);
              uVar8 = FUN_00988a50();
              uStack_30c = CONCAT44(uVar8,local_c8);
              local_8._0_1_ = 0xd3;
              uStack_314 = CONCAT44(0x7164f7,(undefined1 *)uStack_314);
              uVar8 = FUN_0042c180();
              local_8._0_1_ = 0xd4;
              uStack_314 = CONCAT44(uVar8,0x716509);
              FUN_00988fa0();
              local_8._0_1_ = 0xd5;
              uStack_30c = CONCAT44(0x716515,(undefined4 *)uStack_30c);
              FUN_00989020();
              uStack_30c = CONCAT44(0x71651d,(undefined4 *)uStack_30c);
              FUN_00408ad0();
              uStack_30c = CONCAT44(0x716528,(undefined4 *)uStack_30c);
              FUN_00408ad0();
              local_8._0_1_ = 1;
              uStack_30c = CONCAT44(0x716537,(undefined4 *)uStack_30c);
              FUN_00408ad0();
              if (*(int *)(*(int *)(iVar11 + 0xa60) + 0x310) != 0) {
                uStack_30c = CONCAT44(0x716553,(undefined4 *)uStack_30c);
                FUN_009885d0();
                param_2 = (int *)&uStack_30c;
                local_8._0_1_ = 0xd6;
                uStack_30c = CONCAT44(local_34,1000);
                uStack_314 = CONCAT44(0x62,local_c8);
                uVar8 = (**(code **)(*(int *)(iVar11 + 0xa48) + 0x24))();
                local_8._0_1_ = 0xd7;
                uStack_30c = CONCAT44(uVar8,0x71658e);
                FUN_00988fa0();
                local_8._0_1_ = 0xd8;
                uStack_30c = CONCAT44(0x71659d,(undefined4 *)uStack_30c);
                FUN_00989020();
                uStack_30c = CONCAT44(0x7165a5,(undefined4 *)uStack_30c);
                FUN_00408ad0();
                uStack_30c = CONCAT44(0x7165b0,(undefined4 *)uStack_30c);
                FUN_00408ad0();
                local_8._0_1_ = 1;
                uStack_30c = CONCAT44(0x7165bc,(undefined4 *)uStack_30c);
                FUN_00408ad0();
              }
              piVar15 = param_2;
              if (*(int *)(*(int *)(iVar11 + 0xbcc) + 0x298) == 0) goto LAB_00718522;
              uStack_30c = CONCAT44(0x7165df,(undefined4 *)uStack_30c);
              FUN_009885d0();
              local_8._0_1_ = 0xd9;
              uStack_30c = CONCAT44(0x7165f0,(undefined4 *)uStack_30c);
              FUN_009885d0();
              local_8._0_1_ = 0xda;
              param_2 = (int *)&uStack_30c;
              uStack_30c = CONCAT44(1,*(undefined4 *)(*(int *)(iVar11 + 0xbcc) + 0x298));
              uStack_314 = CONCAT44(local_18c,0x71661b);
              uVar8 = FUN_009c8c30();
              uStack_30c = CONCAT44(local_34,local_dc);
              local_8._0_1_ = 0xdb;
              uStack_314 = CONCAT44(0x716633,(undefined1 *)uStack_314);
              param_2 = (int *)FUN_009a8ee0();
              local_8._0_1_ = 0xdc;
              uStack_30c = CONCAT44(0x71663f,(undefined4 *)uStack_30c);
              FUN_00475500();
              uStack_30c = CONCAT44(0x71664c,(undefined4 *)uStack_30c);
              puVar14 = (undefined8 *)FUN_0040b440();
              uStack_314 = *puVar14;
              uStack_30c = puVar14[1];
              uVar12 = FUN_009a9880();
              local_8._0_1_ = 0xdd;
              uStack_30c = CONCAT44(uVar12,0x716686);
              FUN_00988fa0();
              local_8._0_1_ = 0xde;
              uStack_30c = CONCAT44(local_90,0x7166a1);
              FUN_00988f20();
              local_8._0_1_ = 0xdf;
              uStack_30c = CONCAT44(uVar8,0x7166b0);
              FUN_00988f20();
              local_8._0_1_ = 0xe0;
              uStack_30c = CONCAT44(0x7166bc,(undefined4 *)uStack_30c);
              FUN_00989020();
              uStack_30c = CONCAT44(0x7166c4,(undefined4 *)uStack_30c);
              FUN_00408ad0();
              uStack_30c = CONCAT44(0x7166cf,(undefined4 *)uStack_30c);
              FUN_00408ad0();
              uStack_30c = CONCAT44(0x7166da,(undefined4 *)uStack_30c);
              FUN_00408ad0();
              uStack_30c = CONCAT44(0x7166e5,(undefined4 *)uStack_30c);
              FUN_00408ad0();
              local_8._0_1_ = 0xdb;
              uStack_30c = CONCAT44(local_dc,0x7166f5);
              FUN_009a9740();
            }
            else {
              local_104 = (uint *)(iVar11 + 0x12e8);
              local_18 = 0x320000;
              uStack_30c = CONCAT44(&local_74,0x7158ac);
              FUN_0096ba50();
              param_2 = (int *)&uStack_30c;
              uStack_314 = CONCAT44(0x7158bf,(undefined1 *)uStack_314);
              FUN_0043a6a0();
              uStack_314 = CONCAT44(1,local_c8);
              uVar8 = FUN_00988bb0();
              uStack_30c = CONCAT44(uVar8,local_50);
              local_8._0_1_ = 0x85;
              uStack_314 = CONCAT44(0x7158e5,(undefined1 *)uStack_314);
              uVar8 = FUN_0042c180();
              uStack_30c = 0xffffffff00000000;
              local_8._0_1_ = 0x86;
              uStack_314 = CONCAT44(uVar8,0x7158f8);
              FUN_00408ed0();
              uStack_30c = CONCAT44(0x715900,(undefined4 *)uStack_30c);
              FUN_00408ad0();
              local_8 = CONCAT31(local_8._1_3_,1);
              uStack_30c = CONCAT44(0x71590f,(undefined4 *)uStack_30c);
              FUN_00408ad0();
              local_5c = *(int **)(iVar11 + 0x9d8);
              local_58 = iVar11 + 0x9d8;
              local_124 = 0;
              uStack_30c = CONCAT44(0x715935,(undefined4 *)uStack_30c);
              cVar7 = FUN_0043a860();
              iVar11 = DAT_0131bb34;
              while (cVar7 != '\0') {
                iVar10 = *local_5c;
                local_5c = local_5c + 1;
                iVar10 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + iVar10 * 4);
                local_18 = CONCAT44(iVar10,(uint)local_18);
                if (*(int *)(*(int *)(iVar10 + 0x188) + 0x84) < 1) {
                  if (iVar11 == 0) {
                    uStack_30c = 0x18800715981;
                    param_2 = (int *)FUN_00aae9af();
                    local_8._0_1_ = 0x87;
                    if (param_2 == (int *)0x0) {
                      uVar8 = 0;
                    }
                    else {
                      uStack_30c = CONCAT44(0x715996,(undefined4 *)uStack_30c);
                      uVar8 = FUN_0041a160();
                    }
                    local_8 = CONCAT31(local_8._1_3_,1);
                    uStack_30c = CONCAT44(uVar8,0x7159a4);
                    FUN_00423700();
                    iVar11 = DAT_0131bb34;
                  }
                  iVar10 = *(int *)(iVar11 + 0x10) - *(int *)(iVar11 + 0xc) >> 2;
                  if (0 < iVar10) {
                    param_2 = (int *)0x0;
                    local_54 = iVar10;
                    do {
                      if (*(uint **)((int)param_2 + *(int *)(local_18._4_4_ + 0x194)) != (uint *)0x0
                         ) {
                        local_194 = 0xc3500000;
                        local_190 = 0;
                        puVar17 = *(uint **)((int)param_2 + *(int *)(local_18._4_4_ + 0x194));
                        do {
                          puVar4 = (uint *)puVar17[0x9f];
                          uVar16 = puVar17[0x16];
                          local_74 = CONCAT44(((int)uVar16 >> 0x1f) << 0xf | uVar16 >> 0x11,
                                              uVar16 << 0xf);
                          uStack_30c = CONCAT44(0x715a2d,(undefined4 *)uStack_30c);
                          local_60 = puVar17;
                          FUN_0043a6d0();
                          uStack_30c = CONCAT44(local_60,0x715a3c);
                          FUN_009659f0();
                          uStack_30c = CONCAT44(0x715a4c,(undefined4 *)uStack_30c);
                          puVar17 = (uint *)FUN_0043a6a0();
                          local_124 = CONCAT44((int)local_124._4_4_ + puVar17[1] +
                                               (uint)CARRY4((uint)local_124,*puVar17),
                                               (uint)local_124 + *puVar17);
                          puVar17 = puVar4;
                        } while (puVar4 != (uint *)0x0);
                      }
                      param_2 = (int *)((int)param_2 + 0x10);
                      local_54 = local_54 + -1;
                    } while (local_54 != 0);
                    local_54 = 0;
                    iVar11 = DAT_0131bb34;
                  }
                }
                uStack_30c = CONCAT44(0x715a7c,(undefined4 *)uStack_30c);
                cVar7 = FUN_0043a860();
              }
              uVar16 = *local_104;
              if (uVar16 != 0) {
                local_18 = CONCAT44(uVar16 >> 0x11,uVar16 << 0xf);
                local_74 = 0xc3500000;
                uStack_30c = CONCAT44(0x715ab8,(undefined4 *)uStack_30c);
                FUN_0043a650();
                uStack_30c = CONCAT44(0x715ac5,(undefined4 *)uStack_30c);
                FUN_0043a650();
              }
              uStack_30c = CONCAT44(0x715ad5,(undefined4 *)uStack_30c);
              FUN_009885d0();
              local_8 = CONCAT31(local_8._1_3_,0x88);
              local_6c._0_4_ = 0;
              local_6c._4_4_ = 0;
              uStack_30c = CONCAT44(0x715af0,(undefined4 *)uStack_30c);
              cVar7 = FUN_0043a5e0();
              if (cVar7 == '\0') {
                local_6c._0_4_ = 0;
                local_6c._4_4_ = 0;
                uStack_30c = CONCAT44(0x715b15,(undefined4 *)uStack_30c);
                cVar7 = FUN_0043a700();
                if (cVar7 != '\0') goto LAB_00715b25;
              }
              else {
LAB_00715b25:
                uStack_30c._4_4_ = (longlong **)local_90;
                uStack_30c = CONCAT44(uStack_30c._4_4_,0x715b2a);
                FUN_004012f0();
              }
              uStack_30c = CONCAT44(0x715b37,(undefined4 *)uStack_30c);
              FUN_009885d0();
              local_8._0_1_ = 0x89;
              param_2 = (int *)&uStack_30c;
              uStack_314 = CONCAT44(4,local_18c);
              uStack_30c = local_124;
              uVar8 = FUN_00988bb0();
              local_8._0_1_ = 0x8a;
              uStack_30c = CONCAT44(uVar8,0x715b78);
              FUN_00988f20();
              local_8._0_1_ = 0x8b;
              uStack_30c = CONCAT44(local_34,0x715b8d);
              uVar8 = FUN_00988f20();
              uStack_30c = CONCAT44(uVar8,local_c8);
              local_8._0_1_ = 0x8c;
              uStack_314 = CONCAT44(0x715ba8,(undefined1 *)uStack_314);
              uVar8 = FUN_0042c180();
              local_8._0_1_ = 0x8d;
              uStack_314 = CONCAT44(uVar8,0x715bba);
              FUN_00988fa0();
              local_8._0_1_ = 0x8e;
              uStack_30c = CONCAT44(0x715bc8,(undefined4 *)uStack_30c);
              FUN_00989020();
              uStack_30c = CONCAT44(0x715bd0,(undefined4 *)uStack_30c);
              FUN_00408ad0();
              uStack_30c = CONCAT44(0x715bdb,(undefined4 *)uStack_30c);
              FUN_00408ad0();
              uStack_30c = CONCAT44(0x715be6,(undefined4 *)uStack_30c);
              FUN_00408ad0();
              uStack_30c = CONCAT44(0x715bf1,(undefined4 *)uStack_30c);
              FUN_00408ad0();
            }
            uStack_30c = CONCAT44(0x716700,(undefined4 *)uStack_30c);
            FUN_00408ad0();
            uStack_30c = CONCAT44(0x716708,(undefined4 *)uStack_30c);
            FUN_00408ad0();
            uStack_30c = CONCAT44(0x716713,(undefined4 *)uStack_30c);
            FUN_00408ad0();
            piVar15 = param_2;
            goto LAB_00718522;
          }
          uStack_30c = CONCAT44(0x714b7c,(undefined4 *)uStack_30c);
          local_104 = (uint *)FUN_005dba20();
          uStack_30c = CONCAT44(local_154,0x714b90);
          uVar8 = FUN_009888f0();
          uStack_30c = CONCAT44(uVar8,local_34);
          local_8._0_1_ = 0x3a;
          uStack_314 = CONCAT44(0x714ba8,(undefined1 *)uStack_314);
          uVar8 = FUN_0042c180();
          uStack_30c = 0xffffffff00000000;
          local_8._0_1_ = 0x3b;
          uStack_314 = CONCAT44(uVar8,0x714bbb);
          FUN_00408ed0();
          uStack_30c = CONCAT44(0x714bc3,(undefined4 *)uStack_30c);
          FUN_00408ad0();
          local_8._0_1_ = 1;
          uStack_30c = CONCAT44(0x714bd2,(undefined4 *)uStack_30c);
          FUN_00408ad0();
          param_2 = *(int **)(iVar11 + 0x160);
          local_58 = *(uint *)(iVar11 + 0x164);
          local_124 = CONCAT44(*(undefined4 *)(iVar11 + 0x168),(uint)local_124);
          uStack_30c = CONCAT44(0x714c09,(undefined4 *)uStack_30c);
          FUN_009885d0();
          local_8._0_1_ = 0x3c;
          uStack_30c = CONCAT44(0x714c1d,(undefined4 *)uStack_30c);
          FUN_009885d0();
          local_8._0_1_ = 0x3d;
          uStack_30c = CONCAT44(0x714c2e,(undefined4 *)uStack_30c);
          FUN_009885d0();
          local_8._0_1_ = 0x3e;
          uStack_30c = CONCAT44(local_18c,0x714c41);
          uVar8 = FUN_009888f0();
          local_8._0_1_ = 0x3f;
          uStack_30c = CONCAT44(uVar8,0x714c57);
          FUN_00988f20();
          local_8._0_1_ = 0x40;
          uStack_30c = CONCAT44(local_154,0x714c6f);
          local_54 = FUN_00988f20();
          local_8._0_1_ = 0x41;
          uStack_30c = CONCAT44(local_224,0x714c85);
          uVar8 = FUN_009888f0();
          local_8._0_1_ = 0x42;
          uStack_30c = CONCAT44(uVar8,0x714c9b);
          FUN_00988f20();
          local_8._0_1_ = 0x43;
          uStack_30c = CONCAT44(local_34,0x714cb0);
          uVar8 = FUN_00988f20();
          uStack_30c = CONCAT44(local_54,&DAT_00e10e04);
          uStack_314 = CONCAT44(uVar8,&DAT_00df8254);
          local_8._0_1_ = 0x44;
          uVar8 = FUN_0043ec10();
          local_8._0_1_ = 0x45;
          FUN_00988fa0(uVar8);
          local_8._0_1_ = 0x46;
          uStack_30c = CONCAT44(0x714cf7,(undefined4 *)uStack_30c);
          FUN_00989020();
          uStack_30c = CONCAT44(0x714d02,(undefined4 *)uStack_30c);
          FUN_00408ad0();
          uStack_30c = CONCAT44(0x714d0d,(undefined4 *)uStack_30c);
          FUN_00408ad0();
          uStack_30c = CONCAT44(0x714d18,(undefined4 *)uStack_30c);
          FUN_00408ad0();
          uStack_30c = CONCAT44(0x714d23,(undefined4 *)uStack_30c);
          FUN_00408ad0();
          uStack_30c = CONCAT44(0x714d2e,(undefined4 *)uStack_30c);
          FUN_00408ad0();
          uStack_30c = CONCAT44(0x714d39,(undefined4 *)uStack_30c);
          FUN_00408ad0();
          uStack_30c = CONCAT44(0x714d44,(undefined4 *)uStack_30c);
          FUN_00408ad0();
          uStack_30c = CONCAT44(0x714d4f,(undefined4 *)uStack_30c);
          FUN_00408ad0();
          uStack_30c = CONCAT44(0x714d57,(undefined4 *)uStack_30c);
          FUN_00408ad0();
          local_8._0_1_ = 0x3c;
          uStack_30c = CONCAT44(0x714d66,(undefined4 *)uStack_30c);
          FUN_00408ad0();
          if ((int)param_2 < (int)local_58) {
            uStack_30c = CONCAT44(0x714d7f,(undefined4 *)uStack_30c);
            FUN_009885d0();
            param_2 = (int *)&uStack_30c;
            uStack_30c._4_4_ = (longlong **)0x1;
            local_8._0_1_ = 0x47;
            uStack_314 = 0x714d97;
            piVar15 = (int *)FUN_0051f8c0();
            iVar11 = *piVar15;
            uStack_314 = 0x47c3504000714dac;
            FUN_00401000();
            uStack_314 = CONCAT44(0x714db4,(undefined1 *)uStack_314);
            iVar10 = FUN_00b31c00();
            uStack_314 = 1000;
            uVar8 = __alldiv((longlong)iVar10 * (longlong)iVar11);
            uStack_30c = CONCAT44(uStack_30c._4_4_,uVar8);
            uStack_314 = CONCAT44(local_240,0x714dd8);
            uVar8 = FUN_00988a50();
            local_8._0_1_ = 0x48;
            uStack_30c = CONCAT44(uVar8,0x714ded);
            FUN_00988fa0();
            local_8._0_1_ = 0x49;
            uStack_30c = CONCAT44(local_34,0x714e05);
            uVar8 = FUN_00988f20();
            uStack_30c = CONCAT44(uVar8,local_1e8);
            local_8._0_1_ = 0x4a;
            uStack_314 = CONCAT44(0x714e20,(undefined1 *)uStack_314);
            uVar8 = FUN_0042c180();
            local_8._0_1_ = 0x4b;
            uStack_314 = CONCAT44(uVar8,0x714e35);
            FUN_00988fa0();
            local_8._0_1_ = 0x4c;
            uStack_30c = CONCAT44(0x714e44,(undefined4 *)uStack_30c);
            FUN_00989020();
            uStack_30c = CONCAT44(0x714e4f,(undefined4 *)uStack_30c);
            FUN_00408ad0();
            uStack_30c = CONCAT44(0x714e5a,(undefined4 *)uStack_30c);
            FUN_00408ad0();
            uStack_30c = CONCAT44(0x714e65,(undefined4 *)uStack_30c);
            FUN_00408ad0();
            uStack_30c = CONCAT44(0x714e70,(undefined4 *)uStack_30c);
            FUN_00408ad0();
            uStack_30c = CONCAT44(0x714e7b,(undefined4 *)uStack_30c);
            FUN_00408ad0();
            local_8 = CONCAT31(local_8._1_3_,0x3c);
            uStack_30c = CONCAT44(0x714e87,(undefined4 *)uStack_30c);
            FUN_00408ad0();
LAB_00714f6f:
            uStack_30c._4_4_ = (longlong **)local_1e8;
            uStack_30c._0_4_ = (undefined4 *)0x714f80;
            uVar8 = FUN_00475d50();
            uStack_30c = CONCAT44(uStack_30c._4_4_,uVar8);
            local_8._0_1_ = 0x53;
            uStack_314 = CONCAT44(0x714f95,(undefined1 *)uStack_314);
            FUN_00988fa0();
            local_8._0_1_ = 0x54;
            uStack_30c = CONCAT44(0x714fa3,(undefined4 *)uStack_30c);
            FUN_00989020();
            uStack_30c = CONCAT44(0x714fae,(undefined4 *)uStack_30c);
            FUN_00408ad0();
            local_8._0_1_ = 0x3c;
            uStack_30c = CONCAT44(0x714fbd,(undefined4 *)uStack_30c);
            FUN_00408ad0();
          }
          else if ((int)param_2 < (int)local_124._4_4_) {
            uStack_30c = CONCAT44(0x714ea9,(undefined4 *)uStack_30c);
            FUN_009885d0();
            local_8._0_1_ = 0x4d;
            uStack_30c = CONCAT44(local_240,0x714ec2);
            uVar8 = FUN_009888f0();
            local_8._0_1_ = 0x4e;
            uStack_30c = CONCAT44(uVar8,0x714ed7);
            FUN_00988fa0();
            local_8._0_1_ = 0x4f;
            uStack_30c = CONCAT44(local_34,0x714eee);
            uVar8 = FUN_00988f20();
            uStack_30c = CONCAT44(uVar8,local_1e8);
            local_8._0_1_ = 0x50;
            uStack_314 = CONCAT44(0x714f09,(undefined1 *)uStack_314);
            uVar8 = FUN_0042c180();
            local_8._0_1_ = 0x51;
            uStack_314 = CONCAT44(uVar8,0x714f1e);
            FUN_00988fa0();
            local_8._0_1_ = 0x52;
            uStack_30c = CONCAT44(0x714f2c,(undefined4 *)uStack_30c);
            FUN_00989020();
            uStack_30c = CONCAT44(0x714f37,(undefined4 *)uStack_30c);
            FUN_00408ad0();
            uStack_30c = CONCAT44(0x714f42,(undefined4 *)uStack_30c);
            FUN_00408ad0();
            uStack_30c = CONCAT44(0x714f4d,(undefined4 *)uStack_30c);
            FUN_00408ad0();
            uStack_30c = CONCAT44(0x714f58,(undefined4 *)uStack_30c);
            FUN_00408ad0();
            uStack_30c = CONCAT44(0x714f63,(undefined4 *)uStack_30c);
            FUN_00408ad0();
            local_8 = CONCAT31(local_8._1_3_,0x3c);
            uStack_30c = CONCAT44(0x714f6f,(undefined4 *)uStack_30c);
            FUN_00408ad0();
            goto LAB_00714f6f;
          }
          if (0 < (int)local_104) {
            uStack_30c._4_4_ = (longlong **)local_1e8;
            uStack_30c._0_4_ = (undefined4 *)0x714fdb;
            uVar8 = FUN_00475d50();
            uStack_30c = CONCAT44(uStack_30c._4_4_,uVar8);
            local_8._0_1_ = 0x55;
            uStack_314 = CONCAT44(0x714ff0,(undefined1 *)uStack_314);
            FUN_00988fa0();
            local_8._0_1_ = 0x56;
            uStack_30c = CONCAT44(0x714ffe,(undefined4 *)uStack_30c);
            FUN_00989020();
            uStack_30c = CONCAT44(0x715009,(undefined4 *)uStack_30c);
            FUN_00408ad0();
            local_8._0_1_ = 0x3c;
            uStack_30c = CONCAT44(0x715018,(undefined4 *)uStack_30c);
            FUN_00408ad0();
            uStack_30c = CONCAT44(0x71501d,(undefined4 *)uStack_30c);
            uVar16 = FUN_005c1a10();
            local_124 = local_124 & 0xffffffff;
            local_58 = uVar16;
            if (0 < (int)(*(int *)(uVar16 + 0x10) - *(int *)(uVar16 + 0xc) & 0xfffffffcU)) {
              do {
                param_2 = *(int **)(*(int *)(uVar16 + 0xc) + (int)local_124._4_4_ * 4);
                uStack_30c = CONCAT44(0x715056,(undefined4 *)uStack_30c);
                local_54 = FUN_00539130();
                if (0 < local_54) {
                  local_104 = (uint *)param_2[0x2a];
                  uStack_30c = CONCAT44(0x715080,(undefined4 *)uStack_30c);
                  FUN_009885d0();
                  local_8._0_1_ = 0x57;
                  uStack_30c = CONCAT44(0x715094,(undefined4 *)uStack_30c);
                  FUN_009885d0();
                  local_8._0_1_ = 0x58;
                  uStack_30c = CONCAT44(0x7150a5,(undefined4 *)uStack_30c);
                  FUN_009885d0();
                  local_8._0_1_ = 0x59;
                  uStack_30c = CONCAT44(local_50,0x7150b7);
                  uVar8 = (**(code **)(*param_2 + 0x18))();
                  local_18 = CONCAT44(uVar8,(uint)local_18);
                  local_8._0_1_ = 0x5a;
                  uStack_30c = CONCAT44(local_c8,0x7150d6);
                  local_60 = (uint *)FUN_009888f0();
                  local_8._0_1_ = 0x5b;
                  uStack_30c = CONCAT44(local_170,0x7150eb);
                  local_104 = (uint *)FUN_009888f0();
                  local_8._0_1_ = 0x5c;
                  uStack_30c = CONCAT44(local_1cc,0x715104);
                  uVar8 = FUN_009888f0();
                  local_8._0_1_ = 0x5d;
                  uStack_30c = CONCAT44(uVar8,0x715119);
                  FUN_00988fa0();
                  local_8._0_1_ = 0x5e;
                  uStack_30c = CONCAT44(local_34,0x715131);
                  FUN_00988f20();
                  local_8._0_1_ = 0x5f;
                  uStack_30c = CONCAT44(local_104,0x715149);
                  FUN_00988f20();
                  local_8._0_1_ = 0x60;
                  uStack_30c = CONCAT44(local_154,0x715161);
                  FUN_00988f20();
                  local_8._0_1_ = 0x61;
                  uStack_30c = CONCAT44(local_60,0x715176);
                  FUN_00988f20();
                  local_8._0_1_ = 0x62;
                  uStack_30c = CONCAT44(local_1b0,0x71518e);
                  FUN_00988f20();
                  local_8._0_1_ = 99;
                  uStack_30c = CONCAT44((int)((ulonglong)local_18 >> 0x20),0x7151a3);
                  FUN_00988f20();
                  local_8._0_1_ = 100;
                  uStack_30c = CONCAT44(0x7151ae,(undefined4 *)uStack_30c);
                  FUN_00989020();
                  uStack_30c = CONCAT44(0x7151b9,(undefined4 *)uStack_30c);
                  FUN_00408ad0();
                  uStack_30c = CONCAT44(0x7151c4,(undefined4 *)uStack_30c);
                  FUN_00408ad0();
                  uStack_30c = CONCAT44(0x7151cf,(undefined4 *)uStack_30c);
                  FUN_00408ad0();
                  uStack_30c = CONCAT44(0x7151da,(undefined4 *)uStack_30c);
                  FUN_00408ad0();
                  uStack_30c = CONCAT44(0x7151e5,(undefined4 *)uStack_30c);
                  FUN_00408ad0();
                  uStack_30c = CONCAT44(0x7151f0,(undefined4 *)uStack_30c);
                  FUN_00408ad0();
                  uStack_30c = CONCAT44(0x7151fb,(undefined4 *)uStack_30c);
                  FUN_00408ad0();
                  uStack_30c = CONCAT44(0x715206,(undefined4 *)uStack_30c);
                  FUN_00408ad0();
                  uStack_30c = CONCAT44(0x715211,(undefined4 *)uStack_30c);
                  FUN_00408ad0();
                  uStack_30c = CONCAT44(0x71521c,(undefined4 *)uStack_30c);
                  FUN_00408ad0();
                  uStack_30c = CONCAT44(0x715224,(undefined4 *)uStack_30c);
                  FUN_00408ad0();
                  uStack_30c = CONCAT44(0x71522c,(undefined4 *)uStack_30c);
                  FUN_00408ad0();
                  uStack_30c = CONCAT44(0x715237,(undefined4 *)uStack_30c);
                  FUN_00408ad0();
                  local_8._0_1_ = 0x3c;
                  uStack_30c = CONCAT44(0x715246,(undefined4 *)uStack_30c);
                  FUN_00408ad0();
                  uStack_30c = CONCAT44(0x715250,(undefined4 *)uStack_30c);
                  iVar11 = FUN_00539160();
                  uVar16 = local_58;
                  if (-1 < iVar11) {
                    uStack_30c = CONCAT44(local_170,0x715262);
                    uVar8 = FUN_009888f0();
                    uStack_30c = CONCAT44(uVar8,local_c8);
                    local_8._0_1_ = 0x65;
                    uStack_314 = CONCAT44(0x71527d,(undefined1 *)uStack_314);
                    uVar8 = FUN_0042c180();
                    local_8._0_1_ = 0x66;
                    uStack_314 = CONCAT44(uVar8,0x71528f);
                    FUN_00988fa0();
                    local_8._0_1_ = 0x67;
                    uStack_30c = CONCAT44(0x71529b,(undefined4 *)uStack_30c);
                    FUN_00989020();
                    uStack_30c = CONCAT44(0x7152a3,(undefined4 *)uStack_30c);
                    FUN_00408ad0();
                    uStack_30c = CONCAT44(0x7152ae,(undefined4 *)uStack_30c);
                    FUN_00408ad0();
                    local_8._0_1_ = 0x3c;
                    uStack_30c = CONCAT44(0x7152bd,(undefined4 *)uStack_30c);
                    FUN_00408ad0();
                    uVar16 = local_58;
                  }
                }
                iVar11 = (int)local_124._4_4_ + 1;
                local_124 = CONCAT44(iVar11,(uint)local_124);
              } while (iVar11 < *(int *)(uVar16 + 0x10) - *(int *)(uVar16 + 0xc) >> 2);
            }
          }
          uStack_30c = CONCAT44(0x7152e9,(undefined4 *)uStack_30c);
          FUN_00408ad0();
          piVar15 = param_2;
          goto LAB_00718522;
        }
        param_2 = (int *)&uStack_30c;
        uStack_314 = CONCAT44(iVar11 + 0x12e8,0x714452);
        FUN_00969ed0();
        uStack_314 = CONCAT44(2,local_154);
        uVar8 = FUN_00988bb0();
        uStack_30c = CONCAT44(uVar8,local_34);
        local_8._0_1_ = 0x21;
        uStack_314 = CONCAT44(0x714478,(undefined1 *)uStack_314);
        uVar8 = FUN_0042c180();
        uStack_30c = 0xffffffff00000000;
        local_8._0_1_ = 0x22;
        uStack_314 = CONCAT44(uVar8,0x71448c);
        FUN_00408ed0();
        uStack_30c = CONCAT44(0x714494,(undefined4 *)uStack_30c);
        FUN_00408ad0();
        local_8 = CONCAT31(local_8._1_3_,1);
        uStack_30c = CONCAT44(0x7144a3,(undefined4 *)uStack_30c);
        FUN_00408ad0();
        plVar21 = *(longlong **)(iVar11 + 0x9d8);
        local_18 = 0;
        iVar10 = DAT_0131bb34;
        while ((*(longlong **)(iVar11 + 0x9d8) <= plVar21 &&
               (plVar21 < *(longlong **)(iVar11 + 0x9dc)))) {
          local_54 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + (int)*plVar21 * 4);
          local_64 = (longlong *)((int)plVar21 + 4);
          if (iVar10 == 0) {
            uStack_30c = 0x18800714500;
            param_2 = (int *)FUN_00aae9af();
            local_8._0_1_ = 0x23;
            if (param_2 == (int *)0x0) {
              uVar8 = 0;
            }
            else {
              uStack_30c = CONCAT44(0x714515,(undefined4 *)uStack_30c);
              uVar8 = FUN_0041a160();
            }
            local_8 = CONCAT31(local_8._1_3_,1);
            uStack_30c = CONCAT44(uVar8,0x714523);
            FUN_00423700();
            iVar10 = DAT_0131bb34;
          }
          iVar13 = *(int *)(iVar10 + 0x10) - *(int *)(iVar10 + 0xc) >> 2;
          plVar21 = local_64;
          if (0 < iVar13) {
            param_2 = (int *)0x0;
            local_124 = CONCAT44(iVar13,(uint)local_124);
            do {
              iVar13 = *(int *)((int)param_2 + *(int *)(local_54 + 0x194));
              iVar10 = DAT_0131bb34;
              uVar5 = local_124;
              plVar21 = local_64;
              while (DAT_0131bb34 = iVar10, local_64 = plVar21, iVar13 != 0) {
                local_58 = *(uint *)(iVar13 + 0x58);
                iVar13 = *(int *)(iVar13 + 0x27c);
                uStack_30c = CONCAT44(&local_6c,0x71457a);
                local_124 = uVar5;
                puVar14 = (undefined8 *)FUN_0095fcb0();
                uStack_30c = 0xc3500000;
                uStack_314 = CONCAT44(((int)local_58 >> 0x1f) << 0x1e | local_58 >> 2,
                                      local_58 << 0x1e);
                uStack_314 = __alldiv();
                uStack_30c = *puVar14;
                lVar23 = __allmul();
                local_18 = (lVar23 >> 0xf) + local_18;
                iVar10 = DAT_0131bb34;
                uVar5 = local_124;
                plVar21 = local_64;
              }
              param_2 = (int *)((int)param_2 + 0x10);
              local_124._4_4_ = (int *)(uVar5 >> 0x20);
              iVar13 = (int)local_124._4_4_ + -1;
              local_124._0_4_ = (uint)uVar5;
              local_124 = CONCAT44(iVar13,(uint)local_124);
            } while (iVar13 != 0);
          }
        }
        uVar16 = *(uint *)(iVar11 + 0x12e8);
        if (uVar16 != 0) {
          local_60 = (uint *)(uVar16 >> 0x11);
          local_64 = (longlong *)(uVar16 << 0xf);
          local_108 = (longlong *)0xc3500000;
          local_104 = (uint *)0x0;
          uStack_30c = CONCAT44(0x714603,(undefined4 *)uStack_30c);
          FUN_0043a650();
          uStack_30c = CONCAT44(0x71460d,(undefined4 *)uStack_30c);
          FUN_0043a650();
        }
        uStack_30c = CONCAT44(0x71461d,(undefined4 *)uStack_30c);
        FUN_009885d0();
        local_8 = CONCAT31(local_8._1_3_,0x24);
        local_74 = 0;
        uStack_30c = CONCAT44(0x714635,(undefined4 *)uStack_30c);
        cVar7 = FUN_0043a700();
        if (cVar7 == '\0') {
          local_74 = 0;
          uStack_30c = CONCAT44(0x714657,(undefined4 *)uStack_30c);
          cVar7 = FUN_0043a700();
          if (cVar7 != '\0') goto LAB_00714667;
        }
        else {
LAB_00714667:
          uStack_30c._4_4_ = (longlong **)local_90;
          uStack_30c = CONCAT44(uStack_30c._4_4_,0x71466c);
          FUN_004012f0();
        }
        param_2 = (int *)&uStack_30c;
        uStack_314 = CONCAT44(4,local_100);
        uStack_30c = local_18;
        uVar8 = FUN_00988bb0();
        local_8._0_1_ = 0x25;
        uStack_30c = CONCAT44(uVar8,0x7146a3);
        uVar8 = FUN_00988f20();
        uStack_30c = CONCAT44(uVar8,local_154);
        local_8._0_1_ = 0x26;
        uStack_314 = CONCAT44(0x7146be,(undefined1 *)uStack_314);
        uVar8 = FUN_0042c180();
        local_8._0_1_ = 0x27;
        uStack_314 = CONCAT44(uVar8,0x7146d0);
        uVar8 = FUN_00988fa0();
        local_8._0_1_ = 0x28;
        uStack_30c = 0xffffffff00000000;
        uStack_314 = CONCAT44(uVar8,0x7146e6);
        FUN_00448aa0();
        uStack_30c = CONCAT44(0x7146ee,(undefined4 *)uStack_30c);
        FUN_00408ad0();
        uStack_30c = CONCAT44(0x7146f9,(undefined4 *)uStack_30c);
        FUN_00408ad0();
        uStack_30c = CONCAT44(0x714700,(undefined4 *)uStack_30c);
        FUN_00408ad0();
        local_8._0_1_ = 0x24;
        uStack_30c = CONCAT44(0x71470f,(undefined4 *)uStack_30c);
        FUN_00408ad0();
        uStack_30c = CONCAT44(0x71471c,(undefined4 *)uStack_30c);
        FUN_009885d0();
        param_2 = (int *)&uStack_30c;
        local_8._0_1_ = 0x29;
        uStack_30c = CONCAT44(local_34,1000);
        uStack_314 = CONCAT44(0x66,local_154);
        uVar8 = (**(code **)(*(int *)(iVar11 + 0xa48) + 0x24))();
        uStack_30c = 0xffffffff00000000;
        local_8._0_1_ = 0x2a;
        uStack_314 = CONCAT44(uVar8,0x714756);
        FUN_00448aa0();
      }
      else {
        param_2 = (int *)&uStack_30c;
        uStack_314 = CONCAT44(iVar11 + 0x12e8,0x71427e);
        FUN_00969f90();
        uStack_314 = CONCAT44(5,local_154);
        uVar8 = FUN_00988bb0();
        uStack_30c = CONCAT44(uVar8,local_34);
        local_8._0_1_ = 0x18;
        uStack_314 = CONCAT44(0x7142a4,(undefined1 *)uStack_314);
        uVar8 = FUN_0042c180();
        uStack_30c = 0xffffffff00000000;
        local_8._0_1_ = 0x19;
        uStack_314 = CONCAT44(uVar8,0x7142b8);
        FUN_00408ed0();
        uStack_30c = CONCAT44(0x7142c0,(undefined4 *)uStack_30c);
        FUN_00408ad0();
        local_8._0_1_ = 1;
        uStack_30c = CONCAT44(0x7142cf,(undefined4 *)uStack_30c);
        FUN_00408ad0();
        uVar8 = *(undefined4 *)(iVar11 + 0x13e8);
        local_18 = *(longlong *)(iVar11 + 0x13e8);
        uStack_30c = CONCAT44(0x7142f1,(undefined4 *)uStack_30c);
        FUN_009885d0();
        local_8 = CONCAT31(local_8._1_3_,0x1a);
        local_74 = 0;
        uStack_30c = CONCAT44(0x714309,(undefined4 *)uStack_30c);
        cVar7 = FUN_0043a700();
        if (cVar7 == '\0') {
          local_74 = 0;
          uStack_30c = CONCAT44(0x71432b,(undefined4 *)uStack_30c);
          cVar7 = FUN_0043a5e0();
          if (cVar7 != '\0') goto LAB_0071433b;
        }
        else {
LAB_0071433b:
          uStack_30c._4_4_ = (longlong **)local_90;
          uStack_30c = CONCAT44(uStack_30c._4_4_,0x714340);
          FUN_004012f0();
        }
        param_2 = (int *)&uStack_30c;
        uStack_314 = CONCAT44(5,local_100);
        uStack_30c = CONCAT44(local_18._4_4_,uVar8);
        uVar8 = FUN_00988bb0();
        local_8._0_1_ = 0x1b;
        uStack_30c = CONCAT44(uVar8,0x714374);
        uVar8 = FUN_00988f20();
        uStack_30c = CONCAT44(uVar8,local_154);
        local_8._0_1_ = 0x1c;
        uStack_314 = CONCAT44(0x71438f,(undefined1 *)uStack_314);
        uVar8 = FUN_0042c180();
        local_8._0_1_ = 0x1d;
        uStack_314 = CONCAT44(uVar8,0x7143a1);
        FUN_00988fa0();
        local_8._0_1_ = 0x1e;
        uStack_30c = CONCAT44(0x7143b2,(undefined4 *)uStack_30c);
        FUN_00989020();
        uStack_30c = CONCAT44(0x7143ba,(undefined4 *)uStack_30c);
        FUN_00408ad0();
        uStack_30c = CONCAT44(0x7143c5,(undefined4 *)uStack_30c);
        FUN_00408ad0();
        uStack_30c = CONCAT44(0x7143d0,(undefined4 *)uStack_30c);
        FUN_00408ad0();
        local_8._0_1_ = 0x1a;
        uStack_30c = CONCAT44(0x7143df,(undefined4 *)uStack_30c);
        FUN_00408ad0();
        uStack_30c = CONCAT44(0x7143ec,(undefined4 *)uStack_30c);
        FUN_009885d0();
        param_2 = (int *)&uStack_30c;
        local_8._0_1_ = 0x1f;
        uStack_30c = CONCAT44(local_34,1000);
        uStack_314 = CONCAT44(0x65,local_154);
        (**(code **)(*(int *)(iVar11 + 0xa48) + 0x24))();
        local_8._0_1_ = 0x20;
        uStack_30c = CONCAT44(0x714421,(undefined4 *)uStack_30c);
        FUN_00989020();
      }
      uStack_30c = CONCAT44(0x714761,(undefined4 *)uStack_30c);
      FUN_00408ad0();
      uStack_30c = CONCAT44(0x714769,(undefined4 *)uStack_30c);
      FUN_00408ad0();
      uStack_30c = CONCAT44(0x714774,(undefined4 *)uStack_30c);
      FUN_00408ad0();
      piVar15 = param_2;
      goto LAB_00718522;
    }
  }
  uStack_30c = CONCAT44(local_34,iVar11);
  uStack_314 = CONCAT44(0x7184cc,(undefined1 *)uStack_314);
  uVar8 = FUN_00536830();
  uStack_30c = 0xffffffff00000000;
  local_8._0_1_ = 0x10;
  uStack_314 = CONCAT44(uVar8,0x7184dc);
  FUN_00408ed0();
  local_8._0_1_ = 1;
  if (0xf < local_20) {
    uStack_30c = CONCAT44(local_34[0],&UNK_007184f3);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  uStack_30c = CONCAT44(local_34,iVar11);
  uStack_314 = CONCAT44(0x718500,(undefined1 *)uStack_314);
  uVar8 = FUN_00536b70();
  uStack_30c = 0xffffffff00000000;
  local_8._0_1_ = 0x11;
  uStack_314 = CONCAT44(uVar8,0x718511);
  FUN_00408ed0();
  piVar15 = param_2;
  if (0xf < local_20) {
    uStack_30c = CONCAT44(local_34[0],&UNK_0071851f);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
LAB_00718522:
  param_2 = piVar15;
  if (0xf < local_98) {
    uStack_30c = CONCAT44(local_ac[0],&UNK_00718537);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_1;
}

