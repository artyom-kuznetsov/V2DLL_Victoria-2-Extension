// FUN_00b18e30 @ 00b18e30 body=[[00b18e30, 00b18e58] [00b18e60, 00b18f7f]]


void FUN_00b18e30(int param_1,int param_2)

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
  float *pfVar33;
  float *in_ECX;
  
  if ((*(char *)(in_ECX + 0x23) == '\0') && (param_2 != 0)) {
    pfVar33 = (float *)(param_1 + 8);
    do {
      fVar17 = in_ECX[4];
      fVar18 = in_ECX[5];
      fVar19 = in_ECX[6];
      fVar20 = in_ECX[7];
      fVar21 = *in_ECX;
      fVar22 = in_ECX[1];
      fVar23 = in_ECX[2];
      fVar24 = in_ECX[3];
      fVar1 = pfVar33[-1];
      fVar2 = pfVar33[-2];
      fVar25 = in_ECX[8];
      fVar26 = in_ECX[9];
      fVar27 = in_ECX[10];
      fVar28 = in_ECX[0xb];
      fVar29 = in_ECX[0xc];
      fVar30 = in_ECX[0xd];
      fVar31 = in_ECX[0xe];
      fVar32 = in_ECX[0xf];
      fVar3 = *pfVar33;
      fVar4 = pfVar33[6];
      fVar5 = pfVar33[1];
      fVar6 = pfVar33[2];
      fVar7 = pfVar33[3];
      fVar8 = pfVar33[4];
      fVar9 = pfVar33[5];
      fVar10 = pfVar33[7];
      fVar11 = pfVar33[8];
      fVar12 = pfVar33[9];
      fVar13 = pfVar33[10];
      fVar14 = pfVar33[0xb];
      fVar15 = pfVar33[0xc];
      fVar16 = pfVar33[0xd];
      pfVar33[-2] = fVar1 * fVar17 + fVar2 * fVar21 + fVar5 * fVar29 + fVar3 * fVar25;
      pfVar33[-1] = fVar1 * fVar18 + fVar2 * fVar22 + fVar5 * fVar30 + fVar3 * fVar26;
      *pfVar33 = fVar1 * fVar19 + fVar2 * fVar23 + fVar5 * fVar31 + fVar3 * fVar27;
      pfVar33[1] = fVar1 * fVar20 + fVar2 * fVar24 + fVar5 * fVar32 + fVar3 * fVar28;
      pfVar33[2] = fVar9 * fVar29 + fVar7 * fVar17 + fVar6 * fVar21 + fVar8 * fVar25;
      pfVar33[3] = fVar9 * fVar30 + fVar7 * fVar18 + fVar6 * fVar22 + fVar8 * fVar26;
      pfVar33[4] = fVar9 * fVar31 + fVar7 * fVar19 + fVar6 * fVar23 + fVar8 * fVar27;
      pfVar33[5] = fVar9 * fVar32 + fVar7 * fVar20 + fVar6 * fVar24 + fVar8 * fVar28;
      pfVar33[6] = fVar12 * fVar29 + fVar11 * fVar25 + fVar10 * fVar17 + fVar4 * fVar21;
      pfVar33[7] = fVar12 * fVar30 + fVar11 * fVar26 + fVar10 * fVar18 + fVar4 * fVar22;
      pfVar33[8] = fVar12 * fVar31 + fVar11 * fVar27 + fVar10 * fVar19 + fVar4 * fVar23;
      pfVar33[9] = fVar12 * fVar32 + fVar11 * fVar28 + fVar10 * fVar20 + fVar4 * fVar24;
      pfVar33[10] = fVar16 * fVar29 + fVar15 * fVar25 + fVar14 * fVar17 + fVar21 * fVar13;
      pfVar33[0xb] = fVar16 * fVar30 + fVar15 * fVar26 + fVar14 * fVar18 + fVar22 * fVar13;
      pfVar33[0xc] = fVar16 * fVar31 + fVar15 * fVar27 + fVar14 * fVar19 + fVar23 * fVar13;
      pfVar33[0xd] = fVar16 * fVar32 + fVar15 * fVar28 + fVar14 * fVar20 + fVar24 * fVar13;
      pfVar33 = pfVar33 + 0x10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

