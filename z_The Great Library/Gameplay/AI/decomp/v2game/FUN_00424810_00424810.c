// FUN_00424810 @ 00424810 body=[[00424810, 00424924]]


void FUN_00424810(int param_1)

{
  int *in_EAX;
  int iVar1;
  int iVar2;
  
  iVar1 = (*in_EAX + -43800000) / 0x18;
  iVar2 = 0;
  for (iVar1 = (iVar1 - (int)((float)(int)((double)iVar1 / 365.0) * 365.0)) - DAT_00f1027c;
      -1 < iVar1; iVar1 = iVar1 - (&DAT_00f1027c)[iVar2]) {
    iVar2 = iVar2 + 1;
  }
  iVar2 = iVar2 + param_1;
  if (iVar2 / 0xc + (iVar2 >> 0x1f) != iVar2 >> 0x1f) {
    if (iVar2 < 0) {
      FUN_004247a0();
      FUN_00424670(in_EAX);
      return;
    }
    FUN_004247a0();
    FUN_00424670(in_EAX);
    return;
  }
  if (iVar2 < 0) {
    *in_EAX = *in_EAX + -0x2238;
    FUN_00424670(in_EAX);
    return;
  }
  FUN_00424670(in_EAX);
  return;
}

