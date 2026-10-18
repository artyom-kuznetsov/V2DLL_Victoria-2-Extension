// FUN_00a4f2c0 @ 00a4f2c0 body=[[00a4f2c0, 00a4fb7f]]


void FUN_00a4f2c0(undefined4 param_1,int *param_2,float *param_3,undefined4 param_4,
                 undefined4 param_5,int param_6)

{
  float fVar1;
  undefined4 uVar2;
  float *pfVar3;
  int in_ECX;
  uint uVar4;
  int iVar5;
  double *pdVar6;
  int iVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined4 uStack_284;
  undefined1 *puStack_230;
  undefined4 uStack_22c;
  undefined1 *puStack_228;
  undefined1 *puStack_224;
  undefined1 *puStack_220;
  undefined1 *puStack_21c;
  int *piStack_218;
  undefined4 uStack_214;
  undefined1 *puStack_210;
  int *piStack_20c;
  float fStack_208;
  undefined1 *puStack_204;
  undefined8 local_1f0;
  undefined8 local_1e8;
  double local_1e0;
  undefined4 local_1d8;
  float fStack_1d4;
  float local_1d0;
  undefined4 uStack_1cc;
  undefined8 local_1c8;
  undefined4 uStack_1c0;
  undefined8 uStack_1bc;
  undefined4 uStack_1b4;
  undefined8 uStack_1b0;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float afStack_198 [8];
  undefined1 auStack_178 [12];
  undefined1 auStack_16c [12];
  undefined1 auStack_160 [40];
  undefined1 auStack_138 [152];
  undefined1 auStack_a0 [12];
  undefined1 auStack_94 [52];
  undefined1 auStack_60 [24];
  undefined1 local_48 [68];
  
  local_1e0 = *(double *)(in_ECX + 0x78);
  local_1d8 = (undefined4)*(undefined8 *)(in_ECX + 0x80);
  fStack_1d4 = (float)((ulonglong)*(undefined8 *)(in_ECX + 0x80) >> 0x20);
  local_1d0 = (float)*(undefined8 *)(in_ECX + 0x68);
  uStack_1cc = (undefined4)((ulonglong)*(undefined8 *)(in_ECX + 0x68) >> 0x20);
  local_1c8 = *(undefined8 *)(in_ECX + 0x70);
  puStack_204 = local_48;
  local_1f0 = *(undefined8 *)(in_ECX + 0x58);
  fStack_208 = 2.8026e-45;
  local_1e8 = *(undefined8 *)(in_ECX + 0x60);
  piStack_20c = param_2;
  puStack_210 = (undefined1 *)0xa4f333;
  (**(code **)(*param_2 + 0xb4))();
  puStack_210 = auStack_94;
  uStack_214 = 3;
  piStack_218 = param_2;
  puStack_21c = (undefined1 *)0xa4f348;
  (**(code **)(*param_2 + 0xb4))();
  puStack_21c = auStack_a0;
  puStack_220 = auStack_60;
  puStack_224 = auStack_160;
  puStack_228 = (undefined1 *)0xa4f366;
  D3DXMatrixMultiply();
  puStack_230 = auStack_16c;
  uStack_22c = 0;
  puStack_228 = puStack_230;
  D3DXMatrixInverse();
  local_1f0 = CONCAT44((float)puStack_210 * param_3[1] + (float)piStack_20c * param_3[5] +
                       param_3[9] * fStack_208 + param_3[0xd],
                       *param_3 * (float)puStack_210 + (float)piStack_20c * param_3[4] +
                       fStack_208 * param_3[8] + param_3[0xc]);
  local_1e8 = CONCAT44(local_1e8._4_4_,
                       (float)puStack_210 * param_3[2] + (float)piStack_20c * param_3[6] +
                       param_3[10] * fStack_208 + param_3[0xe]);
  puStack_210 = (undefined1 *)
                (*param_3 * (float)puStack_220 + (float)puStack_21c * param_3[4] +
                 (float)piStack_218 * param_3[8] + param_3[0xc]);
  piStack_20c = (int *)((float)puStack_220 * param_3[1] + (float)puStack_21c * param_3[5] +
                        param_3[9] * (float)piStack_218 + param_3[0xd]);
  fStack_208 = (float)puStack_220 * param_3[2] + (float)puStack_21c * param_3[6] +
               param_3[10] * (float)piStack_218 + param_3[0xe];
  local_1e0 = (double)CONCAT44(DAT_00f092dc,DAT_00f092dc);
  local_1d8 = 0;
  fStack_1d4 = DAT_00f092fc;
  local_1d0 = DAT_00f092dc;
  uStack_1bc = CONCAT44(DAT_00f092fc,DAT_00f092fc);
  uStack_1cc = 0;
  uStack_1b0 = CONCAT44(DAT_00f092dc,DAT_00f092dc);
  uStack_1c0 = 0;
  uStack_1b4 = 0;
  piStack_218 = (int *)DAT_00f092fc;
  fStack_1a8 = DAT_00f092fc;
  puStack_220 = (undefined1 *)DAT_00f092fc;
  puStack_21c = (undefined1 *)DAT_00f092fc;
  local_1c8 = CONCAT44(DAT_00f092fc,DAT_00f092dc);
  fStack_1a4 = DAT_00f092fc;
  fStack_1a0 = DAT_00f092dc;
  fStack_19c = DAT_00f092fc;
  afStack_198[0] = DAT_00f092dc;
  afStack_198[1] = DAT_00f092fc;
  afStack_198[2] = DAT_00f092fc;
  afStack_198[3] = DAT_00f092fc;
  afStack_198[4] = DAT_00f092fc;
  afStack_198[5] = DAT_00f092fc;
  pdVar6 = &local_1e0;
  iVar5 = 8;
  do {
    D3DXVec3TransformCoord(pdVar6,pdVar6,auStack_178);
    pdVar6 = (double *)((int)pdVar6 + 0xc);
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  D3DXPlaneFromPoints(auStack_138,&local_1e0,&fStack_1d4,&local_1c8);
  D3DXPlaneFromPoints();
  D3DXPlaneFromPoints();
  D3DXPlaneFromPoints();
  D3DXPlaneFromPoints(auStack_138,&fStack_208,&stack0xfffffe04,&local_1d8);
  uStack_284 = &stack0xfffffe00;
  D3DXPlaneFromPoints(auStack_138,&puStack_224,&puStack_230);
  iVar5 = 0;
  uVar4 = 0;
  pfVar3 = afStack_198 + 1;
  do {
    if (uStack_284._3_1_ != '\0') break;
    if (pfVar3[-1] * (float)auStack_138 + *pfVar3 * (float)&fStack_1a8 +
        pfVar3[1] * (float)&fStack_19c + pfVar3[2] < -*(float *)(in_ECX + 0x88)) {
      uStack_284 = &DAT_01000000;
    }
    uVar4 = uVar4 + 1;
    pfVar3 = pfVar3 + 4;
  } while (uVar4 < 6);
  uVar4 = 0;
  pfVar3 = afStack_198;
  do {
    if (uStack_284._3_1_ != '\0') break;
    dVar11 = (double)pfVar3[1] * (double)(float)&local_1e8;
    dVar9 = dVar11 + (double)*pfVar3 * (double)(float)auStack_138;
    dVar8 = (double)pfVar3[2] * (double)(float)((int)&uStack_1bc + 4);
    fVar1 = pfVar3[3];
    if ((float)(dVar8 + dVar9 + (double)fVar1) <= 0.0) {
      dVar10 = (double)pfVar3[1] * (double)(float)&uStack_1bc;
      local_1e0 = (double)*pfVar3 * (double)(float)auStack_138;
      dVar12 = dVar10 + local_1e0;
      if ((((float)(dVar12 + dVar8 + (double)fVar1) <= 0.0) &&
          (dVar10 = dVar10 + (double)*pfVar3 * (double)(float)auStack_138,
          (float)(dVar10 + dVar8 + (double)fVar1) <= 0.0)) &&
         (dVar11 = dVar11 + local_1e0, (float)(dVar11 + dVar8 + (double)fVar1) <= 0.0)) {
        dVar8 = (double)pfVar3[2] * (double)(float)((int)&local_1f0 + 4);
        if (((0.0 < (float)(dVar8 + dVar9 + (double)fVar1)) ||
            (0.0 < (float)(dVar8 + dVar12 + (double)fVar1))) ||
           ((0.0 < (float)(dVar8 + dVar10 + (double)fVar1) ||
            (0.0 < (float)(dVar8 + dVar11 + (double)fVar1))))) {
          iVar5 = iVar5 + 1;
        }
        else {
          uStack_284 = &DAT_01000000;
        }
      }
    }
    uVar4 = uVar4 + 1;
    pfVar3 = pfVar3 + 4;
  } while (uVar4 < 6);
  if ((iVar5 == 6) || (uStack_284._3_1_ == '\0')) {
    if (param_6 == 0) {
      (**(code **)(*param_2 + 0x104))(param_2,0,*(undefined4 *)(*(int *)(in_ECX + 0x44) + 0x30));
    }
    else {
      (**(code **)(*param_2 + 0x104))(param_2,0,param_6);
    }
    uVar2 = *(undefined4 *)(in_ECX + 0x44);
    iVar5 = *(int *)(in_ECX + 0xe4);
    iVar7 = *(int *)(in_ECX + 0xe8) - iVar5 >> 2;
    if (iVar7 != 0) {
      iVar7 = iVar5 + iVar7 * 4;
      for (; iVar5 != iVar7; iVar5 = iVar5 + 4) {
        FUN_00a43230(param_1,param_2,uVar2);
      }
    }
  }
  return;
}

