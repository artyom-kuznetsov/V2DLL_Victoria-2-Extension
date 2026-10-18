// FUN_005d91f0 @ 005d91f0 body=[[005d91f0, 005d9248]]


void FUN_005d91f0(int param_1)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = *(int **)(in_EAX + 0x38);
  if (piVar3 != (int *)0x0) {
    FUN_00401000(0x3f000000);
    iVar1 = FUN_00b31c00();
    do {
      iVar2 = param_1;
      if (param_1 < iVar1) {
        iVar2 = iVar1;
      }
      *(int *)(*piVar3 + 0x40) = iVar2;
      piVar3 = (int *)piVar3[2];
    } while (piVar3 != (int *)0x0);
  }
  return;
}

