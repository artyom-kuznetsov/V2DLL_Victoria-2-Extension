// FUN_00754f90 @ 00754f90 body=[[00754f90, 00755054] [00755058, 00755080] [00755084, 00755177] [0075517b, 0075526e] [00755272, 00755667] [0075566b, 007556f3] [007556f7, 007557cc] [007557d0, 00755897] [0075589b, 007558c7] [007558cb, 00755ae8] [00755af2, 00755b77] [00755b7b, 00755df4]]


void FUN_00754f90(void)

{
  void *_Dst;
  code *pcVar1;
  bool bVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  short *psVar9;
  int iVar10;
  int *piVar11;
  int *in_ECX;
  uint unaff_EBX;
  uint *unaff_ESI;
  uint uVar12;
  float10 fVar13;
  uint uStack_18c;
  int iStack_188;
  undefined4 uStack_184;
  int *piStack_180;
  char *pcStack_17c;
  undefined4 uStack_164;
  float fVar14;
  uint auStack_150 [2];
  int *piStack_148;
  uint local_144;
  undefined4 uStack_140;
  float fStack_13c;
  uint uStack_138;
  uint local_134;
  uint local_130;
  uint uStack_12c;
  undefined4 uStack_128;
  uint local_124;
  uint uStack_120;
  undefined4 uStack_11c;
  float fStack_118;
  float local_114;
  float local_110;
  undefined4 uStack_108;
  undefined auStack_e0 [112];
  undefined **ppuStack_70;
  undefined **ppuStack_60;
  undefined4 uStack_38;
  void *pvStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00bb0405;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  FUN_006481d0();
  if (in_ECX[0x1c1] != 0) {
    local_110 = 2.10195e-44;
    local_114 = 0.0;
    local_124 = local_124 & 0xffffff00;
    FUN_00409350();
    local_c = 0;
    local_130 = 0xf;
    local_134 = 0;
    local_144 = local_144 & 0xffffff00;
    FUN_00409350();
    local_c = CONCAT31(local_c._1_3_,1);
    piVar4 = (int *)(**(code **)(*(int *)in_ECX[0x1c1] + 0x6c))();
    piVar4 = (int *)(**(code **)(*piVar4 + 0x34))();
    (**(code **)(*piVar4 + 0x38))();
    if (0xf < local_130) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_c = 0xffffffff;
    local_130 = 0xf;
    local_134 = 0;
    local_144 = local_144 & 0xffffff00;
    if (0xf < (uint)local_110) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  if ((*(char *)(in_ECX[0x79] + 0x6bca0) != '\0') &&
     (iVar5 = FUN_00475500(), 0.0 < *(float *)(iVar5 + 0x80))) {
    piVar4 = (int *)FUN_009e8090();
    cVar3 = (**(code **)(*piVar4 + 0x2c))();
    if (cVar3 != '\0') {
      local_110 = 2.10195e-44;
      local_114 = 0.0;
      local_124 = local_124 & 0xffffff00;
      FUN_00409350();
      local_c = 2;
      FUN_004015b0();
      local_c._0_1_ = 3;
      FUN_00987d50();
      FUN_00401280();
      uStack_1c = CONCAT31(uStack_1c._1_3_,2);
      FUN_00987ac0();
      ppuStack_70 = std::ios_base::vftable;
      FUN_00aad52d();
      uStack_1c = 0xffffffff;
      if (0xf < uStack_120) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      piVar4 = (int *)FUN_009e8090();
      unaff_ESI = &uStack_18c;
      pcStack_17c = (char *)0x0;
      uStack_18c = uStack_18c & 0xffffff00;
      FUN_00409350("music/thecoronation_titletheme.mp3",0x22);
      (**(code **)(*piVar4 + 8))();
      piVar4 = (int *)FUN_009e8090();
      (**(code **)(*piVar4 + 0xc))();
      fStack_13c = 2.10195e-44;
      uStack_140 = 0;
      auStack_150[0] = auStack_150[0] & 0xffffff00;
      FUN_00409350("frontend.cpp",0xc);
      uStack_38 = 4;
      uVar6 = FUN_004015b0(auStack_150,0x88,3);
      uStack_38 = CONCAT31(uStack_38._1_3_,5);
      FUN_00987d50(uVar6,"end song play",0xd,0);
      FUN_00401280();
      local_c = CONCAT31(local_c._1_3_,4);
      FUN_00987ac0();
      ppuStack_60 = std::ios_base::vftable;
      FUN_00aad52d();
      local_c = 0xffffffff;
      if (0xf < (uint)local_110) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
  }
  FUN_00758c70();
  if (*(char *)(in_ECX[0x79] + 0x6bcdc) != '\0') {
    piStack_148 = (int *)in_ECX[0x16];
    iVar5 = *piStack_148;
    (**(code **)(iVar5 + 0x14))();
    (**(code **)(iVar5 + 0x10))();
    *(undefined1 *)(in_ECX[0x79] + 0x6bcdc) = 0;
  }
  if (in_ECX[0x1d] != 0) {
    (**(code **)(**(int **)(in_ECX[0x7a] + 0xe4) + 0x10))();
    auStack_150[0] = in_ECX[0x1d];
    if ((auStack_150[0] & 0xf) != 0) {
      (**(code **)(*in_ECX + 0x38))();
      FUN_007fc360();
    }
    in_ECX[0x1d] = 0;
    _Dst = (void *)in_ECX[0x1e];
    if (_Dst != (void *)in_ECX[0x1f]) {
      auStack_150[0] = 0;
      FID_conflict__memcpy(_Dst,(void *)in_ECX[0x1f],0);
      in_ECX[0x1f] = (int)_Dst + auStack_150[0];
    }
    (**(code **)(**(int **)(in_ECX[0x7a] + 0xe4) + 0x10))();
  }
  iVar5 = in_ECX[0x7a];
  DAT_01258a66 = 0;
  if (*(int *)(iVar5 + 300) != 0) {
    FUN_009af9f0();
  }
  DAT_01258a66 = 1;
  if (*(int *)(iVar5 + 0x130) != 0) {
    FUN_009af9f0();
  }
  cVar3 = (**(code **)(*(int *)in_ECX[0x16] + 0x20))();
  if (cVar3 != '\0') {
    uStack_138 = in_ECX[0x16];
    iVar5 = in_ECX[0x1be];
    local_144 = 0;
    uStack_140 = 0;
    fStack_13c = 0.0;
    local_134 = 1;
    local_130 = 1;
    uStack_12c = uStack_12c & 0xffff0000;
    puVar7 = (undefined8 *)FUN_00aae9af();
    if (puVar7 == (undefined8 *)0x0) {
      puVar7 = (undefined8 *)0x0;
    }
    else {
      *puVar7 = CONCAT44(uStack_140,local_144);
      puVar7[1] = CONCAT44(uStack_138,fStack_13c);
      puVar7[2] = CONCAT44(local_130,local_134);
      *(uint *)(puVar7 + 3) = uStack_12c;
      *(int *)((int)puVar7 + 0x1c) = iVar5;
      *(undefined4 *)(puVar7 + 4) = 0;
      *(undefined1 *)((int)puVar7 + 0x24) = 0;
    }
    iVar10 = in_ECX[0x1bf];
    in_ECX[0x1be] = (int)puVar7;
    in_ECX[0x1bf] = iVar10 + 1;
    if (iVar10 == 0) {
      in_ECX[0x1bd] = (int)puVar7;
    }
    else {
      *(undefined8 **)(iVar5 + 0x20) = puVar7;
    }
  }
  cVar3 = (**(code **)(*(int *)in_ECX[0x16] + 0x58))();
  if (cVar3 != '\0') {
    uStack_138 = in_ECX[0x16];
    iVar5 = in_ECX[0x1be];
    local_144 = 0;
    uStack_140 = 0;
    fStack_13c = 0.0;
    local_134 = 2;
    local_130 = 1;
    uStack_12c = uStack_12c & 0xffff0000;
    puVar7 = (undefined8 *)FUN_00aae9af();
    if (puVar7 == (undefined8 *)0x0) {
      puVar7 = (undefined8 *)0x0;
    }
    else {
      *puVar7 = CONCAT44(uStack_140,local_144);
      puVar7[1] = CONCAT44(uStack_138,fStack_13c);
      puVar7[2] = CONCAT44(local_130,local_134);
      *(uint *)(puVar7 + 3) = uStack_12c;
      *(int *)((int)puVar7 + 0x1c) = iVar5;
      *(undefined4 *)(puVar7 + 4) = 0;
      *(undefined1 *)((int)puVar7 + 0x24) = 0;
    }
    iVar10 = in_ECX[0x1bf];
    in_ECX[0x1be] = (int)puVar7;
    in_ECX[0x1bf] = iVar10 + 1;
    if (iVar10 == 0) {
      in_ECX[0x1bd] = (int)puVar7;
    }
    else {
      *(undefined8 **)(iVar5 + 0x20) = puVar7;
    }
  }
  iVar5 = in_ECX[0x1be];
  local_144 = 0;
  uStack_140 = 0;
  fStack_13c = 1.4013e-45;
  uStack_138 = 0;
  local_134 = 0;
  local_130 = 0;
  uStack_12c = uStack_12c & 0xffff0000;
  puVar7 = (undefined8 *)FUN_00aae9af();
  if (puVar7 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)0x0;
  }
  else {
    *puVar7 = CONCAT44(uStack_140,local_144);
    puVar7[1] = CONCAT44(uStack_138,fStack_13c);
    puVar7[2] = CONCAT44(local_130,local_134);
    *(uint *)(puVar7 + 3) = uStack_12c;
    *(int *)((int)puVar7 + 0x1c) = iVar5;
    *(undefined4 *)(puVar7 + 4) = 0;
    *(undefined1 *)((int)puVar7 + 0x24) = 0;
  }
  iVar10 = in_ECX[0x1bf];
  in_ECX[0x1be] = (int)puVar7;
  in_ECX[0x1bf] = iVar10 + 1;
  if (iVar10 == 0) {
    in_ECX[0x1bd] = (int)puVar7;
  }
  else {
    *(undefined8 **)(iVar5 + 0x20) = puVar7;
  }
  uStack_164 = auStack_e0;
  (**(code **)(*(int *)in_ECX[0x16] + 0x4c))();
  FUN_007577d0();
  for (uVar12 = in_ECX[0x1bd]; auStack_150[0] = uVar12, uVar12 != 0;
      uVar12 = *(uint *)(uVar12 + 0x20)) {
    if (((*(int *)(uVar12 + 8) == 0) &&
        (cVar3 = (**(code **)(*(int *)in_ECX[7] + 0x28))(), cVar3 != '\0')) &&
       (cVar3 = (**(code **)(*(int *)in_ECX[0x16] + 0x2c))(), cVar3 != '\0')) {
      iVar5 = *(int *)(DAT_01258a80 + 0x98);
      in_ECX[0x24] = 0;
      in_ECX[0x25] = iVar5;
      FUN_00759450();
      iVar5 = (**(code **)(*(int *)in_ECX[0x16] + 0x4c))();
      iVar5 = *(int *)(iVar5 + 4);
      piVar4 = (int *)(**(code **)(*(int *)in_ECX[0x16] + 0x4c))();
      local_114 = (float)*piVar4;
      local_110 = (float)iVar5;
      uStack_11c = 0xf;
      uStack_120 = 0;
      local_130 = local_130 & 0xffffff00;
      FUN_00409350();
      uStack_18 = 6;
      piVar4 = (int *)(**(code **)(*(int *)in_ECX[0x23] + 0x7c))();
      iVar5 = (**(code **)(*piVar4 + 0x2c))();
      uStack_1c = 0xffffffff;
      if (0xf < uStack_120) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      if (0 < *(int *)(iVar5 + 8)) {
        uStack_120 = 0xf;
        local_124 = 0;
        local_134 = local_134 & 0xffffff00;
        pcStack_17c = (char *)0x755697;
        FUN_00409350();
        uStack_1c = 7;
        piVar4 = (int *)(**(code **)(*(int *)in_ECX[0x23] + 0x7c))();
        puVar8 = (undefined4 *)(**(code **)(*piVar4 + 0x2c))();
        pcStack_17c = (char *)0x7556d1;
        psVar9 = (short *)(**(code **)(*(int *)(*(int *)*puVar8 + 0x1c) + 0x14))();
        unaff_EBX = (uint)*psVar9;
        uStack_1c = 0xffffffff;
        if (0xf < uStack_120) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
      }
      uStack_1c = 0xffffffff;
      uStack_138 = (uint)fStack_118;
      iVar5 = (**(code **)(*in_ECX + 0x40))();
      uStack_108 = *(undefined4 *)(iVar5 + 0x6b9c0);
      if ((float)*(int *)(iVar5 + 0x6b9bc) < (float)(int)unaff_EBX + fStack_118) {
        uStack_138 = (uint)((fStack_118 - (float)(int)unaff_EBX) - 10.0);
      }
      uStack_120 = 0xf;
      local_124 = 0;
      local_134 = local_134 & 0xffffff00;
      pcStack_17c = (undefined1 *)0x755783;
      FUN_00409350();
      uStack_1c = 8;
      piVar4 = (int *)(**(code **)(*(int *)in_ECX[0x23] + 0x7c))();
      iVar5 = (**(code **)(*piVar4 + 0x2c))();
      uStack_20 = 0xffffffff;
      bVar2 = 0 < *(int *)(iVar5 + 8);
      uStack_164 = (undefined *)((uint)bVar2 << 0x18);
      if (0xf < local_124) {
                    /* WARNING: Subroutine does not return */
        pcStack_17c = &UNK_007557cd;
        FUN_00aae91b();
      }
      if (bVar2) {
        pcStack_17c = "options";
        local_124 = 0xf;
        uStack_128 = 0;
        uStack_138 = uStack_138 & 0xffffff00;
        piStack_180 = (int *)0x7557fd;
        FUN_00409350();
        uStack_20 = 9;
        pcStack_17c = "options";
        local_144 = 0xf;
        piStack_148 = (int *)0x0;
        piStack_180 = (int *)0x755825;
        FUN_00409350();
        uStack_20 = CONCAT31(uStack_20._1_3_,10);
        pcStack_17c = (char *)0x75583f;
        piVar4 = (int *)(**(code **)(*(int *)in_ECX[0x23] + 0x7c))();
        pcStack_17c = (char *)0x755848;
        puVar8 = (undefined4 *)(**(code **)(*piVar4 + 0x2c))();
        iVar5 = *(int *)*puVar8;
        pcStack_17c = &stack0xfffffea4;
        piStack_180 = (int *)0x75585e;
        piVar4 = (int *)(**(code **)(*(int *)in_ECX[0x23] + 0x7c))();
        piStack_180 = (int *)0x755867;
        iVar10 = (**(code **)(*piVar4 + 0x2c))();
        uStack_164 = *(undefined **)(iVar10 + 8);
        piStack_180 = &uStack_11c;
        uStack_184 = 0x75587e;
        (**(code **)(*(int *)(iVar5 + 0x1c) + 0x14))();
        if (0xf < local_144) {
                    /* WARNING: Subroutine does not return */
          pcStack_17c = &UNK_00755898;
          FUN_00aae91b();
        }
        uStack_20 = 0xffffffff;
        local_144 = 0xf;
        piStack_148 = (int *)0x0;
        unaff_EBX = unaff_EBX & 0xffffff00;
        if (0xf < local_124) {
                    /* WARNING: Subroutine does not return */
          pcStack_17c = &UNK_007558c8;
          FUN_00aae91b();
        }
      }
      uStack_20 = 0xffffffff;
      unaff_ESI = (uint *)(int)fStack_118;
      iVar5 = (**(code **)(*in_ECX + 0x40))();
      local_110 = *(float *)(iVar5 + 0x6b9bc);
      pcStack_17c = (char *)fStack_13c;
      piStack_180 = (undefined4 *)0x755947;
      (**(code **)(*(int *)in_ECX[0x23] + 0xa8))();
      uVar12 = auStack_150[0];
    }
  }
  (**(code **)(*(int *)in_ECX[0x15] + 4))();
  (**(code **)(*in_ECX + 0x38))();
  for (piVar4 = (int *)in_ECX[0x1bd]; piVar4 != (int *)0x0; piVar4 = (int *)piVar4[8]) {
    if (((piVar4[2] == 1) && (piVar4[1] != 0x102)) && (*piVar4 == 0x7a)) {
      *(undefined1 *)(piVar4 + 6) = 1;
      *(undefined1 *)(in_ECX + 0x6c) = 1;
    }
    if ((piVar4[2] == 0) && (piVar4[4] == 3)) {
      (**(code **)(*(int *)in_ECX[0x16] + 0x4c))();
      pcStack_17c = (char *)0x7559dd;
      piVar11 = (int *)(**(code **)(*(int *)in_ECX[0x16] + 0x4c))();
      fStack_118 = (float)*piVar11;
      local_114 = (float)(int)unaff_ESI;
      if (piVar4[5] == 1) {
        unaff_ESI = (uint *)in_ECX[0xda];
        uStack_138 = (**(code **)(*in_ECX + 0x38))();
        if (*(int *)(uStack_138 + 0x20cc) == 0) {
          iVar5 = 0;
        }
        else {
          piStack_180 = (undefined4 *)0x755a34;
          pcStack_17c = (char *)(uStack_138 + 0x20bc);
          iVar5 = FUN_007f15e0();
        }
        *(int *)(uStack_138 + 0x3a1c) = iVar5;
        if ((iVar5 != 0) && (*(int *)(*(int *)(iVar5 + 0xc) + 300) != 0)) {
          (**(code **)(**(int **)(in_ECX[0x1d3] + in_ECX[0x1d7] * 4) + 0x14))();
        }
      }
    }
    if (((((char)piVar4[6] == '\0') && (piVar4[2] == 0)) && (piVar4[5] == 4)) &&
       (iVar5 = (**(code **)(*in_ECX + 0x6c))(), *(char *)(iVar5 + 0x355) == '\0')) {
      *(undefined1 *)(iVar5 + 0x354) = 1;
    }
  }
  FUN_009e7350();
  pcStack_17c = (char *)0x755ab9;
  FUN_00648460();
  if (((in_ECX[0x6d] != 0) && (iVar5 = *(int *)(in_ECX[0x6d] + 0x20), iVar5 != 0)) &&
     (*(char *)(iVar5 + 0x67) != '\0')) {
    FUN_007b4340();
  }
  if (in_ECX[0x1bd] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  in_ECX[0x1bd] = 0;
  in_ECX[0x1be] = 0;
  in_ECX[0x1bf] = 0;
  (**(code **)(*(int *)in_ECX[7] + 0x14))();
  uStack_140 = 0xf;
  local_144 = 0;
  pcStack_17c = (char *)0x755b34;
  FUN_00409350();
  uStack_1c = 0xb;
  piVar4 = (int *)(**(code **)(*(int *)in_ECX[0x23] + 0x7c))();
  piVar4 = (int *)(**(code **)(*piVar4 + 0x2c))();
  uStack_20 = 0xffffffff;
  if (0xf < local_144) {
                    /* WARNING: Subroutine does not return */
    pcStack_17c = &UNK_00755b78;
    FUN_00aae91b();
  }
  local_144 = 0xf;
  piStack_148 = (int *)0x0;
  puVar8 = (undefined4 *)*piVar4;
  if (puVar8 != (undefined4 *)0x0) {
    do {
      (**(code **)(*(int *)*puVar8 + 0x2c))();
      cVar3 = (**(code **)(*(int *)*puVar8 + 0x28))();
      if (cVar3 != '\0') {
        uStack_164 = &DAT_01000000;
      }
      puVar8 = (undefined4 *)puVar8[2];
    } while (puVar8 != (undefined4 *)0x0);
    if (uStack_164._3_1_ != '\0') {
      (**(code **)(*(int *)(in_ECX[0x23] + 0x18) + 0x38))();
    }
  }
  fVar14 = 0.0;
  fVar13 = (float10)(**(code **)(*(int *)in_ECX[0xdd] + 0x14))();
  fStack_13c = (float)fVar13;
  if (0.0 < (float)in_ECX[0x1d9]) {
    fVar14 = fStack_13c - (float)in_ECX[0x1d9];
  }
  pcVar1 = *(code **)(*in_ECX + 0x38);
  in_ECX[0x1d9] = (int)fStack_13c;
  iVar5 = (*pcVar1)();
  uStack_184 = *(undefined4 *)(iVar5 + 0x3a20);
  piStack_180 = in_ECX + 0x1bd;
  iStack_188 = in_ECX[7];
  uStack_18c = 0x755c50;
  pcStack_17c = (char *)fVar14;
  FUN_0063f870();
  pcStack_17c = (char *)(in_ECX[0xda] + 0x1c);
  piStack_180 = (int *)0x755c60;
  FUN_009eb690();
  pcStack_17c = (char *)0x755c66;
  FUN_00755e00();
  if (DAT_0131cb34 == (int *)0x0) {
    pcStack_17c = (char *)0x755c77;
    piVar4 = (int *)FUN_00aae9af();
    if (piVar4 == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      DAT_00f20c3c = 3;
      *piVar4 = (int)CNullMusic::vftable;
    }
    uStack_20 = 0xc;
    local_114 = 0.0;
    if ((piVar4 != DAT_0131cb34) && (DAT_0131cb34 != (int *)0x0)) {
      pcStack_17c = (char *)0x755cbb;
      (**(code **)*DAT_0131cb34)();
    }
    uStack_20 = 0xffffffff;
    DAT_0131cb34 = piVar4;
  }
  cVar3 = (**(code **)(*DAT_0131cb34 + 0x38))();
  if (cVar3 != '\0') {
    if (DAT_0131cb34 == (int *)0x0) {
      pcStack_17c = (char *)0x755cee;
      piVar4 = (int *)FUN_00aae9af();
      if (piVar4 == (int *)0x0) {
        piVar4 = (int *)0x0;
      }
      else {
        DAT_00f20c3c = 3;
        *piVar4 = (int)CNullMusic::vftable;
      }
      uStack_20 = 0xd;
      local_114 = 0.0;
      if ((piVar4 != DAT_0131cb34) && (DAT_0131cb34 != (int *)0x0)) {
        pcStack_17c = (char *)0x755d30;
        (**(code **)*DAT_0131cb34)();
      }
      uStack_20 = 0xffffffff;
      DAT_0131cb34 = piVar4;
    }
    cVar3 = (**(code **)(*DAT_0131cb34 + 0x2c))();
    if (cVar3 == '\0') goto LAB_00755dce;
  }
  if (*(char *)(in_ECX[0x79] + 0x6bca0) != '\0') {
    if (DAT_0131cb34 == (int *)0x0) {
      pcStack_17c = (char *)0x755d72;
      piVar4 = (int *)FUN_00aae9af();
      if (piVar4 == (int *)0x0) {
        piVar4 = (int *)0x0;
      }
      else {
        DAT_00f20c3c = 3;
        *piVar4 = (int)CNullMusic::vftable;
      }
      uStack_20 = 0xe;
      local_114 = 0.0;
      if ((piVar4 != DAT_0131cb34) && (DAT_0131cb34 != (int *)0x0)) {
        pcStack_17c = (char *)0x755db4;
        (**(code **)*DAT_0131cb34)();
      }
      uStack_20 = 0xffffffff;
      DAT_0131cb34 = piVar4;
    }
    (**(code **)(*DAT_0131cb34 + 0xc))();
  }
LAB_00755dce:
  if (*(char *)((int)in_ECX + 0x769) != '\0') {
    pcStack_17c = (char *)0x755dde;
    PostQuitMessage(0);
  }
  ExceptionList = pvStack_28;
  return;
}

