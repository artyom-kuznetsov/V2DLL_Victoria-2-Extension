// FUN_005cd5c0 @ 005cd5c0 body=[[005cd5c0, 005cd61c]]


void FUN_005cd5c0(int param_1)

{
  int *piVar1;
  int iVar2;
  int *unaff_ESI;
  int unaff_EDI;
  
  FUN_00401000(0x3f000000);
  iVar2 = FUN_00b31c00();
  *unaff_ESI = iVar2;
  piVar1 = *(int **)(param_1 + 0x38);
  while (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    piVar1 = (int *)piVar1[2];
    if (*(int *)(*(int *)(iVar2 + 0x38) + 0x34) == unaff_EDI) {
      *unaff_ESI = *unaff_ESI + *(int *)(iVar2 + 0x3c);
    }
  }
  return;
}

