// FUN_0051b350 @ 0051b350 body=[[0051b350, 0051b425]]


void FUN_0051b350(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int unaff_EDI;
  
  piVar3 = *(int **)(unaff_EDI + 0x66c);
  while (piVar3 != (int *)0x0) {
    iVar2 = *piVar3;
    piVar3 = (int *)piVar3[2];
    if (*(int *)(iVar2 + 0xc) == param_3) {
      *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(DAT_012588e8 + 0xb0c);
      FUN_00424810(param_1);
      return;
    }
  }
  iVar2 = FUN_00aae9af(0x14);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_004f6300();
  }
  iVar1 = DAT_012588e8;
  *(undefined4 *)(iVar2 + 8) = param_2;
  *(int *)(iVar2 + 0xc) = param_3;
  *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(iVar1 + 0xb0c);
  FUN_00424810(param_1);
  iVar1 = *(int *)(unaff_EDI + 0x670);
  piVar3 = (int *)FUN_00aae9af(0x10);
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    *piVar3 = iVar2;
    piVar3[1] = iVar1;
    piVar3[2] = 0;
    *(undefined1 *)(piVar3 + 3) = 0;
  }
  iVar2 = *(int *)(unaff_EDI + 0x674);
  *(int **)(unaff_EDI + 0x670) = piVar3;
  *(int *)(unaff_EDI + 0x674) = iVar2 + 1;
  if (iVar2 == 0) {
    *(int **)(unaff_EDI + 0x66c) = piVar3;
    return;
  }
  *(int **)(iVar1 + 8) = piVar3;
  return;
}

