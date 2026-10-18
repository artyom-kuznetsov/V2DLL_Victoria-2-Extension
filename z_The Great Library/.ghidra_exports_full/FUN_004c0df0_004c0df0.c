// FUN_004c0df0 @ 004c0df0 body=[[004c0df0, 004c0e6a]]


void FUN_004c0df0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *unaff_EDI;
  
  piVar5 = unaff_EDI;
  if (unaff_EDI != param_1) {
    while (piVar4 = piVar5 + 2, piVar4 != param_1) {
      iVar2 = *piVar4;
      iVar3 = piVar5[3];
      piVar6 = piVar4;
      if (*unaff_EDI < iVar2) {
        for (; unaff_EDI != piVar6; piVar6 = piVar6 + -2) {
          *piVar6 = piVar6[-2];
          piVar6[1] = piVar6[-1];
        }
        *unaff_EDI = iVar2;
        unaff_EDI[1] = iVar3;
        piVar5 = piVar4;
      }
      else {
        iVar1 = *piVar5;
        while (iVar1 < iVar2) {
          *piVar6 = *piVar5;
          piVar6[1] = piVar5[1];
          iVar1 = piVar5[-2];
          piVar6 = piVar5;
          piVar5 = piVar5 + -2;
        }
        *piVar6 = iVar2;
        piVar6[1] = iVar3;
        piVar5 = piVar4;
      }
    }
  }
  return;
}

