// FUN_00ace660 @ 00ace660 body=[[00ace660, 00ace92d]]


void FUN_00ace660(int param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  float *pfVar12;
  float *pfVar13;
  int in_ECX;
  int *piVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  
  iVar11 = param_1;
  fVar2 = 1.0;
  iVar15 = *(int *)(in_ECX + 0x18);
  iVar17 = *(int *)(in_ECX + 0x1b4);
  fVar3 = fVar2;
  fVar4 = fVar2;
  if ((iVar17 != 0) && (fVar2 = 1.0, fVar3 = 1.0, fVar4 = 1.0, *(int *)(iVar17 + 4) == 0)) {
    iVar5 = *(int *)(*(int *)(iVar17 + 0x14) + 0x1ac);
    iVar6 = *(int *)(iVar17 + 0x18);
    FUN_00ae01f0(*(int *)(iVar17 + 0x14));
    FUN_00ace660(*(undefined4 *)(iVar5 + 0x70));
    iVar17 = *(int *)(iVar5 + 0x70);
    fVar2 = *(float *)(iVar17 + iVar6 * 0xc);
    iVar17 = iVar17 + iVar6 * 0xc;
    fVar3 = *(float *)(iVar17 + 4);
    fVar4 = *(float *)(iVar17 + 8);
  }
  uVar7 = *(uint *)(*(int *)(in_ECX + 0x1ac) + 0x84);
  uVar16 = 0;
  if (3 < (int)uVar7) {
    piVar14 = (int *)(*(int *)(*(int *)(in_ECX + 0x1ac) + 0x80) + 8);
    pfVar12 = (float *)(iVar15 + 0x60);
    iVar17 = (uVar7 - 4 >> 2) + 1;
    uVar16 = iVar17 * 4;
    pfVar13 = (float *)(param_1 + 0x14);
    param_1 = iVar17;
    do {
      iVar17 = *(int *)(piVar14[-2] + 4);
      if (iVar17 == -1) {
        fVar8 = pfVar12[-0x10] * *(float *)(in_ECX + 0x120) * fVar2;
        fVar9 = *(float *)(in_ECX + 0x124) * pfVar12[-0xf] * fVar3;
        fVar10 = *(float *)(in_ECX + 0x128) * pfVar12[-0xe] * fVar4;
      }
      else {
        fVar9 = pfVar12[-0xf] * *(float *)(iVar11 + 4 + iVar17 * 0xc);
        pfVar1 = (float *)(iVar11 + iVar17 * 0xc);
        fVar10 = pfVar12[-0xe] * pfVar1[2];
        fVar8 = pfVar12[-0x10] * *pfVar1;
      }
      iVar17 = piVar14[-1];
      pfVar13[-5] = fVar8;
      pfVar13[-4] = fVar9;
      pfVar13[-3] = fVar10;
      iVar17 = *(int *)(iVar17 + 4);
      if (iVar17 == -1) {
        fVar8 = pfVar12[-2] * *(float *)(in_ECX + 0x120) * fVar2;
        fVar9 = *(float *)(in_ECX + 0x124) * pfVar12[-1] * fVar3;
        fVar10 = *(float *)(in_ECX + 0x128) * *pfVar12 * fVar4;
      }
      else {
        fVar9 = pfVar12[-1] * *(float *)(iVar11 + 4 + iVar17 * 0xc);
        pfVar1 = (float *)(iVar11 + iVar17 * 0xc);
        fVar10 = pfVar1[2] * *pfVar12;
        fVar8 = pfVar12[-2] * *pfVar1;
      }
      iVar17 = *piVar14;
      pfVar13[-2] = fVar8;
      pfVar13[-1] = fVar9;
      *pfVar13 = fVar10;
      iVar17 = *(int *)(iVar17 + 4);
      if (iVar17 == -1) {
        fVar8 = pfVar12[0xc] * *(float *)(in_ECX + 0x120) * fVar2;
        fVar9 = *(float *)(in_ECX + 0x124) * pfVar12[0xd] * fVar3;
        fVar10 = *(float *)(in_ECX + 0x128) * pfVar12[0xe] * fVar4;
      }
      else {
        fVar9 = pfVar12[0xd] * *(float *)(iVar11 + 4 + iVar17 * 0xc);
        pfVar1 = (float *)(iVar11 + iVar17 * 0xc);
        fVar10 = pfVar12[0xe] * pfVar1[2];
        fVar8 = pfVar12[0xc] * *pfVar1;
      }
      iVar17 = piVar14[1];
      pfVar13[1] = fVar8;
      pfVar13[2] = fVar9;
      pfVar13[3] = fVar10;
      iVar17 = *(int *)(iVar17 + 4);
      if (iVar17 == -1) {
        fVar8 = pfVar12[0x1a] * *(float *)(in_ECX + 0x120) * fVar2;
        fVar9 = *(float *)(in_ECX + 0x124) * pfVar12[0x1b] * fVar3;
        fVar10 = *(float *)(in_ECX + 0x128) * pfVar12[0x1c] * fVar4;
      }
      else {
        fVar9 = pfVar12[0x1b] * *(float *)(iVar11 + 4 + iVar17 * 0xc);
        pfVar1 = (float *)(iVar11 + iVar17 * 0xc);
        fVar10 = pfVar12[0x1c] * pfVar1[2];
        fVar8 = pfVar12[0x1a] * *pfVar1;
      }
      pfVar13[4] = fVar8;
      pfVar12 = pfVar12 + 0x38;
      pfVar13[5] = fVar9;
      piVar14 = piVar14 + 4;
      param_1 = param_1 + -1;
      pfVar13[6] = fVar10;
      pfVar13 = pfVar13 + 0xc;
    } while (param_1 != 0);
  }
  if (uVar16 < uVar7) {
    piVar14 = (int *)(*(int *)(*(int *)(in_ECX + 0x1ac) + 0x80) + uVar16 * 4);
    pfVar13 = (float *)(iVar15 + 0x28 + uVar16 * 0x38);
    iVar15 = uVar7 - uVar16;
    pfVar12 = (float *)(iVar11 + 8 + uVar16 * 0xc);
    do {
      iVar17 = *(int *)(*piVar14 + 4);
      if (iVar17 == -1) {
        fVar8 = pfVar13[-2] * *(float *)(in_ECX + 0x120) * fVar2;
        fVar9 = *(float *)(in_ECX + 0x124) * pfVar13[-1] * fVar3;
        fVar10 = *(float *)(in_ECX + 0x128) * *pfVar13 * fVar4;
      }
      else {
        fVar9 = pfVar13[-1] * *(float *)(iVar11 + 4 + iVar17 * 0xc);
        pfVar1 = (float *)(iVar11 + iVar17 * 0xc);
        fVar10 = pfVar1[2] * *pfVar13;
        fVar8 = pfVar13[-2] * *pfVar1;
      }
      pfVar12[-2] = fVar8;
      piVar14 = piVar14 + 1;
      pfVar13 = pfVar13 + 0xe;
      pfVar12[-1] = fVar9;
      iVar15 = iVar15 + -1;
      *pfVar12 = fVar10;
      pfVar12 = pfVar12 + 3;
    } while (iVar15 != 0);
  }
  return;
}

