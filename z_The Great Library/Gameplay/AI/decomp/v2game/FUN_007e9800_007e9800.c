// FUN_007e9800 @ 007e9800 body=[[007e9800, 007ea272]]


void FUN_007e9800(int param_1,int param_2,int *param_3,undefined4 *param_4,undefined4 param_5,
                 undefined4 *param_6,int param_7)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  float10 fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  double dVar14;
  double dVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 *puVar19;
  float fVar20;
  undefined4 *puVar21;
  float fVar22;
  undefined4 uStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  float fStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined8 uStack_1c0;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  float fStack_1ac;
  undefined4 uStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  float fStack_190;
  float fStack_18c;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined1 auStack_d8 [52];
  undefined1 auStack_a4 [12];
  undefined1 auStack_98 [64];
  undefined4 auStack_58 [21];
  
  piVar2 = (int *)0x0;
  if (*(int *)(param_1 + 0x218) != 0) {
    piVar2 = *(int **)(*(int *)(*(int *)(param_1 + 0x1a0) + 0x6bd00) + -4 +
                      *(int *)(param_1 + 0x218) * 4);
  }
  *(int **)(param_1 + 0x21c) = piVar2;
  if (param_7 == 2) {
    uVar6 = *(undefined4 *)(param_1 + 0x23c);
  }
  else {
    if (param_7 != 3) {
      iVar4 = *piVar2;
      if (param_7 == 4) {
        uVar6 = *(undefined4 *)(param_1 + 0x240);
      }
      else {
        uVar6 = *(undefined4 *)(param_1 + 0x230);
      }
      goto LAB_007e9862;
    }
    uVar6 = *(undefined4 *)(param_1 + 0x238);
  }
  iVar4 = *piVar2;
