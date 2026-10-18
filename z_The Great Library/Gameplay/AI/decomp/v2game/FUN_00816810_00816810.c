// FUN_00816810 @ 00816810 body=[[00816810, 00816d40]]


void FUN_00816810(void)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 *in_EAX;
  int iVar9;
  int iVar10;
  int iVar11;
  int unaff_ESI;
  
  *(undefined4 *)(unaff_ESI + 0x144) = *in_EAX;
  *(undefined4 *)(unaff_ESI + 0x148) = in_EAX[1];
  iVar9 = FUN_0052fc10();
  iVar9 = *(int *)(*(int *)(*(int *)(unaff_ESI + 0x13c) + 0x6bd6c) + iVar9 * 4);
  iVar10 = *(int *)(unaff_ESI + 0x148);
  *(int *)(unaff_ESI + 0x140) = iVar9;
  if (iVar10 == 0) {
    iVar10 = 1;
  }
  piVar1 = *(int **)(iVar9 + 0x14);
  iVar11 = *(int *)(unaff_ESI + 0x148);
  fVar4 = *(float *)(piVar1[((iVar10 + -1) / (piVar1[1] - *piVar1 >> 3)) * 4] +
                    ((iVar10 + -1) % (piVar1[1] - *piVar1 >> 3)) * 8) + 0.001;
  if (iVar11 == 0) {
    iVar11 = 1;
  }
  piVar1 = *(int **)(iVar9 + 0x14);
  fVar2 = *(float *)(unaff_ESI + 0x234);
  fVar5 = *(float *)(piVar1[((iVar11 + -1) / (piVar1[1] - *piVar1 >> 3)) * 4] + 4 +
                    ((iVar11 + -1) % (piVar1[1] - *piVar1 >> 3)) * 8) + 0.001;
  fVar3 = *(float *)(unaff_ESI + 0x238);
  fVar6 = (1.0 / (float)*(int *)(iVar9 + 0x38) + fVar4) - 0.002;
  fVar7 = (1.0 / (float)*(int *)(iVar9 + 0x34) + fVar5) - 0.002;
  *(float *)(unaff_ESI + 0x164) = fVar7;
  *(float *)(unaff_ESI + 0x1b8) = fVar7;
  uVar8 = DAT_00f092fc;
  *(float *)(unaff_ESI + 0x180) = fVar5;
  *(float *)(unaff_ESI + 0x19c) = fVar5;
  *(undefined4 *)(unaff_ESI + 0x16c) = uVar8;
  *(undefined4 *)(unaff_ESI + 0x1a0) = uVar8;
  *(undefined4 *)(unaff_ESI + 0x1bc) = uVar8;
  *(undefined4 *)(unaff_ESI + 0x1c0) = uVar8;
  *(float *)(unaff_ESI + 0x160) = fVar4;
  *(float *)(unaff_ESI + 0x17c) = fVar4;
  *(float *)(unaff_ESI + 0x198) = fVar6;
  *(float *)(unaff_ESI + 0x1b4) = fVar6;
  *(undefined4 *)(unaff_ESI + 0x168) = 0;
  *(undefined4 *)(unaff_ESI + 0x184) = 0;
  *(undefined4 *)(unaff_ESI + 0x188) = 0;
  *(undefined4 *)(unaff_ESI + 0x1a4) = 0;
  if (*(char *)(unaff_ESI + 0x14c) != '\0') {
    *(ulonglong *)(unaff_ESI + 0x154) = CONCAT44(-fVar3 * 0.5,-fVar2 * 0.5);
    *(ulonglong *)(unaff_ESI + 0x170) = CONCAT44(fVar3 * 0.5,-fVar2 * 0.5);
    *(ulonglong *)(unaff_ESI + 0x18c) = CONCAT44(fVar3 * 0.5,fVar2 * 0.5);
    *(ulonglong *)(unaff_ESI + 0x1a8) = CONCAT44(-fVar3 * 0.5,fVar2 * 0.5);
    *(undefined4 *)(unaff_ESI + 0x15c) = 0xbd4ccccd;
    fVar5 = -(fVar2 * 1.12) * 0.5;
    fVar6 = -(fVar3 * 1.12) * 0.5;
    fVar4 = fVar3 * 1.12 * 0.5;
    *(undefined4 *)(unaff_ESI + 0x178) = 0xbd4ccccd;
    *(ulonglong *)(unaff_ESI + 0x1c4) = CONCAT44(fVar6,fVar5);
    *(undefined4 *)(unaff_ESI + 0x194) = 0xbd4ccccd;
    *(undefined4 *)(unaff_ESI + 0x1b0) = 0xbd4ccccd;
    *(undefined4 *)(unaff_ESI + 0x1cc) = 0;
    *(ulonglong *)(unaff_ESI + 0x1e0) = CONCAT44(fVar4,fVar5);
    fVar2 = fVar2 * 1.12 * 0.5;
    *(ulonglong *)(unaff_ESI + 0x218) = CONCAT44(fVar6,fVar2);
    *(ulonglong *)(unaff_ESI + 0x1fc) = CONCAT44(fVar4,fVar2);
    *(undefined4 *)(unaff_ESI + 0x1e8) = 0;
    *(undefined4 *)(unaff_ESI + 0x204) = 0;
    *(undefined4 *)(unaff_ESI + 0x220) = 0;
    *(undefined4 *)(unaff_ESI + 0x1d0) = 0x3a83126f;
    *(undefined4 *)(unaff_ESI + 0x1d4) = 0x3ba3d70a;
    *(undefined4 *)(unaff_ESI + 0x1ec) = 0x3a83126f;
    *(undefined4 *)(unaff_ESI + 0x1f0) = 0x3ba3d70a;
    *(undefined4 *)(unaff_ESI + 0x208) = 0x3a83126f;
    *(undefined4 *)(unaff_ESI + 0x20c) = 0x3ba3d70a;
    *(undefined4 *)(unaff_ESI + 0x224) = 0x3a83126f;
    *(undefined4 *)(unaff_ESI + 0x228) = 0x3ba3d70a;
    return;
  }
  *(ulonglong *)(unaff_ESI + 0x154) = CONCAT44(-fVar3 * 0.5,-fVar2 * 0.5);
  *(undefined4 *)(unaff_ESI + 0x15c) = 0xbd4ccccd;
  *(ulonglong *)(unaff_ESI + 0x170) = CONCAT44(fVar3 * 0.5,-fVar2 * 0.5);
  *(ulonglong *)(unaff_ESI + 0x18c) = CONCAT44(fVar3 * 0.5,fVar2 * 0.5);
  *(ulonglong *)(unaff_ESI + 0x1a8) = CONCAT44(-fVar3 * 0.5,fVar2 * 0.5);
  *(undefined4 *)(unaff_ESI + 0x178) = 0xbd4ccccd;
  *(undefined4 *)(unaff_ESI + 0x194) = 0xbd4ccccd;
  *(undefined4 *)(unaff_ESI + 0x1b0) = 0xbd4ccccd;
  return;
}

