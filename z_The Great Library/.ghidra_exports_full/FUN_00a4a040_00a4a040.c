// FUN_00a4a040 @ 00a4a040 body=[[00a4a040, 00a4a20c] [00a4a210, 00a4a23c] [00a4a240, 00a4a524] [00a4a528, 00a4a5d2] [00a4a5d6, 00a4ab4a] [00a4ab4e, 00a4ab66]]


/* WARNING: Removing unreachable block (ram,0x00a4a51b) */

int * FUN_00a4a040(int *param_1,uint *param_2,uint *param_3,undefined4 *param_4,int *param_5,
                  int param_6,int param_7,uint *param_8,int param_9,char param_10,int param_11,
                  char param_12)

{
  int iVar1;
  uint *puVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int in_ECX;
  undefined4 *puVar7;
  uint uVar8;
  uint *puVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int iVar15;
  undefined4 ****ppppuVar16;
  undefined4 uVar17;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  int *piStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined4 uStack_2f8;
  int *piStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  int *piStack_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  int *piStack_2dc;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  int *piStack_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  int *piStack_2c4;
  undefined1 *puStack_2c0;
  int *piStack_2bc;
  int *piStack_2b8;
  undefined4 uStack_2b4;
  undefined4 ***pppuStack_2b0;
  int *piStack_2ac;
  undefined4 ****ppppuStack_2a8;
  int *piStack_2a4;
  int *piStack_2a0;
  undefined4 ***pppuStack_29c;
  undefined4 ****ppppuStack_298;
  int *piStack_294;
  int *piStack_290;
  int *piStack_28c;
  undefined4 uStack_288;
  int *piStack_284;
  undefined4 ***pppuStack_280;
  int *piStack_27c;
  int *piStack_278;
  int *piStack_274;
  int *piStack_270;
  undefined1 *puStack_26c;
  int *piStack_268;
  undefined4 uStack_264;
  int *piStack_260;
  int *piStack_25c;
  undefined1 *puStack_258;
  undefined4 ****ppppuStack_254;
  undefined1 *puStack_250;
  uint *puStack_24c;
  uint *puStack_248;
  undefined4 ****ppppuStack_244;
  int *piStack_234;
  undefined1 auStack_230 [4];
  uint local_22c;
  undefined4 ****ppppuStack_228;
  undefined4 uStack_224;
  int *piStack_220;
  undefined4 uStack_21c;
  undefined4 ****local_218;
  uint uStack_214;
  uint local_210;
  uint local_20c;
  uint local_208;
  uint local_204;
  uint local_200;
  uint uStack_1fc;
  uint uStack_1f8;
  uint uStack_1f4;
  undefined4 local_1f0;
  uint local_1ec;
  undefined1 auStack_1e0 [12];
  undefined4 ****local_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 local_1c4;
  undefined4 ***local_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  void *pvStack_1b0;
  undefined4 ***pppuStack_1ac;
  uint uStack_1a8;
  undefined4 uStack_1a4;
  int *piStack_1a0;
  uint uStack_19c;
  undefined4 ***local_198;
  uint local_194;
  undefined1 auStack_144 [12];
  undefined1 auStack_138 [32];
  int local_118 [14];
  undefined4 local_e0;
  short local_d0;
  undefined2 local_ce;
  undefined1 auStack_cc [96];
  void *pvStack_6c;
  undefined1 uStack_68;
  undefined1 local_63;
  void *pvStack_1c;
  undefined1 *puStack_18;
  int local_14;
  
  puVar2 = param_8;
  local_14 = 0xffffffff;
  puStack_18 = &LAB_00b4e297;
  pvStack_1c = ExceptionList;
  local_22c = 0;
  uStack_224 = CONCAT13(1,(uint3)uStack_224);
  if (param_6 == 0) {
    param_6 = *param_8 + 1;
    uStack_224 = (uint)(uint3)uStack_224;
LAB_00a4a099:
    if (param_7 == 0) goto LAB_00a4a09d;
  }
  else {
    if (param_7 != 0) {
      local_22c = 0x110;
      param_10 = '\x01';
      goto LAB_00a4a099;
    }
LAB_00a4a09d:
    param_7 = param_8[1] + 1;
    local_22c = 0x110;
  }
  if (param_10 != '\0') {
    local_22c = 0x110;
  }
  if (param_12 == '\0') {
    local_22c = 0x115;
  }
  if (param_9 == 0) {
    local_22c = local_22c & 0xfffffffc;
  }
  else if (param_9 == 1) {
    local_22c = local_22c & 0xfffffffe | 2;
  }
  else if (param_9 == 2) {
    local_22c = local_22c | 1;
  }
  ppppuStack_244 = (undefined4 ****)0xffffffff;
  puStack_248 = (uint *)0x0;
  local_1c4 = 0;
  local_1d4 = (undefined4 ****)((uint)local_1d4 & 0xffffff00);
  puStack_24c = param_4;
  local_1c0 = (undefined4 ***)0xf;
  puStack_250 = (undefined1 *)0xa4a117;
  ExceptionList = &pvStack_1c;
  FUN_00408ed0();
  local_14 = 0;
  if (((local_22c & 0x10) != 0) && (uStack_224._3_1_ != '\0')) {
    local_1ec = 0xf;
    local_1f0 = 0;
    local_200 = local_200 & 0xffffff00;
    puStack_248 = &local_200;
    puStack_24c = (uint *)local_118;
    local_14._0_1_ = 1;
    local_14._1_3_ = 0;
    puStack_250 = (undefined1 *)0xa4a164;
    FUN_009f4bc0();
    local_14._0_1_ = 2;
    local_d0 = (short)param_6 + (short)*puVar2 * -3;
    ppppuStack_244 = (undefined4 ****)0x0;
    puStack_248 = (uint *)&DAT_00ded94d;
    local_ce = 2000;
    puStack_24c = (uint *)0xa4a19e;
    FUN_00409350();
    local_218 = (undefined4 ****)0x0;
    local_e0 = 0;
    ppppuStack_244 = (undefined4 ****)param_4;
    local_63 = 1;
    puStack_248 = (uint *)0xa4a1cc;
    (**(code **)(local_118[0] + 0x54))();
    puStack_248 = &uStack_1bc;
    puStack_24c = (uint *)0xa4a1e0;
    puStack_250 = (undefined1 *)FUN_009f6090();
    puStack_248 = (uint *)0xffffffff;
    puStack_24c = (uint *)0x0;
    puStack_18._0_1_ = 3;
    ppppuStack_254 = (undefined4 *****)0xa4a1f6;
    FUN_00408ed0();
    if (0xf < uStack_1a8) {
      puStack_248 = (uint *)uStack_1bc;
                    /* WARNING: Subroutine does not return */
      puStack_24c = (uint *)&UNK_00a4a20d;
      FUN_00aae91b();
    }
    puStack_18 = (undefined1 *)CONCAT31(puStack_18._1_3_,1);
    puStack_248 = (uint *)0xa4a224;
    FUN_009f4d20();
    local_14 = (uint)local_14._1_3_ << 8;
    if (0xf < local_1ec) {
      ppppuStack_244 = (undefined4 ****)local_200;
                    /* WARNING: Subroutine does not return */
      puStack_248 = (uint *)&UNK_00a4a23d;
      FUN_00aae91b();
    }
  }
  puVar9 = param_3;
  local_198 = (undefined4 ***)*param_3;
  local_210 = *puVar2;
  local_194 = param_3[1];
  local_208 = param_6 - local_210;
  local_20c = puVar2[1];
  local_204 = param_7 - local_20c;
  if (param_4[4] == 0) {
LAB_00a4a330:
    puVar9 = param_3;
    if (param_10 == '\0') goto LAB_00a4a336;
    *param_3 = local_208;
    param_3[1] = local_204;
    local_208 = local_208 - *puVar2;
    local_204 = local_204 - puVar2[1];
  }
  else {
    if (local_1c0 < 0x10) {
      local_218 = &local_1d4;
    }
    else {
      local_218 = local_1d4;
    }
    piStack_25c = *(int **)(in_ECX + 0x30);
    ppppuStack_244 = (undefined4 ****)0xff000000;
    puStack_248 = (uint *)(local_22c | 0x400);
    puStack_24c = &local_200;
    puStack_250 = (undefined1 *)local_1c4;
    ppppuStack_254 = local_218;
    puStack_258 = (undefined1 *)0x0;
    piStack_260 = (int *)0xa4a2d9;
    local_200 = local_210;
    uStack_1fc = local_20c;
    uStack_1f8 = local_208;
    uStack_1f4 = local_204;
    (**(code **)(*piStack_25c + 0x38))();
    local_204 = uStack_1f4;
    local_208 = uStack_1f8;
    if (param_10 != '\0') {
      uVar8 = puVar2[1];
      local_208 = param_6 - *puVar2;
      local_204 = param_7 - uVar8;
      if ((int)local_204 < (int)uStack_1f4) {
        local_204 = uVar8 + uStack_1f4;
      }
      if ((int)uStack_1fc < (int)local_20c) {
        local_20c = uStack_1fc - uVar8;
      }
      if ((int)local_20c < 0) {
        local_204 = local_204 + (uVar8 - local_20c);
        local_20c = uVar8;
      }
      goto LAB_00a4a330;
    }
LAB_00a4a336:
    local_208 = local_208 + *puVar2 * 2;
    local_204 = local_204 + puVar2[1] * 2;
    *puVar9 = local_208;
    puVar9[1] = local_204;
    local_20c = puVar2[1];
    local_210 = *puVar2;
  }
  piVar10 = (int *)0x1;
  ppppuStack_228 = (undefined4 *****)0x0;
  piStack_220 = (int *)0x0;
  uStack_21c = 0;
  uVar8 = 1;
  uVar5 = uVar8;
  if (1 < param_3[1]) {
    do {
      uVar8 = 0;
      if (uVar5 == 0) break;
      uVar8 = uVar5 * 2;
      uVar5 = uVar8;
    } while (uVar8 < param_3[1]);
  }
  piVar11 = piVar10;
  if (1 < *param_3) {
    do {
      piVar11 = (int *)0x0;
      if (piVar10 == (int *)0x0) break;
      piVar10 = (int *)((int)piVar10 * 2);
      piVar11 = piVar10;
    } while (piVar10 < (int *)*param_3);
  }
  *param_2 = (uint)piVar11;
  param_2[1] = uVar8;
  local_218 = (undefined4 ****)piVar11;
  uStack_214 = uVar8;
  if (param_5 != (int *)0x0) {
    if (param_12 == '\0') {
      ppppuStack_244 = (undefined4 ****)auStack_138;
      puStack_248 = (uint *)0x0;
      puStack_24c = (uint *)param_5;
      puStack_250 = (undefined1 *)0xa4a6a5;
      (**(code **)(*param_5 + 0x44))();
      piVar10 = piVar11;
      if (param_1 != (int *)0x0) {
        ppppuStack_244 = (undefined4 ****)&uStack_1b8;
        puStack_248 = (uint *)0x0;
        puStack_24c = (uint *)param_1;
        puStack_250 = (undefined1 *)0xa4a6be;
        (**(code **)(*param_1 + 0x44))();
        if ((piVar11 == piStack_1a0) && (uVar8 == uStack_19c)) {
          if (param_1 != (int *)0x0) goto LAB_00a4a706;
        }
        else {
          ppppuStack_244 = (undefined4 ****)param_1;
          puStack_248 = (uint *)0xa4a6db;
          (**(code **)(*param_1 + 8))();
          param_1 = (int *)0x0;
        }
      }
    }
    else {
      uVar5 = 1;
      uVar6 = uVar5;
      if (1 < *param_3 * param_11) {
        do {
          uVar5 = 0;
          if (uVar6 == 0) break;
          uVar5 = uVar6 * 2;
          uVar6 = uVar5;
        } while (uVar5 < *param_3 * param_11);
      }
      *param_2 = uVar5;
      if (param_1 != (int *)0x0) {
        ppppuStack_244 = (undefined4 ****)&uStack_1b8;
        puStack_248 = (uint *)0x0;
        puStack_24c = (uint *)param_1;
        puStack_250 = (undefined1 *)0xa4a640;
        (**(code **)(*param_1 + 0x44))();
        if ((piStack_1a0 == (int *)*param_2) && (uStack_19c == param_2[1])) {
          if (param_1 != (int *)0x0) goto LAB_00a4a706;
        }
        else {
          ppppuStack_244 = (undefined4 ****)param_1;
          puStack_248 = (uint *)0xa4a667;
          (**(code **)(*param_1 + 8))();
          param_1 = (int *)0x0;
        }
      }
      piVar10 = (int *)*param_2;
    }
    piStack_25c = piVar10;
    ppppuStack_244 = (undefined4 ****)&param_1;
    puStack_248 = (uint *)0x0;
    puStack_24c = (uint *)0x15;
    puStack_250 = (undefined1 *)0x1;
    ppppuStack_254 = (undefined4 *****)0x1;
    piStack_260 = *(int **)(in_ECX + 0x28);
    uStack_264 = 0xa4a703;
    puStack_258 = (undefined1 *)uVar8;
    D3DXCreateTexture();
LAB_00a4a706:
    ppppuStack_244 = &ppppuStack_228;
    puStack_248 = (uint *)0x0;
    puStack_250 = (undefined1 *)0xa4a715;
    puStack_24c = (uint *)param_1;
    (**(code **)(*param_1 + 0x48))();
    puStack_250 = auStack_144;
    puStack_258 = (undefined1 *)0xa4a729;
    (**(code **)(*piStack_234 + 0x30))();
    piStack_260 = *(int **)(in_ECX + 0x28);
    puStack_258 = auStack_230;
    piStack_25c = (int *)0x0;
    uStack_264 = 0xa4a73e;
    (**(code **)(*piStack_260 + 0x98))();
    piStack_268 = *(int **)(in_ECX + 0x28);
    uStack_264 = 0;
    puStack_26c = (undefined1 *)0xa4a74e;
    (**(code **)(*piStack_268 + 0x9c))();
    piStack_274 = *(int **)(in_ECX + 0x28);
    puStack_26c = puStack_250;
    piStack_270 = (int *)0x0;
    piStack_278 = (int *)0xa4a763;
    (**(code **)(*piStack_274 + 0x94))();
    piStack_278 = *(int **)(in_ECX + 0x28);
    piStack_27c = (int *)0xa4a771;
    (**(code **)(*piStack_278 + 0xa4))();
    piStack_294 = *(int **)(in_ECX + 0x28);
    piStack_27c = (int *)0x0;
    pppuStack_280 = DAT_00f092fc;
    piStack_284 = (int *)0x0;
    uStack_288 = 1;
    piStack_28c = (int *)0x0;
    piStack_290 = (int *)0x0;
    ppppuStack_298 = (undefined4 ****)0xa4a797;
    (**(code **)(*piStack_294 + 0xac))();
    piStack_2a0 = *(int **)(in_ECX + 0x28);
    ppppuStack_298 = &local_1d4;
    uStack_19c = 0;
    piStack_1a0 = (int *)0x0;
    uStack_1a4 = 0;
    uStack_1a8 = 0;
    pvStack_1b0 = (void *)0x0;
    uStack_1b4 = 0;
    uStack_1b8 = 0;
    uStack_1bc = 0;
    local_1c4 = 0;
    uStack_1c8 = 0;
    uStack_1cc = 0;
    uStack_1d0 = 0;
    local_198 = DAT_00f092fc;
    pppuStack_1ac = DAT_00f092fc;
    local_1c0 = DAT_00f092fc;
    local_1d4 = DAT_00f092fc;
    pppuStack_29c = (undefined4 ***)0x100;
    piStack_2a4 = (int *)0xa4a84d;
    (**(code **)(*piStack_2a0 + 0xb0))();
    piStack_2ac = *(int **)(in_ECX + 0x28);
    piStack_2a4 = (int *)auStack_1e0;
    ppppuStack_2a8 = (undefined4 ****)0x2;
    pppuStack_2b0 = (undefined4 ***)0xa4a865;
    (**(code **)(*piStack_2ac + 0xb0))();
    pppuStack_2b0 = DAT_00f092fc;
    uStack_2b4 = 0;
    piStack_2b8 = (int *)(float)(int)uVar8;
    piStack_2bc = (int *)(float)(int)piVar11;
    puStack_2c0 = auStack_cc;
    piStack_2c4 = (int *)0xa4a8a6;
    D3DXMatrixOrthoLH();
    piStack_2b8 = *(int **)(in_ECX + 0x28);
    pppuStack_2b0 = (undefined4 ***)auStack_cc;
    uStack_2b4 = 3;
    piStack_2bc = (int *)0xa4a8be;
    (**(code **)(*piStack_2b8 + 0xb0))();
    piStack_2c4 = *(int **)(in_ECX + 0x28);
    piStack_2bc = param_5;
    puStack_2c0 = (undefined1 *)0x0;
    uStack_2c8 = 0xa4a8d2;
    (**(code **)(*piStack_2c4 + 0x104))();
    piStack_2d0 = *(int **)(in_ECX + 0x28);
    uStack_2c8 = 1;
    uStack_2cc = 0x1b;
    uStack_2d4 = 0xa4a8e4;
    (**(code **)(*piStack_2d0 + 0xe4))();
    piStack_2dc = *(int **)(in_ECX + 0x28);
    uStack_2d4 = 2;
    uStack_2d8 = 0x13;
    uStack_2e0 = 0xa4a8f6;
    (**(code **)(*piStack_2dc + 0xe4))();
    piStack_2e8 = *(int **)(in_ECX + 0x28);
    uStack_2e0 = 1;
    uStack_2e4 = 0x14;
    uStack_2ec = 0xa4a908;
    (**(code **)(*piStack_2e8 + 0xe4))();
    piStack_2f4 = *(int **)(in_ECX + 0x28);
    uStack_2ec = 1;
    uStack_2f0 = 0x16;
    uStack_2f8 = 0xa4a91a;
    (**(code **)(*piStack_2f4 + 0xe4))();
    piStack_304 = *(int **)(in_ECX + 0x28);
    uStack_2f8 = 2;
    uStack_2fc = 2;
    uStack_300 = 0;
    uStack_308 = 0xa4a92e;
    (**(code **)(*piStack_304 + 0x10c))();
    uStack_308 = 2;
    uStack_30c = 1;
    (**(code **)(**(int **)(in_ECX + 0x28) + 0x10c))(*(int **)(in_ECX + 0x28),0);
    piVar10 = *(int **)(in_ECX + 0x28);
    uVar17 = 5;
    iVar4 = 0;
    (**(code **)(*piVar10 + 0x10c))(piVar10,0,5,2);
    ppppuVar16 = (undefined4 ****)0x2;
    (**(code **)(**(int **)(in_ECX + 0x28) + 0x10c))(*(int **)(in_ECX + 0x28),0,4,2);
    if (param_12 == '\0') {
      FUN_00a4b0d0();
    }
    else {
      FUN_00a4bc40(param_8,&uStack_30c);
    }
    uVar14 = 0;
    (**(code **)(**(int **)(in_ECX + 0x28) + 0x104))(*(int **)(in_ECX + 0x28),0,0);
    piVar11 = *(int **)(in_ECX + 0x28);
    uVar13 = 5;
    (**(code **)(*piVar11 + 0xe4))(piVar11,0x13,5);
    uVar8 = 0x14;
    (**(code **)(**(int **)(in_ECX + 0x28) + 0xe4))(*(int **)(in_ECX + 0x28),0x14,6);
    iVar1 = param_6;
    ppppuStack_2a8 = ppppuVar16;
    piStack_2a4 = piVar10;
    piStack_2a0 = (int *)iVar4;
    pppuStack_29c = (undefined4 ***)uVar17;
    for (iVar15 = param_11; iVar15 != 0; iVar15 = iVar15 + -1) {
      puVar7 = param_4;
      if (0xf < (uint)param_4[5]) {
        puVar7 = (undefined4 *)*param_4;
      }
      (**(code **)(**(int **)(in_ECX + 0x30) + 0x38))
                (*(int **)(in_ECX + 0x30),0,puVar7,param_4[4],&ppppuStack_2a8,uVar13,
                 *(undefined4 *)(in_ECX + 0x70));
      ppppuStack_2a8 = (undefined4 ****)((int)ppppuStack_2a8 + iVar1);
      piStack_2a0 = (int *)((int)piStack_2a0 + iVar1);
    }
    (**(code **)(**(int **)(in_ECX + 0x28) + 0xa8))(*(int **)(in_ECX + 0x28));
    piVar10 = *(int **)(in_ECX + 0x28);
    (**(code **)(*piVar10 + 0x94))(piVar10,0,uVar14);
    (**(code **)(**(int **)(in_ECX + 0x28) + 0x9c))
              (*(int **)(in_ECX + 0x28),*(undefined4 *)(*(int *)(in_ECX + 0x2c) + 0x14));
    (**(code **)(*piVar11 + 8))(piVar11);
    (**(code **)(**(int **)(in_ECX + 0x28) + 0x10c))(*(int **)(in_ECX + 0x28),0,1,4);
    (**(code **)(**(int **)(in_ECX + 0x28) + 0x10c))(*(int **)(in_ECX + 0x28),0,2,2);
    (**(code **)(**(int **)(in_ECX + 0x28) + 0x10c))(*(int **)(in_ECX + 0x28),0,3,1);
    piVar11 = *(int **)(in_ECX + 0x28);
    (**(code **)(*piVar11 + 0x10c))(piVar11,0,4,4);
    piVar12 = (int *)0x5;
    (**(code **)(**(int **)(in_ECX + 0x28) + 0x10c))(*(int **)(in_ECX + 0x28),0,5,2);
    (**(code **)(**(int **)(in_ECX + 0x28) + 0x10c))(*(int **)(in_ECX + 0x28),0,6,1);
    if (piVar12 != (int *)0x0) {
      (**(code **)(*piVar12 + 8))(piVar12);
    }
    if (piVar11 != (int *)0x0) {
      (**(code **)(*piVar11 + 8))(piVar11);
    }
    if (DAT_013f0938 != '\0') {
      DAT_013f0938 = '\0';
      D3DXSaveTextureToFileA("text.tga",2,param_1,0);
    }
    if (uVar8 < 0x10) {
      ExceptionList = pvStack_1b0;
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(piVar10);
  }
  piStack_220 = param_1;
  if (param_1 != (int *)0x0) {
    ppppuStack_244 = (undefined4 ****)&uStack_1b8;
    puStack_248 = (uint *)0x0;
    puStack_24c = (uint *)param_1;
    puStack_250 = (undefined1 *)0xa4a3e0;
    (**(code **)(*param_1 + 0x44))();
    if ((piStack_1a0 == piVar11) && (uStack_19c == uVar8)) {
      if (piStack_220 != (int *)0x0) goto LAB_00a4a42d;
    }
    else {
      ppppuStack_244 = (undefined4 ****)piStack_220;
      puStack_248 = (uint *)0xa4a3fe;
      (**(code **)(*piStack_220 + 8))();
      piStack_220 = (int *)0x0;
    }
  }
  piStack_260 = *(int **)(in_ECX + 0x28);
  ppppuStack_244 = (undefined4 ****)&piStack_220;
  puStack_248 = (uint *)0x0;
  puStack_24c = (uint *)0x15;
  puStack_250 = (undefined1 *)0x1;
  ppppuStack_254 = (undefined4 *****)0x1;
  uStack_264 = 0xa4a429;
  piStack_25c = piVar11;
  puStack_258 = (undefined1 *)uVar8;
  D3DXCreateTexture();
LAB_00a4a42d:
  ppppuStack_244 = &ppppuStack_228;
  puStack_248 = (uint *)0x0;
  puStack_24c = (uint *)piStack_220;
  puStack_250 = (undefined1 *)0xa4a43c;
  (**(code **)(*piStack_220 + 0x48))();
  puStack_250 = auStack_144;
  ppppuStack_254 = (undefined4 ****)piStack_234;
  puStack_258 = (undefined1 *)0xa4a450;
  (**(code **)(*piStack_234 + 0x30))();
  piStack_260 = *(int **)(in_ECX + 0x28);
  puStack_258 = auStack_230;
  piStack_25c = (int *)0x0;
  uStack_264 = 0xa4a465;
  (**(code **)(*piStack_260 + 0x98))();
  piStack_268 = *(int **)(in_ECX + 0x28);
  uStack_264 = 0;
  puStack_26c = (undefined1 *)0xa4a475;
  (**(code **)(*piStack_268 + 0x9c))();
  piStack_274 = *(int **)(in_ECX + 0x28);
  puStack_26c = puStack_250;
  piStack_270 = (int *)0x0;
  piStack_278 = (int *)0xa4a48a;
  (**(code **)(*piStack_274 + 0x94))();
  piStack_278 = *(int **)(in_ECX + 0x28);
  piStack_27c = (int *)0xa4a498;
  iVar4 = (**(code **)(*piStack_278 + 0xa4))();
  if (-1 < iVar4) {
    piStack_294 = *(int **)(in_ECX + 0x28);
    piStack_27c = (int *)0x0;
    pppuStack_280 = DAT_00f092fc;
    piStack_284 = (int *)&DAT_00ffff99;
    uStack_288 = 1;
    piStack_28c = (int *)0x0;
    piStack_290 = (int *)0x0;
    ppppuStack_298 = (undefined4 ****)0xa4a4c9;
    (**(code **)(*piStack_294 + 0xac))();
    ppppuStack_298 = (undefined4 ****)0x0;
    pppuStack_29c = (undefined4 ***)&DAT_00ded94d;
    ppppuStack_244 = (undefined4 *****)0x0;
    ppppuStack_254 = (undefined4 ****)((uint)ppppuStack_254 & 0xffffff00);
    piStack_2a0 = (undefined4 *)0xa4a4ee;
    FUN_00409350();
    uStack_68 = 4;
    ppppuStack_298 = (undefined4 ****)0xa4a503;
    cVar3 = FUN_00416db0();
    uStack_68 = 0;
    if (cVar3 == '\0') {
      ppppuStack_2a8 = ppppuStack_228;
      if (uStack_214 < 0x10) {
        ppppuStack_2a8 = &ppppuStack_228;
      }
      ppppuStack_298 = *(undefined4 *****)(in_ECX + 0x70);
      pppuStack_2b0 = *(undefined4 ****)(in_ECX + 0x30);
      pppuStack_29c = pppuStack_280;
      piStack_2a0 = &uStack_264;
      piStack_2a4 = (int *)local_218;
      piStack_2ac = (int *)0x0;
      uStack_2b4 = 0xa4a561;
      (**(code **)((int)*pppuStack_2b0 + 0x38))();
    }
    ppppuStack_298 = *(undefined4 *****)(in_ECX + 0x28);
    pppuStack_29c = (undefined4 ***)0xa4a56f;
    (**(code **)((int)*ppppuStack_298 + 0xa8))();
  }
  piStack_284 = *(int **)(in_ECX + 0x28);
  piStack_27c = (int *)ppppuStack_254;
  pppuStack_280 = (undefined4 ***)0x0;
  uStack_288 = 0xa4a58b;
  (**(code **)(*piStack_284 + 0x94))();
  piStack_28c = *(int **)(in_ECX + 0x28);
  uStack_288 = *(undefined4 *)(*(int *)(in_ECX + 0x2c) + 0x14);
  piStack_290 = (int *)0xa4a5a0;
  (**(code **)(*piStack_28c + 0x9c))();
  piStack_290 = piStack_268;
  piStack_294 = (int *)0xa4a5ac;
  (**(code **)(*piStack_268 + 8))();
  if (piStack_278 != (int *)0x0) {
    piStack_294 = piStack_278;
    ppppuStack_298 = (undefined4 ****)0xa4a5bc;
    (**(code **)(*piStack_278 + 8))();
  }
  if (local_210 < 0x10) {
    ExceptionList = pvStack_6c;
    return piStack_270;
  }
  piStack_294 = (int *)uStack_224;
                    /* WARNING: Subroutine does not return */
  ppppuStack_298 = (undefined4 ****)&UNK_00a4a5d3;
  FUN_00aae91b();
}