LAB_007e9862:
  (**(code **)(iVar4 + 0xe8))(piVar2,uVar6);
  iVar4 = *(int *)(param_2 + 0x6b9bc);
  puVar9 = auStack_58;
  for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar9 = *param_4;
    param_4 = param_4 + 1;
    puVar9 = puVar9 + 1;
  }
  uStack_e0 = 0;
  uStack_e4 = 0;
  uStack_e8 = 0;
  uStack_ec = 0;
  uStack_f4 = 0;
  uStack_f8 = 0;
  uStack_fc = 0;
  uStack_100 = 0;
  uStack_108 = 0;
  uStack_10c = 0;
  uStack_110 = 0;
  uStack_114 = 0;
  uStack_1c0 = *(undefined8 *)(param_2 + 0x6b9bc);
  uStack_dc = DAT_00f092fc;
  uStack_f0 = DAT_00f092fc;
  uStack_104 = DAT_00f092fc;
  uStack_118 = DAT_00f092fc;
  D3DXMatrixOrthoRH(auStack_98,(float)iVar4,(float)*(int *)(param_2 + 0x6b9c0),0,DAT_00f092fc);
  D3DXMatrixMultiply(auStack_d8,auStack_58,&uStack_118);
  puVar9 = &uStack_e4;
  puVar21 = puVar9;
  D3DXMatrixMultiply(puVar9,puVar9,auStack_a4);
  piVar2 = *(int **)(param_1 + 0x21c);
  puVar19 = &uStack_f0;
  uVar6 = *(undefined4 *)(param_1 + 0x22c);
  (**(code **)(*piVar2 + 0x98))();
  (**(code **)(**(int **)(param_1 + 0x21c) + 0xd0))
            (*(int **)(param_1 + 0x21c),*(undefined4 *)(param_1 + 0x224),param_5,piVar2,uVar6,
             puVar19);
  uVar1 = *(uint *)(param_1 + 0x210);
  if ((uVar1 == 0xffffffff) || (9999 < uVar1)) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined4 *)(uVar1 * 0x2c + 0x15c + *(int *)(param_1 + 0x1a0));
  }
  (**(code **)(**(int **)(param_1 + 0x21c) + 0xd0))
            (*(int **)(param_1 + 0x21c),*(undefined4 *)(param_1 + 0x228),uVar6);
  *(int *)(param_1 + 0x1f0) =
       (int)((float)(*(int *)(param_1 + 0x1e8) - *(int *)(param_1 + 0x1e0)) * 0.5);
  *(int *)(param_1 + 0x1ec) =
       (int)((float)(*(int *)(param_1 + 0x1e4) - *(int *)(param_1 + 0x1dc)) * 0.5);
  uStack_164 = *param_6;
  uStack_160 = param_6[1];
  uStack_15c = param_6[2];
  uStack_158 = param_6[3];
  (**(code **)(**(int **)(param_1 + 0x21c) + 0x88))
            (*(int **)(param_1 + 0x21c),*(undefined4 *)(param_1 + 0x234),&uStack_164);
  uStack_1e4 = 0;
  (**(code **)(**(int **)(param_1 + 0x21c) + 0xfc))(*(int **)(param_1 + 0x21c),&uStack_1e4,0);
  (**(code **)(**(int **)(param_1 + 0x21c) + 0x100))(*(int **)(param_1 + 0x21c),0);
  (**(code **)(**(int **)(param_1 + 0x21c) + 0x104))(*(int **)(param_1 + 0x21c));
  uVar1 = *(uint *)(param_1 + 0x1e0);
  uVar3 = 1;
  uVar7 = uVar3;
  if (1 < uVar1) {
    do {
      uVar7 = 0;
      if (uVar3 == 0) break;
      uVar3 = uVar3 * 2;
      uVar7 = uVar3;
    } while (uVar3 < uVar1);
  }
  fVar16 = (float)(int)uVar1;
  fVar20 = (float)(int)uVar7;
  if ((int)uVar7 < 0) {
    fVar20 = fVar20 + 4.2949673e+09;
  }
  fVar20 = fVar16 / fVar20;
  uVar3 = *(uint *)(param_1 + 0x1dc);
  uVar7 = 1;
  uVar8 = uVar7;
  if (1 < uVar3) {
    do {
      uVar8 = 0;
      if (uVar7 == 0) break;
      uVar7 = uVar7 * 2;
      uVar8 = uVar7;
    } while (uVar7 < uVar3);
  }
  fVar18 = (float)(int)uVar3;
  fVar22 = (float)(int)uVar8;
  if ((int)uVar8 < 0) {
    fVar22 = fVar22 + 4.2949673e+09;
  }
  fVar22 = fVar18 / fVar22;
  fVar11 = (float)((int)uVar3 / 2);
  fVar17 = (float)puVar21 - (float)((int)uVar1 / 2);
  FUN_00b35410();
  FUN_00b352e0();
  uVar6 = DAT_00f092fc;
  uStack_1e4 = 0;
  dVar14 = (double)fVar18 * 0.5;
  fVar12 = (float)((double)(float)puVar9 - dVar14);
  dVar15 = (double)fVar16 * 0.5;
  fVar13 = (float)((double)(float)puVar21 + dVar15);
  fVar18 = fVar13;
  fStack_1e0 = fVar20;
  fVar10 = (float10)FUN_00b35410();
  fVar16 = (float)fVar10;
  fVar10 = (float10)FUN_00b352e0();
  uStack_1b8 = DAT_00f092fc;
  _fStack_1dc = CONCAT44((float)((double)(fVar13 * fVar16 + (float)fVar10 * fVar12) + dVar15),
                         (float)((double)(fVar16 * fVar12 - fVar13 * (float)fVar10) + dVar14));
  uStack_1d4 = uVar6;
  if (*(char *)(param_1 + 0x244) == '\0') {
    uStack_1d0 = 0;
  }
  else {
    uStack_1d0 = DAT_00f092fc;
  }
  if (*(char *)(param_1 + 0x245) == '\0') {
    uStack_1cc = 0;
  }
  else {
    uStack_1cc = DAT_00f092fc;
  }
  uStack_1c8 = 0;
  uStack_1c4 = 0;
  fVar12 = (float)((double)(float)puVar9 + dVar14);
  fVar10 = (float10)FUN_00b35410();
  fVar16 = (float)fVar10;
  fVar10 = (float10)FUN_00b352e0();
  uStack_19c = DAT_00f092fc;
  uStack_1c0 = CONCAT44((float)((double)(fVar18 * fVar16 + (float)fVar10 * fVar12) + dVar15),
                        (float)((double)(fVar16 * fVar12 - fVar18 * (float)fVar10) + dVar14));
  if (*(char *)(param_1 + 0x244) == '\0') {
    uStack_1b4 = DAT_00f092fc;
  }
  else {
    uStack_1b4 = 0;
  }
  if (*(char *)(param_1 + 0x245) == '\0') {
    uStack_1b0 = 0;
  }
  else {
    uStack_1b0 = DAT_00f092fc;
  }
  uStack_1a8 = 0;
  fVar11 = fVar11 + (float)puVar9;
  fStack_1ac = fVar22;
  fVar10 = (float10)FUN_00b35410();
  fVar16 = (float)fVar10;
  fVar10 = (float10)FUN_00b352e0();
  _fStack_1a4 = CONCAT44((float)((double)(fVar17 * fVar16 + (float)fVar10 * fVar11) + dVar15),
                         (float)((double)(fVar16 * fVar11 - fVar17 * (float)fVar10) + dVar14));
  uStack_198 = DAT_00f092fc;
  if (*(char *)(param_1 + 0x244) != '\0') {
    uStack_198 = 0;
  }
  uStack_194 = DAT_00f092fc;
  if (*(char *)(param_1 + 0x245) != '\0') {
    uStack_194 = 0;
  }
  fStack_190 = fVar22;
  fStack_18c = fVar20;
  (**(code **)(*param_3 + 0x164))(param_3,0x202);
  (**(code **)(*param_3 + 0x14c))(param_3,6,2,&stack0xfffffe00,0x1c);
  (**(code **)(**(int **)(param_1 + 0x21c) + 0x104))(*(int **)(param_1 + 0x21c));
  (**(code **)(**(int **)(param_1 + 0x21c) + 0x108))(*(int **)(param_1 + 0x21c));
  (**(code **)(**(int **)(param_1 + 0x21c) + 0x10c))(*(int **)(param_1 + 0x21c));
  return;
}

