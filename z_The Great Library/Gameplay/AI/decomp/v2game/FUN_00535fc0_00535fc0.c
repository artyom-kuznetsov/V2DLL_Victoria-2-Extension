// FUN_00535fc0 @ 00535fc0 body=[[00535fc0, 005365d0]]


void FUN_00535fc0(int *param_1,undefined4 param_2,undefined4 param_3,char param_4)

{
  int *piVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  char cVar5;
  int *piVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int *piVar12;
  int unaff_EDI;
  undefined1 **ppuVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  int iVar17;
  undefined1 auStack_1c4 [108];
  undefined4 uStack_158;
  int *piStack_154;
  int *piStack_150;
  undefined1 local_f0 [84];
  undefined1 local_9c [28];
  undefined1 local_80 [84];
  int local_2c;
  int local_28;
  int local_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00ba6c03;
  local_10 = ExceptionList;
  if (param_1[1] != *(int *)(unaff_EDI + 0x20)) {
    iVar7 = *(int *)(*(int *)(unaff_EDI + 0xbe8) + param_1[1] * 4);
    ExceptionList = &local_10;
    if (DAT_0131acac == 0) {
      ExceptionList = &local_10;
      local_24 = FUN_00aae9af();
      local_8 = 0;
      if (local_24 != 0) {
        FUN_0090cca0();
      }
      local_8 = 0xffffffff;
      FUN_0090d9d0();
    }
    iVar17 = DAT_0131acac;
    piVar6 = (int *)FUN_0090da40();
    if (piVar6 == (int *)0x0) {
      piVar6 = (int *)**(undefined4 **)(iVar17 + 0xc);
    }
    cVar5 = (**(code **)(*piVar6 + 0x1c))();
    if (cVar5 != '\0') {
      local_24 = *(int *)(DAT_012588e8 + 0xb0c);
      piVar1 = *(int **)(iVar7 + 0x50);
      do {
        if (piVar1 == (int *)0x0) {
          piVar12 = (int *)0x0;
          break;
        }
        piVar12 = (int *)*piVar1;
        piVar1 = (int *)piVar1[2];
      } while (piVar12[9] != piVar6[2]);
      bVar2 = false;
      if (piVar12 == (int *)0x0) {
        bVar2 = true;
        iVar7 = FUN_00aae9af();
        if (iVar7 == 0) {
          piVar12 = (int *)0x0;
        }
        else {
          piVar12 = (int *)FUN_0092d0a0();
        }
        local_28 = param_1[1];
        iVar7 = *param_1;
        local_14 = *(int *)(unaff_EDI + 0x20);
        piVar12[2] = *(int *)(unaff_EDI + 0x1c);
        piVar12[3] = local_14;
        piVar12[4] = iVar7;
        piVar12[6] = local_24;
        piVar12[5] = local_28;
        piVar12[9] = piVar6[2];
      }
      if ((char)piVar6[0x4c] != '\0') {
        FUN_00424810();
        piVar12[7] = local_24;
      }
      if (bVar2) {
        (**(code **)(*piVar12 + 0x28))();
        FUN_004a7bc0();
        if (((param_4 != '\0') && (*(int *)(unaff_EDI + 0x20) == *(int *)(DAT_012588e8 + 0xb60))) &&
           (*(int *)(DAT_012588e8 + 0xb0c) != *(int *)(DAT_012588e8 + 0xb10))) {
          FUN_005061e0();
          FUN_004e9500();
          local_8 = 1;
          FUN_009885d0();
          local_8._0_1_ = 2;
          FUN_0055dd40();
          piStack_150 = (int *)local_f0;
          local_8._0_1_ = 3;
          piStack_154 = (int *)0x5361b7;
          iVar7 = FUN_00424aa0();
          local_8._0_1_ = 4;
          puVar8 = (undefined1 *)FUN_00aae9af();
          local_8._0_1_ = 5;
          uVar3 = (undefined1)local_8;
          local_8._0_1_ = 5;
          if (puVar8 == (undefined1 *)0x0) {
            puVar8 = (undefined1 *)0x0;
            local_8._0_1_ = uVar3;
          }
          else {
            *(undefined4 *)(puVar8 + 0x14) = 0xf;
            *(undefined4 *)(puVar8 + 0x10) = 0;
            *puVar8 = 0;
            piStack_154 = (int *)0x5361fb;
            piStack_150 = (int *)iVar7;
            FUN_00408ed0();
            local_8._0_1_ = 6;
            piStack_150 = (int *)(iVar7 + 0x1c);
            *(undefined4 *)(puVar8 + 0x30) = 0xf;
            *(undefined4 *)(puVar8 + 0x2c) = 0;
            puVar8[0x1c] = 0;
            piStack_154 = (int *)0x536223;
            FUN_00408ed0();
            *(undefined1 **)(puVar8 + 0x38) = local_1c;
            *(undefined4 *)(puVar8 + 0x3c) = 0;
            puVar8[0x40] = 0;
          }
          puVar9 = puVar8;
          if (local_18 != 0) {
            *(undefined1 **)((int)local_1c + 0x3c) = puVar8;
            puVar9 = local_20;
          }
          local_20 = puVar9;
          local_1c = puVar8;
          local_18 = local_18 + 1;
          FUN_00a39a80();
          FUN_00408ad0();
          local_8._0_1_ = 1;
          FUN_00408ad0();
          FUN_009885d0();
          local_8._0_1_ = 7;
          piStack_150 = (int *)0x536290;
          FUN_0090a830();
          piStack_150 = (int *)local_f0;
          local_8._0_1_ = 8;
          piStack_154 = (int *)0x5362a4;
          iVar7 = FUN_00424aa0();
          puVar8 = local_1c;
          local_8._0_1_ = 9;
          puVar9 = (undefined1 *)FUN_00aae9af();
          local_8._0_1_ = 10;
          uVar3 = (undefined1)local_8;
          local_8._0_1_ = 10;
          if (puVar9 == (undefined1 *)0x0) {
            puVar9 = (undefined1 *)0x0;
            local_8._0_1_ = uVar3;
          }
          else {
            *(undefined4 *)(puVar9 + 0x14) = 0xf;
            *(undefined4 *)(puVar9 + 0x10) = 0;
            *puVar9 = 0;
            piStack_154 = (int *)0x5362e8;
            piStack_150 = (int *)iVar7;
            FUN_00408ed0();
            local_8._0_1_ = 0xb;
            piStack_150 = (int *)(iVar7 + 0x1c);
            *(undefined4 *)(puVar9 + 0x30) = 0xf;
            *(undefined4 *)(puVar9 + 0x2c) = 0;
            puVar9[0x1c] = 0;
            piStack_154 = (int *)0x536310;
            FUN_00408ed0();
            *(undefined1 **)(puVar9 + 0x38) = puVar8;
            *(undefined4 *)(puVar9 + 0x3c) = 0;
            puVar9[0x40] = 0;
          }
          puVar4 = puVar9;
          if (local_18 != 0) {
            *(undefined1 **)(puVar8 + 0x3c) = puVar9;
            puVar4 = local_20;
          }
          local_20 = puVar4;
          local_1c = puVar9;
          local_18 = local_18 + 1;
          FUN_00a39a80();
          FUN_00408ad0();
          local_8._0_1_ = 1;
          FUN_00408ad0();
          FUN_008a8650();
          FUN_009885d0();
          local_8._0_1_ = 0xc;
          piStack_154 = (int *)0x5363a6;
          piStack_150 = piVar6;
          FUN_0090a8e0();
          local_8._0_1_ = 0xd;
          FUN_00988f20();
          FUN_00408ad0();
          local_8._0_1_ = 0x10;
          FUN_00408ad0();
          local_2c = *param_1;
          piStack_150 = (int *)local_80;
          uStack_158 = 0x5363f4;
          piStack_154 = piVar6;
          piStack_150 = (int *)FUN_0090aaf0();
          local_8._0_1_ = 0x11;
          piStack_154 = (int *)0x536404;
          FUN_00408ed0();
          local_8._0_1_ = 0x10;
          FUN_00408ad0();
          FUN_009885d0();
          piStack_150 = (int *)local_9c;
          local_8._0_1_ = 0x12;
          piStack_154 = (int *)0x536437;
          iVar7 = FUN_00424aa0();
          puVar8 = local_1c;
          local_8._0_1_ = 0x13;
          puVar9 = (undefined1 *)FUN_00aae9af();
          local_8._0_1_ = 0x14;
          uVar3 = (undefined1)local_8;
          local_8._0_1_ = 0x14;
          if (puVar9 == (undefined1 *)0x0) {
            puVar9 = (undefined1 *)0x0;
            local_8._0_1_ = uVar3;
          }
          else {
            *(undefined4 *)(puVar9 + 0x14) = 0xf;
            *(undefined4 *)(puVar9 + 0x10) = 0;
            *puVar9 = 0;
            piStack_154 = (int *)0x53647b;
            piStack_150 = (int *)iVar7;
            FUN_00408ed0();
            local_8._0_1_ = 0x15;
            piStack_150 = (int *)(iVar7 + 0x1c);
            *(undefined4 *)(puVar9 + 0x30) = 0xf;
            *(undefined4 *)(puVar9 + 0x2c) = 0;
            puVar9[0x1c] = 0;
            piStack_154 = (int *)0x5364a3;
            FUN_00408ed0();
            *(undefined1 **)(puVar9 + 0x38) = puVar8;
            *(undefined4 *)(puVar9 + 0x3c) = 0;
            puVar9[0x40] = 0;
          }
          puVar4 = puVar9;
          if (local_18 != 0) {
            *(undefined1 **)(puVar8 + 0x3c) = puVar9;
            puVar4 = local_20;
          }
          local_20 = puVar4;
          local_1c = puVar9;
          local_18 = local_18 + 1;
          FUN_00a39a80();
          local_8._0_1_ = 0x10;
          FUN_00408ad0();
          FUN_009885d0();
          local_8._0_1_ = 0x16;
          FUN_009885d0();
          local_8._0_1_ = 0x17;
          local_2c = *param_1;
          uVar11 = *(undefined4 *)
                    (*(int *)(DAT_012588e8 + 0xacc) +
                    *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + param_1[1] * 4) + 0xbe4) * 4);
          iVar7 = param_1[1];
          iVar17 = *param_1;
          uVar16 = *(undefined4 *)(unaff_EDI + 0x20);
          uVar15 = *(undefined4 *)(unaff_EDI + 0x1c);
          uVar14 = 0;
          puVar8 = local_80;
          ppuVar13 = &local_20;
          FUN_006a4f40(ppuVar13,uVar11,puVar8,0,uVar15,uVar16,iVar17,iVar7);
          uVar10 = FUN_006a55b0();
          FUN_006a7ed0(auStack_1c4,uVar10,ppuVar13,uVar11,puVar8,uVar14,uVar15,uVar16,iVar17,iVar7);
          local_8._0_1_ = 0x18;
          uVar11 = FUN_006a4f40();
          local_8 = CONCAT31(local_8._1_3_,0x17);
          FUN_0042bb30(uVar11);
          FUN_00408ad0();
          FUN_00408ad0();
          FUN_00408ad0();
          FUN_0042b9f0();
        }
      }
    }
  }
  ExceptionList = local_10;
  return;
}

