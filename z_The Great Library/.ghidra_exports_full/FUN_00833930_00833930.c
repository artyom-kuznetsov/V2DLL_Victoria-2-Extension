// FUN_00833930 @ 00833930 body=[[00833930, 008339a8] [008339b0, 008339cc] [008339d0, 00833a12]]


void FUN_00833930(void)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  *(undefined1 *)(in_ECX + 0x80) = 0;
  FUN_0083de00();
  iVar1 = (*(int *)(DAT_012588e8 + 0xb0c) + -43800000) / 0x18;
  iVar1 = iVar1 - (int)((float)(int)((double)iVar1 / 365.0) * 365.0);
  iVar4 = 0;
  for (iVar2 = iVar1 - DAT_00f1027c; -1 < iVar2; iVar2 = iVar2 - (&DAT_00f1027c)[iVar4]) {
    iVar4 = iVar4 + 1;
  }
  iVar3 = 0;
  iVar5 = 0;
  iVar2 = 0;
  if (1 < iVar4) {
    do {
      iVar3 = iVar3 + (&DAT_00f1027c)[iVar2];
      iVar5 = iVar5 + (&DAT_00f10280)[iVar2];
      iVar2 = iVar2 + 2;
    } while (iVar2 < iVar4 + -1);
  }
  if (iVar2 < iVar4) {
    iVar4 = (&DAT_00f1027c)[iVar2];
  }
  else {
    iVar4 = 0;
  }
  iVar4 = ((iVar1 - iVar3) - iVar5) - iVar4;
  if (*(int *)(in_ECX + 0x70) != iVar4) {
    *(int *)(in_ECX + 0x70) = iVar4;
    FUN_00833a40(in_ECX);
  }
  return;
}

