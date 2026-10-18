// FUN_005d7e20 @ 005d7e20 body=[[005d7e20, 005d7eba]]


void FUN_005d7e20(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *unaff_EDI;
  
LAB_005d7e21:
  do {
    iVar1 = (**(code **)(*unaff_EDI + 0x30))();
    piVar3 = *(int **)(iVar1 + 0x1a4);
    iVar1 = 0;
    while (piVar3 != (int *)0x0) {
      iVar2 = *piVar3;
      piVar3 = (int *)piVar3[2];
      iVar4 = 0;
      for (iVar2 = *(int *)(iVar2 + 0x38); iVar2 != 0; iVar2 = *(int *)(iVar2 + 8)) {
        iVar4 = iVar4 + 1;
      }
      iVar1 = iVar1 + iVar4;
    }
    iVar2 = (**(code **)(*unaff_EDI + 0x30))();
    if (iVar1 <= *(int *)(*(int *)(iVar2 + 0xa4) + 600) / 1000) {
      return;
    }
    piVar3 = (int *)unaff_EDI[0x69];
    do {
      if (piVar3 == (int *)0x0) goto LAB_005d7e21;
      iVar1 = *piVar3;
      piVar3 = (int *)piVar3[2];
    } while (*(int *)(iVar1 + 0x40) == 0);
    FUN_0068a900(**(undefined4 **)(iVar1 + 0x38));
    if (*(int *)(iVar1 + 0x40) == 0) {
      FUN_0068a850(iVar1);
    }
  } while( true );
}

