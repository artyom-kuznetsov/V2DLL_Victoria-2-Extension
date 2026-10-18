// FUN_009b1100 @ 009b1100 body=[[009b1100, 009b1160]]


void FUN_009b1100(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int unaff_ESI;
  
  iVar2 = (**(code **)(**(int **)(unaff_ESI + 0x38) + 0x44))();
  if (iVar2 != -1) {
    iVar1 = *(int *)(unaff_ESI + 0xec);
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
    iVar2 = *(int *)(unaff_ESI + 0xf0);
    *(int **)(unaff_ESI + 0xec) = piVar3;
    *(int *)(unaff_ESI + 0xf0) = iVar2 + 1;
    if (iVar2 != 0) {
      *(int **)(iVar1 + 8) = piVar3;
      return;
    }
    *(int **)(unaff_ESI + 0xe8) = piVar3;
  }
  return;
}

