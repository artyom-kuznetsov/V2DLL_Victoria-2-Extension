// FUN_00b302d0 @ 00b302d0 body=[[00b302d0, 00b30385] [00b30390, 00b3039c] [00b303a0, 00b3053a]]


uint FUN_00b302d0(uint param_1,byte *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
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
  int iVar18;
  uint uVar19;
  
  uVar19 = param_1 >> 0x10;
  uVar3 = param_1 & 0xffff;
  if (param_3 == 1) {
    uVar3 = uVar3 + *param_2;
    if (0xfff0 < uVar3) {
      uVar3 = uVar3 - 0xfff1;
    }
    uVar19 = uVar19 + uVar3;
    if (0xfff0 < uVar19) {
      uVar19 = uVar19 - 0xfff1;
    }
    return uVar19 << 0x10 | uVar3;
  }
  if (param_2 != (byte *)0x0) {
    if (0xf < param_3) {
      if (0x15af < param_3) {
        param_1 = param_3 / 0x15b0;
        do {
          param_3 = param_3 - 0x15b0;
          iVar1 = 0x15b;
          do {
            iVar4 = uVar3 + *param_2;
            iVar5 = iVar4 + (uint)param_2[1];
            iVar6 = iVar5 + (uint)param_2[2];
            iVar7 = iVar6 + (uint)param_2[3];
            iVar8 = iVar7 + (uint)param_2[4];
            iVar9 = iVar8 + (uint)param_2[5];
            iVar10 = iVar9 + (uint)param_2[6];
            iVar11 = iVar10 + (uint)param_2[7];
            iVar12 = iVar11 + (uint)param_2[8];
            iVar13 = iVar12 + (uint)param_2[9];
            iVar14 = iVar13 + (uint)param_2[10];
            iVar15 = iVar14 + (uint)param_2[0xb];
            iVar16 = iVar15 + (uint)param_2[0xc];
            iVar17 = iVar16 + (uint)param_2[0xd];
            iVar18 = iVar17 + (uint)param_2[0xe];
            uVar3 = iVar18 + (uint)param_2[0xf];
            uVar19 = uVar19 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 + iVar11 +
                     iVar12 + iVar13 + iVar14 + iVar15 + iVar16 + iVar17 + iVar18 + uVar3;
            param_2 = param_2 + 0x10;
            iVar1 = iVar1 + -1;
          } while (iVar1 != 0);
          uVar3 = uVar3 % 0xfff1;
          uVar19 = uVar19 % 0xfff1;
          param_1 = param_1 - 1;
        } while (param_1 != 0);
      }
      if (param_3 != 0) {
        if (0xf < param_3) {
          uVar2 = param_3 >> 4;
          do {
            iVar1 = uVar3 + *param_2;
            iVar4 = iVar1 + (uint)param_2[1];
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
            uVar3 = iVar17 + (uint)param_2[0xf];
            param_3 = param_3 - 0x10;
            uVar19 = uVar19 + iVar1 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 +
                     iVar11 + iVar12 + iVar13 + iVar14 + iVar15 + iVar16 + iVar17 + uVar3;
            param_2 = param_2 + 0x10;
            uVar2 = uVar2 - 1;
          } while (uVar2 != 0);
        }
        for (; param_3 != 0; param_3 = param_3 - 1) {
          uVar3 = uVar3 + *param_2;
          param_2 = param_2 + 1;
          uVar19 = uVar19 + uVar3;
        }
        uVar3 = uVar3 % 0xfff1;
        uVar19 = uVar19 % 0xfff1;
      }
      return uVar19 << 0x10 | uVar3;
    }
    for (; param_3 != 0; param_3 = param_3 - 1) {
      uVar3 = uVar3 + *param_2;
      param_2 = param_2 + 1;
      uVar19 = uVar19 + uVar3;
    }
    if (0xfff0 < uVar3) {
      uVar3 = uVar3 - 0xfff1;
    }
    return ((uVar19 / 0xfff1) * 0xf + uVar19) * 0x10000 | uVar3;
  }
  return 1;
}

