// FUN_007d9cc0 @ 007d9cc0 body=[[007d9cc0, 007da1ee]]


void FUN_007d9cc0(float *param_1,float *param_2,float *param_3,float param_4,undefined4 param_5,
                 undefined4 param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  int *piVar5;
  uint uVar6;
  uint *puVar7;
  int *in_ECX;
  int iVar8;
  int unaff_ESI;
  float fVar9;
  float *pfVar10;
  float *pfVar11;
  uint *puVar12;
  float *pfStack_ec;
  int **ppiStack_e8;
  uint *puStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  uint *puStack_d4;
  uint uStack_d0;
  uint *puStack_cc;
  uint *puStack_c8;
  uint *puStack_c4;
  uint *puStack_c0;
  float *pfStack_bc;
  int *piStack_b8;
  undefined4 *puStack_b4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  undefined8 uStack_90;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  undefined4 uStack_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint uStack_68;
  undefined4 uStack_64;
  uint auStack_58 [4];
  uint uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_34;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float afStack_1c [6];
  
  uVar6 = in_ECX[0x54];
  pfVar10 = param_3;
  pfVar11 = (float *)(in_ECX + 0x25);
  for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
    *pfVar11 = *pfVar10;
    pfVar10 = pfVar10 + 1;
    pfVar11 = pfVar11 + 1;
  }
  if ((uVar6 == 0xffffffff) || (9999 < uVar6)) {
    fVar9 = 0.0;
  }
  else {
    fVar9 = param_1[uVar6 * 0xb + 0x57];
  }
  puStack_b4 = (undefined4 *)0x7d9d10;
  uVar6 = (**(code **)(*in_ECX + 0x17c))();
  puStack_b4 = (undefined4 *)(uVar6 & 0xffff);
  puStack_c0 = (uint *)in_ECX[0x53];
  piStack_b8 = in_ECX + 0x55;
  uStack_d0 = in_ECX[0x4f];
  puStack_c4 = (uint *)param_3;
  puStack_c8 = (uint *)param_2;
  puStack_cc = (uint *)param_1;
  puStack_d4 = (uint *)0x7d9d3b;
  pfStack_bc = (float *)fVar9;
  FUN_007db120();
  iVar8 = in_ECX[0x4f];
  fVar9 = *(float *)(iVar8 + 0x1a0);
  fStack_98 = param_3[0xe];
  fStack_a0 = (float)*(undefined8 *)(param_3 + 0xc);
  fStack_9c = (float)((ulonglong)*(undefined8 *)(param_3 + 0xc) >> 0x20);
  fVar1 = *(float *)(iVar8 + 0x9c);
  fVar2 = *(float *)(iVar8 + 0x1a4);
  fVar3 = *(float *)(iVar8 + 0x1a8);
  if (*(char *)(iVar8 + 0x1cc) != '\0') {
    puStack_b4 = (undefined4 *)0x0;
    piStack_b8 = (int *)0x0;
    pfVar10 = param_3;
    pfVar11 = (float *)auStack_58;
    for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
      *pfVar11 = *pfVar10;
      pfVar10 = pfVar10 + 1;
      pfVar11 = pfVar11 + 1;
    }
    afStack_1c[0] = DAT_00f092fc;
    pfStack_bc = (float *)0x0;
    puStack_c0 = auStack_58;
    puStack_c4 = (uint *)param_2;
    puStack_c8 = (uint *)param_1;
    puStack_cc = (uint *)0x7d9e77;
    fStack_28 = fVar9 * fVar1 * 0.1 + fStack_a0;
    fStack_24 = fStack_9c + fVar2 * fVar1 * 0.1;
    fStack_20 = fStack_98 + fVar3 * fVar1 * 0.1;
    (**(code **)(*(int *)in_ECX[0x5c] + 0x28))();
  }
  puStack_b4 = (undefined4 *)0x7d9e92;
  puVar7 = (uint *)(**(code **)(*(int *)((int)param_1[0x1af22] + 0x1c) + 0x16c))();
  puVar12 = auStack_58;
  for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar12 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar12 = puVar12 + 1;
  }
  piStack_b8 = &uStack_70;
  uStack_70 = auStack_58[1];
  uStack_6c = uStack_44;
  uStack_68 = uStack_34;
  pfStack_bc = (float *)0x7d9ed6;
  puStack_b4 = piStack_b8;
  D3DXVec3Normalize();
  uStack_6c = uStack_78;
  uStack_68 = uStack_74;
  uStack_64 = uStack_70;
  uVar4 = *(undefined8 *)(unaff_ESI + 0xf8);
  fStack_88 = *(float *)(unaff_ESI + 0x100);
  fStack_94 = *(float *)(unaff_ESI + 0x10c);
  uStack_90._0_4_ = (float)uVar4;
  fStack_9c = (float)*(undefined8 *)(unaff_ESI + 0x104);
  fStack_98 = (float)((ulonglong)*(undefined8 *)(unaff_ESI + 0x104) >> 0x20);
  fStack_84 = fStack_9c - (float)uStack_90;
  uStack_90._4_4_ = (float)((ulonglong)uVar4 >> 0x20);
  fStack_80 = fStack_98 - uStack_90._4_4_;
  pfStack_bc = &fStack_84;
  puStack_c0 = (uint *)afStack_1c;
  fStack_7c = fStack_94 - fStack_88;
  puStack_c4 = (uint *)0x7d9f9d;
  uStack_90 = uVar4;
  D3DXVec3Normalize();
  uVar6 = uStack_68;
  puStack_c8 = (uint *)&stack0xffffff50;
  puStack_cc = (uint *)0x7d9fcb;
  puStack_c4 = puStack_c8;
  D3DXVec3Normalize();
  puStack_cc = (uint *)param_3;
  uStack_d0 = 0x100;
  puStack_d4 = (uint *)param_2;
  fStack_d8 = 1.1536792e-38;
  (**(code **)((int)*param_2 + 0xb0))();
  iVar8 = in_ECX[0x4f];
  piVar5 = *(int **)(iVar8 + 0x19c);
  if (piVar5 != (int *)0x0) {
    puStack_c8 = (uint *)(*(float *)(iVar8 + 0x9c) * 0.1);
    fStack_d8 = 2.10195e-44;
    fStack_9c = *(float *)(iVar8 + 0x1b0) * (float)puStack_c8;
    fStack_dc = 0.0;
    fStack_98 = *(float *)(iVar8 + 0x1b4) * (float)puStack_c8;
    fStack_e0 = DAT_00f092fc;
    puStack_e4 = (uint *)((float)puStack_c8 * *(float *)(iVar8 + 0x1d0));
    ppiStack_e8 = (int **)&puStack_c4;
    pfStack_ec = &fStack_88;
    pfVar10 = &fStack_a0;
    fStack_a0 = *(float *)(iVar8 + 0x1ac) * (float)puStack_c8;
    (**(code **)(*piVar5 + 0x1c))(in_ECX + 0x5d,0,0x140,pfVar10);
    iVar8 = in_ECX[0x4f];
    fStack_dc = *(float *)(iVar8 + 0x1bc) * (float)pfVar10;
    fStack_d8 = *(float *)(iVar8 + 0x1c0) * (float)pfVar10;
    puStack_d4 = (uint *)(uVar6 ^ 0x80000000);
    uStack_d0 = auStack_58[0] ^ 0x80000000;
    fStack_e0 = *(float *)(iVar8 + 0x1b8) * (float)pfVar10;
    puStack_cc = (uint *)(uStack_48 ^ 0x80000000);
    (**(code **)(*piVar5 + 0x1c))
              (in_ECX + 100,0,0x140,&fStack_e0,&pfStack_ec,&puStack_d4,(float)pfVar10 * 3.5,
               DAT_00f092fc,0,0xf);
  }
  if (((char)in_ECX[0x6e] != '\0') && ((int *)in_ECX[0x6d] != (int *)0x0)) {
    fStack_d8 = (float)param_6;
    fStack_dc = (float)param_5;
    fStack_e0 = param_4;
    puStack_e4 = (uint *)param_3;
    ppiStack_e8 = (int **)param_2;
    pfStack_ec = param_1;
    (**(code **)(*(int *)in_ECX[0x6d] + 0x28))();
  }
  return;
}

