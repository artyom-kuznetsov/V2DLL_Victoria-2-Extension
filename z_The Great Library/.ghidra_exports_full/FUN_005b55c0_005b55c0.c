// FUN_005b55c0 @ 005b55c0 body=[[005b55c0, 005b561e]]


undefined4 FUN_005b55c0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  int unaff_EDI;
  
  if (0 < *(int *)(param_1 + 0x88)) {
    return 0;
  }
  piVar3 = *(int **)(unaff_EDI + 0x10c);
  if (piVar3 != (int *)0x0) {
    cVar1 = (**(code **)(*piVar3 + 0x44))(param_1);
    if (cVar1 != '\0') goto LAB_005b5608;
  }
  piVar3 = *(int **)(unaff_EDI + 0x110);
  if (piVar3 != (int *)0x0) {
    cVar1 = (**(code **)(*piVar3 + 0x44))(param_1);
    if (cVar1 != '\0') {
LAB_005b5608:
      uVar2 = (**(code **)(*piVar3 + 0x24))();
      return uVar2;
    }
  }
  return 0;
}

