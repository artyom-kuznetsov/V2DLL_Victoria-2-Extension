// FUN_0071d070 @ 0071d070 body=[[0071d070, 0071d0ba]]


void FUN_0071d070(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = DAT_012587f0;
  iVar3 = *(int *)(DAT_012587f0 + 0x3c) - *(int *)(DAT_012587f0 + 0x38) >> 2;
  iVar4 = 0;
  if (0 < iVar3) {
    do {
      iVar1 = *(int *)(*(int *)(iVar2 + 0x38) + iVar4 * 4);
      if ((iVar1 != 0) && (iVar1 != DAT_012587f0 + 0xa8)) {
        FUN_00721cf0(param_1,iVar1);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar3);
  }
  return;
}

