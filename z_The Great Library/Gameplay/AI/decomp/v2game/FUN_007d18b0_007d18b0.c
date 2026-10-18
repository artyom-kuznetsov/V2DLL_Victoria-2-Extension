// FUN_007d18b0 @ 007d18b0 body=[[007d18b0, 007d19aa]]


void FUN_007d18b0(int param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  
  if (param_2 <= param_3) {
    *(int *)(param_1 + param_2 * 4) = *param_4;
    return;
  }
  while( true ) {
    iVar3 = (param_2 + -1) / 2;
    iVar1 = *(int *)(param_1 + iVar3 * 4);
    iVar2 = *(int *)(*(int *)(iVar1 + 0x68) + 0x28);
    iVar5 = *(int *)(*(int *)(*param_4 + 0x68) + 0x28);
    bVar7 = SBORROW4(iVar2,iVar5);
    bVar6 = iVar2 - iVar5 < 0;
    if (iVar2 == iVar5) {
      if (*(char *)(*(int *)(iVar1 + 0x68) + 0x39c) == '\0') {
        bVar7 = SBORROW4(iVar2,iVar5);
        bVar6 = iVar2 - iVar5 < 0;
      }
      else {
        iVar2 = *(int *)(*(int *)(iVar1 + 0x1d4) + 0xb0);
        iVar5 = 0;
        if (((iVar2 != 0) && (DAT_01258734 != 0)) && (iVar2 != DAT_01258734 + 0x10)) {
          iVar5 = *(int *)(*(int *)(iVar2 + 0x80) + 8) + 1;
        }
        iVar2 = *(int *)(*(int *)(*param_4 + 0x1d4) + 0xb0);
        iVar4 = 0;
        if (((iVar2 != 0) && (DAT_01258734 != 0)) && (iVar2 != DAT_01258734 + 0x10)) {
          iVar4 = *(int *)(*(int *)(iVar2 + 0x80) + 8) + 1;
        }
        bVar7 = SBORROW4(iVar5,iVar4);
        bVar6 = iVar5 - iVar4 < 0;
      }
    }
    if (bVar7 == bVar6) break;
    *(int *)(param_1 + param_2 * 4) = iVar1;
    param_2 = iVar3;
    if (iVar3 <= param_3) {
      *(int *)(param_1 + iVar3 * 4) = *param_4;
      return;
    }
  }
  *(int *)(param_1 + param_2 * 4) = *param_4;
  return;
}

