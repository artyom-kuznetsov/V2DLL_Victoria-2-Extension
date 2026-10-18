// FUN_00855980 @ 00855980 body=[[00855980, 00855a8b]]


void FUN_00855980(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = DAT_012588e8;
  iVar1 = FUN_009b7610();
  *(int *)(in_ECX + 0x30) = iVar1 % 0x11 + 10;
  iVar2 = (*(int *)(iVar2 + 0xb0c) + -43800000) / 0x18;
  iVar2 = iVar2 - (int)((float)(int)((double)iVar2 / 365.0) * 365.0);
  iVar1 = 0;
  for (iVar3 = iVar2 - DAT_00f1027c; -1 < iVar3; iVar3 = iVar3 - (&DAT_00f1027c)[iVar1]) {
    iVar1 = iVar1 + 1;
  }
  iVar4 = 0;
  iVar5 = 0;
  iVar3 = 0;
  if (1 < iVar1) {
    do {
      iVar4 = iVar4 + (&DAT_00f1027c)[iVar3];
      iVar5 = iVar5 + (&DAT_00f10280)[iVar3];
      iVar3 = iVar3 + 2;
    } while (iVar3 < iVar1 + -1);
  }
  if (iVar3 < iVar1) {
    iVar1 = (&DAT_00f1027c)[iVar3];
  }
  else {
    iVar1 = 0;
  }
  iVar1 = ((iVar2 - iVar4) - iVar5) - iVar1;
  if (*(int *)(in_ECX + 100) != iVar1) {
    *(int *)(in_ECX + 100) = iVar1;
    FUN_00855a90();
    FUN_00856470(in_ECX);
  }
  return;
}

