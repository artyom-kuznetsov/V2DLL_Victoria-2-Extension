// FUN_00424670 @ 00424670 body=[[00424670, 0042479d]]


void FUN_00424670(int *param_1)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int local_18;
  int local_10;
  
  iVar1 = 0;
  iVar4 = 0;
  iVar5 = 0;
  local_18 = 0;
  if (1 < in_EAX) {
    do {
      iVar4 = iVar4 + (&DAT_00f1027c)[iVar1];
      iVar5 = iVar5 + (&DAT_00f10280)[iVar1];
      iVar1 = iVar1 + 2;
    } while (iVar1 < in_EAX + -1);
  }
  if (iVar1 < in_EAX) {
    local_18 = (&DAT_00f1027c)[iVar1];
  }
  iVar2 = (*param_1 + -43800000) / 0x18;
  uVar6 = (uint)((double)iVar2 / 365.0);
  iVar2 = iVar2 - (int)((float)(int)uVar6 * 365.0);
  iVar1 = 0;
  for (iVar3 = iVar2 - DAT_00f1027c; -1 < iVar3; iVar3 = iVar3 - (&DAT_00f1027c)[iVar1]) {
    iVar1 = iVar1 + 1;
  }
  iVar7 = 0;
  iVar8 = 0;
  iVar3 = 0;
  local_10 = 0;
  if (1 < iVar1) {
    do {
      iVar7 = iVar7 + (&DAT_00f1027c)[iVar3];
      iVar8 = iVar8 + (&DAT_00f10280)[iVar3];
      iVar3 = iVar3 + 2;
    } while (iVar3 < iVar1 + -1);
  }
  if (iVar3 < iVar1) {
    local_10 = (&DAT_00f1027c)[iVar3];
  }
  iVar1 = 1;
  if ((int)uVar6 < 0) {
    iVar1 = -1;
  }
  *param_1 = (*param_1 + -43800000) % 0x18 +
             (iVar1 * ((((((uVar6 ^ (int)uVar6 >> 0x1f) - ((int)uVar6 >> 0x1f)) * 0x16d - iVar7) -
                        iVar8) - local_10) + iVar2 + local_18 + iVar4 + iVar5) * 3 + 0x538ab8) * 8;
  return;
}

