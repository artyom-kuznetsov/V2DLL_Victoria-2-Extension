// FUN_009e12a0 @ 009e12a0 body=[[009e12a0, 009e13ac] [009e13b0, 009e1413]]


uint * FUN_009e12a0(int param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  float fVar10;
  int local_8;
  
  fVar10 = 0.0;
  iVar5 = *(int *)(param_1 + 0x15c) - *(int *)(param_1 + 0x158);
  puVar4 = (uint *)(iVar5 * 0x38e38e39);
  iVar5 = iVar5 / 0x24;
  iVar9 = 0;
  if (3 < iVar5) {
    puVar4 = (uint *)(*(int *)(param_1 + 0x158) + 0x48);
    iVar6 = (iVar5 - 4U >> 2) + 1;
    iVar9 = iVar6 * 4;
    do {
      puVar1 = puVar4 + -0x12;
      puVar2 = puVar4 + -9;
      uVar8 = *puVar4;
      puVar3 = puVar4 + 9;
      puVar4 = puVar4 + 0x24;
      iVar6 = iVar6 + -1;
      fVar10 = (float)(int)*puVar1 + fVar10 + (float)(int)*puVar2 + (float)(int)uVar8 +
               (float)(int)*puVar3;
    } while (iVar6 != 0);
  }
  if (iVar9 < iVar5) {
    piVar7 = (int *)(*(int *)(param_1 + 0x158) + iVar9 * 0x24);
    iVar9 = iVar5 - iVar9;
    do {
      fVar10 = (float)*piVar7 + fVar10;
      piVar7 = piVar7 + 9;
      iVar9 = iVar9 + -1;
      puVar4 = (uint *)0x0;
    } while (iVar9 != 0);
  }
  iVar6 = 0;
  iVar9 = 0;
  if (0 < iVar5) {
    local_8 = 0;
    do {
      puVar4 = (uint *)(*(int *)(param_1 + 0x158) + local_8);
      uVar8 = (uint)(((float)(int)*puVar4 / fVar10) * 100.0 + 0.5);
      iVar9 = iVar9 + uVar8;
      *puVar4 = uVar8;
      if (iVar6 == iVar5 + -1) {
        uVar8 = (uVar8 - iVar9) + 100;
        *puVar4 = uVar8 & ((int)uVar8 < 1) - 1;
      }
      local_8 = local_8 + 0x24;
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar5);
  }
  return puVar4;
}

