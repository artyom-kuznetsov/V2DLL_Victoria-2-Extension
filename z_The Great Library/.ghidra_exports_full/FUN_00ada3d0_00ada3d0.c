// FUN_00ada3d0 @ 00ada3d0 body=[[00ada3d0, 00ada4d5]]


void FUN_00ada3d0(int param_1)

{
  float fVar1;
  ushort uVar2;
  uint uVar3;
  float fVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  
  fVar4 = 0.0;
  uVar3 = *(uint *)(param_1 + 0x48);
  uVar6 = 0;
  if (3 < (int)uVar3) {
    piVar5 = (int *)(*(int *)(param_1 + 0x44) + 8);
    iVar7 = (uVar3 - 4 >> 2) + 1;
    uVar6 = iVar7 * 4;
    do {
      uVar2 = *(ushort *)((int *)piVar5[-2] + 1);
      if ((uVar2 != 0) &&
         (fVar1 = *(float *)(*(int *)piVar5[-2] + -4 + (uint)uVar2 * 8), fVar4 <= fVar1)) {
        fVar4 = fVar1;
      }
      uVar2 = *(ushort *)((int *)piVar5[-1] + 1);
      if ((uVar2 != 0) &&
         (fVar1 = *(float *)(*(int *)piVar5[-1] + -4 + (uint)uVar2 * 8), fVar4 <= fVar1)) {
        fVar4 = fVar1;
      }
      uVar2 = *(ushort *)((int *)*piVar5 + 1);
      if ((uVar2 != 0) &&
         (fVar1 = *(float *)(*(int *)*piVar5 + -4 + (uint)uVar2 * 8), fVar4 <= fVar1)) {
        fVar4 = fVar1;
      }
      uVar2 = *(ushort *)((int *)piVar5[1] + 1);
      if ((uVar2 != 0) &&
         (fVar1 = *(float *)(*(int *)piVar5[1] + -4 + (uint)uVar2 * 8), fVar4 <= fVar1)) {
        fVar4 = fVar1;
      }
      piVar5 = piVar5 + 4;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  if (uVar6 < uVar3) {
    iVar7 = uVar3 - uVar6;
    piVar5 = (int *)(*(int *)(param_1 + 0x44) + uVar6 * 4);
    do {
      uVar2 = *(ushort *)((int *)*piVar5 + 1);
      if ((uVar2 != 0) &&
         (fVar1 = *(float *)(*(int *)*piVar5 + -4 + (uint)uVar2 * 8), fVar4 <= fVar1)) {
        fVar4 = fVar1;
      }
      piVar5 = piVar5 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  return;
}

