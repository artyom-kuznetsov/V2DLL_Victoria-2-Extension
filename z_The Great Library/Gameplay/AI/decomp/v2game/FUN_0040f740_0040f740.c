// FUN_0040f740 @ 0040f740 body=[[0040f740, 0040f7c9]]


void FUN_0040f740(void)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  int unaff_EDI;
  
  puVar3 = (undefined4 *)(**(code **)(**(int **)(unaff_EDI + 0x88) + 0x34))();
  if (0 < (int)puVar3[2]) {
    *(undefined4 *)(unaff_EDI + 0x390) = *(undefined4 *)(*(int *)*puVar3 + 0x28);
    return;
  }
  piVar4 = (int *)(**(code **)(**(int **)(unaff_EDI + 0x88) + 0x2c))();
  iVar1 = piVar4[2];
  *(undefined4 *)(unaff_EDI + 0x390) = 0;
  if ((0 < iVar1) && (piVar4 = (int *)*piVar4, piVar4 != (int *)0x0)) {
    while( true ) {
      piVar2 = (int *)*piVar4;
      piVar4 = (int *)piVar4[2];
      if ((piVar2[10] != 0) && (*(int *)(piVar2[10] + 0x218) == *(int *)(unaff_EDI + 0x3a4))) break;
      if (piVar4 == (int *)0x0) {
        return;
      }
    }
    (**(code **)(*piVar2 + 0x10))();
    iVar1 = piVar2[0xc];
    *(undefined4 *)(iVar1 + 0x6c) = 1;
    *(undefined4 *)(iVar1 + 0x10c) = 1;
    *(int *)(unaff_EDI + 0x390) = piVar2[10];
  }
  return;
}

