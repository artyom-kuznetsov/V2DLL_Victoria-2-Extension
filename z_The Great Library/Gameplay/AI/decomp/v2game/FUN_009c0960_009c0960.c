// FUN_009c0960 @ 009c0960 body=[[009c0960, 009c0a84]]


void FUN_009c0960(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float *in_ECX;
  
  fVar17 = param_1[8];
  fVar18 = param_1[9];
  fVar19 = param_1[10];
  fVar20 = param_1[0xb];
  fVar21 = param_1[0xc];
  fVar22 = param_1[0xd];
  fVar23 = param_1[0xe];
  fVar24 = param_1[0xf];
  fVar1 = in_ECX[3];
  fVar2 = in_ECX[2];
  fVar25 = param_1[4];
  fVar26 = param_1[5];
  fVar27 = param_1[6];
  fVar28 = param_1[7];
  fVar29 = *param_1;
  fVar30 = param_1[1];
  fVar31 = param_1[2];
  fVar32 = param_1[3];
  fVar3 = *in_ECX;
  fVar4 = in_ECX[8];
  fVar5 = in_ECX[1];
  fVar6 = in_ECX[4];
  fVar7 = in_ECX[5];
  fVar8 = in_ECX[6];
  fVar9 = in_ECX[7];
  fVar10 = in_ECX[9];
  fVar11 = in_ECX[10];
  fVar12 = in_ECX[0xb];
  fVar13 = in_ECX[0xc];
  fVar14 = in_ECX[0xd];
  fVar15 = in_ECX[0xe];
  fVar16 = in_ECX[0xf];
  *in_ECX = fVar1 * fVar21 + fVar2 * fVar17 + fVar5 * fVar25 + fVar3 * fVar29;
  in_ECX[1] = fVar1 * fVar22 + fVar2 * fVar18 + fVar5 * fVar26 + fVar3 * fVar30;
  in_ECX[2] = fVar1 * fVar23 + fVar2 * fVar19 + fVar5 * fVar27 + fVar3 * fVar31;
  in_ECX[3] = fVar1 * fVar24 + fVar2 * fVar20 + fVar5 * fVar28 + fVar3 * fVar32;
  in_ECX[4] = fVar9 * fVar21 + fVar7 * fVar25 + fVar6 * fVar29 + fVar8 * fVar17;
  in_ECX[5] = fVar9 * fVar22 + fVar7 * fVar26 + fVar6 * fVar30 + fVar8 * fVar18;
  in_ECX[6] = fVar9 * fVar23 + fVar7 * fVar27 + fVar6 * fVar31 + fVar8 * fVar19;
  in_ECX[7] = fVar9 * fVar24 + fVar7 * fVar28 + fVar6 * fVar32 + fVar8 * fVar20;
  in_ECX[8] = fVar12 * fVar21 + fVar11 * fVar17 + fVar10 * fVar25 + fVar4 * fVar29;
  in_ECX[9] = fVar12 * fVar22 + fVar11 * fVar18 + fVar10 * fVar26 + fVar4 * fVar30;
  in_ECX[10] = fVar12 * fVar23 + fVar11 * fVar19 + fVar10 * fVar27 + fVar4 * fVar31;
  in_ECX[0xb] = fVar12 * fVar24 + fVar11 * fVar20 + fVar10 * fVar28 + fVar4 * fVar32;
  in_ECX[0xc] = fVar16 * fVar21 + fVar15 * fVar17 + fVar14 * fVar25 + fVar29 * fVar13;
  in_ECX[0xd] = fVar16 * fVar22 + fVar15 * fVar18 + fVar14 * fVar26 + fVar30 * fVar13;
  in_ECX[0xe] = fVar16 * fVar23 + fVar15 * fVar19 + fVar14 * fVar27 + fVar31 * fVar13;
  in_ECX[0xf] = fVar16 * fVar24 + fVar15 * fVar20 + fVar14 * fVar28 + fVar32 * fVar13;
  return;
}

