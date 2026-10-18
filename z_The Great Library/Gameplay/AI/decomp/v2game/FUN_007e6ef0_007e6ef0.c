// FUN_007e6ef0 @ 007e6ef0 body=[[007e6ef0, 007e712f]]


void FUN_007e6ef0(int *param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *_Dst;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint local_20;
  int local_1c;
  int *local_c;
  int *local_8;
  
  iVar3 = param_3;
  iVar4 = (param_2[1] - *param_2 >> 1) - param_4;
  uVar11 = (param_1[1] - *param_1 >> 3) - param_3;
  if ((0 < (int)uVar11) && (0 < iVar4)) {
    piVar5 = (int *)FUN_00aad56b(-(uint)((int)((ulonglong)uVar11 * 8 >> 0x20) != 0) |
                                 (uint)((ulonglong)uVar11 * 8));
    _Dst = (int *)FUN_00aad56b(-(uint)((int)((ulonglong)uVar11 * 4 >> 0x20) != 0) |
                               (uint)((ulonglong)uVar11 * 4));
    _memset(_Dst,-1,uVar11 * 4);
    param_3 = 0;
    if (0 < (int)uVar11) {
      local_1c = 1;
      iVar12 = iVar3 * 8;
      local_20 = uVar11;
      local_c = piVar5;
      local_8 = _Dst;
      do {
        if (*local_8 == -1) {
          iVar7 = *(int *)(iVar12 + *param_1);
          iVar9 = *(int *)(iVar12 + 4 + *param_1);
          *local_c = iVar7;
          local_c[1] = iVar9;
          *local_8 = param_3;
          iVar10 = iVar12;
          for (iVar8 = local_1c; iVar8 < (int)uVar11; iVar8 = iVar8 + 1) {
            iVar10 = iVar10 + 8;
            if ((((int *)(iVar10 + *param_1))[1] == iVar9) && (*(int *)(iVar10 + *param_1) == iVar7)
               ) {
              _Dst[iVar8] = param_3;
            }
          }
          param_3 = param_3 + 1;
          local_c = local_c + 2;
        }
        local_8 = local_8 + 1;
        local_1c = local_1c + 1;
        iVar12 = iVar12 + 8;
        local_20 = local_20 - 1;
      } while (local_20 != 0);
    }
    if (0 < param_3) {
      iVar12 = iVar3 * 8;
      piVar6 = piVar5;
      do {
        iVar7 = *param_1;
        *(int *)(iVar12 + iVar7) = *piVar6;
        *(int *)(iVar12 + 4 + iVar7) = piVar6[1];
        piVar6 = piVar6 + 2;
        iVar12 = iVar12 + 8;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
    }
    FUN_007e6620();
    param_3 = 0;
    param_1 = (int *)0x0;
    iVar12 = 0;
    if (0 < iVar4) {
      iVar7 = param_4 * 2;
      iVar9 = iVar7;
      do {
        iVar12 = *param_2;
        param_1 = (int *)((int)param_1 + 3);
        iVar10 = _Dst[(uint)*(ushort *)(iVar7 + iVar12) - iVar3];
        iVar8 = _Dst[(uint)*(ushort *)(iVar7 + 2 + iVar12) - iVar3];
        iVar1 = _Dst[(uint)*(ushort *)(iVar7 + 4 + iVar12) - iVar3];
        iVar7 = iVar7 + 6;
        if (((iVar10 != iVar8) && (iVar10 != iVar1)) && (iVar8 != iVar1)) {
          sVar2 = (short)iVar3;
          *(short *)(iVar9 + iVar12) = (short)iVar10 + sVar2;
          *(short *)(iVar9 + 2 + *param_2) = (short)iVar8 + sVar2;
          param_3 = param_3 + 3;
          *(short *)(iVar9 + 4 + *param_2) = (short)iVar1 + sVar2;
          iVar9 = iVar9 + 6;
        }
        iVar12 = param_3;
      } while ((int)param_1 < iVar4);
    }
    FUN_007d85d0(iVar12 + param_4);
    FUN_00aaea59(piVar5);
    FUN_00aaea59(_Dst);
  }
  return;
}

