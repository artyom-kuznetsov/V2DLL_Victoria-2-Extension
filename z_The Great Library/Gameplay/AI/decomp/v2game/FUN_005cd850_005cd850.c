// FUN_005cd850 @ 005cd850 body=[[005cd850, 005cd8f9]]


void FUN_005cd850(void)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  int *unaff_EDI;
  
  piVar5 = (int *)unaff_EDI[0xe];
  bVar2 = false;
  if (piVar5 != (int *)0x0) {
    FUN_00401000(0x42c90000);
    iVar4 = FUN_00b31c00();
    do {
      iVar1 = *piVar5;
      piVar5 = (int *)piVar5[2];
      cVar3 = (**(code **)(*unaff_EDI + 0x3c))();
      if ((*(int *)(iVar1 + 0x3c) < iVar4) && (cVar3 != '\0')) {
        if (unaff_EDI[0x1d] != 0) {
          (**(code **)(**(int **)(unaff_EDI[0x1d] + 0x10) + 0x34))(iVar1);
          (**(code **)(**(int **)(unaff_EDI[0x1d] + 0x14) + 0x34))(iVar1);
        }
        FUN_0068a900(iVar1);
        bVar2 = true;
      }
    } while (piVar5 != (int *)0x0);
    if (bVar2) {
      FUN_005c68c0(unaff_EDI);
    }
  }
  return;
}

