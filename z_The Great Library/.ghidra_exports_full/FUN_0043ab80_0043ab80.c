// FUN_0043ab80 @ 0043ab80 body=[[0043ab80, 0043aba5] [0043abb0, 0043ac35]]


void FUN_0043ab80(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  iVar5 = 0;
  iVar3 = 0;
  iVar1 = FUN_004249e0();
  if (1 < iVar1) {
    do {
      iVar5 = iVar5 + (&DAT_00f1027c)[iVar4];
      iVar3 = iVar3 + (&DAT_00f10280)[iVar4];
      iVar4 = iVar4 + 2;
    } while (iVar4 < iVar1 + -1);
  }
  if (iVar4 < iVar1) {
    iVar1 = (&DAT_00f1027c)[iVar4];
  }
  else {
    iVar1 = 0;
  }
  iVar4 = 1;
  uVar2 = (uint)((double)((*param_1 + -43800000) / 0x18) / 365.0);
  if ((int)uVar2 < 0) {
    iVar4 = -1;
  }
  *param_1 = ((*param_1 + -43800000) % 0x18 +
             (((uVar2 ^ (int)uVar2 >> 0x1f) - ((int)uVar2 >> 0x1f)) * 0x16d + iVar1 + iVar5 + iVar3
             + param_2) * 0x18) * iVar4 + 43800000;
  return;
}

