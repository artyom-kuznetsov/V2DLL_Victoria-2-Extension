// FUN_004fbc10 @ 004fbc10 body=[[004fbc10, 004fc5f7] [004fc600, 004fcf67] [004fcf70, 004fd0e7] [004fd0eb, 004fd583] [004fd590, 004fe49b] [004fe4b6, 004feaf7]]


void FUN_004fbc10(undefined ***param_1,int param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  void **ppvVar4;
  char cVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined ***pppuVar10;
  int iVar11;
  undefined ***pppuVar12;
  int iVar13;
  int *piVar14;
  undefined4 uVar15;
  int in_ECX;
  undefined ***local_7ec;
  undefined ***pppuStack_7e8;
  char *pcStack_7e4;
  undefined ***pppuStack_7e0;
  undefined *local_7dc;
  undefined ***local_7d8;
  undefined ***local_7d4;
  undefined8 local_7c0;
  undefined4 local_7b8;
  uint local_7b4;
  undefined4 local_7b0;
  undefined4 local_7ac;
  undefined1 local_7a8;
  undefined **local_798;
  int local_794;
  undefined **local_790;
  undefined4 uStack_78c;
  undefined4 uStack_788;
  undefined4 uStack_784;
  undefined4 local_780;
  undefined4 local_77c;
  undefined1 uStack_778;
  uint local_774 [4];
  undefined4 local_764;
  uint local_760;
  undefined **ppuStack_75c;
  int local_758 [22];
  uint auStack_700 [4];
  undefined4 uStack_6f0;
  uint uStack_6ec;
  undefined **local_6e4 [2];
  undefined1 auStack_6dc [28];
  undefined1 auStack_6c0 [28];
  undefined1 auStack_6a4 [28];
  undefined1 auStack_688 [28];
  undefined1 auStack_66c [28];
  undefined1 auStack_650 [336];
  int aiStack_500 [313];
  void *pvStack_1c;
  void *pvStack_18;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00ba7c05;
  local_14 = ExceptionList;
  if (0x678 < param_2) {
    if (param_2 < 0x784) {
      if (param_2 == 0x783) {
        local_7c0 = CONCAT44(local_7c0._4_4_,&local_7ec);
        ExceptionList = &local_14;
        FUN_009885d0();
        FUN_0043bb10();
        ExceptionList = local_14;
        return;
      }
      ExceptionList = &local_14;
      ppvVar4 = &local_14;
      switch(param_2) {
      case 0x67b:
        local_7d4 = param_1 + 0x8b;
        local_7d8 = (undefined ***)0x4fd63c;
        ExceptionList = &local_14;
        uVar15 = FUN_00aaf0c5();
        *(undefined4 *)(in_ECX + 0x98) = uVar15;
        ExceptionList = local_14;
        return;
      default:
        goto switchD_004fbced_caseD_1c5;
      case 0x68a:
        while( true ) {
          ppuVar8 = param_1[7];
          if (*(char *)(ppuVar8 + 0x44) == '\0') {
            local_7d4 = (undefined ***)0x4fd4db;
            puVar9 = (undefined *)(**(code **)(*ppuVar8 + 4))();
            ppuVar8[2] = puVar9;
            if (puVar9 == (undefined *)0x0) {
              ppuVar8[3] = (undefined *)0x13;
            }
            *(undefined1 *)(ppuVar8 + 0x44) = 1;
          }
          ppuVar8 = ppuVar8 + 3;
          piVar14 = aiStack_500;
          for (iVar13 = 0x41; iVar13 != 0; iVar13 = iVar13 + -1) {
            *piVar14 = (int)*ppuVar8;
            ppuVar8 = ppuVar8 + 1;
            piVar14 = piVar14 + 1;
          }
          if ((aiStack_500[0] == 4) || (aiStack_500[0] == 0x13)) break;
          local_7d4 = (undefined ***)0x4fd51f;
          (**(code **)(*param_1[7] + 4))();
          local_7d4 = (undefined ***)0x4fd531;
          FUN_009885d0();
          local_c = 2;
          local_7d4 = (undefined ***)0x4fd549;
          FUN_00a840b0();
          local_c = 0xffffffff;
          local_7d4 = (undefined ***)0x4fd55b;
          FUN_00408ad0();
        }
        break;
      case 0x68b:
        while( true ) {
          ExceptionList = ppvVar4;
          ppuVar8 = param_1[7];
          if (*(char *)(ppuVar8 + 0x44) == '\0') {
            local_7d4 = (undefined ***)0x4fd5a8;
            puVar9 = (undefined *)(**(code **)(*ppuVar8 + 4))();
            ppuVar8[2] = puVar9;
            if (puVar9 == (undefined *)0x0) {
              ppuVar8[3] = (undefined *)0x13;
            }
            *(undefined1 *)(ppuVar8 + 0x44) = 1;
          }
          ppuVar8 = ppuVar8 + 3;
          piVar14 = aiStack_500;
          for (iVar13 = 0x41; iVar13 != 0; iVar13 = iVar13 + -1) {
            *piVar14 = (int)*ppuVar8;
            ppuVar8 = ppuVar8 + 1;
            piVar14 = piVar14 + 1;
          }
          if ((aiStack_500[0] == 4) || (aiStack_500[0] == 0x13)) break;
          local_7d4 = (undefined ***)0x4fd5ec;
          (**(code **)(*param_1[7] + 4))();
          local_7d4 = (undefined ***)0x4fd5fe;
          FUN_009885d0();
          local_c = 3;
          local_7d4 = (undefined ***)0x4fd616;
          FUN_00a840b0();
          local_c = 0xffffffff;
          local_7d4 = (undefined ***)0x4fd628;
          FUN_00408ad0();
          ppvVar4 = ExceptionList;
        }
        break;
      case 0x6a3:
        local_7d4 = (undefined ***)local_758;
        local_7d8 = (undefined ***)0x4fd788;
        ExceptionList = &local_14;
        FUN_00561bd0();
        local_c = 0x1a;
        local_7d4 = param_1;
        local_7d8 = (undefined ***)0x4fd7a4;
        (**(code **)(local_758[0] + 0xc))();
        local_7dc = DAT_012588e8[0x2f3][0x1f5] + *(int *)(in_ECX + 0x20) * 0x58;
        local_7d8 = &ppuStack_75c;
        pppuStack_7e0 = (undefined ***)0x4fd7ce;
        FUN_0047dbb0();
        local_7d8 = (undefined ***)0x4fd7d7;
        FUN_0047e4a0();
        ExceptionList = pvStack_18;
        return;
      case 0x6b5:
        local_7c0 = CONCAT44(local_7c0._4_4_,&local_7ec);
        ExceptionList = &local_14;
        FUN_009885d0();
        FUN_0043bb10();
        ExceptionList = local_14;
        return;
      case 0x6c0:
        local_7c0 = CONCAT44(local_7c0._4_4_,&local_7ec);
        ExceptionList = &local_14;
        FUN_009885d0();
        FUN_0043bb10();
        ExceptionList = local_14;
        return;
      case 0x6cc:
switchD_004fd163_caseD_663:
        local_7d4 = param_1;
        local_7d8 = (undefined ***)0x4fd671;
        ExceptionList = &local_14;
        (**(code **)(*(int *)(in_ECX + 0xec4) + 0xc))();
        ExceptionList = pvStack_18;
        return;
      case 0x6cd:
        local_7d4 = param_1;
        local_7d8 = (undefined ***)0x4fd69d;
        ExceptionList = &local_14;
        (**(code **)(*(int *)(in_ECX + 0xf1c) + 0xc))();
        ExceptionList = pvStack_18;
        return;
      case 0x6e2:
        local_7d4 = param_1;
        local_7d8 = (undefined ***)0x4fd767;
        ExceptionList = &local_14;
        (**(code **)(*(int *)(in_ECX + 0x364) + 0xc))();
        ExceptionList = pvStack_18;
        return;
      case 0x71f:
        goto switchD_004fd4bc_caseD_71f;
      case 0x752:
        local_7d4 = param_1;
        local_7d8 = (undefined ***)0x4fd73b;
        ExceptionList = &local_14;
        (**(code **)(*(int *)(in_ECX + 0xbf8) + 0xc))();
        ExceptionList = pvStack_18;
        return;
      }
LAB_004fd560:
      local_7d4 = (undefined ***)0x4fd56d;
      (**(code **)(*param_1[7] + 4))();
      ExceptionList = local_14;
      return;
    }
    if (param_2 < 0x895) {
      if (param_2 == 0x894) {
        local_7c0 = CONCAT44(local_7c0._4_4_,&local_7ec);
        ExceptionList = &local_14;
        FUN_009885d0();
        FUN_0043bb10();
        ExceptionList = local_14;
        return;
      }
      switch(param_2) {
      case 0x785:
        local_7c0 = CONCAT44(local_7c0._4_4_,&local_7ec);
        ExceptionList = &local_14;
        FUN_009885d0();
        FUN_0043bb10();
        ExceptionList = local_14;
        return;
      default:
        goto switchD_004fbced_caseD_1c5;
      case 0x78c:
        local_7d8 = (undefined ***)0x4fda0e;
        ExceptionList = &local_14;
        local_7d4 = (undefined ***)(in_ECX + 0xe00);
        FUN_00549980();
        local_7d8 = param_1;
        local_7dc = (undefined *)0x4fda18;
        local_7d4 = (undefined ***)(in_ECX + 0xe00);
        FUN_005e5a20();
        ExceptionList = local_14;
        return;
      case 0x796:
        local_7c0 = CONCAT44(local_7c0._4_4_,&local_7ec);
        ExceptionList = &local_14;
        FUN_009885d0();
        FUN_0043bb10();
        ExceptionList = local_14;
        return;
      case 0x799:
        local_7d4 = (undefined ***)0x14;
        local_7d8 = (undefined ***)0x4fd92d;
        ExceptionList = &local_14;
        iVar13 = FUN_00aae9af();
        if (iVar13 == 0) {
          piVar14 = (int *)0x0;
        }
        else {
          local_7d4 = (undefined ***)0x4fd939;
          piVar14 = (int *)FUN_004f6300();
        }
        local_7d4 = param_1;
        local_7d8 = (undefined ***)0x4fd94c;
        (**(code **)(*piVar14 + 0xc))();
        iVar13 = *(int *)(in_ECX + 0x670);
        local_7d4 = (undefined ***)0x10;
        local_7d8 = (undefined ***)0x4fd959;
        piVar7 = (int *)FUN_00aae9af();
        if (piVar7 == (int *)0x0) {
          piVar7 = (int *)0x0;
        }
        else {
          *piVar7 = (int)piVar14;
          piVar7[1] = iVar13;
          piVar7[2] = 0;
          *(undefined1 *)(piVar7 + 3) = 0;
        }
        iVar11 = *(int *)(in_ECX + 0x674);
        *(int **)(in_ECX + 0x670) = piVar7;
        *(int *)(in_ECX + 0x674) = iVar11 + 1;
        if (iVar11 == 0) {
          *(int **)(in_ECX + 0x66c) = piVar7;
          ExceptionList = local_14;
          return;
        }
        goto LAB_004fc12f;
      case 0x79e:
        local_7d4 = (undefined ***)0x0;
        local_7d8 = (undefined ***)(in_ECX + 0xcc0);
        local_7dc = (undefined *)0x4fd9bf;
        ExceptionList = &local_14;
        FUN_009a1750();
        ExceptionList = local_14;
        return;
      case 0x7a0:
        local_7d4 = (undefined ***)0x4fda3c;
        ExceptionList = &local_14;
        FUN_0043a970();
        local_7c0 = 0;
        local_7b8 = 0;
        local_7d4 = (undefined ***)&local_7c0;
        local_7d8 = param_1;
        local_c = 0x12;
        local_7dc = (undefined *)0x4fda63;
        FUN_0045be80();
        iVar13 = (local_7c0._4_4_ - (int)(undefined ****)local_7c0) / 0x1c;
        puVar6 = (undefined ****)local_7c0;
        if (0 < iVar13) {
          do {
            local_7d4 = (undefined ***)puVar6;
            if (0xf < (uint)puVar6[5]) {
              local_7d4 = (undefined ***)*puVar6;
            }
            local_7d8 = local_6e4;
            local_7dc = (undefined *)DAT_012587e4;
            pppuStack_7e0 = (undefined ***)0x4fdaa7;
            FUN_0055c6c0();
            local_7d4 = (undefined ***)0x4fdaac;
            FUN_004d61d0();
            iVar13 = iVar13 + -1;
            puVar6 = puVar6 + 7;
          } while (iVar13 != 0);
        }
        local_7d4 = (undefined ***)0x4fdabb;
        FUN_0040b3c0();
        ExceptionList = local_14;
        return;
      case 0x7a5:
        local_7d4 = param_1;
        local_7d8 = (undefined ***)0x4fd9eb;
        ExceptionList = &local_14;
        (**(code **)(*(int *)(in_ECX + 0x20c) + 0xc))();
        ExceptionList = pvStack_18;
        return;
      case 0x7bd:
        local_7c0 = CONCAT44(local_7c0._4_4_,&local_7ec);
        ExceptionList = &local_14;
        FUN_009885d0();
        FUN_0043bb10();
        ExceptionList = local_14;
        return;
      case 0x835:
        local_7d4 = (undefined ***)0x28;
        local_7d8 = (undefined ***)0x4fdad9;
        ExceptionList = &local_14;
        piVar14 = (int *)FUN_00aae9af();
        if (piVar14 == (int *)0x0) {
          piVar14 = (int *)0x0;
        }
        else {
          piVar14[1] = 0x18d;
          *piVar14 = (int)CCreditor::vftable;
          piVar14[2] = 0x2d2d2d;
          piVar14[3] = 0;
          piVar14[4] = 0;
          piVar14[5] = 0;
          piVar14[6] = 0;
          piVar14[7] = 0;
          *(undefined1 *)(piVar14 + 8) = 1;
        }
        local_7d4 = param_1;
        local_7c0 = CONCAT44(local_7c0._4_4_,piVar14);
        local_7d8 = (undefined ***)0x4fdb28;
        (**(code **)(*piVar14 + 0xc))();
        local_7d8 = (undefined ***)0x4fdb37;
        FUN_0068f390();
        ExceptionList = pvStack_18;
        return;
      case 0x83b:
        local_7d4 = param_1;
        local_7d8 = (undefined ***)0x4fdb63;
        ExceptionList = &local_14;
        (**(code **)(*(int *)(in_ECX + 0x1244) + 0xc))();
        ExceptionList = pvStack_18;
        return;
      case 0x865:
        local_77c = 0xf;
        local_780 = 0;
        local_790 = (undefined **)((uint)local_790._1_3_ << 8);
        local_7d4 = (undefined ***)0x0;
        local_7d8 = &local_790;
        local_c._0_1_ = 0x1e;
        local_c._1_3_ = 0;
        local_7dc = (undefined *)0x4fdba9;
        ExceptionList = &local_14;
        FUN_009a1750();
        local_7d4 = &local_790;
        local_7d8 = (undefined ***)0x4fdbb3;
        FUN_00976610();
        local_7d8 = (undefined ***)0x4fdbb8;
        uVar15 = FUN_00976870();
        *(undefined4 *)(in_ECX + 0x12b0) = uVar15;
        break;
      case 0x866:
        local_7d4 = (undefined ***)0x4fd864;
        ExceptionList = &local_14;
        FUN_009a1ce0();
        ExceptionList = local_14;
        return;
      case 0x869:
        local_7d4 = (undefined ***)(in_ECX + 0x12d0);
        local_7d8 = (undefined ***)0x4fdbd6;
        ExceptionList = &local_14;
        FUN_009a1bb0();
        ExceptionList = local_14;
        return;
      case 0x86d:
        local_7d4 = param_1;
        local_7d8 = (undefined ***)0x4fdc81;
        ExceptionList = &local_14;
        (**(code **)(**(int **)(*(int *)(in_ECX + 0x1234) + 8) + 0xc))();
        ExceptionList = pvStack_18;
        return;
      case 0x874:
        local_7d4 = param_1;
        local_7d8 = (undefined ***)0x4fdc56;
        ExceptionList = &local_14;
        (**(code **)(*(int *)**(undefined4 **)(in_ECX + 0xa0) + 0xc))();
        ExceptionList = pvStack_18;
        return;
      case 0x875:
        local_7d4 = param_1;
        local_7d8 = (undefined ***)0x4fdc2c;
        ExceptionList = &local_14;
        (**(code **)(**(int **)(*(int *)(in_ECX + 0xa0) + 4) + 0xc))();
        ExceptionList = pvStack_18;
        return;
      case 0x876:
        local_7d4 = param_1;
        local_7d8 = (undefined ***)0x4fdc01;
        ExceptionList = &local_14;
        (**(code **)(**(int **)(*(int *)(in_ECX + 0xa0) + 8) + 0xc))();
        ExceptionList = pvStack_18;
        return;
      }
    }
    else if (param_2 < 0x9b6) {
      if (param_2 == 0x9b5) {
        local_7d4 = (undefined ***)0x4fe1f2;
        ExceptionList = &local_14;
        FUN_009a1d40();
        ExceptionList = local_14;
        return;
      }
      switch(param_2) {
      case 0x8af:
        local_7d4 = param_1;
        local_7d8 = (undefined ***)0x4fddf5;
        ExceptionList = &local_14;
        FUN_009a1440();
        local_7d4 = (undefined ***)param_1[8];
        local_7d8 = (undefined ***)0x4fddfe;
        piVar14 = (int *)FUN_0090e850();
        local_7d4 = param_1;
        local_7d8 = (undefined ***)0x4fde0d;
        (**(code **)(*piVar14 + 0xc))();
        iVar13 = *(int *)(in_ECX + 0xce8);
        local_7d8 = (undefined ***)0x10;
        local_7dc = (undefined *)0x4fde1e;
        puVar6 = (undefined4 *)FUN_00aae9af();
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = (undefined4 *)0x0;
        }
        else {
          *puVar6 = piVar14;
          puVar6[1] = iVar13;
          puVar6[2] = 0;
          *(undefined1 *)(puVar6 + 3) = 0;
        }
        iVar11 = *(int *)(in_ECX + 0xcec);
        *(undefined4 **)(in_ECX + 0xce8) = puVar6;
        *(int *)(in_ECX + 0xcec) = iVar11 + 1;
        if (iVar11 == 0) {
          *(undefined4 **)(in_ECX + 0xce4) = puVar6;
          local_7d8 = (undefined ***)0x4fde8e;
          (**(code **)(*param_1[7] + 4))();
          ExceptionList = pvStack_18;
          return;
        }
        *(undefined4 **)(iVar13 + 8) = puVar6;
        local_7d8 = (undefined ***)0x4fde67;
        (**(code **)(*param_1[7] + 4))();
        ExceptionList = pvStack_18;
        return;
      default:
        goto switchD_004fbced_caseD_1c5;
      case 0x8ba:
        local_7d4 = (undefined ***)0x4fdeb3;
        ExceptionList = &local_14;
        FUN_009a1d40();
        ExceptionList = local_14;
        return;
      case 0x8cc:
        local_7d4 = (undefined ***)0x4fddaf;
        ExceptionList = &local_14;
        FUN_009a1ce0();
        ExceptionList = local_14;
        return;
      case 0x8e7:
        local_7d4 = (undefined ***)(in_ECX + 0x129c);
        local_7d8 = (undefined ***)0x4fdf9b;
        ExceptionList = &local_14;
        FUN_009a1bb0();
        ExceptionList = local_14;
        return;
      case 0x8f7:
        local_7d4 = (undefined ***)(in_ECX + 0x659);
        local_7d8 = (undefined ***)0x4fddd5;
        ExceptionList = &local_14;
        FUN_009a1bb0();
        ExceptionList = local_14;
        return;
      case 0x8f8:
        local_7d4 = (undefined ***)0x4fdfc0;
        ExceptionList = &local_14;
        FUN_009a1d40();
        ExceptionList = local_14;
        return;
      case 0x8fc:
        local_7d4 = (undefined ***)(in_ECX + 0x1544);
        local_7d8 = (undefined ***)0x4fe1cd;
        ExceptionList = &local_14;
        FUN_009a1bb0();
        ExceptionList = local_14;
        return;
      case 0x904:
        local_7d4 = param_1;
        local_7d8 = (undefined ***)0x4fdd5e;
        ExceptionList = &local_14;
        (**(code **)(*(int *)(in_ECX + 0xf74) + 0xc))();
        ExceptionList = pvStack_18;
        return;
      case 0x919:
        local_7d4 = (undefined ***)0x4fdfe2;
        ExceptionList = &local_14;
        FUN_0043a970();
        local_7d8 = param_1;
        local_7dc = (undefined *)0x4fdfec;
        local_7d4 = (undefined ***)(in_ECX + 0xb0);
        FUN_00436e50();
        local_7d8 = (undefined ***)0x4fdff8;
        local_7d4 = (undefined ***)(in_ECX + 0xb0);
        FUN_0043a750();
        ExceptionList = local_14;
        return;
      case 0x91a:
        local_7d4 = (undefined ***)0x4fe01a;
        ExceptionList = &local_14;
        FUN_0043a970();
        local_7d8 = param_1;
        local_7dc = (undefined *)0x4fe024;
        local_7d4 = (undefined ***)(in_ECX + 0xd0);
        FUN_00436e50();
        local_7d8 = (undefined ***)0x4fe030;
        local_7d4 = (undefined ***)(in_ECX + 0xd0);
        FUN_0043a750();
        ExceptionList = local_14;
        return;
      case 0x921:
        local_7c0 = 0;
        local_7d4 = (undefined ***)0x4fdee0;
        ExceptionList = &local_14;
        FUN_009a1d40();
        *(undefined *****)(in_ECX + 0x1448) = (undefined ****)local_7c0;
        *(int *)(in_ECX + 0x144c) = local_7c0._4_4_;
        *(undefined *****)(in_ECX + 0x1450) = (undefined ****)local_7c0;
        *(int *)(in_ECX + 0x1454) = local_7c0._4_4_;
        *(undefined *****)(in_ECX + 0x1458) = (undefined ****)local_7c0;
        *(int *)(in_ECX + 0x145c) = local_7c0._4_4_;
        ExceptionList = local_14;
        return;
      case 0x923:
        local_7d4 = (undefined ***)local_758;
        local_7d8 = (undefined ***)0x4fdf2d;
        ExceptionList = &local_14;
        FUN_00561bd0();
        local_c = 0x1b;
        local_7d4 = param_1;
        local_7d8 = (undefined ***)0x4fdf49;
        (**(code **)(local_758[0] + 0xc))();
        local_7d8 = &ppuStack_75c;
        local_7dc = DAT_012588e8[0x2f3][0x169] + *(int *)(in_ECX + 0x20) * 0x58;
        pppuStack_7e0 = (undefined ***)0x4fdf6c;
        FUN_0047dbb0();
        local_7d8 = (undefined ***)0x4fdf75;
        FUN_0047e4a0();
        ExceptionList = pvStack_18;
        return;
      case 0x92c:
        local_7d4 = (undefined ***)0x1c;
        local_7d8 = (undefined ***)0x4fe04e;
        ExceptionList = &local_14;
        piVar14 = (int *)FUN_00aae9af();
        if (piVar14 == (int *)0x0) {
          piVar14 = (int *)0x0;
        }
        else {
          piVar14[2] = 0;
          piVar14[1] = 0x18d;
          *piVar14 = (int)CCasusBelliConstruction::vftable;
          piVar14[3] = 0;
          local_7c0 = CONCAT44(local_7c0._4_4_,0x2d2d2d);
          piVar14[4] = 0x2d2d2d;
          piVar14[5] = 0;
          *(undefined1 *)(piVar14 + 6) = 0;
        }
        *(int **)(in_ECX + 0x156c) = piVar14;
        local_7d4 = param_1;
        local_7d8 = (undefined ***)0x4fe098;
        (**(code **)(*piVar14 + 0xc))();
        ExceptionList = pvStack_18;
        return;
      case 0x944:
        local_7d4 = (undefined ***)0x24;
        local_7d8 = (undefined ***)0x4fe0b6;
        ExceptionList = &local_14;
        piVar14 = (int *)FUN_00aae9af();
        if (piVar14 == (int *)0x0) {
          piVar14 = (int *)0x0;
        }
        else {
          piVar14[1] = 0x18d;
          *piVar14 = (int)CRallyPoint::vftable;
          piVar14[2] = 0;
          *(undefined1 *)(piVar14 + 3) = 1;
          piVar14[4] = 0;
          piVar14[5] = 0;
          piVar14[6] = 0;
          *(undefined1 *)(piVar14 + 8) = 0;
        }
        local_7d4 = param_1;
        local_7c0 = CONCAT44(local_7c0._4_4_,piVar14);
        local_7d8 = (undefined ***)0x4fe0f4;
        (**(code **)(*piVar14 + 0xc))();
        local_7d8 = (undefined ***)0x4fe103;
        FUN_0068f390();
        ExceptionList = pvStack_18;
        return;
      case 0x946:
        local_7d4 = (undefined ***)0x4fdd80;
        ExceptionList = &local_14;
        FUN_0043a970();
        local_7d8 = param_1;
        local_7dc = (undefined *)0x4fdd8a;
        local_7d4 = (undefined ***)(in_ECX + 0x1580);
        FUN_00436e50();
        ExceptionList = local_14;
        return;
      case 0x950:
        local_7d8 = *(undefined ****)(in_ECX + 100);
        local_7d4 = param_1;
        local_7dc = (undefined *)0x4fdd0d;
        ExceptionList = &local_14;
        FUN_0043c9b0();
        ExceptionList = local_14;
        return;
      case 0x95b:
        local_77c = 0xf;
        local_780 = 0;
        local_790 = (undefined **)((uint)local_790._1_3_ << 8);
        local_7d4 = (undefined ***)0x0;
        local_7d8 = &local_790;
        local_c._0_1_ = 0x1f;
        local_c._1_3_ = 0;
        local_7dc = (undefined *)0x4fe149;
        ExceptionList = &local_14;
        FUN_009a1750();
        local_7c0 = CONCAT44(local_7c0._4_4_,&local_7ec);
        FUN_00401320();
        FUN_0043bb10();
        break;
      case 0x95c:
        local_77c = 0xf;
        local_780 = 0;
        local_790 = (undefined **)((uint)local_790._1_3_ << 8);
        local_7d4 = (undefined ***)0x0;
        local_7d8 = &local_790;
        local_c._0_1_ = 0x20;
        local_c._1_3_ = 0;
        local_7dc = (undefined *)0x4fe19b;
        ExceptionList = &local_14;
        FUN_009a1750();
        local_7c0 = CONCAT44(local_7c0._4_4_,&local_7ec);
        FUN_00401320();
        FUN_0043bb10();
        break;
      case 0x9ab:
        local_7d4 = (undefined ***)0x4fdd32;
        ExceptionList = &local_14;
        FUN_009a1d40();
        ExceptionList = local_14;
        return;
      }
    }
    else {
      switch(param_2) {
      case 0x9b6:
        local_7d4 = (undefined ***)0x4fe339;
        ExceptionList = &local_14;
        FUN_009a1d40();
        ExceptionList = local_14;
        return;
      case 0x9b7:
        local_7d4 = (undefined ***)0x4fe35e;
        ExceptionList = &local_14;
        FUN_009a1d40();
        ExceptionList = local_14;
        return;
      default:
        goto switchD_004fbced_caseD_1c5;
      case 0xa37:
        local_7d4 = (undefined ***)0x60;
        local_7d8 = (undefined ***)0x4fe22e;
        ExceptionList = &local_14;
        local_7d4 = (undefined ***)FUN_00aae9af();
        local_c = 0;
        if (local_7d4 == (undefined ***)0x0) {
          piVar14 = (int *)0x0;
        }
        else {
          local_7d8 = (undefined ***)0x4fe24a;
          local_7c0._0_4_ = (undefined ****)local_7d4;
          piVar14 = (int *)FUN_00446120();
        }
        local_c = 0xffffffff;
        local_7d4 = param_1;
        local_7c0 = CONCAT44(local_7c0._4_4_,piVar14);
        local_7d8 = (undefined ***)0x4fe26a;
        (**(code **)(*piVar14 + 0xc))();
        local_7d8 = (undefined ***)0x4fe279;
        FUN_0068f390();
        ExceptionList = pvStack_18;
        return;
      case 0xa45:
        local_7d4 = (undefined ***)0x0;
        local_7d8 = (undefined ***)(in_ECX + 0x15ec);
        local_7dc = (undefined *)0x4fe2e8;
        ExceptionList = &local_14;
        FUN_009a1750();
        ExceptionList = local_14;
        return;
      case 0xa58:
        local_77c = 0xf;
        local_780 = 0;
        local_790 = (undefined **)((uint)local_790._1_3_ << 8);
        local_7d4 = (undefined ***)0x0;
        local_7d8 = &local_790;
        local_c._0_1_ = 1;
        local_c._1_3_ = 0;
        local_7dc = (undefined *)0x4fe2bf;
        ExceptionList = &local_14;
        FUN_009a1750();
        local_7d4 = (undefined ***)0x4fe2ce;
        FUN_00a840b0();
        break;
      case 0xa73:
        local_7d4 = param_1;
        local_7d8 = (undefined ***)0x4fe3de;
        ExceptionList = &local_14;
        (**(code **)(**(int **)(*(int *)(in_ECX + 0x1234) + 0xc) + 0xc))();
        ExceptionList = pvStack_18;
        return;
      case 0xa74:
        local_7d4 = param_1;
        local_7d8 = (undefined ***)0x4fe3b3;
        ExceptionList = &local_14;
        (**(code **)(**(int **)(*(int *)(in_ECX + 0x1234) + 4) + 0xc))();
        ExceptionList = pvStack_18;
        return;
      case 0xa75:
        local_7d4 = param_1;
        local_7d8 = (undefined ***)0x4fe388;
        ExceptionList = &local_14;
        (**(code **)(*(int *)**(undefined4 **)(in_ECX + 0x1234) + 0xc))();
        ExceptionList = pvStack_18;
        return;
      case 0xa7c:
        local_7d4 = param_1;
        local_7d8 = (undefined ***)0x4fe314;
        ExceptionList = &local_14;
        (**(code **)(*(int *)(in_ECX + 0x1184) + 0xc))();
        ExceptionList = pvStack_18;
        return;
      }
    }
    goto LAB_004feadc;
  }
  if (param_2 == 0x678) {
    local_7d8 = (undefined ***)0xf;
    local_7dc = (undefined *)0x0;
    local_7c0 = CONCAT44(local_7c0._4_4_,&local_7ec);
    local_7ec = (undefined ***)((uint)local_7ec & 0xffffff00);
    pppuVar10 = param_1 + 0x8b;
    do {
      cVar5 = *(char *)pppuVar10;
      pppuVar10 = (undefined ***)((int)pppuVar10 + 1);
    } while (cVar5 != '\0');
    ExceptionList = &local_14;
    FUN_00409350(param_1 + 0x8b,(int)pppuVar10 - ((int)param_1 + 0x22d));
    FUN_0043bb10();
    ExceptionList = local_14;
    return;
  }
  if (0x2bf < param_2) {
    if (param_2 < 0x4e8) {
      if (param_2 == 0x4e7) {
        local_7d4 = *(undefined ****)(in_ECX + 0x20);
        local_7d8 = *(undefined ****)(in_ECX + 0x1c);
        local_7dc = (undefined *)0x4fcd8b;
        ExceptionList = &local_14;
        FUN_00579de0();
        local_7d4 = param_1;
        local_7d8 = (undefined ***)0x4fcd9a;
        (**(code **)((int)(undefined ****)local_7c0 + 0xc))();
        pppuVar10 = *(undefined ****)(in_ECX + 0x4c8);
        local_7d8 = (undefined ***)0x34;
        local_7dc = (undefined *)0x4fcda7;
        iVar13 = FUN_00aae9af();
        if (iVar13 == 0) {
          ppuVar8 = (undefined **)0x0;
        }
        else {
          local_7dc = (undefined *)0x4fcdb6;
          local_7d8 = pppuVar10;
          ppuVar8 = (undefined **)FUN_00548e90();
        }
        iVar13 = *(int *)(in_ECX + 0x4cc);
        *(undefined ***)(in_ECX + 0x4c8) = ppuVar8;
        *(int *)(in_ECX + 0x4cc) = iVar13 + 1;
        if (iVar13 == 0) {
          *(undefined ***)(in_ECX + 0x4c4) = ppuVar8;
          ExceptionList = pvStack_18;
          return;
        }
        pppuVar10[0xb] = ppuVar8;
        ExceptionList = pvStack_18;
        return;
      }
      if (param_2 < 0x3b4) {
        if (param_2 == 0x3b3) {
          local_7d4 = (undefined ***)0x4fcad0;
          ExceptionList = &local_14;
          FUN_009a1ce0();
          ExceptionList = local_14;
          return;
        }
        switch(param_2) {
        case 0x2cb:
          ExceptionList = &local_14;
          while( true ) {
            ppuVar8 = param_1[7];
            if (*(char *)(ppuVar8 + 0x44) == '\0') {
              local_7d4 = (undefined ***)0x4fc9e8;
              puVar9 = (undefined *)(**(code **)(*ppuVar8 + 4))();
              ppuVar8[2] = puVar9;
              if (puVar9 == (undefined *)0x0) {
                ppuVar8[3] = (undefined *)0x13;
              }
              *(undefined1 *)(ppuVar8 + 0x44) = 1;
            }
            ppuVar8 = ppuVar8 + 3;
            piVar14 = aiStack_500;
            for (iVar13 = 0x41; iVar13 != 0; iVar13 = iVar13 + -1) {
              *piVar14 = (int)*ppuVar8;
              ppuVar8 = ppuVar8 + 1;
              piVar14 = piVar14 + 1;
            }
            if ((aiStack_500[0] == 4) || (aiStack_500[0] == 0x13)) break;
            local_7d4 = (undefined ***)0x4fca30;
            (**(code **)(*param_1[7] + 4))();
            local_7d4 = (undefined ***)0x4fca3f;
            FUN_009885d0();
            local_c = 0x1c;
            local_7d8 = (undefined ***)0x4fca57;
            local_7d4 = (undefined ***)&local_7c0;
            iVar13 = FUN_00973bd0();
            local_7d4 = (undefined ***)0x4fca63;
            (**(code **)(*param_1[7] + 4))();
            local_7d4 = (undefined ***)0x4fca6d;
            (**(code **)(*param_1[7] + 4))();
            local_7d4 = param_1;
            local_7d8 = (undefined ***)0x4fca85;
            (**(code **)(*(int *)(*(int *)(in_ECX + 0x12a0) + *(int *)(iVar13 + 8) * 0x18) + 0xc))()
            ;
            local_c = 0xffffffff;
            local_7d4 = (undefined ***)0x4fca99;
            FUN_00408ad0();
          }
          goto LAB_004fca9e;
        case 0x2f3:
          local_7d4 = (undefined ***)0x1b8;
          DAT_00f09547 = DAT_0125873d;
          local_7d8 = (undefined ***)0x4fc7f8;
          ExceptionList = &local_14;
          iVar13 = FUN_00aae9af();
          local_7c0 = CONCAT44(local_7c0._4_4_,iVar13);
          local_c = 0xd;
          if (iVar13 == 0) {
            piVar14 = (int *)0x0;
          }
          else {
            local_7d4 = (undefined ***)0x4fc815;
            piVar14 = (int *)FUN_004460d0();
          }
          local_c = 0xffffffff;
          pcVar2 = *(code **)(*piVar14 + 0x6c);
          *(undefined1 *)(piVar14 + 0x12) = 1;
          local_7d4 = *(undefined ****)(in_ECX + 0xcdc);
          local_7d8 = (undefined ***)0x4fc83a;
          (*pcVar2)();
          local_7d8 = *(undefined ****)(in_ECX + 0x20);
          local_7dc = *(undefined **)(in_ECX + 0x1c);
          pppuStack_7e0 = (undefined ***)0x4fc847;
          FUN_005c93b0();
          local_7d8 = param_1;
          local_7dc = (undefined *)0x4fc856;
          (**(code **)(piVar14[2] + 0xc))();
          DAT_00f09547 = 1;
          local_7dc = (undefined *)0x4fc866;
          FUN_00513c80();
          ExceptionList = pvStack_1c;
          return;
        case 0x2f4:
          local_7d4 = (undefined ***)0x1c0;
          DAT_00f09547 = DAT_0125873d;
          local_7d8 = (undefined ***)0x4fc891;
          ExceptionList = &local_14;
          iVar13 = FUN_00aae9af();
          local_7c0 = CONCAT44(local_7c0._4_4_,iVar13);
          local_c = 0xf;
          if (iVar13 != 0) {
            local_7d4 = (undefined ***)0x4fc8b2;
            piVar14 = (int *)FUN_005d75b0();
            goto LAB_004fccec;
          }
LAB_004fccea:
          piVar14 = (int *)0x0;
LAB_004fccec:
          local_c = 0xffffffff;
          *(undefined1 *)(piVar14 + 0x12) = 1;
          local_7d4 = *(undefined ****)(in_ECX + 0xcdc);
          local_7d8 = (undefined ***)0x4fcd0b;
          (**(code **)(*piVar14 + 0x6c))();
          local_7d8 = *(undefined ****)(in_ECX + 0x20);
          local_7dc = *(undefined **)(in_ECX + 0x1c);
          pppuStack_7e0 = (undefined ***)0x4fcd18;
          FUN_005c93b0();
          local_7d8 = param_1;
          local_7dc = (undefined *)0x4fcd27;
          (**(code **)(piVar14[2] + 0xc))();
          DAT_00f09547 = 1;
          local_7dc = (undefined *)0x4fcd37;
          FUN_00513c80();
          ExceptionList = pvStack_1c;
          return;
        case 0x305:
          local_7c0 = CONCAT44(local_7c0._4_4_,&local_7ec);
          ExceptionList = &local_14;
          FUN_009885d0();
          FUN_0043bb10();
          ExceptionList = local_14;
          return;
        case 0x307:
          local_7d4 = (undefined ***)0x144;
          local_7d8 = (undefined ***)0x4fc8e8;
          ExceptionList = &local_14;
          local_7d4 = (undefined ***)FUN_00aae9af();
          local_7c0 = CONCAT44(local_7c0._4_4_,local_7d4);
          local_c = 0x10;
          if (local_7d4 == (undefined ***)0x0) {
            piVar14 = (int *)0x0;
          }
          else {
            local_7d8 = (undefined ***)0x4fc904;
            piVar14 = (int *)FUN_005b61c0();
          }
          local_c = 0xffffffff;
          iVar13 = *(int *)(in_ECX + 0xbd8);
          local_7d4 = (undefined ***)0x10;
          local_7d8 = (undefined ***)0x4fc922;
          puVar6 = (undefined4 *)FUN_00aae9af();
          if (puVar6 == (undefined4 *)0x0) {
            puVar6 = (undefined4 *)0x0;
          }
          else {
            *puVar6 = piVar14;
            puVar6[1] = iVar13;
            puVar6[2] = 0;
            *(undefined1 *)(puVar6 + 3) = 0;
          }
          iVar11 = *(int *)(in_ECX + 0xbdc);
          *(undefined4 **)(in_ECX + 0xbd8) = puVar6;
          *(int *)(in_ECX + 0xbdc) = iVar11 + 1;
          if (iVar11 == 0) {
            *(undefined4 **)(in_ECX + 0xbd4) = puVar6;
          }
          else {
            *(undefined4 **)(iVar13 + 8) = puVar6;
          }
          iVar13 = *(int *)(in_ECX + 0x20);
          piVar14[0x23] = *(int *)(in_ECX + 0x1c);
          pcVar2 = *(code **)(*piVar14 + 0xc);
          local_7d4 = param_1;
          piVar14[0x24] = iVar13;
          local_7d8 = (undefined ***)0x4fc980;
          (*pcVar2)();
          ExceptionList = pvStack_18;
          return;
        case 0x345:
          local_7d4 = (undefined ***)0x4fc797;
          ExceptionList = &local_14;
          uVar15 = FUN_009885d0();
          local_c = 6;
          local_7d4 = (undefined ***)0x4fc7a9;
          FUN_007e7540();
          local_7d8 = (undefined ***)0x4fc7af;
          local_7d4 = (undefined ***)uVar15;
          iVar13 = FUN_00973bd0();
          local_7d4 = (undefined ***)0x4fc7bd;
          FUN_00408ad0();
          if (iVar13 == 0) {
            ExceptionList = local_14;
            return;
          }
          *(int *)(in_ECX + 0xce0) = iVar13;
          ExceptionList = local_14;
          return;
        case 0x39f:
          local_7d4 = (undefined ***)0x4fc8c7;
          ExceptionList = &local_14;
          FUN_009a1ce0();
          ExceptionList = local_14;
          return;
        }
      }
      else if (param_2 < 0x473) {
        if (param_2 == 0x472) {
          local_7d4 = param_1;
          local_7c0 = 0x18d00dfba7c;
          local_7b8 = DAT_00f092fc;
          local_7b4 = DAT_00f092fc;
          local_7b0 = DAT_00f092fc;
          local_7ac = DAT_00f092fc;
          local_7a8 = 1;
          local_7d8 = (undefined ***)0x4fcc4f;
          ExceptionList = &local_14;
          FUN_009b6ea0();
          local_7d4 = (undefined ***)0x4fcc5e;
          FUN_0047b620();
          ExceptionList = local_14;
          return;
        }
        if (param_2 == 0x3b8) {
          local_7d4 = (undefined ***)0x10;
          local_7d8 = (undefined ***)0x4fcb65;
          ExceptionList = &local_14;
          iVar13 = FUN_00aae9af();
          if (iVar13 == 0) {
            piVar14 = (int *)0x0;
          }
          else {
            local_7d4 = (undefined ***)0x4fcb71;
            piVar14 = (int *)FUN_0044e210();
          }
          local_7d4 = param_1;
          local_7d8 = (undefined ***)0x4fcb84;
          (**(code **)(*piVar14 + 0xc))();
          if (piVar14[2] == 0) {
            local_7d4 = (undefined ***)0x1;
            local_7d8 = (undefined ***)0x4fcbf6;
            (**(code **)*piVar14)();
            ExceptionList = pvStack_18;
            return;
          }
          iVar13 = *(int *)(in_ECX + 0x4dc);
          local_7d4 = (undefined ***)0x10;
          local_7d8 = (undefined ***)0x4fcb97;
          piVar7 = (int *)FUN_00aae9af();
          if (piVar7 == (int *)0x0) {
            piVar7 = (int *)0x0;
          }
          else {
            *piVar7 = (int)piVar14;
            piVar7[1] = iVar13;
            piVar7[2] = 0;
            *(undefined1 *)(piVar7 + 3) = 0;
          }
          iVar11 = *(int *)(in_ECX + 0x4e0);
          *(int **)(in_ECX + 0x4dc) = piVar7;
          *(int *)(in_ECX + 0x4e0) = iVar11 + 1;
          if (iVar11 == 0) {
            *(int **)(in_ECX + 0x4d8) = piVar7;
            ExceptionList = local_14;
            return;
          }
          goto LAB_004fc12f;
        }
        if (param_2 == 0x3ed) {
          local_7d4 = (undefined ***)0x4fcb47;
          ExceptionList = &local_14;
          FUN_009a1ce0();
          ExceptionList = local_14;
          return;
        }
        if (param_2 == 0x40d) {
          local_7d4 = param_1;
          local_7d8 = (undefined ***)0x4fcb22;
          ExceptionList = &local_14;
          (**(code **)(*(int *)(in_ECX + 0x1d4) + 0xc))();
          ExceptionList = pvStack_18;
          return;
        }
      }
      else {
        if (param_2 == 0x49f) {
          local_7d4 = param_1;
          local_7d8 = (undefined ***)0x4fcd63;
          ExceptionList = &local_14;
          (**(code **)(*(int *)(in_ECX + 0x200) + 0xc))();
          ExceptionList = pvStack_18;
          return;
        }
        if (param_2 == 0x4cb) {
          local_7d4 = (undefined ***)0x1a4;
          DAT_00f09547 = DAT_0125873d;
          local_7d8 = (undefined ***)0x4fccc9;
          ExceptionList = &local_14;
          iVar13 = FUN_00aae9af();
          local_7c0 = CONCAT44(local_7c0._4_4_,iVar13);
          local_c = 0xe;
          if (iVar13 != 0) {
            local_7d4 = (undefined ***)0x4fcce6;
            piVar14 = (int *)FUN_005d8fa0();
            goto LAB_004fccec;
          }
          goto LAB_004fccea;
        }
        if (param_2 == 0x4e2) {
          local_7d4 = (undefined ***)0x4fcc9c;
          ExceptionList = &local_14;
          FUN_009a1ce0();
          ExceptionList = local_14;
          return;
        }
      }
    }
    else {
      if (0x576 < param_2) {
        switch(param_2) {
        case 0x5d7:
          local_7d4 = (undefined ***)(in_ECX + 0x120);
          local_7d8 = (undefined ***)0x4fd3c6;
          ExceptionList = &local_14;
          FUN_009a1bb0();
          ExceptionList = local_14;
          return;
        default:
          goto switchD_004fbced_caseD_1c5;
        case 0x5fa:
          local_7d4 = (undefined ***)(in_ECX + 0x658);
          local_7d8 = (undefined ***)0x4fd3a0;
          ExceptionList = &local_14;
          FUN_009a1bb0();
          ExceptionList = local_14;
          return;
        case 0x613:
          local_7d4 = (undefined ***)0x4fd37a;
          ExceptionList = &local_14;
          FUN_009a1ce0();
          ExceptionList = local_14;
          return;
        case 0x61e:
          local_7c0 = 0;
          local_7d4 = (undefined ***)0x4fd3f3;
          ExceptionList = &local_14;
          FUN_009a1d40();
          iVar13 = *(int *)(in_ECX + 0x20);
          puVar9 = DAT_012588e8[0x2f3][0x1fd];
          *(undefined *****)(puVar9 + iVar13 * 8) = (undefined ****)local_7c0;
          *(int *)(puVar9 + iVar13 * 8 + 4) = local_7c0._4_4_;
          ExceptionList = local_14;
          return;
        case 0x635:
          local_7d4 = (undefined ***)0x70;
          local_7d8 = (undefined ***)0x4fd2ad;
          ExceptionList = &local_14;
          iVar13 = FUN_00aae9af();
          local_c = 4;
          if (iVar13 == 0) {
            piVar14 = (int *)0x0;
          }
          else {
            local_7d4 = *(undefined ****)(in_ECX + 0x20);
            local_7d8 = *(undefined ****)(in_ECX + 0x1c);
            pppuStack_7e0 = (undefined ***)0x4fd2d1;
            local_7dc = (undefined *)iVar13;
            local_7c0._0_4_ = (undefined ****)iVar13;
            piVar14 = (int *)FUN_00977190();
          }
          local_c = 0xffffffff;
          local_7d4 = param_1;
          local_7c0 = CONCAT44(local_7c0._4_4_,piVar14);
          local_7d8 = (undefined ***)0x4fd2f3;
          (**(code **)(*piVar14 + 0xc))();
          local_7d4 = (undefined ***)0x4fd302;
          cVar5 = FUN_0048fee0();
          if (cVar5 != '\0') {
            ExceptionList = local_14;
            return;
          }
          iVar13 = *(int *)(in_ECX + 0x830);
          local_7d4 = (undefined ***)0x10;
          local_7d8 = (undefined ***)0x4fd317;
          piVar7 = (int *)FUN_00aae9af();
          if (piVar7 == (int *)0x0) {
            piVar7 = (int *)0x0;
          }
          else {
            *piVar7 = (int)piVar14;
            piVar7[1] = iVar13;
            piVar7[2] = 0;
            *(undefined1 *)(piVar7 + 3) = 0;
          }
          iVar11 = *(int *)(in_ECX + 0x834);
          *(int **)(in_ECX + 0x830) = piVar7;
          *(int *)(in_ECX + 0x834) = iVar11 + 1;
          if (iVar11 == 0) {
            *(int **)(in_ECX + 0x82c) = piVar7;
            ExceptionList = local_14;
            return;
          }
          break;
        case 0x636:
          local_7d4 = param_1 + 0x8b;
          local_7d8 = (undefined ***)0x4fd179;
          ExceptionList = &local_14;
          local_7d4 = (undefined ***)FUN_00aaf0c5();
          local_7c0 = CONCAT44(local_7c0._4_4_,&local_7d8);
          local_7d8 = (undefined ***)0x2d;
          local_7dc = (undefined *)0x4fd18e;
          iVar13 = FUN_009c16d0();
          if (iVar13 == 0) {
            ExceptionList = local_14;
            return;
          }
          *(int *)(in_ECX + 0x84c) = iVar13;
          ExceptionList = local_14;
          return;
        case 0x637:
          local_7d4 = param_1 + 0x8b;
          local_7d8 = (undefined ***)0x4fd1f0;
          ExceptionList = &local_14;
          local_7d4 = (undefined ***)FUN_00aaf0c5();
          local_7d8 = (undefined ***)0x2d;
          local_7dc = (undefined *)0x4fd205;
          local_7c0._0_4_ = &local_7d8;
          iVar11 = FUN_009c16d0();
          local_7c0 = CONCAT44(local_7c0._4_4_,iVar11);
          local_7d4 = (undefined ***)0x4fd21d;
          cVar5 = FUN_0048fee0();
          if (cVar5 == '\0') {
            ExceptionList = local_14;
            return;
          }
          if (iVar11 == 0) {
            ExceptionList = local_14;
            return;
          }
          local_7d4 = (undefined ***)0x4fd23c;
          cVar5 = FUN_0048fee0();
          if (cVar5 != '\0') {
            ExceptionList = local_14;
            return;
          }
          iVar13 = *(int *)(in_ECX + 0x840);
          local_7d4 = (undefined ***)0x10;
          local_7d8 = (undefined ***)0x4fd251;
          piVar7 = (int *)FUN_00aae9af();
          if (piVar7 == (int *)0x0) {
            piVar7 = (int *)0x0;
          }
          else {
            *piVar7 = iVar11;
            piVar7[1] = iVar13;
            piVar7[2] = 0;
            *(undefined1 *)(piVar7 + 3) = 0;
          }
          iVar11 = *(int *)(in_ECX + 0x844);
          *(int **)(in_ECX + 0x840) = piVar7;
          *(int *)(in_ECX + 0x844) = iVar11 + 1;
          if (iVar11 == 0) {
            *(int **)(in_ECX + 0x83c) = piVar7;
            ExceptionList = local_14;
            return;
          }
          break;
        case 0x63d:
          local_7d4 = param_1;
          local_7d8 = (undefined ***)0x4fd1cb;
          ExceptionList = &local_14;
          (**(code **)(*(int *)(in_ECX + 0x8b0) + 0xc))();
          ExceptionList = pvStack_18;
          return;
        case 0x663:
          goto switchD_004fd163_caseD_663;
        }
LAB_004fc12f:
        *(int **)(iVar13 + 8) = piVar7;
        ExceptionList = local_14;
        return;
      }
      ExceptionList = &local_14;
      if (param_2 == 0x576) {
        while( true ) {
          ppuVar8 = param_1[7];
          if (*(char *)(ppuVar8 + 0x44) == '\0') {
            local_7d4 = (undefined ***)0x4fd01a;
            puVar9 = (undefined *)(**(code **)(*ppuVar8 + 4))();
            ppuVar8[2] = puVar9;
            if (puVar9 == (undefined *)0x0) {
              ppuVar8[3] = (undefined *)0x13;
            }
            *(undefined1 *)(ppuVar8 + 0x44) = 1;
          }
          ppuVar8 = ppuVar8 + 3;
          piVar14 = aiStack_500;
          for (iVar13 = 0x41; iVar13 != 0; iVar13 = iVar13 + -1) {
            *piVar14 = (int)*ppuVar8;
            ppuVar8 = ppuVar8 + 1;
            piVar14 = piVar14 + 1;
          }
          if ((aiStack_500[0] == 4) || (aiStack_500[0] == 0x13)) break;
          local_7d4 = param_1;
          local_7d8 = (undefined ***)0x4fd062;
          FUN_009a1440();
          local_7d8 = param_1 + 9;
          uStack_6ec = 0xf;
          uStack_6f0 = 0;
          auStack_700[0] = auStack_700[0] & 0xffffff00;
          pppuVar10 = local_7d8;
          do {
            cVar5 = *(char *)pppuVar10;
            pppuVar10 = (undefined ***)((int)pppuVar10 + 1);
          } while (cVar5 != '\0');
          local_7d4 = (undefined ***)((int)pppuVar10 - ((int)param_1 + 0x25));
          local_7dc = (undefined *)0x4fd0a7;
          FUN_00409350();
          local_c = 0x13;
          local_7d4 = (undefined ***)0x4fd0b7;
          FUN_005c1a10();
          local_7d4 = (undefined ***)auStack_700;
          local_7d8 = (undefined ***)0x4fd0c4;
          iVar13 = FUN_005c2ad0();
          local_c = 0xffffffff;
          if (0xf < uStack_6ec) {
            local_7d4 = (undefined ***)auStack_700[0];
                    /* WARNING: Subroutine does not return */
            local_7d8 = (undefined ***)&UNK_004fd0e8;
            FUN_00aae91b();
          }
          uStack_6ec = 0xf;
          uStack_6f0 = 0;
          auStack_700[0] = auStack_700[0] & 0xffffff00;
          if (iVar13 != 0) {
            local_7d4 = (undefined ***)(*(int *)(iVar13 + 0x24) * 0x10 + *(int *)(in_ECX + 0x994));
            local_7d8 = param_1;
            local_7dc = (undefined *)0x4fd123;
            FUN_0045be80();
          }
        }
LAB_004fd128:
        local_7d4 = (undefined ***)0x4fd135;
        (**(code **)(*param_1[7] + 4))();
        ExceptionList = local_14;
        return;
      }
      switch(param_2) {
      case 0x4e9:
        local_7d4 = (undefined ***)0x30;
        local_7d8 = (undefined ***)0x4fce99;
        ExceptionList = &local_14;
        piVar14 = (int *)FUN_00aae9af();
        if (piVar14 == (int *)0x0) {
          piVar14 = (int *)0x0;
        }
        else {
          piVar14[1] = 0x18d;
          *piVar14 = (int)CPopMovement::vftable;
          piVar14[2] = 0;
          piVar14[3] = 0;
          piVar14[4] = 0x2d2d2d;
          piVar14[5] = 0;
          piVar14[6] = 0;
          piVar14[7] = 0;
          piVar14[8] = 0;
          piVar14[9] = 0;
          piVar14[10] = 0;
        }
        local_7d4 = param_1;
        local_7c0 = CONCAT44(local_7c0._4_4_,piVar14);
        local_7d8 = (undefined ***)0x4fceef;
        (**(code **)(*piVar14 + 0xc))();
        if ((int *)piVar14[3] != (int *)0x0) {
          local_7d8 = (undefined ***)0x4fcefd;
          cVar5 = (**(code **)(*(int *)piVar14[3] + 0x34))();
          if (cVar5 != '\0') {
            local_7d8 = (undefined ***)0x4fcf0b;
            iVar13 = FUN_00540e40();
            goto LAB_004fcf0b;
          }
        }
        local_7d8 = (undefined ***)(piVar14 + 4);
        local_7dc = (undefined *)0x4fcf40;
        iVar13 = FUN_00540e80();
LAB_004fcf0b:
        if (iVar13 != 0) {
          local_7d8 = (undefined ***)0x1;
          local_7dc = (undefined *)0x4fcf4c;
          (**(code **)*piVar14)();
          ExceptionList = pvStack_1c;
          return;
        }
        local_7d8 = (undefined ***)0x4fcf1e;
        FUN_0068f390();
        ExceptionList = pvStack_18;
        return;
      case 0x4f0:
        local_7d4 = (undefined ***)0x4fce6a;
        ExceptionList = &local_14;
        FUN_009a1d40();
        *(undefined4 *)(in_ECX + 0xe80) = *(undefined4 *)(in_ECX + 0xe78);
        *(undefined4 *)(in_ECX + 0xe84) = *(undefined4 *)(in_ECX + 0xe7c);
        ExceptionList = local_14;
        return;
      case 0x508:
        local_7d4 = (undefined ***)0x4fce45;
        ExceptionList = &local_14;
        FUN_009a1d40();
        ExceptionList = local_14;
        return;
      case 0x50e:
        ExceptionList = &local_14;
        while( true ) {
          ppuVar8 = param_1[7];
          if (*(char *)(ppuVar8 + 0x44) == '\0') {
            local_7d4 = (undefined ***)0x4fcf85;
            puVar9 = (undefined *)(**(code **)(*ppuVar8 + 4))();
            ppuVar8[2] = puVar9;
            if (puVar9 == (undefined *)0x0) {
              ppuVar8[3] = (undefined *)0x13;
            }
            *(undefined1 *)(ppuVar8 + 0x44) = 1;
          }
          ppuVar8 = ppuVar8 + 3;
          piVar14 = aiStack_500;
          for (iVar13 = 0x41; iVar13 != 0; iVar13 = iVar13 + -1) {
            *piVar14 = (int)*ppuVar8;
            ppuVar8 = ppuVar8 + 1;
            piVar14 = piVar14 + 1;
          }
          if ((aiStack_500[0] == 4) || (aiStack_500[0] == 0x13)) break;
          local_7d4 = param_1;
          local_7d8 = (undefined ***)0x4fcfcd;
          FUN_009a1440();
          local_7d4 = param_1 + 9;
          local_7d8 = (undefined ***)&local_7c0;
          local_7dc = (undefined *)DAT_012587e4;
          pppuStack_7e0 = (undefined ***)0x4fcfe1;
          FUN_0055c6c0();
          local_7d4 = param_1 + 0x8b;
          local_7d8 = (undefined ***)0x4fcfed;
          uVar15 = FUN_00aaf0c5();
          *(undefined4 *)(*(int *)(in_ECX + 0x13f0) + local_7c0._4_4_ * 4) = uVar15;
        }
        goto LAB_004fd128;
      }
    }
switchD_004fbced_caseD_1c5:
    pppuVar10 = param_1 + 9;
    local_7c0 = CONCAT44(local_7c0._4_4_,pppuVar10);
    local_760 = 0xf;
    local_764 = 0;
    local_774[0] = local_774[0] & 0xffffff00;
    pppuVar12 = pppuVar10;
    do {
      cVar5 = *(char *)pppuVar12;
      pppuVar12 = (undefined ***)((int)pppuVar12 + 1);
    } while (cVar5 != '\0');
    local_7d4 = (undefined ***)((int)pppuVar12 - ((int)param_1 + 0x25));
    local_7dc = (undefined *)0x4fe434;
    ExceptionList = &local_14;
    local_7d8 = pppuVar10;
    FUN_00409350();
    local_7d8 = &local_798;
    local_c._0_1_ = 0x21;
    local_c._1_3_ = 0;
    local_7dc = (undefined *)DAT_012587e4;
    pppuStack_7e0 = (undefined ***)0x4fe451;
    local_7d4 = pppuVar10;
    FUN_0055c6c0();
    if (local_794 != 0) {
      local_7d4 = param_1;
      local_7d8 = (undefined ***)0x4fe46a;
      (**(code **)(**(int **)(*(int *)(in_ECX + 0xbe8) + local_794 * 4) + 0xc))();
      local_7d4 = (undefined ***)0x4fe478;
      iVar13 = FUN_009311f0();
      if (iVar13 == 5) {
        local_7d8 = (undefined ***)0x4fe487;
        FUN_00533e50();
      }
      if (local_760 < 0x10) {
        ExceptionList = local_14;
        return;
      }
      local_7d4 = (undefined ***)local_774[0];
                    /* WARNING: Subroutine does not return */
      local_7d8 = (undefined ***)&UNK_004fe49c;
      FUN_00aae91b();
    }
    local_7d4 = (undefined ***)0x4fe4bb;
    FUN_00971910();
    local_7d4 = (undefined ***)local_774;
    local_7d8 = (undefined ***)0x4fe4c5;
    piVar14 = (int *)FUN_009721b0();
    if (piVar14 != (int *)0x0) {
      local_7d4 = (undefined ***)0x4fe4d4;
      cVar5 = (**(code **)(*piVar14 + 0x2c))();
      if (cVar5 != '\0') {
        local_7d4 = param_1;
        uStack_78c = 0x18d;
        local_790 = CColor::vftable;
        uStack_788 = DAT_00f092fc;
        uStack_784 = DAT_00f092fc;
        local_780 = DAT_00f092fc;
        local_77c = DAT_00f092fc;
        uStack_778 = 1;
        local_7d8 = (undefined ***)0x4fe518;
        FUN_009b6ea0();
        local_7d4 = (undefined ***)&local_7c0;
        local_7c0 = CONCAT44(local_7c0._4_4_,piVar14[0x10]);
        local_7d8 = (undefined ***)0x4fe534;
        FUN_00549af0();
        local_7d4 = (undefined ***)0x4fe542;
        FUN_0054a870();
        goto LAB_004feadc;
      }
    }
    local_7d4 = (undefined ***)local_774;
    local_7d8 = (undefined ***)0x4fe559;
    local_798 = (undefined **)FUN_004a2f70();
    if (local_798 == (undefined **)0x0) {
      local_798 = DAT_0131be94;
    }
    if (local_798 == (undefined **)0x0) {
LAB_004fea15:
      local_7d4 = (undefined ***)0x4fea26;
      FUN_009885d0();
      local_7d4 = (undefined ***)0x10004;
      local_7d8 = (undefined ***)0x649;
      local_c._0_1_ = 0x2e;
      pppuStack_7e0 = (undefined ***)0x4fea47;
      local_7dc = auStack_688;
      FUN_004015b0();
      local_c._0_1_ = 0x2f;
      pppuVar12 = (undefined ***)param_1[7][1];
      ppuVar8 = pppuVar12[2];
      local_7d4 = (undefined ***)0xdfe304;
      local_7dc = (undefined *)(undefined ****)local_7c0;
      pppuVar10 = pppuVar12 + 5;
      pppuStack_7e0 = (undefined ***)0x4fea75;
      local_7d8 = pppuVar12;
      pppuStack_7e0 = (undefined ***)FUN_00987d20();
      pcStack_7e4 = (char *)0x4fea7b;
      local_7d8 = (undefined ***)FUN_00418e30();
      local_7dc = (undefined *)0x4fea84;
      local_7d8 = (undefined ***)FUN_00418e30();
      if ((undefined **)0xf < pppuVar12[10]) {
        pppuVar10 = (undefined ***)*pppuVar10;
      }
      local_7dc = (undefined *)0x4fea96;
      local_7d4 = pppuVar10;
      pppuStack_7e0 = (undefined ***)FUN_00418e30();
      local_7dc = &DAT_00dfe300;
      pcStack_7e4 = (char *)0x4feaa6;
      local_7d4 = (undefined ***)ppuVar8;
      local_7d8 = (undefined ***)FUN_00418e30();
      local_7dc = (undefined *)0x4feaaf;
      local_7d4 = (undefined ***)FUN_00455470();
      local_7d8 = (undefined ***)0x4feab5;
      FUN_00401280();
      local_c._0_1_ = 0x2e;
      local_7d4 = (undefined ***)0x4feacc;
      FUN_00401650();
LAB_004fead3:
      local_7d4 = (undefined ***)0x4fead8;
      FUN_00408ad0();
    }
    else {
      puVar9 = local_798[0x17];
      if (puVar9 == (undefined *)0x2) {
        local_7d4 = (undefined ***)0x4fe590;
        local_7d4 = (undefined ***)FUN_009885d0();
        local_c = CONCAT31(local_c._1_3_,0x22);
        local_7d8 = (undefined ***)0x4fe5a3;
        iVar13 = FUN_00975ed0();
        if (iVar13 == 0) {
          local_7d4 = (undefined ***)0x4fe5ac;
          iVar13 = FUN_00974850();
        }
        local_c._0_1_ = 0x21;
        local_7d4 = (undefined ***)0x4fe5c2;
        FUN_00408ad0();
        if ((iVar13 == 0) || (*(undefined ***)(iVar13 + 0x54) != local_798)) {
          local_7d4 = (undefined ***)0x4fe5f1;
          FUN_009885d0();
          local_7d4 = (undefined ***)0x10004;
          local_7d8 = (undefined ***)0x623;
          local_c._0_1_ = 0x23;
          pppuStack_7e0 = (undefined ***)0x4fe613;
          local_7dc = auStack_6dc;
          FUN_004015b0();
          local_c._0_1_ = 0x24;
          pppuStack_7e8 = (undefined ***)param_1[7][1];
          local_7d4 = (undefined ***)pppuStack_7e8[2];
          local_7dc = &DAT_00dfe300;
          pcStack_7e4 = "\'<==  in country file ";
          local_7ec = param_1 + 0x8b;
          pppuStack_7e0 = pppuStack_7e8;
          local_7d8 = pppuStack_7e8;
          uVar15 = FUN_00987d20();
          pppuStack_7e8 = (undefined ***)FUN_00418e30(uVar15);
          local_7ec = (undefined ***)0x4fe658;
          local_7ec = (undefined ***)FUN_00418e30();
          pppuStack_7e0 = (undefined ***)FUN_00989050();
          pcStack_7e4 = (char *)0x4fe669;
          local_7d8 = (undefined ***)FUN_00418e30();
          local_7dc = (undefined *)0x4fe672;
          local_7d4 = (undefined ***)FUN_00455470();
          local_7d8 = (undefined ***)0x4fe678;
          FUN_00401280();
          local_c._0_1_ = 0x23;
          local_7d4 = (undefined ***)0x4fe68e;
          FUN_00401650();
          goto LAB_004fead3;
        }
        *(int *)(*(int *)(in_ECX + 0x860) + (int)local_798[0x14] * 4) = iVar13;
      }
      else if (puVar9 == (undefined *)0x3) {
        local_7d4 = (undefined ***)0x4fe6b9;
        local_7d4 = (undefined ***)FUN_009885d0();
        local_c = CONCAT31(local_c._1_3_,0x25);
        local_7d8 = (undefined ***)0x4fe6cc;
        iVar13 = FUN_00975ed0();
        if (iVar13 == 0) {
          local_7d4 = (undefined ***)0x4fe6d5;
          iVar13 = FUN_00974850();
        }
        local_c._0_1_ = 0x21;
        local_7d4 = (undefined ***)0x4fe6eb;
        FUN_00408ad0();
        if ((iVar13 == 0) || (*(undefined ***)(iVar13 + 0x54) != local_798)) {
          local_7d4 = (undefined ***)0x4fe71a;
          FUN_009885d0();
          local_7d4 = (undefined ***)0x10004;
          local_7d8 = (undefined ***)0x62e;
          local_c._0_1_ = 0x26;
          pppuStack_7e0 = (undefined ***)0x4fe73c;
          local_7dc = auStack_6a4;
          FUN_004015b0();
          local_c._0_1_ = 0x27;
          pppuStack_7e8 = (undefined ***)param_1[7][1];
          local_7d4 = (undefined ***)pppuStack_7e8[2];
          local_7dc = &DAT_00dfe300;
          pcStack_7e4 = "\'<==  in country file ";
          local_7ec = param_1 + 0x8b;
          pppuStack_7e0 = pppuStack_7e8;
          local_7d8 = pppuStack_7e8;
          uVar15 = FUN_00987d20();
          pppuStack_7e8 = (undefined ***)FUN_00418e30(uVar15);
          local_7ec = (undefined ***)0x4fe781;
          local_7ec = (undefined ***)FUN_00418e30();
          pppuStack_7e0 = (undefined ***)FUN_00989050();
          pcStack_7e4 = (char *)0x4fe792;
          local_7d8 = (undefined ***)FUN_00418e30();
          local_7dc = (undefined *)0x4fe79b;
          local_7d4 = (undefined ***)FUN_00455470();
          local_7d8 = (undefined ***)0x4fe7a1;
          FUN_00401280();
          local_c._0_1_ = 0x26;
          local_7d4 = (undefined ***)0x4fe7b7;
          FUN_00401650();
          goto LAB_004fead3;
        }
        *(int *)(*(int *)(in_ECX + 0x850) + (int)local_798[0x14] * 4) = iVar13;
      }
      else if (puVar9 == (undefined *)0x5) {
        local_7d4 = (undefined ***)0x4fe7e2;
        local_7d4 = (undefined ***)FUN_009885d0();
        local_c = CONCAT31(local_c._1_3_,0x28);
        local_7d8 = (undefined ***)0x4fe7f5;
        iVar13 = FUN_00975ed0();
        if (iVar13 == 0) {
          local_7d4 = (undefined ***)0x4fe7fe;
          iVar13 = FUN_00974850();
        }
        local_c._0_1_ = 0x21;
        local_7d4 = (undefined ***)0x4fe814;
        FUN_00408ad0();
        if ((iVar13 == 0) || (*(undefined ***)(iVar13 + 0x54) != local_798)) {
          local_7d4 = (undefined ***)0x4fe843;
          FUN_009885d0();
          local_7d4 = (undefined ***)0x10004;
          local_7d8 = (undefined ***)0x639;
          local_c._0_1_ = 0x29;
          pppuStack_7e0 = (undefined ***)0x4fe865;
          local_7dc = auStack_66c;
          FUN_004015b0();
          local_c._0_1_ = 0x2a;
          pppuStack_7e8 = (undefined ***)param_1[7][1];
          local_7d4 = (undefined ***)pppuStack_7e8[2];
          local_7dc = &DAT_00dfe300;
          pcStack_7e4 = "\'<==  in country file ";
          local_7ec = param_1 + 0x8b;
          pppuStack_7e0 = pppuStack_7e8;
          local_7d8 = pppuStack_7e8;
          uVar15 = FUN_00987d20();
          pppuStack_7e8 = (undefined ***)FUN_00418e30(uVar15);
          local_7ec = (undefined ***)0x4fe8aa;
          local_7ec = (undefined ***)FUN_00418e30();
          pppuStack_7e0 = (undefined ***)FUN_00989050();
          pcStack_7e4 = (char *)0x4fe8bb;
          local_7d8 = (undefined ***)FUN_00418e30();
          local_7dc = (undefined *)0x4fe8c4;
          local_7d4 = (undefined ***)FUN_00455470();
          local_7d8 = (undefined ***)0x4fe8ca;
          FUN_00401280();
          local_c._0_1_ = 0x29;
          local_7d4 = (undefined ***)0x4fe8e0;
          FUN_00401650();
          goto LAB_004fead3;
        }
        *(int *)(*(int *)(in_ECX + 0x870) + (int)local_798[0x14] * 4) = iVar13;
      }
      else {
        if (puVar9 != (undefined *)0x4) goto LAB_004fea15;
        local_7d4 = (undefined ***)0x4fe90b;
        local_7d4 = (undefined ***)FUN_009885d0();
        local_c = CONCAT31(local_c._1_3_,0x2b);
        local_7d8 = (undefined ***)0x4fe91e;
        iVar13 = FUN_00975ed0();
        if (iVar13 == 0) {
          local_7d4 = (undefined ***)0x4fe927;
          iVar13 = FUN_00974850();
        }
        local_c._0_1_ = 0x21;
        local_7d4 = (undefined ***)0x4fe93d;
        FUN_00408ad0();
        if ((iVar13 == 0) || (*(undefined ***)(iVar13 + 0x54) != local_798)) {
          local_7d4 = (undefined ***)0x4fe96c;
          FUN_009885d0();
          local_7d4 = (undefined ***)0x10004;
          local_7d8 = (undefined ***)0x644;
          local_c._0_1_ = 0x2c;
          pppuStack_7e0 = (undefined ***)0x4fe98d;
          local_7dc = auStack_6c0;
          FUN_004015b0();
          local_c._0_1_ = 0x2d;
          pppuStack_7e8 = (undefined ***)param_1[7][1];
          local_7d4 = (undefined ***)pppuStack_7e8[2];
          local_7dc = &DAT_00dfe300;
          pcStack_7e4 = "\'<==  in country file ";
          local_7ec = param_1 + 0x8b;
          pppuStack_7e0 = pppuStack_7e8;
          local_7d8 = pppuStack_7e8;
          uVar15 = FUN_00987d20();
          pppuStack_7e8 = (undefined ***)FUN_00418e30(uVar15);
          local_7ec = (undefined ***)0x4fe9d2;
          local_7ec = (undefined ***)FUN_00418e30();
          pppuStack_7e0 = (undefined ***)FUN_00989050();
          pcStack_7e4 = (char *)0x4fe9e3;
          local_7d8 = (undefined ***)FUN_00418e30();
          local_7dc = (undefined *)0x4fe9ec;
          local_7d4 = (undefined ***)FUN_00455470();
          local_7d8 = (undefined ***)0x4fe9f2;
          FUN_00401280();
          local_c._0_1_ = 0x2c;
          local_7d4 = (undefined ***)0x4fea09;
          FUN_00401650();
          goto LAB_004fead3;
        }
        *(int *)(*(int *)(in_ECX + 0x880) + (int)local_798[0x14] * 4) = iVar13;
      }
    }
    goto LAB_004feadc;
  }
  if (param_2 == 0x2bf) {
    local_7d4 = (undefined ***)0x4fc6e4;
    ExceptionList = &local_14;
    uVar15 = FUN_009885d0();
    local_c = 0xc;
    local_7d4 = (undefined ***)0x4fc6f6;
    FUN_00971910();
    local_7d8 = (undefined ***)0x4fc6fc;
    local_7d4 = (undefined ***)uVar15;
    iVar13 = FUN_009721b0();
    local_c = 0xffffffff;
    local_7d4 = (undefined ***)0x4fc715;
    FUN_00408ad0();
    if (iVar13 == 0) {
      ExceptionList = local_14;
      return;
    }
    local_7d4 = (undefined ***)0x0;
    local_7d8 = (undefined ***)0x0;
    local_7dc = (undefined *)0x0;
    pcStack_7e4 = (char *)0x4fc72b;
    pppuStack_7e0 = (undefined ***)iVar13;
    FUN_00513a90();
    ExceptionList = local_14;
    return;
  }
  if (param_2 < 0x1c0) {
    if (param_2 == 0x1bf) {
      local_7d4 = (undefined ***)0x4fbcbf;
      ExceptionList = &local_14;
      FUN_009a1ce0();
      ExceptionList = local_14;
      return;
    }
    if (param_2 == 0x55) {
      local_7d4 = param_1;
      local_7d8 = (undefined ***)0x4fbc82;
      ExceptionList = &local_14;
      (**(code **)(*(int *)(in_ECX + 0x920) + 0xc))();
      local_7d8 = (undefined ***)0x4fbc93;
      FUN_0047b620();
      *(undefined1 *)(in_ECX + 0x93c) = 1;
      ExceptionList = pvStack_18;
      return;
    }
    goto switchD_004fbced_caseD_1c5;
  }
  ExceptionList = &local_14;
  ppvVar4 = &local_14;
  switch(param_2) {
  case 0x1c2:
    local_7d4 = param_1;
    local_7d8 = (undefined ***)(in_ECX + 0x4f8);
    local_7dc = (undefined *)0x4fc03f;
    ExceptionList = &local_14;
    FUN_00501c40();
    ExceptionList = local_14;
    return;
  case 0x1c3:
    local_7d4 = param_1;
    local_7d8 = (undefined ***)(in_ECX + 0x508);
    local_7dc = (undefined *)0x4fc066;
    ExceptionList = &local_14;
    FUN_00501c40();
    ExceptionList = local_14;
    return;
  case 0x1c4:
    local_7d4 = param_1;
    local_7d8 = (undefined ***)(in_ECX + 0x518);
    local_7dc = (undefined *)0x4fc08d;
    ExceptionList = &local_14;
    FUN_00501c40();
    ExceptionList = local_14;
    return;
  default:
    goto switchD_004fbced_caseD_1c5;
  case 0x1c9:
    local_77c = 0xf;
    local_780 = 0;
    local_790 = (undefined **)((uint)local_790 & 0xffffff00);
    local_7d4 = (undefined ***)0x0;
    local_7d8 = &local_790;
    local_c._0_1_ = 5;
    local_c._1_3_ = 0;
    local_7dc = (undefined *)0x4fbd84;
    ExceptionList = &local_14;
    FUN_009a1750();
    local_7d4 = (undefined ***)0x4fbd89;
    FUN_00576f80();
    local_7d4 = &local_790;
    local_7d8 = (undefined ***)0x4fbd98;
    iVar13 = FUN_005661b0();
    if (iVar13 != 0) {
      *(undefined4 *)(in_ECX + 0xe40) = *(undefined4 *)(iVar13 + 0x4c);
    }
    break;
  case 0x1ca:
    local_7d4 = (undefined ***)0x290;
    local_7d8 = (undefined ***)0x4fc0ae;
    ExceptionList = &local_14;
    iVar13 = FUN_00aae9af();
    local_7c0 = CONCAT44(local_7c0._4_4_,iVar13);
    local_c = 0x11;
    if (iVar13 == 0) {
      piVar14 = (int *)0x0;
    }
    else {
      local_7d4 = (undefined ***)0x0;
      local_7d8 = (undefined ***)(in_ECX + 0x1c);
      pppuStack_7e0 = (undefined ***)0x4fc0d0;
      local_7dc = (undefined *)iVar13;
      piVar14 = (int *)FUN_004cdc60();
    }
    local_c = 0xffffffff;
    local_7d4 = param_1;
    local_7d8 = (undefined ***)0x4fc0ee;
    (**(code **)(*piVar14 + 0xc))();
    iVar13 = *(int *)(in_ECX + 0xe48);
    local_7d4 = (undefined ***)0x10;
    local_7d8 = (undefined ***)0x4fc0fb;
    piVar7 = (int *)FUN_00aae9af();
    if (piVar7 == (int *)0x0) {
      piVar7 = (int *)0x0;
    }
    else {
      *piVar7 = (int)piVar14;
      piVar7[1] = iVar13;
      piVar7[2] = 0;
      *(undefined1 *)(piVar7 + 3) = 0;
    }
    iVar11 = *(int *)(in_ECX + 0xe4c);
    *(int **)(in_ECX + 0xe48) = piVar7;
    *(int *)(in_ECX + 0xe4c) = iVar11 + 1;
    if (iVar11 == 0) {
      *(int **)(in_ECX + 0xe44) = piVar7;
      ExceptionList = local_14;
      return;
    }
    goto LAB_004fc12f;
  case 0x1e3:
    local_7d4 = param_1;
    local_7d8 = (undefined ***)0x4fc177;
    ExceptionList = &local_14;
    (**(code **)(**(int **)(in_ECX + 0xe88) + 0xc))();
    ExceptionList = pvStack_18;
    return;
  case 0x21a:
    while( true ) {
      ppuVar8 = param_1[7];
      if (*(char *)(ppuVar8 + 0x44) == '\0') {
        local_7d4 = (undefined ***)0x4fc3f9;
        puVar9 = (undefined *)(**(code **)(*ppuVar8 + 4))();
        ppuVar8[2] = puVar9;
        if (puVar9 == (undefined *)0x0) {
          ppuVar8[3] = (undefined *)0x13;
        }
        *(undefined1 *)(ppuVar8 + 0x44) = 1;
      }
      ppuVar8 = ppuVar8 + 3;
      piVar14 = aiStack_500;
      for (iVar13 = 0x41; iVar13 != 0; iVar13 = iVar13 + -1) {
        *piVar14 = (int)*ppuVar8;
        ppuVar8 = ppuVar8 + 1;
        piVar14 = piVar14 + 1;
      }
      if ((aiStack_500[0] == 4) || (aiStack_500[0] == 0x13)) break;
      local_7d4 = param_1;
      local_7d8 = (undefined ***)0x4fc441;
      FUN_009a1440();
      local_7d4 = param_1 + 9;
      local_7d8 = (undefined ***)0x4fc44a;
      iVar13 = FUN_00aaf0c5();
      local_7d4 = (undefined ***)0x4fc463;
      FUN_009885d0();
      local_c = 0x1d;
      local_7d4 = (undefined ***)0x4fc473;
      FUN_00565b70();
      local_7d8 = (undefined ***)0x4fc47b;
      local_7d4 = (undefined ***)auStack_650;
      local_798 = (undefined **)FUN_005661b0();
      if (local_798 == (undefined **)0x0) {
        local_798 = DAT_01258804;
      }
      local_c = 0xffffffff;
      local_7d4 = (undefined ***)0x4fc4a6;
      FUN_00408ad0();
      iVar13 = *(int *)(*(int *)(DAT_0125870c + 0x2a88) + iVar13 * 4);
      if (iVar13 != 0) {
        if (local_798[0x3b] == (undefined *)0x0) {
          piVar14 = *(int **)(iVar13 + 8);
          bVar3 = false;
          local_7c0 = CONCAT44(local_7c0._4_4_,piVar14);
          while ((piVar14 != (int *)0x0 && (!bVar3))) {
            local_7d4 = (undefined ***)*piVar14;
            bVar3 = false;
            if (*(int *)(*(int *)(*(int *)(*(int *)(DAT_012588dc + 0x20d8) + (int)local_7d4 * 4) +
                                 0xc) + 300) == *(int *)(in_ECX + 0x20)) {
              local_7dc = (undefined *)0x4fc521;
              local_7d8 = DAT_012588e8;
              FUN_0068dc10();
              iVar11 = *(int *)(in_ECX + 0x1490);
              local_7d4 = (undefined ***)0x10;
              local_7d8 = (undefined ***)0x4fc52e;
              piVar14 = (int *)FUN_00aae9af();
              if (piVar14 == (int *)0x0) {
                piVar14 = (int *)0x0;
              }
              else {
                *piVar14 = iVar13;
                piVar14[1] = iVar11;
                piVar14[2] = 0;
                *(undefined1 *)(piVar14 + 3) = 0;
              }
              iVar1 = *(int *)(in_ECX + 0x1494);
              *(int **)(in_ECX + 0x1490) = piVar14;
              *(int *)(in_ECX + 0x1494) = iVar1 + 1;
              if (iVar1 == 0) {
                *(int **)(in_ECX + 0x148c) = piVar14;
              }
              else {
                *(int **)(iVar11 + 8) = piVar14;
              }
              bVar3 = true;
              piVar14 = (int *)(undefined ****)local_7c0;
            }
            piVar14 = (int *)piVar14[2];
            local_7c0 = CONCAT44(local_7c0._4_4_,piVar14);
          }
        }
        else {
          local_7d4 = (undefined ***)**(undefined4 **)(iVar13 + 8);
          local_7d8 = DAT_012588e8;
          local_7dc = (undefined *)0x4fc5a4;
          FUN_0068dc10();
          iVar11 = *(int *)(in_ECX + 0x1490);
          local_7d4 = (undefined ***)0x10;
          local_7d8 = (undefined ***)0x4fc5b1;
          piVar14 = (int *)FUN_00aae9af();
          if (piVar14 == (int *)0x0) {
            piVar14 = (int *)0x0;
          }
          else {
            *piVar14 = iVar13;
            piVar14[1] = iVar11;
            piVar14[2] = 0;
            *(undefined1 *)(piVar14 + 3) = 0;
          }
          iVar13 = *(int *)(in_ECX + 0x1494);
          *(int **)(in_ECX + 0x1490) = piVar14;
          *(int *)(in_ECX + 0x1494) = iVar13 + 1;
          if (iVar13 == 0) {
            *(int **)(in_ECX + 0x148c) = piVar14;
          }
          else {
            *(int **)(iVar11 + 8) = piVar14;
          }
        }
      }
    }
    goto LAB_004fca9e;
  case 0x21b:
    local_7d4 = (undefined ***)0x18;
    local_7d8 = (undefined ***)0x4fbcfb;
    ExceptionList = &local_14;
    piVar14 = (int *)FUN_00aae9af();
    if (piVar14 == (int *)0x0) {
      piVar14 = (int *)0x0;
    }
    else {
      piVar14[1] = 0x18d;
      *piVar14 = (int)CRailroadChunk::vftable;
      piVar14[2] = 0;
      piVar14[3] = 0;
      piVar14[4] = 0;
    }
    local_7d4 = param_1;
    local_7c0 = CONCAT44(local_7c0._4_4_,piVar14);
    local_7d8 = (undefined ***)0x4fbd2f;
    (**(code **)(*piVar14 + 0xc))();
    local_7d8 = (undefined ***)0x4fbd3e;
    FUN_0068f390();
    ExceptionList = pvStack_18;
    return;
  case 0x21d:
    while( true ) {
      ExceptionList = ppvVar4;
      ppuVar8 = param_1[7];
      if (*(char *)(ppuVar8 + 0x44) == '\0') {
        local_7d4 = (undefined ***)0x4fc618;
        puVar9 = (undefined *)(**(code **)(*ppuVar8 + 4))();
        ppuVar8[2] = puVar9;
        if (puVar9 == (undefined *)0x0) {
          ppuVar8[3] = (undefined *)0x13;
        }
        *(undefined1 *)(ppuVar8 + 0x44) = 1;
      }
      ppuVar8 = ppuVar8 + 3;
      piVar14 = aiStack_500;
      for (iVar13 = 0x41; iVar13 != 0; iVar13 = iVar13 + -1) {
        *piVar14 = (int)*ppuVar8;
        ppuVar8 = ppuVar8 + 1;
        piVar14 = piVar14 + 1;
      }
      if ((aiStack_500[0] == 4) || (aiStack_500[0] == 0x13)) break;
      local_7d4 = param_1;
      local_7d8 = (undefined ***)0x4fc660;
      FUN_009a1440();
      local_7d4 = param_1 + 9;
      local_7d8 = (undefined ***)0x4fc669;
      iVar13 = FUN_00aaf0c5();
      uVar15 = *(undefined4 *)(*(int *)(DAT_0125870c + 0x2a88) + iVar13 * 4);
      iVar13 = *(int *)(in_ECX + 0x14a0);
      local_7d4 = (undefined ***)0x10;
      local_7d8 = (undefined ***)0x4fc688;
      puVar6 = (undefined4 *)FUN_00aae9af();
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        *puVar6 = uVar15;
        puVar6[1] = iVar13;
        puVar6[2] = 0;
        *(undefined1 *)(puVar6 + 3) = 0;
      }
      iVar11 = *(int *)(in_ECX + 0x14a4);
      *(undefined4 **)(in_ECX + 0x14a0) = puVar6;
      *(int *)(in_ECX + 0x14a4) = iVar11 + 1;
      if (iVar11 == 0) {
        *(undefined4 **)(in_ECX + 0x149c) = puVar6;
        ppvVar4 = ExceptionList;
      }
      else {
        *(undefined4 **)(iVar13 + 8) = puVar6;
        ppvVar4 = ExceptionList;
      }
    }
