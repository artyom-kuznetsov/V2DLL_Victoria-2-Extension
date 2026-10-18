// FUN_00a48170 @ 00a48170 body=[[00a48170, 00a48ed5]]


void FUN_00a48170(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4,
                 short param_5,int *param_6)

{
  int *piVar1;
  uint *puVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float fVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  ushort uVar13;
  ushort uVar14;
  code *pcVar15;
  undefined8 *puVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  int in_ECX;
  int iVar20;
  short sVar21;
  float unaff_ESI;
  undefined2 in_FPUControlWord;
  ushort uVar22;
  ushort uVar23;
  int *piStack_54;
  uint uVar24;
  int local_44;
  short sStack_3c;
  undefined8 local_20;
  
  if (param_5 == 0) {
    local_44 = CONCAT22(local_44._2_2_,in_FPUControlWord);
  }
  if (param_6 == (int *)0x0) {
    piStack_54 = *(int **)(in_ECX + 0x98);
    pcVar15 = *(code **)(*param_2 + 0x104);
  }
  else {
    piStack_54 = param_6;
    pcVar15 = *(code **)(*param_2 + 0x104);
  }
  (*pcVar15)(param_2,0);
  puVar16 = (undefined8 *)FUN_00aad56b(200000);
  uVar12 = DAT_00f092fc;
  uVar24 = *(uint *)(in_ECX + 0x88);
  piVar1 = (int *)(in_ECX + 0x88);
  uVar17 = 1;
  uVar18 = uVar17;
  if (1 < uVar24) {
    do {
      uVar17 = 0;
      if (uVar18 == 0) break;
      uVar17 = uVar18 * 2;
      uVar18 = uVar17;
    } while (uVar17 < uVar24);
  }
  fVar6 = (float)(int)uVar17;
  if ((int)uVar17 < 0) {
    fVar6 = fVar6 + 4.2949673e+09;
  }
  uVar17 = *(uint *)(in_ECX + 0x84);
  puVar2 = (uint *)(in_ECX + 0x84);
  uVar18 = 1;
  uVar19 = uVar18;
  if (1 < uVar17) {
    do {
      uVar19 = 0;
      if (uVar18 == 0) break;
      uVar18 = uVar18 * 2;
      uVar19 = uVar18;
    } while (uVar18 < uVar17);
  }
  uVar18 = *(uint *)(in_ECX + 0x78);
  fVar8 = (float)(int)uVar19;
  if ((int)uVar19 < 0) {
    fVar8 = fVar8 + 4.2949673e+09;
  }
  fVar9 = (float)(int)uVar18;
  if ((int)uVar18 < 0) {
    fVar9 = fVar9 + 4.2949673e+09;
  }
  fVar9 = ((float)(int)uVar17 / fVar8) / fVar9;
  fVar8 = (float)(int)(*puVar2 / uVar18);
  if ((int)(*puVar2 / uVar18) < 0) {
    fVar8 = fVar8 + 4.2949673e+09;
  }
  iVar7 = *piVar1;
  fVar10 = (float)local_44;
  if (local_44 < 0) {
    fVar10 = fVar10 + 4.2949673e+09;
  }
  fVar10 = fVar10 * fVar9;
  *(float *)((int)puVar16 + 0xc) = fVar10;
  fVar11 = (float)iVar7 + 1.0;
  local_20 = (ulonglong)(uint)fVar11 << 0x20;
  *(ulonglong *)((int)puVar16 + 0x14) = local_20;
  fVar8 = fVar8 + 1.0;
  local_20 = CONCAT44(fVar11,fVar8);
  *puVar16 = 0;
  puVar16[5] = local_20;
  *(undefined4 *)(puVar16 + 1) = uVar12;
  fVar9 = fVar10 + fVar9;
  *(undefined4 *)((int)puVar16 + 0x1c) = uVar12;
  local_20 = CONCAT44(fVar11,fVar8);
  fVar6 = (float)(int)uVar24 / fVar6 + 0.0;
  *(undefined4 *)((int)puVar16 + 0x24) = 0;
  *(undefined4 *)(puVar16 + 6) = uVar12;
  *(undefined4 *)(puVar16 + 7) = 0;
  puVar16[10] = local_20;
  *(undefined4 *)(puVar16 + 0xc) = 0;
  *(undefined4 *)(puVar16 + 0xb) = uVar12;
  local_20 = (ulonglong)(uint)fVar8;
  *(undefined8 *)((int)puVar16 + 0x3c) = 0;
  *(ulonglong *)((int)puVar16 + 100) = local_20;
  *(float *)(puVar16 + 2) = fVar6;
  *(float *)(puVar16 + 4) = fVar10;
  *(float *)((int)puVar16 + 0x34) = fVar9;
  *(undefined4 *)((int)puVar16 + 0x44) = uVar12;
  *(float *)(puVar16 + 9) = fVar10;
  *(float *)((int)puVar16 + 0x4c) = fVar6;
  *(float *)((int)puVar16 + 0x5c) = fVar9;
  *(undefined4 *)((int)puVar16 + 0x6c) = uVar12;
  *(float *)(puVar16 + 0xe) = fVar9;
  *(float *)((int)puVar16 + 0x74) = fVar6;
  (**(code **)(*param_2 + 0xe4))(param_2,0x1b,1);
  uVar22 = 1;
  uVar17 = 6;
  uVar24 = 6;
  uVar14 = 6;
  uVar13 = 0;
  do {
    while ((uVar23 = uVar13, uVar14 == 0 ||
           (*piVar1 < (int)*(float *)((int)puVar16 + (uint)uVar14 * 0x14 + -0x24) + *piVar1 * -2 +
                      *(int *)(in_ECX + 0x90)))) {
      uVar17 = uVar17 & 0xffff;
      pfVar3 = (float *)((int)puVar16 + uVar17 * 0x14);
      *(undefined8 *)pfVar3 = *puVar16;
      *(undefined8 *)(pfVar3 + 2) = puVar16[1];
      pfVar3[4] = *(float *)(puVar16 + 2);
      fVar8 = (float)puVar2 * (float)uVar22;
      pfVar3[1] = pfVar3[1] - fVar8;
      fVar6 = unaff_ESI * (float)uVar23;
      *pfVar3 = *pfVar3 + fVar6;
      *(undefined8 *)(pfVar3 + 5) = *(undefined8 *)((int)puVar16 + 0x14);
      *(undefined8 *)(pfVar3 + 7) = *(undefined8 *)((int)puVar16 + 0x1c);
      pfVar3[9] = *(float *)((int)puVar16 + 0x24);
      pfVar3[6] = pfVar3[6] - fVar8;
      pfVar3[5] = pfVar3[5] + fVar6;
      iVar7 = uVar17 * 5 + 10;
      *(undefined8 *)((int)puVar16 + iVar7 * 4) = puVar16[5];
      *(undefined8 *)((int)puVar16 + iVar7 * 4 + 8) = puVar16[6];
      pfVar4 = (float *)((int)puVar16 + iVar7 * 4);
      pfVar4[4] = *(float *)(puVar16 + 7);
      pfVar3[0xb] = pfVar3[0xb] - fVar8;
      *pfVar4 = *pfVar4 + fVar6;
      iVar7 = uVar17 * 5 + 0xf;
      *(undefined8 *)((int)puVar16 + iVar7 * 4) = *(undefined8 *)((int)puVar16 + 0x3c);
      *(undefined8 *)((int)puVar16 + iVar7 * 4 + 8) = *(undefined8 *)((int)puVar16 + 0x44);
      pfVar4 = (float *)((int)puVar16 + iVar7 * 4);
      pfVar4[4] = *(float *)((int)puVar16 + 0x4c);
      pfVar3[0x10] = pfVar3[0x10] - fVar8;
      *pfVar4 = *pfVar4 + fVar6;
      iVar7 = uVar17 * 5 + 0x14;
      *(undefined8 *)((int)puVar16 + iVar7 * 4) = puVar16[10];
      *(undefined8 *)((int)puVar16 + iVar7 * 4 + 8) = puVar16[0xb];
      pfVar4 = (float *)((int)puVar16 + iVar7 * 4);
      pfVar4[4] = *(float *)(puVar16 + 0xc);
      pfVar3[0x15] = pfVar3[0x15] - fVar8;
      *pfVar4 = *pfVar4 + fVar6;
      iVar7 = uVar17 * 5 + 0x19;
      *(undefined8 *)((int)puVar16 + iVar7 * 4) = *(undefined8 *)((int)puVar16 + 100);
      pfVar4 = (float *)((int)puVar16 + iVar7 * 4);
      *(undefined8 *)(pfVar4 + 2) = *(undefined8 *)((int)puVar16 + 0x6c);
      pfVar4[4] = *(float *)((int)puVar16 + 0x74);
      pfVar3[0x1a] = pfVar3[0x1a] - fVar8;
      *pfVar4 = *pfVar4 + fVar6;
      uVar17 = uVar24 + 6;
      uVar14 = uVar14 + 6;
      uVar22 = uVar22 + 1;
      uVar24 = uVar17;
      uVar13 = uVar23;
    }
    uVar18 = uVar17 & 0xffff;
    pfVar3 = (float *)((int)puVar16 + uVar18 * 0x14);
    sVar21 = (short)(int)((float)*(int *)(in_ECX + 0x90) -
                         ((float)(*piVar1 * 2) - *(float *)((int)puVar16 + uVar18 * 0x14 + -0x24)));
    if (0 < sVar21) {
      *(undefined8 *)pfVar3 = *puVar16;
      *(undefined8 *)(pfVar3 + 2) = puVar16[1];
      pfVar3[4] = *(float *)(puVar16 + 2);
      fVar9 = (float)puVar2 * (float)uVar22;
      pfVar3[1] = pfVar3[1] - (fVar9 - (float)(*piVar1 - (int)sVar21));
      fVar6 = unaff_ESI * (float)uVar23;
      *pfVar3 = *pfVar3 + fVar6;
      fVar8 = (float)(int)sVar21;
      pfVar3[4] = (fVar8 / (float)*piVar1) * pfVar3[4];
      *(undefined8 *)(pfVar3 + 5) = *(undefined8 *)((int)puVar16 + 0x14);
      *(undefined8 *)(pfVar3 + 7) = *(undefined8 *)((int)puVar16 + 0x1c);
      pfVar3[9] = *(float *)((int)puVar16 + 0x24);
      pfVar3[6] = pfVar3[6] - fVar9;
      pfVar3[5] = pfVar3[5] + fVar6;
      iVar7 = uVar18 * 5 + 10;
      *(undefined8 *)((int)puVar16 + iVar7 * 4) = puVar16[5];
      *(undefined8 *)((int)puVar16 + iVar7 * 4 + 8) = puVar16[6];
      pfVar4 = (float *)((int)puVar16 + iVar7 * 4);
      pfVar4[4] = *(float *)(puVar16 + 7);
      pfVar3[0xb] = pfVar3[0xb] - fVar9;
      *pfVar4 = *pfVar4 + fVar6;
      iVar7 = uVar18 * 5 + 0xf;
      *(undefined8 *)((int)puVar16 + iVar7 * 4) = *(undefined8 *)((int)puVar16 + 0x3c);
      *(undefined8 *)((int)puVar16 + iVar7 * 4 + 8) = *(undefined8 *)((int)puVar16 + 0x44);
      *(undefined4 *)((int)puVar16 + iVar7 * 4 + 0x10) = *(undefined4 *)((int)puVar16 + 0x4c);
      pfVar4 = (float *)((int)puVar16 + iVar7 * 4);
      pfVar3[0x10] = pfVar3[0x10] - (fVar9 - (float)(*piVar1 - (int)sVar21));
      pfVar3[0x13] = (fVar8 / (float)*piVar1) * pfVar3[0x13];
      *pfVar4 = *pfVar4 + fVar6;
      iVar7 = uVar18 * 5 + 0x14;
      *(undefined8 *)((int)puVar16 + iVar7 * 4) = puVar16[10];
      *(undefined8 *)((int)puVar16 + iVar7 * 4 + 8) = puVar16[0xb];
      pfVar4 = (float *)((int)puVar16 + iVar7 * 4);
      pfVar4[4] = *(float *)(puVar16 + 0xc);
      pfVar3[0x15] = pfVar3[0x15] - fVar9;
      *pfVar4 = *pfVar4 + fVar6;
      iVar7 = uVar18 * 5 + 0x19;
      *(undefined8 *)((int)puVar16 + iVar7 * 4) = *(undefined8 *)((int)puVar16 + 100);
      *(undefined8 *)((int)puVar16 + iVar7 * 4 + 8) = *(undefined8 *)((int)puVar16 + 0x6c);
      pfVar4 = (float *)((int)puVar16 + iVar7 * 4);
      pfVar4[4] = *(float *)((int)puVar16 + 0x74);
      pfVar3[0x1a] = pfVar3[0x1a] - (fVar9 - (float)(*piVar1 - (int)sVar21));
      pfVar3[0x1d] = (fVar8 / (float)*piVar1) * pfVar3[0x1d];
      uVar17 = uVar24 + 6;
      *pfVar4 = *pfVar4 + fVar6;
      uVar24 = uVar17;
    }
    uVar14 = 0;
    uVar22 = 0;
    uVar13 = uVar23 + 1;
  } while ((float)*piStack_54 <=
           (float)*(int *)(in_ECX + 0x8c) -
           *(float *)((int)puVar16 + ((uVar17 & 0xffff) * 5 + -10) * 4));
  uVar17 = uVar17 & 0xffff;
  iVar7 = *(int *)(in_ECX + 0x8c);
  fVar6 = *(float *)((int)puVar16 + (uVar17 * 5 + -10) * 4);
  *(undefined8 *)((int)puVar16 + uVar17 * 0x14) = *puVar16;
  *(undefined8 *)((int)puVar16 + uVar17 * 0x14 + 8) = puVar16[1];
  pfVar3 = (float *)((int)puVar16 + uVar17 * 0x14);
  pfVar3[4] = *(float *)(puVar16 + 2);
  iVar20 = (int)sVar21;
  fVar8 = (float)puVar2 * 0.0;
  pfVar3[1] = pfVar3[1] - (fVar8 - (float)(*piVar1 - iVar20));
  fVar10 = (float)(ushort)(uVar23 + 1) * unaff_ESI;
  sStack_3c = (short)(int)((float)iVar7 - fVar6);
  *pfVar3 = *pfVar3 + fVar10;
  fVar9 = (float)(int)sStack_3c;
  pfVar3[3] = (fVar9 / (float)*piStack_54) * pfVar3[3];
  fVar6 = (float)iVar20;
  pfVar3[4] = (fVar6 / (float)*piVar1) * pfVar3[4];
  *(undefined8 *)(pfVar3 + 5) = *(undefined8 *)((int)puVar16 + 0x14);
  *(undefined8 *)(pfVar3 + 7) = *(undefined8 *)((int)puVar16 + 0x1c);
  pfVar3[9] = *(float *)((int)puVar16 + 0x24);
  pfVar3[6] = pfVar3[6] - fVar8;
  pfVar3[5] = pfVar3[5] + fVar10;
  pfVar3[8] = (fVar9 / (float)*piStack_54) * pfVar3[8];
  iVar7 = uVar17 * 5 + 10;
  *(undefined8 *)((int)puVar16 + iVar7 * 4) = puVar16[5];
  *(undefined8 *)((int)puVar16 + iVar7 * 4 + 8) = puVar16[6];
  pfVar4 = (float *)((int)puVar16 + iVar7 * 4);
  pfVar4[4] = *(float *)(puVar16 + 7);
  pfVar3[0xb] = pfVar3[0xb] - fVar8;
  *pfVar4 = (fVar10 - (float)*piStack_54) + fVar9 + *pfVar4;
  pfVar3[0xd] = (fVar9 / (float)*piStack_54) * pfVar3[0xd];
  iVar7 = uVar17 * 5 + 0xf;
  *(undefined8 *)((int)puVar16 + iVar7 * 4) = *(undefined8 *)((int)puVar16 + 0x3c);
  pfVar4 = (float *)((int)puVar16 + iVar7 * 4);
  *(undefined8 *)(pfVar4 + 2) = *(undefined8 *)((int)puVar16 + 0x44);
  pfVar4[4] = *(float *)((int)puVar16 + 0x4c);
  pfVar3[0x10] = pfVar3[0x10] - (fVar8 - (float)(*piVar1 - iVar20));
  *pfVar4 = *pfVar4 + fVar10;
  pfVar4 = (float *)((int)puVar16 + (uVar17 * 5 + 0x14) * 4);
  pfVar5 = (float *)((int)puVar16 + (uVar17 * 5 + 0x19) * 4);
  pfVar3[0x12] = (fVar9 / (float)*piStack_54) * pfVar3[0x12];
  pfVar3[0x13] = (fVar6 / (float)*piVar1) * pfVar3[0x13];
  *(undefined8 *)pfVar4 = puVar16[10];
  *(undefined8 *)(pfVar4 + 2) = puVar16[0xb];
  pfVar4[4] = *(float *)(puVar16 + 0xc);
  pfVar3[0x15] = pfVar3[0x15] - fVar8;
  *pfVar4 = (fVar10 - (float)*piStack_54) + fVar9 + *pfVar4;
  pfVar3[0x17] = (fVar9 / (float)*piStack_54) * pfVar3[0x17];
  *(undefined8 *)pfVar5 = *(undefined8 *)((int)puVar16 + 100);
  *(undefined8 *)(pfVar5 + 2) = *(undefined8 *)((int)puVar16 + 0x6c);
  pfVar5[4] = *(float *)((int)puVar16 + 0x74);
  pfVar3[0x1a] = pfVar3[0x1a] - (fVar8 - (float)(*piVar1 - iVar20));
  *pfVar5 = (fVar10 - (float)*piStack_54) + fVar9 + *pfVar5;
  pfVar3[0x1c] = (fVar9 / (float)*piStack_54) * pfVar3[0x1c];
  pfVar3[0x1d] = (fVar6 / (float)*piVar1) * pfVar3[0x1d];
  (**(code **)(*param_2 + 0x164))(param_2,0x102);
  (**(code **)(*param_2 + 0x14c))
            (param_2,4,((uint)(ushort)(uVar23 + 2) + (int)piStack_54) * 2,puVar16,0x14);
  (**(code **)(*param_2 + 0xe4))(param_2,0x1b,0);
  FUN_00aaea59(puVar16);
  return;
}

