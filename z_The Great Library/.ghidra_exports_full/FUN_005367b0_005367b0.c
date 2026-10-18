// FUN_005367b0 @ 005367b0 body=[[005367b0, 00536822]]


void FUN_005367b0(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int unaff_ESI;
  
  for (piVar3 = *(int **)(unaff_ESI + 0x148c); piVar3 != (int *)0x0; piVar3 = (int *)piVar3[2]) {
    if (*piVar3 == param_1) {
      return;
    }
  }
  iVar1 = *(int *)(unaff_ESI + 0x1490);
  piVar3 = (int *)FUN_00aae9af(0x10);
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    *piVar3 = param_1;
    piVar3[1] = iVar1;
    piVar3[2] = 0;
    *(undefined1 *)(piVar3 + 3) = 0;
  }
  iVar2 = *(int *)(unaff_ESI + 0x1494);
  *(int **)(unaff_ESI + 0x1490) = piVar3;
  *(int *)(unaff_ESI + 0x1494) = iVar2 + 1;
  if (iVar2 == 0) {
    *(int **)(unaff_ESI + 0x148c) = piVar3;
    return;
  }
  *(int **)(iVar1 + 8) = piVar3;
  return;
}

