// FUN_00b19320 @ 00b19320 body=[[00b19320, 00b19348] [00b19350, 00b19470]]


void FUN_00b19320(int param_1,int param_2)

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
  int in_ECX;
  
  if ((*(char *)(in_ECX + 0x8c) == '\0') && (param_2 != 0)) {
    pfVar33 = (float *)(param_1 + 8);
    do {
      fVar17 = *(float *)(in_ECX + 0x60);
      fVar18 = *(float *)(in_ECX + 100);
      fVar19 = *(float *)(in_ECX + 0x68);
      fVar20 = *(float *)(in_ECX + 0x6c);
      fVar21 = *(float *)(in_ECX + 0x70);
      fVar22 = *(float *)(in_ECX + 0x74);
      fVar23 = *(float *)(in_ECX + 0x78);
      fVar24 = *(float *)(in_ECX + 0x7c);
      fVar1 = pfVar33[1];
      fVar2 = *pfVar33;
      fVar25 = *(float *)(in_ECX + 0x50);
      fVar26 = *(float *)(in_ECX + 0x54);
      fVar27 = *(float *)(in_ECX + 0x58);
      fVar28 = *(float *)(in_ECX + 0x5c);
      fVar29 = *(float *)(in_ECX + 0x40);
      fVar30 = *(float *)(in_ECX + 0x44);
      fVar31 = *(float *)(in_ECX + 0x48);
      fVar32 = *(float *)(in_ECX + 0x4c);
      fVar3 = pfVar33[-2];
      fVar4 = pfVar33[6];
      fVar5 = pfVar33[-1];
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
      pfVar33[-2] = fVar1 * fVar21 + fVar2 * fVar17 + fVar5 * fVar25 + fVar3 * fVar29;
      pfVar33[-1] = fVar1 * fVar22 + fVar2 * fVar18 + fVar5 * fVar26 + fVar3 * fVar30;
      *pfVar33 = fVar1 * fVar23 + fVar2 * fVar19 + fVar5 * fVar27 + fVar3 * fVar31;
      pfVar33[1] = fVar1 * fVar24 + fVar2 * fVar20 + fVar5 * fVar28 + fVar3 * fVar32;
      pfVar33[2] = fVar9 * fVar21 + fVar7 * fVar25 + fVar6 * fVar29 + fVar8 * fVar17;
      pfVar33[3] = fVar9 * fVar22 + fVar7 * fVar26 + fVar6 * fVar30 + fVar8 * fVar18;
      pfVar33[4] = fVar9 * fVar23 + fVar7 * fVar27 + fVar6 * fVar31 + fVar8 * fVar19;
      pfVar33[5] = fVar9 * fVar24 + fVar7 * fVar28 + fVar6 * fVar32 + fVar8 * fVar20;
      pfVar33[6] = fVar12 * fVar21 + fVar11 * fVar17 + fVar10 * fVar25 + fVar4 * fVar29;
      pfVar33[7] = fVar12 * fVar22 + fVar11 * fVar18 + fVar10 * fVar26 + fVar4 * fVar30;
      pfVar33[8] = fVar12 * fVar23 + fVar11 * fVar19 + fVar10 * fVar27 + fVar4 * fVar31;
      pfVar33[9] = fVar12 * fVar24 + fVar11 * fVar20 + fVar10 * fVar28 + fVar4 * fVar32;
      pfVar33[10] = fVar16 * fVar21 + fVar15 * fVar17 + fVar14 * fVar25 + fVar29 * fVar13;
      pfVar33[0xb] = fVar16 * fVar22 + fVar15 * fVar18 + fVar14 * fVar26 + fVar30 * fVar13;
      pfVar33[0xc] = fVar16 * fVar23 + fVar15 * fVar19 + fVar14 * fVar27 + fVar31 * fVar13;
      pfVar33[0xd] = fVar16 * fVar24 + fVar15 * fVar20 + fVar14 * fVar28 + fVar32 * fVar13;
      pfVar33 = pfVar33 + 0x10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

