// FUN_004ca1e0 @ 004ca1e0 body=[[004ca1e0, 004ca287]]


void FUN_004ca1e0(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  
  iVar9 = (int)param_3 - (int)param_1 >> 3;
  iVar8 = param_2 - (int)param_1 >> 3;
  iVar7 = iVar8;
  param_2 = iVar9;
  while (iVar3 = iVar7, iVar3 != 0) {
    iVar7 = param_2 % iVar3;
    param_2 = iVar3;
  }
  if ((param_2 < iVar9) && (0 < param_2)) {
    puVar4 = param_1 + param_2 * 2;
    do {
      puVar6 = param_1;
      puVar10 = puVar4;
      if (puVar4 + iVar8 * 2 != param_3) {
        puVar6 = puVar4 + iVar8 * 2;
      }
      do {
        puVar5 = puVar6;
        uVar1 = *puVar10;
        uVar2 = puVar10[1];
        *puVar10 = *puVar5;
        puVar10[1] = puVar5[1];
        *puVar5 = uVar1;
        iVar7 = (int)param_3 - (int)puVar5 >> 3;
        puVar5[1] = uVar2;
        if (iVar8 < iVar7) {
          puVar6 = puVar5 + iVar8 * 2;
        }
        else {
          puVar6 = param_1 + (iVar8 - iVar7) * 2;
        }
        puVar10 = puVar5;
      } while (puVar6 != puVar4);
      param_2 = param_2 + -1;
      puVar4 = puVar4 + -2;
    } while (0 < param_2);
  }
  return;
}

