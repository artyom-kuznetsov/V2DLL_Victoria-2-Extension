// FUN_0098d2e0 @ 0098d2e0 body=[[0098d2e0, 0098d3a2]]


void FUN_0098d2e0(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float *unaff_ESI;
  
  iVar1 = *(int *)(param_1 + 0x148);
  iVar4 = *(int *)(param_1 + 0x14c) - iVar1 >> 3;
  if (iVar4 == 0) {
    FUN_00423920();
    FUN_00423920();
    FUN_0098dd90(param_1);
    return;
  }
  fVar2 = *unaff_ESI - *(float *)(iVar1 + -0x10 + iVar4 * 8);
  fVar3 = unaff_ESI[1] - *(float *)(iVar1 + -0xc + iVar4 * 8);
  if (25.0 < fVar3 * fVar3 + fVar2 * fVar2) {
    FUN_00423920();
  }
  iVar1 = *(int *)(param_1 + 0x148);
  iVar4 = *(int *)(param_1 + 0x14c) - iVar1 >> 3;
  *(float *)(iVar1 + -8 + iVar4 * 8) = *unaff_ESI;
  *(float *)(iVar1 + -4 + iVar4 * 8) = unaff_ESI[1];
  FUN_0098dd90(param_1);
  return;
}

