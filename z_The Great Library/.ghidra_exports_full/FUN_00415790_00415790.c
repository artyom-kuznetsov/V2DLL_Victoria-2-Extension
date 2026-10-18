// FUN_00415790 @ 00415790 body=[[00415790, 004158c1]]


uint FUN_00415790(void)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int unaff_ESI;
  int unaff_EDI;
  
  if ((DAT_00f092fb != '\0') && (*(int *)(*(int *)(unaff_ESI + 0x5c) + 0x360) < 1)) {
    return 0;
  }
  uVar5 = 0;
  if ((*(int *)(*(int *)(unaff_EDI + 0x10) + 8) != 0) && (cVar2 = FUN_004b6050(), cVar2 != '\0')) {
    uVar5 = 4;
  }
  if ((*(int *)(*(int *)(unaff_EDI + 0x10) + 0xc) != 0) && (cVar2 = FUN_004b6010(), cVar2 != '\0'))
  {
    uVar5 = uVar5 | 8;
  }
  if (*(int *)(*(int *)(unaff_EDI + 0x10) + 4) == 0) goto LAB_00415848;
  cVar2 = FUN_004b5fe0();
  if (cVar2 == '\0') {
    cVar2 = (**(code **)(**(int **)(unaff_ESI + 0x188) + 0x24))();
    if (cVar2 == '\0') goto LAB_00415848;
    iVar3 = *(int *)(unaff_ESI + 0x188);
    if ((*(int *)(iVar3 + 0x4c) - *(int *)(iVar3 + 0x48) & 0xfffffffcU) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = **(int **)(iVar3 + 0x48);
    }
    if (iVar4 != *(int *)(unaff_ESI + 0x58)) goto LAB_00415848;
    iVar3 = *(int *)(iVar3 + 0x60);
    do {
      if (iVar3 == 0) goto LAB_00415848;
      piVar1 = (int *)(iVar3 + 0x17c);
      iVar3 = *(int *)(iVar3 + 0x224);
    } while (*piVar1 == 0);
  }
  uVar5 = uVar5 | 2;
LAB_00415848:
  if ((**(int **)(unaff_EDI + 0x10) != 0) &&
     (cVar2 = (**(code **)(**(int **)(unaff_ESI + 0x188) + 0x24))(), cVar2 != '\0')) {
    iVar3 = *(int *)(unaff_ESI + 0x188);
    if ((*(int *)(iVar3 + 0x4c) - *(int *)(iVar3 + 0x48) & 0xfffffffcU) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = **(int **)(iVar3 + 0x48);
    }
    if ((iVar4 == *(int *)(unaff_ESI + 0x58)) && (iVar3 = *(int *)(iVar3 + 0x60), iVar3 != 0)) {
      while( true ) {
        piVar1 = (int *)(iVar3 + 0x224);
        if ((*(char *)(*(int *)(iVar3 + 0x18) + 0xe0) == '\0') &&
           ((*(char *)(*(int *)(iVar3 + 0x18) + 0xe1) != '\0' && (*(int *)(iVar3 + 0x20) != 0))))
        break;
        iVar3 = *piVar1;
        if (*piVar1 == 0) {
          return uVar5;
        }
      }
      uVar5 = uVar5 | 1;
    }
  }
  return uVar5;
}

