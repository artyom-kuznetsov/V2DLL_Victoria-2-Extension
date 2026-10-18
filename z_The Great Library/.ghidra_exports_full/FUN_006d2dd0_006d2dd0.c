// FUN_006d2dd0 @ 006d2dd0 body=[[006d2dd0, 006d2ee5] [006d2ee9, 006d2f4c] [006d2f50, 006d3066] [006d306a, 006d309a] [006d309e, 006d30cc] [006d30d0, 006d30ff] [006d3103, 006d3140] [006d3144, 006d3181] [006d3185, 006d31ff] [006d3203, 006d3288] [006d328c, 006d32bb] [006d32bf, 006d336f] [006d3373, 006d339a] [006d339e, 006d3425] [006d3429, 006d5335] [006d5340, 006d6669] [006d6670, 006d717e]]


undefined4 FUN_006d2dd0(undefined4 param_1,int *param_2)

{
  double dVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  int *piVar9;
  int iVar10;
  undefined4 *puVar11;
  uint uVar12;
  undefined4 uVar13;
  int iVar14;
  undefined4 uVar15;
  int iVar16;
  undefined8 *puVar17;
  int *in_ECX;
  uint extraout_ECX;
  uint extraout_ECX_00;
  undefined4 unaff_ESI;
  int *piVar18;
  undefined8 uStack_264;
  undefined8 uStack_25c;
  uint *puStack_254;
  int *piStack_250;
  uint *puStack_24c;
  int *piStack_23c;
  int *piStack_238;
  undefined8 local_234;
  int iStack_230;
  int local_22c;
  int *local_228;
  int *piStack_224;
  uint uStack_220;
  uint uStack_21c;
  uint auStack_218 [2];
  uint local_210;
  uint uStack_20c;
  uint uStack_208;
  uint uStack_204;
  undefined3 local_200;
  char cStack_1fd;
  int local_1fc;
  int iStack_1f8;
  undefined1 auStack_1f4 [24];
  uint uStack_1dc;
  uint auStack_1d8 [3];
  undefined4 uStack_1cc;
  uint uStack_1c8;
  uint uStack_1c4;
  undefined1 *puStack_1bc;
  uint uStack_1b8;
  undefined1 auStack_1b4 [4];
  undefined1 auStack_1b0 [24];
  undefined1 auStack_198 [4];
  undefined1 auStack_194 [24];
  undefined1 auStack_17c [4];
  undefined1 auStack_178 [24];
  uint uStack_160;
  double dStack_15c;
  undefined4 local_150;
  uint uStack_14c;
  uint uStack_140;
  uint uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_130;
  uint uStack_12c;
  uint auStack_128 [3];
  undefined1 auStack_11c [16];
  undefined1 auStack_10c [4];
  undefined1 auStack_108 [8];
  undefined1 auStack_100 [40];
  undefined1 local_d8;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined1 local_bc;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined1 local_a0;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 auStack_74 [2];
  undefined1 auStack_6c [8];
  int iStack_64;
  int iStack_60;
  int iStack_4c;
  int iStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  void *pvStack_20;
  undefined1 uStack_1c;
  uint uStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  puStack_10 = &LAB_00bad9c4;
  pvStack_14 = ExceptionList;
  local_c4 = 0xf;
  local_c8 = 0;
  local_d8 = 0;
  local_a8 = 0xf;
  local_ac = 0;
  local_bc = 0;
  local_8c = 0xf;
  local_90 = 0;
  local_a0 = 0;
  local_84 = 0;
  local_80 = CONCAT31(local_80._1_3_,1);
  local_c = 0;
  local_150 = *(undefined4 *)(DAT_012588e8 + 0xb5c);
  iVar14 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4);
  puStack_24c = (uint *)0x1f;
  local_1fc = 0xf;
  piStack_250 = (int *)0xe0da48;
  local_200 = 0;
  cStack_1fd = '\0';
  local_210 = local_210 & 0xffffff00;
  puStack_254 = (uint *)0x6d2ea0;
  ExceptionList = &pvStack_14;
  local_22c = iVar14;
  local_228 = in_ECX;
  FUN_00409350();
  local_c = CONCAT31(local_c._1_3_,1);
  puStack_24c = &local_210;
  piStack_250 = (int *)0x6d2eba;
  piVar9 = (int *)(**(code **)(*(int *)in_ECX[0x13] + 0x9c))();
  piStack_250 = param_2;
  puStack_254 = (uint *)0x6d2eca;
  cVar8 = (**(code **)(*piVar9 + 0x94))();
  pvStack_14 = (void *)((uint)pvStack_14 & 0xffffff00);
  if (0xf < uStack_204) {
    puStack_254 = (uint *)auStack_218[0];
    uStack_25c = CONCAT44(&UNK_006d2ee6,(int **)uStack_25c);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  uStack_204 = 0xf;
  uStack_208 = 0;
  auStack_218[0] = auStack_218[0] & 0xffffff00;
  if (cVar8 != '\0') {
    puStack_254 = (uint *)0x1f;
    uStack_25c = 0xe0da48006d2f13;
    FUN_00409350();
    pvStack_14 = (void *)CONCAT31(pvStack_14._1_3_,2);
    puStack_254 = auStack_218;
    uStack_25c = CONCAT44(0x6d2f31,(int **)uStack_25c);
    iVar10 = (**(code **)(**(int **)(iStack_230 + 0x4c) + 0x9c))();
    uStack_18 = uStack_18 & 0xffffff00;
    if (0xf < uStack_208) {
      uStack_25c = CONCAT44(uStack_21c,&UNK_006d2f4d);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_208 = 0xf;
    uStack_20c = 0;
    uStack_21c = uStack_21c & 0xffffff00;
    uStack_25c = CONCAT44(0x6d2f6e,(int **)uStack_25c);
    puVar11 = (undefined4 *)(**(code **)(*(int *)(iVar10 + 0x74) + 0x2c))();
    piStack_238 = (int *)0x0;
    piVar9 = (int *)*puVar11;
    while (piVar9 != (int *)0x0) {
      piVar18 = (int *)piVar9[2];
      uStack_25c = CONCAT44(param_2,0x6d2f99);
      cVar8 = (**(code **)(*(int *)(*piVar9 + 0x1c) + 0x58))();
      if (cVar8 != '\0') break;
      piStack_238 = (int *)((int)piStack_238 + 1);
      piVar9 = piVar18;
    }
    if ((int)piStack_238 < *(int *)(iVar14 + 0x4e0)) {
      piVar9 = *(int **)(iVar14 + 0x4d8);
      for (; piStack_238 != (int *)0x0; piStack_238 = (int *)((int)piStack_238 + -1)) {
        piVar9 = (int *)piVar9[2];
      }
      iVar14 = *piVar9;
      uStack_25c = 0x300dfc7b4;
      uStack_208 = 0xf;
      uStack_20c = 0;
      uStack_21c = uStack_21c & 0xffffff00;
      uStack_264 = CONCAT44(0x6d2fe9,(undefined4)uStack_264);
      FUN_00409350();
      uStack_18._0_1_ = 3;
      uStack_25c._4_4_ = &uStack_13c;
      uStack_25c._0_4_ = (int **)0x6d3003;
      uStack_25c._0_4_ = (int **)(**(code **)(**(int **)(iVar14 + 8) + 0x18))();
      uStack_1c = 4;
      uStack_264 = CONCAT44(0x6d301d,(undefined4)uStack_264);
      FUN_00988fa0();
      uStack_25c._0_4_ = (int **)&uStack_220;
      uStack_1c = 5;
      uStack_264 = CONCAT44(0x6d303b,(undefined4)uStack_264);
      uVar12 = FUN_00988f20();
      uStack_25c._0_4_ = (int **)0xffffffff;
      uStack_264 = (ulonglong)uVar12;
      uStack_1c = 6;
      FUN_00408ed0();
      if (0xf < uStack_1c8) {
        uStack_25c = CONCAT44(uStack_25c._4_4_,uStack_1dc);
        uStack_264 = CONCAT44(&UNK_006d3067,(undefined4)uStack_264);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      uStack_1c8 = 0xf;
      uStack_1cc = 0;
      uStack_1dc = uStack_1dc & 0xffffff00;
      if (0xf < uStack_14c) {
        uStack_25c = CONCAT44(uStack_25c._4_4_,uStack_160);
        uStack_264 = CONCAT44(&UNK_006d309b,(undefined4)uStack_264);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      uStack_14c = 0xf;
      local_150 = 0;
      uStack_160 = uStack_160 & 0xffffff00;
      if (0xf < uStack_12c) {
        uStack_25c = CONCAT44(uStack_25c._4_4_,uStack_140);
        uStack_264 = CONCAT44(&UNK_006d30cd,(undefined4)uStack_264);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      uStack_1c = 0;
      uStack_12c = 0xf;
      uStack_130 = 0;
      uStack_140 = uStack_140 & 0xffffff00;
      if (0xf < uStack_20c) {
        uStack_25c = CONCAT44(uStack_25c._4_4_,uStack_220);
        uStack_264 = CONCAT44(&UNK_006d3100,(undefined4)uStack_264);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      uStack_25c = CONCAT44(uStack_25c._4_4_,&uStack_220);
      uStack_264 = CONCAT44(0x6d3112,(undefined4)uStack_264);
      uVar13 = (**(code **)(**(int **)(iVar14 + 8) + 0x1c))();
      uStack_264 = 0xffffffff00000000;
      pvStack_20._0_1_ = 7;
      FUN_00448aa0(uVar13);
      pvStack_20 = (void *)((uint)pvStack_20._1_3_ << 8);
      if (0xf < local_210) {
        uStack_264 = CONCAT44(piStack_224,&UNK_006d3141);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      uStack_264 = CONCAT44(&piStack_224,0x6d3153);
      uVar13 = (**(code **)(**(int **)(iVar14 + 8) + 0x2c))();
      uStack_25c = 0xffffffff00000000;
      uStack_18._0_1_ = 8;
      uStack_264 = CONCAT44(uVar13,0x6d316b);
      FUN_00448aa0();
      uStack_18 = (uint)uStack_18._1_3_ << 8;
      if (0xf < uStack_208) {
        uStack_25c = CONCAT44(uStack_21c,&UNK_006d3182);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      uStack_208 = 0xf;
      uStack_20c = 0;
      uVar12 = uStack_21c >> 8;
      uStack_21c = uVar12 << 8;
      if (*(int *)(DAT_012588e8 + 0xb0c) < *(int *)(iVar14 + 0xc)) {
        uStack_25c = 0xa00dfe8ec;
        uStack_208 = 0xf;
        uStack_20c = 0;
        uStack_21c = uVar12 << 8;
        uStack_264 = CONCAT44(0x6d31cd,(undefined4)uStack_264);
        FUN_00409350();
        uStack_25c = CONCAT44(&uStack_21c,&dStack_15c);
        uStack_18._0_1_ = 9;
        uStack_264 = CONCAT44(0x6d31e7,(undefined4)uStack_264);
        FUN_009a8ee0();
        uStack_18._0_1_ = 0xb;
        if (0xf < uStack_208) {
          uStack_25c = CONCAT44(uStack_21c,&UNK_006d3200);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        uStack_25c = 0x400dfa9f8;
        uStack_208 = 0xf;
        uStack_20c = 0;
        uStack_21c = uStack_21c & 0xffffff00;
        uStack_1c4 = 0xf;
        uStack_1c8 = 0;
        auStack_1d8[0] = auStack_1d8[0] & 0xffffff00;
        uStack_264 = CONCAT44(0x6d323c,(undefined4)uStack_264);
        FUN_00409350();
        uStack_25c = CONCAT44(&uStack_13c,iVar14 + 0xc);
        uStack_18._0_1_ = 0xc;
        uStack_264 = CONCAT44(0x6d3252,(undefined4)uStack_264);
        uVar13 = FUN_0043b700();
        uStack_18._0_1_ = 0xd;
        uStack_25c = CONCAT44(uVar13,0x6d326e);
        FUN_009a9980();
        if (0xf < auStack_128[0]) {
          uStack_25c = CONCAT44(uStack_13c,&UNK_006d3289);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        uStack_18._0_1_ = 0xb;
        auStack_128[0] = 0xf;
        uStack_12c = 0;
        uStack_13c = uStack_13c & 0xffffff00;
        if (0xf < uStack_1c4) {
          uStack_25c = CONCAT44(auStack_1d8[0],&UNK_006d32bc);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        uStack_25c = CONCAT44(0x6d32c4,(int **)uStack_25c);
        iVar14 = FUN_00475500();
        uStack_264 = *(undefined8 *)(iVar14 + 0x6c);
        uStack_25c = *(undefined8 *)(iVar14 + 0x74);
        uVar13 = FUN_009a9880();
        uStack_18._0_1_ = 0xe;
        uStack_25c = 0x100dee2cc;
        uStack_1c4 = 0xf;
        uStack_1c8 = 0;
        auStack_1d8[0] = auStack_1d8[0] & 0xffffff00;
        uStack_264 = CONCAT44(0x6d3321,(undefined4)uStack_264);
        FUN_00409350();
        uStack_18._0_1_ = 0xf;
        uStack_25c = CONCAT44(uVar13,0x6d333d);
        uVar13 = FUN_00988f20();
        uStack_25c = 0xffffffff00000000;
        uStack_18._0_1_ = 0x10;
        uStack_264 = CONCAT44(uVar13,0x6d3355);
        FUN_00448aa0();
        if (0xf < auStack_128[0]) {
          uStack_25c = CONCAT44(uStack_13c,&UNK_006d3370);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        auStack_128[0] = 0xf;
        uStack_12c = 0;
        uStack_13c = uStack_13c & 0xffffff00;
        if (0xf < uStack_1c4) {
          uStack_25c = CONCAT44(auStack_1d8[0],&UNK_006d339b);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        uStack_1c4 = 0xf;
        uStack_1c8 = 0;
        auStack_1d8[0] = auStack_1d8[0] & 0xffffff00;
        uStack_25c = CONCAT44(0x6d33bc,(int **)uStack_25c);
        FUN_00408ad0();
        uStack_18 = (uint)uStack_18._1_3_ << 8;
        uStack_25c = CONCAT44(&dStack_15c,0x6d33d0);
        FUN_009a9740();
      }
    }
    goto LAB_006d714a;
  }
  puStack_254 = (uint *)0xe;
  uStack_25c = 0xe0da68006d33e1;
  FUN_00409350();
  pvStack_14 = (void *)CONCAT31(pvStack_14._1_3_,0x11);
  puStack_254 = auStack_218;
  uStack_25c = CONCAT44(0x6d33fc,(int **)uStack_25c);
  iVar10 = (**(code **)(**(int **)(iStack_230 + 0x4c) + 0x6c))();
  uStack_25c._0_4_ = (int **)0x6d340a;
  uStack_25c._4_4_ = (uint *)param_2;
  (**(code **)(*(int *)(iVar10 + 0x18) + 0x94))();
  uStack_1c = 0;
  if (0xf < uStack_20c) {
    uStack_25c = CONCAT44(uStack_25c._4_4_,uStack_220);
    uStack_264 = CONCAT44(&UNK_006d3426,(undefined4)uStack_264);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  uStack_25c = CONCAT44(uStack_25c._4_4_,0x6d3432);
  (**(code **)(*param_2 + 0x44))();
  if ((char)((uint)unaff_ESI >> 0x18) != '\0') {
    uStack_25c = CONCAT44(0x6d3446,(int **)uStack_25c);
    cVar8 = FUN_0040b360();
    if (cVar8 == '\0') goto LAB_006d714a;
    uStack_25c = CONCAT44(0x6d345c,(int **)uStack_25c);
    FUN_009885d0();
    uStack_18._0_1_ = 0x12;
    uStack_25c = CONCAT44(0x6d3472,(int **)uStack_25c);
    FUN_009885d0();
    uStack_18._0_1_ = 0x13;
    uStack_25c._0_4_ = (int **)0x6d348b;
    uStack_25c._4_4_ = &uStack_21c;
    piVar9 = (int *)(**(code **)(*piRam0000004c + 0x6c))();
    uStack_25c = CONCAT44(uStack_25c._4_4_,&uStack_1dc);
    uStack_264 = CONCAT44(0x6d3499,(undefined4)uStack_264);
    piVar9 = (int *)(**(code **)(*piVar9 + 0x7c))();
    uStack_264 = CONCAT44(0x6d34a2,(undefined4)uStack_264);
    puVar11 = (undefined4 *)(**(code **)(*piVar9 + 0x2c))();
    piVar9 = (int *)*puVar11;
    uStack_25c = CONCAT44(0x6d34ad,(int **)uStack_25c);
    FUN_00408ad0();
    uStack_18 = (uint)uStack_18._1_3_ << 8;
    uStack_25c = CONCAT44(0x6d34bd,(int **)uStack_25c);
    FUN_00408ad0();
    do {
      if (piVar9 == (int *)0x0) goto LAB_006d714a;
      iVar10 = *piVar9;
      piVar9 = (int *)piVar9[2];
      uStack_25c = CONCAT44(param_2,0x6d34d9);
      cVar8 = (**(code **)(*(int *)(iVar10 + 0x1c) + 0x58))();
    } while (cVar8 == '\0');
    iVar10 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x41c);
    iVar16 = iVar10 >> 0x1f;
    if (iVar10 / 1000 + iVar16 != iVar16) {
      uStack_25c = CONCAT44(0x6d3519,(int **)uStack_25c);
      FUN_009885d0();
      uStack_18._0_1_ = 0x14;
      piStack_224 = (int *)&uStack_25c;
      uStack_25c = CONCAT44(1,*(undefined4 *)(*(int *)(DAT_012586dc + 0x30) + 0x41c));
      uStack_264 = CONCAT44(auStack_11c,0x6d354c);
      uVar13 = FUN_009c9360();
      uStack_25c = CONCAT44(&uStack_21c,&dStack_15c);
      uStack_18._0_1_ = 0x15;
      uStack_264 = CONCAT44(0x6d356b,(undefined4)uStack_264);
      FUN_009a8ee0();
      uStack_18._0_1_ = 0x16;
      uStack_25c = CONCAT44(0x6d357c,(int **)uStack_25c);
      iVar10 = FUN_00475500();
      uStack_264 = *(undefined8 *)(iVar10 + 0x6c);
      uStack_25c = *(undefined8 *)(iVar10 + 0x74);
      uVar15 = FUN_009a9880();
      uStack_18._0_1_ = 0x17;
      uStack_25c = CONCAT44(0x6d35be,(int **)uStack_25c);
      FUN_009885d0();
      uStack_18._0_1_ = 0x18;
      uStack_25c = CONCAT44(uVar15,0x6d35d9);
      FUN_00988f20();
      uStack_18._0_1_ = 0x19;
      uStack_25c = CONCAT44(uVar13,0x6d35f4);
      uVar13 = FUN_00988f20();
      uStack_25c = 0xffffffff00000000;
      uStack_18._0_1_ = 0x1a;
      uStack_264 = CONCAT44(uVar13,0x6d360c);
      FUN_00448aa0();
      uStack_25c = CONCAT44(0x6d3613,(int **)uStack_25c);
      FUN_00408ad0();
      uStack_25c = CONCAT44(0x6d361f,(int **)uStack_25c);
      FUN_00408ad0();
      uStack_25c = CONCAT44(0x6d3628,(int **)uStack_25c);
      FUN_00408ad0();
      uStack_25c = CONCAT44(0x6d3634,(int **)uStack_25c);
      FUN_00408ad0();
      uStack_18._0_1_ = 0x15;
      uStack_25c = CONCAT44(&dStack_15c,0x6d3649);
      FUN_009a9740();
      uStack_25c = CONCAT44(0x6d3655,(int **)uStack_25c);
      FUN_00408ad0();
      uStack_18 = (uint)uStack_18._1_3_ << 8;
      uStack_25c = CONCAT44(0x6d3665,(int **)uStack_25c);
      FUN_00408ad0();
    }
    uStack_25c = CONCAT44(0x6d3673,(int **)uStack_25c);
    FUN_009885d0();
    uStack_18._0_1_ = 0x1b;
    piStack_224 = (int *)&uStack_25c;
    uStack_25c = (ulonglong)*(uint *)(*(int *)(DAT_012586dc + 0x30) + 0x420);
    uStack_264 = CONCAT44(&uStack_13c,0x6d36a5);
    uVar13 = FUN_009c9360();
    uStack_25c = CONCAT44(&uStack_21c,&dStack_15c);
    uStack_18._0_1_ = 0x1c;
    uStack_264 = CONCAT44(0x6d36c4,(undefined4)uStack_264);
    FUN_009a8ee0();
    uStack_18._0_1_ = 0x1d;
    uStack_25c = CONCAT44(0x6d36d5,(int **)uStack_25c);
    iVar10 = FUN_00475500();
    uStack_264 = *(undefined8 *)(iVar10 + 0x6c);
    uStack_25c = *(undefined8 *)(iVar10 + 0x74);
    uVar15 = FUN_009a9880();
    uStack_18._0_1_ = 0x1e;
    uStack_25c = CONCAT44(0x6d371a,(int **)uStack_25c);
    FUN_009885d0();
    uStack_18._0_1_ = 0x1f;
    uStack_25c = CONCAT44(uVar15,0x6d3735);
    FUN_00988f20();
    uStack_18._0_1_ = 0x20;
    uStack_25c = CONCAT44(uVar13,0x6d3750);
    uVar13 = FUN_00988f20();
    uStack_25c = 0xffffffff00000000;
    uStack_18._0_1_ = 0x21;
    uStack_264 = CONCAT44(uVar13,0x6d3768);
    FUN_00448aa0();
    uStack_25c = CONCAT44(0x6d376f,(int **)uStack_25c);
    FUN_00408ad0();
    uStack_25c = CONCAT44(0x6d377b,(int **)uStack_25c);
    FUN_00408ad0();
    uStack_25c = CONCAT44(0x6d3787,(int **)uStack_25c);
    FUN_00408ad0();
    uStack_25c = CONCAT44(0x6d3790,(int **)uStack_25c);
    FUN_00408ad0();
    uStack_18._0_1_ = 0x1c;
    uStack_25c = CONCAT44(&dStack_15c,0x6d37a5);
    FUN_009a9740();
    uStack_25c = CONCAT44(0x6d37b1,(int **)uStack_25c);
    FUN_00408ad0();
    uStack_18 = (uint)uStack_18._1_3_ << 8;
    uStack_25c = CONCAT44(0x6d37c1,(int **)uStack_25c);
    FUN_00408ad0();
    if (*(char *)(iVar14 + 0x67c) == '\0') goto LAB_006d714a;
    uStack_25c = CONCAT44(0x6d37db,(int **)uStack_25c);
    FUN_009885d0();
    uStack_18._0_1_ = 0x22;
    uStack_25c = CONCAT44(0x6d37f1,(int **)uStack_25c);
    FUN_009885d0();
    uStack_25c = CONCAT44(&uStack_21c,&dStack_15c);
    uStack_18._0_1_ = 0x23;
    uStack_264 = CONCAT44(0x6d3809,(undefined4)uStack_264);
    FUN_009a8ee0();
    uStack_18._0_1_ = 0x24;
    uStack_25c = CONCAT44(0x6d3818,(int **)uStack_25c);
    iVar14 = FUN_00475500();
    uStack_264 = *(undefined8 *)(iVar14 + 0x6c);
    uStack_25c = *(undefined8 *)(iVar14 + 0x74);
    uVar13 = FUN_009a9880();
    uStack_18._0_1_ = 0x25;
    uStack_25c = CONCAT44(uVar13,0x6d3858);
    FUN_00988fa0();
    uStack_18._0_1_ = 0x26;
    uStack_25c = CONCAT44(auStack_1d8,0x6d3876);
    uVar13 = FUN_00988f20();
    uStack_25c = 0xffffffff00000000;
    uStack_18._0_1_ = 0x27;
    uStack_264 = CONCAT44(uVar13,0x6d388e);
    FUN_00448aa0();
    uStack_25c = CONCAT44(0x6d3895,(int **)uStack_25c);
    FUN_00408ad0();
    uStack_25c = CONCAT44(0x6d38a1,(int **)uStack_25c);
    FUN_00408ad0();
    uStack_25c = CONCAT44(0x6d38ad,(int **)uStack_25c);
    FUN_00408ad0();
    uStack_18._0_1_ = 0x23;
    uStack_25c = CONCAT44(&dStack_15c,0x6d38c2);
    FUN_009a9740();
    uStack_25c = CONCAT44(0x6d38cb,(int **)uStack_25c);
    FUN_00408ad0();
    goto LAB_006d713e;
  }
  uStack_25c = CONCAT44(0x6d38de,(int **)uStack_25c);
  cVar8 = FUN_0040b360();
  if (cVar8 == '\0') {
    uStack_25c = CONCAT44(0x6d38ef,(int **)uStack_25c);
    (**(code **)(*param_2 + 0x44))();
    uStack_25c = CONCAT44(0x6d38f9,(int **)uStack_25c);
    cVar8 = FUN_0040b360();
    if (cVar8 != '\0') goto LAB_006d700d;
    uStack_25c = CONCAT44(0x6d390a,(int **)uStack_25c);
    (**(code **)(*param_2 + 0x44))();
    uStack_25c = CONCAT44(0x6d3914,(int **)uStack_25c);
    cVar8 = FUN_0040b360();
    if (cVar8 != '\0') {
LAB_006d6eeb:
      uStack_25c = CONCAT44(0x6d6efc,(int **)uStack_25c);
      FUN_009885d0();
      puStack_1bc = (undefined1 *)&uStack_25c;
      uStack_25c = (ulonglong)extraout_ECX;
      uStack_18._0_1_ = 0x2e;
      uStack_264 = CONCAT44(&uStack_25c,&uStack_25c);
      FUN_00542bc0(iVar14);
      uStack_264 = CONCAT44(auStack_100,0x6d6f2c);
      local_1fc = FUN_009c8c30();
      uStack_25c = CONCAT44(auStack_178,&uStack_21c);
      uStack_18._0_1_ = 0x2f;
      uStack_264 = CONCAT44(0x6d6f48,(undefined4)uStack_264);
      piStack_224 = (int *)FUN_009a8ee0();
      uStack_18._0_1_ = 0x30;
      uStack_25c = CONCAT44(0x6d6f59,(int **)uStack_25c);
      iVar10 = FUN_00475500();
      uStack_264 = *(undefined8 *)(iVar10 + 0x6c);
      uStack_25c = *(undefined8 *)(iVar10 + 0x74);
      FUN_009a9880();
      uStack_18._0_1_ = 0x31;
      uStack_25c = CONCAT44(local_1fc,0x6d6f99);
      uVar13 = FUN_00988f20();
      uStack_25c = 0xffffffff00000000;
      uStack_18._0_1_ = 0x32;
      uStack_264 = CONCAT44(uVar13,0x6d6fb1);
      FUN_00408ed0();
      uStack_25c = CONCAT44(0x6d6fb8,(int **)uStack_25c);
      FUN_00408ad0();
      uStack_25c = CONCAT44(0x6d6fc4,(int **)uStack_25c);
      FUN_00408ad0();
      uStack_18._0_1_ = 0x2f;
      uStack_25c = CONCAT44(&uStack_21c,0x6d6fd6);
      FUN_009a9740();
      uStack_25c = CONCAT44(0x6d6fe2,(int **)uStack_25c);
      FUN_00408ad0();
      uStack_18._0_1_ = 0;
      uStack_25c = CONCAT44(0x6d6ff5,(int **)uStack_25c);
      FUN_00408ad0();
      uStack_25c = CONCAT44(auStack_1f4,iVar14);
      uStack_264 = CONCAT44(0x6d7000,(undefined4)uStack_264);
      uVar13 = FUN_00542d20();
      uStack_18._0_1_ = 0x33;
      goto LAB_006d7131;
    }
    uStack_25c = CONCAT44(0x6d3925,(int **)uStack_25c);
    (**(code **)(*param_2 + 0x44))();
    uStack_25c = CONCAT44(0x6d392f,(int **)uStack_25c);
    cVar8 = FUN_0040b360();
    if (cVar8 != '\0') goto LAB_006d6eeb;
    uStack_25c = CONCAT44(0x6d3940,(int **)uStack_25c);
    (**(code **)(*param_2 + 0x44))();
    uStack_25c = CONCAT44(0x6d394a,(int **)uStack_25c);
    cVar8 = FUN_0040b360();
    if (cVar8 != '\0') {
      uStack_25c = CONCAT44(0x6d395e,(int **)uStack_25c);
      cVar8 = (**(code **)(*param_2 + 0xc0))();
      if (cVar8 == '\0') goto LAB_006d714a;
      uStack_25c = CONCAT44(0x6d3974,(int **)uStack_25c);
      FUN_009885d0();
      uStack_25c = CONCAT44(&uStack_21c,&dStack_15c);
      uStack_18._0_1_ = 0x34;
      uStack_264 = CONCAT44(0x6d398c,(undefined4)uStack_264);
      FUN_009a8ee0();
      uStack_18._0_1_ = 0x35;
      uStack_25c = CONCAT44(0x6d399b,(int **)uStack_25c);
      iVar14 = FUN_00475500();
      uStack_264 = *(undefined8 *)(iVar14 + 0x6c);
      uStack_25c = *(undefined8 *)(iVar14 + 0x74);
      uVar13 = FUN_009a9880();
      uStack_25c = 0xffffffff00000000;
      uStack_18._0_1_ = 0x36;
      uStack_264 = CONCAT44(uVar13,0x6d39d9);
      FUN_00408ed0();
      uStack_25c = CONCAT44(0x6d39e0,(int **)uStack_25c);
      FUN_00408ad0();
      uStack_18._0_1_ = 0x34;
      uStack_25c = CONCAT44(&dStack_15c,0x6d39f5);
      FUN_009a9740();
      goto LAB_006d713e;
    }
    uStack_25c = CONCAT44(0x6d3a03,(int **)uStack_25c);
    (**(code **)(*param_2 + 0x44))();
    uStack_25c = CONCAT44(0x6d3a0d,(int **)uStack_25c);
    cVar8 = FUN_0040b360();
    if (cVar8 != '\0') {
LAB_006d6dd5:
      uVar13 = *(undefined4 *)(*(int *)(iVar14 + 0xbcc) + 0x7c);
      puStack_1bc = (undefined1 *)((int)&uStack_264 + 4);
      if (*(int *)(iVar14 + 0x4cc) == 0) {
        uStack_264 = CONCAT44(uVar13,0x6d6e3d);
        FUN_0043a5b0();
        uStack_264 = CONCAT44(iVar14 + 0xa48,auStack_1f4);
        uVar13 = FUN_0096a4e0(iVar14 + 0x12e8);
        uStack_25c = 0xffffffff00000000;
        uStack_18._0_1_ = 0x38;
        uStack_264 = CONCAT44(uVar13,0x6d6e6d);
        FUN_00448aa0();
        uStack_18._0_1_ = 0;
        uStack_25c = CONCAT44(0x6d6e7d,(int **)uStack_25c);
        FUN_00408ad0();
        puStack_1bc = (undefined1 *)&uStack_25c;
        uStack_25c = CONCAT44(1,*(undefined4 *)(iVar14 + 0xe3c));
        uStack_264 = CONCAT44(auStack_194,0x6d6e9e);
        uVar13 = FUN_00988a50();
        uStack_25c = CONCAT44(uVar13,auStack_1f4);
        uStack_18._0_1_ = 0x39;
        uStack_264 = CONCAT44(0x6d6ebb,(undefined4)uStack_264);
        uVar13 = FUN_0042c180();
        uStack_25c = 0xffffffff00000000;
        uStack_18._0_1_ = 0x3a;
        uStack_264 = CONCAT44(uVar13,0x6d6ed6);
        FUN_00448aa0();
        uStack_25c = CONCAT44(0x6d6edf,(int **)uStack_25c);
        FUN_00408ad0();
      }
      else {
        uStack_264 = CONCAT44(uVar13,0x6d6e03);
        puStack_1bc = (undefined1 *)((int)&uStack_264 + 4);
        FUN_0043a5b0();
        uStack_264 = CONCAT44(iVar14 + 0xa48,auStack_1f4);
        uVar13 = FUN_0096a4e0(iVar14 + 0x12e8);
        uStack_25c = 0xffffffff00000000;
        uStack_18._0_1_ = 0x37;
        uStack_264 = CONCAT44(uVar13,0x6d6e33);
        FUN_00448aa0();
      }
      goto LAB_006d713e;
    }
    uStack_25c = CONCAT44(0x6d3a1e,(int **)uStack_25c);
    (**(code **)(*param_2 + 0x44))();
    uStack_25c = CONCAT44(0x6d3a28,(int **)uStack_25c);
    cVar8 = FUN_0040b360();
    if (cVar8 != '\0') goto LAB_006d6dd5;
    uStack_25c = CONCAT44(0x6d3a39,(int **)uStack_25c);
    (**(code **)(*param_2 + 0x44))();
    uStack_25c = CONCAT44(0x6d3a43,(int **)uStack_25c);
    cVar8 = FUN_0040b360();
    if (cVar8 != '\0') {
      uStack_25c = CONCAT44(iVar14,0x6d3a54);
      uVar13 = FUN_00541bf0();
      uStack_25c = 0xffffffff00000000;
      uStack_18._0_1_ = 0x3b;
      uStack_264 = CONCAT44(uVar13,0x6d3a6c);
      FUN_00408ed0();
      goto LAB_006d713e;
    }
    uStack_25c = CONCAT44(0x6d3a81,(int **)uStack_25c);
    (**(code **)(*param_2 + 0x44))();
    uStack_25c = CONCAT44(0x6d3a8b,(int **)uStack_25c);
    cVar8 = FUN_0040b360();
    if (cVar8 != '\0') {
LAB_006d6d95:
      puStack_1bc = (undefined1 *)&uStack_25c;
      uStack_25c = CONCAT44(1,*(undefined4 *)(*(int *)(iVar14 + 0xa60) + 0x378));
      uStack_264 = CONCAT44(auStack_1f4,0x6d6dbe);
      uVar13 = FUN_009c8ea0();
      uStack_18._0_1_ = 0x3c;
      goto LAB_006d7131;
    }
    uStack_25c = CONCAT44(0x6d3a9c,(int **)uStack_25c);
    (**(code **)(*param_2 + 0x44))();
    uStack_25c = CONCAT44(0x6d3aa6,(int **)uStack_25c);
    cVar8 = FUN_0040b360();
    if (cVar8 != '\0') goto LAB_006d6d95;
    local_228 = param_2 + 5;
    uStack_25c = ZEXT48(local_228);
    uStack_264 = CONCAT44(0x6d3ac1,(undefined4)uStack_264);
    iVar10 = FUN_00989090();
    if (iVar10 != -1) {
      uStack_25c = CONCAT44(0x6d3ad8,(int **)uStack_25c);
      FUN_009885d0();
      uStack_18._0_1_ = 0x3d;
      uStack_25c = CONCAT44(0x6d3aee,(int **)uStack_25c);
      FUN_009885d0();
      uStack_18 = CONCAT31(uStack_18._1_3_,0x3e);
      uStack_25c._0_4_ = (int **)0x6d3b07;
      uStack_25c._4_4_ = &uStack_21c;
      piVar9 = (int *)(**(code **)(*piRam0000004c + 0x6c))();
      uStack_25c = CONCAT44(uStack_25c._4_4_,&uStack_1dc);
      uStack_264 = CONCAT44(0x6d3b15,(undefined4)uStack_264);
      piVar9 = (int *)(**(code **)(*piVar9 + 0x7c))();
      uStack_264 = CONCAT44(0x6d3b20,(undefined4)uStack_264);
      FUN_00408ad0();
      pvStack_20 = (void *)((uint)pvStack_20 & 0xffffff00);
      uStack_264 = CONCAT44(0x6d3b30,(undefined4)uStack_264);
      FUN_00408ad0();
      uStack_264 = CONCAT44(0x6d3b39,(undefined4)uStack_264);
      puVar11 = (undefined4 *)(**(code **)(*piVar9 + 0x2c))();
      for (piVar9 = (int *)*puVar11; piVar9 != (int *)0x0; piVar9 = (int *)piVar9[2]) {
        iVar14 = *piVar9;
        uStack_25c = CONCAT44(param_2,0x6d3b51);
        cVar8 = (**(code **)(*(int *)(iVar14 + 0x1c) + 0x58))();
        if (cVar8 != '\0') {
          uStack_25c = CONCAT44(param_1,iVar14);
          uStack_264 = CONCAT44(0x6d3c0e,(undefined4)uStack_264);
          FUN_006cf8e0();
          goto LAB_006d715a;
        }
      }
      uStack_25c = CONCAT44(0x6d3b6e,(int **)uStack_25c);
      FUN_009885d0();
      uStack_18._0_1_ = 0x3f;
      uStack_25c = CONCAT44(0x6d3b84,(int **)uStack_25c);
      FUN_009885d0();
      uStack_18 = CONCAT31(uStack_18._1_3_,0x40);
      uStack_25c._0_4_ = (int **)0x6d3b9d;
      uStack_25c._4_4_ = &uStack_21c;
      piVar9 = (int *)(**(code **)(*piRam0000004c + 0x6c))();
      uStack_25c = CONCAT44(uStack_25c._4_4_,&uStack_1dc);
      uStack_264 = CONCAT44(0x6d3bab,(undefined4)uStack_264);
      piVar9 = (int *)(**(code **)(*piVar9 + 0x7c))();
      uStack_264 = CONCAT44(0x6d3bb6,(undefined4)uStack_264);
      FUN_00408ad0();
      pvStack_20 = (void *)((uint)pvStack_20 & 0xffffff00);
      uStack_264 = CONCAT44(0x6d3bc6,(undefined4)uStack_264);
      FUN_00408ad0();
      uStack_264 = CONCAT44(0x6d3bcf,(undefined4)uStack_264);
      puVar11 = (undefined4 *)(**(code **)(*piVar9 + 0x2c))();
      for (piVar9 = (int *)*puVar11; piVar9 != (int *)0x0; piVar9 = (int *)piVar9[2]) {
        iVar14 = *piVar9;
        uStack_25c = CONCAT44(param_2,0x6d3bf1);
        cVar8 = (**(code **)(*(int *)(iVar14 + 0x1c) + 0x58))();
        if (cVar8 != '\0') {
          uStack_25c = CONCAT44(param_1,iVar14);
          uStack_264 = CONCAT44(0x6d3c20,(undefined4)uStack_264);
          FUN_006d0b60();
          goto LAB_006d715a;
        }
      }
      goto LAB_006d714a;
    }
    uStack_25c = ZEXT48(local_228);
    uStack_264 = CONCAT44(0x6d3c35,(undefined4)uStack_264);
    iVar10 = FUN_00989090();
    if (iVar10 != -1) {
      uStack_25c = CONCAT44(0x6d3c56,(int **)uStack_25c);
      FUN_009885d0();
      uStack_18._0_1_ = 0x41;
      uStack_25c = CONCAT44(0x6d3c63,(int **)uStack_25c);
      FUN_00875040();
      uStack_25c = CONCAT44(&uStack_21c,0x6d3c6b);
      piStack_238 = (int *)FUN_005c2ad0();
      if (piStack_238 == (int *)0x0) {
        uStack_25c = CONCAT44(0x6d3c78,(int **)uStack_25c);
        FUN_00875040();
        uStack_25c = CONCAT44(&uStack_21c,0x6d3c83);
        piStack_238 = (int *)FUN_005c2ad0();
      }
      iVar14 = (*(int *)(DAT_012588e8 + 0xb0c) + -43800000) / 0x18;
      iVar10 = 0;
      for (iVar14 = (iVar14 - (int)((float)(int)((double)iVar14 / 365.0) * 365.0)) - DAT_00f1027c;
          -1 < iVar14; iVar14 = iVar14 - (&DAT_00f1027c)[iVar10]) {
        iVar10 = iVar10 + 1;
      }
      uStack_25c = CONCAT44(0x6d3cf8,(int **)uStack_25c);
      iVar14 = FUN_00424a50();
      uStack_25c = CONCAT44(iVar14 + iVar10,0x6d3d07);
      FUN_008a8650();
      if (iStack_4c != 0) {
        iStack_2c = iStack_4c;
        iStack_28 = iStack_4c;
      }
      iStack_64 = *(int *)(DAT_012588e8 + 0xb5c);
      iStack_60 = *(int *)(DAT_012588e8 + 0xb60);
      uStack_25c = CONCAT44(0x6d3d4b,(int **)uStack_25c);
      (**(code **)(*param_2 + 0x44))();
      uStack_25c = CONCAT44(0x6d3d55,(int **)uStack_25c);
      cVar8 = FUN_0040b360();
      if (cVar8 == '\0') {
        uStack_25c = CONCAT44(0x6d3d89,(int **)uStack_25c);
        (**(code **)(*param_2 + 0x44))();
        uStack_25c = CONCAT44(0x6d3d93,(int **)uStack_25c);
        cVar8 = FUN_0040b360();
        if (cVar8 == '\0') {
          uStack_25c = CONCAT44(0x6d3dc6,(int **)uStack_25c);
          (**(code **)(*param_2 + 0x44))();
          uStack_25c = CONCAT44(0x6d3dd0,(int **)uStack_25c);
          cVar8 = FUN_0040b360();
          if (cVar8 == '\0') {
            uStack_25c = CONCAT44(0x6d3e04,(int **)uStack_25c);
            (**(code **)(*param_2 + 0x44))();
            uStack_25c = CONCAT44(0x6d3e0e,(int **)uStack_25c);
            cVar8 = FUN_0040b360();
            if (cVar8 == '\0') {
              uStack_25c = CONCAT44(0x6d3e8e,(int **)uStack_25c);
              (**(code **)(*param_2 + 0x44))();
              uStack_25c = CONCAT44(0x6d3e98,(int **)uStack_25c);
              cVar8 = FUN_0040b360();
              if (cVar8 != '\0') {
                dStack_15c = (double)CONCAT44(dStack_15c._4_4_,*(undefined4 *)(DAT_012588e8 + 0xb5c)
                                             );
                uStack_25c = CONCAT44(0x6d3ecd,(int **)uStack_25c);
                cVar8 = FUN_0053a6a0();
                if (cVar8 == '\0') {
                  uStack_25c = CONCAT44(auStack_11c,0x6d3f02);
                  uVar13 = FUN_00475d50();
                  uStack_18._0_1_ = 0x48;
                }
                else {
                  uStack_25c = CONCAT44(auStack_11c,0x6d3ee3);
                  uVar13 = FUN_00475d50();
                  uStack_18._0_1_ = 0x47;
                }
                goto LAB_006d3f0d;
              }
            }
            else {
              uStack_25c = 0x100000000;
              uStack_264 = ZEXT48(auStack_6c);
              (**(code **)(*(int *)((int)piStack_238 + 0x40) + 0x2c))(auStack_178);
              uStack_18._0_1_ = 0x45;
              uStack_25c = CONCAT44(auStack_11c,0x6d3e4c);
              uVar13 = FUN_00989330();
              uStack_25c = 0xffffffff00000000;
              uStack_18._0_1_ = 0x46;
              uStack_264 = CONCAT44(uVar13,0x6d3e64);
              FUN_00408ed0();
              uStack_25c = CONCAT44(0x6d3e70,(int **)uStack_25c);
              FUN_00408ad0();
              uStack_25c = CONCAT44(0x6d3e7c,(int **)uStack_25c);
              FUN_00408ad0();
            }
            goto LAB_006d713e;
          }
          uStack_25c = CONCAT44(auStack_6c,auStack_11c);
          uStack_264 = CONCAT44(piStack_238,0x6d3dee);
          uVar13 = FUN_00874aa0();
          uStack_18._0_1_ = 0x44;
        }
        else {
          uStack_25c = CONCAT44(auStack_6c,piStack_238);
          uStack_264 = CONCAT44(0x6d3db0,(undefined4)uStack_264);
          uVar13 = FUN_00874bc0();
          uStack_18._0_1_ = 0x43;
        }
      }
      else {
        uStack_25c = CONCAT44(auStack_6c,auStack_11c);
        uStack_264 = CONCAT44(piStack_238,0x6d3d73);
        uVar13 = FUN_00874aa0();
        uStack_18._0_1_ = 0x42;
      }
LAB_006d3f0d:
      uStack_25c = 0xffffffff00000000;
      uStack_264 = CONCAT44(uVar13,0x6d3f1d);
      FUN_00408ed0();
      uStack_25c = CONCAT44(0x6d3f29,(int **)uStack_25c);
      FUN_00408ad0();
      goto LAB_006d713e;
    }
    uStack_25c = ZEXT48(local_228);
    uStack_264 = CONCAT44(0x6d3f42,(undefined4)uStack_264);
    iVar10 = FUN_00989090();
    if (iVar10 != -1) {
      if (*(int *)(iVar14 + 0x12e8) == 0) goto LAB_006d714a;
      uStack_25c = CONCAT44(0x6d3f72,(int **)uStack_25c);
      FUN_009885d0();
      uStack_18._0_1_ = 0x49;
      uStack_25c = CONCAT44(DAT_01258a48,0x6d3f88);
      piVar9 = (int *)FUN_00975bd0();
      uStack_25c = CONCAT44(0x6d3f98,(int **)uStack_25c);
      FUN_009885d0();
      uStack_18._0_1_ = 0x4a;
      uStack_25c._4_4_ = (uint *)auStack_178;
      uStack_25c._0_4_ = (int **)0x6d3fb1;
      (**(code **)(*piVar9 + 0x18))();
      uStack_1c = 0x4b;
      uStack_264 = CONCAT44(0x6d3fca,(undefined4)uStack_264);
      uStack_25c._0_4_ = (int **)auStack_1d8;
      uVar12 = FUN_00988f20();
      uStack_25c._0_4_ = (int **)0xffffffff;
      uStack_264 = (ulonglong)uVar12;
      uStack_1c = 0x4c;
      FUN_00408ed0();
      uStack_25c._0_4_ = (int **)0x6d3fe9;
      FUN_00408ad0();
      uStack_25c._0_4_ = (int **)0x6d3ff5;
      FUN_00408ad0();
      uStack_1c = 0x49;
      uStack_25c._0_4_ = (int **)0x6d4006;
      FUN_00408ad0();
      uStack_25c._0_4_ = (int **)0x6d4017;
      FUN_009885d0();
      uStack_1c = 0x4d;
      uStack_25c = CONCAT44(uStack_25c._4_4_,auStack_17c);
      uStack_264 = CONCAT44(0x6d4030,(undefined4)uStack_264);
      (**(code **)(*piVar9 + 0x30))();
      pvStack_20._0_1_ = 0x4e;
      uStack_264 = CONCAT44(&uStack_160,0x6d4049);
      FUN_00988f20();
      pvStack_20._0_1_ = 0x4f;
      uStack_264 = CONCAT44(0x6d405d,(undefined4)uStack_264);
      FUN_00989020();
      uStack_264 = CONCAT44(0x6d4069,(undefined4)uStack_264);
      FUN_00408ad0();
      uStack_264 = CONCAT44(0x6d4075,(undefined4)uStack_264);
      FUN_00408ad0();
      pvStack_20 = (void *)CONCAT31(pvStack_20._1_3_,0x49);
      uStack_264 = CONCAT44(0x6d4089,(undefined4)uStack_264);
      FUN_00408ad0();
      uStack_264._4_4_ = (int **)&uStack_1b8;
      uStack_264._0_4_ = 0x6d409c;
      uVar13 = (**(code **)(piVar9[0x1d] + 0x1c))();
      uStack_24 = CONCAT31(uStack_24._1_3_,0x50);
      uStack_264 = CONCAT44(uStack_264._4_4_,auStack_128);
      (**(code **)(*piVar9 + 0x1c))();
      uStack_18._0_1_ = 0x51;
      uStack_25c = CONCAT44(uVar13,0x6d40cb);
      FUN_00988f20();
      uStack_25c = CONCAT44(0x6d40d7,(int **)uStack_25c);
      FUN_00408ad0();
      uStack_18._0_1_ = 0x54;
      uStack_25c = CONCAT44(0x6d40eb,(int **)uStack_25c);
      FUN_00408ad0();
      if (1 < (int)uStack_20c) {
        uStack_25c = CONCAT44(0x6d40fc,(int **)uStack_25c);
        FUN_00989030();
      }
      uStack_25c = 0xffffffff00000000;
      uStack_264 = CONCAT44(&uStack_21c,0x6d4110);
      FUN_00448aa0();
      if (*(int **)(piStack_238[0x218] + *(int *)(piVar9[0x15] + 0x50) * 4) != piVar9) {
        uVar12 = *(uint *)(piStack_238[0x4c4] + piVar9[0x14] * 4);
        uStack_1b8 = uVar12 >> 0x11;
        puStack_1bc = (undefined1 *)(uVar12 << 0xf);
        uStack_220 = (uint)piStack_238[0x4ba] >> 0x11;
        piStack_224 = (int *)(piStack_238[0x4ba] << 0xf);
        uStack_25c = CONCAT44(0x6d4175,(int **)uStack_25c);
        FUN_0043a650();
        uStack_25c = CONCAT44(0x6d4186,(int **)uStack_25c);
        uVar13 = FUN_009885d0();
        piStack_224 = (int *)&uStack_25c;
        uStack_18._0_1_ = 0x55;
        local_1fc = 0x320000;
        iStack_1f8 = 0;
        uStack_264 = CONCAT44(0x6d41b7,(undefined4)uStack_264);
        FUN_0043a6a0();
        uStack_264 = CONCAT44(2,auStack_100);
        FUN_00988bb0();
        uStack_18._0_1_ = 0x56;
        uStack_25c = CONCAT44(uVar13,0x6d41e1);
        uVar13 = FUN_00988f20();
        uStack_25c = CONCAT44(uVar13,auStack_178);
        uStack_18._0_1_ = 0x57;
        uStack_264 = CONCAT44(0x6d4201,(undefined4)uStack_264);
        FUN_0042c180();
        uStack_18._0_1_ = 0x58;
        uStack_25c = CONCAT44(0x6d4218,(int **)uStack_25c);
        FUN_00989020();
        uStack_25c = CONCAT44(0x6d4224,(int **)uStack_25c);
        FUN_00408ad0();
        uStack_25c = CONCAT44(0x6d4230,(int **)uStack_25c);
        FUN_00408ad0();
        uStack_25c = CONCAT44(0x6d423c,(int **)uStack_25c);
        FUN_00408ad0();
        uStack_18._0_1_ = 0x54;
        uStack_25c = CONCAT44(0x6d4250,(int **)uStack_25c);
        FUN_00408ad0();
        uStack_25c = CONCAT44(0x6d4259,(int **)uStack_25c);
        iVar14 = FUN_00540e40();
        if (iVar14 != 0) {
          uStack_25c = 0xdedc2000df963c;
          uStack_264 = CONCAT44(auStack_1f4,0x6d4278);
          uVar13 = FUN_009c9b50();
          uStack_25c = CONCAT44(uVar13,auStack_178);
          uStack_18._0_1_ = 0x59;
          uStack_264 = CONCAT44(0x6d429b,(undefined4)uStack_264);
          uVar13 = FUN_0042c180();
          uStack_18._0_1_ = 0x5a;
          uStack_25c = CONCAT44(0x6d42bb,(int **)uStack_25c);
          FUN_009885d0();
          uStack_18._0_1_ = 0x5b;
          uStack_25c = CONCAT44(uVar13,0x6d42d6);
          FUN_00988f20();
          uStack_18._0_1_ = 0x5c;
          uStack_25c = CONCAT44(0x6d42ea,(int **)uStack_25c);
          FUN_00989020();
          uStack_25c = CONCAT44(0x6d42f6,(int **)uStack_25c);
          FUN_00408ad0();
          uStack_25c = CONCAT44(0x6d4302,(int **)uStack_25c);
          FUN_00408ad0();
          uStack_25c = CONCAT44(0x6d430e,(int **)uStack_25c);
          FUN_00408ad0();
          uStack_18._0_1_ = 0x54;
          uStack_25c = CONCAT44(0x6d431f,(int **)uStack_25c);
          FUN_00408ad0();
        }
        dStack_15c = (double)CONCAT44(dStack_15c._4_4_,*(undefined4 *)(DAT_012588e8 + 0xb5c));
        uStack_25c = CONCAT44(piVar9,piVar9[0x15]);
        uStack_264 = CONCAT44(auStack_1f4,
                              *(undefined4 *)
                               (*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4));
        uVar13 = FUN_005273a0();
        uStack_25c = 0xffffffff00000000;
        uStack_18._0_1_ = 0x5d;
        uStack_264 = CONCAT44(uVar13,0x6d436c);
        FUN_00408ed0();
        uStack_18._0_1_ = 0x54;
        uStack_25c = CONCAT44(0x6d437d,(int **)uStack_25c);
        FUN_00408ad0();
        uStack_25c = CONCAT44(auStack_1d8,piStack_238);
        uStack_264 = CONCAT44(0x6d438e,(undefined4)uStack_264);
        FUN_00543e80();
        uStack_18._0_1_ = 0x5e;
LAB_006d4396:
        if (uStack_1c8 != 0) {
          uStack_25c = CONCAT44(0x6d43b0,(int **)uStack_25c);
          FUN_00989030();
          uStack_25c = CONCAT44(0x6d43b9,(int **)uStack_25c);
          FUN_00989020();
        }
        goto LAB_006d43bd;
      }
LAB_006d43c2:
      uStack_25c = CONCAT44(0x6d43cb,(int **)uStack_25c);
      FUN_00408ad0();
      goto LAB_006d713e;
    }
    uStack_25c = ZEXT48(local_228);
    uStack_264 = CONCAT44(0x6d43e7,(undefined4)uStack_264);
    iVar10 = FUN_00989090();
    if (iVar10 != -1) {
      if (*(int *)(iVar14 + 0x12e8) == 0) goto LAB_006d714a;
      uStack_25c = CONCAT44(0x6d4417,(int **)uStack_25c);
      FUN_009885d0();
      uStack_18._0_1_ = 0x5f;
      uStack_25c = CONCAT44(DAT_01258a48,0x6d442d);
      piVar9 = (int *)FUN_00975bd0();
      uStack_25c = CONCAT44(0x6d443d,(int **)uStack_25c);
      FUN_009885d0();
      uStack_18._0_1_ = 0x60;
      uStack_25c._4_4_ = (uint *)auStack_194;
      uStack_25c._0_4_ = (int **)0x6d4456;
      (**(code **)(*piVar9 + 0x18))();
      uStack_1c = 0x61;
      uStack_264 = CONCAT44(0x6d446c,(undefined4)uStack_264);
      uStack_25c._0_4_ = (int **)auStack_1d8;
      uVar12 = FUN_00988f20();
      uStack_25c._0_4_ = (int **)0xffffffff;
      uStack_264 = (ulonglong)uVar12;
      uStack_1c = 0x62;
      FUN_00408ed0();
      uStack_25c._0_4_ = (int **)0x6d448b;
      FUN_00408ad0();
      uStack_25c._0_4_ = (int **)0x6d4497;
      FUN_00408ad0();
      uStack_1c = 0x5f;
      uStack_25c._0_4_ = (int **)0x6d44a8;
      FUN_00408ad0();
      uStack_25c._0_4_ = (int **)0x6d44b9;
      FUN_009885d0();
      uStack_1c = 99;
      uStack_25c = CONCAT44(uStack_25c._4_4_,auStack_198);
      uStack_264 = CONCAT44(0x6d44d2,(undefined4)uStack_264);
      (**(code **)(*piVar9 + 0x30))();
      pvStack_20._0_1_ = 100;
      uStack_264 = CONCAT44(&uStack_160,0x6d44e8);
      FUN_00988f20();
      pvStack_20._0_1_ = 0x65;
      uStack_264 = CONCAT44(0x6d44fc,(undefined4)uStack_264);
      FUN_00989020();
      uStack_264 = CONCAT44(0x6d4505,(undefined4)uStack_264);
      FUN_00408ad0();
      uStack_264 = CONCAT44(0x6d4511,(undefined4)uStack_264);
      FUN_00408ad0();
      pvStack_20 = (void *)CONCAT31(pvStack_20._1_3_,0x5f);
      uStack_264 = CONCAT44(0x6d4525,(undefined4)uStack_264);
      FUN_00408ad0();
      uStack_264._4_4_ = (int **)auStack_108;
      uStack_264._0_4_ = 0x6d4538;
      uVar13 = (**(code **)(piVar9[0x1d] + 0x1c))();
      uStack_24 = CONCAT31(uStack_24._1_3_,0x66);
      uStack_264 = CONCAT44(uStack_264._4_4_,&local_200);
      (**(code **)(*piVar9 + 0x1c))();
      uStack_18._0_1_ = 0x67;
      uStack_25c = CONCAT44(uVar13,0x6d4564);
      FUN_00988f20();
      uStack_25c = CONCAT44(0x6d456d,(int **)uStack_25c);
      FUN_00408ad0();
      uStack_18._0_1_ = 0x6a;
      uStack_25c = CONCAT44(0x6d4581,(int **)uStack_25c);
      FUN_00408ad0();
      if (1 < (int)uStack_20c) {
        uStack_25c = CONCAT44(0x6d4592,(int **)uStack_25c);
        FUN_00989030();
      }
      uStack_25c = 0xffffffff00000000;
      uStack_264 = CONCAT44(&uStack_21c,0x6d45a6);
      FUN_00448aa0();
      if (*(int **)(piStack_238[0x214] + *(int *)(piVar9[0x15] + 0x50) * 4) != piVar9) {
        uVar12 = *(uint *)(piStack_238[0x4c4] + piVar9[0x14] * 4);
        uStack_1b8 = uVar12 >> 0x11;
        puStack_1bc = (undefined1 *)(uVar12 << 0xf);
        uStack_220 = (uint)piStack_238[0x4ba] >> 0x11;
        piStack_224 = (int *)(piStack_238[0x4ba] << 0xf);
        uStack_25c = CONCAT44(0x6d460b,(int **)uStack_25c);
        FUN_0043a650();
        uStack_25c = CONCAT44(0x6d461c,(int **)uStack_25c);
        uVar13 = FUN_009885d0();
        piStack_224 = (int *)&uStack_25c;
        uStack_18._0_1_ = 0x6b;
        local_1fc = 0x320000;
        iStack_1f8 = 0;
        uStack_264 = CONCAT44(0x6d464d,(undefined4)uStack_264);
        FUN_0043a6a0();
        uStack_264 = CONCAT44(2,auStack_178);
        FUN_00988bb0();
        uStack_18._0_1_ = 0x6c;
        uStack_25c = CONCAT44(uVar13,0x6d4677);
        uVar13 = FUN_00988f20();
        uStack_25c = CONCAT44(uVar13,auStack_194);
        uStack_18._0_1_ = 0x6d;
        uStack_264 = CONCAT44(0x6d4697,(undefined4)uStack_264);
        FUN_0042c180();
        uStack_18._0_1_ = 0x6e;
        uStack_25c = CONCAT44(0x6d46ae,(int **)uStack_25c);
        FUN_00989020();
        uStack_25c = CONCAT44(0x6d46ba,(int **)uStack_25c);
        FUN_00408ad0();
        uStack_25c = CONCAT44(0x6d46c6,(int **)uStack_25c);
        FUN_00408ad0();
        uStack_25c = CONCAT44(0x6d46d2,(int **)uStack_25c);
        FUN_00408ad0();
        uStack_18._0_1_ = 0x6a;
        uStack_25c = CONCAT44(0x6d46e6,(int **)uStack_25c);
        FUN_00408ad0();
        uStack_25c = CONCAT44(0x6d46ef,(int **)uStack_25c);
        iVar14 = FUN_00540e40();
        if (iVar14 != 0) {
          uStack_25c = 0xdedc2000df963c;
          uStack_264 = CONCAT44(auStack_1b0,0x6d4711);
          uVar13 = FUN_009c9b50();
          uStack_25c = CONCAT44(uVar13,auStack_178);
          uStack_18._0_1_ = 0x6f;
          uStack_264 = CONCAT44(0x6d4734,(undefined4)uStack_264);
          uVar13 = FUN_0042c180();
          uStack_18._0_1_ = 0x70;
          uStack_25c = CONCAT44(0x6d4754,(int **)uStack_25c);
          FUN_009885d0();
          uStack_18._0_1_ = 0x71;
          uStack_25c = CONCAT44(uVar13,0x6d476f);
          FUN_00988f20();
          uStack_18._0_1_ = 0x72;
          uStack_25c = CONCAT44(0x6d4783,(int **)uStack_25c);
          FUN_00989020();
          uStack_25c = CONCAT44(0x6d478f,(int **)uStack_25c);
          FUN_00408ad0();
          uStack_25c = CONCAT44(0x6d479b,(int **)uStack_25c);
          FUN_00408ad0();
          uStack_25c = CONCAT44(0x6d47a7,(int **)uStack_25c);
          FUN_00408ad0();
          uStack_18._0_1_ = 0x6a;
          uStack_25c = CONCAT44(0x6d47bb,(int **)uStack_25c);
          FUN_00408ad0();
        }
        dStack_15c = (double)CONCAT44(dStack_15c._4_4_,*(undefined4 *)(DAT_012588e8 + 0xb5c));
        uStack_25c = CONCAT44(piVar9,piVar9[0x15]);
        uStack_264 = CONCAT44(auStack_194,
                              *(undefined4 *)
                               (*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4));
        uVar13 = FUN_00526a30();
        uStack_25c = 0xffffffff00000000;
        uStack_18._0_1_ = 0x73;
        uStack_264 = CONCAT44(uVar13,0x6d480b);
        FUN_00408ed0();
        uStack_18._0_1_ = 0x6a;
        uStack_25c = CONCAT44(0x6d481f,(int **)uStack_25c);
        FUN_00408ad0();
        uStack_25c = CONCAT44(auStack_1d8,piStack_238);
        uStack_264 = CONCAT44(0x6d4830,(undefined4)uStack_264);
        FUN_00543e80();
        uStack_18._0_1_ = 0x74;
        goto LAB_006d4396;
      }
      goto LAB_006d43c2;
    }
    uStack_25c = ZEXT48(local_228);
    uStack_264 = CONCAT44(0x6d484d,(undefined4)uStack_264);
    iVar10 = FUN_00989090();
    if (iVar10 != -1) {
      if (*(int *)(iVar14 + 0x12e8) == 0) goto LAB_006d714a;
      uStack_25c = CONCAT44(0x6d487d,(int **)uStack_25c);
      FUN_009885d0();
      uStack_18._0_1_ = 0x75;
      uStack_25c = CONCAT44(DAT_01258a48,0x6d4893);
      piVar9 = (int *)FUN_00975bd0();
      uStack_25c = CONCAT44(0x6d48a5,(int **)uStack_25c);
      FUN_009885d0();
      uStack_18._0_1_ = 0x76;
      uStack_25c._4_4_ = (uint *)auStack_194;
      uStack_25c._0_4_ = (int **)0x6d48c0;
      (**(code **)(*piVar9 + 0x18))();
      uStack_1c = 0x77;
      uStack_264 = CONCAT44(0x6d48d6,(undefined4)uStack_264);
      uStack_25c._0_4_ = (int **)auStack_1d8;
      uVar12 = FUN_00988f20();
      uStack_25c._0_4_ = (int **)0xffffffff;
      uStack_264 = (ulonglong)uVar12;
      uStack_1c = 0x78;
      FUN_00408ed0();
      uStack_25c._0_4_ = (int **)0x6d48f5;
      FUN_00408ad0();
      uStack_25c._0_4_ = (int **)0x6d4901;
      FUN_00408ad0();
      uStack_1c = 0x75;
      uStack_25c._0_4_ = (int **)0x6d4912;
      FUN_00408ad0();
      uStack_25c._0_4_ = (int **)0x6d4923;
      FUN_009885d0();
      uStack_1c = 0x79;
      uStack_25c = CONCAT44(uStack_25c._4_4_,auStack_198);
      uStack_264 = CONCAT44(0x6d493e,(undefined4)uStack_264);
      (**(code **)(*piStack_238 + 0x30))();
      pvStack_20._0_1_ = 0x7a;
      uStack_264 = CONCAT44(&uStack_160,0x6d4954);
      FUN_00988f20();
      pvStack_20._0_1_ = 0x7b;
      uStack_264 = CONCAT44(0x6d4968,(undefined4)uStack_264);
      FUN_00989020();
      uStack_264 = CONCAT44(0x6d4971,(undefined4)uStack_264);
      FUN_00408ad0();
      uStack_264 = CONCAT44(0x6d497d,(undefined4)uStack_264);
      FUN_00408ad0();
      pvStack_20 = (void *)CONCAT31(pvStack_20._1_3_,0x75);
      uStack_264 = CONCAT44(0x6d4991,(undefined4)uStack_264);
      FUN_00408ad0();
      uStack_264._4_4_ = (int **)auStack_108;
      uStack_264._0_4_ = 0x6d49a8;
      (**(code **)(piStack_23c[0x1d] + 0x1c))();
      uStack_24 = CONCAT31(uStack_24._1_3_,0x7c);
      uStack_264 = CONCAT44(uStack_264._4_4_,&local_200);
      (**(code **)(*piStack_23c + 0x1c))();
      uStack_18._0_1_ = 0x7d;
      uStack_25c = CONCAT44(piStack_23c,0x6d49da);
      FUN_00988f20();
      uStack_25c = CONCAT44(0x6d49e3,(int **)uStack_25c);
      FUN_00408ad0();
      uStack_18._0_1_ = 0x80;
      uStack_25c = CONCAT44(0x6d49f7,(int **)uStack_25c);
      FUN_00408ad0();
      if (1 < (int)uStack_20c) {
        uStack_25c = CONCAT44(0x6d4a08,(int **)uStack_25c);
        FUN_00989030();
      }
      uStack_25c = 0xffffffff00000000;
      uStack_264 = CONCAT44(&uStack_21c,0x6d4a1c);
      FUN_00448aa0();
      if (*(int **)(*(int *)(iVar14 + 0x880) + *(int *)(piVar9[0x15] + 0x50) * 4) != piVar9) {
        dStack_15c = (double)CONCAT44(dStack_15c._4_4_,*(undefined4 *)(DAT_012588e8 + 0xb5c));
        uStack_25c = CONCAT44(piVar9,piVar9[0x15]);
        uStack_264 = CONCAT44(*(undefined4 *)
                               (*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4),
                              0x6d4a6d);
        uVar13 = FUN_005263c0();
        uStack_25c = 0xffffffff00000000;
        uStack_18._0_1_ = 0x81;
        uStack_264 = CONCAT44(uVar13,0x6d4a85);
        FUN_00408ed0();
        uStack_18._0_1_ = 0x80;
        uStack_25c = CONCAT44(0x6d4a94,(int **)uStack_25c);
        FUN_00408ad0();
        uStack_25c = 0x6d4aa1;
        FUN_008a8650();
        iStack_64 = piStack_238[7];
        iStack_60 = piStack_238[8];
        uStack_25c = CONCAT44(auStack_6c,auStack_1d8);
        uStack_264 = CONCAT44(piVar9 + 0x72,0x6d4ad5);
        FUN_00973cf0();
        uStack_18._0_1_ = 0x82;
        uStack_25c = CONCAT44(0x6d4aee,(int **)uStack_25c);
        FUN_009885d0();
        uStack_18._0_1_ = 0x83;
        uStack_25c = CONCAT44(0x6d4b01,(int **)uStack_25c);
        cVar8 = FUN_00416db0();
        uStack_18._0_1_ = 0x82;
        uStack_25c = CONCAT44(0x6d4b17,(int **)uStack_25c);
        FUN_00408ad0();
        if (cVar8 == '\0') {
          uStack_25c = CONCAT44(auStack_1d8,0x6d4b30);
          FUN_00988fa0();
          uStack_18._0_1_ = 0x84;
          uStack_25c = CONCAT44(0x6d4b47,(int **)uStack_25c);
          FUN_00989020();
          uStack_25c = CONCAT44(0x6d4b50,(int **)uStack_25c);
          FUN_00408ad0();
        }
        uStack_25c = CONCAT44(0x6d4b59,(int **)uStack_25c);
        FUN_00408ad0();
      }
      uStack_25c = CONCAT44(0x6d4b62,(int **)uStack_25c);
      FUN_00408ad0();
      goto LAB_006d713e;
    }
    uStack_25c = ZEXT48(local_228);
    uStack_264 = CONCAT44(0x6d4b7e,(undefined4)uStack_264);
    iVar10 = FUN_00989090();
    if (iVar10 != -1) {
      if (*(int *)(iVar14 + 0x12e8) == 0) goto LAB_006d714a;
      uStack_25c = CONCAT44(0x6d4bae,(int **)uStack_25c);
      FUN_009885d0();
      uStack_18._0_1_ = 0x85;
      uStack_25c = CONCAT44(DAT_01258a48,0x6d4bc4);
      piVar9 = (int *)FUN_00975bd0();
      uStack_25c = CONCAT44(0x6d4bd9,(int **)uStack_25c);
      FUN_009885d0();
      uStack_18._0_1_ = 0x86;
      uStack_25c._4_4_ = (uint *)auStack_194;
      uStack_25c._0_4_ = (int **)0x6d4bf4;
      (**(code **)(*piVar9 + 0x18))();
      uStack_1c = 0x87;
      uStack_264 = CONCAT44(0x6d4c0a,(undefined4)uStack_264);
      uStack_25c._0_4_ = (int **)auStack_1b0;
      uVar12 = FUN_00988f20();
      uStack_25c._0_4_ = (int **)0xffffffff;
      uStack_264 = (ulonglong)uVar12;
      uStack_1c = 0x88;
      FUN_00408ed0();
      uStack_25c._0_4_ = (int **)0x6d4c29;
      FUN_00408ad0();
      uStack_25c._0_4_ = (int **)0x6d4c35;
      FUN_00408ad0();
      uStack_1c = 0x85;
      uStack_25c._0_4_ = (int **)0x6d4c49;
      FUN_00408ad0();
      uStack_25c._0_4_ = (int **)0x6d4c57;
      FUN_009885d0();
      uStack_1c = 0x89;
      uStack_25c = CONCAT44(uStack_25c._4_4_,auStack_198);
      uStack_264 = CONCAT44(0x6d4c72,(undefined4)uStack_264);
      (**(code **)(*piStack_238 + 0x30))();
      pvStack_20._0_1_ = 0x8a;
      uStack_264 = CONCAT44(&uStack_1dc,0x6d4c88);
      FUN_00988f20();
      pvStack_20._0_1_ = 0x8b;
      uStack_264 = CONCAT44(0x6d4c9c,(undefined4)uStack_264);
      FUN_00989020();
      uStack_264 = CONCAT44(0x6d4ca5,(undefined4)uStack_264);
      FUN_00408ad0();
      uStack_264 = CONCAT44(0x6d4cb1,(undefined4)uStack_264);
      FUN_00408ad0();
      pvStack_20 = (void *)CONCAT31(pvStack_20._1_3_,0x85);
      uStack_264 = CONCAT44(0x6d4cc2,(undefined4)uStack_264);
      FUN_00408ad0();
      uStack_264._4_4_ = (int **)auStack_108;
      uStack_264._0_4_ = 0x6d4cd9;
      (**(code **)(piStack_23c[0x1d] + 0x1c))();
      uStack_24 = CONCAT31(uStack_24._1_3_,0x8c);
      uStack_264 = CONCAT44(uStack_264._4_4_,&local_200);
      (**(code **)(*piStack_23c + 0x1c))();
      uStack_18._0_1_ = 0x8d;
      uStack_25c = CONCAT44(piStack_23c,0x6d4d0b);
      FUN_00988f20();
      uStack_25c = CONCAT44(0x6d4d14,(int **)uStack_25c);
      FUN_00408ad0();
      uStack_18._0_1_ = 0x90;
      uStack_25c = CONCAT44(0x6d4d28,(int **)uStack_25c);
      FUN_00408ad0();
      if (1 < (int)uStack_20c) {
        uStack_25c = CONCAT44(0x6d4d39,(int **)uStack_25c);
        FUN_00989030();
      }
      uStack_25c = 0xffffffff00000000;
      uStack_264 = CONCAT44(&uStack_21c,0x6d4d4d);
      FUN_00448aa0();
      if (*(int **)(*(int *)(iVar14 + 0x870) + *(int *)(piVar9[0x15] + 0x50) * 4) == piVar9)
      goto LAB_006d43c2;
      dStack_15c = (double)CONCAT44(dStack_15c._4_4_,*(undefined4 *)(DAT_012588e8 + 0xb5c));
      uStack_25c = CONCAT44(piVar9,piVar9[0x15]);
      uStack_264 = CONCAT44(*(undefined4 *)
                             (*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4),
                            0x6d4d9e);
      uVar13 = FUN_00525e90();
      uStack_25c = 0xffffffff00000000;
      uStack_18._0_1_ = 0x91;
      uStack_264 = CONCAT44(uVar13,0x6d4db6);
      FUN_00408ed0();
      uStack_18._0_1_ = 0x90;
      uStack_25c = CONCAT44(0x6d4dc5,(int **)uStack_25c);
      FUN_00408ad0();
      uStack_25c = 0x6d4dd2;
      FUN_008a8650();
      iStack_64 = piStack_238[7];
      iStack_60 = piStack_238[8];
      uStack_25c = CONCAT44(auStack_6c,auStack_1d8);
      uStack_264 = CONCAT44(piVar9 + 0x72,0x6d4e06);
      FUN_00973cf0();
      uStack_18._0_1_ = 0x92;
      uStack_25c = CONCAT44(0x6d4e1f,(int **)uStack_25c);
      FUN_009885d0();
      uStack_18._0_1_ = 0x93;
      uStack_25c = CONCAT44(0x6d4e32,(int **)uStack_25c);
      cVar8 = FUN_00416db0();
      uStack_18._0_1_ = 0x92;
      uStack_25c = CONCAT44(0x6d4e48,(int **)uStack_25c);
      FUN_00408ad0();
      if (cVar8 == '\0') {
        uStack_25c = CONCAT44(auStack_1d8,0x6d4e65);
        FUN_00988fa0();
        uStack_18._0_1_ = 0x94;
        uStack_25c = CONCAT44(0x6d4e7c,(int **)uStack_25c);
        FUN_00989020();
        uStack_25c = CONCAT44(0x6d4e85,(int **)uStack_25c);
        FUN_00408ad0();
      }
LAB_006d43bd:
      uStack_25c = CONCAT44(0x6d43c2,(int **)uStack_25c);
      FUN_00408ad0();
      goto LAB_006d43c2;
    }
    uStack_25c = ZEXT48(local_228);
    uStack_264 = CONCAT44(0x6d4e9a,(undefined4)uStack_264);
    iVar10 = FUN_00989090();
    if (iVar10 != -1) {
      if (*(int *)(iVar14 + 0x12e8) == 0) goto LAB_006d714a;
      uStack_25c = CONCAT44(0x6d4eca,(int **)uStack_25c);
      FUN_009885d0();
      uStack_18._0_1_ = 0x95;
      uStack_25c = CONCAT44(DAT_01258a48,0x6d4ee0);
      piVar9 = (int *)FUN_00975bd0();
      uStack_25c = CONCAT44(0x6d4ef0,(int **)uStack_25c);
      FUN_009885d0();
      uStack_18._0_1_ = 0x96;
      uStack_25c = CONCAT44(0x6d4f09,(int **)uStack_25c);
      FUN_009885d0();
      uStack_18 = CONCAT31(uStack_18._1_3_,0x97);
      uStack_25c._4_4_ = (uint *)auStack_178;
      uStack_25c._0_4_ = (int **)0x6d4f22;
      iVar14 = (**(code **)(*piVar9 + 0x18))();
      uStack_1c = 0x98;
      uStack_25c._0_4_ = (int **)piVar9[0x15];
      uStack_264 = CONCAT44(0x6d4f3e,(undefined4)uStack_264);
      FUN_00974c50();
      uStack_25c._0_4_ = (int **)auStack_1b4;
      uStack_1c = 0x99;
      uStack_264 = CONCAT44(0x6d4f5c,(undefined4)uStack_264);
      FUN_00988f20();
      uStack_1c = 0x9a;
      uStack_264 = CONCAT44(0x6d4f77,(undefined4)uStack_264);
      uStack_25c._0_4_ = (int **)iVar14;
      FUN_00988f20();
      uStack_25c._0_4_ = (int **)&uStack_1dc;
      uStack_1c = 0x9b;
      uStack_264 = CONCAT44(0x6d4f8f,(undefined4)uStack_264);
      uVar12 = FUN_00988f20();
      uStack_25c._0_4_ = (int **)0xffffffff;
      uStack_264 = (ulonglong)uVar12;
      uStack_1c = 0x9c;
      FUN_00408ed0();
      uStack_25c._0_4_ = (int **)0x6d4fae;
      FUN_00408ad0();
      uStack_25c._0_4_ = (int **)0x6d4fba;
      FUN_00408ad0();
      uStack_25c._0_4_ = (int **)0x6d4fc6;
      FUN_00408ad0();
      uStack_25c._0_4_ = (int **)0x6d4fd2;
      FUN_00408ad0();
      uStack_25c._0_4_ = (int **)0x6d4fde;
      FUN_00408ad0();
      uStack_25c._0_4_ = (int **)0x6d4fea;
      FUN_00408ad0();
      uStack_1c = 0x95;
      uStack_25c._0_4_ = (int **)0x6d4ffb;
      FUN_00408ad0();
      uStack_25c._0_4_ = (int **)0x6d500c;
      FUN_009885d0();
      uStack_1c = 0x9d;
      uStack_25c = CONCAT44(uStack_25c._4_4_,auStack_198);
      uStack_264 = CONCAT44(0x6d5025,(undefined4)uStack_264);
      (**(code **)(*piVar9 + 0x30))();
      pvStack_20._0_1_ = 0x9e;
      uStack_264 = CONCAT44(&uStack_160,0x6d503b);
      FUN_00988f20();
      pvStack_20._0_1_ = 0x9f;
      uStack_264 = CONCAT44(0x6d504f,(undefined4)uStack_264);
      FUN_00989020();
      uStack_264 = CONCAT44(0x6d5058,(undefined4)uStack_264);
      FUN_00408ad0();
      uStack_264 = CONCAT44(0x6d5064,(undefined4)uStack_264);
      FUN_00408ad0();
      pvStack_20 = (void *)CONCAT31(pvStack_20._1_3_,0x95);
      uStack_264 = CONCAT44(0x6d5078,(undefined4)uStack_264);
      FUN_00408ad0();
      uStack_264._4_4_ = &piStack_224;
      uStack_264._0_4_ = 0x6d5086;
      (**(code **)(*piVar9 + 0x1c))();
      uStack_264._0_4_ = 0xffffffff;
      uStack_24 = CONCAT31(uStack_24._1_3_,0xa0);
      FUN_00448aa0(&local_228,0);
      if (1 < (int)auStack_218[0]) {
        uStack_264._0_4_ = 0x6d50ae;
        FUN_00989030();
      }
      uStack_264 = CONCAT44(uStack_264._4_4_,&local_200);
      (**(code **)(piVar9[0x1d] + 0x1c))();
      uStack_18._0_1_ = 0xa1;
      uStack_25c = CONCAT44(0x6d50d2,(int **)uStack_25c);
      FUN_00989020();
      goto LAB_006d43bd;
    }
    uStack_25c = ZEXT48(local_228);
    uStack_264 = CONCAT44(0x6d50eb,(undefined4)uStack_264);
    iVar10 = FUN_00989090();
    if (iVar10 != -1) {
      piVar9 = local_228;
      if (0xf < (uint)local_228[5]) {
        piVar9 = (int *)*local_228;
      }
      uStack_25c = CONCAT44((int)piVar9 + 0x19,0x6d5109);
      iVar14 = FUN_00aaf0c5();
      dStack_15c = (double)CONCAT44(dStack_15c._4_4_,*(undefined4 *)(DAT_012588e8 + 0xb5c));
      piVar9 = *(int **)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4) +
                        0x83c);
      for (; iVar14 != 0; iVar14 = iVar14 + -1) {
        piVar9 = (int *)piVar9[2];
      }
      iVar14 = *piVar9;
      uStack_25c = CONCAT44(0x6d5151,(int **)uStack_25c);
      (**(code **)(*param_2 + 0x44))();
      uStack_25c = CONCAT44(0x6d515b,(int **)uStack_25c);
      cVar8 = FUN_0040b360();
      if (cVar8 == '\0') goto LAB_006d714a;
      uStack_25c = CONCAT44(auStack_100,0x6d5175);
      uVar13 = (**(code **)(**(int **)(iVar14 + 0x54) + 0x18))();
      uStack_25c = CONCAT44(auStack_194,iVar14);
      uStack_18._0_1_ = 0xa2;
      uStack_264 = CONCAT44(0x6d518d,(undefined4)uStack_264);
      uVar15 = FUN_009790b0();
      uStack_25c = CONCAT44(uVar13,"IDEOLOGY");
      uStack_264 = CONCAT44(uVar15,"PARTY");
      uStack_18._0_1_ = 0xa3;
      uVar13 = FUN_0043ec10(auStack_1f4);
      uStack_25c = 0xffffffff00000000;
      uStack_18._0_1_ = 0xa4;
      uStack_264 = CONCAT44(uVar13,0x6d51cb);
      FUN_00408ed0();
      uStack_25c = CONCAT44(0x6d51d4,(int **)uStack_25c);
      FUN_00408ad0();
      uStack_25c = CONCAT44(0x6d51e0,(int **)uStack_25c);
      FUN_00408ad0();
      uStack_18._0_1_ = 0;
      uStack_25c = CONCAT44(0x6d51f3,(int **)uStack_25c);
      FUN_00408ad0();
      uStack_25c = CONCAT44(auStack_11c,0x6d5206);
      FUN_00514550();
      uStack_18._0_1_ = 0xa5;
      uStack_25c = CONCAT44(0x6d521a,(int **)uStack_25c);
      FUN_00989020();
      uStack_18._0_1_ = 0;
      uStack_25c = CONCAT44(0x6d522d,(int **)uStack_25c);
      FUN_00408ad0();
      uStack_25c = CONCAT44(auStack_178,iVar14);
      uStack_264 = CONCAT44(0x6d523b,(undefined4)uStack_264);
      uVar13 = FUN_00978130();
      uStack_25c = 0xffffffff00000000;
      uStack_18._0_1_ = 0xa6;
      uStack_264 = CONCAT44(uVar13,0x6d5253);
      FUN_00408ed0();
      goto LAB_006d713e;
    }
    uStack_25c._4_4_ = (uint *)0x0;
    uStack_25c._0_4_ = (int **)0x6d5269;
    uVar13 = (**(code **)(*param_2 + 0x44))();
    uStack_25c = CONCAT44(uStack_25c._4_4_,uVar13);
    uStack_264 = CONCAT44(0x6d5274,(undefined4)uStack_264);
    iVar10 = FUN_00989090();
    if (iVar10 != -1) {
      uStack_25c._4_4_ = auStack_74;
      uStack_25c._0_4_ = (int **)0x6d52a0;
      (**(code **)(**(int **)(iRam00000054 + 0x58) + 0x4c))();
      uStack_25c._0_4_ = &local_228;
      uStack_264 = CONCAT44(&local_22c,auStack_74[0]);
      local_22c = -1;
      cVar8 = FUN_009e0c90(uStack_78);
      if (cVar8 != '\0') {
        uStack_25c = CONCAT44(uStack_25c._4_4_,0x6d52e8);
        (**(code **)(*param_2 + 0x44))();
        uStack_25c = CONCAT44(0x6d52f2,(int **)uStack_25c);
        cVar8 = FUN_0040b360();
        if (cVar8 == '\0') {
          uStack_25c = CONCAT44(0x6d5613,(int **)uStack_25c);
          (**(code **)(*param_2 + 0x44))();
          uStack_25c = CONCAT44(0x6d561d,(int **)uStack_25c);
          cVar8 = FUN_0040b360();
          if (cVar8 == '\0') {
            piStack_224 = *(int **)(iVar14 + 0x130c);
            iVar10 = piStack_238[1] - *piStack_238 >> 2;
            piVar9 = (int *)0x0;
            iVar16 = 0;
            if (0 < iVar10) {
              do {
                if (piStack_224[iVar16] != 0) {
                  if (local_228 == piVar9) {
                    dVar1 = (double)*(int *)(iVar14 + 0x12e8);
                    if (*(int *)(iVar14 + 0x12e8) < 0) {
                      dVar1 = dVar1 + 4294967296.0;
                    }
                    if (dVar1 != 0.0) {
                      puStack_1bc = (undefined1 *)(piStack_224[iVar16] * 100);
                      dStack_15c = (double)(int)puStack_1bc;
                      if ((int)puStack_1bc < 0) {
                        dStack_15c = dStack_15c + 4294967296.0;
                      }
                      dStack_15c = dStack_15c / dVar1;
                    }
                    uStack_25c = CONCAT44(auStack_100,0x6d57e8);
                    local_1fc = (**(code **)(**(int **)(*piStack_238 + iVar16 * 4) + 0x18))();
                    uStack_18._0_1_ = 0xb6;
                    uStack_25c = CONCAT44(auStack_194,0x6d5803);
                    uVar13 = FUN_009888f0();
                    uStack_18._0_1_ = 0xb7;
                    uStack_25c = CONCAT44(local_1fc,"IDEOLOGY");
                    uStack_264 = CONCAT44(uVar13,"PERCENT");
                    uVar13 = FUN_0043ec10(auStack_1f4);
                    uStack_25c = 0xffffffff00000000;
                    uStack_18._0_1_ = 0xb8;
                    uStack_264 = CONCAT44(uVar13,0x6d5845);
                    FUN_00408ed0();
                    uStack_25c = CONCAT44(0x6d584e,(int **)uStack_25c);
                    FUN_00408ad0();
                    uStack_25c = CONCAT44(0x6d585a,(int **)uStack_25c);
                    FUN_00408ad0();
                    uStack_18 = (uint)uStack_18._1_3_ << 8;
                    uStack_25c = CONCAT44(0x6d586d,(int **)uStack_25c);
                    FUN_00408ad0();
                  }
                  piVar9 = (int *)((int)piVar9 + 1);
                }
                iVar16 = iVar16 + 1;
              } while (iVar16 < iVar10);
            }
          }
          else {
            iVar16 = 1;
            iVar10 = piStack_238[1] - *piStack_238 >> 2;
            local_1fc = iVar10;
            if (1 < iVar10) {
              do {
                if (local_228 == (int *)(iVar16 + -1)) {
                  uStack_25c = CONCAT44(auStack_100,0x6d5667);
                  piStack_224 = (int *)(**(code **)(**(int **)(*piStack_238 + iVar16 * 4) + 0x18))()
                  ;
                  uStack_18._0_1_ = 0xb3;
                  puStack_1bc = (undefined1 *)&uStack_25c;
                  uStack_264 = ZEXT48(auStack_194);
                  uStack_25c = CONCAT44(*(undefined4 *)(*(int *)(iVar14 + 0x8d8) + iVar16 * 8 + 4),
                                        *(undefined4 *)(*(int *)(iVar14 + 0x8d8) + iVar16 * 8));
                  uVar13 = FUN_00988bb0();
                  uStack_18._0_1_ = 0xb4;
                  uStack_25c = CONCAT44(piStack_224,"IDEOLOGY");
                  uStack_264 = CONCAT44(uVar13,"PERCENT");
                  uVar13 = FUN_0043ec10(auStack_1f4);
                  uStack_25c = 0xffffffff00000000;
                  uStack_18._0_1_ = 0xb5;
                  uStack_264 = CONCAT44(uVar13,0x6d56e3);
                  FUN_00408ed0();
                  uStack_25c = CONCAT44(0x6d56ec,(int **)uStack_25c);
                  FUN_00408ad0();
                  uStack_25c = CONCAT44(0x6d56f8,(int **)uStack_25c);
                  FUN_00408ad0();
                  uStack_18 = (uint)uStack_18._1_3_ << 8;
                  uStack_25c = CONCAT44(0x6d570b,(int **)uStack_25c);
                  FUN_00408ad0();
                  iVar10 = local_1fc;
                }
                iVar16 = iVar16 + 1;
              } while (iVar16 < iVar10);
            }
          }
        }
        else {
          uStack_25c = CONCAT44(0x6d5301,(int **)uStack_25c);
          iVar14 = FUN_005e64d0();
          iVar10 = 0;
          piVar18 = (int *)(piStack_238[1] - *piStack_238 >> 2);
          piVar9 = (int *)0x0;
          piStack_224 = piVar18;
          if (0 < (int)piVar18) {
            dStack_15c = 0.0;
            do {
              uStack_78 = *(undefined4 *)(*(int *)(iVar14 + 0x10) + 4 + iVar10 * 8);
              uStack_7c = *(undefined4 *)(*(int *)(iVar14 + 0x10) + iVar10 * 8);
              uStack_25c = CONCAT44(0x6d5377,(int **)uStack_25c);
              cVar8 = FUN_009f22b0();
              if (cVar8 != '\0') {
                if (local_228 == piVar9) {
                  uStack_25c = CONCAT44(0x6d539e,(int **)uStack_25c);
                  FUN_009885d0();
                  uStack_18._0_1_ = 0xa7;
                  uStack_25c = CONCAT44(auStack_178,0x6d53c6);
                  uVar13 = (**(code **)(**(int **)(iVar10 * 4 + *piStack_238) + 0x18))();
                  uStack_18._0_1_ = 0xa8;
                  uStack_25c = CONCAT44(uVar13,0x6d53e0);
                  FUN_00988fa0();
                  uStack_18._0_1_ = 0xa9;
                  uStack_25c = CONCAT44(auStack_1b0,0x6d53fc);
                  local_1fc = FUN_00988f20();
                  uStack_18._0_1_ = 0xaa;
                  uStack_138 = *(undefined4 *)(*(int *)(iVar14 + 0x10) + 4 + iVar10 * 8);
                  uStack_13c = *(uint *)(*(int *)(iVar14 + 0x10) + iVar10 * 8);
                  puStack_1bc = (undefined1 *)&uStack_25c;
                  local_84 = 0x320000;
                  local_80 = 0;
                  uStack_264 = CONCAT44(0x6d5460,(undefined4)uStack_264);
                  FUN_0043a6a0();
                  uStack_264 = CONCAT44(1,auStack_194);
                  uVar13 = FUN_00988bb0();
                  uStack_18._0_1_ = 0xab;
                  uStack_25c = CONCAT44(local_1fc,"IDEOLOGY");
                  uStack_264 = CONCAT44(uVar13,"PERCENT");
                  uVar13 = FUN_0043ec10(auStack_1f4);
                  uStack_25c = 0xffffffff00000000;
                  uStack_18._0_1_ = 0xac;
                  uStack_264 = CONCAT44(uVar13,0x6d54b1);
                  FUN_00408ed0();
                  uStack_25c = CONCAT44(0x6d54ba,(int **)uStack_25c);
                  FUN_00408ad0();
                  uStack_25c = CONCAT44(0x6d54c6,(int **)uStack_25c);
                  FUN_00408ad0();
                  uStack_25c = CONCAT44(0x6d54d2,(int **)uStack_25c);
                  FUN_00408ad0();
                  uStack_25c = CONCAT44(0x6d54de,(int **)uStack_25c);
                  FUN_00408ad0();
                  uStack_25c = CONCAT44(0x6d54ea,(int **)uStack_25c);
                  FUN_00408ad0();
                  uStack_18._0_1_ = 0;
                  uStack_25c = CONCAT44(0x6d54fd,(int **)uStack_25c);
                  FUN_00408ad0();
                  uStack_25c = CONCAT44(0x6d550e,(int **)uStack_25c);
                  FUN_009885d0();
                  uStack_18._0_1_ = 0xad;
                  uStack_25c = CONCAT44(auStack_1b0,0x6d552e);
                  FUN_00988f20();
                  uStack_18._0_1_ = 0xaf;
                  uStack_25c = CONCAT44(0x6d5542,(int **)uStack_25c);
                  FUN_00408ad0();
                  uStack_25c = CONCAT44(&uStack_21c,auStack_1d8);
                  uStack_264 = CONCAT44(0x6d5552,(undefined4)uStack_264);
                  FUN_009a8ee0();
                  uStack_18._0_1_ = 0xb0;
                  uStack_25c = CONCAT44(0x6d5561,(int **)uStack_25c);
                  iVar16 = FUN_00475500();
                  uStack_264 = *(undefined8 *)(iVar16 + 0x6c);
                  uStack_25c = *(undefined8 *)(iVar16 + 0x74);
                  uVar13 = FUN_009a9880();
                  uStack_18._0_1_ = 0xb1;
                  uStack_25c = CONCAT44(uVar13,0x6d559e);
                  FUN_00988fa0();
                  uStack_18._0_1_ = 0xb2;
                  uStack_25c = CONCAT44(0x6d55b5,(int **)uStack_25c);
                  FUN_00989020();
                  uStack_25c = CONCAT44(0x6d55be,(int **)uStack_25c);
                  FUN_00408ad0();
                  uStack_25c = CONCAT44(0x6d55ca,(int **)uStack_25c);
                  FUN_00408ad0();
                  uStack_18._0_1_ = 0xaf;
                  uStack_25c = CONCAT44(auStack_1d8,0x6d55dc);
                  FUN_009a9740();
                  uStack_18 = (uint)uStack_18._1_3_ << 8;
                  uStack_25c = CONCAT44(0x6d55ec,(int **)uStack_25c);
                  FUN_00408ad0();
                  piVar18 = piStack_224;
                }
                piVar9 = (int *)((int)piVar9 + 1);
              }
              iVar10 = iVar10 + 1;
            } while (iVar10 < (int)piVar18);
          }
        }
        goto LAB_006d714a;
      }
      uStack_25c = CONCAT44(uStack_25c._4_4_,0x6d5892);
      (**(code **)(*param_2 + 0x44))();
      uStack_25c = CONCAT44(0x6d589c,(int **)uStack_25c);
      cVar8 = FUN_0040b360();
      if (cVar8 == '\0') goto LAB_006d714a;
      uStack_25c = CONCAT44(0x6d58b5,(int **)uStack_25c);
      FUN_009885d0();
      uStack_25c = CONCAT44(auStack_1b0,auStack_1d8);
      uStack_18._0_1_ = 0xb9;
      uStack_264 = CONCAT44(0x6d58cd,(undefined4)uStack_264);
      FUN_009a8ee0();
      uStack_18._0_1_ = 0xba;
      uStack_25c = CONCAT44(0x6d58dc,(int **)uStack_25c);
      iVar14 = FUN_00475500();
      uStack_264 = *(undefined8 *)(iVar14 + 0x6c);
      uStack_25c = *(undefined8 *)(iVar14 + 0x74);
      uVar13 = FUN_009a9880();
      uStack_25c = 0xffffffff00000000;
      uStack_18._0_1_ = 0xbb;
      uStack_264 = CONCAT44(uVar13,0x6d5917);
      FUN_00408ed0();
      uStack_25c = CONCAT44(0x6d591e,(int **)uStack_25c);
      FUN_00408ad0();
      uStack_18._0_1_ = 0xb9;
      uStack_25c = CONCAT44(auStack_1d8,0x6d5930);
      FUN_009a9740();
      goto LAB_006d713e;
    }
    uStack_25c = CONCAT44(0x6d5945,(int **)uStack_25c);
    (**(code **)(*param_2 + 0x44))();
    uStack_25c = CONCAT44(0x6d594f,(int **)uStack_25c);
    cVar8 = FUN_0040b360();
    if (cVar8 != '\0') {
      uStack_25c = CONCAT44(0x6d5968,(int **)uStack_25c);
      FUN_009885d0();
      uStack_25c = CONCAT44(auStack_1b0,auStack_1d8);
      uStack_18._0_1_ = 0xbc;
      uStack_264 = CONCAT44(0x6d5980,(undefined4)uStack_264);
      piStack_224 = (int *)FUN_009a8ee0();
      uStack_18._0_1_ = 0xbd;
      uStack_25c = CONCAT44(0x6d5991,(int **)uStack_25c);
      iVar10 = FUN_00475500();
      uStack_264 = *(undefined8 *)(iVar10 + 0x6c);
      uStack_25c = *(undefined8 *)(iVar10 + 0x74);
      uVar13 = FUN_009a9880();
      uStack_25c = 0xffffffff00000000;
      uStack_18._0_1_ = 0xbe;
      uStack_264 = CONCAT44(uVar13,0x6d59ce);
      FUN_00408ed0();
      uStack_25c = CONCAT44(0x6d59d5,(int **)uStack_25c);
      FUN_00408ad0();
      uStack_18._0_1_ = 0xbc;
      uStack_25c = CONCAT44(auStack_1d8,0x6d59e7);
      FUN_009a9740();
      uStack_18._0_1_ = 0;
      uStack_25c = CONCAT44(0x6d59fa,(int **)uStack_25c);
      FUN_00408ad0();
      uStack_25c = CONCAT44(auStack_100,0x6d5a12);
      uVar13 = (**(code **)(**(int **)(*(int *)(iVar14 + 0x84c) + 0x54) + 0x18))();
      uStack_18._0_1_ = 0xbf;
      uStack_25c = CONCAT44(auStack_194,*(undefined4 *)(iVar14 + 0x84c));
      uStack_264 = CONCAT44(0x6d5a30,(undefined4)uStack_264);
      uVar15 = FUN_009790b0();
      uStack_25c = CONCAT44(uVar13,"IDEOLOGY");
      uStack_264 = CONCAT44(uVar15,"PARTY");
      uStack_18._0_1_ = 0xc0;
      FUN_0043ec10(&uStack_21c);
      uStack_25c = CONCAT44(0x6d5a62,(int **)uStack_25c);
      FUN_00408ad0();
      uStack_18._0_1_ = 0xc3;
      uStack_25c = CONCAT44(0x6d5a76,(int **)uStack_25c);
      FUN_00408ad0();
      uStack_25c = CONCAT44(&uStack_21c,auStack_11c);
      uStack_264 = CONCAT44(0x6d5a92,(undefined4)uStack_264);
      uVar13 = FUN_0042c180();
      uStack_25c = 0xffffffff00000000;
      uStack_18._0_1_ = 0xc4;
      uStack_264 = CONCAT44(uVar13,0x6d5aad);
      FUN_00408ed0();
      uStack_18._0_1_ = 0xc3;
      uStack_25c = CONCAT44(0x6d5ac1,(int **)uStack_25c);
      FUN_00408ad0();
      uStack_25c = CONCAT44(auStack_178,*(undefined4 *)(iVar14 + 0x84c));
      uStack_264 = CONCAT44(0x6d5ad5,(undefined4)uStack_264);
      FUN_00978130();
      uStack_18._0_1_ = 0xc5;
      uStack_25c = CONCAT44(0x6d5ae9,(int **)uStack_25c);
      FUN_00989020();
      uStack_25c = CONCAT44(0x6d5af5,(int **)uStack_25c);
      FUN_00408ad0();
      goto LAB_006d713e;
    }
    uStack_25c = CONCAT44(0x6d5b07,(int **)uStack_25c);
    (**(code **)(*param_2 + 0x44))();
    uStack_25c = CONCAT44(0x6d5b11,(int **)uStack_25c);
    cVar8 = FUN_0040b360();
    if (cVar8 != '\0') {
      uStack_25c = CONCAT44(0x6d5b2a,(int **)uStack_25c);
      FUN_009885d0();
      uStack_25c = CONCAT44(auStack_1b0,auStack_1d8);
      uStack_18._0_1_ = 0xc6;
      uStack_264 = CONCAT44(0x6d5b42,(undefined4)uStack_264);
      piStack_224 = (int *)FUN_009a8ee0();
      uStack_18._0_1_ = 199;
      uStack_25c = CONCAT44(0x6d5b53,(int **)uStack_25c);
      iVar10 = FUN_00475500();
      uStack_264 = *(undefined8 *)(iVar10 + 0x6c);
      uStack_25c = *(undefined8 *)(iVar10 + 0x74);
      uVar13 = FUN_009a9880();
      uStack_25c = 0xffffffff00000000;
      uStack_18._0_1_ = 200;
      uStack_264 = CONCAT44(uVar13,0x6d5b90);
      FUN_00408ed0();
      uStack_25c = CONCAT44(0x6d5b97,(int **)uStack_25c);
      FUN_00408ad0();
      uStack_18._0_1_ = 0xc6;
      uStack_25c = CONCAT44(auStack_1d8,0x6d5ba9);
      FUN_009a9740();
      uStack_18._0_1_ = 0;
      uStack_25c = CONCAT44(0x6d5bbc,(int **)uStack_25c);
      FUN_00408ad0();
      uStack_25c = CONCAT44(auStack_194,iVar14);
      uStack_264 = CONCAT44(0x6d5bca,(undefined4)uStack_264);
      uVar13 = FUN_005410d0();
      uStack_25c = 0xffffffff00000000;
      uStack_18._0_1_ = 0xc9;
      uStack_264 = CONCAT44(uVar13,0x6d5be2);
      FUN_00408ed0();
      goto LAB_006d713e;
    }
    uStack_25c = CONCAT44(0x6d5bf7,(int **)uStack_25c);
    (**(code **)(*param_2 + 0x44))();
    uStack_25c = CONCAT44(0x6d5c01,(int **)uStack_25c);
    cVar8 = FUN_0040b360();
    if (cVar8 != '\0') {
      uStack_25c = CONCAT44(auStack_1f4,iVar14);
      uStack_264 = CONCAT44(0x6d5c10,(undefined4)uStack_264);
      uVar13 = FUN_005410d0();
      uStack_18._0_1_ = 0xca;
      goto LAB_006d7131;
    }
    uStack_25c = CONCAT44(0x6d5c2d,(int **)uStack_25c);
    (**(code **)(*param_2 + 0x44))();
    uStack_25c = CONCAT44(0x6d5c37,(int **)uStack_25c);
    cVar8 = FUN_0040b360();
    if (cVar8 != '\0') {
      uStack_25c = CONCAT44(0x6d5c50,(int **)uStack_25c);
      FUN_009885d0();
      uStack_25c = CONCAT44(auStack_1b0,auStack_1d8);
      uStack_18._0_1_ = 0xcb;
      uStack_264 = CONCAT44(0x6d5c68,(undefined4)uStack_264);
      FUN_009a8ee0();
      uStack_18._0_1_ = 0xcc;
      uStack_25c = CONCAT44(0x6d5c77,(int **)uStack_25c);
      iVar14 = FUN_00475500();
      uStack_264 = *(undefined8 *)(iVar14 + 0x6c);
      uStack_25c = *(undefined8 *)(iVar14 + 0x74);
      uVar13 = FUN_009a9880();
      uStack_25c = 0xffffffff00000000;
      uStack_18._0_1_ = 0xcd;
      uStack_264 = CONCAT44(uVar13,0x6d5cb2);
      FUN_00408ed0();
      uStack_25c = CONCAT44(0x6d5cb9,(int **)uStack_25c);
      FUN_00408ad0();
      uStack_18._0_1_ = 0xcb;
      uStack_25c = CONCAT44(auStack_1d8,0x6d5ccb);
      FUN_009a9740();
      goto LAB_006d713e;
    }
    uStack_25c = CONCAT44(0x6d5ce0,(int **)uStack_25c);
    (**(code **)(*param_2 + 0x44))();
    uStack_25c = CONCAT44(0x6d5cea,(int **)uStack_25c);
    cVar8 = FUN_0040b360();
    if (cVar8 != '\0') {
      uStack_25c = CONCAT44(auStack_1f4,iVar14);
      uStack_264 = CONCAT44(0x6d5cf9,(undefined4)uStack_264);
      uVar13 = FUN_0051e410();
      uStack_18._0_1_ = 0xce;
      goto LAB_006d7131;
    }
    uStack_25c = CONCAT44(0x6d5d16,(int **)uStack_25c);
    (**(code **)(*param_2 + 0x44))();
    uStack_25c = CONCAT44(0x6d5d20,(int **)uStack_25c);
    cVar8 = FUN_0040b360();
    if (cVar8 != '\0') {
      uStack_25c = CONCAT44(0x6d5d39,(int **)uStack_25c);
      FUN_009885d0();
      uStack_25c = CONCAT44(auStack_1b0,auStack_1d8);
      uStack_18._0_1_ = 0xcf;
      uStack_264 = CONCAT44(0x6d5d51,(undefined4)uStack_264);
      FUN_009a8ee0();
      uStack_18._0_1_ = 0xd0;
      uStack_25c = CONCAT44(0x6d5d60,(int **)uStack_25c);
      iVar14 = FUN_00475500();
      uStack_264 = *(undefined8 *)(iVar14 + 0x6c);
      uStack_25c = *(undefined8 *)(iVar14 + 0x74);
      uVar13 = FUN_009a9880();
      uStack_25c = 0xffffffff00000000;
      uStack_18._0_1_ = 0xd1;
      uStack_264 = CONCAT44(uVar13,0x6d5d9b);
      FUN_00408ed0();
      uStack_25c = CONCAT44(0x6d5da2,(int **)uStack_25c);
      FUN_00408ad0();
      uStack_18._0_1_ = 0xcf;
      uStack_25c = CONCAT44(auStack_1d8,0x6d5db4);
      FUN_009a9740();
      goto LAB_006d713e;
    }
    uStack_25c = CONCAT44(0x6d5dc9,(int **)uStack_25c);
    (**(code **)(*param_2 + 0x44))();
    uStack_25c = CONCAT44(0x6d5dd3,(int **)uStack_25c);
    cVar8 = FUN_0040b360();
    if (cVar8 != '\0') {
      uStack_25c = CONCAT44(0x6d5dec,(int **)uStack_25c);
      FUN_009885d0();
      uStack_25c = CONCAT44(auStack_1b0,auStack_1d8);
      uStack_18._0_1_ = 0xd2;
      uStack_264 = CONCAT44(0x6d5e04,(undefined4)uStack_264);
      FUN_009a8ee0();
      uStack_18._0_1_ = 0xd3;
      uStack_25c = CONCAT44(0x6d5e13,(int **)uStack_25c);
      iVar14 = FUN_00475500();
      uStack_264 = *(undefined8 *)(iVar14 + 0x6c);
      uStack_25c = *(undefined8 *)(iVar14 + 0x74);
      uVar13 = FUN_009a9880();
      uStack_25c = 0xffffffff00000000;
      uStack_18._0_1_ = 0xd4;
      uStack_264 = CONCAT44(uVar13,0x6d5e4e);
      FUN_00408ed0();
      uStack_25c = CONCAT44(0x6d5e55,(int **)uStack_25c);
      FUN_00408ad0();
      uStack_18._0_1_ = 0xd2;
      uStack_25c = CONCAT44(auStack_1d8,0x6d5e67);
      FUN_009a9740();
      goto LAB_006d713e;
    }
    uStack_25c = CONCAT44(0x6d5e7c,(int **)uStack_25c);
    (**(code **)(*param_2 + 0x44))();
    uStack_25c = CONCAT44(0x6d5e86,(int **)uStack_25c);
    cVar8 = FUN_0040b360();
    if (cVar8 != '\0') {
      uStack_25c = CONCAT44(0x6d5e9f,(int **)uStack_25c);
      FUN_009885d0();
      uStack_25c = CONCAT44(auStack_1b0,auStack_1d8);
      uStack_18._0_1_ = 0xd5;
      uStack_264 = CONCAT44(0x6d5eb7,(undefined4)uStack_264);
      FUN_009a8ee0();
      uStack_18._0_1_ = 0xd6;
      uStack_25c = CONCAT44(0x6d5ec6,(int **)uStack_25c);
      iVar14 = FUN_00475500();
      uStack_264 = *(undefined8 *)(iVar14 + 0x6c);
      uStack_25c = *(undefined8 *)(iVar14 + 0x74);
      uVar13 = FUN_009a9880();
      uStack_25c = 0xffffffff00000000;
      uStack_18._0_1_ = 0xd7;
      uStack_264 = CONCAT44(uVar13,0x6d5f01);
      FUN_00408ed0();
      uStack_25c = CONCAT44(0x6d5f08,(int **)uStack_25c);
      FUN_00408ad0();
      uStack_18._0_1_ = 0xd5;
      uStack_25c = CONCAT44(auStack_1d8,0x6d5f1a);
      FUN_009a9740();
      goto LAB_006d713e;
    }
    uStack_25c = CONCAT44(0x6d5f2f,(int **)uStack_25c);
    (**(code **)(*param_2 + 0x44))();
    uStack_25c = CONCAT44(0x6d5f39,(int **)uStack_25c);
    cVar8 = FUN_0040b360();
    if (cVar8 != '\0') {
LAB_006d6bf2:
      uStack_25c = CONCAT44(0x6d6c03,(int **)uStack_25c);
      FUN_009885d0();
      uStack_18._0_1_ = 0xd8;
      uStack_25c = CONCAT44(0x6d6c1c,(int **)uStack_25c);
      FUN_009885d0();
      uStack_25c = CONCAT44(auStack_178,&uStack_21c);
      uStack_18._0_1_ = 0xd9;
      uStack_264 = CONCAT44(0x6d6c31,(undefined4)uStack_264);
      FUN_009a8ee0();
      uStack_18._0_1_ = 0xda;
      uStack_25c = CONCAT44(0x6d6c40,(int **)uStack_25c);
      iVar14 = FUN_00475500();
      uStack_264 = *(undefined8 *)(iVar14 + 0x6c);
      uStack_25c = *(undefined8 *)(iVar14 + 0x74);
      uVar13 = FUN_009a9880();
      uStack_18._0_1_ = 0xdb;
      uStack_25c = CONCAT44(uVar13,0x6d6c80);
      FUN_00988fa0();
      uStack_18._0_1_ = 0xdc;
      uStack_25c = CONCAT44(auStack_1b0,0x6d6c9e);
      uVar13 = FUN_00988f20();
      uStack_25c = 0xffffffff00000000;
      uStack_18._0_1_ = 0xdd;
      uStack_264 = CONCAT44(uVar13,0x6d6cb6);
      FUN_00408ed0();
      uStack_25c = CONCAT44(0x6d6cbd,(int **)uStack_25c);
      FUN_00408ad0();
      uStack_25c = CONCAT44(0x6d6cc9,(int **)uStack_25c);
      FUN_00408ad0();
      uStack_25c = CONCAT44(0x6d6cd5,(int **)uStack_25c);
      FUN_00408ad0();
      uStack_18._0_1_ = 0xd9;
      uStack_25c = CONCAT44(&uStack_21c,0x6d6ce7);
      FUN_009a9740();
      uStack_25c = CONCAT44(0x6d6cf3,(int **)uStack_25c);
      FUN_00408ad0();
      uStack_18._0_1_ = 0;
      uStack_25c = CONCAT44(0x6d6d06,(int **)uStack_25c);
      FUN_00408ad0();
      uStack_25c = CONCAT44(0x6d6d14,(int **)uStack_25c);
      FUN_009885d0();
      uStack_25c = CONCAT44(auStack_1d8,&uStack_21c);
      uStack_18._0_1_ = 0xde;
      uStack_264 = CONCAT44(0x6d6d29,(undefined4)uStack_264);
      FUN_009a8ee0();
      uStack_18._0_1_ = 0xdf;
      uStack_25c = CONCAT44(0x6d6d38,(int **)uStack_25c);
      iVar14 = FUN_00475500();
      uStack_264 = *(undefined8 *)(iVar14 + 0x6c);
      uStack_25c = *(undefined8 *)(iVar14 + 0x74);
      uVar13 = FUN_009a9880();
      uStack_25c = 0xffffffff00000000;
      uStack_18._0_1_ = 0xe0;
      uStack_264 = CONCAT44(uVar13,0x6d6d73);
      FUN_00408ed0();
      uStack_25c = CONCAT44(0x6d6d7a,(int **)uStack_25c);
      FUN_00408ad0();
      uStack_18._0_1_ = 0xde;
      uStack_25c = CONCAT44(&uStack_21c,0x6d6d8c);
      FUN_009a9740();
      goto LAB_006d713e;
    }
    uStack_25c = CONCAT44(0x6d5f4a,(int **)uStack_25c);
    (**(code **)(*param_2 + 0x44))();
    uStack_25c = CONCAT44(0x6d5f54,(int **)uStack_25c);
    cVar8 = FUN_0040b360();
    if (cVar8 != '\0') goto LAB_006d6bf2;
    uStack_25c = CONCAT44(0x6d5f65,(int **)uStack_25c);
    (**(code **)(*param_2 + 0x44))();
    uStack_25c = CONCAT44(0x6d5f6f,(int **)uStack_25c);
    cVar8 = FUN_0040b360();
    if (cVar8 != '\0') {
LAB_006d688a:
      uStack_25c = CONCAT44(0x6d689b,(int **)uStack_25c);
      FUN_009885d0();
      uStack_18._0_1_ = 0xe1;
      uStack_25c = CONCAT44(0x6d68b4,(int **)uStack_25c);
      FUN_009885d0();
      uStack_25c = CONCAT44(auStack_178,&uStack_21c);
      uStack_18._0_1_ = 0xe2;
      uStack_264 = CONCAT44(0x6d68c9,(undefined4)uStack_264);
      FUN_009a8ee0();
      uStack_18._0_1_ = 0xe3;
      uStack_25c = CONCAT44(0x6d68d8,(int **)uStack_25c);
      iVar14 = FUN_00475500();
      uStack_264 = *(undefined8 *)(iVar14 + 0x6c);
      uStack_25c = *(undefined8 *)(iVar14 + 0x74);
      uVar13 = FUN_009a9880();
      uStack_18._0_1_ = 0xe4;
      uStack_25c = CONCAT44(uVar13,0x6d6918);
      FUN_00988fa0();
      uStack_18._0_1_ = 0xe5;
      uStack_25c = CONCAT44(auStack_1b0,0x6d6936);
      FUN_00988f20();
      uStack_18._0_1_ = 0xe6;
      uStack_25c = CONCAT44(0x6d694a,(int **)uStack_25c);
      FUN_00989020();
      uStack_25c = CONCAT44(0x6d6953,(int **)uStack_25c);
      FUN_00408ad0();
      uStack_25c = CONCAT44(0x6d695f,(int **)uStack_25c);
      FUN_00408ad0();
      uStack_25c = CONCAT44(0x6d696b,(int **)uStack_25c);
      FUN_00408ad0();
      uStack_18._0_1_ = 0xe2;
      uStack_25c = CONCAT44(&uStack_21c,0x6d697d);
      FUN_009a9740();
      uStack_25c = CONCAT44(0x6d6989,(int **)uStack_25c);
      FUN_00408ad0();
      uStack_18._0_1_ = 0;
      uStack_25c = CONCAT44(0x6d699c,(int **)uStack_25c);
      FUN_00408ad0();
      dStack_15c = (double)CONCAT44(dStack_15c._4_4_,*(undefined4 *)(DAT_012588e8 + 0xb5c));
      uStack_25c = CONCAT44(0x6d69c9,(int **)uStack_25c);
      FUN_00508530();
      uStack_25c = CONCAT44(0x6d69d7,(int **)uStack_25c);
      FUN_009885d0();
      uStack_18._0_1_ = 0xe7;
      uStack_25c = CONCAT44(0x6d69fd,(int **)uStack_25c);
      FUN_009885d0();
      uStack_18._0_1_ = 0xe8;
      uStack_25c = CONCAT44(0x6d6a16,(int **)uStack_25c);
      FUN_009885d0();
      puStack_1bc = (undefined1 *)&uStack_25c;
      uStack_18._0_1_ = 0xe9;
      uStack_25c = CONCAT44(2,piStack_224);
      uStack_264 = CONCAT44(&uStack_13c,0x6d6a39);
      uVar13 = FUN_00988a50();
      uStack_25c = CONCAT44(auStack_178,&uStack_21c);
      uStack_18._0_1_ = 0xea;
      uStack_264 = CONCAT44(0x6d6a50,(undefined4)uStack_264);
      piStack_224 = (int *)FUN_009a8ee0();
      uStack_18._0_1_ = 0xeb;
      uStack_25c = CONCAT44(0x6d6a61,(int **)uStack_25c);
      iVar14 = FUN_00475500();
      uStack_264 = *(undefined8 *)(iVar14 + 0x6c);
      uStack_25c = *(undefined8 *)(iVar14 + 0x74);
      FUN_009a9880();
      uStack_18._0_1_ = 0xec;
      uStack_25c = CONCAT44(auStack_1b0,0x6d6aa7);
      FUN_00988f20();
      uStack_18._0_1_ = 0xed;
      uStack_25c = CONCAT44(uVar13,0x6d6abe);
      FUN_00988f20();
      uStack_18._0_1_ = 0xee;
      uStack_25c = CONCAT44(auStack_1d8,0x6d6ad6);
      FUN_00988f20();
      uStack_18._0_1_ = 0xef;
      uStack_25c = CONCAT44(0x6d6aea,(int **)uStack_25c);
      FUN_00989020();
      uStack_25c = CONCAT44(0x6d6af3,(int **)uStack_25c);
      FUN_00408ad0();
      uStack_25c = CONCAT44(0x6d6aff,(int **)uStack_25c);
      FUN_00408ad0();
      uStack_25c = CONCAT44(0x6d6b0b,(int **)uStack_25c);
      FUN_00408ad0();
      uStack_25c = CONCAT44(0x6d6b17,(int **)uStack_25c);
      FUN_00408ad0();
      uStack_18._0_1_ = 0xea;
      uStack_25c = CONCAT44(&uStack_21c,0x6d6b29);
      FUN_009a9740();
      uStack_25c = CONCAT44(0x6d6b35,(int **)uStack_25c);
      FUN_00408ad0();
      uStack_25c = CONCAT44(0x6d6b41,(int **)uStack_25c);
      FUN_00408ad0();
      uStack_25c = CONCAT44(0x6d6b4d,(int **)uStack_25c);
      FUN_00408ad0();
      uStack_18._0_1_ = 0;
      uStack_25c = CONCAT44(0x6d6b5d,(int **)uStack_25c);
      FUN_00408ad0();
      uStack_25c = CONCAT44(0x6d6b6e,(int **)uStack_25c);
      FUN_009885d0();
      uStack_25c = CONCAT44(&dStack_15c,&uStack_21c);
      uStack_18._0_1_ = 0xf0;
      uStack_264 = CONCAT44(0x6d6b83,(undefined4)uStack_264);
      FUN_009a8ee0();
      uStack_18._0_1_ = 0xf1;
      uStack_25c = CONCAT44(0x6d6b92,(int **)uStack_25c);
      iVar14 = FUN_00475500();
      uStack_264 = *(undefined8 *)(iVar14 + 0x6c);
      uStack_25c = *(undefined8 *)(iVar14 + 0x74);
      uVar13 = FUN_009a9880();
      uStack_25c = 0xffffffff00000000;
      uStack_18._0_1_ = 0xf2;
      uStack_264 = CONCAT44(uVar13,0x6d6bcd);
      FUN_00408ed0();
      uStack_25c = CONCAT44(0x6d6bd4,(int **)uStack_25c);
      FUN_00408ad0();
      uStack_18._0_1_ = 0xf0;
      uStack_25c = CONCAT44(&uStack_21c,0x6d6be6);
      FUN_009a9740();
      goto LAB_006d713e;
    }
    uStack_25c = CONCAT44(0x6d5f80,(int **)uStack_25c);
    (**(code **)(*param_2 + 0x44))();
    uStack_25c = CONCAT44(0x6d5f8a,(int **)uStack_25c);
    cVar8 = FUN_0040b360();
    if (cVar8 != '\0') goto LAB_006d688a;
    uStack_25c = CONCAT44(0x6d5f9b,(int **)uStack_25c);
    (**(code **)(*param_2 + 0x44))();
    uStack_25c = CONCAT44(0x6d5fa5,(int **)uStack_25c);
    cVar8 = FUN_0040b360();
    if (cVar8 != '\0') {
      piStack_224 = (int *)(DAT_01258a48 + 0x18);
      iVar14 = *(int *)(DAT_01258a48 + 0x1c) - *(int *)(DAT_01258a48 + 0x18) >> 2;
      local_1fc = 0;
      iStack_1f8 = 0;
      bVar2 = false;
      piStack_23c = (int *)0x0;
      if (iVar14 < 1) {
LAB_006d5fde:
        uStack_25c = CONCAT44(0x6d5fef,(int **)uStack_25c);
        FUN_009885d0();
        uStack_18 = 0xf6;
        uStack_25c = CONCAT44(auStack_1b0,auStack_1d8);
        uStack_264 = CONCAT44(0x6d6012,(undefined4)uStack_264);
        FUN_009a8ee0();
        uStack_18 = 0xf7;
        uStack_25c = CONCAT44(0x6d602c,(int **)uStack_25c);
        iVar14 = FUN_00475500();
        uStack_264 = *(undefined8 *)(iVar14 + 0x6c);
        uStack_25c = *(undefined8 *)(iVar14 + 0x74);
        uVar13 = FUN_009a9880();
        uStack_18 = 0xf8;
        bVar7 = false;
        bVar6 = false;
        bVar5 = false;
        bVar4 = true;
        bVar3 = true;
        bVar2 = true;
      }
      else {
        do {
          piVar9 = (int *)(*piStack_224 + (int)piStack_23c * 4);
          if (*(int *)(*(int *)(*piVar9 + 0x54) + 0x5c) == 3) {
            iVar10 = *piVar9;
            uStack_25c = CONCAT44(iVar10,*(undefined4 *)(iVar10 + 0x54));
            uStack_264 = CONCAT44(piStack_238,0x6d627b);
            cStack_1fd = FUN_00525a20();
            uStack_25c = 0;
            puStack_1bc = (undefined1 *)&uStack_264;
            uStack_264 = CONCAT44(iStack_1f8,local_1fc);
            piVar9 = (int *)FUN_004730d0();
            local_1fc = *piVar9;
            iStack_1f8 = piVar9[1];
            if ((bVar2) || (bVar2 = false, cStack_1fd != '\0')) {
              bVar2 = true;
            }
          }
          piStack_23c = (int *)((int)piStack_23c + 1);
        } while ((int)piStack_23c < iVar14);
        if (!bVar2) goto LAB_006d5fde;
        uStack_25c = CONCAT44(0x6d630b,(int **)uStack_25c);
        FUN_009885d0();
        uStack_18 = CONCAT31(uStack_18._1_3_,0xf3);
        uStack_25c = CONCAT44(&uStack_21c,&dStack_15c);
        uStack_264 = CONCAT44(0x6d632b,(undefined4)uStack_264);
        FUN_009a8ee0();
        uStack_18 = 0xf4;
        uStack_25c = CONCAT44(0x6d6345,(int **)uStack_25c);
        iVar14 = FUN_00475500();
        uStack_264 = *(undefined8 *)(iVar14 + 0x6c);
        uStack_25c = *(undefined8 *)(iVar14 + 0x74);
        uVar13 = FUN_009a9880();
        uStack_18 = 0xf5;
        bVar7 = true;
        bVar6 = true;
        bVar5 = true;
        bVar4 = false;
        bVar3 = false;
        bVar2 = false;
      }
      uStack_25c = 0xffffffff00000000;
      uStack_264 = CONCAT44(uVar13,0x6d6072);
      FUN_00408ed0();
      if (bVar2) {
        uStack_25c = CONCAT44(0x6d6087,(int **)uStack_25c);
        FUN_00408ad0();
      }
      uStack_18 = 0xf6;
      if (bVar3) {
        uStack_25c = CONCAT44(auStack_1d8,0x6d60a8);
        FUN_009a9740();
      }
      if (bVar4) {
        uStack_25c = CONCAT44(0x6d60c0,(int **)uStack_25c);
        FUN_00408ad0();
      }
      if (bVar5) {
        uStack_25c = CONCAT44(0x6d60d8,(int **)uStack_25c);
        FUN_00408ad0();
      }
      uStack_18 = 0xf3;
      if (bVar6) {
        uStack_25c = CONCAT44(&dStack_15c,0x6d60fc);
        FUN_009a9740();
      }
      uStack_18 = 0;
      if (bVar7) {
        uStack_25c = CONCAT44(0x6d6113,(int **)uStack_25c);
        FUN_00408ad0();
      }
      uStack_25c = CONCAT44(0x6d6124,(int **)uStack_25c);
      FUN_00989030();
      uStack_25c = CONCAT44(0x6d6135,(int **)uStack_25c);
      uVar13 = FUN_009885d0();
      puStack_1bc = (undefined1 *)&uStack_25c;
      uStack_18._0_1_ = 0xf9;
      uStack_13c = 0x320000;
      uStack_138 = 0;
      uStack_264 = CONCAT44(0x6d616d,(undefined4)uStack_264);
      FUN_0043a6a0();
      uStack_264 = CONCAT44(2,auStack_178);
      piStack_224 = (int *)FUN_00988bb0();
      uStack_18._0_1_ = 0xfa;
      uStack_25c = CONCAT44(0x6d6199,(int **)uStack_25c);
      FUN_009885d0();
      uStack_18._0_1_ = 0xfb;
      uStack_25c = CONCAT44(piStack_224,0x6d61b4);
      FUN_00988f20();
      uStack_18._0_1_ = 0xfc;
      uStack_25c = CONCAT44(uVar13,0x6d61cb);
      uVar13 = FUN_00988f20();
      uStack_25c = CONCAT44(uVar13,auStack_1f4);
      uStack_18._0_1_ = 0xfd;
      uStack_264 = CONCAT44(0x6d61e8,(undefined4)uStack_264);
      FUN_0042c180();
      uStack_18._0_1_ = 0xfe;
      uStack_25c = CONCAT44(0x6d61ff,(int **)uStack_25c);
      FUN_00989020();
      uStack_25c = CONCAT44(0x6d6208,(int **)uStack_25c);
      FUN_00408ad0();
      uStack_25c = CONCAT44(0x6d6214,(int **)uStack_25c);
      FUN_00408ad0();
      uStack_25c = CONCAT44(0x6d6220,(int **)uStack_25c);
      FUN_00408ad0();
      uStack_25c = CONCAT44(0x6d622c,(int **)uStack_25c);
      FUN_00408ad0();
      uStack_25c = CONCAT44(0x6d6238,(int **)uStack_25c);
      FUN_00408ad0();
      goto LAB_006d713e;
    }
    uStack_25c = CONCAT44(0x6d638c,(int **)uStack_25c);
    (**(code **)(*param_2 + 0x44))();
    uStack_25c = CONCAT44(0x6d6396,(int **)uStack_25c);
    cVar8 = FUN_0040b360();
    if (cVar8 == '\0') {
      uStack_25c = CONCAT44(0x6d67c5,(int **)uStack_25c);
      (**(code **)(*param_2 + 0x44))();
      uStack_25c = CONCAT44(0x6d67cf,(int **)uStack_25c);
      cVar8 = FUN_0040b360();
      if (cVar8 == '\0') goto LAB_006d714a;
      uStack_25c = *(undefined8 *)(iVar14 + 0x1c);
      uStack_264._4_4_ = (int **)auStack_194;
      uStack_264._0_4_ = 0x6d67f4;
      uStack_264._0_4_ = (**(code **)(**(int **)(iVar14 + 0x12b0) + 0x30))();
      uStack_24 = 0x10b;
      uVar13 = FUN_0042c180(&local_200);
      uStack_264._0_4_ = 0xffffffff;
      uStack_24 = CONCAT31(uStack_24._1_3_,0xc);
      FUN_00408ed0(uVar13,0);
      uStack_264._0_4_ = 0x6d6838;
      FUN_00408ad0();
      uStack_24 = 0;
      uStack_264._0_4_ = 0x6d684b;
      FUN_00408ad0();
      uStack_264 = CONCAT44(uStack_264._4_4_,auStack_10c);
      (**(code **)(**(int **)(iVar14 + 0x12b0) + 0x1c))();
      uStack_18 = 0x10d;
      uStack_25c = CONCAT44(0x6d6877,(int **)uStack_25c);
      FUN_00989020();
      uStack_18 = 0;
    }
    else {
      piStack_224 = (int *)(DAT_01258a48 + 0x18);
      iVar14 = *(int *)(DAT_01258a48 + 0x1c) - *(int *)(DAT_01258a48 + 0x18) >> 2;
      local_1fc = 0;
      iStack_1f8 = 0;
      bVar2 = false;
      piStack_23c = (int *)0x0;
      if (iVar14 < 1) {
LAB_006d63cf:
        uStack_25c = CONCAT44(0x6d63e0,(int **)uStack_25c);
        FUN_009885d0();
        uStack_18 = 0x102;
        uStack_25c = CONCAT44(auStack_1b0,auStack_1d8);
        uStack_264 = CONCAT44(0x6d6403,(undefined4)uStack_264);
        FUN_009a8ee0();
        uStack_18 = 0x103;
        uStack_25c = CONCAT44(0x6d641d,(int **)uStack_25c);
        FUN_00475500();
        uStack_25c = CONCAT44(0x6d642b,(int **)uStack_25c);
        puVar17 = (undefined8 *)FUN_0040b440();
        uStack_264 = *puVar17;
        uStack_25c = puVar17[1];
        uVar13 = FUN_009a9880();
        uStack_18 = 0x104;
        bVar7 = false;
        bVar6 = false;
        bVar5 = false;
        bVar4 = true;
        bVar3 = true;
        bVar2 = true;
      }
      else {
        do {
          piVar9 = (int *)(*piStack_224 + (int)piStack_23c * 4);
          if (*(int *)(*(int *)(*piVar9 + 0x54) + 0x5c) == 2) {
            iVar10 = *piVar9;
            uStack_25c = CONCAT44(iVar10,*(undefined4 *)(iVar10 + 0x54));
            uStack_264 = CONCAT44(piStack_238,0x6d66a7);
            cStack_1fd = FUN_00525be0();
            uStack_25c = 0;
            puStack_1bc = (undefined1 *)&uStack_264;
            uStack_264 = CONCAT44(iStack_1f8,local_1fc);
            piVar9 = (int *)FUN_004730d0();
            local_1fc = *piVar9;
            iStack_1f8 = piVar9[1];
            if ((bVar2) || (bVar2 = false, cStack_1fd != '\0')) {
              bVar2 = true;
            }
          }
          piStack_23c = (int *)((int)piStack_23c + 1);
        } while ((int)piStack_23c < iVar14);
        if (!bVar2) goto LAB_006d63cf;
        uStack_25c = CONCAT44(0x6d673a,(int **)uStack_25c);
        FUN_009885d0();
        uStack_18 = CONCAT31(uStack_18._1_3_,0xff);
        uStack_25c = CONCAT44(auStack_178,&uStack_21c);
        uStack_264 = CONCAT44(0x6d6757,(undefined4)uStack_264);
        FUN_009a8ee0();
        uStack_18 = 0x100;
        uStack_25c = CONCAT44(0x6d6771,(int **)uStack_25c);
        FUN_00475500();
        uStack_25c = CONCAT44(0x6d677f,(int **)uStack_25c);
        puVar17 = (undefined8 *)FUN_0040b440();
        uStack_264 = *puVar17;
        uStack_25c = puVar17[1];
        uVar13 = FUN_009a9880();
        uStack_18 = 0x101;
        bVar7 = true;
        bVar6 = true;
        bVar5 = true;
        bVar4 = false;
        bVar3 = false;
        bVar2 = false;
      }
      uStack_25c = 0xffffffff00000000;
      uStack_264 = CONCAT44(uVar13,0x6d6470);
      FUN_00408ed0();
      if (bVar2) {
        uStack_25c = CONCAT44(0x6d648b,(int **)uStack_25c);
        FUN_00408ad0();
      }
      uStack_18 = 0x102;
      if (bVar3) {
        uStack_25c = CONCAT44(auStack_1d8,0x6d64b2);
        FUN_009a9740();
      }
      if (bVar4) {
        uStack_25c = CONCAT44(0x6d64d0,(int **)uStack_25c);
        FUN_00408ad0();
      }
      if (bVar5) {
        uStack_25c = CONCAT44(0x6d64ee,(int **)uStack_25c);
        FUN_00408ad0();
      }
      uStack_18 = 0xff;
      if (bVar6) {
        uStack_25c = CONCAT44(&uStack_21c,0x6d6515);
        FUN_009a9740();
      }
      uStack_18 = 0;
      if (bVar7) {
        uStack_25c = CONCAT44(0x6d652f,(int **)uStack_25c);
        FUN_00408ad0();
      }
      uStack_25c = CONCAT44(0x6d6540,(int **)uStack_25c);
      FUN_00989030();
      uStack_25c = CONCAT44(0x6d6551,(int **)uStack_25c);
      uVar13 = FUN_009885d0();
      puStack_1bc = (undefined1 *)&uStack_25c;
      uStack_18 = 0x105;
      uStack_13c = 0x320000;
      uStack_138 = 0;
      uStack_264 = CONCAT44(0x6d658c,(undefined4)uStack_264);
      FUN_0043a6a0();
      uStack_264 = CONCAT44(2,auStack_178);
      piStack_224 = (int *)FUN_00988bb0();
      uStack_18._0_1_ = 6;
      uStack_25c = CONCAT44(0x6d65b8,(int **)uStack_25c);
      FUN_009885d0();
      uStack_18._0_1_ = 7;
      uStack_25c = CONCAT44(piStack_224,0x6d65d3);
      FUN_00988f20();
      uStack_18._0_1_ = 8;
      uStack_25c = CONCAT44(uVar13,0x6d65ea);
      uVar13 = FUN_00988f20();
      uStack_25c = CONCAT44(uVar13,auStack_1f4);
      uStack_18._0_1_ = 9;
      uStack_264 = CONCAT44(0x6d6607,(undefined4)uStack_264);
      FUN_0042c180();
      uStack_18 = CONCAT31(uStack_18._1_3_,10);
      uStack_25c = CONCAT44(0x6d661e,(int **)uStack_25c);
      FUN_00989020();
      uStack_25c = CONCAT44(0x6d6627,(int **)uStack_25c);
      FUN_00408ad0();
      uStack_25c = CONCAT44(0x6d6633,(int **)uStack_25c);
      FUN_00408ad0();
      uStack_25c = CONCAT44(0x6d663f,(int **)uStack_25c);
      FUN_00408ad0();
      uStack_25c = CONCAT44(0x6d664b,(int **)uStack_25c);
      FUN_00408ad0();
      uStack_25c = CONCAT44(0x6d6657,(int **)uStack_25c);
      FUN_00408ad0();
      uStack_18 = 0;
    }
  }
  else {
LAB_006d700d:
    uStack_25c = CONCAT44(0x6d701e,(int **)uStack_25c);
    FUN_009885d0();
    puStack_1bc = (undefined1 *)&uStack_25c;
    uStack_25c = (ulonglong)extraout_ECX_00;
    uStack_18._0_1_ = 0x28;
    uStack_264 = CONCAT44(extraout_ECX_00,&uStack_25c);
    FUN_00543470(iVar14);
    uStack_264 = CONCAT44(auStack_100,0x6d704e);
    local_1fc = FUN_009c8c30();
    uStack_25c = CONCAT44(auStack_178,&uStack_21c);
    uStack_18._0_1_ = 0x29;
    uStack_264 = CONCAT44(0x6d706a,(undefined4)uStack_264);
    piStack_224 = (int *)FUN_009a8ee0();
    uStack_18._0_1_ = 0x2a;
    uStack_25c = CONCAT44(0x6d707b,(int **)uStack_25c);
    iVar10 = FUN_00475500();
    uStack_264 = *(undefined8 *)(iVar10 + 0x6c);
    uStack_25c = *(undefined8 *)(iVar10 + 0x74);
    FUN_009a9880();
    uStack_18._0_1_ = 0x2b;
    uStack_25c = CONCAT44(local_1fc,0x6d70bb);
    uVar13 = FUN_00988f20();
    uStack_25c = 0xffffffff00000000;
    uStack_18._0_1_ = 0x2c;
    uStack_264 = CONCAT44(uVar13,0x6d70d3);
    FUN_00408ed0();
    uStack_25c = CONCAT44(0x6d70da,(int **)uStack_25c);
    FUN_00408ad0();
    uStack_25c = CONCAT44(0x6d70e6,(int **)uStack_25c);
    FUN_00408ad0();
    uStack_18._0_1_ = 0x29;
    uStack_25c = CONCAT44(&uStack_21c,0x6d70f8);
    FUN_009a9740();
    uStack_25c = CONCAT44(0x6d7104,(int **)uStack_25c);
    FUN_00408ad0();
    uStack_18._0_1_ = 0;
    uStack_25c = CONCAT44(0x6d7117,(int **)uStack_25c);
    FUN_00408ad0();
    uStack_25c = CONCAT44(auStack_1f4,iVar14);
    uStack_264 = CONCAT44(0x6d7122,(undefined4)uStack_264);
    uVar13 = FUN_005435d0();
    uStack_18._0_1_ = 0x2d;
LAB_006d7131:
    uStack_25c = 0xffffffff00000000;
    uStack_264 = CONCAT44(uVar13,0x6d713a);
    FUN_00408ed0();
LAB_006d713e:
    uStack_18 = (uint)uStack_18._1_3_ << 8;
  }
  uStack_25c = CONCAT44(0x6d714a,(int **)uStack_25c);
  FUN_00408ad0();
LAB_006d714a:
  uStack_25c = CONCAT44(param_1,0x6d715a);
  FUN_0040c830();
LAB_006d715a:
  uStack_25c = CONCAT44(0x6d7166,(int **)uStack_25c);
  FUN_00459820();
  ExceptionList = pvStack_20;
  return param_1;
}

