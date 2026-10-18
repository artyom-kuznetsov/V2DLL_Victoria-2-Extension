// FUN_005cd620 @ 005cd620 body=[[005cd620, 005cd684]]


void FUN_005cd620(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *unaff_ESI;
  
  FUN_00401000(0x3f000000);
  iVar2 = FUN_00b31c00();
  *unaff_ESI = iVar2;
  piVar3 = *(int **)(param_1 + 0x38);
  if (piVar3 != (int *)0x0) {
    iVar2 = *(int *)(param_2 + 0x24);
    do {
      iVar1 = *piVar3;
      piVar3 = (int *)piVar3[2];
      if (*(int *)(*(int *)(iVar1 + 0x38) + 0x24) == iVar2) {
        *unaff_ESI = *unaff_ESI + *(int *)(iVar1 + 0x3c);
      }
    } while (piVar3 != (int *)0x0);
  }
  return;
}

