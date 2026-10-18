// FUN_00424930 @ 00424930 body=[[00424930, 0042498c] [00424990, 004249df]]


int FUN_00424930(void)

{
  int *in_EAX;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = (*in_EAX + -43800000) / 0x18;
  iVar1 = iVar1 - (int)((float)(int)((double)iVar1 / 365.0) * 365.0);
  iVar6 = 0;
  for (iVar2 = iVar1 - DAT_00f1027c; -1 < iVar2; iVar2 = iVar2 - (&DAT_00f1027c)[iVar6]) {
    iVar6 = iVar6 + 1;
  }
  iVar3 = 0;
  iVar5 = 0;
  iVar2 = 0;
  if (1 < iVar6) {
    iVar2 = 0;
    do {
      iVar3 = iVar3 + (&DAT_00f1027c)[iVar2];
      iVar5 = iVar5 + (&DAT_00f10280)[iVar2];
      iVar2 = iVar2 + 2;
    } while (iVar2 < iVar6 + -1);
  }
  iVar4 = 0;
  if (iVar2 < iVar6) {
    iVar4 = (&DAT_00f1027c)[iVar2];
  }
  return ((iVar1 - iVar3) - iVar5) - iVar4;
}

