// FUN_007adb70 @ 007adb70 body=[[007adb70, 007adbf6] [007adbfa, 007ade3e] [007ade42, 007adec6] [007adeca, 007adf35] [007adf39, 007adf5a] [007adf5e, 007adfdc] [007adfe0, 007ae001] [007ae005, 007ae070] [007ae074, 007ae097] [007ae09b, 007ae169] [007ae16d, 007ae196] [007ae19a, 007ae1bd] [007ae1c1, 007ae1e2] [007ae1e6, 007ae259] [007ae25d, 007ae288] [007ae28c, 007ae32f]]


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

void FUN_007adb70(int param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint **ppuVar4;
  int *piVar5;
  uint **ppuVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int *piVar9;
  uint **extraout_ECX;
  uint **ppuVar10;
  uint **extraout_ECX_00;
  float10 fVar11;
  undefined4 auStack_288 [2];
  undefined4 uStack_280;
  undefined4 uStack_27c;
  uint *puStack_278;
  uint *puStack_274;
  uint *puStack_270;
  char *pcStack_26c;
  uint uStack_268;
  char *pcStack_264;
  uint *puStack_260;
  uint *puStack_25c;
  uint *puStack_258;
  char *pcStack_254;
  uint *puStack_250;
  char *pcStack_24c;
  uint **ppuStack_248;
  uint *puStack_244;
  char *pcStack_240;
  uint *puStack_23c;
  undefined1 local_140 [8];
  uint local_138;
  uint local_134;
  uint local_f4;
  undefined4 local_e4;
  uint local_e0;
  uint local_d8 [4];
  undefined4 local_c8;
  uint local_c4;
  uint local_bc;
  undefined4 local_ac;
  uint local_a8;
  uint local_a0 [4];
  undefined4 local_90;
  uint local_8c;
  uint local_84 [4];
  undefined4 local_74;
  uint local_70;
  float local_68;
  uint local_64 [4];
  undefined4 local_54;
  uint local_50;
  uint local_48;
  undefined4 local_44;
  undefined4 *local_40;
  int *local_3c;
  uint local_38;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  undefined1 *local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00ba0bf6;
  local_10 = ExceptionList;
  local_38 = 0;
  puStack_23c = (uint *)0xa;
  pcStack_240 = "inventions";
  local_8c = 0xf;
  local_90 = 0;
  local_a0[0] = local_a0[0] & 0xffffff00;
  puStack_244 = (undefined4 *)0x7adbbf;
  ExceptionList = &local_10;
  FUN_00409350();
  local_8 = 0;
  puStack_23c = local_a0;
  pcStack_240 = (char *)0x7adbd6;
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x4c) + 0x7c))();
  local_8 = 0xffffffff;
  local_3c = piVar5;
  if (0xf < local_8c) {
    pcStack_240 = (char *)local_a0[0];
                    /* WARNING: Subroutine does not return */
    puStack_244 = (uint *)&UNK_007adbf7;
    FUN_00aae91b();
  }
  local_8c = 0xf;
  local_90 = 0;
  local_a0[0] = local_a0[0] & 0xffffff00;
  pcStack_240 = (char *)0x7adc15;
  (**(code **)(*piVar5 + 0x54))();
  if (piVar5[0x41] == 0) {
    local_68 = DAT_00f092dc;
  }
  else {
    pcStack_240 = (char *)0x7adc2e;
    fVar11 = (float10)(**(code **)(*(int *)(piVar5[0x41] + 0x54) + 0x10))();
    local_68 = (float)fVar11;
  }
  pcStack_240 = (char *)0x7adc49;
  (**(code **)(*piVar5 + 0x5c))();
  local_44 = *(undefined4 *)(DAT_012588e8 + 0xb5c);
  ppuVar10 = *(uint ***)(DAT_012587e4 + 4);
  puVar1 = ppuVar10[*(int *)(DAT_012588e8 + 0xb60)];
  local_48 = puVar1[0x144];
  if (0 < (int)local_48) {
    local_18 = (undefined1 *)&puStack_23c;
    ppuVar10 = &puStack_23c;
    puVar7 = (undefined4 *)puVar1[0x142];
    while (puVar7 != (undefined4 *)0x0) {
      uVar8 = *puVar7;
      puVar7 = (undefined4 *)puVar7[2];
      *ppuVar10 = (uint *)uVar8;
      ppuVar10 = ppuVar10 + 1;
    }
    pcStack_240 = (char *)0x0;
    puStack_244 = (undefined4 *)0x7adcae;
    FUN_008a8650();
    local_138 = puVar1[7];
    local_134 = puVar1[8];
    pcStack_240 = (char *)0x7adcd1;
    FUN_008a88d0();
    uVar8 = *(undefined4 *)(param_1 + 0x13c);
    pcStack_240 = (char *)0x7adcf1;
    FUN_008a88d0();
    pcStack_240 = (char *)0x7add0a;
    FUN_008a88d0();
    local_40 = auStack_288;
    ppuVar6 = &puStack_23c + local_48;
    auStack_288[0] = uVar8;
    FUN_008a88d0();
    FUN_007afeb0(&puStack_23c,ppuVar6,(int)ppuVar6 - (int)&puStack_23c >> 2);
    ppuVar10 = extraout_ECX;
    if ((*(char *)(param_1 + 0x140) == '\0') &&
       (ppuVar10 = &puStack_23c, ppuVar4 = &puStack_23c, &puStack_23c != ppuVar6)) {
      do {
        ppuVar10 = ppuVar4;
        ppuVar6 = ppuVar6 + -1;
        if (ppuVar10 == ppuVar6) break;
        puVar1 = *ppuVar10;
        *ppuVar10 = *ppuVar6;
        ppuVar10 = ppuVar10 + 1;
        *ppuVar6 = puVar1;
        ppuVar4 = ppuVar10;
      } while (ppuVar10 != ppuVar6);
    }
    param_1 = 0;
    piVar5 = local_3c;
    if (0 < (int)local_48) {
      do {
        pcStack_240 = (char *)0x28;
        puStack_244 = (uint *)0x7add7c;
        puVar7 = (undefined4 *)FUN_00aae9af();
        local_8 = 1;
        local_40 = puVar7;
        if (puVar7 == (undefined4 *)0x0) {
          puStack_244 = (undefined4 *)0x0;
        }
        else {
          pcStack_240 = (char *)0x10;
          puStack_244 = (uint *)0xe17ebc;
          local_20 = 0xf;
          local_24 = 0;
          local_34[0] = local_34[0] & 0xffffff00;
          ppuStack_248 = (uint **)0x7addb0;
          FUN_00409350();
          piVar5 = DAT_01258a80;
          local_8 = CONCAT31(local_8._1_3_,2);
          local_38 = local_38 | 1;
          pcStack_240 = (char *)0x7addd0;
          pcStack_240 = (char *)(**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x3c))();
          puVar7[1] = 0;
          puVar7[2] = 0;
          puVar7[3] = 0;
          *(undefined1 *)(puVar7 + 4) = 0;
          DAT_013f08e0 = DAT_013f08e0 + 1;
          *(undefined1 *)(puVar7 + 5) = 0;
          *(undefined1 *)(puVar7 + 6) = 0;
          puVar7[7] = &PTR_FUN_00e39158;
          local_8 = 6;
          *puVar7 = &PTR_FUN_00e392f0;
          puVar7[7] = &PTR_FUN_00e39320;
          *(undefined1 *)(puVar7 + 9) = 0;
          puStack_244 = local_34;
          ppuStack_248 = (uint **)0x7ade18;
          uVar8 = (**(code **)(*piVar5 + 0x2c))();
          puVar7[8] = uVar8;
          puStack_244 = puVar7;
        }
        local_8 = 0xffffffff;
        if ((local_38 & 1) != 0) {
          local_38 = local_38 & 0xfffffffe;
          if (0xf < local_20) {
            pcStack_240 = (char *)local_34[0];
                    /* WARNING: Subroutine does not return */
            puStack_244 = (uint *)&UNK_007ade3f;
            FUN_00aae91b();
          }
          local_20 = 0xf;
          local_24 = 0;
          local_34[0] = local_34[0] & 0xffffff00;
        }
        piVar5 = (int *)puStack_244[8];
        pcStack_240 = (char *)0x0;
        ppuStack_248 = (uint **)0x7ade5e;
        (**(code **)(*local_3c + 0x10))();
        ppuStack_248 = (uint **)0xb;
        pcStack_24c = "folder_icon";
        local_20 = 0xf;
        local_24 = 0;
        local_34[0] = local_34[0] & 0xffffff00;
        puStack_250 = (uint *)0x7ade7b;
        FUN_00409350();
        local_8 = 8;
        ppuStack_248 = (uint **)local_34;
        pcStack_24c = (char *)0x7ade8f;
        piVar9 = (int *)(**(code **)(*piVar5 + 0x44))();
        pcStack_24c = *(char **)(*(int *)(*(int *)(*(int *)(local_18 + param_1 * 4) + 0x430) + 0x310
                                         ) + 0x40);
        puStack_250 = (uint *)0x7adeb1;
        (**(code **)(*piVar9 + 0x48))();
        local_8 = 0xffffffff;
        if (0xf < local_20) {
          puStack_250 = (uint *)local_34[0];
                    /* WARNING: Subroutine does not return */
          pcStack_254 = &UNK_007adec7;
          FUN_00aae91b();
        }
        puStack_250 = (uint *)0xb;
        pcStack_254 = "folder_icon";
        local_20 = 0xf;
        local_24 = 0;
        local_34[0] = local_34[0] & 0xffffff00;
        puStack_258 = (uint *)0x7adee2;
        FUN_00409350();
        local_8 = 9;
        puStack_250 = local_34;
        pcStack_254 = (char *)0x7adef6;
        piVar9 = (int *)(**(code **)(*piVar5 + 0x44))();
        pcStack_254 = (char *)(*(int *)(local_18 + param_1 * 4) + 0x30);
        puStack_258 = (uint *)0x7adf12;
        pcStack_254 = (char *)FUN_00988fa0();
        local_8 = CONCAT31(local_8._1_3_,10);
        puStack_258 = (uint *)0x7adf23;
        (**(code **)(*piVar9 + 0x78))();
        if (0xf < local_50) {
          puStack_258 = (uint *)local_64[0];
                    /* WARNING: Subroutine does not return */
          puStack_25c = (uint *)&UNK_007adf36;
          FUN_00aae91b();
        }
        local_8 = 0xffffffff;
        local_50 = 0xf;
        local_54 = 0;
        local_64[0] = local_64[0] & 0xffffff00;
        if (0xf < local_20) {
          puStack_258 = (uint *)local_34[0];
                    /* WARNING: Subroutine does not return */
          puStack_25c = (uint *)&UNK_007adf5b;
          FUN_00aae91b();
        }
        puStack_258 = (uint *)0xe;
        puStack_25c = (uint *)0xe17df4;
        local_20 = 0xf;
        local_24 = 0;
        local_34[0] = local_34[0] & 0xffffff00;
        puStack_260 = (uint *)0x7adf7a;
        FUN_00409350();
        local_8 = 0xb;
        puStack_258 = local_64;
        puStack_25c = (uint *)0x7adf95;
        uVar8 = (**(code **)(**(int **)(local_18 + param_1 * 4) + 0x18))();
        local_8 = CONCAT31(local_8._1_3_,0xc);
        puStack_25c = local_34;
        puStack_260 = (uint *)0x7adfa8;
        local_40 = (undefined4 *)(**(code **)(*piVar5 + 0x3c))();
        puStack_260 = (uint *)0xffffffff;
        pcStack_264 = (char *)0x0;
        pcStack_26c = (char *)0x7adfba;
        uStack_268 = uVar8;
        FUN_00408ed0();
        puStack_260 = (uint *)0x0;
        uStack_268 = 0x7adfca;
        pcStack_264 = (char *)uVar8;
        FUN_00a5ecc0();
        if (0xf < local_50) {
          puStack_260 = (uint *)local_64[0];
                    /* WARNING: Subroutine does not return */
          pcStack_264 = &UNK_007adfdd;
          FUN_00aae91b();
        }
        local_8 = 0xffffffff;
        local_50 = 0xf;
        local_54 = 0;
        local_64[0] = local_64[0] & 0xffffff00;
        if (0xf < local_20) {
          puStack_260 = (uint *)local_34[0];
                    /* WARNING: Subroutine does not return */
          pcStack_264 = &UNK_007ae002;
          FUN_00aae91b();
        }
        puStack_260 = (uint *)0xe;
        pcStack_264 = "invention_name";
        local_20 = 0xf;
        local_24 = 0;
        local_34[0] = local_34[0] & 0xffffff00;
        uStack_268 = 0x7ae021;
        FUN_00409350();
        local_8 = 0xd;
        puStack_260 = local_34;
        pcStack_264 = (char *)0x7ae035;
        piVar9 = (int *)(**(code **)(*piVar5 + 0x3c))();
        pcStack_264 = (char *)(*(int *)(local_18 + param_1 * 4) + 0x30);
        uStack_268 = 0x7ae051;
        pcStack_264 = (char *)FUN_00988fa0();
        local_8 = CONCAT31(local_8._1_3_,0xe);
        uStack_268 = 0x7ae062;
        (**(code **)(*piVar9 + 0x78))();
        if (0xf < local_50) {
          uStack_268 = local_64[0];
                    /* WARNING: Subroutine does not return */
          pcStack_26c = &UNK_007ae071;
          FUN_00aae91b();
        }
        local_8 = 0xffffffff;
        local_50 = 0xf;
        local_54 = 0;
        uVar3 = local_64[0] >> 8;
        local_64[0] = uVar3 << 8;
        if (0xf < local_20) {
          uStack_268 = local_34[0];
                    /* WARNING: Subroutine does not return */
          pcStack_26c = &UNK_007ae098;
          FUN_00aae91b();
        }
        uStack_268 = 1;
        pcStack_26c = "%";
        local_50 = 0xf;
        local_54 = 0;
        local_64[0] = uVar3 << 8;
        puStack_270 = (uint *)0x7ae0b3;
        FUN_00409350();
        local_8 = 0xf;
        uStack_268 = 0x11;
        pcStack_26c = "invention_percent";
        local_20 = 0xf;
        local_24 = 0;
        local_34[0] = local_34[0] & 0xffffff00;
        puStack_270 = (uint *)0x7ae0ce;
        FUN_00409350();
        uStack_268 = 0;
        local_40 = &pcStack_26c;
        puStack_274 = (uint *)&pcStack_26c;
        local_8._0_1_ = 0x10;
        puStack_270 = (uint *)local_140;
        puStack_278 = (uint *)0x7ae0fb;
        (**(code **)(*(int *)(*(int *)(local_18 + param_1 * 4) + 0x400) + 0x18))();
        puStack_278 = local_d8;
        uStack_27c = 0x7ae107;
        FUN_00988a50();
        puStack_270 = local_64;
        local_8._0_1_ = 0x11;
        puStack_274 = (uint *)0x7ae11c;
        uVar8 = FUN_00988f20();
        local_8 = CONCAT31(local_8._1_3_,0x12);
        puStack_270 = local_34;
        puStack_274 = (uint *)0x7ae12f;
        local_40 = (undefined4 *)(**(code **)(*piVar5 + 0x3c))();
        puStack_274 = (uint *)0xffffffff;
        puStack_278 = (uint *)0x0;
        uStack_280 = 0x7ae141;
        uStack_27c = uVar8;
        FUN_00408ed0();
        puStack_274 = (uint *)0x0;
        uStack_27c = 0x7ae151;
        puStack_278 = (uint *)uVar8;
        FUN_00a5ecc0();
        if (0xf < local_e0) {
          puStack_274 = (uint *)local_f4;
                    /* WARNING: Subroutine does not return */
          puStack_278 = (uint *)&UNK_007ae16a;
          FUN_00aae91b();
        }
        local_e0 = 0xf;
        local_e4 = 0;
        local_f4 = local_f4 & 0xffffff00;
        if (0xf < local_c4) {
          puStack_274 = (uint *)local_d8[0];
                    /* WARNING: Subroutine does not return */
          puStack_278 = (uint *)&UNK_007ae197;
          FUN_00aae91b();
        }
        local_c4 = 0xf;
        local_c8 = 0;
        local_d8[0] = local_d8[0] & 0xffffff00;
        if (0xf < local_20) {
          puStack_274 = (uint *)local_34[0];
                    /* WARNING: Subroutine does not return */
          puStack_278 = (uint *)&UNK_007ae1be;
          FUN_00aae91b();
        }
        local_8 = 0xffffffff;
        local_20 = 0xf;
        local_24 = 0;
        local_34[0] = local_34[0] & 0xffffff00;
        if (0xf < local_50) {
          puStack_274 = (uint *)local_64[0];
                    /* WARNING: Subroutine does not return */
          puStack_278 = (uint *)&UNK_007ae1e3;
          FUN_00aae91b();
        }
        puStack_274 = (uint *)0x11;
        puStack_278 = (uint *)0xe17ed0;
        local_70 = 0xf;
        local_74 = 0;
        local_84[0] = local_84[0] & 0xffffff00;
        uStack_27c = 0x7ae202;
        FUN_00409350();
        local_8 = 0x13;
        puStack_274 = local_84;
        puStack_278 = (uint *)0x7ae216;
        piVar5 = (int *)(**(code **)(*piVar5 + 0x3c))();
        puStack_278 = (uint *)(*(int *)(local_18 + param_1 * 4) + 0x30);
        uStack_27c = 0x7ae235;
        puStack_278 = (uint *)FUN_00988fa0();
        local_8 = CONCAT31(local_8._1_3_,0x14);
        uStack_27c = 0x7ae246;
        (**(code **)(*piVar5 + 0x78))();
        if (0xf < local_a8) {
          pcStack_240 = (char *)local_bc;
                    /* WARNING: Subroutine does not return */
          puStack_244 = (uint *)&UNK_007ae25a;
          FUN_00aae91b();
        }
        local_8 = 0xffffffff;
        local_a8 = 0xf;
        local_ac = 0;
        local_bc = local_bc & 0xffffff00;
        if (0xf < local_70) {
          pcStack_240 = (char *)local_84[0];
                    /* WARNING: Subroutine does not return */
          puStack_244 = (uint *)&UNK_007ae289;
          FUN_00aae91b();
        }
        param_1 = param_1 + 1;
        local_70 = 0xf;
        local_74 = 0;
        local_84[0] = local_84[0] & 0xffffff00;
        ppuVar10 = extraout_ECX_00;
        piVar5 = local_3c;
      } while (param_1 < (int)local_48);
    }
  }
  iVar2 = piVar5[0x41];
  if ((iVar2 != 0) && (DAT_00f092dc < local_68)) {
    pcStack_240 = (char *)0x1;
    puStack_244 = (undefined4 *)0x1;
    pcStack_24c = (char *)((local_68 + 0.0005) * 1000.0);
    puStack_250 = (uint *)0x7ae2f1;
    ppuStack_248 = ppuVar10;
    FUN_00401000();
    pcStack_24c = (char *)0x7ae2f9;
    ppuStack_248 = (uint **)FUN_00b31c00();
    pcStack_24c = (char *)0x7ae305;
    (**(code **)(*(int *)(iVar2 + 0x54) + 0x1c))();
  }
  pcStack_240 = (char *)0x7ae30e;
  (**(code **)(*piVar5 + 0x6c))();
  pcStack_240 = (char *)0x7ae317;
  (**(code **)(*piVar5 + 0x50))();
  ExceptionList = local_10;
  return;
}

