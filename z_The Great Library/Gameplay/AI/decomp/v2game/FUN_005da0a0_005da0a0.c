// FUN_005da0a0 @ 005da0a0 body=[[005da0a0, 005da11d]]


void FUN_005da0a0(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int unaff_EDI;
  
  iVar1 = *(int *)(unaff_EDI + 0x5c);
  if (iVar1 != 0) {
    *(undefined4 *)(unaff_EDI + 0x5c) = 0;
    for (piVar3 = *(int **)(iVar1 + 0x4c); (piVar3 != (int *)0x0 && (*piVar3 != unaff_EDI));
        piVar3 = (int *)piVar3[2]) {
    }
    FUN_005f2ae0(piVar3);
  }
  *(int *)(unaff_EDI + 0x5c) = param_1;
  iVar1 = *(int *)(param_1 + 0x50);
  piVar3 = (int *)FUN_00aae9af(0x10);
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    *piVar3 = unaff_EDI;
    piVar3[1] = iVar1;
    piVar3[2] = 0;
    *(undefined1 *)(piVar3 + 3) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x54);
  *(int **)(param_1 + 0x50) = piVar3;
  *(int *)(param_1 + 0x54) = iVar2 + 1;
  if (iVar2 == 0) {
    *(int **)(param_1 + 0x4c) = piVar3;
    return;
  }
  *(int **)(iVar1 + 8) = piVar3;
  return;
}

