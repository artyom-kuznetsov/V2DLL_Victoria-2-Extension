// FUN_005d0670 @ 005d0670  (requested 005D0E00, first bytes: 55 8B EC 83 E4 F8 6A FF)


int * FUN_005d0670(int *param_1,int *param_2)

{
  int *piVar1;
  bool bVar2;
  undefined1 uVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined4 uVar10;
  int *piVar11;
  undefined1 **ppuVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uStack_1b0;
  code *pcStack_1ac;
  undefined1 auStack_1a8 [108];
  undefined4 uStack_13c;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 *puStack_114;
  undefined1 *puStack_110;
  int iStack_10c;
  int iStack_104;
  undefined1 *puStack_100;
  int iStack_f8;
  int local_f4;
  undefined1 auStack_f0 [28];
  int local_d4;
  undefined1 *puStack_d0;
  int iStack_cc;
  undefined1 auStack_c8 [28];
  undefined1 auStack_ac [4];
  undefined1 auStack_a8 [4];
  undefined1 auStack_a4 [28];
  undefined1 auStack_88 [56];
  undefined1 auStack_50 [60];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b9f5c8;
  local_14 = ExceptionList;
  uStack_130 = 0x1d;
  ExceptionList = &local_14;
  *param_2 = 0;
  uStack_138 = CONCAT44(0x5d06a3,(undefined4)uStack_138);
  local_d4 = FUN_009b7950();
  if ((param_1[0x1d] == 0) && ((char)param_1[0x59] == '\0')) {
    uStack_130 = CONCAT44(&local_f4,0x5d06cd);
    (**(code **)(*param_1 + 0x78))();
    uStack_130 = 0x41280000005d06e0;
    FUN_00401000();
    uStack_130 = CONCAT44(0x5d06e8,(undefined4)uStack_130);
    iStack_cc = FUN_00b31c00();
    uStack_138 = (longlong)iStack_cc * (longlong)local_f4;
    uStack_130 = 1000;
    uStack_13c = 0x5d06fd;
    iStack_f8 = __alldiv();
    iStack_104 = 0;
    uStack_130 = 0x3f000000005d072f;
    FUN_00401000();
    uStack_130 = CONCAT44(0x5d0737,(undefined4)uStack_130);
    iVar5 = FUN_00b31c00();
    if (iVar5 < iStack_f8) {
      bVar2 = false;
      piVar11 = (int *)param_1[0xe];
      if ((int *)param_1[0xe] != (int *)0x0) {
        do {
          piVar1 = (int *)piVar11[2];
          piVar11 = (int *)*piVar11;
          uStack_130 = CONCAT44(0x5d077c,(undefined4)uStack_130);
          cVar4 = (**(code **)(*piVar11 + 0x24))();
          if (cVar4 == '\0') {
            if ((uint)(piVar11[3] * local_d4) % 10 < (uint)(local_f4 / 1000)) {
              uStack_130 = ZEXT48(&puStack_d0);
              uStack_138 = CONCAT44(0x5d07f2,(undefined4)uStack_138);
              piVar6 = (int *)(**(code **)(*piVar11 + 0x30))();
              uStack_138 = (longlong)*piVar6 * (longlong)iStack_f8;
              uStack_130 = 1000;
              uStack_13c = 0x5d0805;
              iVar5 = __alldiv();
              puStack_100 = (undefined1 *)((int)&uStack_130 + 4);
              uStack_130 = CONCAT44(piVar11[0xf] - iVar5,0x5d0818);
              FUN_005c02f0();
              if (piVar11[0xf] < iStack_cc) {
                puStack_100 = (undefined1 *)piVar11[0x18];
                if (piVar11[0x19] == *(int *)(DAT_012588e8 + 0xb60)) {
                  iStack_104 = iStack_104 + 1;
                }
                uStack_130 = CONCAT44(piVar11,0x5d0856);
                FUN_0068a900();
                bVar2 = true;
              }
            }
          }
          else {
            uStack_130 = ZEXT48(auStack_a8);
            uStack_138 = CONCAT44(0x5d0792,(undefined4)uStack_138);
            piVar6 = (int *)(**(code **)(*piVar11 + 0x30))();
            uStack_138 = (longlong)*piVar6 * (longlong)iStack_f8;
            uStack_130 = 1000;
            uStack_13c = 0x5d07a5;
            iVar5 = __alldiv();
            *param_2 = *param_2 + iVar5;
            piVar11[0x1b] = piVar11[0x1b] + iVar5;
            uStack_130 = CONCAT44(auStack_ac,0x5d07b6);
            FUN_005c0160();
          }
          piVar11 = piVar1;
        } while (piVar1 != (int *)0x0);
        if (0 < iStack_104) {
          puStack_100 = *(undefined1 **)(DAT_012588e8 + 0xb5c);
          uStack_130 = CONCAT44(*(undefined4 *)
                                 (*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4),
                                0x5d0896);
          FUN_005061e0();
          uStack_130 = CONCAT44(0x5d089f,(undefined4)uStack_130);
          FUN_004e9500();
          uStack_c = 6;
          uStack_130 = CONCAT44(0x5d08b8,(undefined4)uStack_130);
          FUN_009885d0();
          uStack_c._0_1_ = 7;
          uStack_130 = CONCAT44(0x5d08d1,(undefined4)uStack_130);
          FUN_009885d0();
          uStack_c._0_1_ = 8;
          uStack_130 = CONCAT44(0x5d08de,(undefined4)uStack_130);
          FUN_006a4f40();
          uStack_130 = CONCAT44(auStack_f0,auStack_c8);
          uStack_138 = CONCAT44(0x5d08ed,(undefined4)uStack_138);
          uVar7 = FUN_00424ce0();
          uStack_130 = CONCAT44(uVar7,auStack_a4);
          uStack_c._0_1_ = 9;
          uStack_138 = CONCAT44(auStack_88,0x5d0906);
          iVar5 = FUN_00424aa0();
          uStack_c._0_1_ = 10;
          uStack_130 = 0x44005d091f;
          puVar8 = (undefined1 *)FUN_00aae9af();
          uStack_c._0_1_ = 0xb;
          uVar3 = (undefined1)uStack_c;
          uStack_c._0_1_ = 0xb;
          puStack_100 = puVar8;
          if (puVar8 == (undefined1 *)0x0) {
            puVar8 = (undefined1 *)0x0;
            uStack_c._0_1_ = uVar3;
          }
          else {
            uStack_130 = 0xffffffff00000000;
            *(undefined4 *)(puVar8 + 0x14) = 0xf;
            *(undefined4 *)(puVar8 + 0x10) = 0;
            *puVar8 = 0;
            uStack_138 = CONCAT44(iVar5,0x5d094b);
            FUN_00408ed0();
            uStack_c._0_1_ = 0xc;
            uStack_130 = 0xffffffff00000000;
            *(undefined4 *)(puVar8 + 0x30) = 0xf;
            *(undefined4 *)(puVar8 + 0x2c) = 0;
            puVar8[0x1c] = 0;
            uStack_138 = CONCAT44(iVar5 + 0x1c,0x5d096e);
            FUN_00408ed0();
            *(undefined1 **)(puVar8 + 0x38) = puStack_110;
            *(undefined4 *)(puVar8 + 0x3c) = 0;
            puVar8[0x40] = 0;
          }
          puVar9 = puVar8;
          if (iStack_10c != 0) {
            *(undefined1 **)(puStack_110 + 0x3c) = puVar8;
            puVar9 = puStack_114;
          }
          puStack_114 = puVar9;
          uStack_130 = CONCAT44(0x5d09ab,(undefined4)uStack_130);
          puStack_110 = puVar8;
          iStack_10c = iStack_10c + 1;
          FUN_00a39a80();
          uStack_130 = CONCAT44(0x5d09b4,(undefined4)uStack_130);
          FUN_00408ad0();
          uStack_130 = CONCAT44(0x5d09c0,(undefined4)uStack_130);
          FUN_00408ad0();
          uStack_c._0_1_ = 6;
          uStack_130 = CONCAT44(0x5d09d1,(undefined4)uStack_130);
          FUN_00408ad0();
          uStack_130 = CONCAT44(0x5d09df,(undefined4)uStack_130);
          FUN_009885d0();
          uStack_c._0_1_ = 0xd;
          uStack_130 = CONCAT44(auStack_c8,0x5d09fc);
          uVar7 = (**(code **)(*(int *)param_1[0x37] + 0x1c))();
          uStack_130 = CONCAT44(uVar7,auStack_f0);
          uStack_c._0_1_ = 0xe;
          uStack_138 = CONCAT44(auStack_88,0x5d0a15);
          iVar5 = FUN_00424aa0();
          puVar8 = puStack_110;
          uStack_c._0_1_ = 0xf;
          uStack_130 = 0x44005d0a2e;
          puVar9 = (undefined1 *)FUN_00aae9af();
          uStack_c._0_1_ = 0x10;
          uVar3 = (undefined1)uStack_c;
          uStack_c._0_1_ = 0x10;
          puStack_100 = puVar9;
          if (puVar9 == (undefined1 *)0x0) {
            puStack_110 = (undefined1 *)0x0;
            uStack_c._0_1_ = uVar3;
          }
          else {
            uStack_130 = 0xffffffff00000000;
            *(undefined4 *)(puVar9 + 0x14) = 0xf;
            *(undefined4 *)(puVar9 + 0x10) = 0;
            *puVar9 = 0;
            uStack_138 = CONCAT44(iVar5,0x5d0a5a);
            FUN_00408ed0();
            uStack_c._0_1_ = 0x11;
            uStack_130 = 0xffffffff00000000;
            *(undefined4 *)(puVar9 + 0x30) = 0xf;
            *(undefined4 *)(puVar9 + 0x2c) = 0;
            puVar9[0x1c] = 0;
            uStack_138 = CONCAT44(iVar5 + 0x1c,0x5d0a7d);
            FUN_00408ed0();
            *(undefined1 **)(puVar9 + 0x38) = puVar8;
            *(undefined4 *)(puVar9 + 0x3c) = 0;
            puVar9[0x40] = 0;
            puStack_110 = puVar9;
          }
          puVar9 = puStack_110;
          if (iStack_10c != 0) {
            *(undefined1 **)(puVar8 + 0x3c) = puStack_110;
            puVar9 = puStack_114;
          }
          puStack_114 = puVar9;
          uStack_130 = CONCAT44(0x5d0aba,(undefined4)uStack_130);
          iStack_10c = iStack_10c + 1;
          FUN_00a39a80();
          uStack_130 = CONCAT44(0x5d0ac3,(undefined4)uStack_130);
          FUN_00408ad0();
          uStack_c._0_1_ = 6;
          uStack_130 = CONCAT44(0x5d0ad4,(undefined4)uStack_130);
          FUN_00408ad0();
          uStack_130 = CONCAT44(0x5d0ae2,(undefined4)uStack_130);
          FUN_009885d0();
          uStack_c._0_1_ = 0x12;
          uStack_130 = CONCAT44(auStack_c8,0x5d0af8);
          uVar7 = FUN_009888f0();
          uStack_130 = CONCAT44(uVar7,auStack_f0);
          uStack_c._0_1_ = 0x13;
          uStack_138 = CONCAT44(auStack_88,0x5d0b11);
          iVar5 = FUN_00424aa0();
          puVar8 = puStack_110;
          uStack_c._0_1_ = 0x14;
          uStack_130 = 0x44005d0b2a;
          puVar9 = (undefined1 *)FUN_00aae9af();
          uStack_c._0_1_ = 0x15;
          uVar3 = (undefined1)uStack_c;
          uStack_c._0_1_ = 0x15;
          puStack_100 = puVar9;
          if (puVar9 == (undefined1 *)0x0) {
            puStack_110 = (undefined1 *)0x0;
            uStack_c._0_1_ = uVar3;
          }
          else {
            uStack_130 = 0xffffffff00000000;
            *(undefined4 *)(puVar9 + 0x14) = 0xf;
            *(undefined4 *)(puVar9 + 0x10) = 0;
            *puVar9 = 0;
            uStack_138 = CONCAT44(iVar5,0x5d0b56);
            FUN_00408ed0();
            uStack_c._0_1_ = 0x16;
            uStack_130 = 0xffffffff00000000;
            *(undefined4 *)(puVar9 + 0x30) = 0xf;
            *(undefined4 *)(puVar9 + 0x2c) = 0;
            puVar9[0x1c] = 0;
            uStack_138 = CONCAT44(iVar5 + 0x1c,0x5d0b79);
            FUN_00408ed0();
            *(undefined1 **)(puVar9 + 0x38) = puVar8;
            *(undefined4 *)(puVar9 + 0x3c) = 0;
            puVar9[0x40] = 0;
            puStack_110 = puVar9;
          }
          puVar9 = puStack_110;
          if (iStack_10c != 0) {
            *(undefined1 **)(puVar8 + 0x3c) = puStack_110;
            puVar9 = puStack_114;
          }
          puStack_114 = puVar9;
          uStack_130 = CONCAT44(0x5d0bb6,(undefined4)uStack_130);
          iStack_10c = iStack_10c + 1;
          FUN_00a39a80();
          uStack_130 = CONCAT44(0x5d0bbf,(undefined4)uStack_130);
          FUN_00408ad0();
          uStack_c._0_1_ = 6;
          uStack_130 = CONCAT44(0x5d0bd0,(undefined4)uStack_130);
          FUN_00408ad0();
          uStack_130 = CONCAT44(0x5d0bde,(undefined4)uStack_130);
          FUN_009885d0();
          uStack_c._0_1_ = 0x17;
          uStack_130 = CONCAT44(0x5d0bf4,(undefined4)uStack_130);
          FUN_009885d0();
          uStack_130 = CONCAT44(auStack_c8,auStack_a4);
          uStack_c._0_1_ = 0x18;
          uStack_138 = CONCAT44(0x5d0c0e,(undefined4)uStack_138);
          FUN_009a8ee0();
          uStack_c._0_1_ = 0x19;
          uStack_130 = CONCAT44(0x5d0c1d,(undefined4)uStack_130);
          iVar5 = FUN_00475500();
          uStack_138 = *(undefined8 *)(iVar5 + 0x6c);
          uStack_130 = *(undefined8 *)(iVar5 + 0x74);
          uStack_13c = 0x5d0c43;
          uVar7 = FUN_009a9880();
          uStack_130 = CONCAT44(uVar7,auStack_f0);
          uStack_c._0_1_ = 0x1a;
          uStack_138 = CONCAT44(auStack_50,0x5d0c5e);
          iVar5 = FUN_00424aa0();
          puVar8 = puStack_110;
          uStack_c._0_1_ = 0x1b;
          uStack_130 = 0x44005d0c77;
          puVar9 = (undefined1 *)FUN_00aae9af();
          uStack_c._0_1_ = 0x1c;
          uVar3 = (undefined1)uStack_c;
          uStack_c._0_1_ = 0x1c;
          puStack_100 = puVar9;
          if (puVar9 == (undefined1 *)0x0) {
            puStack_110 = (undefined1 *)0x0;
            uStack_c._0_1_ = uVar3;
          }
          else {
            uStack_130 = 0xffffffff00000000;
            *(undefined4 *)(puVar9 + 0x14) = 0xf;
            *(undefined4 *)(puVar9 + 0x10) = 0;
            *puVar9 = 0;
            uStack_138 = CONCAT44(iVar5,0x5d0ca3);
            FUN_00408ed0();
            uStack_c._0_1_ = 0x1d;
            uStack_130 = 0xffffffff00000000;
            *(undefined4 *)(puVar9 + 0x30) = 0xf;
            *(undefined4 *)(puVar9 + 0x2c) = 0;
            puVar9[0x1c] = 0;
            uStack_138 = CONCAT44(iVar5 + 0x1c,0x5d0cc6);
            FUN_00408ed0();
            *(undefined1 **)(puVar9 + 0x38) = puVar8;
            *(undefined4 *)(puVar9 + 0x3c) = 0;
            puVar9[0x40] = 0;
            puStack_110 = puVar9;
          }
          puVar9 = puStack_110;
          if (iStack_10c != 0) {
            *(undefined1 **)(puVar8 + 0x3c) = puStack_110;
            puVar9 = puStack_114;
          }
          puStack_114 = puVar9;
          uStack_130 = CONCAT44(0x5d0d03,(undefined4)uStack_130);
          iStack_10c = iStack_10c + 1;
          FUN_00a39a80();
          uStack_130 = CONCAT44(0x5d0d0f,(undefined4)uStack_130);
          FUN_00408ad0();
          uStack_c._0_1_ = 0x18;
          uStack_130 = CONCAT44(auStack_a4,0x5d0d24);
          FUN_009a9740();
          uStack_130 = CONCAT44(0x5d0d2d,(undefined4)uStack_130);
          FUN_00408ad0();
          uStack_c._0_1_ = 6;
          uStack_130 = CONCAT44(0x5d0d3e,(undefined4)uStack_130);
          FUN_00408ad0();
          uStack_130 = CONCAT44(0x5d0d4c,(undefined4)uStack_130);
          FUN_009885d0();
          uStack_c._0_1_ = 0x1e;
          uStack_130 = CONCAT44(0x5d0d62,(undefined4)uStack_130);
          FUN_009885d0();
          puStack_100 = auStack_1a8;
          uStack_c._0_1_ = 0x1f;
          puStack_d0 = (undefined1 *)&uStack_1b0;
          uStack_1b0 = 0;
          pcStack_1ac = (code *)0x0;
          uVar7 = *(undefined4 *)(DAT_012588e8 + 0xb60);
          iVar5 = param_1[0x37];
          uVar16 = *(undefined4 *)(DAT_012588e8 + 0xb5c);
          uVar15 = *(undefined4 *)(DAT_012588e8 + 0xb60);
          uVar14 = *(undefined4 *)(DAT_012588e8 + 0xb5c);
          uVar13 = 0;
          puVar8 = auStack_f0;
          ppuVar12 = &puStack_114;
          FUN_006a4f40(ppuVar12,iVar5,puVar8,0,uVar14,uVar15,uVar16,uVar7);
          uVar10 = FUN_006a55b0();
          FUN_006a7ed0(auStack_1a8,uVar10,ppuVar12,iVar5,puVar8,uVar13,uVar14,uVar15,uVar16,uVar7);
          pcStack_1ac = FUN_006a5730;
          uStack_c._0_1_ = 0x20;
          uStack_1b0 = 0x5d0df2;
          uStack_1b0 = FUN_006a4f40();
          uVar7 = FUN_006a4f40();
          uStack_c = CONCAT31(uStack_c._1_3_,0x1f);
          FUN_004e9540(uVar7);
          uStack_130 = CONCAT44(0x5d0e0f,(undefined4)uStack_130);
          FUN_00408ad0();
          uStack_130 = CONCAT44(0x5d0e18,(undefined4)uStack_130);
          FUN_00408ad0();
          uStack_c = 0xffffffff;
          uStack_130 = CONCAT44(&puStack_114,0x5d0e2d);
          FUN_0042b9f0();
        }
        if ((bVar2) && (param_1[0x10] == 0)) {
          uStack_130 = CONCAT44(0x5d0e4a,(undefined4)uStack_130);
          cVar4 = (**(code **)(*(int *)param_1[0x36] + 0x20))();
          if (cVar4 != '\0') {
            puStack_100 = (undefined1 *)param_1[0x30];
            uStack_130 = CONCAT44(0x5d0e75,(undefined4)uStack_130);
            FUN_0050e840();
            uStack_130 = CONCAT44(0x5d0e7a,(undefined4)uStack_130);
            uVar7 = FUN_005b6140();
            uStack_130 = CONCAT44(uVar7,0x5d0e82);
            FUN_005cbcc0();
          }
          uStack_130 = CONCAT44(param_1,0x5d0e8e);
          FUN_0068a850();
        }
        ExceptionList = local_14;
        return param_2;
      }
    }
  }
  ExceptionList = local_14;
  return param_2;
}