LAB_004fca9e:
    local_7d4 = (undefined ***)0x4fcaab;
    (**(code **)(*param_1[7] + 4))();
    ExceptionList = local_14;
    return;
  case 0x245:
    local_7d4 = (undefined ***)local_758;
    local_7d8 = (undefined ***)0x4fc198;
    ExceptionList = &local_14;
    FUN_00561bd0();
    local_c = 0x14;
    local_7d4 = param_1;
    local_7d8 = (undefined ***)0x4fc1b4;
    (**(code **)(local_758[0] + 0xc))();
    local_7d8 = (undefined ***)0x4fc1bd;
    FUN_0047e4a0();
    ExceptionList = pvStack_18;
    return;
  case 600:
    local_7d4 = (undefined ***)local_758;
    local_7d8 = (undefined ***)0x4fc1de;
    ExceptionList = &local_14;
    FUN_00561bd0();
    local_c = 0x15;
    local_7d4 = param_1;
    local_7d8 = (undefined ***)0x4fc1fa;
    (**(code **)(local_758[0] + 0xc))();
    local_7d8 = &ppuStack_75c;
    local_7dc = DAT_012588e8[0x2f3][0xfd] + *(int *)(in_ECX + 0x20) * 0x58;
    pppuStack_7e0 = (undefined ***)0x4fc21d;
    FUN_0047dbb0();
    local_7d8 = (undefined ***)0x4fc226;
    FUN_0047e4a0();
    ExceptionList = pvStack_18;
    return;
  case 0x259:
    local_7d4 = (undefined ***)local_758;
    local_7d8 = (undefined ***)0x4fc247;
    ExceptionList = &local_14;
    FUN_00561bd0();
    local_c = 0x16;
    local_7d4 = param_1;
    local_7d8 = (undefined ***)0x4fc263;
    (**(code **)(local_758[0] + 0xc))();
    local_7d8 = &ppuStack_75c;
    local_7dc = DAT_012588e8[0x2f3][0x101] + *(int *)(in_ECX + 0x20) * 0x58;
    pppuStack_7e0 = (undefined ***)0x4fc286;
    FUN_0047dbb0();
    local_7d8 = (undefined ***)0x4fc28f;
    FUN_0047e4a0();
    ExceptionList = pvStack_18;
    return;
  case 0x25a:
    local_7d4 = (undefined ***)local_758;
    local_7d8 = (undefined ***)0x4fc2b0;
    ExceptionList = &local_14;
    FUN_00561bd0();
    local_c = 0x17;
    local_7d4 = param_1;
    local_7d8 = (undefined ***)0x4fc2cc;
    (**(code **)(local_758[0] + 0xc))();
    local_7d8 = &ppuStack_75c;
    local_7dc = DAT_012588e8[0x2f3][0x105] + *(int *)(in_ECX + 0x20) * 0x58;
    pppuStack_7e0 = (undefined ***)0x4fc2ef;
    FUN_0047dbb0();
    local_7d8 = (undefined ***)0x4fc2f8;
    FUN_0047e4a0();
    ExceptionList = pvStack_18;
    return;
  case 0x25b:
    local_7d4 = (undefined ***)local_758;
    local_7d8 = (undefined ***)0x4fc382;
    ExceptionList = &local_14;
    FUN_00561bd0();
    local_c = 0x19;
    local_7d4 = param_1;
    local_7d8 = (undefined ***)0x4fc39e;
    (**(code **)(local_758[0] + 0xc))();
    local_7d8 = &ppuStack_75c;
    local_7dc = DAT_012588e8[0x2f3][0x139] + *(int *)(in_ECX + 0x20) * 0x58;
    pppuStack_7e0 = (undefined ***)0x4fc3c1;
    FUN_0047dbb0();
    local_7d8 = (undefined ***)0x4fc3ca;
    FUN_0047e4a0();
    ExceptionList = pvStack_18;
    return;
  case 0x25c:
    local_7d4 = (undefined ***)local_758;
    local_7d8 = (undefined ***)0x4fc319;
    ExceptionList = &local_14;
    FUN_00561bd0();
    local_c = 0x18;
    local_7d4 = param_1;
    local_7d8 = (undefined ***)0x4fc335;
    (**(code **)(local_758[0] + 0xc))();
    local_7d8 = &ppuStack_75c;
    local_7dc = DAT_012588e8[0x2f3][0x109] + *(int *)(in_ECX + 0x20) * 0x58;
    pppuStack_7e0 = (undefined ***)0x4fc358;
    FUN_0047dbb0();
    local_7d8 = (undefined ***)0x4fc361;
    FUN_0047e4a0();
    ExceptionList = pvStack_18;
    return;
  case 0x25f:
    ExceptionList = &local_14;
    while( true ) {
      ppuVar8 = param_1[7];
      if (*(char *)(ppuVar8 + 0x44) == '\0') {
        local_7d4 = (undefined ***)0x4fbe95;
        puVar9 = (undefined *)(**(code **)(*ppuVar8 + 4))();
        ppuVar8[2] = puVar9;
        if (puVar9 == (undefined *)0x0) {
          ppuVar8[3] = (undefined *)0x13;
        }
        *(undefined1 *)(ppuVar8 + 0x44) = 1;
      }
      ppuVar8 = ppuVar8 + 3;
      piVar14 = aiStack_500;
      for (iVar13 = 0x41; iVar13 != 0; iVar13 = iVar13 + -1) {
        *piVar14 = (int)*ppuVar8;
        ppuVar8 = ppuVar8 + 1;
        piVar14 = piVar14 + 1;
      }
      if ((aiStack_500[0] == 4) || (aiStack_500[0] == 0x13)) break;
      local_7d4 = param_1;
      local_7d8 = (undefined ***)0x4fbedd;
      FUN_009a1440();
      local_7d4 = (undefined ***)0x4fbeec;
      uVar15 = FUN_009885d0();
      local_c = 9;
      local_7d4 = (undefined ***)0x4fbefe;
      FUN_00971910();
      local_7d8 = (undefined ***)0x4fbf04;
      local_7d4 = (undefined ***)uVar15;
      uVar15 = FUN_009721b0();
      local_7c0 = CONCAT44(local_7c0._4_4_,uVar15);
      local_c = 0xffffffff;
      local_7d4 = (undefined ***)0x4fbf1f;
      FUN_00408ad0();
      local_7d4 = (undefined ***)0x4fbf31;
      uVar15 = FUN_009885d0();
      local_c = 10;
      local_7d4 = (undefined ***)0x4fbf43;
      FUN_00971910();
      local_7d8 = (undefined ***)0x4fbf49;
      local_7d4 = (undefined ***)uVar15;
      uVar15 = FUN_009721b0();
      local_c = 0xffffffff;
      local_7d4 = (undefined ***)0x4fbf62;
      FUN_00408ad0();
      *(undefined4 *)
       (*(int *)(in_ECX + 0x154c) + *(int *)((int)(undefined ****)local_7c0 + 0x40) * 4) = uVar15;
    }
    goto LAB_004fd560;
  case 0x28a:
    local_7d4 = param_1;
    local_7d8 = (undefined ***)0x4fc018;
    ExceptionList = &local_14;
    (**(code **)(*(int *)(in_ECX + 0x9b4) + 0xc))();
    ExceptionList = pvStack_18;
    return;
  case 0x28c:
    local_7c0 = 0;
    local_7b8 = 0;
    local_7b4 = local_7b4 & 0xffffff00;
    local_7d4 = (undefined ***)&local_7c0;
    local_7d8 = param_1;
    local_c = 8;
    local_7dc = (undefined *)0x4fbe22;
    ExceptionList = &local_14;
    FUN_00409910();
    for (local_798 = (undefined **)(undefined ****)local_7c0; local_798 != (undefined **)0x0;
        local_798 = (undefined **)local_798[8]) {
      local_7d4 = (undefined ***)0x4fbe3f;
      local_7d4 = (undefined ***)FUN_0055f640();
      local_7d8 = (undefined ***)0x4fbe47;
      FUN_00522310();
    }
    local_7d4 = (undefined ***)&local_7c0;
    local_7d8 = (undefined ***)0x4fbe60;
    FUN_004097a0();
    ExceptionList = local_14;
    return;
  case 0x28d:
    local_7d4 = (undefined ***)0x4fbf89;
    ExceptionList = &local_14;
    FUN_009885d0();
    local_c._0_1_ = 0xb;
    local_c._1_3_ = 0;
    local_7d4 = (undefined ***)0x4fbf9f;
    uVar15 = FUN_0055f640();
    *(undefined4 *)(in_ECX + 0xe64) = uVar15;
    break;
  case 0x292:
    local_7d4 = (undefined ***)0x4fbdc3;
    ExceptionList = &local_14;
    uVar15 = FUN_009885d0();
    local_c._0_1_ = 7;
    local_c._1_3_ = 0;
    local_7d4 = (undefined ***)0x4fbdd5;
    FUN_005662c0();
    local_7d8 = (undefined ***)0x4fbddb;
    local_7d4 = (undefined ***)uVar15;
    iVar13 = FUN_005677b0();
    if (iVar13 == 0) {
      local_7d4 = (undefined ***)0x4fbde4;
      iVar13 = FUN_005676d0();
    }
    *(int *)(in_ECX + 0xe68) = iVar13;
    break;
  case 0x2a2:
    local_7d4 = param_1 + 0x8b;
    local_7d8 = (undefined ***)0x4fbfbb;
    ExceptionList = &local_14;
    uVar15 = FUN_00aaf0c5();
    *(undefined4 *)(in_ECX + 0xbe4) = uVar15;
    ExceptionList = local_14;
    return;
  case 0x2ba:
    local_7d4 = param_1;
    local_7d8 = (undefined ***)0x4fbfec;
    ExceptionList = &local_14;
    (**(code **)(**(int **)(in_ECX + 0xbcc) + 0xc))();
    ExceptionList = pvStack_18;
    return;
  }
LAB_004feadc:
  local_7d4 = (undefined ***)0x4feae1;
  FUN_00408ad0();
switchD_004fd4bc_caseD_71f:
  ExceptionList = local_14;
  return;
}

