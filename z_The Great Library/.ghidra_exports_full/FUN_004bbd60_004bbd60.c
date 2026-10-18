// FUN_004bbd60 @ 004bbd60 body=[[004bbd60, 004bbf5f]]


bool FUN_004bbd60(int param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int *in_EAX;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  if ((*(char *)(*(int *)(param_1 + 0x5c) + 0x2a) != '\0') &&
     ((((iVar1 = *(int *)(param_1 + 0x164), iVar1 == 0 || (**(int **)(param_1 + 0x15c) == 0)) ||
       (cVar3 = FUN_004cb190(), cVar3 == '\0')) || (cVar3 = FUN_004cb420(), cVar3 != '\0')))) {
    iVar5 = DAT_012587e4;
    if (((iVar1 != 0) && (**(int **)(param_1 + 0x15c) != 0)) &&
       (iVar1 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + in_EAX[1] * 4) + 0xbcc),
       iVar2 = *(int *)(iVar1 + 0x54), iVar1 = *(int *)(iVar1 + 0x294), iVar4 = FUN_004cb480(),
       iVar4 * 1000 < iVar2 + iVar1)) {
      return false;
    }
    if (*(int *)(param_1 + 300) == 0) {
      iVar1 = *(int *)(iVar5 + 4);
      iVar5 = FUN_005379e0();
      if ((iVar5 == 1) || (iVar5 = FUN_005379e0(), iVar5 == 0)) {
        if ((*(int *)(param_1 + 0x164) != 0) && (iVar5 = **(int **)(param_1 + 0x15c), iVar5 != 0)) {
          iVar2 = *(int *)(*(int *)(DAT_012588e8 + 0xcf8) + 8);
          if ((iVar2 != 0) && (*(int *)(iVar2 + 0xc) == iVar5)) {
            return false;
          }
          iVar2 = *in_EAX;
          cVar3 = FUN_005395a0(*(undefined4 *)(iVar1 + in_EAX[1] * 4));
          if (cVar3 != '\0') {
            return false;
          }
          if (*(int *)(iVar5 + 0x80) == 0) {
            cVar3 = FUN_004cb420();
            if (cVar3 != '\0') {
              return false;
            }
          }
          else {
            if ((*(int *)(iVar5 + 0x80) == 2) && (cVar3 = FUN_004cb420(), cVar3 == '\0')) {
              return false;
            }
            FUN_004cb3c0();
            if (*(int *)(DAT_012588e8 + 0xb0c) <
                iVar2 + (*(int *)(*(int *)(DAT_012586dc + 0x40) + 0x108) / 1000) * 0x18) {
              return false;
            }
          }
          piVar6 = *(int **)(iVar5 + 8);
          if (piVar6 != (int *)0x0) {
            iVar1 = *(int *)(DAT_012588e8 + 0xacc);
            do {
              iVar5 = *piVar6;
              piVar6 = (int *)piVar6[2];
              if ((*(int *)(*(int *)(iVar1 + iVar5 * 4) + 300) == 0) &&
                 (cVar3 = FUN_004b7f50(in_EAX), cVar3 != '\0')) {
                return true;
              }
            } while (piVar6 != (int *)0x0);
          }
        }
        cVar3 = FUN_004b7fd0(in_EAX);
        if (cVar3 != '\0') {
          return true;
        }
        if (*(int *)(param_1 + 0x158) != 0) {
          cVar3 = FUN_004bc020(param_1);
          return cVar3 != '\0';
        }
      }
    }
  }
  return false;
}

