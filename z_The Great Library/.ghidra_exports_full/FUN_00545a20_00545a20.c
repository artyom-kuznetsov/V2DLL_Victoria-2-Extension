// FUN_00545a20 @ 00545a20 body=[[00545a20, 00545bdf]]


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

undefined4 FUN_00545a20(undefined4 param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int *piVar7;
  int in_EAX;
  int iVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  undefined4 uVar12;
  int local_34 [2];
  undefined4 local_2c;
  
  uVar12 = 0xa110ca7e;
  local_2c = 0xa110ca7e;
  iVar8 = FUN_005459a0(param_1,local_34,2);
  if (iVar8 < 2) {
    if (iVar8 != 1) {
      return 0;
    }
    iVar8 = *(int *)(in_EAX + 0x58);
    piVar7 = *(int **)(local_34[0] + 8);
    if ((*piVar7 != iVar8) &&
       (piVar7[(*(int *)(local_34[0] + 0xc) - (int)piVar7 >> 2) + -1] != iVar8)) {
      iVar9 = FUN_004dad40(uVar12);
      piVar7 = *(int **)(local_34[0] + 8);
      for (piVar10 = piVar7; (piVar10 != *(int **)(local_34[0] + 0xc) && (*piVar10 != iVar8));
          piVar10 = piVar10 + 1) {
      }
      iVar8 = *(int *)(*(int *)(in_EAX + 0x5c) + 0x330);
      iVar11 = (int)piVar10 - (int)piVar7 >> 2;
      iVar9 = *(int *)(*(int *)(iVar9 + 0x34) + 0x58) * 0x10;
      fVar1 = *(float *)(iVar8 + 8 + iVar9);
      fVar2 = *(float *)(iVar8 + 0xc + iVar9);
      iVar8 = *(int *)(*(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + piVar7[iVar11 + -1] * 4) +
                               0x5c) + 0x330);
      fVar3 = *(float *)(iVar8 + 8 + iVar9);
      fVar4 = *(float *)(iVar8 + 0xc + iVar9);
      iVar8 = *(int *)(*(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + piVar7[iVar11 + 1] * 4) +
                               0x5c) + 0x330);
      fVar5 = *(float *)(iVar8 + 8 + iVar9);
      fVar6 = *(float *)(iVar8 + 0xc + iVar9);
      FUN_00413610();
      FUN_00413610();
      if ((fVar5 - fVar1) * (fVar3 - fVar1) + 0.0 + (fVar6 - fVar2) * (fVar4 - fVar2) <= 0.0) {
        return 0;
      }
    }
  }
  return 1;
}

