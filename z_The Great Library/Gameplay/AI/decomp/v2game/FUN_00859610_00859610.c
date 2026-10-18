// FUN_00859610 @ 00859610  (requested 00859610, first bytes: 55 8B EC 83 EC 0C 53 56)


void FUN_00859610(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar2 = DAT_012588e8;
  *(undefined4 *)(in_ECX + 0x30) = 1;
  iVar1 = DAT_012587e4;
  iVar2 = (*(int *)(iVar2 + 0xb0c) + -43800000) / 0x18;
  iVar2 = iVar2 - (int)((float)(int)((double)iVar2 / 365.0) * 365.0);
  iVar4 = 0;
  for (iVar3 = iVar2 - DAT_00f1027c; -1 < iVar3; iVar3 = iVar3 - (&DAT_00f1027c)[iVar4]) {
    iVar4 = iVar4 + 1;
  }
  iVar5 = 0;
  iVar6 = 0;
  iVar3 = 0;
  if (1 < iVar4) {
    do {
      iVar5 = iVar5 + (&DAT_00f1027c)[iVar3];
      iVar6 = iVar6 + (&DAT_00f10280)[iVar3];
      iVar3 = iVar3 + 2;
    } while (iVar3 < iVar4 + -1);
  }
  if (iVar3 < iVar4) {
    iVar4 = (&DAT_00f1027c)[iVar3];
  }
  else {
    iVar4 = 0;
  }
  iVar4 = ((iVar2 - iVar5) - iVar6) - iVar4;
  if ((*(int *)(in_ECX + 0x68) != iVar4) &&
     (*(int *)(in_ECX + 0x68) = iVar4,
     *(int *)(*(int *)(*(int *)(iVar1 + 4) + *(int *)(in_ECX + 0x38) * 4) + 0x4cc) == 0)) {
    FUN_00859710(in_ECX);
  }
  return;
}

