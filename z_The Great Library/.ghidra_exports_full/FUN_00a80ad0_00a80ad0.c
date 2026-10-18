// FUN_00a80ad0 @ 00a80ad0 body=[[00a80ad0, 00a80b52]]


void FUN_00a80ad0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int in_EAX;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  
  iVar4 = (int)param_2 - (int)param_1 >> 2;
  iVar10 = in_EAX - (int)param_1 >> 2;
  iVar7 = iVar10;
  iVar3 = iVar4;
  while (iVar2 = iVar7, iVar2 != 0) {
    iVar7 = iVar3 % iVar2;
    iVar3 = iVar2;
  }
  if ((iVar3 < iVar4) && (0 < iVar3)) {
    puVar8 = param_1 + iVar3;
    do {
      puVar6 = puVar8 + iVar10;
      puVar9 = puVar8;
      if (puVar8 + iVar10 == param_2) {
        puVar6 = param_1;
      }
      do {
        puVar5 = puVar6;
        uVar1 = *puVar9;
        *puVar9 = *puVar5;
        iVar7 = (int)param_2 - (int)puVar5 >> 2;
        *puVar5 = uVar1;
        if (iVar10 < iVar7) {
          puVar6 = puVar5 + iVar10;
        }
        else {
          puVar6 = param_1 + (iVar10 - iVar7);
        }
        puVar9 = puVar5;
      } while (puVar6 != puVar8);
      iVar3 = iVar3 + -1;
      puVar8 = puVar8 + -1;
    } while (0 < iVar3);
  }
  return;
}

