// FUN_00a1b310 @ 00a1b310 body=[[00a1b310, 00a1b339] [00a1b340, 00a1b36c] [00a1b370, 00a1b442]]


uint FUN_00a1b310(uint param_1,byte *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  
  uVar2 = param_1 & 0xffff;
  param_1 = param_1 >> 0x10;
  if (param_2 == (byte *)0x0) {
    return 1;
  }
  while (param_3 != 0) {
    uVar1 = param_3;
    if (0x15af < param_3) {
      uVar1 = 0x15b0;
    }
    param_3 = param_3 - uVar1;
    if (0xf < (int)uVar1) {
      uVar18 = uVar1 >> 4;
      uVar1 = uVar1 + uVar18 * -0x10;
      do {
        iVar3 = uVar2 + *param_2;
        iVar4 = iVar3 + (uint)param_2[1];
        iVar5 = iVar4 + (uint)param_2[2];
        iVar6 = iVar5 + (uint)param_2[3];
        iVar7 = iVar6 + (uint)param_2[4];
        iVar8 = iVar7 + (uint)param_2[5];
        iVar9 = iVar8 + (uint)param_2[6];
        iVar10 = iVar9 + (uint)param_2[7];
        iVar11 = iVar10 + (uint)param_2[8];
        iVar12 = iVar11 + (uint)param_2[9];
        iVar13 = iVar12 + (uint)param_2[10];
        iVar14 = iVar13 + (uint)param_2[0xb];
        iVar15 = iVar14 + (uint)param_2[0xc];
        iVar16 = iVar15 + (uint)param_2[0xd];
        iVar17 = iVar16 + (uint)param_2[0xe];
        uVar2 = iVar17 + (uint)param_2[0xf];
        param_1 = param_1 + iVar3 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 + iVar11
                  + iVar12 + iVar13 + iVar14 + iVar15 + iVar16 + iVar17 + uVar2;
        param_2 = param_2 + 0x10;
        uVar18 = uVar18 - 1;
      } while (uVar18 != 0);
    }
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      uVar2 = uVar2 + *param_2;
      param_2 = param_2 + 1;
      param_1 = param_1 + uVar2;
    }
    uVar2 = uVar2 % 0xfff1;
    param_1 = param_1 % 0xfff1;
  }
  return param_1 << 0x10 | uVar2;
}

