// FUN_0045cc50 @ 0045cc50 body=[[0045cc50, 0045cc7c] [0045cc80, 0045cccb]]


void FUN_0045cc50(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *unaff_EDI;
  
  puVar5 = unaff_EDI;
  if (unaff_EDI != param_1) {
    while (puVar4 = puVar5 + 2, puVar4 != param_1) {
      iVar2 = puVar5[3];
      uVar3 = *puVar4;
      puVar6 = puVar4;
      if ((int)unaff_EDI[1] < iVar2) {
        for (; unaff_EDI != puVar6; puVar6 = puVar6 + -2) {
          *puVar6 = puVar6[-2];
          puVar6[1] = puVar6[-1];
        }
        *unaff_EDI = uVar3;
        unaff_EDI[1] = iVar2;
        puVar5 = puVar4;
      }
      else {
        iVar1 = puVar5[1];
        puVar5 = puVar4;
        while (iVar1 < iVar2) {
          *puVar5 = puVar5[-2];
          puVar5[1] = puVar5[-1];
          iVar1 = puVar5[-3];
          puVar5 = puVar5 + -2;
        }
        *puVar5 = uVar3;
        puVar5[1] = iVar2;
        puVar5 = puVar4;
      }
    }
  }
  return;
}

