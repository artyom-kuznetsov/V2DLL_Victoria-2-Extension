// FUN_004589f0 @ 004589f0 body=[[004589f0, 00458bf6] [00458bfa, 00458c15] [00458c20, 00458d4c] [00458d50, 00458e44] [00458e48, 00458e77] [00458e7b, 00459063] [00459067, 004590ac] [004590b0, 00459128] [0045912c, 004591f6] [004591fa, 00459270] [00459274, 004594b3] [004594b7, 004594f8] [004594fc, 0045952f] [00459533, 00459546] [0045954a, 00459625] [00459629, 00459638] [0045963c, 004596e3] [004596e7, 0045970f] [00459713, 0045980c]]


/* WARNING: Type propagation algorithm not settling */

int ** FUN_004589f0(undefined4 param_1,undefined4 param_2,int *param_3)

{
  char cVar1;
  uint *puVar2;
  undefined1 uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  int **ppiVar10;
  int **ppiVar11;
  char *in_ECX;
  uint uVar12;
  char *local_6ac;
  undefined *puStack_6a8;
  undefined ***pppuStack_6a4;
  int **ppiStack_6a0;
  int ***local_69c;
  int *local_698;
  undefined ***pppuStack_694;
  uint uStack_67c;
  int *local_670;
  int *local_66c;
  uint uStack_668;
  undefined4 local_65c;
  uint local_658;
  int **local_650;
  int **local_64c;
  int **local_648;
  int **local_644;
  int **local_63c;
  int iStack_638;
  int *local_634;
  int *piStack_630;
  int iStack_62c;
  int iStack_628;
  int local_624;
  int iStack_620;
  int local_61c;
  int **ppiStack_618;
  int **ppiStack_614;
  int **ppiStack_610;
  undefined4 uStack_608;
  undefined4 uStack_604;
  int *local_5fc;
  int **ppiStack_5f8;
  int *apiStack_5f4 [2];
  uint local_5ec [4];
  undefined4 local_5dc;
  uint local_5d8;
  undefined **appuStack_568 [4];
  undefined **appuStack_558 [18];
  undefined1 auStack_510 [8];
  undefined4 uStack_508;
  undefined4 uStack_504;
  int *piStack_4e8;
  undefined1 auStack_4c8 [8];
  undefined4 uStack_4c0;
  undefined4 uStack_4bc;
  int *piStack_4a0;
  undefined **local_480;
  undefined4 local_47c;
  undefined4 local_478;
  undefined4 local_474;
  undefined1 local_470;
  undefined1 local_46c;
  int *local_464;
  int local_460;
  undefined1 local_154;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined1 local_128;
  undefined4 local_124;
  int local_120 [65];
  undefined1 uStack_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  int local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00ba2210;
  pvStack_14 = ExceptionList;
  local_63c = (int **)0x0;
  pppuStack_694 = (undefined ***)in_ECX;
  if (0xf < *(uint *)(in_ECX + 0x14)) {
    pppuStack_694 = (undefined ***)*(char **)in_ECX;
  }
  ExceptionList = &pvStack_14;
  if ((pppuStack_694 != (undefined ***)0x0) &&
     (ExceptionList = &pvStack_14, *(char *)pppuStack_694 != '\0')) {
    local_698 = (int *)0x458a3e;
    ExceptionList = &pvStack_14;
    iVar4 = PHYSFS_exists();
    if (iVar4 != 0) {
      local_624 = DAT_012586f4;
      local_64c = (int **)0x0;
      local_648 = (int **)0x0;
      local_644 = (int **)0x0;
      local_c = 0;
      pppuStack_694 = (undefined ***)0xf;
      local_698 = (int *)0xded978;
      local_5d8 = 0xf;
      local_5dc = 0;
      local_5ec[0] = local_5ec[0] & 0xffffff00;
      local_69c = (int ***)0x458a92;
      FUN_00409350();
      pppuStack_694 = (undefined ***)0x114;
      local_c._0_1_ = 1;
      local_698 = (int *)0x458aa4;
      piVar5 = (int *)FUN_00aae9af();
      local_c._0_1_ = 2;
      local_650 = (int **)piVar5;
      if (piVar5 == (int *)0x0) {
        local_464 = (int *)0x0;
      }
      else {
        pppuStack_694 = (undefined ***)0x3c;
        local_698 = (int *)0x458ac4;
        piVar6 = (int *)FUN_00aae9af();
        local_c._0_1_ = 3;
        local_5fc = piVar6;
        if (piVar6 == (int *)0x0) {
          iVar4 = 0;
        }
        else {
          local_634 = (int *)&local_6ac;
          local_698 = (int *)0xf;
          local_69c = (int ***)0x0;
          local_6ac = (char *)((uint)local_6ac & 0xffffff00);
          FUN_00409350(&DAT_00ded94d,0);
          iVar4 = FUN_00992740(piVar6,in_ECX,0);
        }
        local_c._0_1_ = 2;
        *piVar5 = (int)&PTR_FUN_00e37c30;
        piVar5[1] = iVar4;
        *(undefined2 *)(piVar5 + 0x44) = 0x100;
        pppuStack_694 = (undefined ***)0x458b37;
        FUN_00990100();
        *piVar5 = (int)&PTR_FUN_00e37c3c;
        local_464 = piVar5;
      }
      local_480 = &PTR_FUN_00e38524;
      local_47c = 0;
      local_478 = 0;
      local_474 = 0;
      local_470 = 0;
      local_c._0_1_ = 4;
      pppuStack_694 = (undefined ***)0xffffffff;
      local_698 = (int *)0x0;
      local_69c = (int ***)local_5ec;
      local_46c = 0;
      local_140 = 0xf;
      local_144 = 0;
      local_154 = 0;
      ppiStack_6a0 = (int **)0x458bb4;
      FUN_00408ed0();
      local_138 = 0;
      local_134 = 0;
      local_130 = 0;
      local_128 = 1;
      local_124 = 0;
      local_c._0_1_ = 6;
      if (0xf < local_5d8) {
        pppuStack_694 = (undefined ***)local_5ec[0];
                    /* WARNING: Subroutine does not return */
        local_698 = (int *)&UNK_00458bf7;
        FUN_00aae91b();
      }
      local_5d8 = 0xf;
      local_5dc = 0;
      local_5ec[0] = local_5ec[0] & 0xffffff00;
      ppiVar11 = local_648;
      while( true ) {
        piVar6 = local_464;
        piVar5 = local_464 + 0x44;
        if ((char)local_464[0x44] == '\0') {
          pppuStack_694 = (undefined ***)0x458c41;
          iVar4 = (**(code **)(*local_464 + 4))();
          piVar6[2] = iVar4;
          if (iVar4 == 0) {
            piVar6[3] = 0x13;
          }
          *(undefined1 *)piVar5 = 1;
        }
        piVar5 = piVar6 + 3;
        piVar6 = local_120;
        for (iVar4 = 0x41; iVar4 != 0; iVar4 = iVar4 + -1) {
          *piVar6 = *piVar5;
          piVar5 = piVar5 + 1;
          piVar6 = piVar6 + 1;
        }
        if ((local_120[0] == 4) || (local_120[0] == 0x13)) break;
        pppuStack_694 = &local_480;
        local_698 = (int *)0x458c90;
        FUN_009a1440();
        if (local_460 == 0x9d4) {
          pppuStack_694 = (undefined ***)0x88;
          local_698 = (int *)0x458ca7;
          pppuStack_694 = (undefined ***)FUN_00aae9af();
          local_c._0_1_ = 7;
          local_650 = (int **)pppuStack_694;
          if (pppuStack_694 == (undefined ***)0x0) {
            piVar5 = (int *)0x0;
          }
          else {
            local_698 = (int *)0x458cc0;
            piVar5 = (int *)FUN_00464480();
          }
          local_c._0_1_ = 6;
          pppuStack_694 = &local_480;
          local_698 = (int *)0x458ce3;
          local_670 = piVar5;
          (**(code **)(*piVar5 + 0xc))();
          local_698 = (int *)0x458ced;
          pppuStack_694 = (undefined ***)piVar5;
          pppuStack_694 = (undefined ***)FUN_0045e4e0();
          local_c._0_1_ = 8;
          puVar2 = *(uint **)(local_624 + 8);
          local_698 = (int *)puVar2[1];
          local_69c = (int ***)0x458d08;
          uVar7 = FUN_0045c080();
          if ((uVar7 < *puVar2) || (puVar2[1] <= uVar7)) {
            iVar4 = 0x15;
          }
          else {
            iVar4 = (int)(uVar7 - *puVar2) / 0x1c;
          }
          local_c._0_1_ = 6;
          uVar3 = (undefined1)local_c;
          local_c._0_1_ = 6;
          if (0xf < local_658) {
            pppuStack_694 = (undefined ***)local_66c;
                    /* WARNING: Subroutine does not return */
            local_698 = (int *)&UNK_00458d4d;
            FUN_00aae91b();
          }
          if (iVar4 == 0x15) {
            pppuStack_694 = (undefined ***)0x12;
            local_698 = (int *)0xdf9f54;
            uStack_604 = 0xf;
            uStack_608 = 0;
            ppiStack_618 = (int **)((uint)ppiStack_618 & 0xffffff00);
            local_69c = (int ***)0x458d8a;
            FUN_00409350();
            local_c._0_1_ = 9;
            local_698 = (int *)0x458d9c;
            pppuStack_694 = (undefined ***)piVar5;
            puVar8 = (undefined4 *)FUN_0045e4e0();
            pppuStack_694 = (undefined ***)0x10004;
            local_69c = &ppiStack_618;
            local_698 = (int *)0x169;
            local_c._0_1_ = 10;
            ppiStack_6a0 = (int **)0x458dc1;
            uVar9 = FUN_004015b0();
            pppuStack_694 = (undefined ***)0x0;
            local_698 = (int *)0x3b;
            local_69c = (int ***)0xdfa094;
            local_c._0_1_ = 0xb;
            pppuStack_6a4 = (undefined ***)0x458ddd;
            ppiStack_6a0 = (int **)uVar9;
            FUN_00987d50();
            if (0xf < (uint)puVar8[5]) {
              puVar8 = (undefined4 *)*puVar8;
            }
            local_6ac = (char *)0x458dec;
            puStack_6a8 = (undefined *)uVar9;
            pppuStack_6a4 = (undefined ***)puVar8;
            uVar9 = FUN_00418e30();
            local_6ac = ". Scope skipped.";
            uVar9 = FUN_00418e30(uVar9);
            FUN_00401280(uVar9);
            pppuStack_6a4 = appuStack_568;
            uStack_1c = 10;
            puStack_6a8 = (undefined *)0x458e15;
            FUN_00987ac0();
            pppuStack_6a4 = appuStack_568;
            appuStack_568[0] = std::ios_base::vftable;
            puStack_6a8 = (undefined *)0x458e2d;
            FUN_00aad52d();
            if (0xf < uStack_668) {
              pppuStack_6a4 = (undefined ***)uStack_67c;
                    /* WARNING: Subroutine does not return */
              puStack_6a8 = &UNK_00458e45;
              FUN_00aae91b();
            }
            uStack_1c = 6;
            uStack_668 = 0xf;
            local_66c = (int *)0x0;
            uStack_67c = uStack_67c & 0xffffff00;
            if (0xf < ppiStack_614) {
              pppuStack_6a4 = (undefined ***)iStack_628;
                    /* WARNING: Subroutine does not return */
              puStack_6a8 = &UNK_00458e78;
              FUN_00aae91b();
            }
            pppuStack_6a4 = (undefined ***)0x1;
            puStack_6a8 = (undefined *)0x458e85;
            (**(code **)*piVar5)();
            ppiVar11 = local_648;
          }
          else {
            local_c._0_1_ = uVar3;
            if ((&local_670 < ppiVar11) && (local_64c <= &local_670)) {
              iVar4 = (int)&local_670 - (int)local_64c;
              if (ppiVar11 == local_644) {
                pppuStack_694 = (undefined ***)0x458eb2;
                FUN_00a513f0();
                ppiVar11 = local_648;
              }
              if (ppiVar11 != (int **)0x0) {
                *ppiVar11 = local_64c[iVar4 >> 2];
              }
              local_648 = ppiVar11 + 1;
              ppiVar11 = local_648;
            }
            else {
              if (ppiVar11 == local_644) {
                pppuStack_694 = (undefined ***)0x458ede;
                FUN_00a513f0();
                ppiVar11 = local_648;
              }
              if (ppiVar11 != (int **)0x0) {
                *ppiVar11 = piVar5;
              }
              local_648 = ppiVar11 + 1;
              ppiVar11 = local_648;
            }
          }
        }
      }
      pppuStack_694 = (undefined ***)0x458efd;
      (**(code **)(*local_464 + 4))();
      ppiVar10 = local_64c;
      local_61c = (int)ppiVar11 - (int)local_64c >> 2;
      if (local_61c < 1) {
        pppuStack_694 = (undefined ***)0x45965d;
        FUN_009885d0();
        pppuStack_694 = (undefined ***)0x10004;
        local_698 = (int *)0x1cb;
        local_c._0_1_ = 0x19;
        ppiStack_6a0 = (int **)0x45967f;
        local_69c = (int ***)&local_66c;
        ppiVar11 = (int **)FUN_004015b0();
        pppuStack_694 = (undefined ***)0x0;
        local_698 = (int *)0x48;
        local_69c = (int ***)0xdfa198;
        local_c._0_1_ = 0x1a;
        pppuStack_6a4 = (undefined ***)0x45969b;
        ppiStack_6a0 = ppiVar11;
        FUN_00987d50();
        local_698 = (int *)0x4596a1;
        pppuStack_694 = (undefined ***)ppiVar11;
        FUN_00401280();
        pppuStack_694 = appuStack_558;
        local_c._0_1_ = 0x19;
        local_698 = (int *)0x4596b8;
        FUN_00987ac0();
        pppuStack_694 = appuStack_558;
        appuStack_558[0] = std::ios_base::vftable;
        local_698 = (int *)0x4596d0;
        FUN_00aad52d();
        if (0xf < local_658) {
          pppuStack_694 = (undefined ***)local_66c;
                    /* WARNING: Subroutine does not return */
          local_698 = (int *)&UNK_004596e4;
          FUN_00aae91b();
        }
      }
      else {
        pppuStack_694 = (undefined ***)0x458f1c;
        iVar4 = FUN_00459880();
        if (iVar4 == 0) {
          pppuStack_694 = (undefined ***)0x12;
          local_698 = (int *)0xdf9f54;
          local_658 = 0xf;
          local_65c = 0;
          local_66c = (int *)((uint)local_66c & 0xffffff00);
          local_69c = (int ***)0x45959d;
          FUN_00409350();
          pppuStack_694 = (undefined ***)0x10004;
          local_69c = (int ***)&local_66c;
          local_698 = (int *)0x1c4;
          local_c._0_1_ = 0x16;
          ppiStack_6a0 = (int **)0x4595c1;
          ppiVar11 = (int **)FUN_004015b0();
          pppuStack_694 = (undefined ***)0x0;
          local_698 = (int *)0x4b;
          local_69c = (int ***)0xdfa148;
          local_c._0_1_ = 0x17;
          pppuStack_6a4 = (undefined ***)0x4595dd;
          ppiStack_6a0 = ppiVar11;
          FUN_00987d50();
          local_698 = (int *)0x4595e3;
          pppuStack_694 = (undefined ***)ppiVar11;
          FUN_00401280();
          pppuStack_694 = appuStack_558;
          local_c._0_1_ = 0x16;
          local_698 = (int *)0x4595fa;
          FUN_00987ac0();
          pppuStack_694 = appuStack_558;
          appuStack_558[0] = std::ios_base::vftable;
          local_698 = (int *)0x459612;
          FUN_00aad52d();
          if (0xf < local_658) {
            pppuStack_694 = (undefined ***)local_66c;
LAB_00459621:
                    /* WARNING: Subroutine does not return */
            local_698 = (int *)&UNK_00459626;
            FUN_00aae91b();
          }
        }
        else {
          if (*(int *)(iVar4 + 0x84) != local_61c) {
            pppuStack_694 = (undefined ***)0x458f44;
            FUN_009885d0();
            pppuStack_694 = (undefined ***)0x10004;
            local_698 = (int *)0x17a;
            local_c._0_1_ = 0xc;
            ppiStack_6a0 = (int **)0x458f65;
            local_69c = (int ***)&local_66c;
            uVar9 = FUN_004015b0();
            pppuStack_694 = (undefined ***)0x0;
            local_698 = (int *)0x71;
            local_69c = (int ***)0xdfa0d0;
            local_c._0_1_ = 0xd;
            pppuStack_6a4 = (undefined ***)0x458f81;
            ppiStack_6a0 = (int **)uVar9;
            FUN_00987d50();
            local_698 = (int *)0x458f87;
            pppuStack_694 = (undefined ***)uVar9;
            FUN_00401280();
            pppuStack_694 = appuStack_558;
            local_c._0_1_ = 0xc;
            local_698 = (int *)0x458f9f;
            FUN_00987ac0();
            pppuStack_694 = appuStack_558;
            appuStack_558[0] = std::ios_base::vftable;
            local_698 = (int *)0x458fb7;
            FUN_00aad52d();
            local_c._0_1_ = 6;
            pppuStack_694 = (undefined ***)0x458fcb;
            FUN_00408ad0();
          }
          pppuStack_694 = (undefined ***)0x94;
          local_698 = (int *)0x458fd5;
          pppuStack_694 = (undefined ***)FUN_00aae9af();
          local_c._0_1_ = 0xe;
          local_650 = (int **)pppuStack_694;
          if (pppuStack_694 == (undefined ***)0x0) {
            ppiStack_5f8 = (int **)0x0;
          }
          else {
            local_698 = (int *)0x458fee;
            ppiStack_5f8 = (int **)FUN_0045b020();
          }
          local_c._0_1_ = 6;
          ppiStack_5f8[2] = *(int **)(DAT_012588e8 + 0xb0c);
          ppiStack_5f8[0x22] = *(int **)(iVar4 + 0x88);
          ppiStack_5f8[0x23] = (int *)*param_3;
          local_698 = (int *)0x45903e;
          pppuStack_694 = (undefined ***)iVar4;
          local_63c = ppiStack_5f8;
          local_69c = (int ***)FUN_004598e0();
          pppuStack_694 = (undefined ***)0xffffffff;
          local_698 = (int *)0x0;
          local_c._0_1_ = 0xf;
          ppiStack_6a0 = (int **)0x459053;
          FUN_00408ed0();
          if (0xf < local_658) {
            pppuStack_694 = (undefined ***)local_66c;
                    /* WARNING: Subroutine does not return */
            local_698 = (int *)&UNK_00459064;
            FUN_00aae91b();
          }
          local_5ec[0] = 0;
          local_5ec[1] = 0;
          local_5ec[2] = 0;
          local_c._0_1_ = 0x10;
          iStack_628 = 0;
          iStack_620 = 0;
          iStack_62c = 0;
          if (0 < local_61c) {
            local_634 = (int *)(iVar4 + 0x54);
            iStack_638 = 8;
            do {
              local_c._0_1_ = 0x10;
              pppuStack_694 = (undefined ***)local_64c[iStack_62c];
              local_698 = (int *)0x4590c9;
              piStack_630 = (int *)pppuStack_694;
              pppuStack_694 = (undefined ***)FUN_0045e4e0();
              local_c._0_1_ = 0x11;
              puVar2 = *(uint **)(local_624 + 8);
              local_698 = (int *)puVar2[1];
              local_69c = (int ***)0x4590e4;
              uVar7 = FUN_0045c080();
              if ((uVar7 < *puVar2) || (puVar2[1] <= uVar7)) {
                iVar4 = 0x15;
              }
              else {
                iVar4 = (int)(uVar7 - *puVar2) / 0x1c;
              }
              local_c._0_1_ = 0x10;
              if (0xf < local_658) {
                pppuStack_694 = (undefined ***)local_66c;
                    /* WARNING: Subroutine does not return */
                local_698 = (int *)&UNK_00459129;
                FUN_00aae91b();
              }
              pppuStack_694 = (undefined ***)0x0;
              local_658 = 0xf;
              local_65c = 0;
              local_66c = (int *)((uint)local_66c & 0xffffff00);
              local_698 = (int *)0x45914b;
              FUN_008a8650();
              uStack_508 = *(undefined4 *)(DAT_012588e8 + 0xb5c);
              uStack_504 = *(undefined4 *)(DAT_012588e8 + 0xb60);
              piStack_4e8 = piStack_630;
              ppiStack_618 = (int **)0x0;
              ppiStack_614 = (int **)0x0;
              ppiStack_610 = (int **)0x0;
              local_c._0_1_ = 0x12;
              uVar3 = (undefined1)local_c;
              local_c._0_1_ = 0x12;
              local_5fc = *(int **)(local_624 + 0x10 + iVar4 * 0x10);
              local_670 = (int *)*local_5fc;
              if (local_670 != local_5fc) {
                do {
                  ppiVar11 = ppiStack_614;
                  piVar5 = (int *)local_670[10];
                  local_698 = (int *)0x4591c2;
                  pppuStack_694 = (undefined ***)piVar5;
                  local_69c = (int ***)FUN_0045fd40();
                  pppuStack_694 = (undefined ***)0xffffffff;
                  local_c._0_1_ = 0x13;
                  local_698 = (int *)0x0;
                  ppiStack_6a0 = (int **)0x4591de;
                  FUN_00408ed0();
                  local_c._0_1_ = 0x12;
                  if (0xf < local_658) {
                    pppuStack_694 = (undefined ***)local_66c;
                    /* WARNING: Subroutine does not return */
                    local_698 = (int *)&UNK_004591f7;
                    FUN_00aae91b();
                  }
                  local_698 = (int *)*piVar5;
                  pppuStack_694 = (undefined ***)auStack_510;
                  local_69c = (int ***)0x45920a;
                  piVar6 = (int *)FUN_0045e430();
                  pppuStack_694 = (undefined ***)0x0;
                  local_698 = (int *)&DAT_00ded94d;
                  local_658 = 0xf;
                  local_65c = 0;
                  local_66c = (int *)((uint)local_66c & 0xffffff00);
                  local_69c = (int ***)0x459238;
                  apiStack_5f4[1] = piVar6;
                  FUN_00409350();
                  pppuStack_694 = (undefined ***)0xffffffff;
                  local_c._0_1_ = 0x14;
                  local_698 = (int *)0x0;
                  local_69c = (int ***)&local_66c;
                  ppiStack_6a0 = (int **)0x459258;
                  FUN_00408ed0();
                  local_c._0_1_ = 0x12;
                  if (0xf < local_658) {
                    pppuStack_694 = (undefined ***)local_66c;
                    /* WARNING: Subroutine does not return */
                    local_698 = (int *)&UNK_00459271;
                    FUN_00aae91b();
                  }
                  apiStack_5f4[0] = piVar5;
                  if ((apiStack_5f4 < ppiVar11) && (ppiStack_618 <= apiStack_5f4)) {
                    iVar4 = (int)apiStack_5f4 - (int)ppiStack_618 >> 3;
                    if (ppiVar11 == ppiStack_610) {
                      uVar7 = (int)ppiVar11 - (int)ppiStack_618 >> 3;
                      if (0x1ffffffe < uVar7) {
LAB_0045956e:
                        pppuStack_694 = (undefined ***)0xdeda30;
                    /* WARNING: Subroutine does not return */
                        local_698 = (int *)0x459578;
                        FUN_00aad3ad();
                      }
                      uVar7 = uVar7 + 1;
                      uVar12 = (int)ppiStack_610 - (int)ppiStack_618 >> 3;
                      if (uVar12 < uVar7) {
                        if (0x1fffffff - (uVar12 >> 1) < uVar12) {
                          pppuStack_694 = (undefined ***)0x0;
                        }
                        else {
                          pppuStack_694 = (undefined ***)(uVar12 + (uVar12 >> 1));
                        }
                        if (pppuStack_694 < uVar7) {
                          pppuStack_694 = (undefined ***)uVar7;
                        }
                        local_698 = (int *)0x4592e7;
                        FUN_004237e0();
                        ppiVar11 = ppiStack_614;
                      }
                    }
                    if (ppiVar11 != (int **)0x0) {
                      *ppiVar11 = ppiStack_618[iVar4 * 2];
                      ppiVar11[1] = ppiStack_618[iVar4 * 2 + 1];
                    }
                  }
                  else {
                    if (ppiVar11 == ppiStack_610) {
                      uVar7 = (int)ppiVar11 - (int)ppiStack_618 >> 3;
                      if (0x1ffffffe < uVar7) goto LAB_0045956e;
                      uVar7 = uVar7 + 1;
                      uVar12 = (int)ppiStack_610 - (int)ppiStack_618 >> 3;
                      if (uVar12 < uVar7) {
                        if (0x1fffffff - (uVar12 >> 1) < uVar12) {
                          pppuStack_694 = (undefined ***)0x0;
                        }
                        else {
                          pppuStack_694 = (undefined ***)(uVar12 + (uVar12 >> 1));
                        }
                        if (pppuStack_694 < uVar7) {
                          pppuStack_694 = (undefined ***)uVar7;
                        }
                        local_698 = (int *)0x45934c;
                        FUN_004237e0();
                        ppiVar11 = ppiStack_614;
                      }
                    }
                    if (ppiVar11 != (int **)0x0) {
                      *ppiVar11 = piVar5;
                      ppiVar11[1] = piVar6;
                    }
                  }
                  ppiStack_614 = ppiVar11 + 2;
                  if (*(char *)((int)local_670 + 0x2d) == '\0') {
                    piVar5 = (int *)local_670[2];
                    if (*(char *)((int)piVar5 + 0x2d) == '\0') {
                      cVar1 = *(char *)(*piVar5 + 0x2d);
                      local_670 = piVar5;
                      piVar5 = (int *)*piVar5;
                      while (cVar1 == '\0') {
                        cVar1 = *(char *)(*piVar5 + 0x2d);
                        local_670 = piVar5;
                        piVar5 = (int *)*piVar5;
                      }
                    }
                    else {
                      cVar1 = *(char *)(local_670[1] + 0x2d);
                      piVar6 = (int *)local_670[1];
                      piVar5 = local_670;
                      while ((local_670 = piVar6, cVar1 == '\0' && (piVar5 == (int *)local_670[2])))
                      {
                        cVar1 = *(char *)(local_670[1] + 0x2d);
                        piVar6 = (int *)local_670[1];
                        piVar5 = local_670;
                      }
                    }
                  }
                  uVar3 = (undefined1)local_c;
                } while (local_670 != local_5fc);
              }
              local_c._0_1_ = uVar3;
              ppiVar11 = ppiStack_618;
              iVar4 = (int)ppiStack_614 - (int)ppiStack_618 >> 3;
              if (0 < iVar4) {
                local_650 = (int **)((uint)local_650 & 0xffffff00);
                pppuStack_694 = (undefined ***)local_650;
                pppuStack_6a4 = (undefined ***)0x4593df;
                ppiStack_6a0 = ppiStack_618;
                local_69c = (int ***)ppiStack_614;
                local_698 = (int *)iVar4;
                FUN_0045c100();
                pppuStack_6a4 = (undefined ***)0x54;
                puStack_6a8 = (undefined *)0x4593e6;
                ppiVar10 = (int **)FUN_00aae9af();
                if (ppiVar10 == (int **)0x0) {
                  ppiVar10 = (int **)0x0;
                }
                else {
                  ppiVar10[4] = (int *)0x0;
                  ppiVar10[5] = (int *)0xf;
                  *(undefined1 *)ppiVar10 = 0;
                  ppiVar10[0xc] = (int *)0xf;
                  ppiVar10[0xb] = (int *)0x0;
                  *(undefined1 *)(ppiVar10 + 7) = 0;
                  ppiVar10[0x13] = (int *)0xf;
                  ppiVar10[0x12] = (int *)0x0;
                  *(undefined1 *)(ppiVar10 + 0xe) = 0;
                }
                pppuStack_694 = (undefined ***)0x0;
                local_698 = (int *)0x459422;
                FUN_008a8650();
                uStack_4c0 = *(undefined4 *)(DAT_012588e8 + 0xb5c);
                uStack_4bc = *(undefined4 *)(DAT_012588e8 + 0xb60);
                piStack_4a0 = piStack_630;
                if (*(int *)(iStack_638 + (int)*ppiVar11) == 0) {
                  if (ppiVar10 != (int **)0x0) {
                    pppuStack_694 = (undefined ***)0x45952a;
                    FUN_00459820();
                    /* WARNING: Subroutine does not return */
                    local_698 = (int *)&UNK_00459530;
                    pppuStack_694 = (undefined ***)ppiVar10;
                    FUN_00aae91b();
                  }
                }
                else {
                  pppuStack_694 = (undefined ***)local_5ec;
                  local_698 = param_3;
                  pppuStack_6a4 = *(undefined ****)(iStack_638 + (int)*ppiVar11);
                  ppiStack_6a0 = (int **)auStack_4c8;
                  puStack_6a8 = (undefined *)0x459477;
                  local_69c = (int ***)ppiVar10;
                  FUN_0045eae0();
                  pppuStack_694 = (undefined ***)*ppiVar11;
                  local_698 = (int *)0x459483;
                  pppuStack_694 = (undefined ***)FUN_0045fd40();
                  local_698 = piStack_630;
                  ppiStack_6a0 = ppiStack_5f8;
                  local_c._0_1_ = 0x15;
                  pppuStack_6a4 = (undefined ***)0x4594a3;
                  local_69c = (int ***)ppiVar10;
                  FUN_0045bcf0();
                  if (0xf < local_658) {
                    pppuStack_694 = (undefined ***)local_66c;
                    /* WARNING: Subroutine does not return */
                    local_698 = (int *)&UNK_004594b4;
                    FUN_00aae91b();
                  }
                  iStack_628 = iStack_628 + 1;
                  if (local_634[1] - *local_634 >> 5 <= iStack_628) {
                    iStack_620 = iStack_620 + 1;
                    iStack_638 = iStack_638 + 4;
                    local_634 = local_634 + 4;
                    iStack_628 = 0;
                    if (0x13 < iStack_638) {
                    /* WARNING: Subroutine does not return */
                      local_698 = (int *)&UNK_004594f9;
                      pppuStack_694 = (undefined ***)ppiVar11;
                      FUN_00aae91b();
                    }
                  }
                }
              }
              uVar7 = local_5ec[0];
              local_c._0_1_ = 0x10;
              uVar3 = (undefined1)local_c;
              local_c._0_1_ = 0x10;
              if (ppiVar11 != (int **)0x0) {
                    /* WARNING: Subroutine does not return */
                local_698 = (int *)&UNK_00459547;
                pppuStack_694 = (undefined ***)ppiVar11;
                FUN_00aae91b();
              }
              iStack_62c = iStack_62c + 1;
              ppiStack_618 = (int **)0x0;
              ppiStack_614 = (int **)0x0;
              ppiStack_610 = (int **)0x0;
            } while (iStack_62c < local_61c);
            if (local_5ec[0] != 0) {
              pppuStack_694 = (undefined ***)0x459519;
              local_c._0_1_ = uVar3;
              FUN_00413860();
              pppuStack_694 = (undefined ***)uVar7;
              goto LAB_00459621;
            }
          }
        }
        if (local_64c != (int **)0x0) {
          pppuStack_694 = (undefined ***)local_64c;
                    /* WARNING: Subroutine does not return */
          local_698 = (int *)&UNK_00459639;
          FUN_00aae91b();
        }
        local_64c = (int **)0x0;
        local_648 = (int **)0x0;
        local_644 = (int **)0x0;
        ppiVar10 = (int **)0x0;
      }
      local_c = (uint)local_c._1_3_ << 8;
      pppuStack_694 = (undefined ***)0x4596fb;
      FUN_009a0dc0();
      local_c = 0xffffffff;
      if (ppiVar10 != (int **)0x0) {
                    /* WARNING: Subroutine does not return */
        local_698 = (int *)&UNK_00459710;
        pppuStack_694 = (undefined ***)ppiVar10;
        FUN_00aae91b();
      }
      if (local_63c == (int **)0x0) {
        ExceptionList = pvStack_14;
        return (int **)0x0;
      }
      local_650 = local_63c;
      pppuStack_694 = (undefined ***)0x459731;
      FUN_0068f390();
      ExceptionList = pvStack_14;
      return local_63c;
    }
  }
  pppuStack_694 = (undefined ***)0x12;
  local_698 = (int *)0xdf9f54;
  local_658 = 0xf;
  local_65c = 0;
  local_66c = (int *)((uint)local_66c & 0xffffff00);
  local_69c = (int ***)0x45976c;
  FUN_00409350();
  pppuStack_694 = (undefined ***)0x10004;
  local_69c = (int ***)&local_66c;
  local_698 = (int *)0x1d1;
  local_c = 0x1b;
  ppiStack_6a0 = (int **)0x459792;
  uVar9 = FUN_004015b0();
  pppuStack_694 = (undefined ***)0x0;
  local_698 = (int *)0x36;
  local_69c = (int ***)0xdfa1e4;
  local_c._0_1_ = 0x1c;
  pppuStack_6a4 = (undefined ***)0x4597ad;
  ppiStack_6a0 = (int **)uVar9;
  FUN_00987d50();
  if (0xf < *(uint *)(in_ECX + 0x14)) {
    in_ECX = *(char **)in_ECX;
  }
  local_69c = (int ***)0x4597c0;
  local_698 = (int *)uVar9;
  pppuStack_694 = (undefined ***)in_ECX;
  local_69c = (int ***)FUN_00418e30();
  ppiStack_6a0 = (int **)0x4597c6;
  FUN_00401280();
  pppuStack_694 = appuStack_558;
  local_c = CONCAT31(local_c._1_3_,0x1b);
  local_698 = (int *)0x4597de;
  FUN_00987ac0();
  pppuStack_694 = appuStack_558;
  appuStack_558[0] = std::ios_base::vftable;
  local_698 = (int *)0x4597f6;
  FUN_00aad52d();
  if (local_658 < 0x10) {
    ExceptionList = pvStack_14;
    return local_63c;
  }
  pppuStack_694 = (undefined ***)local_66c;
                    /* WARNING: Subroutine does not return */
  local_698 = (int *)&UNK_0045980d;
  FUN_00aae91b();
}

