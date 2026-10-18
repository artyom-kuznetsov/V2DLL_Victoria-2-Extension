// FUN_00654d80 @ 00654d80  (requested 006557C4, first bytes: 55 8B EC 83 E4 F8 6A FF)


/* WARNING: Removing unreachable block (ram,0x0065759f) */
/* WARNING: Removing unreachable block (ram,0x00657372) */

void FUN_00654d80(uint param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  short sVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  code *pcVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  char *pcVar12;
  float fVar13;
  undefined4 uVar14;
  undefined1 *puVar15;
  uint *puVar16;
  int *in_ECX;
  undefined4 extraout_ECX;
  uint unaff_EBX;
  uint unaff_ESI;
  uint unaff_EDI;
  bool bVar17;
  float10 fVar18;
  undefined1 auStack_2d8 [16];
  undefined4 uStack_2c8;
  char *pcStack_2c4;
  undefined4 uStack_2c0;
  undefined1 auStack_2bc [16];
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined *puStack_298;
  uint *puStack_294;
  undefined1 **ppuStack_290;
  uint *puStack_28c;
  uint *puStack_288;
  char *pcStack_284;
  int iStack_280;
  undefined4 uStack_27c;
  undefined4 *puStack_278;
  undefined4 uStack_274;
  uint *puStack_270;
  undefined4 uStack_26c;
  undefined1 *puStack_268;
  undefined4 uStack_264;
  undefined8 uStack_260;
  uint uVar19;
  uint5 uStack_258;
  undefined4 uStack_254;
  float *pfStack_250;
  undefined4 uStack_24c;
  uint uVar20;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 local_234;
  uint *puStack_230;
  float fStack_22c;
  uint uStack_228;
  uint uStack_224;
  uint uStack_220;
  uint uStack_21c;
  uint uStack_218;
  uint uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_204;
  undefined1 *puStack_200;
  float fStack_1fc;
  double dStack_1f8;
  uint uStack_1f0;
  undefined4 uStack_1ec;
  uint uStack_1e8;
  undefined4 uStack_1e4;
  uint *puStack_1e0;
  undefined1 *puStack_1dc;
  undefined1 *puStack_1d8;
  undefined1 *puStack_1d4;
  int iStack_1d0;
  uint uStack_1cc;
  undefined4 uStack_1c8;
  undefined1 uStack_1c4;
  undefined4 uStack_1c0;
  uint uStack_1bc;
  undefined1 auStack_1b4 [4];
  int iStack_1b0;
  uint uStack_1ac;
  uint uStack_1a8;
  uint uStack_1a0;
  undefined4 uStack_190;
  uint uStack_18c;
  uint auStack_184 [4];
  undefined4 uStack_174;
  uint auStack_170 [2];
  undefined4 uStack_168;
  undefined1 auStack_160 [12];
  uint uStack_154;
  uint uStack_14c;
  undefined4 uStack_13c;
  uint uStack_138;
  undefined1 auStack_12c [8];
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined **ppuStack_60;
  void *pvStack_5c;
  undefined4 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_28;
  void *pvStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00bbbe9f;
  pvStack_14 = ExceptionList;
  local_234 = 0.0;
  ExceptionList = &pvStack_14;
  if ((char)param_1 != '\0') {
    uStack_24c = (undefined ***)0x654dc6;
    ExceptionList = &pvStack_14;
    (**(code **)(*(int *)in_ECX[0x585] + 0x10))();
    uStack_24c = (undefined ***)in_ECX[0x348];
    if ((*(int *)((int)uStack_24c + 4) != 0) &&
       (*(char *)(*(int *)((int)uStack_24c + 4) + 0x67) != '\0')) {
      pfStack_250 = (float *)0x654ddf;
      FUN_0046e720();
    }
    if ((*(int *)(in_ECX[0x349] + 4) != 0) &&
       (*(char *)(*(int *)(in_ECX[0x349] + 4) + 0x67) != '\0')) {
      uStack_24c = (undefined ***)0x654df7;
      FUN_0046f0d0();
    }
    DAT_013f0858 = DAT_013f0858 + 1;
    if (DAT_013f0858 == (DAT_013f0858 / 0x3c) * 0x3c) {
      uStack_1f0 = *(uint *)(DAT_012588e8 + 0xb5c);
      uStack_24c = *(undefined ****)
                    (*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4);
      pfStack_250 = (float *)0x654e4d;
      FUN_005399c0();
      DAT_013f0858 = 0;
    }
    if ((char)in_ECX[0x77f] != '\0') {
      uStack_24c = (undefined ***)0xa;
      pfStack_250 = (float *)0xe08fe4;
      *(undefined1 *)(in_ECX + 0x77f) = 0;
      uStack_214 = 0xf;
      uStack_218 = 0;
      uStack_228 = uStack_228 & 0xffffff00;
      _uStack_258 = CONCAT44(0x654e84,uVar19);
      FUN_00409350();
      uStack_c = 0;
      uStack_24c = (undefined ***)0x11;
      pfStack_250 = (float *)0xe08fd0;
      puStack_1d4 = (undefined1 *)0xf;
      puStack_1d8 = (undefined1 *)0x0;
      uStack_1e8 = uStack_1e8 & 0xffffff00;
      _uStack_258 = CONCAT44(0x654ea8,uVar19);
      FUN_00409350();
      uStack_c = CONCAT31(uStack_c._1_3_,1);
      uStack_24c = (undefined ***)&uStack_1e8;
      pfStack_250 = (float *)0x654ec2;
      piVar5 = (int *)(**(code **)(*(int *)in_ECX[0x58c] + 0x6c))();
      pfStack_250 = &fStack_22c;
      _uStack_258 = CONCAT44(0x654ed0,uVar19);
      piVar5 = (int *)(**(code **)(*piVar5 + 0x7c))();
      _uStack_258 = CONCAT44(0x654ed9,uVar19);
      (**(code **)(*piVar5 + 0x6c))();
      if (0xf < puStack_1d4) {
        uStack_24c = (undefined ***)uStack_1e8;
                    /* WARNING: Subroutine does not return */
        pfStack_250 = (float *)&UNK_00654eea;
        FUN_00aae91b();
      }
      uStack_c = 0xffffffff;
      puStack_1d4 = (undefined1 *)0xf;
      puStack_1d8 = (undefined1 *)0x0;
      uStack_1e8 = uStack_1e8 & 0xffffff00;
      if (0xf < uStack_214) {
        uStack_24c = (undefined ***)uStack_228;
                    /* WARNING: Subroutine does not return */
        pfStack_250 = (float *)&UNK_00654f16;
        FUN_00aae91b();
      }
    }
    if ((char)in_ECX[0x54e] == '\0') {
      DAT_012587e3 = '\0';
      if (DAT_012588e0 == 0.0) {
        uStack_24c = (undefined ***)0x654f4f;
        fVar18 = (float10)(**(code **)(*(int *)in_ECX[0x65e] + 0x14))();
        DAT_012588e0 = (float)fVar18;
      }
    }
    else {
      if (DAT_012587e3 == '\0') {
        uStack_24c = (undefined ***)0x654f74;
        fVar18 = (float10)(**(code **)(*(int *)in_ECX[0x65e] + 0x14))();
        fStack_22c = (float)fVar18;
        uStack_24c = (undefined ***)0x654f89;
        FUN_009885d0();
        uStack_c = 2;
        uStack_24c = (undefined ***)auStack_160;
        pfStack_250 = (float *)(DAT_012588e8 + 0xb0c);
        _uStack_258 = CONCAT44(0x654fae,uVar19);
        puVar11 = (undefined4 *)FUN_0043acd0();
        uStack_24c = (undefined ***)0x10006;
        pfStack_250 = (float *)0xbe3;
        uStack_c._0_1_ = 3;
        _uStack_258 = CONCAT44(auStack_1b4,0x654fd6);
        uVar10 = FUN_004015b0();
        uStack_24c = (undefined ***)0x0;
        pfStack_250 = (float *)0x10;
        _uStack_258 = CONCAT44("Timer check for ",uVar10);
        uStack_c._0_1_ = 4;
        uStack_260 = CONCAT44(0x654ff2,(uint)uStack_260);
        FUN_00987d50();
        if (0xf < (uint)puVar11[5]) {
          puVar11 = (undefined4 *)*puVar11;
        }
        uStack_260 = CONCAT44(puVar11,uVar10);
        uStack_264 = (char *)0x655001;
        puStack_270 = (uint *)FUN_00418e30();
        uStack_260 = CONCAT44(" seconds.",extraout_ECX);
        uStack_264 = (char *)((float)uStack_23c - DAT_012588e0);
        uStack_26c = &DAT_00e02cc8;
        uStack_274 = (char *)0x65503a;
        puStack_268 = (undefined1 *)FUN_00418e30();
        uStack_26c = (undefined1 *)0x655043;
        pfStack_250 = (float *)FUN_0048b410();
        _uStack_258 = CONCAT44(0x65504c,uVar19);
        uVar10 = FUN_00418e30();
        _uStack_258 = CONCAT44(uVar10,0x655052);
        FUN_00401280();
        uStack_24c = &ppuStack_60;
        uStack_c = CONCAT31(uStack_c._1_3_,3);
        pfStack_250 = (float *)0x65506a;
        FUN_00987ac0();
        uStack_24c = &ppuStack_60;
        ppuStack_60 = std::ios_base::vftable;
        pfStack_250 = (float *)0x655082;
        FUN_00aad52d();
        uStack_24c = (undefined ***)0x655091;
        FUN_00408ad0();
        uStack_c = 0xffffffff;
        uStack_24c = (undefined ***)0x6550a8;
        FUN_00408ad0();
        DAT_012588e0 = 0.0;
      }
      DAT_012587e3 = '\x01';
    }
    iVar6 = in_ECX[0x5fa];
    uStack_24c = *(undefined ****)(iVar6 + 300);
    DAT_01258a66 = 0;
    if (uStack_24c != (undefined ***)0x0) {
      pfStack_250 = (float *)0x6550d9;
      FUN_009af9f0();
    }
    uStack_24c = *(undefined ****)(iVar6 + 0x130);
    DAT_01258a66 = 1;
    if (uStack_24c != (undefined ***)0x0) {
      pfStack_250 = (float *)0x6550f0;
      FUN_009af9f0();
    }
  }
  uStack_24c = (undefined ***)param_1;
  pfStack_250 = (float *)0x6550fb;
  FUN_006481d0();
  uStack_24c = (undefined ***)0x655107;
  cVar3 = (**(code **)(*in_ECX + 0x144))();
  if (cVar3 == '\0') {
    uStack_24c = (undefined ***)0x655121;
    cVar3 = (**(code **)(**(int **)(in_ECX[0x360] + in_ECX[0x35f] * 4) + 0x1c))();
    if ((cVar3 == '\0') && (*(char *)(*(int *)(in_ECX[0x780] + 0x28) + 0x67) == '\0')) {
      uStack_24c = (undefined ***)0x65513d;
      iVar6 = (**(code **)(*in_ECX + 0x6c))();
      *(undefined1 *)(iVar6 + 0x356) = 0;
    }
    else {
      uStack_24c = (undefined ***)0x65514f;
      iVar6 = (**(code **)(*in_ECX + 0x6c))();
      *(undefined1 *)(iVar6 + 0x356) = 1;
    }
  }
  uStack_24c = (undefined ***)0x65516c;
  cVar3 = (**(code **)(**(int **)(in_ECX[0x360] + in_ECX[0x35f] * 4) + 0x1c))();
  if ((cVar3 != '\0') &&
     (piVar5 = *(int **)(in_ECX[0x360] + in_ECX[0x35f] * 4), (char)piVar5[0x16] != '\0')) {
    uStack_24c = (undefined ***)0x65518c;
    (**(code **)(*piVar5 + 0x2c))();
    uStack_24c = (undefined ***)0x6551a2;
    (**(code **)(**(int **)(in_ECX[0x360] + in_ECX[0x35f] * 4) + 0x18))();
    *(undefined1 *)(*(int *)(in_ECX[0x360] + in_ECX[0x35f] * 4) + 0x58) = 0;
  }
  if ((*(int *)(in_ECX[0x783] + 8) != 0) && (*(char *)(*(int *)(in_ECX[0x783] + 8) + 0x67) != '\0'))
  {
    uStack_24c = (undefined ***)0x6551cd;
    FUN_00450960();
  }
  iVar6 = in_ECX[0x5f8];
  uStack_24c = (undefined ***)0x6551dc;
  iVar7 = (**(code **)(*in_ECX + 0x40))();
  *(int *)(iVar7 + 0x6bc88) = iVar6;
  in_ECX[0x772] = 0;
  in_ECX[0x584] = 0;
  if (*(char *)(in_ECX[0x743] + 0x30) != '\0') {
    uStack_24c = (undefined ***)0x655206;
    (**(code **)(**(int **)(in_ECX[0x743] + 0x24) + 0x2c))();
  }
  uStack_24c = (undefined ***)0xb;
  pfStack_250 = (float *)0xe091dc;
  uStack_214 = 0xf;
  uStack_218 = 0;
  uStack_228 = uStack_228 & 0xffffff00;
  _uStack_258 = CONCAT44(0x655227,uVar19);
  FUN_00409350();
  uStack_c = 5;
  uStack_24c = (undefined ***)&uStack_228;
  pfStack_250 = (float *)0x655244;
  iVar6 = (**(code **)(*(int *)in_ECX[0x58c] + 0x6c))();
  puStack_10 = (undefined1 *)0xffffffff;
  uStack_23c = (int *)CONCAT13(*(char *)(iVar6 + 0x67),(undefined3)uStack_23c);
  if (0xf < uStack_218) {
    pfStack_250 = (float *)fStack_22c;
    _uStack_258 = CONCAT44(&UNK_0065526b,uVar19);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if (*(char *)(iVar6 + 0x67) != '\0') {
    pfStack_250 = (float *)0xb;
    uStack_218 = 0xf;
    uStack_21c = 0;
    fStack_22c = (float)((uint)fStack_22c & 0xffffff00);
    _uStack_258 = 0xe091dc00655296;
    FUN_00409350();
    puStack_10 = (undefined1 *)0x6;
    pfStack_250 = &fStack_22c;
    _uStack_258 = CONCAT44(0x6552b3,uVar19);
    piVar5 = (int *)(**(code **)(*(int *)in_ECX[0x58c] + 0x6c))();
    _uStack_258 = CONCAT44(0x6552bc,uVar19);
    (**(code **)(*piVar5 + 0x2c))();
    puStack_10 = (undefined1 *)0xffffffff;
    if (0xf < uStack_218) {
      pfStack_250 = (float *)fStack_22c;
      _uStack_258 = CONCAT44(&UNK_006552d7,uVar19);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  puStack_10 = (undefined1 *)0xffffffff;
  pfStack_250 = (float *)0x6552f0;
  cVar3 = (**(code **)(**(int **)(in_ECX[0x360] + in_ECX[0x35f] * 4) + 0x1c))();
  if (cVar3 == '\0') {
    pfStack_250 = (float *)0x655305;
    (**(code **)(*(int *)(in_ECX[0x58e] + 4) + 0x6c))();
  }
  if ((int *)in_ECX[0x75a] != (int *)0x0) {
    pfStack_250 = (float *)0x655316;
    cVar3 = (**(code **)(*(int *)in_ECX[0x75a] + 0xc))();
    if (cVar3 != '\0') {
      pfStack_250 = (float *)0x655327;
      (**(code **)(*(int *)in_ECX[0x75a] + 0x10))();
    }
  }
  pfStack_250 = (float *)in_ECX[0x746];
  if (pfStack_250 != (float *)0x0) {
    _uStack_258 = CONCAT44(0x655337,uVar19);
    FUN_00697510();
  }
  if (*(char *)(DAT_012588e8 + 0xd11) != '\0') {
    pfStack_250 = (float *)0x655352;
    cVar3 = (**(code **)(*in_ECX + 0x144))();
    if (cVar3 == '\0') {
      pfStack_250 = *(float **)(DAT_012588e8 + 0xd14);
      _uStack_258 = 0x100655376;
      DAT_01258a66 = cVar3;
      (**(code **)(*in_ECX + 0x140))();
      DAT_01258a66 = 1;
    }
  }
  pfStack_250 = (float *)0x655389;
  cVar3 = (**(code **)(*in_ECX + 0x144))();
  if (cVar3 != '\0') {
    DAT_01258a66 = 0;
    pfStack_250 = (float *)0x6553a3;
    cVar3 = FUN_00867d60();
    if (cVar3 == '\0') {
      if (in_ECX[0x761] != 0) {
        pfStack_250 = (float *)0x655406;
        FUN_009855b0();
        if (*(char *)(*(int *)(in_ECX[0x761] + 0x20) + 0x67) == '\0') {
          pcVar9 = *(code **)(*(int *)(*(int *)(in_ECX[0x761] + 0x20) + 0x18) + 0x34);
          goto LAB_0065541e;
        }
      }
    }
    else {
      pfStack_250 = (float *)0x0;
      _uStack_258 = 0x6553b7;
      (**(code **)(*in_ECX + 0x140))();
      *(undefined1 *)((int)in_ECX + 0x1d22) = 1;
      *(undefined1 *)(in_ECX + 0x1c) = 1;
      *(undefined1 *)(in_ECX + 0x744) = 1;
      pfStack_250 = (float *)0x6553d4;
      FUN_004cd940();
      pfStack_250 = (float *)(in_ECX + 0x368);
      *(undefined1 *)(in_ECX + 0x744) = 0;
      _uStack_258 = CONCAT44(0x6553e7,uVar19);
      FUN_008601b0();
      pcVar9 = *(code **)(*(int *)in_ECX[0x593] + 0x38);
LAB_0065541e:
      pfStack_250 = (float *)0x655420;
      (*pcVar9)();
    }
    DAT_01258a66 = 1;
  }
  pfStack_250 = (float *)0x655434;
  FUN_004cd8c0();
  pfStack_250 = (float *)in_ECX[0x75d];
  if (pfStack_250 != (float *)0x0) {
    _uStack_258 = CONCAT44(0x65544f,uVar19);
    FUN_00632890();
  }
  if ((*(char *)(DAT_012588e8 + 0x60) != '\0') &&
     (*(undefined1 *)(DAT_012588e8 + 0x60) = 0, in_ECX[0x588] != 0)) {
    pfStack_250 = (float *)0x65546f;
    FUN_00651300();
    _uStack_258 = CONCAT44(0x655475,uVar19);
    FUN_0064f850();
  }
  pfStack_250 = (float *)0x65547c;
  FUN_006784b0();
  if (*(int *)(DAT_012586dc + 0xc) < *(int *)(DAT_012588e8 + 0xb0c)) {
    if (*(char *)(in_ECX[0x75b] + 0x67) == '\0') {
      pfStack_250 = (float *)0x6554a9;
      (**(code **)(*(int *)(in_ECX[0x75b] + 0x18) + 0x34))();
    }
    *(undefined1 *)(in_ECX + 0x54e) = 1;
  }
  _uStack_258 = CONCAT44(0x6554b6,uVar19);
  FUN_00652200();
  _uStack_258 = CONCAT44(0x6554bc,uVar19);
  FUN_00652a10();
  _uStack_258 = CONCAT44(0x6554c2,uVar19);
  FUN_006537e0();
  _uStack_258 = CONCAT44(0x6554c8,uVar19);
  FUN_00653fa0();
  piVar5 = (int *)in_ECX[0x2ed];
joined_r0x006554d2:
  if (piVar5 != (int *)0x0) {
    iVar6 = *piVar5;
    piVar5 = (int *)piVar5[2];
    for (piVar1 = (int *)in_ECX[0x580]; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
      if (*piVar1 == iVar6) {
        pfStack_250 = (float *)(uint)*(byte *)(in_ECX + 8);
        _uStack_258 = CONCAT44(iVar6,0x655502);
        (**(code **)(*in_ECX + 0xa0))();
        break;
      }
    }
    goto joined_r0x006554d2;
  }
  pfStack_250 = (float *)in_ECX[0x2ed];
  if (pfStack_250 != (float *)0x0) {
    _uStack_258 = CONCAT44(&UNK_00655519,uVar19);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  in_ECX[0x2ed] = 0;
  in_ECX[0x2ee] = 0;
  in_ECX[0x2ef] = 0;
  *(undefined1 *)(in_ECX + 8) = 0;
  uStack_23c = (int *)((uint)uStack_23c & 0xffffff);
  if (*(char *)(in_ECX[0x5f9] + 0x6bcdc) == '\0') {
    if ((0 < DAT_013f085c) || (*(char *)((int)in_ECX + 0x1db5) == '\0')) goto LAB_0065558d;
  }
  else {
    iVar6 = *(int *)in_ECX[0x16];
    pfStack_250 = (float *)0x655556;
    pfStack_250 = (float *)(**(code **)(iVar6 + 0x14))();
    _uStack_258 = CONCAT44(0x65555f,uVar19);
    (**(code **)(iVar6 + 0x10))();
    *(undefined1 *)(in_ECX[0x5f9] + 0x6bcdc) = 0;
    *(undefined1 *)((int)in_ECX + 0x1db5) = 1;
    DAT_013f085c = 10;
LAB_0065558d:
    pfStack_250 = (float *)in_ECX[0x73e];
    iVar6 = DAT_013f085c + -1;
    uStack_23c = (int *)CONCAT13(1,(undefined3)uStack_23c);
    DAT_013f085c = iVar6;
    if (pfStack_250 != (float *)0x0) {
      _uStack_258 = CONCAT44(&UNK_006555ac,uVar19);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    in_ECX[0x73e] = 0;
    in_ECX[0x73f] = 0;
    in_ECX[0x740] = 0;
    if (iVar6 == 0) {
      *(char *)((int)in_ECX + 0x1cda) = (char)in_ECX[0x76d];
      *(undefined2 *)(in_ECX + 0x736) = 1;
    }
  }
  pfStack_250 = (float *)0x6555ed;
  FUN_00654530();
  pfStack_250 = (float *)0x6555f7;
  cVar3 = (**(code **)(*(int *)in_ECX[0x16] + 0x58))();
  if (cVar3 != '\0') {
    puStack_1e0 = (uint *)in_ECX[0x16];
    iVar6 = in_ECX[0x73f];
    pfStack_250 = (float *)0x28;
    uStack_1ec = 0;
    uStack_1e8 = 0;
    uStack_1e4 = 0;
    puStack_1dc = (undefined1 *)0x2;
    puStack_1d8 = (undefined1 *)0x1;
    puStack_1d4 = (undefined1 *)((uint)puStack_1d4 & 0xffff0000);
    _uStack_258 = CONCAT44(0x655636,uVar19);
    puVar8 = (undefined8 *)FUN_00aae9af();
    if (puVar8 == (undefined8 *)0x0) {
      puVar8 = (undefined8 *)0x0;
    }
    else {
      *puVar8 = CONCAT44(uStack_1e8,uStack_1ec);
      puVar8[1] = CONCAT44(puStack_1e0,uStack_1e4);
      puVar8[2] = CONCAT44(puStack_1d8,puStack_1dc);
      *(undefined1 **)(puVar8 + 3) = puStack_1d4;
      *(int *)((int)puVar8 + 0x1c) = iVar6;
      *(undefined4 *)(puVar8 + 4) = 0;
      *(undefined1 *)((int)puVar8 + 0x24) = 0;
    }
    iVar7 = in_ECX[0x740];
    in_ECX[0x73f] = (int)puVar8;
    in_ECX[0x740] = iVar7 + 1;
    if (iVar7 == 0) {
      in_ECX[0x73e] = (int)puVar8;
    }
    else {
      *(undefined8 **)(iVar6 + 0x20) = puVar8;
    }
  }
  pfStack_250 = (float *)auStack_12c;
  _uStack_258 = CONCAT44(0x6556a8,uVar19);
  (**(code **)(*(int *)in_ECX[0x16] + 0x4c))();
  _uStack_258 = CONCAT44(0x6556b5,uVar19);
  fVar18 = (float10)(**(code **)(*(int *)in_ECX[0x65e] + 0x14))();
  local_234 = (float)fVar18;
  uStack_238 = (int *)((uint)uStack_238 & 0xffffff);
  if ((((char)in_ECX[0x17] == '\0') && (0 < in_ECX[0x5e])) && (DAT_00f07da6 != '\0')) {
    _uStack_258 = CONCAT44(0x6556dc,uVar19);
    iVar6 = FUN_00475500();
    if (*(char *)(iVar6 + 0xa1) != '\0') {
      uStack_238 = (int *)CONCAT13(1,(undefined3)uStack_238);
    }
  }
  if (((char)in_ECX[0x54e] == '\0') && (uStack_238._3_1_ == '\0')) {
    _uStack_258 = CONCAT44(0x655721,uVar19);
    FUN_00682bd0();
  }
  if (DAT_01258aa4 == 0) {
    _uStack_258 = 0x7000655732;
    puStack_1d4 = (undefined1 *)FUN_00aae9af();
    pvStack_14 = (void *)0x7;
    if (puStack_1d4 == (undefined1 *)0x0) {
      DAT_01258aa4 = 0;
    }
    else {
      _uStack_258 = CONCAT44(puStack_1d4,0x65574e);
      DAT_01258aa4 = FUN_009c1ee0();
    }
    pvStack_14 = (void *)0xffffffff;
  }
  _uStack_258 = CONCAT44(local_234 - (float)in_ECX[0x65f],0x65578c);
  FUN_009c2650();
  pcVar9 = *(code **)(*in_ECX + 0xe4);
  in_ECX[0x65f] = (int)local_234;
  _uStack_258 = CONCAT44(0x6557a6,uVar19);
  cVar3 = (*pcVar9)();
  if ((cVar3 != '\0') && (*(int *)((int)*(float *)(DAT_012588e8 + 0xb84) + 8) != 0)) {
    _uStack_258 = CONCAT44(&local_234,0x6557c9);
    local_234 = *(float *)(DAT_012588e8 + 0xb84);
    FUN_006874c0();
  }
  if ((in_ECX[0x36a] != 1) && (*(char *)(*(int *)(in_ECX[0x590] + 4) + 0x67) != '\0')) {
    _uStack_258 = CONCAT44(0x6557e6,uVar19);
    FUN_00793570();
  }
  iVar6 = 0;
  if (0 < (int)(in_ECX[0x365] - in_ECX[0x364] & 0xfffffffcU)) {
    do {
      _uStack_258 = CONCAT44(0x655810,uVar19);
      cVar3 = (**(code **)(**(int **)(in_ECX[0x364] + iVar6 * 4) + 0x10))();
      if (cVar3 != '\0') {
        _uStack_258 = CONCAT44(0x655824,uVar19);
        (**(code **)(**(int **)(in_ECX[0x364] + iVar6 * 4) + 0x18))();
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < in_ECX[0x365] - in_ECX[0x364] >> 2);
  }
  _uStack_258 = CONCAT44(0x65583f,uVar19);
  cVar3 = FUN_0066bbf0();
  if (cVar3 == '\0') {
    iStack_1d0 = 0;
    uStack_1cc = 0;
    uStack_1c8 = 0;
    uStack_1c4 = 0;
    _uStack_258 = ZEXT48(&iStack_1d0);
    pvStack_14 = (void *)0x8;
    uStack_260 = CONCAT44(0x6559a0,(uint)uStack_260);
    FUN_00654120();
    uStack_254 = &dStack_1f8;
    (**(code **)(*in_ECX + 0x58))();
    uVar20 = uStack_1cc;
    if (((int)uStack_1cc < 2) || (cVar3 = FUN_00513d50(), cVar3 == '\0')) {
      uStack_220 = 0xf;
      uStack_224 = 0;
      local_234 = (float)((uint)local_234 & 0xffffff00);
      uStack_260 = 0xe0939c006559f0;
      FUN_00409350();
      uStack_18 = CONCAT31(uStack_18._1_3_,9);
      _uStack_258 = CONCAT44(uStack_254,&local_234);
      uStack_260 = CONCAT44(0x655a0a,(uint)uStack_260);
      piVar5 = (int *)(**(code **)(*(int *)in_ECX[0x592] + 0x34))();
      pcVar9 = *(code **)(*piVar5 + 0xbc);
    }
    else {
      uStack_220 = 0xf;
      uStack_224 = 0;
      local_234 = (float)((uint)local_234 & 0xffffff00);
      uStack_260 = 0xe0939c00655a3c;
      FUN_00409350();
      uStack_18 = CONCAT31(uStack_18._1_3_,10);
      _uStack_258 = CONCAT44(uStack_254,&local_234);
      uStack_260 = CONCAT44(0x655a56,(uint)uStack_260);
      piVar5 = (int *)(**(code **)(*(int *)in_ECX[0x592] + 0x34))();
      pcVar9 = *(code **)(*piVar5 + 0xb8);
    }
    uStack_260 = CONCAT44(0x655a62,(uint)uStack_260);
    (*pcVar9)();
    uStack_1c = CONCAT31(uStack_1c._1_3_,8);
    if (0xf < uStack_224) {
      uStack_260 = CONCAT44(uStack_238,&UNK_00655a7b);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_260._4_4_ = &puStack_200;
    uStack_260._0_4_ = 0x655a8c;
    (**(code **)(*in_ECX + 0x58))();
    if (uVar20 == 2) {
      uStack_260._0_4_ = 0x655a9d;
      cVar3 = FUN_00513e50();
      if (cVar3 == '\0') goto LAB_00655aa1;
      uStack_260._0_4_ = 0x10;
      uStack_264 = "reorganizebutton";
      uStack_228 = 0xf;
      fStack_22c = 0.0;
      uStack_23c = (int *)((uint)uStack_23c & 0xffffff00);
      puStack_268 = (undefined1 *)0x655b09;
      FUN_00409350();
      pvStack_20 = (void *)CONCAT31(pvStack_20._1_3_,0xc);
      uStack_260 = CONCAT44(uStack_260._4_4_,&uStack_23c);
      uStack_264 = (char *)0x655b23;
      piVar5 = (int *)(**(code **)(*(int *)in_ECX[0x592] + 0x34))();
      pcVar9 = *(code **)(*piVar5 + 0xb8);
    }
    else {
LAB_00655aa1:
      uStack_260._0_4_ = 0x10;
      uStack_264 = "reorganizebutton";
      uStack_228 = 0xf;
      fStack_22c = 0.0;
      uStack_23c = (int *)((uint)uStack_23c & 0xffffff00);
      puStack_268 = (undefined1 *)0x655ac2;
      FUN_00409350();
      pvStack_20 = (void *)CONCAT31(pvStack_20._1_3_,0xb);
      uStack_260 = CONCAT44(uStack_260._4_4_,&uStack_23c);
      uStack_264 = (char *)0x655adc;
      piVar5 = (int *)(**(code **)(*(int *)in_ECX[0x592] + 0x34))();
      pcVar9 = *(code **)(*piVar5 + 0xbc);
    }
    uStack_264 = (char *)0x655b2f;
    (*pcVar9)();
    if (0xf < uStack_21c) {
      _uStack_258 = CONCAT44(puStack_230,&UNK_00655b40);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (iStack_1d0 != 0) {
      _uStack_258 = CONCAT44(iStack_1d0,&UNK_00655b59);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    pvStack_14 = (void *)0xffffffff;
  }
  else {
    _uStack_258 = CONCAT44(0x65585d,uVar19);
    (**(code **)(**(int **)(in_ECX[0x360] + in_ECX[0x35f] * 4) + 0x18))();
    if ((char)in_ECX[0x36c] != '\0') {
      _uStack_258 = CONCAT44(0x65587c,uVar19);
      (**(code **)(**(int **)(in_ECX[0x360] + in_ECX[0x35f] * 4) + 0x14))();
      _uStack_258 = CONCAT44(0x655892,uVar19);
      (**(code **)(**(int **)(in_ECX[0x360] + in_ECX[0x35f] * 4) + 0x10))();
      _uStack_258 = CONCAT44(0x6558a8,uVar19);
      (**(code **)(**(int **)(in_ECX[0x360] + in_ECX[0x35f] * 4) + 8))();
      *(undefined1 *)(in_ECX + 0x36c) = 0;
    }
  }
  iVar6 = in_ECX[0x746];
  if (iVar6 == 0) {
LAB_00655b7a:
    if ((char)in_ECX[0x758] == '\0') {
      _uStack_258 = CONCAT44(in_ECX + 0x74c,0x655b9c);
      FUN_00679bf0();
      _uStack_258 = 0xc00e09228;
      *(undefined1 *)(in_ECX + 0x758) = 1;
      uStack_21c = 0xf;
      uStack_220 = 0;
      puStack_230 = (uint *)((uint)puStack_230 & 0xffffff00);
      uStack_260 = CONCAT44(0x655bc0,(uint)uStack_260);
      FUN_00409350();
      pvStack_14 = (void *)0xf;
      _uStack_258 = 0xb00e091dc;
      puStack_1dc = (undefined1 *)0xf;
      puStack_1e0 = (uint *)0x0;
      uStack_1f0 = uStack_1f0 & 0xffffff00;
      uStack_260 = CONCAT44(0x655be4,(uint)uStack_260);
      FUN_00409350();
      pvStack_14 = (void *)CONCAT31(pvStack_14._1_3_,0x10);
      _uStack_258 = CONCAT44(&uStack_1f0,0x655bfe);
      piVar5 = (int *)(**(code **)(*(int *)in_ECX[0x58c] + 0x6c))();
LAB_00655bfe:
      _uStack_258 = CONCAT44(uStack_254,&local_234);
      uStack_260 = CONCAT44(0x655c0c,(uint)uStack_260);
      iVar6 = (**(code **)(*piVar5 + 0x40))();
      uStack_260 = CONCAT44(in_ECX + 0x750,0x655c1d);
      (**(code **)(*(int *)(iVar6 + 0x54) + 4))();
      if ((undefined1 *)0xf < puStack_1dc) {
        _uStack_258 = CONCAT44(uStack_1f0,&UNK_00655c2e);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      pvStack_14 = (void *)0xffffffff;
      uStack_1f0 = uStack_1f0 & 0xffffff00;
      puStack_1e0 = (uint *)0x0;
      puStack_1dc = (undefined1 *)0xf;
      if (0xf < uStack_21c) {
        _uStack_258 = CONCAT44(puStack_230,&UNK_00655c5a);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
  }
  else if (*(char *)(iVar6 + 0xe1) == '\0') {
    if (iVar6 == 0) goto LAB_00655b7a;
  }
  else {
    _uStack_258 = CONCAT44(0x6558d9,uVar19);
    FUN_00694d90();
    if ((char)in_ECX[0x758] == '\0') {
      _uStack_258 = CONCAT44(in_ECX + 0x74c,0x6558fb);
      FUN_00679bf0();
      _uStack_258 = 0xc00e09228;
      *(undefined1 *)(in_ECX + 0x758) = 1;
      uStack_21c = 0xf;
      uStack_220 = 0;
      puStack_230 = (uint *)((uint)puStack_230 & 0xffffff00);
      uStack_260 = CONCAT44(0x655921,(uint)uStack_260);
      FUN_00409350();
      pvStack_14 = (void *)0xd;
      _uStack_258 = 0xb00e091dc;
      puStack_1dc = (undefined1 *)0xf;
      puStack_1e0 = (uint *)0x0;
      uStack_1f0 = uStack_1f0 & 0xffffff00;
      uStack_260 = CONCAT44(0x655949,(uint)uStack_260);
      FUN_00409350();
      pvStack_14 = (void *)CONCAT31(pvStack_14._1_3_,0xe);
      _uStack_258 = CONCAT44(&uStack_1f0,0x655963);
      piVar5 = (int *)(**(code **)(*(int *)in_ECX[0x58c] + 0x6c))();
      goto LAB_00655bfe;
    }
  }
  _uStack_258 = CONCAT44(0x655c6d,uVar19);
  (**(code **)(*(int *)in_ECX[0x58c] + 0xb0))();
  if ((char)in_ECX[0x54e] == '\0') {
    _uStack_258 = CONCAT44(0x656164,uVar19);
    FUN_00718d10();
    if (*(char *)(in_ECX[0x550] + 0x4f) != '\0') {
      _uStack_258 = CONCAT44(0x656177,uVar19);
      (**(code **)(*(int *)in_ECX[0x550] + 0x38))();
    }
  }
  else {
    if ((char)in_ECX[0x17] != '\0') {
      if (DAT_00f20c18 == (undefined4 *)0x0) {
        _uStack_258 = 0x400655c95;
        DAT_00f20c18 = (undefined4 *)FUN_00aae9af();
        if (DAT_00f20c18 == (undefined4 *)0x0) {
          DAT_00f20c18 = (undefined4 *)0x0;
        }
        else {
          *DAT_00f20c18 = &PTR_FUN_00e38b28;
        }
      }
      _uStack_258 = CONCAT44(0x655cbc,uVar19);
      fVar18 = (float10)(**(code **)(*DAT_01258a8c + 0x14))();
      dStack_1f8 = (double)fVar18;
      iVar6 = in_ECX[0x76c];
      if ((0x1e - iVar6 < (int)(dStack_1f8 - *(double *)(in_ECX + 0x76a))) &&
         (in_ECX[0x76c] = iVar6 + -1, iVar6 + -1 < 0)) {
        in_ECX[0x76c] = 0;
      }
      if ((in_ECX[0x766] != 0) &&
         ((*(char *)(in_ECX[0x550] + 0x4f) == '\0' || (iVar6 != in_ECX[0x76c])))) {
        _uStack_258 = 0x1300e093a8;
        auStack_170[0] = 0xf;
        uStack_174 = 0;
        auStack_184[0] = auStack_184[0] & 0xffffff00;
        uStack_260 = CONCAT44(0x655d43,(uint)uStack_260);
        FUN_00409350();
        _uStack_258 = CONCAT44(auStack_184,&uStack_1f0);
        pvStack_14 = (void *)0x11;
        uStack_260 = CONCAT44(0x655d60,(uint)uStack_260);
        FUN_009a8ee0();
        pvStack_14._0_1_ = 0x13;
        if (0xf < auStack_170[0]) {
          _uStack_258 = CONCAT44(auStack_184[0],&UNK_00655d7f);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        _uStack_258 = 0x600e093bc;
        auStack_170[0] = 0xf;
        uStack_174 = 0;
        auStack_184[0] = auStack_184[0] & 0xffffff00;
        uStack_21c = 0xf;
        uStack_220 = 0;
        puStack_230 = (uint *)((uint)puStack_230 & 0xffffff00);
        uStack_260 = CONCAT44(0x655db5,(uint)uStack_260);
        FUN_00409350();
        pvStack_14._0_1_ = 0x14;
        _uStack_258 = CONCAT44(in_ECX + 0x762,0x655dd1);
        FUN_009a9980();
        pvStack_14._0_1_ = 0x13;
        if (0xf < uStack_21c) {
          _uStack_258 = CONCAT44(puStack_230,&UNK_00655dea);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        _uStack_258 = 0xe00e093c4;
        puStack_200 = (undefined1 *)0xf;
        uStack_204 = 0;
        uStack_214 = uStack_214 & 0xffffff00;
        uStack_260 = CONCAT44(0x655e0c,(uint)uStack_260);
        FUN_00409350();
        _uStack_258 = CONCAT44(&uStack_214,&iStack_1d0);
        pvStack_14._0_1_ = 0x15;
        uStack_260 = CONCAT44(0x655e26,(uint)uStack_260);
        FUN_009a8ee0();
        pvStack_14._0_1_ = 0x17;
        if ((undefined1 *)0xf < puStack_200) {
          _uStack_258 = CONCAT44(uStack_214,&UNK_00655e3f);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        _uStack_258 = 0x400dfd4fc;
        puStack_200 = (undefined1 *)0xf;
        uStack_204 = 0;
        uStack_214 = uStack_214 & 0xffffff00;
        uStack_21c = 0xf;
        uStack_220 = 0;
        puStack_230 = (uint *)((uint)puStack_230 & 0xffffff00);
        uStack_260 = CONCAT44(0x655e6c,(uint)uStack_260);
        FUN_00409350();
        pvStack_14._0_1_ = 0x18;
        _uStack_258 = CONCAT44(in_ECX[0x76c],&iStack_1d0);
        uStack_260 = CONCAT44(0x655e8c,(uint)uStack_260);
        FUN_009a99f0();
        pvStack_14._0_1_ = 0x17;
        if (0xf < uStack_21c) {
          _uStack_258 = CONCAT44(puStack_230,&UNK_00655ea5);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        _uStack_258 = CONCAT44(0x655ead,uVar19);
        iVar6 = FUN_00475500();
        uStack_260 = *(undefined8 *)(iVar6 + 0x6c);
        _uStack_258 = *(undefined8 *)(iVar6 + 0x74);
        uStack_264 = (char *)0x655ed8;
        uVar10 = FUN_009a9880();
        pvStack_14._0_1_ = 0x19;
        _uStack_258 = 0x100dee2cc;
        uStack_21c = 0xf;
        uStack_220 = 0;
        puStack_230 = (uint *)((uint)puStack_230 & 0xffffff00);
        uStack_260 = CONCAT44(0x655f07,(uint)uStack_260);
        FUN_00409350();
        pvStack_14._0_1_ = 0x1a;
        _uStack_258 = CONCAT44(0x655f14,uVar19);
        iVar6 = FUN_00475500();
        uStack_260 = *(undefined8 *)(iVar6 + 0x6c);
        _uStack_258 = *(undefined8 *)(iVar6 + 0x74);
        uStack_264 = (char *)0x655f3c;
        FUN_009a9880();
        pvStack_14._0_1_ = 0x1b;
        _uStack_258 = CONCAT44(&puStack_230,0x655f57);
        FUN_00988f20();
        pvStack_14._0_1_ = 0x1c;
        _uStack_258 = CONCAT44(uVar10,0x655f6e);
        FUN_00988f20();
        pvStack_14._0_1_ = 0x1d;
        _uStack_258 = CONCAT44(0x655f83,uVar19);
        FUN_009e7500();
        if (0xf < uStack_18c) {
          _uStack_258 = CONCAT44(uStack_1a0,&UNK_00655f9a);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        uStack_18c = 0xf;
        uStack_190 = 0;
        uStack_1a0 = uStack_1a0 & 0xffffff00;
        if (0xf < uStack_138) {
          _uStack_258 = CONCAT44(uStack_14c,&UNK_00655fd1);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        uStack_138 = 0xf;
        uStack_13c = 0;
        uStack_14c = uStack_14c & 0xffffff00;
        if (0xf < uStack_1a8) {
          _uStack_258 = CONCAT44(uStack_1bc,&UNK_00656001);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        uStack_1a8 = 0xf;
        uStack_1ac = 0;
        uStack_1bc = uStack_1bc & 0xffffff00;
        if (0xf < uStack_21c) {
          _uStack_258 = CONCAT44(puStack_230,&UNK_0065602b);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        pvStack_14._0_1_ = 0x17;
        uStack_21c = 0xf;
        uStack_220 = 0;
        puStack_230 = (uint *)((uint)puStack_230 & 0xffffff00);
        if (0xf < uStack_154) {
          _uStack_258 = CONCAT44(uStack_168,&UNK_0065605a);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        if (in_ECX[0x76c] < 1) {
          _uStack_258 = CONCAT44(0x656073,uVar19);
          (**(code **)(*(int *)in_ECX[0x550] + 0x38))();
        }
        pvStack_14 = (void *)CONCAT31(pvStack_14._1_3_,0x13);
        _uStack_258 = CONCAT44(&iStack_1d0,0x656088);
        FUN_009a9740();
        pvStack_14 = (void *)0xffffffff;
        _uStack_258 = CONCAT44(&uStack_1f0,0x65609d);
        FUN_009a9740();
      }
      sVar4 = 0;
      if (*(char *)(in_ECX[0x550] + 0x4f) == '\0') {
        _uStack_258 = CONCAT44(0x6560c1,uVar19);
        cVar3 = (**(code **)(**(int **)(in_ECX[0x360] + in_ECX[0x35f] * 4) + 0x1c))();
        piVar5 = (int *)in_ECX[0x550];
        if (cVar3 == '\0') {
          _uStack_258 = CONCAT44(0x6560d2,uVar19);
          (**(code **)(*piVar5 + 0x34))();
          pcVar9 = *(code **)(*(int *)in_ECX[0x550] + 0x6c);
        }
        else {
          if (*(char *)((int)piVar5 + 0x4f) == '\0') goto LAB_006560ec;
          pcVar9 = *(code **)(*piVar5 + 0x38);
        }
        _uStack_258 = CONCAT44(0x6560ec,uVar19);
        (*pcVar9)();
      }
LAB_006560ec:
      if (*(char *)(in_ECX[0x550] + 0x4f) != '\0') {
        _uStack_258 = CONCAT44(0x656109,uVar19);
        cVar3 = FUN_006c9d30();
        if (cVar3 != '\0') {
          _uStack_258 = CONCAT44(0x65611e,uVar19);
          sVar4 = FUN_006ca2d0();
        }
        local_234 = (float)CONCAT22((short)in_ECX[0x54f],*(short *)((int)in_ECX + 0x153a) - sVar4);
        _uStack_258 = CONCAT44(local_234,0x65614c);
        FUN_009e7350();
      }
    }
    _uStack_258 = CONCAT44(0x656157,uVar19);
    FUN_00718d10();
  }
  _uStack_258 = CONCAT44(0x65617e,uVar19);
  FUN_00654620();
  piVar5 = in_ECX + 0x661;
  if (*(char *)((int)in_ECX + 0x1ce5) != '\0') {
    uStack_254 = (double *)(in_ECX + 0x71e);
    (**(code **)(*piVar5 + 0x180))();
    _uStack_258 = CONCAT44(uStack_254,in_ECX + 0x71b);
    uStack_260 = CONCAT44(0x6561b3,(uint)uStack_260);
    (**(code **)(*piVar5 + 0x17c))();
    *(undefined1 *)((int)in_ECX + 0x1ce5) = 0;
  }
  _uStack_258 = CONCAT44(piVar5,in_ECX[0x5f8] + 0x1c);
  uStack_260 = CONCAT44(0x6561ca,(uint)uStack_260);
  FUN_009eb690();
  local_234 = 0.0;
  _uStack_258 = CONCAT44(0x6561e0,uVar19);
  fVar18 = (float10)(**(code **)(*(int *)in_ECX[0x65e] + 0x14))();
  iVar6 = DAT_00f20c38;
  dStack_1f8 = (double)fVar18;
  if (0.0 < (float)in_ECX[0x2ec]) {
    local_234 = (float)(dStack_1f8 - (double)(float)in_ECX[0x2ec]);
  }
  if ((char)(unaff_EBX >> 0x18) != '\0') {
    local_234 = 0.0;
  }
  in_ECX[0x2ec] = (int)(float)fVar18;
  if ((*(char *)(iVar6 + 0xf2) != '\0') &&
     (*(char *)(*(int *)(in_ECX[0x780] + 0x28) + 0x67) == '\0')) {
    _uStack_258 = CONCAT44(0x656251,uVar19);
    iVar6 = (**(code **)(*in_ECX + 0x38))();
    uStack_264 = (char *)in_ECX[7];
    _uStack_258 = CONCAT44(1,local_234);
    uStack_260 = (ulonglong)*(uint *)(iVar6 + 0x3a20);
    puStack_268 = (undefined1 *)0x65627a;
    FUN_0063f870();
  }
  piVar5 = in_ECX + 0x661;
  if (*(char *)((int)in_ECX + 0x1ce5) != '\0') {
    uStack_254 = (double *)(in_ECX + 0x71e);
    (**(code **)(*piVar5 + 0x180))();
    _uStack_258 = CONCAT44(uStack_254,in_ECX + 0x71b);
    uStack_260 = CONCAT44(0x6562af,(uint)uStack_260);
    (**(code **)(*piVar5 + 0x17c))();
    *(undefined1 *)((int)in_ECX + 0x1ce5) = 0;
  }
  _uStack_258 = CONCAT44(piVar5,in_ECX[0x5f8] + 0x1c);
  uStack_260 = CONCAT44(0x6562c6,(uint)uStack_260);
  FUN_009eb690();
  uStack_254 = (double *)in_ECX;
  FUN_006592f0();
  uStack_260 = CONCAT44(0x6562d2,(uint)uStack_260);
  FUN_00657b60();
  if ((*(char *)(DAT_00f20c38 + 0xf2) != '\0') &&
     (*(char *)(*(int *)(in_ECX[0x780] + 0x28) + 0x67) == '\0')) {
    iVar6 = (**(code **)(*in_ECX + 0x38))();
    uStack_264 = *(char **)(iVar6 + 0x3a20);
    puStack_268 = (undefined1 *)in_ECX[7];
    uStack_260 = CONCAT44(uStack_238,in_ECX + 0x73e);
    uStack_26c = (undefined1 *)0x656326;
    FUN_0063f870();
  }
  uVar10 = FUN_0063f7f0();
  _uStack_258 = CONCAT44(uStack_254,uVar10) & 0xffffffff000000ff;
  uStack_260 = CONCAT44(in_ECX,0x65633e);
  FUN_00648460();
  if (in_ECX[0x73e] != 0) {
    _uStack_258 = CONCAT44(uStack_254,in_ECX[0x73e]);
    uStack_260 = CONCAT44(&UNK_00656359,(uint)uStack_260);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  in_ECX[0x73e] = 0;
  in_ECX[0x73f] = 0;
  in_ECX[0x740] = 0;
  (**(code **)(*(int *)in_ECX[7] + 0x14))();
  bVar17 = DAT_00f09584 == -1;
  *(undefined1 *)(in_ECX + 0x2ea) = 0;
  if (bVar17) {
    piVar5 = (int *)FUN_009e8090();
    (**(code **)(*piVar5 + 0x10))();
    DAT_00f09584 = -2;
  }
  iVar6 = FUN_00475500();
  if ((0.0 < *(float *)(iVar6 + 0x80)) && (*(char *)(in_ECX[0x5f9] + 0x6bca0) != '\0')) {
    piVar5 = (int *)FUN_009e8090();
    cVar3 = (**(code **)(*piVar5 + 0x38))();
    if (cVar3 != '\0') {
      piVar5 = (int *)FUN_009e8090();
      cVar3 = (**(code **)(*piVar5 + 0x2c))();
      if (cVar3 == '\0') goto LAB_00656610;
    }
    piVar5 = (int *)FUN_00454ec0();
    if ((int)(piVar5[1] - *piVar5 & 0xfffffffcU) < 1) {
      iVar6 = DAT_00f09584;
      if (0 < (in_ECX[0x1c3] - in_ECX[0x1c2]) / 0x1c) {
        do {
          if (((in_ECX[0x1c3] - in_ECX[0x1c2]) / 0x1c < 2) && (-1 < iVar6)) break;
          iVar7 = in_ECX[0x1c3];
          iVar2 = in_ECX[0x1c2];
          (**(code **)(*(int *)in_ECX[0x65e] + 0x14))();
          iVar6 = FUN_00b31c00();
          iVar6 = iVar6 % ((iVar7 - iVar2) / 0x1c);
        } while (iVar6 == DAT_00f09584);
        DAT_00f09584 = iVar6;
        uStack_238 = (int *)FUN_009e8090();
        puStack_1d8 = (undefined1 *)&puStack_270;
        uStack_27c = (char *)(in_ECX[0x1c2] + DAT_00f09584 * 0x1c);
        uStack_274 = (char *)0xffffffff;
        puStack_278 = (undefined4 *)0x0;
        uStack_260 = 0xf00000000;
        puStack_270 = (uint *)((uint)puStack_270 & 0xffffff00);
        iStack_280 = 0x6565e1;
        FUN_00408ed0();
        uStack_274 = (char *)0x6565ec;
        (**(code **)(*uStack_238 + 8))();
        if (*(char *)(in_ECX[0x5f9] + 0x6bca0) != '\0') {
          piVar5 = (int *)FUN_009e8090();
          (**(code **)(*piVar5 + 0xc))();
        }
      }
    }
    else {
      uStack_260 = CONCAT44(0x65641e,(uint)uStack_260);
      FUN_008a8650();
      uStack_260 = CONCAT44(0x65642c,(uint)uStack_260);
      puVar11 = (undefined4 *)(**(code **)(*in_ECX + 0x58))();
      uStack_124 = *puVar11;
      uStack_120 = puVar11[1];
      uStack_260._4_4_ = (undefined1 **)&uStack_1c0;
      uStack_260._0_4_ = 0x656454;
      uVar10 = FUN_00454ec0();
      uStack_260 = CONCAT44(uStack_260._4_4_,uVar10);
      uStack_264 = (char *)0x65645a;
      FUN_00455290();
      uStack_18 = 0x1e;
      if (2 < iStack_1b0) {
        uStack_238 = (int *)FUN_009e8090();
        puStack_1d8 = (undefined1 *)&puStack_270;
        uStack_274 = (char *)0xffffffff;
        puStack_278 = (undefined4 *)0x0;
        uStack_27c = (char *)&uStack_1c0;
        uStack_260 = 0xf00000000;
        puStack_270 = (uint *)((uint)puStack_270 & 0xffffff00);
        iStack_280 = 0x6564a2;
        FUN_00408ed0();
        uStack_274 = (char *)0x6564ad;
        (**(code **)(*uStack_238 + 8))();
        if (*(char *)(in_ECX[0x5f9] + 0x6bca0) != '\0') {
          piVar5 = (int *)FUN_009e8090();
          (**(code **)(*piVar5 + 0xc))();
        }
      }
      uStack_18 = 0xffffffff;
      DAT_00f09584 = 0;
      if (0xf < uStack_1ac) {
        _uStack_258 = CONCAT44(uStack_254,uStack_1c0);
        uStack_260 = CONCAT44(&UNK_006564fd,(uint)uStack_260);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
  }
LAB_00656610:
  if (*(char *)((int)in_ECX + 5) == '\0') {
    uStack_260 = CONCAT44(0x656624,(uint)uStack_260);
    piVar5 = (int *)(**(code **)(*in_ECX + 0x58))();
    puStack_1d4 = (undefined1 *)*piVar5;
    iVar6 = *(int *)(*(int *)(DAT_012587e4 + 4) + piVar5[1] * 4);
    if ((int)(*(int *)(iVar6 + 0x9dc) - *(int *)(iVar6 + 0x9d8) & 0xfffffffcU) < 4) {
      uStack_260 = CONCAT44(0x65665e,(uint)uStack_260);
      pcVar12 = (char *)(**(code **)(*in_ECX + 0x58))();
      if (((*pcVar12 != 'R') || (pcVar12[1] != 'E')) || (pcVar12[2] != 'B')) {
        *(undefined1 *)((int)in_ECX + 0x1d21) = 1;
      }
    }
  }
  if (*(char *)((int)in_ECX + 0x1d21) != '\0') {
    if ((char)in_ECX[0x17] != '\0') {
      iVar6 = (**(code **)(*in_ECX + 0x44))();
      uStack_260 = CONCAT44(0x6566a5,(uint)uStack_260);
      (**(code **)(**(int **)(iVar6 + 0x38) + 0xc))();
      uStack_260 = CONCAT44(0x6566ae,(uint)uStack_260);
      uVar10 = (**(code **)(*in_ECX + 0x44))();
      uStack_260 = CONCAT44(uVar10,0x6566b4);
      FUN_009af9f0();
      uStack_260 = 0x260006566be;
      uStack_23c = (int *)FUN_00aae9af();
      uStack_1c = 0x1f;
      if (uStack_23c == (int *)0x0) {
        uStack_23c = (int *)0x0;
      }
      else {
        uStack_260 = 0xded94d;
        uStack_224 = 0xf;
        uStack_228 = 0;
        uStack_238 = (int *)((uint)uStack_238 & 0xffffff00);
        uStack_264 = (char *)0x6566f4;
        FUN_00409350();
        puStack_1dc = (undefined1 *)&puStack_288;
        ppuStack_290 = (undefined1 **)&puStack_288;
        uStack_1c = CONCAT31(uStack_1c._1_3_,0x20);
        puStack_28c = &uStack_238;
        unaff_ESI = 1;
        puStack_294 = (uint *)0x65671b;
        FUN_009da390();
        puStack_28c = (uint *)0x0;
        ppuStack_290 = (undefined1 **)0x0;
        puStack_294 = (uint *)0x0;
        puStack_298 = (undefined *)0x20;
        uStack_29c = 0x29a;
        uStack_2a0 = 2;
        puStack_1d8 = auStack_2bc;
        uStack_1c = 0x21;
        uStack_2c0 = 8;
        uStack_2a8 = 0xf;
        uStack_2ac = 0;
        pcStack_2c4 = "NoAdress";
        auStack_2bc[0] = 0;
        uStack_2c8 = 0x656753;
        FUN_00409350();
        puStack_200 = auStack_2d8;
        uStack_1c._0_1_ = 0x22;
        pcStack_2c4 = (char *)0xf;
        uStack_2c8 = 0;
        auStack_2d8[0] = 0;
        FUN_00409350("InitialSession",0xe);
        uStack_1c = CONCAT31(uStack_1c._1_3_,0x20);
        uStack_23c = (int *)FUN_009aeb90(uStack_23c);
      }
      uStack_1c = 0xffffffff;
      if ((unaff_ESI & 1) != 0) {
        unaff_ESI = unaff_ESI & 0xfffffffe;
        if (0xf < uStack_224) {
          uStack_260 = CONCAT44(uStack_238,&UNK_006567c3);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        uStack_224 = 0xf;
        uStack_228 = 0;
        uStack_238 = (int *)((uint)uStack_238 & 0xffffff00);
      }
      uStack_260 = CONCAT44(uStack_23c,0x6567e1);
      (**(code **)(*in_ECX + 0x48))();
    }
    iVar6 = in_ECX[0x759];
    if (iVar6 != 0) {
      _uStack_258 = CONCAT44(uStack_254,iVar6);
      uStack_260 = CONCAT44(0x6567f1,(uint)uStack_260);
      FUN_005f7a50();
      uStack_260 = CONCAT44(iVar6,&UNK_006567f7);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    piVar5 = (int *)FUN_009e8090();
    (**(code **)(*piVar5 + 0x10))();
    (**(code **)(*DAT_012586e8 + 8))();
    FUN_009a3270();
    iVar6 = DAT_01258aa4;
    if (DAT_01258aa4 != 0) {
      FUN_009c1fa0();
      _uStack_258 = CONCAT44(uStack_254,iVar6);
      uStack_260 = CONCAT44(&UNK_00656834,(uint)uStack_260);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_260 = CONCAT44(0x656847,(uint)uStack_260);
    fVar13 = (float)FUN_00aae9af();
    uStack_18 = 0x24;
    if (fVar13 != 0.0) {
      uStack_260 = CONCAT44(0x65686f,(uint)uStack_260);
      fStack_1fc = fVar13;
      uStack_260._4_4_ = (undefined1 **)(**(code **)(*in_ECX + 0x34))();
      uStack_260._0_4_ = 0x656879;
      uVar10 = (**(code **)(*in_ECX + 0x40))();
      uStack_260 = CONCAT44(uStack_260._4_4_,uVar10);
      puStack_268 = (undefined1 *)0x656880;
      uStack_264 = (char *)fVar13;
      FUN_005f8110();
    }
    puStack_1d4 = (undefined1 *)&stack0xfffffda8;
    uStack_18 = 0x25;
    fStack_1fc = 0.0;
    uStack_260 = CONCAT44(0x6568ae,(uint)uStack_260);
    FUN_009df260();
    uStack_18 = 0xffffffff;
  }
  uVar10 = 0;
  if (*(char *)((int)in_ECX + 0x1d22) != '\0') {
    if ((char)in_ECX[0x17] != '\0') {
      iVar6 = (**(code **)(*in_ECX + 0x44))();
      uStack_260 = CONCAT44(0x6568ef,(uint)uStack_260);
      (**(code **)(**(int **)(iVar6 + 0x38) + 0xc))();
      uStack_260 = CONCAT44(0x6568f8,(uint)uStack_260);
      uVar10 = (**(code **)(*in_ECX + 0x44))();
      uStack_260 = CONCAT44(uVar10,0x6568fe);
      FUN_009af9f0();
      uStack_260 = 0x26000656908;
      uStack_23c = (int *)FUN_00aae9af();
      uStack_1c = 0x26;
      if (uStack_23c == (int *)0x0) {
        uStack_23c = (int *)0x0;
      }
      else {
        uStack_260 = 0xded94d;
        uStack_224 = 0xf;
        uStack_228 = 0;
        uStack_238 = (int *)((uint)uStack_238 & 0xffffff00);
        uStack_264 = (char *)0x65693e;
        FUN_00409350();
        puStack_200 = (undefined1 *)&puStack_288;
        ppuStack_290 = (undefined1 **)&puStack_288;
        uStack_1c = CONCAT31(uStack_1c._1_3_,0x27);
        unaff_ESI = unaff_ESI | 2;
        puStack_28c = &uStack_238;
        puStack_294 = (uint *)0x656962;
        FUN_009da390();
        puStack_28c = (uint *)0x0;
        ppuStack_290 = (undefined1 **)0x0;
        puStack_294 = (uint *)0x0;
        puStack_298 = (undefined *)0x20;
        uStack_29c = 0x29a;
        uStack_2a0 = 2;
        puStack_1d8 = auStack_2bc;
        uStack_1c = 0x28;
        uStack_2c0 = 8;
        uStack_2a8 = 0xf;
        uStack_2ac = 0;
        pcStack_2c4 = "NoAdress";
        auStack_2bc[0] = 0;
        uStack_2c8 = 0x65699a;
        FUN_00409350();
        puStack_1dc = auStack_2d8;
        uStack_1c._0_1_ = 0x29;
        FUN_004471e0("InitialSession");
        uStack_1c = CONCAT31(uStack_1c._1_3_,0x27);
        uStack_23c = (int *)FUN_009aeb90(uStack_23c);
      }
      uStack_1c = 0xffffffff;
      if ((unaff_ESI & 2) != 0) {
        if (0xf < uStack_224) {
          uStack_260 = CONCAT44(uStack_238,&UNK_006569fa);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        uStack_224 = 0xf;
        uStack_228 = 0;
        uStack_238 = (int *)((uint)uStack_238 & 0xffffff00);
      }
      uStack_260 = CONCAT44(uStack_23c,0x656a18);
      (**(code **)(*in_ECX + 0x48))();
    }
    iVar6 = in_ECX[0x759];
    if (iVar6 == 0) {
      piVar5 = (int *)FUN_009e8090();
      (**(code **)(*piVar5 + 0x10))();
      (**(code **)(*DAT_012586e8 + 8))();
      FUN_009a3270();
      iVar6 = DAT_01258aa4;
      if (DAT_01258aa4 == 0) {
        uStack_260 = CONCAT44(0x656a7e,(uint)uStack_260);
        fStack_1fc = (float)FUN_00aae9af();
        uStack_18 = 0x2b;
        if (fStack_1fc == 0.0) {
          uVar10 = 0;
        }
        else {
          uStack_260 = CONCAT44(in_ECX[0x15],in_ECX[0x5f9]);
          puStack_268 = (undefined1 *)0x656aac;
          uStack_264 = (char *)fStack_1fc;
          uVar10 = FUN_00754a00();
        }
        puStack_1d4 = (undefined1 *)&stack0xfffffda8;
        uStack_18 = 0x2c;
        _uStack_258 = CONCAT44(uStack_254,uVar10);
        fStack_1fc = 0.0;
        uStack_260 = CONCAT44(0x656ada,(uint)uStack_260);
        FUN_009df260();
        ExceptionList = pvStack_20;
        return;
      }
      FUN_009c1fa0();
      _uStack_258 = CONCAT44(uStack_254,iVar6);
      uStack_260 = CONCAT44(&UNK_00656a6b,(uint)uStack_260);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    _uStack_258 = CONCAT44(uStack_254,iVar6);
    uStack_260 = CONCAT44(0x656a28,(uint)uStack_260);
    FUN_005f7a50();
    uStack_260 = CONCAT44(iVar6,&UNK_00656a2e);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if ((char)in_ECX[0x748] != '\0') {
    if ((char)in_ECX[0x17] != '\0') {
      iVar6 = (**(code **)(*in_ECX + 0x44))();
      uStack_260 = CONCAT44(0x656b20,(uint)uStack_260);
      (**(code **)(**(int **)(iVar6 + 0x38) + 0xc))();
      uStack_260 = CONCAT44(0x656b29,(uint)uStack_260);
      uVar14 = (**(code **)(*in_ECX + 0x44))();
      uStack_260 = CONCAT44(uVar14,0x656b2f);
      FUN_009af9f0();
      uStack_260 = 0x26000656b39;
      puVar15 = (undefined1 *)FUN_00aae9af();
      uStack_1c = 0x2d;
      puStack_200 = puVar15;
      if (puVar15 != (undefined1 *)0x0) {
        uStack_260 = CONCAT44(0x656b66,(uint)uStack_260);
        FUN_009885d0();
        puStack_1d8 = (undefined1 *)&puStack_288;
        ppuStack_290 = (undefined1 **)&puStack_288;
        uStack_1c = CONCAT31(uStack_1c._1_3_,0x2e);
        unaff_ESI = unaff_ESI | 4;
        puStack_294 = (uint *)0x656b88;
        puStack_28c = auStack_170;
        FUN_009da390();
        puStack_28c = (uint *)0x0;
        ppuStack_290 = (undefined1 **)0x0;
        puStack_294 = (uint *)0x0;
        puStack_298 = (undefined *)0x20;
        uStack_29c = 0x29a;
        uStack_2a0 = 2;
        puStack_1dc = auStack_2bc;
        uStack_1c = 0x2f;
        uStack_2c0 = 0x656bb8;
        FUN_009885d0();
        uStack_23c = (int *)auStack_2d8;
        uStack_1c._0_1_ = 0x30;
        FUN_009885d0();
        uStack_1c = CONCAT31(uStack_1c._1_3_,0x2e);
        uVar10 = FUN_009aeb90(puVar15);
      }
      uStack_1c = 0xffffffff;
      if ((unaff_ESI & 4) != 0) {
        unaff_ESI = unaff_ESI & 0xfffffffb;
        uStack_260 = CONCAT44(0x656c09,(uint)uStack_260);
        FUN_00408ad0();
      }
      uStack_260 = CONCAT44(uVar10,0x656c13);
      (**(code **)(*in_ECX + 0x48))();
    }
    DAT_01258b2c = 1;
    piVar5 = (int *)FUN_009e8090();
    (**(code **)(*piVar5 + 0x10))();
    uStack_260 = CONCAT44(0x656c36,(uint)uStack_260);
    PostQuitMessage(0);
  }
  uStack_238 = (int *)in_ECX[0x580];
  while ((uStack_238 != (undefined4 *)0x0 &&
         (iVar6 = (**(code **)(*(int *)*uStack_238 + 4))(), iVar6 != 3))) {
    uStack_238 = (int *)uStack_238[2];
  }
  uStack_220 = 0xf;
  uStack_224 = 0;
  local_234 = (float)((uint)local_234 & 0xffffff00);
  uStack_260 = 0xe048d000656c87;
  FUN_00409350();
  uStack_18 = 0x32;
  _uStack_258 = CONCAT44(uStack_254,&local_234);
  uStack_260 = CONCAT44(0x656ca4,(uint)uStack_260);
  piVar5 = (int *)(**(code **)(*(int *)in_ECX[0x770] + 0x7c))();
  uStack_260 = CONCAT44(0x656cad,(uint)uStack_260);
  uStack_23c = (int *)(**(code **)(*piVar5 + 0x2c))();
  uStack_1c = 0xffffffff;
  if (0xf < uStack_224) {
    uStack_260 = CONCAT44(uStack_238,&UNK_00656ccd);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  uStack_224 = 0xf;
  uStack_228 = 0;
  uStack_238 = (int *)((uint)uStack_238 & 0xffffff00);
  uStack_23c = (int *)*uStack_23c;
  if (uStack_23c != (undefined4 *)0x0) {
    do {
      uStack_260 = CONCAT44(0x656cfd,(uint)uStack_260);
      (**(code **)(*(int *)*uStack_23c + 0x2c))();
      uStack_260 = CONCAT44(0x656d0a,(uint)uStack_260);
      cVar3 = (**(code **)(*(int *)*uStack_23c + 0x28))();
      if (cVar3 != '\0') {
        unaff_EDI = CONCAT13(1,(int3)unaff_EDI);
      }
      uStack_23c = (int *)uStack_23c[2];
    } while (uStack_23c != (undefined4 *)0x0);
    if ((char)(unaff_EDI >> 0x18) != '\0') {
      uStack_260 = CONCAT44(0x656d3a,(uint)uStack_260);
      (**(code **)(*(int *)(in_ECX[0x770] + 0x18) + 0x38))();
    }
  }
  uStack_260._4_4_ = &puStack_200;
  uStack_260._0_4_ = 0x656d48;
  puVar16 = (uint *)(**(code **)(*in_ECX + 0x58))();
  puStack_1dc = (undefined1 *)*puVar16;
  iVar6 = *(int *)(*(int *)(DAT_012587e4 + 4) + puVar16[1] * 4);
  uStack_260._0_4_ = 0x11;
  uStack_264 = "messagecat_combat";
  in_ECX[0x76f] = *(int *)(iVar6 + 0xdac) - *(int *)(iVar6 + 0xda8) >> 3;
  uVar20 = unaff_ESI & 0xffffff;
  uStack_20c = 0xf;
  uStack_210 = 0;
  uStack_220 = uStack_220 & 0xffffff00;
  puStack_268 = (undefined1 *)0x656d97;
  FUN_00409350();
  pvStack_20 = (void *)0x33;
  uStack_260._0_4_ = 0x11;
  uStack_264 = "messagelog_window";
  uStack_228 = 0xf;
  fStack_22c = 0.0;
  uStack_23c = (int *)((uint)uStack_23c & 0xffffff00);
  puStack_268 = (undefined1 *)0x656dc4;
  FUN_00409350();
  pvStack_20 = (void *)0x34;
  uStack_260 = CONCAT44(uStack_260._4_4_,&uStack_23c);
  uStack_264 = (char *)0x656de6;
  piVar5 = (int *)(**(code **)(*(int *)in_ECX[0x58c] + 0x6c))();
  uStack_264 = (char *)&uStack_224;
  puStack_268 = (undefined1 *)0x656df4;
  iVar6 = (**(code **)(*piVar5 + 0x48))();
  if (*(int *)(iVar6 + 0x6c) == 1) {
    _uStack_258 = CONCAT17(1,_uStack_258);
    if (*(int *)in_ECX[0x1f8] != 1) goto LAB_00656e0a;
  }
  else {
LAB_00656e0a:
    _uStack_258 = _uStack_258 & 0xffffffffffffff;
  }
  if (((uint)pfStack_250 & 0x10) != 0) {
    pfStack_250 = (float *)((uint)pfStack_250 & 0xffffffef);
    if ((uint *)0xf < puStack_230) {
                    /* WARNING: Subroutine does not return */
      uStack_26c = &UNK_00656e2c;
      puStack_268 = (undefined1 *)uVar20;
      FUN_00aae91b();
    }
    puStack_230 = (uint *)0xf;
    local_234 = 0.0;
    uVar20 = (unaff_ESI >> 8 & 0xffff) << 8;
  }
  uStack_28 = 0xffffffff;
  if ((((uint)pfStack_250 & 8) != 0) &&
     (pfStack_250 = (float *)((uint)pfStack_250 & 0xfffffff7), 0xf < uStack_214)) {
    puStack_268 = (undefined1 *)uStack_228;
                    /* WARNING: Subroutine does not return */
    uStack_26c = &UNK_00656e64;
    FUN_00aae91b();
  }
  if (uStack_254._3_1_ == '\0') {
    puStack_268 = (undefined1 *)0x11;
    uStack_26c = "messagecat_combat";
    uStack_214 = 0xf;
    uStack_218 = 0;
    uStack_228 = uStack_228 & 0xffffff00;
    puStack_270 = (uint *)0x656e98;
    FUN_00409350();
    uStack_28 = 0x35;
    pfStack_250 = (float *)((uint)pfStack_250 | 0x20);
    puStack_268 = (undefined1 *)0x11;
    uStack_26c = "messagelog_window";
    puStack_230 = (uint *)0xf;
    local_234 = 0.0;
    puStack_270 = (uint *)0x656ec5;
    FUN_00409350();
    uStack_28 = 0x36;
    pfStack_250 = (float *)((uint)pfStack_250 | 0x40);
    puStack_268 = &stack0xfffffdbc;
    uStack_26c = (undefined1 *)0x656ee7;
    piVar5 = (int *)(**(code **)(*(int *)in_ECX[0x58c] + 0x6c))();
    uStack_26c = (char *)&fStack_22c;
    puStack_270 = (uint *)0x656ef5;
    iVar6 = (**(code **)(*piVar5 + 0x48))();
    if (*(int *)(iVar6 + 0x6c) == 1) {
LAB_00656f0a:
      _uStack_258 = _uStack_258 & 0xffffffffffffff;
    }
    else {
      _uStack_258 = CONCAT17(1,_uStack_258);
      if (*(int *)in_ECX[0x1f8] != 0) goto LAB_00656f0a;
    }
    if (((uint)pfStack_250 & 0x40) != 0) {
      pfStack_250 = (float *)((uint)pfStack_250 & 0xffffffbf);
      if ((uint *)0xf < puStack_230) {
                    /* WARNING: Subroutine does not return */
        uStack_26c = &UNK_00656f2c;
        puStack_268 = (undefined1 *)(uVar20 & 0xffffff00);
        FUN_00aae91b();
      }
      puStack_230 = (uint *)0xf;
      local_234 = 0.0;
    }
    uStack_28 = 0xffffffff;
    if ((((uint)pfStack_250 & 0x20) != 0) &&
       (pfStack_250 = (float *)((uint)pfStack_250 & 0xffffffdf), 0xf < uStack_214)) {
      puStack_268 = (undefined1 *)uStack_228;
                    /* WARNING: Subroutine does not return */
      uStack_26c = &UNK_00656f64;
      FUN_00aae91b();
    }
    if (uStack_254._3_1_ != '\0') {
      *(undefined4 *)in_ECX[0x1f8] = 1;
      goto LAB_00656f7a;
    }
  }
  else {
    *(undefined4 *)in_ECX[0x1f8] = 0;
LAB_00656f7a:
    uStack_24c = (undefined ***)CONCAT13(1,(undefined3)uStack_24c);
  }
  uStack_28 = 0xffffffff;
  puStack_268 = (undefined1 *)0x14;
  uStack_26c = "messagecat_diplomacy";
  uStack_214 = 0xf;
  uStack_218 = 0;
  uStack_228 = uStack_228 & 0xffffff00;
  puStack_270 = (uint *)0x656f9c;
  FUN_00409350();
  uStack_28 = 0x37;
  pfStack_250 = (float *)((uint)pfStack_250 | 0x80);
  puStack_268 = (undefined1 *)0x11;
  uStack_26c = "messagelog_window";
  puStack_230 = (uint *)0xf;
  local_234 = 0.0;
  puStack_270 = (uint *)0x656fcc;
  FUN_00409350();
  uStack_28 = 0x38;
  pfStack_250 = (float *)((uint)pfStack_250 | 0x100);
  puStack_268 = &stack0xfffffdbc;
  uStack_26c = (undefined1 *)0x656ff1;
  piVar5 = (int *)(**(code **)(*(int *)in_ECX[0x58c] + 0x6c))();
  uStack_26c = (char *)&fStack_22c;
  puStack_270 = (uint *)0x656fff;
  iVar6 = (**(code **)(*piVar5 + 0x48))();
  if (*(int *)(iVar6 + 0x6c) == 1) {
    uStack_260 = CONCAT17(1,(undefined7)uStack_260);
    if (*(int *)(in_ECX[0x1f8] + 4) != 1) goto LAB_00657016;
  }
  else {
LAB_00657016:
    uStack_260 = uStack_260 & 0xffffffffffffff;
  }
  if ((_uStack_258 & 0x100) != 0) {
    _uStack_258 = _uStack_258 & 0xfffffffffffffeff;
    if (0xf < uStack_238) {
      puStack_270 = (uint *)uStack_24c;
                    /* WARNING: Subroutine does not return */
      uStack_274 = &UNK_0065703e;
      FUN_00aae91b();
    }
    uStack_238 = (int *)0xf;
    uStack_23c = (int *)0x0;
    uStack_24c = (undefined ***)((uint)uStack_24c & 0xffffff00);
  }
  uStack_30 = 0xffffffff;
  if (((_uStack_258 & 0x80) != 0) &&
     (_uStack_258 = _uStack_258 & 0xffffffffffffff7f, 0xf < uStack_21c)) {
    puStack_270 = puStack_230;
                    /* WARNING: Subroutine does not return */
    uStack_274 = &UNK_00657079;
    FUN_00aae91b();
  }
  if (uStack_260._7_1_ == '\0') {
    puStack_270 = (uint *)0x14;
    uStack_274 = "messagecat_diplomacy";
    uStack_21c = 0xf;
    uStack_220 = 0;
    puStack_230 = (uint *)((uint)puStack_230 & 0xffffff00);
    puStack_278 = (undefined4 *)0x6570ae;
    FUN_00409350();
    uStack_30 = 0x39;
    _uStack_258 = _uStack_258 | 0x200;
    puStack_270 = (uint *)0x11;
    uStack_274 = "messagelog_window";
    uStack_238 = (int *)0xf;
    uStack_23c = (int *)0x0;
    uStack_24c = (undefined ***)((uint)uStack_24c & 0xffffff00);
    puStack_278 = (undefined4 *)0x6570de;
    FUN_00409350();
    uStack_30 = 0x3a;
    _uStack_258 = _uStack_258 | 0x400;
    puStack_270 = &uStack_24c;
    uStack_274 = (char *)0x657103;
    piVar5 = (int *)(**(code **)(*(int *)in_ECX[0x58c] + 0x6c))();
    uStack_274 = (char *)&local_234;
    puStack_278 = (undefined4 *)0x657111;
    iVar6 = (**(code **)(*piVar5 + 0x48))();
    if (*(int *)(iVar6 + 0x6c) == 1) {
LAB_00657127:
      uStack_260 = uStack_260 & 0xffffffffffffff;
    }
    else {
      uStack_260 = CONCAT17(1,(undefined7)uStack_260);
      if (*(int *)(in_ECX[0x1f8] + 4) != 0) goto LAB_00657127;
    }
    if ((_uStack_258 & 0x400) != 0) {
      _uStack_258 = _uStack_258 & 0xfffffffffffffbff;
      if (0xf < uStack_238) {
        puStack_270 = (uint *)uStack_24c;
                    /* WARNING: Subroutine does not return */
        uStack_274 = &UNK_0065714f;
        FUN_00aae91b();
      }
      uStack_238 = (int *)0xf;
      uStack_23c = (int *)0x0;
      uStack_24c = (undefined ***)((uint)uStack_24c & 0xffffff00);
    }
    uStack_30 = 0xffffffff;
    if (((_uStack_258 & 0x200) != 0) &&
       (_uStack_258 = _uStack_258 & 0xfffffffffffffdff, 0xf < uStack_21c)) {
      puStack_270 = puStack_230;
                    /* WARNING: Subroutine does not return */
      uStack_274 = &UNK_0065718d;
      FUN_00aae91b();
    }
    if (uStack_260._7_1_ != '\0') {
      *(undefined4 *)(in_ECX[0x1f8] + 4) = 1;
      goto LAB_006571a4;
    }
  }
  else {
    *(undefined4 *)(in_ECX[0x1f8] + 4) = 0;
LAB_006571a4:
    _uStack_258 = CONCAT17(1,_uStack_258);
  }
  uStack_30 = 0xffffffff;
  puStack_270 = (uint *)0x10;
  uStack_274 = "messagecat_units";
  uStack_21c = 0xf;
  uStack_220 = 0;
  puStack_230 = (uint *)((uint)puStack_230 & 0xffffff00);
  puStack_278 = (undefined4 *)0x6571c6;
  FUN_00409350();
  uStack_30 = 0x3b;
  _uStack_258 = _uStack_258 | 0x800;
  puStack_270 = (uint *)0x11;
  uStack_274 = "messagelog_window";
  uStack_238 = (int *)0xf;
  uStack_23c = (int *)0x0;
  uStack_24c = (undefined ***)((uint)uStack_24c & 0xffffff00);
  puStack_278 = (undefined4 *)0x6571f6;
  FUN_00409350();
  uStack_30 = 0x3c;
  _uStack_258 = _uStack_258 | 0x1000;
  puStack_270 = &uStack_24c;
  uStack_274 = (char *)0x65721b;
  piVar5 = (int *)(**(code **)(*(int *)in_ECX[0x58c] + 0x6c))();
  uStack_274 = (char *)&local_234;
  puStack_278 = (undefined4 *)0x657229;
  iVar6 = (**(code **)(*piVar5 + 0x48))();
  if (*(int *)(iVar6 + 0x6c) == 1) {
    uStack_264 = (char *)CONCAT13(1,(undefined3)uStack_264);
    if (*(int *)(in_ECX[0x1f8] + 8) != 1) goto LAB_00657240;
  }
  else {
LAB_00657240:
    uStack_264 = (char *)((uint)uStack_264 & 0xffffff);
  }
  if ((uStack_260 & 0x1000) != 0) {
    uStack_260 = uStack_260 & 0xffffffffffffefff;
    if (0xf < unaff_EBX) {
      puStack_278 = (undefined4 *)uStack_254;
                    /* WARNING: Subroutine does not return */
      uStack_27c = &UNK_00657268;
      FUN_00aae91b();
    }
    uStack_258 = (uint5)uVar19;
  }
  uStack_38 = 0xffffffff;
  if (((uStack_260 & 0x800) != 0) &&
     (uStack_260 = uStack_260 & 0xfffffffffffff7ff, 0xf < uStack_224)) {
    puStack_278 = uStack_238;
                    /* WARNING: Subroutine does not return */
    uStack_27c = &UNK_006572a6;
    FUN_00aae91b();
  }
  if (uStack_264._3_1_ == '\0') {
    puStack_278 = (undefined4 *)0x10;
    uStack_27c = "messagecat_units";
    uStack_224 = 0xf;
    uStack_228 = 0;
    uStack_238 = (int *)((uint)uStack_238 & 0xffffff00);
    iStack_280 = 0x6572db;
    FUN_00409350();
    uStack_38 = 0x3d;
    uStack_260 = uStack_260 | 0x2000;
    puStack_278 = (undefined4 *)0x11;
    uStack_27c = "messagelog_window";
    uStack_258 = (uint5)uVar19;
    iStack_280 = 0x65730b;
    FUN_00409350();
    uStack_38 = 0x3e;
    uStack_260 = uStack_260 | 0x4000;
    puStack_278 = &uStack_254;
    uStack_27c = (char *)0x657330;
    piVar5 = (int *)(**(code **)(*(int *)in_ECX[0x58c] + 0x6c))();
    uStack_27c = (char *)&uStack_23c;
    iStack_280 = 0x65733e;
    iVar6 = (**(code **)(*piVar5 + 0x48))();
    if (*(int *)(iVar6 + 0x6c) == 1) {
LAB_00657354:
      uStack_264 = (char *)((uint)uStack_264 & 0xffffff);
    }
    else {
      uStack_264 = (char *)CONCAT13(1,(undefined3)uStack_264);
      if (*(int *)(in_ECX[0x1f8] + 8) != 0) goto LAB_00657354;
    }
    if ((uStack_260 & 0x4000) != 0) {
      uStack_260 = uStack_260 & 0xffffffffffffbfff;
      uStack_258 = (uint5)uVar19;
    }
    uStack_38 = 0xffffffff;
    if (((uStack_260 & 0x2000) != 0) &&
       (uStack_260 = uStack_260 & 0xffffffffffffdfff, 0xf < uStack_224)) {
      puStack_278 = uStack_238;
                    /* WARNING: Subroutine does not return */
      uStack_27c = &UNK_006573ba;
      FUN_00aae91b();
    }
    if (uStack_264._3_1_ != '\0') {
      *(undefined4 *)(in_ECX[0x1f8] + 8) = 1;
      goto LAB_006573d1;
    }
  }
  else {
    *(undefined4 *)(in_ECX[0x1f8] + 8) = 0;
LAB_006573d1:
    uStack_260 = CONCAT17(1,(undefined7)uStack_260);
  }
  uStack_38 = 0xffffffff;
  puStack_278 = (undefined4 *)0x14;
  uStack_27c = "messagecat_provinces";
  uStack_224 = 0xf;
  uStack_228 = 0;
  uStack_238 = (int *)((uint)uStack_238 & 0xffffff00);
  iStack_280 = 0x6573f3;
  FUN_00409350();
  uStack_38 = 0x3f;
  uStack_260 = uStack_260 | 0x8000;
  puStack_278 = (undefined4 *)0x11;
  uStack_27c = "messagelog_window";
  uStack_258 = (uint5)uVar19;
  iStack_280 = 0x657423;
  FUN_00409350();
  uStack_38 = 0x40;
  uStack_260 = uStack_260 | 0x10000;
  puStack_278 = &uStack_254;
  uStack_27c = (char *)0x657448;
  piVar5 = (int *)(**(code **)(*(int *)in_ECX[0x58c] + 0x6c))();
  uStack_27c = (char *)&uStack_23c;
  iStack_280 = 0x657456;
  iVar6 = (**(code **)(*piVar5 + 0x48))();
  if (*(int *)(iVar6 + 0x6c) == 1) {
    uStack_26c = (char *)CONCAT13(1,(undefined3)uStack_26c);
    if (*(int *)(in_ECX[0x1f8] + 0xc) != 1) goto LAB_0065746d;
  }
  else {
LAB_0065746d:
    uStack_26c = (char *)((uint)uStack_26c & 0xffffff);
  }
  if (((uint)puStack_268 & 0x10000) != 0) {
    puStack_268 = (undefined1 *)((uint)puStack_268 & 0xfffeffff);
    if (0xf < (unaff_EDI | 0x18)) {
      iStack_280 = (int)uStack_260._4_4_;
                    /* WARNING: Subroutine does not return */
      pcStack_284 = &UNK_00657495;
      FUN_00aae91b();
    }
    uStack_24c = (undefined ***)0x0;
    uStack_260._0_5_ = (uint5)(uint)uStack_260;
  }
  uStack_40 = 0xffffffff;
  if ((((uint)puStack_268 & 0x8000) != 0) &&
     (puStack_268 = (undefined1 *)((uint)puStack_268 & 0xffff7fff), 0xf < (uint)fStack_22c)) {
    iStack_280 = 0xf;
                    /* WARNING: Subroutine does not return */
    pcStack_284 = &UNK_006574d3;
    FUN_00aae91b();
  }
  if (uStack_26c._3_1_ == '\0') {
    iStack_280 = 0x14;
    pcStack_284 = "messagecat_provinces";
    fStack_22c = 2.10195e-44;
    puStack_230 = (uint *)0x0;
    puStack_288 = (uint *)0x657508;
    FUN_00409350();
    uStack_40 = 0x41;
    puStack_268 = (undefined1 *)((uint)puStack_268 | 0x20000);
    iStack_280 = 0x11;
    pcStack_284 = "messagelog_window";
    uStack_24c = (undefined ***)0x0;
    uStack_260._0_5_ = (uint5)(uint)uStack_260;
    puStack_288 = (uint *)0x657538;
    FUN_00409350();
    uStack_40 = 0x42;
    puStack_268 = (undefined1 *)((uint)puStack_268 | 0x40000);
    iStack_280 = (int)&uStack_260 + 4;
    pcStack_284 = (char *)0x65755d;
    piVar5 = (int *)(**(code **)(*(int *)in_ECX[0x58c] + 0x6c))();
    pcStack_284 = &stack0xfffffdbc;
    puStack_288 = (uint *)0x65756b;
    iVar6 = (**(code **)(*piVar5 + 0x48))();
    if (*(int *)(iVar6 + 0x6c) == 1) {
LAB_00657581:
      uStack_26c = (char *)((uint)uStack_26c & 0xffffff);
    }
    else {
      uStack_26c = (char *)CONCAT13(1,(undefined3)uStack_26c);
      if (*(int *)(in_ECX[0x1f8] + 0xc) != 0) goto LAB_00657581;
    }
    if (((uint)puStack_268 & 0x40000) != 0) {
      puStack_268 = (undefined1 *)((uint)puStack_268 & 0xfffbffff);
      uStack_24c = (undefined ***)0x0;
      uStack_260._0_5_ = (uint5)(uint)uStack_260;
    }
    uStack_40 = 0xffffffff;
    if ((((uint)puStack_268 & 0x20000) != 0) &&
       (puStack_268 = (undefined1 *)((uint)puStack_268 & 0xfffdffff), 0xf < (uint)fStack_22c)) {
                    /* WARNING: Subroutine does not return */
      pcStack_284 = &UNK_006575e7;
      iStack_280 = 0;
      FUN_00aae91b();
    }
    if (uStack_26c._3_1_ != '\0') {
      *(undefined4 *)(in_ECX[0x1f8] + 0xc) = 1;
      goto LAB_006575fe;
    }
  }
  else {
    *(undefined4 *)(in_ECX[0x1f8] + 0xc) = 0;
LAB_006575fe:
    uStack_264 = (char *)CONCAT13(1,(undefined3)uStack_264);
  }
  uStack_40 = 0xffffffff;
  iStack_280 = 0x11;
  pcStack_284 = "messagecat_events";
  fStack_22c = 2.10195e-44;
  puStack_230 = (uint *)0x0;
  puStack_288 = (uint *)0x657620;
  FUN_00409350();
  uStack_40 = 0x43;
  puStack_268 = (undefined1 *)((uint)puStack_268 | 0x80000);
  iStack_280 = 0x11;
  pcStack_284 = "messagelog_window";
  uStack_24c = (undefined ***)0x0;
  uStack_260._0_5_ = (uint5)(uint)uStack_260;
  puStack_288 = (uint *)0x657650;
  FUN_00409350();
  uStack_40 = 0x44;
  puStack_268 = (undefined1 *)((uint)puStack_268 | 0x100000);
  iStack_280 = (int)&uStack_260 + 4;
  pcStack_284 = (char *)0x657675;
  piVar5 = (int *)(**(code **)(*(int *)in_ECX[0x58c] + 0x6c))();
  pcStack_284 = &stack0xfffffdbc;
  puStack_288 = (uint *)0x657683;
  iVar6 = (**(code **)(*piVar5 + 0x48))();
  if (*(int *)(iVar6 + 0x6c) == 1) {
    uStack_274 = (char *)CONCAT13(1,(undefined3)uStack_274);
    if (*(int *)(in_ECX[0x1f8] + 0x10) != 1) goto LAB_0065769a;
  }
  else {
LAB_0065769a:
    uStack_274 = (char *)((uint)uStack_274 & 0xffffff);
  }
  if (((uint)puStack_270 & 0x100000) != 0) {
    puStack_270 = (uint *)((uint)puStack_270 & 0xffefffff);
    if (0xf < pfStack_250) {
      puStack_288 = (uint *)uStack_264;
                    /* WARNING: Subroutine does not return */
      puStack_28c = (uint *)&UNK_006576c2;
      FUN_00aae91b();
    }
    pfStack_250 = (float *)0xf;
    _uStack_258 = _uStack_258 & 0xffffffff;
    uStack_264 = (char *)((uint)uStack_264 & 0xffffff00);
  }
  uStack_48 = 0xffffffff;
  if ((((uint)puStack_270 & 0x80000) != 0) &&
     (puStack_270 = (uint *)((uint)puStack_270 & 0xfff7ffff), 0xf < (uint)local_234)) {
    puStack_288 = (uint *)0xf;
                    /* WARNING: Subroutine does not return */
    puStack_28c = (uint *)&UNK_00657700;
    FUN_00aae91b();
  }
  if (uStack_274._3_1_ == '\0') {
    puStack_288 = (uint *)0x11;
    puStack_28c = (uint *)0xe0942c;
    local_234 = 2.10195e-44;
    uStack_238 = (int *)0x0;
    ppuStack_290 = (undefined1 **)0x657735;
    FUN_00409350();
    uStack_48 = 0x45;
    puStack_270 = (uint *)((uint)puStack_270 | 0x200000);
    puStack_288 = (uint *)0x11;
    puStack_28c = (uint *)0xe08fd0;
    pfStack_250 = (float *)0xf;
    _uStack_258 = _uStack_258 & 0xffffffff;
    uStack_264 = (char *)((uint)uStack_264 & 0xffffff00);
    ppuStack_290 = (undefined1 **)0x657765;
    FUN_00409350();
    uStack_48 = 0x46;
    puStack_270 = (uint *)((uint)puStack_270 | 0x400000);
    puStack_288 = &uStack_264;
    puStack_28c = (uint *)0x65778a;
    piVar5 = (int *)(**(code **)(*(int *)in_ECX[0x58c] + 0x6c))();
    puStack_28c = &uStack_24c;
    ppuStack_290 = (undefined1 **)0x657798;
    iVar6 = (**(code **)(*piVar5 + 0x48))();
    if (*(int *)(iVar6 + 0x6c) == 1) {
LAB_006577ae:
      uStack_274 = (char *)((uint)uStack_274 & 0xffffff);
    }
    else {
      uStack_274 = (char *)CONCAT13(1,(undefined3)uStack_274);
      if (*(int *)(in_ECX[0x1f8] + 0x10) != 0) goto LAB_006577ae;
    }
    if (((uint)puStack_270 & 0x400000) != 0) {
      puStack_270 = (uint *)((uint)puStack_270 & 0xffbfffff);
      if (0xf < pfStack_250) {
        puStack_288 = (uint *)uStack_264;
                    /* WARNING: Subroutine does not return */
        puStack_28c = (uint *)&UNK_006577d6;
        FUN_00aae91b();
      }
      pfStack_250 = (float *)0xf;
      _uStack_258 = _uStack_258 & 0xffffffff;
      uStack_264 = (char *)((uint)uStack_264 & 0xffffff00);
    }
    uStack_48 = 0xffffffff;
    if ((((uint)puStack_270 & 0x200000) != 0) &&
       (puStack_270 = (uint *)((uint)puStack_270 & 0xffdfffff), 0xf < (uint)local_234)) {
                    /* WARNING: Subroutine does not return */
      puStack_28c = (uint *)&UNK_00657814;
      puStack_288 = (uint *)0x0;
      FUN_00aae91b();
    }
    if (uStack_274._3_1_ != '\0') {
      *(undefined4 *)(in_ECX[0x1f8] + 0x10) = 1;
      goto LAB_0065782b;
    }
  }
  else {
    *(undefined4 *)(in_ECX[0x1f8] + 0x10) = 0;
LAB_0065782b:
    uStack_26c = (char *)CONCAT13(1,(undefined3)uStack_26c);
  }
  uStack_48 = 0xffffffff;
  puStack_288 = (uint *)0x11;
  puStack_28c = (uint *)0xe09440;
  local_234 = 2.10195e-44;
  uStack_238 = (int *)0x0;
  ppuStack_290 = (undefined1 **)0x65784d;
  FUN_00409350();
  uStack_48 = 0x47;
  puStack_270 = (uint *)((uint)puStack_270 | 0x800000);
  puStack_288 = (uint *)0x11;
  puStack_28c = (uint *)0xe08fd0;
  pfStack_250 = (float *)0xf;
  _uStack_258 = _uStack_258 & 0xffffffff;
  uStack_264 = (char *)((uint)uStack_264 & 0xffffff00);
  ppuStack_290 = (undefined1 **)0x65787d;
  FUN_00409350();
  uStack_48 = 0x48;
  puStack_270 = (uint *)((uint)puStack_270 | 0x1000000);
  puStack_288 = &uStack_264;
  puStack_28c = (uint *)0x6578a2;
  piVar5 = (int *)(**(code **)(*(int *)in_ECX[0x58c] + 0x6c))();
  puStack_28c = &uStack_24c;
  ppuStack_290 = (undefined1 **)0x6578b0;
  iVar6 = (**(code **)(*piVar5 + 0x48))();
  if (*(int *)(iVar6 + 0x6c) == 1) {
    uStack_27c = (char *)CONCAT13(1,(undefined3)uStack_27c);
    if (*(int *)(in_ECX[0x1f8] + 0x14) != 1) goto LAB_006578c7;
  }
  else {
LAB_006578c7:
    uStack_27c = (char *)((uint)uStack_27c & 0xffffff);
  }
  if (((uint)puStack_278 & 0x1000000) != 0) {
    puStack_278 = (undefined4 *)((uint)puStack_278 & 0xfeffffff);
    if (0xf < uVar19) {
      ppuStack_290 = (undefined1 **)uStack_26c;
                    /* WARNING: Subroutine does not return */
      puStack_294 = (uint *)&UNK_006578ef;
      FUN_00aae91b();
    }
    _uStack_258 = CONCAT44(uStack_254,0xf);
    uStack_260 = uStack_260 & 0xffffffff;
    uStack_26c = (char *)((uint)uStack_26c & 0xffffff00);
  }
  uStack_50 = 0xffffffff;
  if ((((uint)puStack_278 & 0x800000) != 0) &&
     (puStack_278 = (undefined4 *)((uint)puStack_278 & 0xff7fffff), 0xf < uStack_23c)) {
    ppuStack_290 = (undefined1 **)pfStack_250;
                    /* WARNING: Subroutine does not return */
    puStack_294 = (uint *)&UNK_0065792d;
    FUN_00aae91b();
  }
  if (uStack_27c._3_1_ == '\0') {
    ppuStack_290 = (undefined1 **)0x11;
    puStack_294 = (uint *)0xe09440;
    uStack_23c = (int *)0xf;
    pfStack_250 = (float *)((uint)pfStack_250 & 0xffffff00);
    puStack_298 = (undefined *)0x657962;
    FUN_00409350();
    uStack_50 = 0x49;
    puStack_278 = (undefined4 *)((uint)puStack_278 | 0x2000000);
    ppuStack_290 = (undefined1 **)0x11;
    puStack_294 = (uint *)0xe08fd0;
    _uStack_258 = CONCAT44(uStack_254,0xf);
    uStack_260 = uStack_260 & 0xffffffff;
    uStack_26c = (char *)((uint)uStack_26c & 0xffffff00);
    puStack_298 = (undefined *)0x657992;
    FUN_00409350();
    uStack_50 = 0x4a;
    puStack_278 = (undefined4 *)((uint)puStack_278 | 0x4000000);
    ppuStack_290 = (undefined1 **)&uStack_26c;
    puStack_294 = (uint *)0x6579b7;
    piVar5 = (int *)(**(code **)(*(int *)in_ECX[0x58c] + 0x6c))();
    puStack_294 = &uStack_254;
    puStack_298 = (undefined *)0x6579c5;
    iVar6 = (**(code **)(*piVar5 + 0x48))();
    if (*(int *)(iVar6 + 0x6c) == 1) {
LAB_006579db:
      uStack_27c = (char *)((uint)uStack_27c & 0xffffff);
    }
    else {
      uStack_27c = (char *)CONCAT13(1,(undefined3)uStack_27c);
      if (*(int *)(in_ECX[0x1f8] + 0x14) != 0) goto LAB_006579db;
    }
    if (((uint)puStack_278 & 0x4000000) != 0) {
      puStack_278 = (undefined4 *)((uint)puStack_278 & 0xfbffffff);
      if (0xf < uVar19) {
        ppuStack_290 = (undefined1 **)uStack_26c;
                    /* WARNING: Subroutine does not return */
        puStack_294 = (uint *)&UNK_00657a03;
        FUN_00aae91b();
      }
      _uStack_258 = CONCAT44(uStack_254,0xf);
      uStack_260 = uStack_260 & 0xffffffff;
      uStack_26c = (char *)((uint)uStack_26c & 0xffffff00);
    }
    uStack_50 = 0xffffffff;
    if ((((uint)puStack_278 & 0x2000000) != 0) && (0xf < uStack_23c)) {
      ppuStack_290 = (undefined1 **)pfStack_250;
                    /* WARNING: Subroutine does not return */
      puStack_294 = (uint *)&UNK_00657a39;
      FUN_00aae91b();
    }
    if (uStack_27c._3_1_ == '\0') {
      if (uStack_274._3_1_ == '\0') goto LAB_00657a67;
    }
    else {
      *(undefined4 *)(in_ECX[0x1f8] + 0x14) = 1;
    }
  }
  else {
    *(undefined4 *)(in_ECX[0x1f8] + 0x14) = 0;
  }
  uStack_50 = 0xffffffff;
  ppuStack_290 = (undefined1 **)(in_ECX + 0x1f8);
  puStack_294 = (uint *)0x657a67;
  FUN_0064f350();
LAB_00657a67:
  if ((*(int *)(in_ECX[0x789] + 0x20) == 0) ||
     (*(char *)(*(int *)(in_ECX[0x789] + 0x20) + 0x67) == '\0')) {
    ppuStack_290 = (undefined1 **)0x14;
    puStack_294 = (uint *)0xe08fb0;
    uStack_1c8 = 0xf;
    uStack_1cc = 0;
    puStack_1dc = (undefined1 *)((uint)puStack_1dc & 0xffffff00);
    puStack_298 = (undefined *)0x657af8;
    FUN_00409350();
    uStack_50 = 0x4c;
    ppuStack_290 = &puStack_1dc;
    puStack_294 = (uint *)0x657b1a;
    piVar5 = (int *)(**(code **)(*(int *)in_ECX[0x58c] + 0x34))();
    puStack_294 = (uint *)0x657b26;
    (**(code **)(*piVar5 + 0xb8))();
    puStack_294 = puStack_1e0;
    uVar20 = uStack_1cc;
  }
  else {
    ppuStack_290 = (undefined1 **)0x14;
    puStack_294 = (uint *)0xe08fb0;
    _uStack_258 = CONCAT44(uStack_254,0xf);
    uStack_260 = uStack_260 & 0xffffffff;
    uStack_26c = (char *)((uint)uStack_26c & 0xffffff00);
    puStack_298 = (undefined *)0x657a97;
    FUN_00409350();
    uStack_50 = 0x4b;
    ppuStack_290 = (undefined1 **)&uStack_26c;
    puStack_294 = (uint *)0x657ab6;
    piVar5 = (int *)(**(code **)(*(int *)in_ECX[0x58c] + 0x34))();
    puStack_294 = (uint *)0x657ac2;
    (**(code **)(*piVar5 + 0xbc))();
    puStack_294 = puStack_270;
    uVar20 = (uint)uStack_260._4_4_;
  }
  if (0xf < uVar20) {
                    /* WARNING: Subroutine does not return */
    puStack_298 = &UNK_00657b3d;
    FUN_00aae91b();
  }
  ExceptionList = pvStack_5c;
  return;
}

