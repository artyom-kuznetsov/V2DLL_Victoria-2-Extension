// FUN_00aa7f70 @ 00aa7f70 body=[[00aa7f70, 00aa801d]]


void FUN_00aa7f70(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  
  iVar5 = (int)param_3 - (int)param_1 >> 3;
  iVar10 = param_2 - (int)param_1 >> 3;
  iVar8 = iVar10;
  param_2 = iVar5;
  while (iVar3 = iVar8, iVar3 != 0) {
    iVar8 = param_2 % iVar3;
    param_2 = iVar3;
  }
  if ((param_2 < iVar5) && (0 < param_2)) {
    puVar4 = param_1 + param_2 * 2;
    do {
      puVar7 = puVar4 + iVar10 * 2;
      puVar9 = puVar4;
      if (puVar4 + iVar10 * 2 == param_3) {
        puVar7 = param_1;
      }
      do {
        puVar6 = puVar7;
        uVar1 = *puVar9;
        uVar2 = puVar9[1];
        *puVar9 = *puVar6;
        puVar9[1] = puVar6[1];
        *puVar6 = uVar1;
        iVar8 = (int)param_3 - (int)puVar6 >> 3;
        puVar6[1] = uVar2;
        if (iVar10 < iVar8) {
          puVar7 = puVar6 + iVar10 * 2;
        }
        else {
          puVar7 = param_1 + (iVar10 - iVar8) * 2;
        }
        puVar9 = puVar6;
      } while (puVar7 != puVar4);
      param_2 = param_2 + -1;
      puVar4 = puVar4 + -2;
    } while (0 < param_2);
  }
  return;
}

