// FUN_006a42d0 @ 006a42d0 body=[[006a42d0, 006a4365]]


void FUN_006a42d0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int in_EAX;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  
  iVar4 = (int)param_2 - (int)param_1 >> 2;
  iVar10 = in_EAX - (int)param_1 >> 2;
  iVar8 = iVar10;
  iVar3 = iVar4;
  while (iVar2 = iVar8, iVar2 != 0) {
    iVar8 = iVar3 % iVar2;
    iVar3 = iVar2;
  }
  if ((iVar3 < iVar4) && (0 < iVar3)) {
    puVar7 = param_1 + iVar3;
    do {
      puVar6 = puVar7 + iVar10;
      puVar9 = puVar7;
      if (puVar7 + iVar10 == param_2) {
        puVar6 = param_1;
      }
      do {
        puVar5 = puVar6;
        uVar1 = *puVar9;
        *puVar9 = *puVar5;
        *puVar5 = uVar1;
        iVar8 = (int)param_2 - (int)puVar5 >> 2;
        if (iVar10 < iVar8) {
          puVar6 = puVar5 + iVar10;
        }
        else {
          puVar6 = param_1 + (iVar10 - iVar8);
        }
        puVar9 = puVar5;
      } while (puVar6 != puVar7);
      iVar3 = iVar3 + -1;
      puVar7 = puVar7 + -1;
    } while (0 < iVar3);
  }
  return;
}

