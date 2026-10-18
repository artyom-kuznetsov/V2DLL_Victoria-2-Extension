// FUN_004249e0 @ 004249e0 body=[[004249e0, 00424a40]]


int FUN_004249e0(void)

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
  return iVar2;
}

