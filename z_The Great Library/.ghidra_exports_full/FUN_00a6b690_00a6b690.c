// FUN_00a6b690 @ 00a6b690 body=[[00a6b690, 00a6b6cb]]


void FUN_00a6b690(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int unaff_EDI;
  
  piVar2 = param_1;
  iVar1 = *param_1;
  iVar3 = 1;
  param_1 = (int *)0x1;
  while (iVar1 == unaff_EDI) {
    if (iVar3 < 0x11) {
      do {
        param_1 = (int *)((int)param_1 + -1);
      } while (param_1 != (int *)0x0);
      iVar3 = iVar3 * 2;
      param_1 = (int *)iVar3;
    }
    else {
      SwitchToThread();
    }
    iVar1 = *piVar2;
  }
  return;
}

