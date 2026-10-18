// FUN_00a50b20 @ 00a50b20 body=[[00a50b20, 00a51039] [00a51040, 00a51137] [00a51140, 00a513a6]]


/* WARNING: Type propagation algorithm not settling */

bool FUN_00a50b20(float *param_1,int param_2)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 *puVar7;
  float *pfVar8;
  undefined4 **ppuVar9;
  int in_ECX;
  int iVar10;
  float unaff_EBX;
  uint uVar11;
  undefined4 *puVar12;
  undefined4 uStack_26c;
  undefined1 *puStack_210;
  undefined1 *puStack_20c;
  undefined4 *puStack_208;
  undefined4 *puStack_204;
  float fStack_1f4;
  float fStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined4 uStack_1b8;
  undefined8 uStack_1b4;
  undefined4 uStack_1ac;
  undefined4 *puStack_1a8;
  undefined4 *puStack_1a4;
  undefined4 uStack_1a0;
  undefined8 uStack_19c;
  undefined4 uStack_194;
  undefined8 uStack_190;
  undefined4 *puStack_188;
  undefined4 *puStack_184;
  undefined4 *puStack_180;
  undefined4 *apuStack_17c [6];
  undefined4 *puStack_164;
  undefined1 auStack_154 [12];
  undefined1 auStack_148 [40];
  undefined1 auStack_120 [152];
  undefined4 auStack_88 [16];
  undefined4 auStack_48 [17];
  
  uStack_1b4._4_4_ = (int *)(param_2 + 0x1c);
  fStack_1f4 = (float)(uint)fStack_1f4._0_3_;
  puStack_204 = (undefined4 *)0xa50b4b;
  puVar7 = (undefined4 *)(**(code **)(*(int *)(param_2 + 0x1c) + 0x16c))();
  puVar12 = auStack_48;
  for (iVar10 = 0x10; iVar10 != 0; iVar10 = iVar10 + -1) {
    *puVar12 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar12 = puVar12 + 1;
  }
  puStack_204 = (undefined4 *)0xa50b69;
  puVar7 = (undefined4 *)(**(code **)(*uStack_1b4._4_4_ + 0x174))();
  uStack_1e0 = *(undefined8 *)(in_ECX + 0x78);
  uStack_1d8 = *(undefined8 *)(in_ECX + 0x80);
  uStack_1d0 = *(undefined8 *)(in_ECX + 0x68);
  uStack_1c8 = *(undefined8 *)(in_ECX + 0x70);
  puStack_204 = auStack_88;
  puVar12 = auStack_88;
  for (iVar10 = 0x10; iVar10 != 0; iVar10 = iVar10 + -1) {
    *puVar12 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar12 = puVar12 + 1;
  }
  uVar1 = *(undefined8 *)(in_ECX + 0x58);
  puStack_208 = auStack_48;
  puStack_20c = auStack_148;
  uStack_1e8 = *(undefined8 *)(in_ECX + 0x60);
  puStack_210 = (undefined1 *)0xa50bdc;
  D3DXMatrixMultiply();
  puStack_210 = auStack_154;
  D3DXMatrixInverse(puStack_210,0);
  fStack_1f0 = (float)uVar1;
  uStack_1d8 = CONCAT44(unaff_EBX * param_1[1] + fStack_1f4 * param_1[5] + param_1[9] * fStack_1f0 +
                        param_1[0xd],
                        fStack_1f4 * param_1[4] + unaff_EBX * *param_1 + fStack_1f0 * param_1[8] +
                        param_1[0xc]);
  uStack_1d0 = CONCAT44(uStack_1d0._4_4_,
                        unaff_EBX * param_1[2] + fStack_1f4 * param_1[6] + param_1[10] * fStack_1f0
                        + param_1[0xe]);
  fVar3 = uStack_1e8._4_4_;
  fVar2 = (float)uStack_1e8;
  uStack_1e8 = CONCAT44((float)uStack_1e8 * param_1[1] + uStack_1e8._4_4_ * param_1[5] +
                        param_1[9] * (float)uStack_1e0 + param_1[0xd],
                        uStack_1e8._4_4_ * param_1[4] + (float)uStack_1e8 * *param_1 +
                        (float)uStack_1e0 * param_1[8] + param_1[0xc]);
  uStack_1e0 = CONCAT44(uStack_1e0._4_4_,
                        fVar2 * param_1[2] + fVar3 * param_1[6] + param_1[10] * (float)uStack_1e0 +
                        param_1[0xe]);
  uStack_1b8 = 0;
  uStack_1c0 = CONCAT44(DAT_00f092dc,DAT_00f092dc);
  uStack_1b4 = CONCAT44(DAT_00f092dc,DAT_00f092fc);
  uStack_19c = CONCAT44(DAT_00f092fc,DAT_00f092fc);
  uStack_1ac = 0;
  uStack_190 = CONCAT44(DAT_00f092dc,DAT_00f092dc);
  uStack_1a0 = 0;
  uStack_194 = 0;
  puStack_188 = DAT_00f092fc;
  puStack_208 = DAT_00f092fc;
  puStack_204 = DAT_00f092fc;
  puStack_1a8 = DAT_00f092dc;
  puStack_1a4 = DAT_00f092fc;
  puStack_184 = DAT_00f092fc;
  puStack_180 = DAT_00f092dc;
  apuStack_17c[0] = DAT_00f092fc;
  apuStack_17c[1] = DAT_00f092dc;
  apuStack_17c[2] = DAT_00f092fc;
  apuStack_17c[3] = DAT_00f092fc;
  apuStack_17c[4] = DAT_00f092fc;
  apuStack_17c[5] = DAT_00f092fc;
  puStack_164 = DAT_00f092fc;
  iVar10 = 8;
  do {
    D3DXVec3TransformCoord();
    iVar10 = iVar10 + -1;
  } while (iVar10 != 0);
  D3DXPlaneFromPoints(auStack_120,&uStack_1c0,&uStack_1b4,&puStack_1a8);
  D3DXPlaneFromPoints();
  D3DXPlaneFromPoints();
  D3DXPlaneFromPoints();
  D3DXPlaneFromPoints(auStack_120,&uStack_1e8,(int)&uStack_1e0 + 4,&uStack_1b8);
  uStack_26c = &uStack_1e0;
  D3DXPlaneFromPoints(auStack_120,&puStack_204,&puStack_210);
  uVar11 = 0;
  pfVar8 = (float *)apuStack_17c;
  do {
    if (uStack_26c._3_1_ != '\0') break;
    if (pfVar8[-1] * (float)auStack_120 + *pfVar8 * (float)&puStack_188 +
        pfVar8[1] * (float)apuStack_17c + pfVar8[2] < -*(float *)(in_ECX + 0x88)) {
      uStack_26c = (undefined8 *)&DAT_01000000;
    }
    uVar11 = uVar11 + 1;
    pfVar8 = pfVar8 + 4;
  } while (uVar11 < 6);
  uVar11 = 0;
  ppuVar9 = &puStack_180;
  iVar10 = 0;
  do {
    if (uStack_26c._3_1_ != '\0') break;
    fVar2 = (float)ppuVar9[1] * (float)&uStack_1c8;
    fVar3 = fVar2 + (float)*ppuVar9 * (float)auStack_120;
    fVar4 = (float)ppuVar9[2] * (float)((int)&uStack_19c + 4);
    puVar7 = ppuVar9[3];
    if (fVar4 + fVar3 + (float)puVar7 <= 0.0) {
      fVar5 = (float)ppuVar9[1] * (float)&uStack_19c;
      fVar6 = fVar5 + (float)*ppuVar9 * (float)auStack_120;
      if (((fVar6 + fVar4 + (float)puVar7 <= 0.0) &&
          (fVar5 = fVar5 + (float)*ppuVar9 * (float)auStack_120,
          fVar5 + fVar4 + (float)puVar7 <= 0.0)) &&
         (fVar2 = fVar2 + (float)*ppuVar9 * (float)auStack_120, fVar2 + fVar4 + (float)puVar7 <= 0.0
         )) {
        fVar4 = (float)ppuVar9[2] * (float)((int)&uStack_1d0 + 4);
        if (((0.0 < fVar4 + fVar3 + (float)puVar7) || (0.0 < fVar4 + fVar6 + (float)puVar7)) ||
           ((0.0 < fVar4 + fVar5 + (float)puVar7 || (0.0 < fVar4 + fVar2 + (float)puVar7)))) {
          iVar10 = iVar10 + 1;
        }
        else {
          uStack_26c = (undefined8 *)&DAT_01000000;
        }
      }
    }
    uVar11 = uVar11 + 1;
    ppuVar9 = ppuVar9 + 4;
  } while (uVar11 < 6);
  if (iVar10 == 6) {
    uStack_26c._3_1_ = '\0';
  }
  return uStack_26c._3_1_ == '\0';
}

