// FUN_00a68c10 @ 00a68c10 body=[[00a68c10, 00a68c5c] [00a68c60, 00a68d8d] [00a68d91, 00a68f0b] [00a691e3, 00a692ab] [00a692af, 00a69449] [00a6944d, 00a69722] [00a69726, 00a6993b] [00a6993f, 00a699b9]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a68c10(void)

{
  undefined2 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int *piVar10;
  DWORD DVar11;
  int *in_ECX;
  undefined4 *unaff_EDI;
  int local_824;
  int iStack_820;
  undefined **local_81c;
  undefined **ppuStack_818;
  undefined4 *local_814;
  undefined4 uStack_810;
  undefined1 uStack_80c;
  undefined1 uStack_80b;
  undefined4 local_7f8;
  undefined4 local_7f4;
  undefined4 uStack_7f0;
  undefined4 uStack_7ec;
  uint uStack_7e8;
  undefined4 uStack_7d8;
  uint uStack_7d4;
  uint local_7cc;
  undefined4 local_7bc;
  uint local_7b8;
  uint uStack_7a4;
  uint local_794;
  uint uStack_790;
  undefined4 local_784;
  undefined4 local_780;
  uint local_778;
  undefined4 local_768;
  uint local_764;
  undefined4 uStack_75c;
  undefined4 uStack_758;
  uint uStack_754;
  undefined4 uStack_74c;
  undefined4 uStack_73c;
  undefined4 uStack_738;
  uint uStack_734;
  uint uStack_72c;
  undefined4 uStack_71c;
  uint uStack_718;
  undefined **ppuStack_5a0;
  undefined **ppuStack_4e0;
  undefined **ppuStack_360;
  undefined **ppuStack_1e0;
  undefined **ppuStack_130;
  undefined **ppuStack_60;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  uint local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b5cb42;
  pvStack_14 = ExceptionList;
  bVar6 = false;
  ExceptionList = &pvStack_14;
  iVar7 = FUN_00a89d00();
  iVar2 = iStack_820;
  do {
    if (iVar7 < 1) {
      if (iVar7 == -1) {
        local_764 = 0xf;
        local_768 = 0;
        local_778 = local_778 & 0xffffff00;
        FUN_00409350();
        local_c = 0x19;
        FUN_004015b0();
        local_c._0_1_ = 0x1a;
        FUN_00987d50();
        FUN_00401280();
        local_c = CONCAT31(local_c._1_3_,0x19);
        FUN_00987ac0();
        ppuStack_60 = std::ios_base::vftable;
        FUN_00aad52d();
        local_c = 0xffffffff;
        if (0xf < local_764) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_764 = 0xf;
        local_768 = 0;
        local_778 = local_778 & 0xffffff00;
      }
      (**(code **)(*in_ECX + 0x70))();
      DVar11 = timeGetTime();
      DAT_012586d0 = DVar11 - _DAT_01258b70;
      FUN_00a899f0();
      if (bVar6) {
        for (puVar8 = *(undefined4 **)(in_ECX[7] + 4); puVar8 != (undefined4 *)0x0;
            puVar8 = (undefined4 *)puVar8[2]) {
          (**(code **)(*(int *)*puVar8 + 4))();
        }
      }
      ExceptionList = pvStack_14;
      return;
    }
    iStack_820 = iVar2;
    if (local_824 == 1) {
      *(undefined4 *)(iVar2 + 0x14) = 0;
      uStack_718 = 0xf;
      uStack_71c = 0;
      uStack_72c = uStack_72c & 0xffffff00;
      FUN_00409350();
      local_c = 0;
      piVar10 = (int *)FUN_004015b0();
      local_c = CONCAT31(local_c._1_3_,1);
      FUN_00987d50();
      FUN_00408be0();
      bVar5 = false;
      if (((*(byte *)(*(int *)(*piVar10 + 4) + 0xc + (int)piVar10) & 6) == 0) &&
         (iVar7 = (**(code **)(**(int **)(*(int *)(*piVar10 + 4) + 0x38 + (int)piVar10) + 0x34))(),
         iVar7 == -1)) {
        bVar5 = true;
      }
      if (bVar5) {
        FUN_00401120();
      }
      local_c = local_c & 0xffffff00;
      FUN_00987ac0();
      ppuStack_1e0 = std::ios_base::vftable;
      FUN_00aad52d();
      local_c = 0xffffffff;
      if (0xf < uStack_718) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
    else if (local_824 == 2) {
      if (*(uint **)(iVar2 + 0x14) != (uint *)0x0) {
        uVar3 = **(uint **)(iVar2 + 0x14);
        bVar6 = true;
        for (piVar10 = *(int **)(in_ECX[0x18] + (uVar3 % (uint)in_ECX[0x17]) * 4);
            piVar10 != (int *)0x0; piVar10 = (int *)piVar10[1]) {
          iVar7 = *piVar10;
          if (*(uint *)(iVar7 + 0x1c) == uVar3) goto LAB_00a695f4;
        }
        iVar7 = 0;
LAB_00a695f4:
        uVar4 = *(undefined4 *)(iVar7 + 4);
        uVar3 = uStack_74c >> 0x10;
        uStack_74c = CONCAT22((short)uVar3,*(undefined2 *)(iVar7 + 8));
        FUN_009b0f50();
        uStack_75c = **(undefined4 **)(iVar2 + 0x14);
        uStack_754 = uStack_74c;
        uStack_758 = uVar4;
        FUN_004bec00();
        FUN_00a60580();
        uStack_738 = 0xf;
        uStack_73c = 0;
        uStack_74c = uStack_74c & 0xffffff00;
        FUN_00409350();
        puStack_10 = (undefined1 *)0x17;
        FUN_004015b0();
        puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,0x18);
        FUN_00987d50();
        FUN_00401280();
        local_c = CONCAT31(local_c._1_3_,0x17);
        FUN_00987ac0();
        ppuStack_360 = std::ios_base::vftable;
        FUN_00aad52d();
        local_c = 0xffffffff;
        if (0xf < uStack_734) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
      }
      *(undefined4 *)(iVar2 + 0x14) = 0;
    }
    else if (local_824 == 3) {
      if ((char)local_81c == '\x01') {
        iVar7 = **(int **)((int)local_814 + 8);
        if (iVar7 == 8) {
          piVar10 = *(int **)(in_ECX[7] + 0xe8);
          bVar5 = false;
          if (piVar10 != (int *)0x0) {
            do {
              if (*piVar10 == *(int *)(iVar2 + 0xc)) {
                bVar5 = true;
              }
              piVar10 = (int *)piVar10[2];
            } while (piVar10 != (int *)0x0);
            if (bVar5) {
              local_7f8 = 0x14;
              local_7f4 = 0;
              FUN_00a89eb0();
              FUN_00a89f70();
              goto LAB_00a69594;
            }
          }
          FUN_00a69e40();
        }
        else if (iVar7 == 0xc) {
          local_7b8 = 0xf;
          local_7bc = 0;
          local_7cc = local_7cc & 0xffffff00;
          FUN_00409350();
          local_c = 4;
          FUN_004015b0();
          local_c._0_1_ = 5;
          FUN_00987d50();
          FUN_00401280();
          local_c = CONCAT31(local_c._1_3_,4);
          FUN_00987ac0();
          ppuStack_5a0 = std::ios_base::vftable;
          FUN_00aad52d();
          local_c = 0xffffffff;
          if (0xf < local_7b8) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_7b8 = 0xf;
          local_7bc = 0;
          local_7cc = local_7cc & 0xffffff00;
          uStack_7ec = *(undefined4 *)(in_ECX[7] + 0x30);
          uStack_7f0 = 0x11;
          FUN_00a89eb0();
          FUN_00a89f70();
        }
        else if (iVar7 == 0xd) {
          local_780 = 0xf;
          local_784 = 0;
          local_794 = local_794 & 0xffffff00;
          FUN_00409350();
          local_c = 6;
          FUN_004015b0();
          local_c = CONCAT31(local_c._1_3_,7);
          FUN_00987d50();
          FUN_00401280();
          uStack_1c = CONCAT31(uStack_1c._1_3_,6);
          FUN_00987ac0();
          ppuStack_130 = std::ios_base::vftable;
          FUN_00aad52d();
          uStack_1c = 0xffffffff;
          if (0xf < uStack_790) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          uStack_790 = 0xf;
          local_794 = 0;
          uStack_7a4 = uStack_7a4 & 0xffffff00;
          puVar8 = (undefined4 *)FUN_00aae9af();
          if (puVar8 == (undefined4 *)0x0) {
            puVar8 = (undefined4 *)0x0;
          }
          else {
            *puVar8 = 0;
            puVar8[1] = 0;
            puVar8[2] = 0;
            puVar8[4] = 0;
            puVar8[5] = 0;
            puVar8[6] = 0;
            puVar8[0xd] = 0xf;
            puVar8[0xc] = 0;
            *(undefined1 *)(puVar8 + 8) = 0;
          }
          iVar7 = FUN_00aae9af();
          uStack_1c = 8;
          if (iVar7 == 0) {
            uStack_810 = 0;
          }
          else {
            uStack_810 = FUN_009d5450(iVar7,puVar8);
          }
          iVar7 = iRam0000001c;
          uStack_80c = *(char *)(uStack_810 + 0x13) != '\0';
          ppuStack_818 = &PTR_FUN_00e38528;
          local_814 = (undefined4 *)0x0;
          uStack_80b = 1;
          uStack_1c = 9;
          FUN_009a0940();
          (**(code **)(*(int *)(iVar7 + 0x1c0) + 4))();
          uStack_20 = 0xffffffff;
          local_81c = &PTR_FUN_00e38528;
          if ((local_814 != (undefined4 *)0x0) && (uStack_810._1_1_ != '\0')) {
            (**(code **)*local_814)();
          }
          local_824 = 0x15;
          iStack_820 = 0;
          puVar8 = (undefined4 *)FUN_00aae9af();
          if (puVar8 == (undefined4 *)0x0) {
            puVar8 = (undefined4 *)0x0;
          }
          else {
            *puVar8 = 0;
            puVar8[1] = 0;
            puVar8[2] = 0;
            puVar8[4] = 0;
            puVar8[5] = 0;
            puVar8[6] = 0;
            puVar8[0xd] = 0xf;
            puVar8[0xc] = 0;
            *(undefined1 *)(puVar8 + 8) = 0;
          }
          FUN_009d7490(puVar8[1],&local_824);
          FUN_009d7490(puVar8[1],*unaff_EDI);
          FUN_009d6f00();
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
      }
      else if ((char)local_81c == '\0') {
        uStack_7d4 = 0xf;
        uStack_7d8 = 0;
        uStack_7e8 = uStack_7e8 & 0xffffff00;
        FUN_00409350();
        local_c = 0x10;
        FUN_004015b0();
        local_c._0_1_ = 0x11;
        FUN_00987d50();
        FUN_00401280();
        local_c = CONCAT31(local_c._1_3_,0x10);
        FUN_00987ac0();
        ppuStack_4e0 = std::ios_base::vftable;
        FUN_00aad52d();
        local_c = 0xffffffff;
        if (0xf < uStack_7d4) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        uStack_7d4 = 0xf;
        uStack_7d8 = 0;
        uStack_7e8 = uStack_7e8 & 0xffffff00;
        puVar8 = (undefined4 *)FUN_00aae9af();
        if (puVar8 == (undefined4 *)0x0) {
          puVar8 = (undefined4 *)0x0;
        }
        else {
          *puVar8 = 0;
          puVar8[1] = 0;
          puVar8[2] = 0;
          puVar8[4] = 0;
          puVar8[5] = 0;
          puVar8[6] = 0;
          puVar8[0xd] = 0xf;
          puVar8[0xc] = 0;
          *(undefined1 *)(puVar8 + 8) = 0;
          local_c = 0x15;
          FUN_009d7290();
        }
        local_c = 0xffffffff;
        FUN_009d7490();
        iVar7 = FUN_00aae9af();
        local_c = 0x16;
        if (iVar7 == 0) {
          puVar8 = (undefined4 *)0x0;
        }
        else {
          FUN_00408ed0(in_ECX[7] + 0xbc,0,0xffffffff);
          puVar8 = (undefined4 *)FUN_009a28c0(iVar7,puVar8);
        }
        local_c = 0xffffffff;
        if (puVar8 != (undefined4 *)0x0) {
          uVar1 = *(undefined2 *)(iStack_820 + 0x10);
          *puVar8 = *(undefined4 *)(iStack_820 + 0xc);
          *(undefined2 *)(puVar8 + 1) = uVar1;
          iVar7 = in_ECX[0x12];
          puVar9 = (undefined4 *)FUN_00aae9af();
          if (puVar9 == (undefined4 *)0x0) {
            puVar9 = (undefined4 *)0x0;
          }
          else {
            *puVar9 = puVar8;
            puVar9[1] = iVar7;
            puVar9[2] = 0;
            *(undefined1 *)(puVar9 + 3) = 0;
          }
          iVar2 = in_ECX[0x13];
          in_ECX[0x12] = (int)puVar9;
          in_ECX[0x13] = iVar2 + 1;
          if (iVar2 == 0) {
            in_ECX[0x11] = (int)puVar9;
          }
          else {
            *(undefined4 **)(iVar7 + 8) = puVar9;
          }
        }
      }
LAB_00a69594:
      (*(code *)PTR__free_00f071fc)();
      (*(code *)PTR__free_00f071fc)();
    }
    iVar7 = FUN_00a89d00();
    iVar2 = iStack_820;
  } while( true );
}

