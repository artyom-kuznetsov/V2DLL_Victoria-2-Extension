// FUN_007b1ca0 @ 007b1ca0 body=[[007b1ca0, 007b1d7d] [007b1d81, 007b1e25] [007b1e29, 007b1e67] [007b1e6b, 007b1e92] [007b1e96, 007b1f2b] [007b1f2f, 007b1f6d] [007b1f71, 007b1f98] [007b1f9c, 007b214c] [007b2150, 007b21f4] [007b21f8, 007b2236] [007b223a, 007b2261] [007b2265, 007b22fa] [007b22fe, 007b233c] [007b2340, 007b2367] [007b236b, 007b2478] [007b247c, 007b24ab] [007b24b8, 007b2563] [007b2567, 007b2606] [007b260a, 007b269e] [007b26a2, 007b2709] [007b270d, 007b276c] [007b2770, 007b286c] [007b2870, 007b28dd] [007b28e1, 007b2942] [007b2946, 007b29cf] [007b29d3, 007b29fb] [007b29ff, 007b2a67] [007b2a6b, 007b2a87]]


bool FUN_007b1ca0(void)

{
  HMODULE pHVar1;
  int iVar2;
  FARPROC pFVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int in_ECX;
  uint unaff_EBX;
  uint *puVar7;
  uint uStack_108;
  undefined1 auStack_104 [4];
  uint auStack_100 [5];
  char *pcStack_ec;
  undefined4 uStack_e8;
  uint uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined1 *puStack_d4;
  undefined *puStack_d0;
  char *pcStack_cc;
  char *local_c8;
  int **ppiStack_c4;
  undefined4 uStack_ac;
  uint local_a8;
  int *local_a4;
  uint local_a0;
  uint uStack_9c;
  uint uStack_98;
  uint uStack_94;
  uint local_90;
  uint local_8c;
  int *piStack_88;
  int *local_84;
  int local_80;
  int iStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  uint uStack_70;
  uint local_6c;
  undefined4 uStack_64;
  undefined4 uStack_60;
  uint local_5c;
  uint local_58;
  uint uStack_54;
  uint local_50;
  undefined4 uStack_44;
  uint uStack_40;
  uint uStack_3c;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b97338;
  pvStack_14 = ExceptionList;
  local_a8 = 0;
  ExceptionList = &pvStack_14;
  pHVar1 = LoadLibraryA("ggcoins.dll");
  *(HMODULE *)(in_ECX + 0x70) = pHVar1;
  if (pHVar1 == (HMODULE)0x0) {
    local_a4 = (int *)FUN_00aae9af();
    local_c = 0;
    if (local_a4 == (int *)0x0) {
      local_84 = (int *)0x0;
    }
    else {
      local_58 = 0xf;
      local_5c = 0;
      local_6c = local_6c & 0xffffff00;
      ppiStack_c4 = (int **)0x7b1d22;
      FUN_00409350();
      local_c = CONCAT31(local_c._1_3_,1);
      local_a8 = 1;
      ppiStack_c4 = (int **)0x7b1d48;
      local_84 = (int *)FUN_00640680();
    }
    piVar4 = local_84;
    local_c = 0xffffffff;
    if ((local_a8 & 1) != 0) {
      local_a8 = local_a8 & 0xfffffffe;
      if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_58 = 0xf;
      local_5c = 0;
      local_6c = local_6c & 0xffffff00;
    }
    local_8c = 0xf;
    local_90 = 0;
    local_a0 = local_a0 & 0xffffff00;
    ppiStack_c4 = (int **)0x7b1db3;
    FUN_00409350();
    local_c = 3;
    ppiStack_c4 = (int **)0x7b1dcd;
    local_a4 = (int *)FUN_009a8ee0();
    local_c._0_1_ = 4;
    iVar2 = FUN_00475500();
    local_c8 = (char *)*(undefined8 *)(iVar2 + 0x6c);
    ppiStack_c4 = (int **)((ulonglong)*(undefined8 *)(iVar2 + 0x6c) >> 0x20);
    pcStack_cc = (char *)0x7b1e03;
    FUN_009a9880();
    local_c._0_1_ = 5;
    (**(code **)(*piVar4 + 0x3c))();
    if (0xf < uStack_40) {
                    /* WARNING: Subroutine does not return */
      ppiStack_c4 = (int **)&UNK_007b1e26;
      FUN_00aae91b();
    }
    uStack_40 = 0xf;
    uStack_44 = 0;
    uStack_54 = uStack_54 & 0xffffff00;
    puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,6);
    FUN_009adb70();
    if (local_80 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      ppiStack_c4 = (int **)&UNK_007b1e68;
      FUN_00aae91b();
    }
    puStack_10 = (undefined1 *)0xffffffff;
    local_80 = 0;
    iStack_7c = 0;
    uStack_78 = 0;
    if (0xf < local_90) {
                    /* WARNING: Subroutine does not return */
      ppiStack_c4 = (int **)&UNK_007b1e93;
      FUN_00aae91b();
    }
    ppiStack_c4 = (int **)0xe182f8;
    local_90 = 0xf;
    uStack_94 = 0;
    local_a4 = (int *)((uint)local_a4 & 0xffffff00);
    local_c8 = (char *)0x7b1ebb;
    FUN_00409350();
    ppiStack_c4 = &local_84;
    puStack_10 = (undefined1 *)0x7;
    local_c8 = (char *)0x7b1ed5;
    FUN_009a8ee0();
    puStack_10._0_1_ = 8;
    iVar2 = FUN_00475500();
    pcStack_cc = (char *)*(undefined8 *)(iVar2 + 0x6c);
    local_c8 = (char *)((ulonglong)*(undefined8 *)(iVar2 + 0x6c) >> 0x20);
    ppiStack_c4 = (int **)*(undefined8 *)(iVar2 + 0x74);
    puStack_d0 = (undefined *)0x7b1f07;
    FUN_009a9880();
    puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,9);
    ppiStack_c4 = (int **)0x7b1f1b;
    (**(code **)(*piStack_88 + 0x40))();
    if (0xf < uStack_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_3c = 0xf;
    uStack_40 = 0;
    local_50 = local_50 & 0xffffff00;
    local_c = CONCAT31(local_c._1_3_,10);
    FUN_009adb70();
    if (iStack_7c != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_c = 0xffffffff;
    iStack_7c = 0;
    uStack_78 = 0;
    uStack_74 = 0;
    if (0xf < local_8c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8c = 0xf;
    local_90 = 0;
    local_a0 = local_a0 & 0xffffff00;
    FUN_006480e0();
    if (*(int *)(in_ECX + 0x20) != 0) {
      (**(code **)(*(int *)(*(int *)(in_ECX + 0x20) + 0x18) + 0x38))();
    }
  }
  uStack_ac = (undefined4 *)CONCAT13(1,(undefined3)uStack_ac);
  ppiStack_c4 = (int **)0x7b1fee;
  pFVar3 = GetProcAddress(*(HMODULE *)(in_ECX + 0x70),"ggcoins_sign_in");
  *(FARPROC *)(in_ECX + 0x1a0) = pFVar3;
  if (pFVar3 == (FARPROC)0x0) {
    uStack_ac = (undefined4 *)((uint)uStack_ac & 0xffffff);
  }
  ppiStack_c4 = (int **)0x7b2007;
  pFVar3 = GetProcAddress(*(HMODULE *)(in_ECX + 0x70),"ggcoins_get_account");
  *(FARPROC *)(in_ECX + 0x1a4) = pFVar3;
  if (pFVar3 == (FARPROC)0x0) {
    uStack_ac = (undefined4 *)((uint)uStack_ac & 0xffffff);
  }
  ppiStack_c4 = (int **)0x7b2020;
  pFVar3 = GetProcAddress(*(HMODULE *)(in_ECX + 0x70),"ggcoins_get_items");
  *(FARPROC *)(in_ECX + 0x1a8) = pFVar3;
  if (pFVar3 == (FARPROC)0x0) {
    uStack_ac = (undefined4 *)((uint)uStack_ac & 0xffffff);
  }
  ppiStack_c4 = (int **)0x7b2039;
  pFVar3 = GetProcAddress(*(HMODULE *)(in_ECX + 0x70),"ggcoins_buy");
  *(FARPROC *)(in_ECX + 0x1ac) = pFVar3;
  if (pFVar3 == (FARPROC)0x0) {
    uStack_ac = (undefined4 *)((uint)uStack_ac & 0xffffff);
  }
  ppiStack_c4 = (int **)0x7b2052;
  pFVar3 = GetProcAddress(*(HMODULE *)(in_ECX + 0x70),"ggcoins_fopen");
  *(FARPROC *)(in_ECX + 0x1b0) = pFVar3;
  if (pFVar3 == (FARPROC)0x0) {
    uStack_ac = (undefined4 *)((uint)uStack_ac & 0xffffff);
  }
  ppiStack_c4 = (int **)0x7b206b;
  pFVar3 = GetProcAddress(*(HMODULE *)(in_ECX + 0x70),"ggcoins_fread");
  *(FARPROC *)(in_ECX + 0x1b4) = pFVar3;
  if (pFVar3 == (FARPROC)0x0) {
    uStack_ac = (undefined4 *)((uint)uStack_ac & 0xffffff);
  }
  ppiStack_c4 = (int **)0x7b2084;
  pFVar3 = GetProcAddress(*(HMODULE *)(in_ECX + 0x70),"ggcoins_fclose");
  *(FARPROC *)(in_ECX + 0x1b8) = pFVar3;
  if (pFVar3 == (FARPROC)0x0) {
    uStack_ac = (undefined4 *)((uint)uStack_ac & 0xffffff);
  }
  ppiStack_c4 = (int **)0x7b209d;
  pFVar3 = GetProcAddress(*(HMODULE *)(in_ECX + 0x70),"ggcoins_free");
  *(FARPROC *)(in_ECX + 0x1bc) = pFVar3;
  if ((pFVar3 == (FARPROC)0x0) || (uStack_ac._3_1_ == '\0')) {
    local_a4 = (int *)FUN_00aae9af();
    local_c = 0xb;
    if (local_a4 == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      local_8c = 0xf;
      local_90 = 0;
      local_a0 = local_a0 & 0xffffff00;
      ppiStack_c4 = (int **)0x7b20f7;
      FUN_00409350();
      local_c = CONCAT31(local_c._1_3_,0xc);
      local_a8 = local_a8 | 2;
      ppiStack_c4 = (int **)0x7b211b;
      piVar4 = (int *)FUN_00640680();
    }
    local_c = 0xffffffff;
    local_84 = piVar4;
    if ((local_a8 & 2) != 0) {
      local_a8 = local_a8 & 0xfffffffd;
      if (0xf < local_8c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8c = 0xf;
      local_90 = 0;
      local_a0 = local_a0 & 0xffffff00;
    }
    local_58 = 0xf;
    local_5c = 0;
    local_6c = local_6c & 0xffffff00;
    ppiStack_c4 = (int **)0x7b2182;
    FUN_00409350();
    local_c = 0xe;
    ppiStack_c4 = (int **)0x7b219c;
    local_a4 = (int *)FUN_009a8ee0();
    local_c._0_1_ = 0xf;
    iVar2 = FUN_00475500();
    local_c8 = (char *)*(undefined8 *)(iVar2 + 0x6c);
    ppiStack_c4 = (int **)((ulonglong)*(undefined8 *)(iVar2 + 0x6c) >> 0x20);
    pcStack_cc = (char *)0x7b21d2;
    FUN_009a9880();
    local_c._0_1_ = 0x10;
    (**(code **)(*piVar4 + 0x3c))();
    if (0xf < uStack_40) {
                    /* WARNING: Subroutine does not return */
      ppiStack_c4 = (int **)&UNK_007b21f5;
      FUN_00aae91b();
    }
    uStack_40 = 0xf;
    uStack_44 = 0;
    uStack_54 = uStack_54 & 0xffffff00;
    puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,0x11);
    FUN_009adb70();
    if (local_80 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      ppiStack_c4 = (int **)&UNK_007b2237;
      FUN_00aae91b();
    }
    puStack_10 = (undefined1 *)0xffffffff;
    local_80 = 0;
    iStack_7c = 0;
    uStack_78 = 0;
    if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
      ppiStack_c4 = (int **)&UNK_007b2262;
      FUN_00aae91b();
    }
    ppiStack_c4 = (int **)0xe182f8;
    local_5c = 0xf;
    uStack_60 = 0;
    uStack_70 = uStack_70 & 0xffffff00;
    local_c8 = (char *)0x7b228a;
    FUN_00409350();
    ppiStack_c4 = &local_84;
    puStack_10 = (undefined1 *)0x12;
    local_c8 = (char *)0x7b22a4;
    FUN_009a8ee0();
    puStack_10._0_1_ = 0x13;
    iVar2 = FUN_00475500();
    pcStack_cc = (char *)*(undefined8 *)(iVar2 + 0x6c);
    local_c8 = (char *)((ulonglong)*(undefined8 *)(iVar2 + 0x6c) >> 0x20);
    ppiStack_c4 = (int **)*(undefined8 *)(iVar2 + 0x74);
    puStack_d0 = (undefined *)0x7b22d6;
    FUN_009a9880();
    puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,0x14);
    ppiStack_c4 = (int **)0x7b22ea;
    (**(code **)(*piStack_88 + 0x40))();
    if (0xf < uStack_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_3c = 0xf;
    uStack_40 = 0;
    local_50 = local_50 & 0xffffff00;
    local_c = CONCAT31(local_c._1_3_,0x15);
    FUN_009adb70();
    if (iStack_7c != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_c = 0xffffffff;
    iStack_7c = 0;
    uStack_78 = 0;
    uStack_74 = 0;
    if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_58 = 0xf;
    local_5c = 0;
    local_6c = local_6c & 0xffffff00;
    FUN_006480e0();
    if (*(int *)(in_ECX + 0x20) != 0) {
      (**(code **)(*(int *)(*(int *)(in_ECX + 0x20) + 0x18) + 0x38))();
    }
  }
  if (*(int **)(in_ECX + 0x20) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 0x20) + 0x50))();
    (**(code **)(*(int *)(in_ECX + 0x94) + 0xb4))();
    if (*(char *)(in_ECX + 0x128) != '\0') {
      DAT_013f0934 = DAT_013f0934 + -1;
    }
    for (piVar4 = *(int **)(in_ECX + 0x118); (piVar4 != (int *)0x0 && (*piVar4 != in_ECX + 100));
        piVar4 = (int *)piVar4[2]) {
    }
    FUN_005f2ae0();
  }
  local_8c = 0xf;
  local_90 = 0;
  local_a0 = local_a0 & 0xffffff00;
  ppiStack_c4 = (int **)0x7b2423;
  FUN_00409350();
  local_c = 0x16;
  iVar2 = *DAT_01258a80;
  local_a4 = DAT_01258a80;
  (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x3c))();
  ppiStack_c4 = (int **)0x7b245a;
  uVar5 = (**(code **)(iVar2 + 0x2c))();
  pvStack_14 = (void *)0xffffffff;
  *(undefined4 *)(in_ECX + 0x20) = uVar5;
  if (0xf < uStack_94) {
    ppiStack_c4 = (int **)local_a8;
                    /* WARNING: Subroutine does not return */
    local_c8 = &UNK_007b2479;
    FUN_00aae91b();
  }
  if ((*(int *)(in_ECX + 0x78) - *(int *)(in_ECX + 0x74) & 0xfffffffcU) != 0) {
    puVar6 = *(undefined4 **)(in_ECX + 0x74);
    iVar2 = *(int *)(in_ECX + 0x78) - (int)puVar6 >> 2;
    if ((iVar2 != 0) && (uStack_ac = puVar6 + iVar2, puVar6 != uStack_ac)) {
      ppiStack_c4 = (int **)*puVar6;
                    /* WARNING: Subroutine does not return */
      local_c8 = &UNK_007b24ac;
      FUN_00aae91b();
    }
  }
  ppiStack_c4 = (int **)0x7b24c0;
  FUN_007b9430();
  ppiStack_c4 = (int **)0x7b24cb;
  FUN_007b9430();
  ppiStack_c4 = (int **)0xc;
  local_c8 = (char *)0x7b24d2;
  puVar6 = (undefined4 *)FUN_00aae9af();
  pvStack_14 = (void *)0x17;
  uStack_ac = puVar6;
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    ppiStack_c4 = (int **)0x11;
    local_c8 = "connection_window";
    uStack_94 = 0xf;
    uStack_98 = 0;
    local_a8 = local_a8 & 0xffffff00;
    pcStack_cc = (char *)0x7b250b;
    FUN_00409350();
    pvStack_14 = (void *)CONCAT31(pvStack_14._1_3_,0x18);
    unaff_EBX = unaff_EBX | 4;
    ppiStack_c4 = (int **)&local_a8;
    local_c8 = (char *)0x7b2527;
    uVar5 = (**(code **)(**(int **)(in_ECX + 0x20) + 0x6c))();
    *puVar6 = CMicroItemsTab::vftable;
    puVar6[1] = uVar5;
    puVar6[2] = in_ECX;
  }
  pvStack_14 = (void *)0xffffffff;
  **(undefined4 **)(in_ECX + 0x74) = puVar6;
  if (((unaff_EBX & 4) != 0) && (unaff_EBX = unaff_EBX & 0xfffffffb, 0xf < uStack_94)) {
    ppiStack_c4 = (int **)local_a8;
                    /* WARNING: Subroutine does not return */
    local_c8 = &UNK_007b2564;
    FUN_00aae91b();
  }
  ppiStack_c4 = (int **)0x14;
  local_c8 = (char *)0x7b256e;
  puVar6 = (undefined4 *)FUN_00aae9af();
  pvStack_14 = (void *)0x1a;
  uStack_ac = puVar6;
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    ppiStack_c4 = (int **)0xe;
    local_c8 = "myitems_window";
    uStack_94 = 0xf;
    uStack_98 = 0;
    local_a8 = local_a8 & 0xffffff00;
    pcStack_cc = (char *)0x7b25a7;
    FUN_00409350();
    pvStack_14 = (void *)CONCAT31(pvStack_14._1_3_,0x1b);
    unaff_EBX = unaff_EBX | 8;
    ppiStack_c4 = (int **)&local_a8;
    local_c8 = (char *)0x7b25c3;
    uVar5 = (**(code **)(**(int **)(in_ECX + 0x20) + 0x6c))();
    puVar6[1] = uVar5;
    puVar6[2] = in_ECX;
    *puVar6 = CMicroPurchasedItemsTab::vftable;
    puVar6[3] = 0;
    puVar6[4] = 0;
  }
  pvStack_14 = (void *)0xffffffff;
  *(undefined4 **)(*(int *)(in_ECX + 0x74) + 4) = puVar6;
  if (((unaff_EBX & 8) != 0) && (unaff_EBX = unaff_EBX & 0xfffffff7, 0xf < uStack_94)) {
    ppiStack_c4 = (int **)local_a8;
                    /* WARNING: Subroutine does not return */
    local_c8 = &UNK_007b2607;
    FUN_00aae91b();
  }
  ppiStack_c4 = (int **)0xc;
  local_c8 = (char *)0x7b2611;
  puVar6 = (undefined4 *)FUN_00aae9af();
  pvStack_14 = (void *)0x1d;
  uStack_ac = puVar6;
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    ppiStack_c4 = (int **)0x10;
    local_c8 = "available_window";
    uStack_94 = 0xf;
    uStack_98 = 0;
    local_a8 = local_a8 & 0xffffff00;
    pcStack_cc = (char *)0x7b264a;
    FUN_00409350();
    pvStack_14 = (void *)CONCAT31(pvStack_14._1_3_,0x1e);
    unaff_EBX = unaff_EBX | 0x10;
    ppiStack_c4 = (int **)&local_a8;
    local_c8 = (char *)0x7b2666;
    uVar5 = (**(code **)(**(int **)(in_ECX + 0x20) + 0x6c))();
    puVar6[1] = uVar5;
    puVar6[2] = in_ECX;
    *puVar6 = CMicroAvailableItemsTab::vftable;
  }
  pvStack_14 = (void *)0xffffffff;
  *(undefined4 **)(*(int *)(in_ECX + 0x74) + 8) = puVar6;
  if (((unaff_EBX & 0x10) != 0) && (0xf < uStack_94)) {
    ppiStack_c4 = (int **)local_a8;
                    /* WARNING: Subroutine does not return */
    local_c8 = &UNK_007b269f;
    FUN_00aae91b();
  }
  ppiStack_c4 = (int **)0xb;
  local_c8 = "myitems_tab";
  **(undefined4 **)(in_ECX + 0x84) = 0;
  uStack_94 = 0xf;
  uStack_98 = 0;
  local_a8 = local_a8 & 0xffffff00;
  pcStack_cc = (char *)0x7b26cb;
  FUN_00409350();
  pvStack_14 = (void *)0x20;
  iVar2 = *(int *)(in_ECX + 0x84);
  ppiStack_c4 = (int **)&local_a8;
  local_c8 = (char *)0x7b26eb;
  uVar5 = (**(code **)(**(int **)(in_ECX + 0x20) + 0x48))();
  *(undefined4 *)(iVar2 + 4) = uVar5;
  uStack_18 = 0xffffffff;
  if (0xf < uStack_98) {
    local_c8 = (char *)uStack_ac;
                    /* WARNING: Subroutine does not return */
    pcStack_cc = &UNK_007b270a;
    FUN_00aae91b();
  }
  local_c8 = (char *)0x12;
  pcStack_cc = "availableitems_tab";
  uStack_98 = 0xf;
  uStack_9c = 0;
  uStack_ac = (undefined4 *)((uint)uStack_ac & 0xffffff00);
  puStack_d0 = (undefined *)0x7b272e;
  FUN_00409350();
  uStack_18 = 0x21;
  iVar2 = *(int *)(in_ECX + 0x84);
  local_c8 = (char *)&uStack_ac;
  pcStack_cc = (char *)0x7b274e;
  uVar5 = (**(code **)(**(int **)(in_ECX + 0x20) + 0x48))();
  *(undefined4 *)(iVar2 + 8) = uVar5;
  uStack_1c = 0xffffffff;
  if (0xf < uStack_9c) {
                    /* WARNING: Subroutine does not return */
    puStack_d0 = &UNK_007b276d;
    pcStack_cc = (char *)unaff_EBX;
    FUN_00aae91b();
  }
  uStack_e8 = 7;
  puStack_d0 = (undefined *)0xf;
  puStack_d4 = (undefined1 *)0x0;
  pcStack_ec = "myitems";
  uStack_e4 = uStack_e4 & 0xffffff00;
  auStack_100[4] = 0x7b2792;
  FUN_00409350();
  uStack_e8 = *(undefined4 *)(*(int *)(in_ECX + 0x84) + 4);
  pcStack_ec = (char *)0x7b27b0;
  (**(code **)(*(int *)(in_ECX + 0x94) + 0xb0))();
  puStack_d4 = auStack_104;
  uStack_108 = 0xe;
  auStack_100[4] = 0xf;
  auStack_100[3] = 0;
  auStack_104[0] = 0;
  FUN_00409350("availableitems");
  uStack_108 = *(uint *)(*(int *)(in_ECX + 0x84) + 8);
  (**(code **)(*(int *)(in_ECX + 0x94) + 0xb0))();
  FUN_006bec20(in_ECX + 100);
  uStack_dc = 0xf;
  uStack_e0 = 0;
  auStack_100[4] = auStack_100[4] & 0xffffff00;
  FUN_00409350("connect",7);
  local_5c = 0x22;
  puVar7 = auStack_100 + 4;
  iVar2 = (**(code **)(**(int **)(**(int **)(in_ECX + 0x74) + 4) + 0x34))(puVar7);
  (**(code **)(*(int *)(iVar2 + 0x54) + 4))(in_ECX + 0x148);
  uStack_64 = 0xffffffff;
  if (0xf < uStack_e4) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(auStack_100[2]);
  }
  uStack_e4 = 0xf;
  uStack_e8 = 0;
  auStack_100[2] = auStack_100[2] & 0xffffff00;
  FUN_00409350("cancel",6);
  uStack_64 = 0x23;
  iVar2 = (**(code **)(**(int **)(**(int **)(in_ECX + 0x74) + 4) + 0x34))(auStack_100 + 2);
  (**(code **)(*(int *)(iVar2 + 0x54) + 4))(in_ECX + 0x174);
  local_6c = 0xffffffff;
  if (pcStack_ec < 0x10) {
    pcStack_ec = (char *)0xf;
    auStack_100[4] = 0;
    auStack_100[0] = auStack_100[0] & 0xffffff00;
    FUN_00409350("close_window",0xc);
    local_6c = 0x24;
    iVar2 = (**(code **)(**(int **)(in_ECX + 0x20) + 0x34))(auStack_100);
    (**(code **)(*(int *)(iVar2 + 0x54) + 4))(in_ECX + 0x174);
    uStack_74 = 0xffffffff;
    if (0xf < auStack_100[3]) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_108);
    }
    ppiStack_c4 = (int **)0x0;
    puStack_d4 = (undefined1 *)((uint)puStack_d4 & 0xffffff00);
    FUN_00409350(&DAT_00df0d5c,1);
    uStack_74 = 0x25;
    auStack_100[3] = 0xf;
    auStack_100[2] = 0;
    uStack_108 = uStack_108 & 0xffffff00;
    FUN_00409350("password_box",0xc);
    uStack_74 = CONCAT31(uStack_74._1_3_,0x26);
    (**(code **)(**(int **)(**(int **)(in_ECX + 0x74) + 4) + 0x40))(&uStack_108);
    FUN_00408ed0(&uStack_d8,0,0xffffffff);
    if (0xf < auStack_100[2]) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(puVar7);
    }
    uStack_78 = 0xffffffff;
    auStack_100[2] = 0xf;
    auStack_100[1] = 0;
    if (0xf < ppiStack_c4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_d8);
    }
    FUN_007b3680(0);
    local_8c = 0xf;
    local_90 = 0;
    local_a0 = local_a0 & 0xffffff00;
    FUN_00409350("micro",5);
    uStack_78 = 0x27;
    (**(code **)(*(int *)(*(int *)(in_ECX + 0x20) + 0x18) + 0x78))(&local_a0);
    if (local_90 < 0x10) {
      ExceptionList = local_84;
      return *(int *)(in_ECX + 0x20) != 0;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_a4);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(auStack_100[0]);
}

