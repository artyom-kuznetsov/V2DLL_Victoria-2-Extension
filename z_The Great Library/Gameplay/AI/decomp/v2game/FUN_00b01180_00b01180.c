// FUN_00b01180 @ 00b01180 body=[[00b01180, 00b013fb]]


void FUN_00b01180(void)

{
  uint uVar1;
  int iVar2;
  float fVar3;
  bool bVar4;
  bool bVar5;
  int in_ECX;
  int *piVar6;
  uint uVar7;
  int iVar8;
  
  fVar3 = 0.0;
  uVar1 = *(uint *)(in_ECX + 0x48);
  uVar7 = 0;
  bVar4 = true;
  bVar5 = false;
  if (3 < (int)uVar1) {
    piVar6 = (int *)(*(int *)(in_ECX + 0x44) + 8);
    iVar8 = (uVar1 - 4 >> 2) + 1;
    uVar7 = iVar8 * 4;
    do {
      iVar2 = piVar6[-2];
      if ((*(float *)(iVar2 + 0x60) < 3.4028235e+38) && (fVar3 < *(float *)(iVar2 + 0x60))) {
        fVar3 = *(float *)(iVar2 + 0x60);
      }
      if (0.0 < *(float *)(iVar2 + 0x60) != (*(float *)(iVar2 + 0x60) == 0.0)) {
        bVar4 = false;
      }
      if (*(float *)(iVar2 + 0x60) < 0.0) {
        bVar5 = true;
      }
      iVar2 = piVar6[-1];
      if ((*(float *)(iVar2 + 0x60) < 3.4028235e+38) && (fVar3 < *(float *)(iVar2 + 0x60))) {
        fVar3 = *(float *)(iVar2 + 0x60);
      }
      if (0.0 < *(float *)(iVar2 + 0x60) != (*(float *)(iVar2 + 0x60) == 0.0)) {
        bVar4 = false;
      }
      if (*(float *)(iVar2 + 0x60) < 0.0) {
        bVar5 = true;
      }
      iVar2 = *piVar6;
      if ((*(float *)(iVar2 + 0x60) < 3.4028235e+38) && (fVar3 < *(float *)(iVar2 + 0x60))) {
        fVar3 = *(float *)(iVar2 + 0x60);
      }
      if (0.0 < *(float *)(iVar2 + 0x60) != (*(float *)(iVar2 + 0x60) == 0.0)) {
        bVar4 = false;
      }
      if (*(float *)(iVar2 + 0x60) < 0.0) {
        bVar5 = true;
      }
      iVar2 = piVar6[1];
      if ((*(float *)(iVar2 + 0x60) < 3.4028235e+38) && (fVar3 < *(float *)(iVar2 + 0x60))) {
        fVar3 = *(float *)(iVar2 + 0x60);
      }
      if (0.0 < *(float *)(iVar2 + 0x60) != (*(float *)(iVar2 + 0x60) == 0.0)) {
        bVar4 = false;
      }
      if (*(float *)(iVar2 + 0x60) < 0.0) {
        bVar5 = true;
      }
      piVar6 = piVar6 + 4;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  if (uVar7 < uVar1) {
    piVar6 = (int *)(*(int *)(in_ECX + 0x44) + uVar7 * 4);
    iVar8 = uVar1 - uVar7;
    do {
      iVar2 = *piVar6;
      if ((*(float *)(iVar2 + 0x60) < 3.4028235e+38) && (fVar3 < *(float *)(iVar2 + 0x60))) {
        fVar3 = *(float *)(iVar2 + 0x60);
      }
      if (0.0 < *(float *)(iVar2 + 0x60) != (*(float *)(iVar2 + 0x60) == 0.0)) {
        bVar4 = false;
      }
      if (*(float *)(iVar2 + 0x60) < 0.0) {
        bVar5 = true;
      }
      piVar6 = piVar6 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  if ((bVar4) || ((bVar5 && (fVar3 <= 0.0001)))) {
    fVar3 = 100000.0;
  }
  uVar7 = 0;
  *(float *)(in_ECX + 0x30) = fVar3;
  if (3 < (int)uVar1) {
    do {
      iVar8 = *(int *)(*(int *)(in_ECX + 0x44) + uVar7 * 4);
      if (*(float *)(iVar8 + 0x60) < 0.0) {
        *(float *)(iVar8 + 0x60) = fVar3;
      }
      iVar8 = *(int *)(*(int *)(in_ECX + 0x44) + 4 + uVar7 * 4);
      if (*(float *)(iVar8 + 0x60) < 0.0) {
        *(float *)(iVar8 + 0x60) = fVar3;
      }
      iVar8 = *(int *)(*(int *)(in_ECX + 0x44) + 8 + uVar7 * 4);
      if (*(float *)(iVar8 + 0x60) < 0.0) {
        *(float *)(iVar8 + 0x60) = fVar3;
      }
      iVar8 = *(int *)(*(int *)(in_ECX + 0x44) + 0xc + uVar7 * 4);
      if (*(float *)(iVar8 + 0x60) < 0.0) {
        *(float *)(iVar8 + 0x60) = fVar3;
      }
      uVar7 = uVar7 + 4;
    } while (uVar7 < uVar1 - 3);
  }
  if (uVar7 < uVar1) {
    do {
      iVar8 = *(int *)(*(int *)(in_ECX + 0x44) + uVar7 * 4);
      if (*(float *)(iVar8 + 0x60) < 0.0) {
        *(float *)(iVar8 + 0x60) = fVar3;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar1);
    *(float *)(in_ECX + 0x34) = fVar3;
    return;
  }
  *(float *)(in_ECX + 0x34) = fVar3;
  return;
}

