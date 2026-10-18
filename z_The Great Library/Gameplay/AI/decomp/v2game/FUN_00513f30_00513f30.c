// FUN_00513f30 @ 00513f30 body=[[00513f30, 0051402c]]


undefined4 FUN_00513f30(int *param_1)

{
  int iVar1;
  char cVar2;
  char cVar3;
  int *unaff_EDI;
  
  if ((unaff_EDI[0x1d] == 0) && (*(char *)(param_1[0xe] + 0x42) != '\0')) {
    cVar2 = (**(code **)(*param_1 + 0x24))();
    if ((cVar2 != '\0') && (cVar2 = (**(code **)(*unaff_EDI + 0x38))(), cVar2 == '\0')) {
      return 0;
    }
    cVar2 = (**(code **)(*param_1 + 0x2c))();
    if ((cVar2 != '\0') && (cVar2 = (**(code **)(*unaff_EDI + 0x40))(), cVar2 == '\0')) {
      return 0;
    }
    cVar2 = (**(code **)(*param_1 + 0x28))();
    if ((cVar2 != '\0') && (cVar2 = (**(code **)(*unaff_EDI + 0x3c))(), cVar2 == '\0')) {
      return 0;
    }
    cVar2 = FUN_005d9080();
    if ((cVar2 == '\0') || (*(char *)(param_1[0xe] + 0x40) != '\0')) {
      iVar1 = param_1[0x1d];
      if (iVar1 != 0) {
        cVar2 = FUN_005d9080();
        cVar3 = FUN_005d9080();
        if ((((cVar2 != cVar3) || (*(int *)(iVar1 + 0x194) != 0)) || (unaff_EDI[0x65] != 0)) ||
           ((*(int *)(iVar1 + 0x74) != 0 || (*(int *)(iVar1 + 0xdc) != unaff_EDI[0x37])))) {
          return 0;
        }
        cVar2 = (**(code **)(*unaff_EDI + 0x38))();
        if (((cVar2 != '\0') &&
            (cVar2 = (**(code **)(**(int **)(param_1[0x1d] + 0xd8) + 0x20))(), cVar2 != '\0')) &&
           (*(int *)(param_1[0x1d] + 0x40) < 2)) {
          return 0;
        }
      }
      return 1;
    }
  }
  return 0;
}

