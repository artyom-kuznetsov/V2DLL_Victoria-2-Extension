// FUN_0069e250 @ 0069e250 body=[[0069e250, 0069e2dd] [0069e2e1, 0069e38a] [0069e38e, 0069e3b3] [0069e3b7, 0069e46b] [0069e46f, 0069e4a8] [0069e4ac, 0069e4cd] [0069e4d1, 0069e537] [0069e53b, 0069e62d] [0069e631, 0069e69c] [0069e6a0, 0069e93c] [0069e940, 0069e96f] [0069e973, 0069ea52] [0069ea56, 0069ea85] [0069ea89, 0069ebbe] [0069ebc2, 0069ebf1] [0069ebf5, 0069ece9] [0069eced, 0069ed1c] [0069ed20, 0069eef4] [0069eef8, 0069ef87] [0069ef8b, 0069f009] [0069f00d, 0069f078] [0069f080, 0069f174] [0069f178, 0069f1d5] [0069f1d9, 0069f26d] [0069f271, 0069f2e3] [0069f2e7, 0069f369] [0069f36d, 0069f3f9] [0069f400, 0069f463] [0069f467, 0069f4bb] [0069f4bf, 0069f550] [0069f554, 0069f566]]


void FUN_0069e250(int param_1)

{
  char cVar1;
  void *_Dst;
  int *piVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  short *psVar6;
  uint *puVar7;
  int *piVar8;
  char *pcVar9;
  code *pcVar10;
  uint uVar11;
  float10 fVar12;
  undefined **ppuStack_3f8;
  undefined4 uStack_3f4;
  undefined8 uStack_3f0;
  undefined4 uStack_3e8;
  undefined *puStack_3e4;
  char *pcStack_3e0;
  uint *puStack_3dc;
  uint *puStack_3d8;
  undefined8 uStack_3d4;
  uint *puStack_3cc;
  undefined1 local_390 [40];
  undefined4 local_368;
  uint local_354;
  undefined1 local_344 [48];
  uint local_314;
  uint local_2f8;
  uint local_2dc;
  uint local_2c0;
  undefined1 local_2b8 [20];
  uint local_2a4;
  uint local_29c;
  undefined4 local_28c;
  uint local_288;
  uint local_280;
  undefined4 local_270;
  uint local_26c;
  uint local_264;
  undefined4 local_254;
  uint local_250;
  uint local_248 [4];
  undefined4 local_238;
  uint local_234;
  uint local_22c;
  undefined4 local_21c;
  uint local_218;
  uint local_210;
  undefined4 local_200;
  uint local_1fc;
  uint local_1f4;
  undefined4 local_1e4;
  uint local_1e0;
  uint local_1d8 [4];
  undefined4 local_1c8;
  uint local_1c4;
  uint local_1bc;
  undefined4 local_1ac;
  uint local_1a8;
  uint local_1a0;
  undefined4 local_190;
  uint local_18c;
  int *local_184;
  uint local_180;
  undefined4 local_170;
  uint local_16c;
  uint local_164;
  undefined4 local_154;
  uint local_150;
  char local_148;
  undefined8 local_147;
  undefined8 local_13f;
  undefined8 local_137;
  undefined4 local_12f;
  undefined2 local_12b;
  undefined1 local_129;
  undefined4 local_128;
  undefined4 local_118;
  undefined8 local_114;
  undefined4 local_10c;
  undefined4 uStack_108;
  undefined1 local_104;
  undefined1 local_100 [20];
  uint local_ec;
  int local_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  int local_d0;
  uint local_bc [4];
  undefined4 local_ac;
  uint local_a8;
  short local_a0;
  short local_9e;
  uint *local_9c;
  int *local_98;
  int *local_94;
  short local_90;
  short local_8e;
  int *local_8c;
  uint local_88;
  undefined4 local_78;
  uint local_74;
  float local_6c;
  uint local_68;
  uint local_64;
  int local_58;
  int local_54;
  uint local_50;
  int local_4c;
  uint local_48 [4];
  undefined4 local_38;
  uint local_34;
  undefined1 local_2c;
  int *local_28;
  int local_24;
  code *local_20;
  code *local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b6ed62;
  local_10 = ExceptionList;
  local_68 = 0;
  local_24 = *(int *)(param_1 + 0x34) * 0x58 + *(int *)(param_1 + 0x3c);
  local_74 = 0xf;
  local_78 = 0;
  local_88 = local_88 & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350();
  local_8 = 0;
  piVar2 = (int *)(**(code **)(**(int **)(param_1 + 0x28) + 0x44))();
  (**(code **)(*piVar2 + 0x34))();
  local_8 = 0xffffffff;
  if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_74 = 0xf;
  local_78 = 0;
  local_88 = local_88 & 0xffffff00;
  FUN_00409350();
  local_50 = 0xf;
  local_54 = 0;
  local_64 = local_64 & 0xffffff00;
  local_8._0_1_ = 2;
  local_8._1_3_ = 0;
  pcVar3 = __itoa(*(int *)(param_1 + 0x34) + 1,&local_148,10);
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_00409350();
  local_8 = CONCAT31(local_8._1_3_,3);
  (**(code **)(**(int **)(param_1 + 0x28) + 0x3c))();
  FUN_00408ed0();
  FUN_00a5ecc0();
  if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8 = 0xffffffff;
  local_50 = 0xf;
  local_54 = 0;
  local_64 = local_64 & 0xffffff00;
  if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_74 = 0xf;
  local_78 = 0;
  local_88 = local_88 & 0xffffff00;
  FUN_00409350();
  local_8 = 4;
  local_20 = (code *)FUN_009a8ee0();
  local_8._0_1_ = 5;
  FUN_00475500();
  FUN_009a9880();
  local_8._0_1_ = 6;
  (**(code **)(**(int **)(param_1 + 0x28) + 0x3c))();
  FUN_00408ed0();
  FUN_00a5ecc0();
  if (0xf < local_a8) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_a8 = 0xf;
  local_ac = 0;
  local_bc[0] = local_bc[0] & 0xffffff00;
  local_8 = CONCAT31(local_8._1_3_,7);
  FUN_009adb70();
  if (local_58 != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8 = 0xffffffff;
  local_58 = 0;
  local_54 = 0;
  local_50 = 0;
  if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_150 = 0xf;
  local_154 = 0;
  local_164 = local_164 & 0xffffff00;
  FUN_00409350();
  local_8 = 8;
  piVar2 = (int *)(**(code **)(**(int **)(param_1 + 0x28) + 0x6c))();
  local_8 = 0xffffffff;
  local_98 = piVar2;
  if (0xf < local_150) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_150 = 0xf;
  local_154 = 0;
  local_164 = local_164 & 0xffffff00;
  (**(code **)(piVar2[6] + 0x38))();
  (**(code **)(*piVar2 + 0x20))();
  _Dst = *(void **)(param_1 + 0x68);
  if (_Dst != *(void **)(param_1 + 0x6c)) {
    local_20 = (code *)0x0;
    FID_conflict__memcpy(_Dst,*(void **)(param_1 + 0x6c),0);
    *(int *)(param_1 + 0x6c) = (int)_Dst + (int)local_20;
  }
  iVar5 = local_24;
  (**(code **)(local_24 + 0x10))();
  uVar4 = *(int *)(param_1 + 0x6c) - *(int *)(param_1 + 0x68) >> 2;
  uVar11 = *(int *)(iVar5 + 0x4c) - *(int *)(iVar5 + 0x48);
  local_2c = 1;
  if (uVar11 < uVar4) {
    FUN_006a17e0();
  }
  else if (uVar4 < uVar11) {
    FUN_009d69b0();
  }
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  FUN_00409350();
  local_8 = 9;
  piVar2 = (int *)(**(code **)(**(int **)(param_1 + 0x28) + 0x6c))();
  local_8 = 0xffffffff;
  local_8c = piVar2;
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  (**(code **)(piVar2[6] + 0x38))();
  (**(code **)(*piVar2 + 0x20))();
  local_20 = *(code **)(local_24 + 0x40);
  local_6c = 0.0;
  piVar2 = (int *)FUN_00698dc0();
  (**(code **)(*piVar2 + 0xf4))();
  (**(code **)(*piVar2 + 0x3c))();
  local_18 = 0;
  do {
    FUN_00698880();
    uVar4 = local_18;
    local_28 = (int *)CONCAT31(local_28._1_3_,(int)local_18 < 5);
    local_1c = (code *)(local_18 % 5);
    local_8 = 10;
    puStack_3cc = (uint *)local_28;
    uStack_3d4._4_4_ = (char *)0x69e6e4;
    (*local_20)();
    uStack_3d4._4_4_ = "ledger_default_textbox_right";
    uStack_3d4._0_4_ = (uint **)0x69e6f6;
    piVar2 = (int *)FUN_00698cb0();
    if ((char)local_28 == '\0') {
      local_50 = 0;
      local_4c = (4 - (int)local_1c) * ((int)local_8e / 5);
      uStack_3d4._4_4_ = (char *)&local_184;
      uStack_3d4._0_4_ = (uint **)0x69e788;
      iVar5 = (**(code **)(*piVar2 + 0xbc))();
      iVar5 = -((int)*(short *)(iVar5 + 2) / 2);
    }
    else {
      local_4c = (int)local_8e;
      local_50 = (uVar4 + 1) * ((int)local_90 / 5) + uVar4 * -5;
      uStack_3d4._4_4_ = (char *)&local_94;
      uStack_3d4._0_4_ = (uint **)0x69e759;
      iVar5 = (**(code **)(*piVar2 + 0xbc))();
      iVar5 = (int)*(short *)(iVar5 + 2) / 2;
    }
    local_50 = local_50 + (int)local_a0;
    local_4c = local_4c + iVar5 + (int)local_9e;
    uStack_3d4._0_4_ = &local_9c;
    puStack_3d8 = (uint *)0x69e7bd;
    psVar6 = (short *)(**(code **)(*piVar2 + 0xbc))();
    local_50 = local_50 - (int)*psVar6;
    puStack_3d8 = &local_50;
    puStack_3dc = (uint *)0x69e7d3;
    (**(code **)(*piVar2 + 0xb4))();
    switch(local_128) {
    case 3:
      puStack_3cc = (uint *)0x69e801;
      FUN_00408ed0();
      FUN_00a5ecc0();
      goto switchD_0069e7e5_default;
    case 4:
      puStack_3cc = (uint *)0x69e82e;
      FUN_00408ed0();
      FUN_00a5ecc0();
      goto switchD_0069e7e5_default;
    case 5:
      local_1c = (code *)&stack0xfffffc3c;
      puStack_3cc = (uint *)0x69e867;
      FUN_00988a50();
      local_8 = CONCAT31(local_8._1_3_,0xb);
      puStack_3cc = (uint *)0x69e87c;
      FUN_00408ed0();
      FUN_00a5ecc0();
      uVar4 = local_2c0;
      break;
    case 6:
      local_16c = 0xf;
      local_170 = 0;
      local_180 = local_180 & 0xffffff00;
      FUN_00409350();
      local_8._0_1_ = 0xc;
      local_1c = (code *)&stack0xfffffc3c;
      puStack_3cc = (uint *)0x69e8ee;
      FUN_00988a50();
      local_8._0_1_ = 0xd;
      FUN_00988f20();
      local_8 = CONCAT31(local_8._1_3_,0xe);
      puStack_3cc = (uint *)0x69e91b;
      FUN_00408ed0();
      FUN_00a5ecc0();
      if (0xf < local_218) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_218 = 0xf;
      local_21c = 0;
      local_22c = local_22c & 0xffffff00;
      if (0xf < local_288) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_288 = 0xf;
      local_28c = 0;
      local_29c = local_29c & 0xffffff00;
      uVar4 = local_16c;
      break;
    case 7:
      local_1a8 = 0xf;
      local_1ac = 0;
      local_1bc = local_1bc & 0xffffff00;
      FUN_00409350();
      local_8._0_1_ = 0xf;
      local_1c = (code *)&stack0xfffffc3c;
      uStack_3d4._4_4_ = (char *)(local_dc >> 0x1f);
      puStack_3cc = (uint *)0x186a0;
      uStack_3d4._0_4_ = (uint **)local_dc;
      puStack_3d8 = (uint *)0x69e9e9;
      uStack_3d4 = __allmul();
      puStack_3cc = (uint *)0x3e8;
      puStack_3d8 = (uint *)0x69e9f6;
      __alldiv();
      puStack_3cc = (uint *)0x69ea04;
      FUN_00988a50();
      local_8._0_1_ = 0x10;
      FUN_00988f20();
      local_8 = CONCAT31(local_8._1_3_,0x11);
      puStack_3cc = (uint *)0x69ea31;
      FUN_00408ed0();
      FUN_00a5ecc0();
      if (0xf < local_1fc) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_1fc = 0xf;
      local_200 = 0;
      local_210 = local_210 & 0xffffff00;
      if (0xf < local_250) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_250 = 0xf;
      local_254 = 0;
      local_264 = local_264 & 0xffffff00;
      uVar4 = local_1a8;
      break;
    case 8:
      local_1c = (code *)&stack0xfffffc3c;
      puStack_3cc = (uint *)local_2b8;
      uStack_3d4._4_4_ = (char *)0x69eade;
      FUN_00988bb0();
      local_8 = CONCAT31(local_8._1_3_,0x12);
      puStack_3cc = (uint *)0x69eaf3;
      FUN_00408ed0();
      FUN_00a5ecc0();
      uVar4 = local_2a4;
      break;
    case 9:
      local_18c = 0xf;
      local_190 = 0;
      local_1a0 = local_1a0 & 0xffffff00;
      FUN_00409350();
      local_8._0_1_ = 0x13;
      local_1c = (code *)&stack0xfffffc3c;
      puStack_3cc = local_248;
      uStack_3d4._4_4_ = (char *)0x69eb70;
      FUN_00988bb0();
      local_8._0_1_ = 0x14;
      FUN_00988f20();
      local_8 = CONCAT31(local_8._1_3_,0x15);
      puStack_3cc = (uint *)0x69eb9d;
      FUN_00408ed0();
      FUN_00a5ecc0();
      if (0xf < local_26c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_26c = 0xf;
      local_270 = 0;
      local_280 = local_280 & 0xffffff00;
      if (0xf < local_234) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_234 = 0xf;
      local_238 = 0;
      local_248[0] = local_248[0] & 0xffffff00;
      uVar4 = local_18c;
      break;
    case 10:
      local_a8 = 0xf;
      local_ac = 0;
      local_bc[0] = local_bc[0] & 0xffffff00;
      FUN_00409350();
      local_1c = (code *)&stack0xfffffc3c;
      local_8._0_1_ = 0x16;
      puStack_3cc = (uint *)0x320000;
      uStack_3d4._4_4_ = (char *)uStack_d4;
      uStack_3d4._0_4_ = (uint **)local_d8;
      puStack_3d8 = (uint *)0x69ec7c;
      __allmul();
      puStack_3cc = local_1d8;
      uStack_3d4._4_4_ = (char *)0x69ec9b;
      FUN_00988bb0();
      local_8._0_1_ = 0x17;
      FUN_00988f20();
      local_8 = CONCAT31(local_8._1_3_,0x18);
      puStack_3cc = (uint *)0x69ecc8;
      FUN_00408ed0();
      FUN_00a5ecc0();
      if (0xf < local_1e0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_1e0 = 0xf;
      local_1e4 = 0;
      local_1f4 = local_1f4 & 0xffffff00;
      if (0xf < local_1c4) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_1c4 = 0xf;
      local_1c8 = 0;
      local_1d8[0] = local_1d8[0] & 0xffffff00;
      uVar4 = local_a8;
      break;
    case 0xb:
      local_148 = '\0';
      local_147 = 0;
      local_13f = 0;
      local_137 = 0;
      local_12f = 0;
      local_12b = 0;
      local_129 = 0;
      puStack_3cc = (uint *)0x69ed94;
      __itoa(local_d0,&local_148,10);
      pcVar3 = &local_148;
      local_74 = 0xf;
      local_78 = 0;
      local_88 = local_88 & 0xffffff00;
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      FUN_00409350();
      local_8 = CONCAT31(local_8._1_3_,0x19);
      puStack_3cc = (uint *)0x69ede5;
      FUN_00408ed0();
      FUN_00a5ecc0();
      uVar4 = local_74;
      break;
    case 0xc:
      puStack_3cc = (uint *)0x69ee23;
      FUN_009c9e20();
      local_8 = CONCAT31(local_8._1_3_,0x1a);
      puStack_3cc = (uint *)0x69ee3b;
      FUN_00408ed0();
      FUN_00a5ecc0();
      uVar4 = local_2f8;
      break;
    case 0xd:
      FUN_009c9c70();
      local_8 = CONCAT31(local_8._1_3_,0x1b);
      puStack_3cc = (uint *)0x69ee8d;
      FUN_00408ed0();
      FUN_00a5ecc0();
      uVar4 = local_2dc;
      break;
    case 0xe:
      FUN_0043acd0();
      local_8 = CONCAT31(local_8._1_3_,0x1c);
      puStack_3cc = (uint *)0x69eed3;
      FUN_00408ed0();
      FUN_00a5ecc0();
      uVar4 = local_314;
      break;
    default:
      goto switchD_0069e7e5_default;
    }
    if (0xf < uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
switchD_0069e7e5_default:
    if (((char)local_28 != '\0') || (local_18 != 9)) goto switchD_0069ef11_default;
    switch(local_128) {
    case 5:
    case 6:
    case 7:
      local_6c = (float)local_dc / 1000.0;
      break;
    case 8:
    case 9:
    case 10:
      fVar12 = (float10)CONCAT44(uStack_d4,local_d8) * (float10)3.0517578125e-05;
      goto LAB_0069ef70;
    case 0xb:
    case 0xc:
      local_6c = (float)local_d0;
      break;
    case 0xd:
      fVar12 = (float10)local_d0;
      if (local_d0 < 0) {
        fVar12 = fVar12 + (float10)4.2949673e+09;
      }
LAB_0069ef70:
      local_6c = (float)fVar12;
    }
switchD_0069ef11_default:
    if (0xf < local_ec) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_18 = local_18 + 1;
    if (9 < (int)local_18) {
      local_1c = *(code **)(local_24 + 8);
      local_58 = 0;
      local_54 = 0;
      local_50 = 0;
      local_8 = 0x1d;
      local_74 = 0xf;
      local_78 = 0;
      local_88 = local_88 & 0xffffff00;
      FUN_00409350();
      local_8._0_1_ = 0x1e;
      piVar2 = (int *)(**(code **)(*local_8c + 0x7c))();
      local_8._0_1_ = 0x1d;
      local_28 = piVar2;
      if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_74 = 0xf;
      local_78 = 0;
      local_88 = local_88 & 0xffffff00;
      (**(code **)(*piVar2 + 0x54))();
      (**(code **)(*piVar2 + 0x5c))();
      (**(code **)(*piVar2 + 0x50))();
      if (piVar2[0x41] == 0) {
        local_20 = (code *)DAT_00f092dc;
      }
      else {
        fVar12 = (float10)(**(code **)(*(int *)(piVar2[0x41] + 0x54) + 0x10))();
        local_20 = (code *)(float)fVar12;
      }
      local_18 = 0;
      if (0 < (int)(*(int *)(param_1 + 0x6c) - *(int *)(param_1 + 0x68) & 0xfffffffcU)) {
        do {
          FUN_00698880();
          local_8._0_1_ = 0x1f;
          uStack_3d4._4_4_ = *(char **)(*(int *)(param_1 + 0x68) + local_18 * 4);
          puStack_3cc = (uint *)0x7fffffff;
          uStack_3d4._0_4_ = (uint **)0x69f0ae;
          (*local_1c)();
          uStack_3d4._0_4_ = (uint **)0x28;
          puStack_3d8 = (uint *)0x69f0b5;
          puVar7 = (uint *)FUN_00aae9af();
          local_8._0_1_ = 0x20;
          local_9c = puVar7;
          if (puVar7 == (uint *)0x0) {
            puStack_3d8 = (uint *)0x0;
          }
          else {
            uStack_3d4._0_4_ = (uint **)0x13;
            puStack_3d8 = (uint *)0xe0b9cc;
            local_34 = 0xf;
            local_38 = 0;
            local_48[0] = local_48[0] & 0xffffff00;
            puStack_3dc = (uint *)0x69f0e8;
            FUN_00409350();
            piVar2 = DAT_01258a80;
            local_8 = CONCAT31(local_8._1_3_,0x21);
            local_68 = local_68 | 1;
            uStack_3d4._0_4_ = (uint **)0x69f106;
            uStack_3d4._0_4_ =
                 (uint **)(**(code **)(**(int **)(*(int *)(param_1 + 0x4c) + 0xb24) + 0x3c))();
            puVar7[1] = 0;
            puVar7[2] = 0;
            puVar7[3] = 0;
            *(undefined1 *)(puVar7 + 4) = 0;
            DAT_013f08e0 = DAT_013f08e0 + 1;
            *(undefined1 *)(puVar7 + 5) = 0;
            *(undefined1 *)(puVar7 + 6) = 0;
            puVar7[7] = (uint)&PTR_FUN_00e39158;
            local_8 = 0x25;
            *puVar7 = (uint)&PTR_FUN_00e392f0;
            puVar7[7] = (uint)&PTR_FUN_00e39320;
            *(undefined1 *)(puVar7 + 9) = 0;
            puStack_3d8 = local_48;
            puStack_3dc = (uint *)0x69f14e;
            uVar4 = (**(code **)(*piVar2 + 0x2c))();
            puVar7[8] = uVar4;
            puStack_3d8 = puVar7;
          }
          local_8 = 0x1f;
          if ((local_68 & 1) != 0) {
            local_68 = local_68 & 0xfffffffe;
            if (0xf < local_34) {
              uStack_3d4._0_4_ = (uint **)local_48[0];
                    /* WARNING: Subroutine does not return */
              puStack_3d8 = (uint *)&UNK_0069f175;
              FUN_00aae91b();
            }
            local_34 = 0xf;
            local_38 = 0;
            local_48[0] = local_48[0] & 0xffffff00;
          }
          piVar2 = (int *)puStack_3d8[8];
          uStack_3d4._0_4_ = (uint **)0x0;
          puStack_3dc = (uint *)0x69f194;
          (**(code **)(*local_28 + 0x10))();
          puStack_3dc = (uint *)0x13;
          pcStack_3e0 = "ledger_legend_plupp";
          local_34 = 0xf;
          local_38 = 0;
          local_48[0] = local_48[0] & 0xffffff00;
          puStack_3e4 = (undefined *)0x69f1b0;
          FUN_00409350();
          local_8._0_1_ = 0x27;
          puStack_3dc = local_48;
          pcStack_3e0 = (char *)0x69f1c1;
          piVar8 = (int *)(**(code **)(*piVar2 + 0x44))();
          local_8._0_1_ = 0x1f;
          if (0xf < local_34) {
            pcStack_3e0 = (char *)local_48[0];
                    /* WARNING: Subroutine does not return */
            puStack_3e4 = &UNK_0069f1d6;
            FUN_00aae91b();
          }
          local_9c = (uint *)&ppuStack_3f8;
          uStack_3f4 = local_118;
          ppuStack_3f8 = CColor::vftable;
          uStack_3f0 = local_114;
          uStack_3e8 = local_10c;
          puStack_3e4 = (undefined *)uStack_108;
          pcStack_3e0 = (char *)CONCAT31(pcStack_3e0._1_3_,local_104);
          local_34 = 0xf;
          local_38 = 0;
          local_48[0] = local_48[0] & 0xffffff00;
          (**(code **)(*piVar8 + 0x68))();
          local_34 = 0xf;
          local_38 = 0;
          local_48[0] = local_48[0] & 0xffffff00;
          FUN_00409350("ledger_default_textbox",0x16);
          local_8._0_1_ = 0x28;
          (**(code **)(*piVar2 + 0x3c))(local_48);
          local_8._0_1_ = 0x1f;
          if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_48[0]);
          }
          local_34 = 0xf;
          local_38 = 0;
          local_48[0] = local_48[0] & 0xffffff00;
          FUN_00408ed0(local_100,0,0xffffffff);
          FUN_00a5ecc0(local_100,0);
          local_34 = 0xf;
          local_38 = 0;
          local_48[0] = local_48[0] & 0xffffff00;
          FUN_00409350("ledger_legend_checkbox",0x16);
          local_8._0_1_ = 0x29;
          piVar2 = (int *)(**(code **)(*piVar2 + 0x48))(local_48);
          if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_48[0]);
          }
          local_34 = 0xf;
          local_38 = 0;
          local_48[0] = local_48[0] & 0xffffff00;
          local_a8 = 0xf;
          local_ac = 0;
          local_bc[0] = local_bc[0] & 0xffffff00;
          local_8._0_1_ = 0x2a;
          pcVar9 = __itoa(local_18,&local_148,10);
          pcVar3 = pcVar9;
          do {
            cVar1 = *pcVar3;
            pcVar3 = pcVar3 + 1;
          } while (cVar1 != '\0');
          FUN_00409350(pcVar9,(int)pcVar3 - (int)(pcVar9 + 1));
          local_8._0_1_ = 0x2b;
          (**(code **)(*piVar2 + 0x78))(local_bc);
          local_8._0_1_ = 0x1f;
          if (0xf < local_a8) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_bc[0]);
          }
          if (*(char *)(local_18 + *(int *)(local_24 + 0x48)) == '\0') {
            FUN_009a8b10();
          }
          else {
            FUN_009a8bc0();
          }
          (**(code **)(piVar2[0x15] + 4))(param_1 + 0x128);
          if (local_58 != local_54) {
            local_54 = FUN_006a2070(param_1);
          }
          uVar4 = local_18;
          local_94 = (int *)FUN_00698dc0("ledger_linechart");
          local_8c = (int *)local_94[0x25];
          if (*(char *)(uVar4 + *(int *)(local_24 + 0x48)) == '\0') {
            pcVar10 = *(code **)(*local_94 + 0x38);
          }
          else {
            iVar5 = 0;
            if (0 < *(int *)(local_24 + 0x44)) {
              do {
                FUN_00698880();
                local_8._0_1_ = 0x2c;
                (*local_1c)(*(undefined4 *)(*(int *)(param_1 + 0x68) + local_18 * 4),iVar5,local_390
                            ,0);
                FUN_0047bb00(local_344);
                FUN_006a1740();
                local_8._0_1_ = 0x1f;
                if (0xf < local_354) {
                    /* WARNING: Subroutine does not return */
                  FUN_00aae91b(local_368);
                }
                iVar5 = iVar5 + 1;
              } while (iVar5 < *(int *)(local_24 + 0x44));
            }
            local_8c[0x5e] = (int)local_6c;
            FUN_009d93b0(local_8c,&local_58);
            pcVar10 = *(code **)(*local_94 + 0x34);
          }
          (*pcVar10)();
          local_8._0_1_ = 0x1d;
          if (0xf < local_ec) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_18 = local_18 + 1;
        } while ((int)local_18 < *(int *)(param_1 + 0x6c) - *(int *)(param_1 + 0x68) >> 2);
      }
      iVar5 = local_28[0x41];
      if ((iVar5 != 0) && (DAT_00f092dc < (float)local_20)) {
        puStack_3cc = (uint *)local_28;
        uStack_3d4._4_4_ = (char *)(((float)local_20 + 0.0005) * 1000.0);
        uStack_3d4._0_4_ = (uint **)0x69f526;
        FUN_00401000();
        uStack_3d4._4_4_ = (char *)0x69f52e;
        puStack_3cc = (uint *)FUN_00b31c00();
        uStack_3d4._4_4_ = (char *)0x69f53a;
        (**(code **)(*(int *)(iVar5 + 0x54) + 0x1c))();
      }
      (**(code **)(*local_28 + 0x6c))();
      if (local_58 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      ExceptionList = local_10;
      return;
    }
  } while( true );
}

