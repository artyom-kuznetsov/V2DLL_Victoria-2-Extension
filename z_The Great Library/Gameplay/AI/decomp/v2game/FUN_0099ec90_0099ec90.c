// FUN_0099ec90 @ 0099ec90 body=[[0099ec90, 0099ecfe]]


void FUN_0099ec90(int param_1)

{
  char *pcVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *unaff_EDI;
  
  if (*(uint *)(param_1 + 0x20) < 0x10) {
    iVar5 = param_1 + 0xc;
  }
  else {
    iVar5 = *(int *)(param_1 + 0xc);
  }
  uVar2 = 0;
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x1c)) {
    do {
      pcVar1 = (char *)(iVar4 + iVar5);
      iVar4 = iVar4 + 1;
      uVar2 = (uVar2 + (int)*pcVar1) * 0x3d;
    } while (iVar4 < *(int *)(param_1 + 0x1c));
  }
  uVar2 = uVar2 % (uint)unaff_EDI[1];
  piVar3 = (int *)FUN_00aae9af(8);
  if (piVar3 == (int *)0x0) {
    *(undefined4 *)(unaff_EDI[2] + uVar2 * 4) = 0;
    *unaff_EDI = *unaff_EDI + 1;
    return;
  }
  iVar5 = *(int *)(unaff_EDI[2] + uVar2 * 4);
  *piVar3 = param_1;
  piVar3[1] = iVar5;
  *(int **)(unaff_EDI[2] + uVar2 * 4) = piVar3;
  *unaff_EDI = *unaff_EDI + 1;
  return;
}

