// FUN_0059b610 @ 0059b610

int FUN_0059b610(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int in_EAX;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  
  iVar2 = (int)param_2;
  if (((-1 < (int)param_2) && ((int)param_2 < 0x1f)) &&
     (iVar6 = *(int *)(param_1 + 0x6c + (int)param_2 * 4), iVar6 != 0)) {
    FUN_00401000(0x42c90000);
    iVar3 = FUN_00b31c00();
    if ((iVar3 <= *(int *)(iVar6 + 0x3c)) && (999 < *(int *)(iVar6 + 0x40))) {
      return iVar6;
    }
  }
  iVar6 = (int)param_2 - in_EAX;
  iVar3 = in_EAX + (int)param_2;
  if (iVar6 <= iVar3) {
    param_2 = (int *)(param_1 + 0x6c + iVar6 * 4);
    iVar7 = iVar6;
    do {
      if (((-1 < iVar7) && (iVar7 < 0x1f)) && (iVar1 = *param_2, iVar1 != 0)) {
        FUN_00401000(0x42c90000);
        iVar4 = FUN_00b31c00();
        if ((iVar4 <= *(int *)(iVar1 + 0x3c)) && (999 < *(int *)(iVar1 + 0x40))) {
          return iVar1;
        }
      }
      param_2 = param_2 + 1;
      iVar7 = iVar7 + 1;
    } while (iVar7 <= iVar3);
  }
  if (((-1 < iVar2) && (iVar2 < 0x1f)) && (iVar2 = *(int *)(param_1 + 0xec + iVar2 * 4), iVar2 != 0)
     ) {
    FUN_00401000(0x42c90000);
    iVar7 = FUN_00b31c00();
    if ((iVar7 <= *(int *)(iVar2 + 0x3c)) && (999 < *(int *)(iVar2 + 0x40))) {
      return iVar2;
    }
  }
  if (iVar6 <= iVar3) {
    piVar5 = (int *)(param_1 + 0xec + iVar6 * 4);
    do {
      if (((-1 < iVar6) && (iVar6 < 0x1f)) && (iVar2 = *piVar5, iVar2 != 0)) {
        FUN_00401000(0x42c90000);
        iVar7 = FUN_00b31c00();
        if ((iVar7 <= *(int *)(iVar2 + 0x3c)) && (999 < *(int *)(iVar2 + 0x40))) {
          return iVar2;
        }
      }
      iVar6 = iVar6 + 1;
      piVar5 = piVar5 + 1;
    } while (iVar6 <= iVar3);
  }
  return 0;
}


