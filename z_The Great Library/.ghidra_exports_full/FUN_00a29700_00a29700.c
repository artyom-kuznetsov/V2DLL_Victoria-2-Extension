// FUN_00a29700 @ 00a29700 body=[[00a29700, 00a29738] [00a29740, 00a2975c] [00a29760, 00a29cc5]]


void FUN_00a29700(void)

{
  float fVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
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
  undefined8 *puVar16;
  int *in_ECX;
  uint uVar17;
  uint uVar18;
  uint local_84;
  undefined8 uStack_58;
  float fStack_4c;
  float fStack_48;
  undefined8 uStack_44;
  float fStack_38;
  float fStack_34;
  undefined8 uStack_30;
  float fStack_24;
  float fStack_20;
  undefined8 uStack_1c;
  float fStack_10;
  float fStack_c;
  
  if (in_ECX[0x3e] == 0) {
    (**(code **)(*in_ECX + 0x74))();
  }
  uVar3 = in_ECX[0x29];
  uVar4 = in_ECX[0x2a];
  local_84 = 1;
  if (1 < uVar3) {
    do {
      if (local_84 == 0) break;
      local_84 = local_84 * 2;
    } while (local_84 < uVar3);
  }
  uVar17 = 1;
  uVar18 = uVar17;
  if (1 < uVar4) {
    do {
      uVar17 = 0;
      if (uVar18 == 0) break;
      uVar17 = uVar18 * 2;
      uVar18 = uVar17;
    } while (uVar17 < uVar4);
  }
  uVar18 = in_ECX[0x25];
  fVar5 = (float)(int)(uVar3 / uVar18);
  if ((int)(uVar3 / uVar18) < 0) {
    fVar5 = fVar5 + 4.2949673e+09;
  }
  fVar5 = (fVar5 - (float)*(ushort *)(in_ECX + 0x2b)) * (float)in_ECX[0x44];
  fVar7 = ((float)(int)uVar4 - (float)*(ushort *)(in_ECX + 0x2c)) * (float)in_ECX[0x44];
  fVar9 = (float)*(ushort *)((int)in_ECX + 0xb2) / (float)(int)local_84;
  fVar8 = (float)*(ushort *)(in_ECX + 0x2c) / (float)(int)uVar17;
  fVar6 = (float)(int)uVar18;
  if ((int)uVar18 < 0) {
    fVar6 = fVar6 + 4.2949673e+09;
  }
  uVar2 = *(ushort *)((int)in_ECX + 0xae);
  fVar6 = ((float)(int)(in_ECX[0x29] - (uint)*(ushort *)(in_ECX + 0x2b)) / (float)(int)local_84 -
          fVar9) / fVar6;
  in_ECX[0x59] = (int)fVar6;
  if (((0.0 < fVar7) && (0.0 <= fVar5)) &&
     ((uint)in_ECX[0x29] / uVar18 != (uint)*(ushort *)((int)in_ECX + 0xb2))) {
    puVar16 = (undefined8 *)FUN_009f9d10();
    fVar11 = DAT_00f092fc;
    fVar10 = ((float)(int)(uVar4 - uVar2) / (float)(int)uVar17 - fVar8) + fVar8;
    fVar7 = fVar7 + 0.0;
    fVar6 = fVar6 + fVar9;
    fVar1 = (float)in_ECX[0x28];
    fStack_4c = fVar9;
    fStack_34 = fVar8;
    fStack_24 = fVar6;
    fStack_c = fVar10;
    if ((fVar1 == 0.0) ||
       (((fVar12 = fVar9, fStack_48 = fVar8, fStack_38 = fVar6, fVar13 = fVar8, fVar14 = fVar6,
         fStack_20 = fVar10, fStack_10 = fVar9, fVar15 = fVar10, fVar1 != DAT_00f092fc &&
         (fVar12 = fVar6, fVar13 = fVar10, fVar14 = fVar9, fVar15 = fVar8, fVar1 != DAT_00f17b54))
        && (fStack_4c = fVar6, fVar12 = fVar9, fStack_48 = fVar10, fStack_38 = fVar9,
           fStack_34 = fVar10, fVar13 = fVar8, fStack_24 = fVar9, fVar14 = fVar6, fStack_20 = fVar8,
           fStack_10 = fVar6, fStack_c = fVar8, fVar15 = fVar10, fVar1 == DAT_00f092b0)))) {
      fVar12 = fStack_4c;
      fStack_48 = fVar10;
      fStack_38 = fVar9;
      fVar13 = fStack_34;
      fVar14 = fStack_24;
      fStack_20 = fVar8;
      fStack_10 = fVar6;
      fVar15 = fStack_c;
    }
    fStack_c = fVar15;
    fStack_24 = fVar14;
    fStack_34 = fVar13;
    fStack_4c = fVar12;
    uStack_58 = CONCAT44((float)*(ushort *)((int)in_ECX + 0xae) - 0.5,0xbf000000);
    uStack_44 = CONCAT44(fVar7 - 0.5,0xbf000000);
    fVar6 = DAT_00f092fc + 0.0;
    fVar8 = DAT_00f092fc + 0.0;
    fVar5 = (fVar5 + 0.0) - 0.5;
    uStack_1c = CONCAT44((float)*(ushort *)((int)in_ECX + 0xae) - 0.5,fVar5);
    fVar9 = DAT_00f092fc + 0.0;
    *puVar16 = uStack_58;
    puVar16[1] = CONCAT44(fStack_4c,fVar6);
    *(undefined8 *)((int)puVar16 + 0x14) = uStack_44;
    uStack_30 = CONCAT44(fVar7 - 0.5,fVar5);
    *(ulonglong *)((int)puVar16 + 0x1c) = CONCAT44(fStack_38,fVar8);
    *(undefined8 *)((int)puVar16 + 0x3c) = uStack_30;
    *(ulonglong *)((int)puVar16 + 0x44) = CONCAT44(fStack_24,fVar11 + 0.0);
    puVar16[5] = uStack_1c;
    *(float *)(puVar16 + 2) = fStack_48;
    *(float *)((int)puVar16 + 0x24) = fStack_34;
    puVar16[6] = CONCAT44(fStack_10,fVar9);
    *(float *)((int)puVar16 + 0x4c) = fStack_20;
    *(float *)(puVar16 + 7) = fStack_c;
    (**(code **)(*(int *)in_ECX[0x3b] + 0x30))((int *)in_ECX[0x3b]);
  }
  return;
}

