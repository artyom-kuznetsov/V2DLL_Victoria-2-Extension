// FUN_00a45ed0 @ 00a45ed0 body=[[00a45ed0, 00a4612f]]


uint FUN_00a45ed0(int param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  uint uVar13;
  undefined8 *puVar14;
  int *unaff_ESI;
  float10 fVar15;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float local_20;
  float fStack_1c;
  float local_18;
  float fStack_14;
  float local_10;
  float fStack_c;
  
  iVar5 = unaff_ESI[0x50];
  uVar1 = *(undefined8 *)(iVar5 + 0xa4);
  fVar4 = *(float *)(iVar5 + 0x11c);
  uVar2 = *(undefined8 *)(iVar5 + 0xac);
  uVar3 = *(undefined8 *)(iVar5 + 0xb4);
  fVar15 = (float10)(**(code **)(*unaff_ESI + 0xa0))();
  local_20 = (float)uVar1;
  fVar4 = (float)(fVar15 * (float10)fVar4);
  fStack_1c = (float)((ulonglong)uVar1 >> 0x20);
  local_18 = (float)uVar2;
  fStack_14 = (float)((ulonglong)uVar2 >> 0x20);
  local_10 = (float)uVar3;
  fStack_c = (float)((ulonglong)uVar3 >> 0x20);
  fVar6 = (float)unaff_ESI[0x31] + local_20 * fVar4;
  fVar7 = (float)unaff_ESI[0x31] + fStack_14 * fVar4;
  fVar8 = (float)unaff_ESI[0x32] + fStack_1c * fVar4;
  fVar9 = (float)unaff_ESI[0x32] + local_10 * fVar4;
  uVar13 = 0;
  puVar14 = (undefined8 *)(param_1 + 0x288);
  while( true ) {
    fStack_30 = (float)*puVar14;
    fStack_2c = (float)((ulonglong)*puVar14 >> 0x20);
    fStack_28 = (float)puVar14[1];
    fVar11 = fVar8;
    if (fStack_30 <= 0.0) {
      fVar10 = fVar7;
      if (fStack_2c <= 0.0) {
        fVar11 = fVar9;
      }
    }
    else {
      fVar10 = fVar6;
      if (fStack_2c <= 0.0) {
        fVar11 = fVar9;
      }
    }
    fVar12 = local_18;
    if (fStack_28 <= 0.0) {
      fVar12 = fStack_c;
    }
    fStack_24 = (float)((ulonglong)puVar14[1] >> 0x20);
    if (0.0 < fVar11 * fStack_2c + fVar10 * fStack_30 +
              ((float)unaff_ESI[0x33] + fVar12 * fVar4) * fStack_28 + fStack_24) break;
    uVar13 = uVar13 + 1;
    puVar14 = puVar14 + 2;
    if (3 < (int)uVar13) {
      return CONCAT31((int3)(uVar13 >> 8),1);
    }
  }
  return uVar13 & 0xffffff00;
}

