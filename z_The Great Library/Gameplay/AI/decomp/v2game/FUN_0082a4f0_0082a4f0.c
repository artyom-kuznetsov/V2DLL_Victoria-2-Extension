// FUN_0082a4f0 @ 0082a4f0 body=[[0082a4f0, 0082a87f]]


int FUN_0082a4f0(int param_1,int *param_2,int *param_3,int param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  undefined1 local_20 [4];
  int local_1c;
  int local_18;
  float local_14;
  int local_10;
  int *local_c;
  int local_8;
  
  iVar3 = *(int *)(param_2[0x37] + 0x5c);
  local_14 = DAT_00f092dc;
  local_1c = 0;
  local_18 = 0;
  if ((*(int *)(iVar3 + 0xcc) - *(int *)(iVar3 + 200)) / 0x24 < 1) {
    return 0;
  }
  local_10 = 0;
  do {
    piVar4 = (int *)(*(int *)(iVar3 + 200) + local_10);
    if ((((*piVar4 != 4) &&
         (iVar3 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + piVar4[1] * 4),
         *(char *)(*(int *)(iVar3 + 0x5c) + 0x2a) != '\0')) &&
        (local_8 = iVar3, cVar1 = FUN_005b9690(), cVar1 == '\0')) &&
       (cVar1 = (**(code **)(*param_2 + 0x84))(iVar3), cVar1 != '\0')) {
      piVar4 = (int *)FUN_005d24a0(local_20);
      iVar3 = (*(int *)(DAT_012588e8 + 0xb0c) + -43800000) / 0x18;
      iVar5 = (int)((double)iVar3 / 365.0);
      iVar6 = (*piVar4 + -43800000) / 0x18;
      iVar2 = (int)((double)iVar6 / 365.0);
      iVar6 = ((((int)((float)iVar5 * 365.0) - (int)((float)iVar2 * 365.0)) +
               (iVar2 - iVar5) * 0x16d) - iVar3) + iVar6;
      if (iVar6 <= param_4) {
        iVar3 = FUN_005dc8b0(*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x38));
        if ((iVar3 < 1) || (iVar3 < param_2[0x26] / 2)) {
          piVar4 = (int *)FUN_004b3c40(local_8,param_1 + 0x34);
          iVar2 = *(int *)(local_8 + 0x5c);
          fVar7 = ((1000.0 - (float)iVar6) - (float)(iVar3 * 100)) + (float)*piVar4 / 1000.0;
          iVar3 = 0;
          if (0 < (*(int *)(iVar2 + 0xcc) - *(int *)(iVar2 + 200)) / 0x24) {
            local_c = *(int **)(iVar2 + 200);
            do {
              if ((*local_c != 4) &&
                 (iVar5 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + local_c[1] * 4),
                 param_2[0x37] != iVar5)) {
                if (*(int *)(iVar5 + 0x134) == *(int *)(param_1 + 0x38)) {
                  fVar7 = fVar7 + 5.0;
                }
                if (*(int *)(iVar5 + 300) == *(int *)(param_1 + 0x38)) {
                  fVar7 = fVar7 + 2.0;
                }
                if ((*(int *)(iVar5 + 300) != 0) && (*(int *)(iVar5 + 0x158) != 0)) {
                  fVar7 = fVar7 + 1.0;
                }
              }
              local_c = local_c + 9;
              iVar3 = iVar3 + 1;
            } while (iVar3 < (*(int *)(iVar2 + 0xcc) - *(int *)(iVar2 + 200)) / 0x24);
          }
          if (*param_3 < iVar6) {
            fVar7 = fVar7 - (float)(iVar6 - *param_3) / 10.0;
          }
          if (local_14 < fVar7) {
            *param_3 = iVar6;
            local_1c = local_8;
            local_14 = fVar7;
          }
        }
      }
    }
    iVar3 = *(int *)(param_2[0x37] + 0x5c);
    local_10 = local_10 + 0x24;
    local_18 = local_18 + 1;
  } while (local_18 < (*(int *)(iVar3 + 0xcc) - *(int *)(iVar3 + 200)) / 0x24);
  return local_1c;
}

