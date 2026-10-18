// FUN_005068b0 @ 005068b0 body=[[005068b0, 005068e8]]


undefined4 FUN_005068b0(void)

{
  int iVar1;
  int *piVar2;
  int in_EDX;
  int unaff_ESI;
  
  piVar2 = *(int **)(unaff_ESI + 0x4d8);
  while (piVar2 != (int *)0x0) {
    iVar1 = *piVar2;
    piVar2 = (int *)piVar2[2];
    if (*(int *)(iVar1 + 8) == in_EDX) goto LAB_005068e6;
  }
  piVar2 = *(int **)(unaff_ESI + 0x4e8);
  do {
    if (piVar2 == (int *)0x0) {
      return 0;
    }
    iVar1 = *piVar2;
    piVar2 = (int *)piVar2[2];
  } while (iVar1 != in_EDX);
LAB_005068e6:
  return CONCAT31((int3)((uint)piVar2 >> 8),1);
}

