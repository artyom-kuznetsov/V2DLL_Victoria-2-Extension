// FUN_00547030 @ 00547030 body=[[00547030, 0054705a] [00547060, 005470f5]]


void FUN_00547030(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int local_8;
  
  piVar3 = (int *)(DAT_01258a48 + 0x68);
  iVar8 = *(int *)(DAT_01258a48 + 0x6c) - *piVar3 >> 2;
  local_8 = 0;
  if (0 < iVar8) {
    do {
      piVar7 = *(int **)(*piVar3 + local_8 * 4);
      cVar2 = (**(code **)(*piVar7 + 0x18))();
      if ((cVar2 != '\0') &&
         (cVar2 = (**(code **)(**(int **)(*(int *)(param_1 + 0x880) + piVar7[0x14] * 4) + 0x34))(),
         cVar2 != '\0')) {
        iVar1 = *(int *)(*(int *)(param_1 + 0x880) + piVar7[0x14] * 4);
        iVar4 = piVar7[3] - piVar7[2] >> 2;
        *param_3 = *param_3 + iVar4 * 1000;
        iVar5 = 0;
        iVar6 = 0;
        if (0 < iVar4) {
          piVar7 = (int *)piVar7[2];
          do {
            iVar6 = iVar5;
            if (*piVar7 == iVar1) break;
            iVar5 = iVar5 + 1;
            piVar7 = piVar7 + 1;
            iVar6 = 0;
          } while (iVar5 < iVar4);
        }
        *param_2 = *param_2 + (iVar6 + 1) * 1000;
      }
      local_8 = local_8 + 1;
    } while (local_8 < iVar8);
  }
  return;
}

