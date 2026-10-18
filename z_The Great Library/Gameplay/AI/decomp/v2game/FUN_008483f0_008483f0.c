// FUN_008483f0 @ 008483f0 body=[[008483f0, 00848536]]


void FUN_008483f0(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if ((param_3 < *(int *)(DAT_012588e8 + 0xaf0) - *(int *)(DAT_012588e8 + 0xaec) >> 2) &&
     (*(int *)(*(int *)(DAT_012588e8 + 0xaec) + param_3 * 4) == 0)) {
    return;
  }
  iVar1 = (*(int *)(DAT_012588e8 + 0xb0c) + -43800000) / 0x18;
  iVar2 = 0;
  for (iVar1 = (iVar1 - (int)((float)(int)((double)iVar1 / 365.0) * 365.0)) - DAT_00f1027c;
      -1 < iVar1; iVar1 = iVar1 - (&DAT_00f1027c)[iVar2]) {
    iVar2 = iVar2 + 1;
  }
  iVar1 = (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                              *(int *)(param_1 + 0x38) * 4) + 0xbe8) + param_3 * 4)
                   + 100) + -43800000) / 0x18;
  iVar2 = 0;
  for (iVar1 = (iVar1 - (int)((float)(int)((float)iVar1 / 365.0) * 365.0)) - DAT_00f1027c;
      -1 < iVar1; iVar1 = iVar1 - (&DAT_00f1027c)[iVar2]) {
    iVar2 = iVar2 + 1;
  }
  return;
}

