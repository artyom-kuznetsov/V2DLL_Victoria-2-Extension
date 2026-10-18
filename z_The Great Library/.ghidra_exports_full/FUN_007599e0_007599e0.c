// FUN_007599e0 @ 007599e0 body=[[007599e0, 00759b18] [00759b1c, 00759b44] [00759b48, 00759c69] [00759c6d, 00759cf0] [00759cf4, 00759d8b] [00759d8f, 00759e38] [00759e3c, 0075a033] [0075a037, 0075a070] [0075a074, 0075a0a3] [0075a0a7, 0075a0d6] [0075a0da, 0075a11d] [0075a121, 0075a147] [0075a14b, 0075a174] [0075a178, 0075a1a3] [0075a1a7, 0075a22c] [0075a230, 0075a41a] [0075a41e, 0075a45a] [0075a45e, 0075a513] [0075a517, 0075a599] [0075a59d, 0075a747] [0075a74b, 0075a806] [0075a80a, 0075a843] [0075a847, 0075a8b9]]


undefined4 FUN_007599e0(void)

{
  void *_Dst;
  void *_Src;
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  int in_ECX;
  bool bVar7;
  uint *puVar10;
  longlong lVar8;
  undefined8 uVar9;
  uint *puVar11;
  uint uVar12;
  int local_144;
  uint auStack_140 [11];
  undefined4 *puStack_114;
  undefined4 uStack_110;
  uint uStack_104;
  uint uStack_100;
  undefined4 uStack_fc;
  undefined1 auStack_f8 [4];
  uint uStack_f4;
  uint uStack_f0;
  uint uStack_ec;
  undefined4 uStack_e8;
  uint uStack_e4;
  undefined4 uStack_e0;
  undefined1 auStack_dc [4];
  undefined1 uStack_d8;
  undefined4 uStack_d4;
  uint uStack_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  uint uStack_b4;
  undefined4 uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  uint uStack_98;
  undefined4 uStack_88;
  uint uStack_84;
  uint uStack_7c;
  undefined4 uStack_6c;
  uint uStack_68;
  uint uStack_60;
  undefined1 auStack_5c [12];
  undefined4 uStack_50;
  uint uStack_4c;
  uint uStack_44;
  void *pvStack_38;
  undefined4 uStack_34;
  uint uStack_30;
  undefined4 uStack_24;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00bba6e3;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  if (0 < (int)(*(int *)(in_ECX + 0x6c8) - *(int *)(in_ECX + 0x6c4) & 0xfffffffcU)) {
    ExceptionList = &pvStack_14;
    iVar1 = FUN_00475500();
    *(undefined1 *)(iVar1 + 0x165) = 0;
    (**(code **)(**(int **)(*(int *)(in_ECX + 0x6c4) + *(int *)(in_ECX + 0x6d4) * 4) + 0xc))();
    *(undefined4 *)(in_ECX + 0x6d4) = 0;
    (**(code **)(*(int *)**(undefined4 **)(in_ECX + 0x6c4) + 4))();
    (**(code **)(**(int **)(*(int *)(in_ECX + 0x6c4) + *(int *)(in_ECX + 0x6d4) * 4) + 8))();
    if (*(int *)(*(int *)(in_ECX + 300) + 0x20) != 0) {
      (**(code **)(*(int *)(*(int *)(*(int *)(in_ECX + 300) + 0x20) + 0x18) + 0x38))();
    }
    auStack_140[8] = 0xf;
    auStack_140[7] = 0;
    auStack_140[3] = auStack_140[3] & 0xffffff00;
    FUN_00409350("exit_button",0xb);
    uStack_c = 0;
    uStack_e4 = 0xf;
    uStack_e8 = 0;
    auStack_f8[0] = 0;
    FUN_00409350("mainmenu_panel",0xe);
    uStack_c = CONCAT31(uStack_c._1_3_,1);
    piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 0x67c) + 0x6c))(auStack_f8);
    iVar1 = (**(code **)(*piVar2 + 0x34))(auStack_140 + 2);
    (**(code **)(*(int *)(iVar1 + 0x54) + 8))(in_ECX + 0xd8);
    if (0xf < uStack_f0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_18 = 0xffffffff;
    uStack_f0 = 0xf;
    uStack_f4 = 0;
    uStack_104 = uStack_104 & 0xffffff00;
    if (0xf < auStack_140[5]) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    (**(code **)(*(int *)(*(int *)(in_ECX + 0x680) + 0x18) + 0x38))();
    (**(code **)(**(int **)(in_ECX + 0x680) + 0x50))();
    iVar1 = *(int *)(in_ECX + 0x154);
    if (*(char *)(iVar1 + 200) != '\0') {
      (**(code **)(**(int **)(iVar1 + 0x58) + 0x38))();
    }
    *(undefined1 *)(iVar1 + 200) = 0;
    (**(code **)(**(int **)(in_ECX + 0x154) + 0x30))();
    *(undefined4 *)(in_ECX + 0x154) = 0;
    (**(code **)(*(int *)(*(int *)(in_ECX + 0x67c) + 0x18) + 0x38))();
    (**(code **)(**(int **)(in_ECX + 0x67c) + 0x50))();
    *(undefined4 *)(in_ECX + 0x67c) = 0;
    iVar1 = 0;
    if (0 < (int)(*(int *)(in_ECX + 0x6c8) - *(int *)(in_ECX + 0x6c4) & 0xfffffffcU)) {
      do {
        puVar5 = *(undefined4 **)(*(int *)(in_ECX + 0x6c4) + iVar1 * 4);
        if (puVar5 != (undefined4 *)0x0) {
          (**(code **)*puVar5)(1);
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(in_ECX + 0x6c8) - *(int *)(in_ECX + 0x6c4) >> 2);
    }
  }
  if (*(int **)(in_ECX + 300) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 300) + 4))(1);
  }
  auStack_140[8] = 0xf;
  auStack_140[7] = 0;
  auStack_140[3] = auStack_140[3] & 0xffffff00;
  FUN_00409350("ToolTip",7);
  uStack_c = 2;
  uVar3 = (**(code **)(**(int **)(in_ECX + -0x34) + 0x38))(auStack_140 + 3);
  puStack_10 = (undefined1 *)0xffffffff;
  *(undefined4 *)(in_ECX + 0x154) = uVar3;
  if (0xf < auStack_140[7]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(auStack_140[2]);
  }
  iVar1 = *(int *)(in_ECX + 0x154);
  if (*(char *)(iVar1 + 200) != '\0') {
    (**(code **)(**(int **)(iVar1 + 0x58) + 0x38))();
  }
  *(undefined1 *)(iVar1 + 200) = 0;
  auStack_140[7] = 0xf;
  auStack_140[6] = 0;
  auStack_140[2] = auStack_140[2] & 0xffffff00;
  FUN_00409350("country_selection_panel",0x17);
  puStack_10 = (undefined1 *)0x3;
  iVar1 = in_ECX + 0x164;
  puVar11 = auStack_140 + 2;
  uVar3 = (**(code **)(**(int **)(in_ECX + -0x34) + 0x2c))();
  uStack_18 = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x67c) = uVar3;
  if (0xf < auStack_140[5]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  puVar5 = DAT_0125b5e0;
  if (DAT_0125b5e0 == (undefined4 *)0x0) {
    iVar4 = FUN_00aae9af();
    uStack_18 = 4;
    if (iVar4 == 0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar5 = (undefined4 *)FUN_00475150();
    }
    uStack_18 = 5;
    if ((puVar5 != DAT_0125b5e0) && (DAT_0125b5e0 != (undefined4 *)0x0)) {
      (**(code **)*DAT_0125b5e0)();
    }
  }
  DAT_0125b5e0 = puVar5;
  uStack_18 = 0xffffffff;
  iVar4 = FUN_0040b410();
  bVar7 = *(int *)(iVar4 + 0x10) == 0;
  local_144 = (uint)bVar7 << 0x18;
  if (0xf < uStack_9c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if (bVar7) {
    auStack_140[5] = 0xf;
    auStack_140[4] = 0;
    auStack_140[0] = auStack_140[0] & 0xffffff00;
    FUN_00409350("version_label",0xd);
    uStack_18 = 6;
    iVar4 = (**(code **)(*(int *)(in_ECX + -0x88) + 0x100))();
    uVar3 = FUN_009da9a0(iVar4 + 0x20,auStack_140 + 7);
    uStack_18 = CONCAT31(uStack_18._1_3_,7);
    puVar10 = auStack_140;
    (**(code **)(**(int **)(in_ECX + 0x67c) + 0x3c))();
    FUN_00408ed0(uVar3,0,0xffffffff);
    FUN_00a5ecc0();
    if (0xf < puStack_114) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(auStack_140[6]);
    }
    puStack_114 = (undefined4 *)0xf;
    auStack_140[10] = 0;
    auStack_140[6] = auStack_140[6] & 0xffffff00;
    if (auStack_140[4] < 0x10) {
LAB_0075a1a7:
      uVar12 = in_ECX - 0x88;
      uStack_1c = 0xffffffff;
      (**(code **)(*(int *)(*(int *)(in_ECX + 0x67c) + 0x18) + 0x34))();
      (**(code **)(**(int **)(in_ECX + 0x67c) + 0x70))();
      puStack_114 = (undefined4 *)0xf;
      auStack_140[10] = 0;
      auStack_140[6] = auStack_140[6] & 0xffffff00;
      FUN_00409350();
      uStack_1c = 0x13;
      uVar9 = CONCAT44(puVar10,in_ECX + 0x164);
      puVar10 = auStack_140 + 6;
      uVar3 = (**(code **)(**(int **)(in_ECX + -0x34) + 0x2c))();
      uStack_24 = 0xffffffff;
      *(undefined4 *)(in_ECX + 0x680) = uVar3;
      if (0xf < auStack_140[9]) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(auStack_140[4]);
      }
      (**(code **)(*(int *)(*(int *)(in_ECX + 0x680) + 0x18) + 0x38))();
      _Src = *(void **)(in_ECX + 0x6c8);
      uVar6 = (int)_Src - *(int *)(in_ECX + 0x6c4) >> 2;
      if (uVar6 < 9) {
        if (uVar6 < 8) {
          FUN_007b94a0();
          puVar5 = *(undefined4 **)(in_ECX + 0x6c8);
          iVar4 = 8 - ((int)puVar5 - *(int *)(in_ECX + 0x6c4) >> 2);
          if (iVar4 != 0) {
            for (; iVar4 != 0; iVar4 = iVar4 + -1) {
              *puVar5 = 0;
              puVar5 = puVar5 + 1;
            }
          }
          *(int *)(in_ECX + 0x6c8) =
               *(int *)(in_ECX + 0x6c8) +
               (8 - (*(int *)(in_ECX + 0x6c8) - *(int *)(in_ECX + 0x6c4) >> 2)) * 4;
        }
      }
      else {
        _Dst = (void *)(*(int *)(in_ECX + 0x6c4) + 0x20);
        if (_Dst != _Src) {
          iVar4 = 0;
          FID_conflict__memcpy(_Dst,_Src,0);
          *(int *)(in_ECX + 0x6c8) = (int)_Dst + iVar4;
        }
      }
      iVar4 = FUN_00aae9af(0x600,puVar10,uVar9);
      uStack_24 = 0x14;
      if (iVar4 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_0076a2f0(iVar4,iVar1,*(undefined4 *)(in_ECX + 0x680));
      }
      uStack_24 = 0xffffffff;
      *(undefined4 *)(*(int *)(in_ECX + 0x6c4) + 0xc) = uVar3;
      (**(code **)(**(int **)(*(int *)(in_ECX + 0x6c4) + 0xc) + 0xc))();
      iVar4 = FUN_00aae9af(0x388);
      uStack_24 = 0x15;
      if (iVar4 == 0) {
        uVar3 = 0;
      }
      else {
        auStack_140[9] = 0xf;
        auStack_140[8] = 0;
        auStack_140[4] = auStack_140[4] & 0xffffff00;
        FUN_00409350("multiplayer_connect_menu",0x18);
        uStack_24 = CONCAT31(uStack_24._1_3_,0x16);
        auStack_140[2] = 0xf;
        auStack_140[1] = 0;
        uVar12 = uVar12 & 0xffffff00;
        FUN_00409350("multiplayer_menu",0x10);
        uStack_24 = 0x17;
        piVar2 = *(int **)(in_ECX + 0x67c);
        puVar11 = (uint *)0x3;
        uVar3 = (**(code **)(*piVar2 + 0x6c))(auStack_140 + 4);
        uVar3 = (**(code **)(*piVar2 + 0x6c))(&stack0xfffffeb0,uVar3);
        uVar3 = FUN_00763520(iVar4,iVar1,uVar3);
      }
      *(undefined4 *)(*(int *)(in_ECX + 0x6c4) + 0x10) = uVar3;
      if (((uint)puVar11 & 2) != 0) {
        puVar11 = (uint *)((uint)puVar11 & 0xfffffffd);
        if (0xf < auStack_140[2]) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(uVar12);
        }
        auStack_140[2] = 0xf;
        auStack_140[1] = 0;
      }
      uStack_24 = 0xffffffff;
      if ((((uint)puVar11 & 1) != 0) &&
         (puVar11 = (uint *)((uint)puVar11 & 0xfffffffe), 0xf < auStack_140[9])) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(auStack_140[4]);
      }
      (**(code **)(**(int **)(*(int *)(in_ECX + 0x6c4) + 0x10) + 0xc))();
      iVar4 = FUN_00aae9af(0x248);
      uStack_24 = 0x1a;
      puStack_114 = (undefined4 *)iVar4;
      if (iVar4 == 0) {
        uVar3 = 0;
      }
      else {
        auStack_140[9] = 0xf;
        auStack_140[8] = 0;
        auStack_140[4] = auStack_140[4] & 0xffffff00;
        FUN_00409350("mainmenu_panel",0xe);
        uStack_24 = CONCAT31(uStack_24._1_3_,0x1b);
        puVar11 = (uint *)((uint)puVar11 | 4);
        uVar3 = (**(code **)(**(int **)(in_ECX + 0x67c) + 0x6c))(auStack_140 + 4);
        uVar3 = FUN_00761f80(iVar4,iVar1,uVar3);
      }
      uStack_24 = 0xffffffff;
      **(undefined4 **)(in_ECX + 0x6c4) = uVar3;
      if ((((uint)puVar11 & 4) != 0) &&
         (puVar11 = (uint *)((uint)puVar11 & 0xfffffffb), 0xf < auStack_140[9])) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(auStack_140[4]);
      }
      (**(code **)(*(int *)**(undefined4 **)(in_ECX + 0x6c4) + 8))();
      puVar5 = (undefined4 *)FUN_00aae9af(0x420);
      uStack_24 = 0x1d;
      puStack_114 = puVar5;
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        auStack_140[9] = 0xf;
        auStack_140[8] = 0;
        auStack_140[4] = auStack_140[4] & 0xffffff00;
        FUN_00409350("menu_settings",0xd);
        uStack_24 = CONCAT31(uStack_24._1_3_,0x1e);
        FUN_0075ac50(puVar5,iVar1,auStack_140 + 4);
        if (0xf < auStack_140[9]) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(auStack_140[4]);
        }
        puVar5[0x105] = CFrontEndView::vftable;
        puVar5[0x106] = iVar1;
        *puVar5 = CFrontendSettingsScreen::vftable;
        puVar5[0x105] = CFrontendSettingsScreen::vftable;
        puVar5[0x107] = iVar1;
      }
      uStack_24 = 0xffffffff;
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        puVar5 = puVar5 + 0x105;
      }
      *(undefined4 **)(*(int *)(in_ECX + 0x6c4) + 8) = puVar5;
      (**(code **)(**(int **)(*(int *)(in_ECX + 0x6c4) + 8) + 0xc))();
      puStack_114 = (undefined4 *)FUN_00aae9af(0x418);
      uStack_24 = 0x1f;
      if (puStack_114 == (undefined4 *)0x0) {
        iVar1 = 0;
      }
      else {
        iVar1 = FUN_007a4fd0(puStack_114);
      }
      uStack_24 = 0xffffffff;
      if (iVar1 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = iVar1 + 8;
      }
      *(int *)(*(int *)(in_ECX + 0x6c4) + 0x14) = iVar1;
      (**(code **)(**(int **)(*(int *)(in_ECX + 0x6c4) + 0x14) + 0xc))();
      iVar1 = FUN_00aae9af(0x238);
      if (iVar1 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_00614170(*(undefined4 *)(in_ECX + -0x34),*(undefined4 *)(in_ECX + 0x15c),
                             in_ECX + 0x164);
      }
      *(undefined4 *)(*(int *)(in_ECX + 0x6c4) + 0x1c) = uVar3;
      (**(code **)(**(int **)(*(int *)(in_ECX + 0x6c4) + 0x1c) + 0xc))();
      iVar1 = FUN_00aae9af(0x98);
      uStack_24 = 0x20;
      puStack_114 = (undefined4 *)iVar1;
      if (iVar1 == 0) {
        uVar3 = 0;
      }
      else {
        auStack_140[9] = 0xf;
        auStack_140[8] = 0;
        auStack_140[4] = auStack_140[4] & 0xffffff00;
        FUN_00409350("tutorial_panel",0xe);
        uStack_24 = CONCAT31(uStack_24._1_3_,0x21);
        puVar11 = (uint *)((uint)puVar11 | 8);
        uVar3 = (**(code **)(**(int **)(in_ECX + 0x67c) + 0x6c))(auStack_140 + 4);
        uVar3 = FUN_0077a120(iVar1,uVar3);
      }
      uStack_24 = 0xffffffff;
      *(undefined4 *)(*(int *)(in_ECX + 0x6c4) + 0x18) = uVar3;
      if ((((uint)puVar11 & 8) != 0) && (0xf < auStack_140[9])) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(auStack_140[4]);
      }
      (**(code **)(**(int **)(*(int *)(in_ECX + 0x6c4) + 0x18) + 0xc))();
      uStack_c4 = 0xf;
      uStack_c8 = 0;
      uStack_d8 = 0;
      FUN_00409350("exit_button",0xb);
      uStack_24 = 0x23;
      uStack_e0 = 0xf;
      uStack_e4 = 0;
      uStack_f4 = uStack_f4 & 0xffffff00;
      FUN_00409350("mainmenu_panel",0xe);
      uStack_24 = CONCAT31(uStack_24._1_3_,0x24);
      piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 0x67c) + 0x6c))(&uStack_f4);
      iVar1 = (**(code **)(*piVar2 + 0x34))(auStack_dc);
      (**(code **)(*(int *)(iVar1 + 0x54) + 4))(in_ECX + 0xd8);
      if (0xf < uStack_ec) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(uStack_100);
      }
      uStack_30 = 0xffffffff;
      uStack_ec = 0xf;
      uStack_f0 = 0;
      uStack_100 = uStack_100 & 0xffffff00;
      if (uStack_d0 < 0x10) {
        uStack_d0 = 0xf;
        uStack_d4 = 0;
        uStack_e4 = uStack_e4 & 0xffffff00;
        auStack_140[8] = FUN_00aae9af(0x1c0);
        uStack_30 = 0x25;
        if (auStack_140[8] == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = FUN_007b1940(auStack_140[8]);
        }
        uStack_30 = 0xffffffff;
        *(undefined4 *)(in_ECX + 300) = uVar3;
        FUN_007580e0();
        ExceptionList = pvStack_38;
        return 1;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_e4);
    }
    lVar8 = (ulonglong)CONCAT41(puVar10,bVar7) << 0x18;
  }
  else {
    uStack_110 = 0xf;
    puStack_114 = (undefined4 *)0x0;
    auStack_140[7] = auStack_140[7] & 0xffffff00;
    FUN_00409350("    Mod: ",9);
    uStack_18 = 8;
    auStack_140[5] = 0xf;
    auStack_140[4] = 0;
    auStack_140[0] = auStack_140[0] & 0xffffff00;
    FUN_00409350("version_label",0xd);
    uStack_18._0_1_ = 9;
    uVar3 = FUN_0045fd40();
    uStack_18._0_1_ = 10;
    FUN_009a8ee0(&uStack_104,uVar3);
    uStack_18._0_1_ = 0xb;
    puVar5 = DAT_0125b5e0;
    if (DAT_0125b5e0 == (undefined4 *)0x0) {
      iVar4 = FUN_00aae9af();
      uStack_18._0_1_ = 0xc;
      if (iVar4 == 0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        puVar5 = (undefined4 *)FUN_00475150();
      }
      uStack_18._0_1_ = 0xd;
      if ((puVar5 != DAT_0125b5e0) && (DAT_0125b5e0 != (undefined4 *)0x0)) {
        (**(code **)*DAT_0125b5e0)();
      }
    }
    DAT_0125b5e0 = puVar5;
    uStack_18._0_1_ = 0xb;
    FUN_009a9880(*(undefined8 *)(DAT_0125b5e0 + 0x1b),*(undefined8 *)(DAT_0125b5e0 + 0x1d));
    uStack_18._0_1_ = 0xe;
    iVar4 = (**(code **)(*(int *)(in_ECX + -0x88) + 0x100))();
    FUN_009da9a0(iVar4 + 0x20,auStack_5c);
    uStack_18._0_1_ = 0xf;
    FUN_00988f20();
    uStack_18._0_1_ = 0x10;
    uVar3 = FUN_00988f20();
    uStack_18 = CONCAT31(uStack_18._1_3_,0x11);
    puVar10 = auStack_140;
    (**(code **)(**(int **)(in_ECX + 0x67c) + 0x3c))();
    FUN_00408ed0(uVar3,0,0xffffffff);
    FUN_00a5ecc0();
    if (0xf < uStack_30) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_44);
    }
    uStack_30 = 0xf;
    uStack_34 = 0;
    uStack_44 = uStack_44 & 0xffffff00;
    if (0xf < uStack_84) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_98);
    }
    uStack_84 = 0xf;
    uStack_88 = 0;
    uStack_98 = uStack_98 & 0xffffff00;
    if (0xf < uStack_4c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_60);
    }
    uStack_4c = 0xf;
    uStack_50 = 0;
    uStack_60 = uStack_60 & 0xffffff00;
    if (0xf < uStack_68) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_7c);
    }
    uStack_68 = 0xf;
    uStack_6c = 0;
    uStack_7c = uStack_7c & 0xffffff00;
    uStack_1c = CONCAT31(uStack_1c._1_3_,0x12);
    FUN_009adb70();
    if (uStack_104 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_104);
    }
    uStack_104 = 0;
    uStack_100 = 0;
    uStack_fc = 0;
    if (0xf < uStack_a0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_b4);
    }
    uStack_a0 = 0xf;
    uStack_a4 = 0;
    uStack_b4 = uStack_b4 & 0xffffff00;
    if (0xf < auStack_140[4]) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_144);
    }
    auStack_140[4] = 0xf;
    auStack_140[3] = 0;
    if (puStack_114 < 0x10) goto LAB_0075a1a7;
    lVar8 = CONCAT44(puVar10,auStack_140[6]);
  }
  uStack_1c = 0xffffffff;
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(lVar8);
}

