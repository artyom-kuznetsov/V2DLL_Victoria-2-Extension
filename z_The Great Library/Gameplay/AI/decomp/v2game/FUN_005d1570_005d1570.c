// FUN_005d1570 @ 005d1570  (requested 005D1570, first bytes: 55 8B EC 83 EC 08 53 8B)


undefined4 * FUN_005d1570(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  int iVar9;
  
  piVar2 = param_1;
  cVar3 = (**(code **)(*param_1 + 0x38))();
  if ((((cVar3 != '\0') && (0 < param_1[0x3b])) &&
      (*(char *)(*(int *)(*(int *)(*(int *)(DAT_0125870c + 0x2238) + *(int *)param_1[0x39] * 4) +
                         0x5c) + 0x2a) != *(char *)(*(int *)(param_1[0x37] + 0x5c) + 0x2a))) &&
     (cVar3 = (**(code **)(*param_1 + 0x38))(), cVar3 != '\0')) {
    *param_2 = 1000;
    return param_2;
  }
  iVar5 = *(int *)(param_1[0x29] + 0xb8);
  if (0 < param_1[0x3b]) {
    iVar6 = *(int *)(*(int *)(DAT_0125870c + 0x2238) + *(int *)param_1[0x39] * 4);
    iVar4 = __alldiv((longlong)
                     (*(int *)(*(int *)(param_1[0x29] + 0x60) + 0x10 +
                              *(int *)(*(int *)(*(int *)(iVar6 + 0x5c) + 0x14) + 0x30) * 0x18) +
                     1000) * (longlong)iVar5,1000,0);
    iVar5 = *(int *)(param_1[0x37] + 0x5c);
    iVar1 = (*(int *)(iVar5 + 0xcc) - *(int *)(iVar5 + 200)) / 0x24;
    iVar9 = 0;
    if (0 < iVar1) {
      piVar8 = (int *)(*(int *)(iVar5 + 200) + 4);
      do {
        if (*(int *)(iVar6 + 0x58) == *piVar8) {
          if ((-1 < iVar9) &&
             ((iVar5 = *(int *)(*(int *)(iVar5 + 200) + iVar9 * 0x24), iVar5 == 1 || (iVar5 == 2))))
          {
            iVar4 = __alldiv((longlong)(*(int *)(param_1[0x29] + 0x98) + 1000) * (longlong)iVar4,
                             1000,0);
          }
          break;
        }
        iVar9 = iVar9 + 1;
        piVar8 = piVar8 + 9;
      } while (iVar9 < iVar1);
    }
    param_1 = (int *)iVar4;
    iVar5 = __alldiv((longlong)(*(int *)(iVar6 + 0x2b8) + 1000) * (longlong)(int)param_1,1000,0);
  }
  cVar3 = (**(code **)(*piVar2 + 0x38))();
  if (cVar3 == '\0') {
    iVar6 = *(int *)(*(int *)(DAT_012586dc + 0x20) + 0x20);
  }
  else {
    iVar6 = *(int *)(*(int *)(DAT_012586dc + 0x20) + 0x1c);
  }
  iVar5 = __alldiv((longlong)iVar6 * (longlong)iVar5,1000,0);
  uVar7 = __alldiv((longlong)(*(int *)(*(int *)(piVar2[0x36] + 0x48) + 0x30) + 1000) *
                   (longlong)iVar5,1000,0);
  *param_2 = uVar7;
  return param_2;
}

