// FUN_00406210 @ 00406210 body=[[00406210, 0040624c] [00406250, 00406333]]


uint FUN_00406210(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float local_c;
  float local_8;
  
  pfVar6 = (float *)*param_1;
  iVar9 = param_1[1] - (int)pfVar6;
  iVar10 = iVar9 >> 3;
  if (2 < iVar10) {
    local_c = 0.0;
    local_8 = 0.0;
    if (1 < iVar10) {
      iVar8 = iVar10 + -1;
      pfVar5 = pfVar6;
      do {
        fVar3 = pfVar5[2] - *pfVar5;
        fVar4 = fVar3 * fVar3 + (pfVar5[3] - pfVar5[1]) * (pfVar5[3] - pfVar5[1]);
        if (fVar3 < 0.0) {
          pfVar6 = (float *)FUN_00401030(fVar4);
          local_8 = (float)(extraout_ST0_00 + (float10)local_8);
        }
        else {
          pfVar6 = (float *)FUN_00401030(fVar4);
          local_c = (float)(extraout_ST0 + (float10)local_c);
        }
        iVar8 = iVar8 + -1;
        pfVar5 = pfVar5 + 2;
      } while (iVar8 != 0);
    }
    if (local_c < local_8) {
      iVar8 = iVar10 - (iVar9 >> 0x1f) >> 1;
      iVar7 = 0;
      iVar9 = iVar8;
      if (0 < iVar8) {
        iVar10 = iVar10 * 8;
        do {
          iVar1 = *param_1;
          uVar2 = *(undefined4 *)(iVar1 + iVar7 * 8);
          iVar9 = *(int *)(iVar1 + 4 + iVar7 * 8);
          *(undefined4 *)(iVar1 + iVar7 * 8) = *(undefined4 *)(iVar10 + -8 + iVar1);
          *(undefined4 *)(iVar1 + 4 + iVar7 * 8) = *(undefined4 *)(iVar10 + -4 + iVar1);
          *(undefined4 *)(iVar10 + -8 + iVar1) = uVar2;
          *(int *)(iVar10 + -4 + iVar1) = iVar9;
          iVar7 = iVar7 + 1;
          iVar10 = iVar10 + -8;
        } while (iVar7 < iVar8);
      }
      return CONCAT31((int3)((uint)iVar9 >> 8),1);
    }
  }
  return (uint)pfVar6 & 0xffffff00;
}

