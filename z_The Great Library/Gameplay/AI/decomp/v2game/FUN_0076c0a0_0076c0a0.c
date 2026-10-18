// FUN_0076c0a0 @ 0076c0a0 body=[[0076c0a0, 0076c15d] [0076c161, 0076c188] [0076c18c, 0076c20b] [0076c20f, 0076c293] [0076c297, 0076c2be] [0076c2c2, 0076c390] [0076c394, 0076c452] [0076c456, 0076c483] [0076c487, 0076c56d] [0076c571, 0076c679] [0076c67d, 0076c69e] [0076c6a2, 0076c6be] [0076c6c2, 0076c6e4] [0076c6e8, 0076c787] [0076c78b, 0076c838] [0076c83c, 0076c854] [0076c858, 0076c91f] [0076c923, 0076c9b2] [0076c9b6, 0076c9de] [0076c9e2, 0076ca69] [0076ca6d, 0076ca98] [0076ca9c, 0076cb0a] [0076cb0e, 0076cb7f] [0076cb83, 0076cb99] [0076cb9d, 0076cbb1]]


void FUN_0076c0a0(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int *in_ECX;
  uint uVar5;
  bool bVar6;
  int *piStack_120;
  undefined *puStack_11c;
  uint uStack_118;
  uint *puStack_114;
  undefined4 ***pppuStack_110;
  uint *puStack_10c;
  uint *puStack_108;
  uint *puStack_104;
  char *pcStack_100;
  undefined1 *puStack_fc;
  char *pcStack_f8;
  uint *puStack_f4;
  undefined4 uStack_e4;
  uint local_e0;
  int iStack_dc;
  uint uStack_d8;
  undefined4 uStack_d4;
  undefined1 **local_d0;
  int local_cc;
  uint uStack_c8;
  uint uStack_c4;
  uint uStack_c0;
  undefined1 *puStack_bc;
  int *piStack_b8;
  uint local_b4;
  undefined4 uStack_b0;
  uint uStack_ac;
  uint uStack_a8;
  uint local_a4;
  uint local_a0;
  int *piStack_9c;
  undefined4 local_98;
  uint uStack_94;
  uint uStack_90;
  uint uStack_8c;
  undefined1 auStack_88 [4];
  uint uStack_84;
  uint uStack_80;
  undefined4 uStack_74;
  uint uStack_70;
  undefined4 uStack_68;
  undefined4 ***apppuStack_64 [4];
  uint uStack_54;
  uint uStack_50;
  undefined1 uStack_4c;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  void *pvStack_2c;
  undefined1 uStack_28;
  undefined1 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b9d5e8;
  pvStack_14 = ExceptionList;
  puStack_f4 = (uint *)0x0;
  pcStack_f8 = "";
  local_98 = 0;
  puStack_fc = (undefined1 *)0x76c0dd;
  ExceptionList = &pvStack_14;
  FUN_00409350();
  puStack_f4 = (uint *)0x10;
  pcStack_f8 = "multiplayer_list";
  local_cc = 0xf;
  local_d0 = (undefined1 **)0x0;
  local_e0 = local_e0 & 0xffffff00;
  puStack_fc = (undefined1 *)0x76c0fe;
  FUN_00409350();
  local_c = 0;
  puStack_f4 = (uint *)0xb;
  pcStack_f8 = "multiplayer";
  local_a0 = 0xf;
  local_a4 = 0;
  local_b4 = local_b4 & 0xffffff00;
  puStack_fc = (undefined1 *)0x76c121;
  FUN_00409350();
  local_c = CONCAT31(local_c._1_3_,1);
  puStack_f4 = &local_b4;
  pcStack_f8 = (char *)0x76c13b;
  piVar1 = (int *)(**(code **)(*(int *)in_ECX[0x9e] + 0x6c))();
  pcStack_f8 = (char *)&uStack_e4;
  puStack_fc = (undefined1 *)0x76c149;
  piStack_9c = (int *)(**(code **)(*piVar1 + 0x7c))();
  if (0xf < uStack_a8) {
    puStack_fc = puStack_bc;
                    /* WARNING: Subroutine does not return */
    pcStack_100 = &UNK_0076c15e;
    FUN_00aae91b();
  }
  pvStack_14 = (void *)0xffffffff;
  uStack_a8 = 0xf;
  uStack_ac = 0;
  puStack_bc = (undefined1 *)((uint)puStack_bc & 0xffffff00);
  if (0xf < uStack_d4) {
                    /* WARNING: Subroutine does not return */
    pcStack_100 = &UNK_0076c189;
    FUN_00aae91b();
  }
  uStack_d4 = 0xf;
  uStack_d8 = 0;
  puStack_fc = (undefined1 *)0x76c1a3;
  (**(code **)(*piStack_9c + 0x5c))();
  puStack_fc = (undefined1 *)0x76c1ae;
  (**(code **)(*piStack_9c + 0x54))();
  puStack_fc = (undefined1 *)0x7;
  pcStack_100 = "chatlog";
  uStack_d4 = 0xf;
  uStack_d8 = 0;
  puStack_104 = (uint *)0x76c1ca;
  FUN_00409350();
  pvStack_14 = (void *)0x2;
  puStack_fc = &stack0xffffff18;
  pcStack_100 = (char *)0x76c1e7;
  piVar1 = (int *)(**(code **)(*(int *)in_ECX[0x9e] + 0x7c))();
  pcStack_100 = (char *)0x76c1f0;
  (**(code **)(*piVar1 + 0x5c))();
  uStack_18 = 0xffffffff;
  if (0xf < uStack_d8) {
                    /* WARNING: Subroutine does not return */
    puStack_104 = (uint *)&UNK_0076c20c;
    FUN_00aae91b();
  }
  pcStack_100 = (char *)0xe;
  puStack_104 = (uint *)0xe14a40;
  uStack_ac = 0xf;
  uStack_b0 = 0;
  uStack_c0 = uStack_c0 & 0xffffff00;
  puStack_108 = (uint *)0x76c22b;
  FUN_00409350();
  uStack_18 = 3;
  pcStack_100 = (char *)0x9;
  puStack_104 = (uint *)0xe14a34;
  uStack_d8 = 0xf;
  iStack_dc = 0;
  puStack_108 = (uint *)0x76c252;
  FUN_00409350();
  uStack_18 = CONCAT31(uStack_18._1_3_,4);
  pcStack_100 = &stack0xffffff14;
  puStack_104 = (uint *)0x76c26c;
  piVar1 = (int *)(**(code **)(*(int *)in_ECX[0x9e] + 0x6c))();
  puStack_104 = &uStack_c4;
  puStack_108 = (uint *)0x76c27a;
  piVar1 = (int *)(**(code **)(*piVar1 + 0x7c))();
  puStack_108 = (uint *)0x76c283;
  (**(code **)(*piVar1 + 0x5c))();
  if (0xf < local_e0) {
    puStack_108 = puStack_f4;
                    /* WARNING: Subroutine does not return */
    puStack_10c = (uint *)&UNK_0076c294;
    FUN_00aae91b();
  }
  uStack_20 = 0xffffffff;
  local_e0 = 0xf;
  uStack_e4 = 0;
  puStack_f4 = (uint *)((uint)puStack_f4 & 0xffffff00);
  if (0xf < local_b4) {
    puStack_108 = (uint *)uStack_c8;
                    /* WARNING: Subroutine does not return */
    puStack_10c = (uint *)&UNK_0076c2bf;
    FUN_00aae91b();
  }
  puStack_108 = (uint *)0x76c2c7;
  piVar1 = (int *)FUN_00754640();
  for (uStack_a8 = *piVar1; uStack_a8 != 0; uStack_a8 = *(int *)(uStack_a8 + 0xb8)) {
    puStack_108 = (uint *)0x88;
    puStack_10c = (uint *)0x76c2df;
    local_cc = FUN_00aae9af();
    uStack_20 = 5;
    if (local_cc == 0) {
      local_cc = 0;
    }
    else {
      puStack_108 = (uint *)0xe;
      puStack_10c = (uint *)0xe14a50;
      local_e0 = 0xf;
      uStack_e4 = 0;
      puStack_f4 = (uint *)((uint)puStack_f4 & 0xffffff00);
      pppuStack_110 = (undefined4 ***)0x76c311;
      FUN_00409350();
      uStack_20 = CONCAT31(uStack_20._1_3_,6);
      piVar1 = *(int **)(DAT_012588e8 + 0xb24);
      uStack_ac = uStack_ac | 1;
      puStack_10c = (uint *)uStack_a8;
      pppuStack_110 = (undefined4 ***)&puStack_f4;
      puStack_114 = (uint *)0x76c33d;
      local_d0 = (undefined1 **)(**(code **)(*piVar1 + 0x3c))();
      puStack_114 = (uint *)0x76c34a;
      (**(code **)(*piVar1 + 0x34))();
      puStack_114 = (uint *)local_cc;
      uStack_118 = 0x76c35a;
      local_cc = FUN_00768b70();
    }
    uStack_20 = 0xffffffff;
    if ((uStack_ac & 1) != 0) {
      uStack_ac = uStack_ac & 0xfffffffe;
      if (0xf < local_e0) {
        puStack_108 = puStack_f4;
                    /* WARNING: Subroutine does not return */
        puStack_10c = (uint *)&UNK_0076c391;
        FUN_00aae91b();
      }
      local_e0 = 0xf;
      uStack_e4 = 0;
      puStack_f4 = (uint *)((uint)puStack_f4 & 0xffffff00);
    }
    if ((DAT_012589ac != 1) && (DAT_012589ac != 0)) {
      puStack_108 = (uint *)local_cc;
      puStack_10c = (uint *)0x76c3b8;
      FUN_00768f90();
    }
    puStack_108 = (uint *)0xe;
    puStack_10c = (uint *)0xe14a40;
    uStack_70 = 0xf;
    uStack_74 = 0;
    uStack_84 = uStack_84 & 0xffffff00;
    pppuStack_110 = (undefined4 ***)0x76c3e0;
    FUN_00409350();
    uStack_20 = 8;
    puStack_108 = (uint *)0x9;
    puStack_10c = (uint *)0xe14a34;
    local_b4 = 0xf;
    piStack_b8 = (int *)0x0;
    uStack_c8 = uStack_c8 & 0xffffff00;
    pppuStack_110 = (undefined4 ***)0x76c407;
    FUN_00409350();
    uStack_20 = CONCAT31(uStack_20._1_3_,9);
    puStack_108 = &uStack_c8;
    puStack_10c = (uint *)0x76c421;
    piVar1 = (int *)(**(code **)(*(int *)in_ECX[0x9e] + 0x6c))();
    puStack_10c = (uint *)auStack_88;
    pppuStack_110 = (undefined4 ***)0x76c432;
    piVar1 = (int *)(**(code **)(*piVar1 + 0x7c))();
    pppuStack_110 = (undefined4 ***)0x1;
    puStack_114 = (uint *)uStack_d4;
    uStack_118 = 0x76c442;
    (**(code **)(*piVar1 + 0x10))();
    if (0xf < uStack_c4) {
      uStack_118 = uStack_d8;
                    /* WARNING: Subroutine does not return */
      puStack_11c = &UNK_0076c453;
      FUN_00aae91b();
    }
    uStack_30 = 0xffffffff;
    uStack_c4 = 0xf;
    uStack_c8 = 0;
    uStack_d8 = uStack_d8 & 0xffffff00;
    if (0xf < uStack_80) {
      uStack_118 = uStack_94;
                    /* WARNING: Subroutine does not return */
      puStack_11c = &UNK_0076c484;
      FUN_00aae91b();
    }
    uStack_118 = 0x76c496;
    (**(code **)(*(int *)(iStack_dc + 0x1c) + 0x30))();
  }
  puStack_108 = (uint *)0x76c4b5;
  (**(code **)(*in_ECX + 0x24))();
  puStack_108 = (uint *)0xa;
  puStack_10c = (uint *)0xe14a60;
  uStack_50 = 0xf;
  uStack_54 = 0;
  apppuStack_64[0] = (undefined4 ***)((uint)apppuStack_64[0] & 0xffffff00);
  pppuStack_110 = (undefined4 ***)0x76c4dd;
  FUN_00409350();
  uStack_20._0_1_ = 10;
  uStack_20._1_3_ = 0;
  puVar2 = DAT_0125b5e0;
  if (DAT_0125b5e0 == (undefined4 *)0x0) {
    puStack_108 = (uint *)0x180;
    puStack_10c = (uint *)0x76c4fb;
    puStack_108 = (uint *)FUN_00aae9af();
    uStack_20._0_1_ = 0xb;
    if (puStack_108 == (uint *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puStack_10c = (uint *)0x76c514;
      local_d0 = (undefined1 **)puStack_108;
      puVar2 = (undefined4 *)FUN_00475150();
    }
    uStack_20._0_1_ = 0xc;
    local_d0 = (undefined1 **)0x0;
    if ((puVar2 != DAT_0125b5e0) && (DAT_0125b5e0 != (undefined4 *)0x0)) {
      puStack_108 = (uint *)0x1;
      puStack_10c = (uint *)0x76c53c;
      (**(code **)*DAT_0125b5e0)();
    }
  }
  DAT_0125b5e0 = puVar2;
  uStack_20._0_1_ = 10;
  puStack_10c = (uint *)0x76c555;
  puStack_108 = DAT_0125b5e0;
  iVar3 = FUN_0040b410();
  bVar6 = *(int *)(iVar3 + 0x10) != 0;
  uStack_d4 = CONCAT13(bVar6,(undefined3)uStack_d4);
  if (0xf < uStack_8c) {
    puStack_108 = (uint *)local_a0;
                    /* WARNING: Subroutine does not return */
    puStack_10c = (uint *)&UNK_0076c56e;
    FUN_00aae91b();
  }
  if (bVar6) {
    puStack_108 = (uint *)0xb;
    puStack_10c = (uint *)0xe14a6c;
    uStack_70 = 0xf;
    uStack_74 = 0;
    uStack_84 = uStack_84 & 0xffffff00;
    pppuStack_110 = (undefined4 ***)0x76c5a7;
    FUN_00409350();
    uStack_20._0_1_ = 0xd;
    puVar2 = DAT_0125b5e0;
    if (DAT_0125b5e0 == (undefined4 *)0x0) {
      puStack_108 = (uint *)0x180;
      puStack_10c = (uint *)0x76c5c2;
      puStack_108 = (uint *)FUN_00aae9af();
      uStack_20._0_1_ = 0xe;
      if (puStack_108 == (uint *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        puStack_10c = (uint *)0x76c5db;
        local_d0 = (undefined1 **)puStack_108;
        puVar2 = (undefined4 *)FUN_00475150();
      }
      uStack_20._0_1_ = 0xf;
      local_d0 = (undefined1 **)0x0;
      if ((puVar2 != DAT_0125b5e0) && (DAT_0125b5e0 != (undefined4 *)0x0)) {
        puStack_108 = (uint *)0x1;
        puStack_10c = (uint *)0x76c603;
        (**(code **)*DAT_0125b5e0)();
      }
    }
    DAT_0125b5e0 = puVar2;
    uStack_20._0_1_ = 0xd;
    puStack_10c = (uint *)0x76c61c;
    puStack_108 = DAT_0125b5e0;
    puStack_108 = (uint *)FUN_0040b410();
    uStack_20._0_1_ = 0x10;
    puStack_10c = (uint *)0x76c633;
    FUN_00988fa0();
    puStack_108 = &uStack_84;
    uStack_20._0_1_ = 0x11;
    puStack_10c = (uint *)0x76c651;
    pppuStack_110 = (undefined4 ***)FUN_00988f20();
    puStack_108 = (uint *)0xffffffff;
    puStack_10c = (uint *)0x0;
    uStack_20._0_1_ = 0x12;
    puStack_114 = (uint *)0x76c669;
    FUN_00408ed0();
    if (0xf < uStack_8c) {
      puStack_108 = (uint *)local_a0;
                    /* WARNING: Subroutine does not return */
      puStack_10c = (uint *)&UNK_0076c67a;
      FUN_00aae91b();
    }
    uStack_8c = 0xf;
    uStack_90 = 0;
    local_a0 = local_a0 & 0xffffff00;
    if (0xf < local_e0) {
      puStack_108 = puStack_f4;
                    /* WARNING: Subroutine does not return */
      puStack_10c = (uint *)&UNK_0076c69f;
      FUN_00aae91b();
    }
    local_e0 = 0xf;
    uStack_e4 = 0;
    puStack_f4 = (uint *)((uint)puStack_f4 & 0xffffff00);
    if (0xf < local_b4) {
      puStack_108 = (uint *)uStack_c8;
                    /* WARNING: Subroutine does not return */
      puStack_10c = (uint *)&UNK_0076c6bf;
      FUN_00aae91b();
    }
    local_b4 = 0xf;
    piStack_b8 = (int *)0x0;
    uStack_c8 = uStack_c8 & 0xffffff00;
    if (0xf < uStack_70) {
      puStack_108 = (uint *)uStack_84;
                    /* WARNING: Subroutine does not return */
      puStack_10c = (uint *)&UNK_0076c6e5;
      FUN_00aae91b();
    }
  }
  uStack_c8 = 0;
  uStack_c4 = 0;
  uStack_c0 = 0;
  uStack_20._0_1_ = 0x13;
  pppuStack_110 = apppuStack_64[0];
  if (uStack_50 < 0x10) {
    pppuStack_110 = apppuStack_64;
  }
  puStack_108 = (uint *)&DAT_00e09354;
  puStack_10c = &uStack_c8;
  puStack_114 = (uint *)0x76c724;
  FUN_00992240();
  puStack_108 = (uint *)0xffffffff;
  puStack_10c = (uint *)0x0;
  pppuStack_110 = apppuStack_64;
  local_e0 = 0xf;
  uStack_e4 = 0;
  puStack_f4 = (uint *)((uint)puStack_f4 & 0xffffff00);
  puStack_114 = (uint *)0x76c74c;
  FUN_00408ed0();
  puStack_108 = (uint *)0xffffffff;
  uStack_20._0_1_ = 0x14;
  puStack_10c = (uint *)0x0;
  pppuStack_110 = (undefined4 ***)&puStack_f4;
  uStack_8c = 0xf;
  uStack_90 = 0;
  local_a0 = local_a0 & 0xffffff00;
  puStack_114 = (uint *)0x76c777;
  FUN_00408ed0();
  if (0xf < local_e0) {
    puStack_108 = puStack_f4;
                    /* WARNING: Subroutine does not return */
    puStack_10c = (uint *)&UNK_0076c788;
    FUN_00aae91b();
  }
  local_e0 = 0xf;
  uStack_e4 = 0;
  puStack_f4 = (uint *)((uint)puStack_f4 & 0xffffff00);
  puStack_108 = (uint *)0xffffffff;
  uStack_20._0_1_ = 0x15;
  puStack_10c = (uint *)0x0;
  pppuStack_110 = (undefined4 ***)&local_a0;
  uStack_70 = 0xf;
  uStack_74 = 0;
  uStack_84 = uStack_84 & 0xffffff00;
  puStack_114 = (uint *)0x76c7cd;
  FUN_00408ed0();
  local_d0 = (undefined1 **)&piStack_120;
  uStack_20._0_1_ = 0x16;
  puStack_10c = (uint *)0xf;
  pppuStack_110 = (undefined4 ***)0x0;
  piStack_120 = (int *)((uint)piStack_120 & 0xffffff00);
  FUN_00408ed0(&uStack_84,0,0xffffffff);
  uVar5 = uStack_c4;
  FUN_0067aec0(uStack_c8,uStack_c4,(int)(uStack_c4 - uStack_c8) / 0x1c);
  if (0xf < uStack_70) {
    puStack_108 = (uint *)uStack_84;
                    /* WARNING: Subroutine does not return */
    puStack_10c = (uint *)&UNK_0076c839;
    FUN_00aae91b();
  }
  uStack_20._0_1_ = 0x13;
  if (0xf < uStack_8c) {
    puStack_108 = (uint *)local_a0;
                    /* WARNING: Subroutine does not return */
    puStack_10c = (uint *)&UNK_0076c855;
    FUN_00aae91b();
  }
  for (uStack_a8 = uStack_c8; (uStack_c8 <= uStack_a8 && (uStack_a8 < uVar5));
      uStack_a8 = uStack_a8 + 0x1c) {
    puStack_108 = (uint *)0xb0;
    puStack_10c = (uint *)0x76c87c;
    local_d0 = (undefined1 **)FUN_00aae9af();
    uStack_20._0_1_ = 0x17;
    if (local_d0 == (undefined1 **)0x0) {
      iVar3 = 0;
    }
    else {
      puStack_10c = (uint *)uStack_a8;
      puStack_114 = (uint *)0x76c89b;
      pppuStack_110 = (undefined4 ***)local_d0;
      iVar3 = FUN_00769670();
    }
    uStack_20._0_1_ = 0x13;
    if ((DAT_012589ac != 1) && (DAT_012589ac != 0)) {
      puStack_108 = (uint *)0x76c8bc;
      FUN_0076a140();
    }
    puStack_108 = (uint *)0x9;
    puStack_10c = (uint *)0xe14974;
    uStack_8c = 0xf;
    uStack_90 = 0;
    local_a0 = local_a0 & 0xffffff00;
    pppuStack_110 = (undefined4 ***)0x76c8df;
    FUN_00409350();
    uStack_20._0_1_ = 0x18;
    puStack_108 = &local_a0;
    puStack_10c = (uint *)0x76c8f6;
    iVar4 = (**(code **)(**(int **)(iVar3 + 0x20) + 0x48))();
    puStack_10c = (uint *)(in_ECX + 0x106);
    pppuStack_110 = (undefined4 ***)0x76c907;
    (**(code **)(*(int *)(iVar4 + 0x54) + 4))();
    uStack_28 = 0x13;
    if (0xf < uStack_94) {
      pppuStack_110 = (undefined4 ***)uStack_a8;
                    /* WARNING: Subroutine does not return */
      puStack_114 = (uint *)&UNK_0076c920;
      FUN_00aae91b();
    }
    pppuStack_110 = (undefined4 ***)0xe;
    puStack_114 = (uint *)0xe14a40;
    uStack_94 = 0xf;
    local_98 = 0;
    uStack_a8 = uStack_a8 & 0xffffff00;
    uStack_118 = 0x76c946;
    FUN_00409350();
    uStack_28 = 0x19;
    pppuStack_110 = (undefined4 ***)0x9;
    puStack_114 = (uint *)0xe14a34;
    puStack_fc = (undefined1 *)((uint)puStack_fc & 0xffffff00);
    uStack_118 = 0x76c96e;
    FUN_00409350();
    uStack_28 = 0x1a;
    pppuStack_110 = (undefined4 ***)&puStack_fc;
    puStack_114 = (uint *)0x76c988;
    piVar1 = (int *)(**(code **)(*(int *)in_ECX[0x9e] + 0x6c))();
    puStack_114 = &uStack_ac;
    uStack_118 = 0x76c996;
    piVar1 = (int *)(**(code **)(*piVar1 + 0x7c))();
    uStack_118 = 1;
    piStack_120 = (int *)0x76c9a2;
    puStack_11c = (undefined *)iVar3;
    (**(code **)(*piVar1 + 0x10))();
    if ((undefined4 *)0xf < pcStack_f8) {
      piStack_120 = (int *)puStack_10c;
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_38 = CONCAT31(uStack_38._1_3_,0x13);
    pcStack_f8 = (char *)0xf;
    puStack_fc = (undefined1 *)0x0;
    puStack_10c = (uint *)((uint)puStack_10c & 0xffffff00);
    if (0xf < local_a4) {
      piStack_120 = piStack_b8;
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    piStack_120 = (int *)0x76c9ed;
    (**(code **)(*(int *)(iVar3 + 0x1c) + 0x30))();
    uVar5 = uStack_c4;
  }
  puStack_108 = (uint *)0x76ca10;
  (**(code **)(*(int *)(in_ECX[0x9e] + 0x18) + 0x38))();
  puStack_108 = (uint *)0x9;
  puStack_10c = (uint *)0xe100cc;
  uStack_8c = 0xf;
  uStack_90 = 0;
  local_a0 = local_a0 & 0xffffff00;
  pppuStack_110 = (undefined4 ***)0x76ca33;
  FUN_00409350();
  uStack_20 = CONCAT31(uStack_20._1_3_,0x1b);
  puStack_108 = &local_a0;
  puStack_10c = (uint *)0x76ca51;
  (**(code **)(*(int *)(in_ECX[0x9e] + 0x18) + 0x78))();
  uStack_24 = 0x13;
  if (0xf < uStack_90) {
    puStack_10c = (uint *)local_a4;
                    /* WARNING: Subroutine does not return */
    pppuStack_110 = (undefined4 ***)&UNK_0076ca6a;
    FUN_00aae91b();
  }
  puStack_10c = (uint *)0x0;
  pppuStack_110 = (undefined4 ***)&DAT_00ded94d;
  puStack_114 = (uint *)0x76ca7e;
  FUN_00409350();
  iVar3 = in_ECX[0x16c];
  in_ECX[0x16b] = 0;
  if (iVar3 != 0) {
    puStack_10c = (uint *)0x76ca93;
    FUN_009d6f00();
                    /* WARNING: Subroutine does not return */
    pppuStack_110 = (undefined4 ***)&UNK_0076ca99;
    puStack_10c = (uint *)iVar3;
    FUN_00aae91b();
  }
  in_ECX[0x16c] = 0;
  puStack_10c = (uint *)0x76caaf;
  iVar3 = (**(code **)(*(int *)in_ECX[1] + 0x100))();
  if (*(char *)(*(int *)(iVar3 + 300) + 0x34) != '\0') {
    puStack_10c = (uint *)0x76cac7;
    iVar3 = (**(code **)(*(int *)in_ECX[1] + 0x100))();
    if (((*(int *)(iVar3 + 300) != 0) && (DAT_01258b2d = 0, DAT_01258b34 < 1)) &&
       (DAT_01258b30 != (undefined4 *)0x0)) {
      puStack_10c = (uint *)0x1;
      pppuStack_110 = (undefined4 ***)0x76caf0;
      (**(code **)*DAT_01258b30)();
      DAT_01258b30 = (undefined4 *)0x0;
    }
  }
  iVar3 = in_ECX[0x16d];
  if (iVar3 != 0) {
    puStack_10c = (uint *)0x76cb05;
    FUN_009d6f00();
                    /* WARNING: Subroutine does not return */
    pppuStack_110 = (undefined4 ***)&UNK_0076cb0b;
    puStack_10c = (uint *)iVar3;
    FUN_00aae91b();
  }
  in_ECX[0x16d] = 0;
  if ((undefined4 *)in_ECX[0x174] != (undefined4 *)0x0) {
    puStack_10c = (uint *)0x1;
    pppuStack_110 = (undefined4 ***)0x76cb26;
    (*(code *)**(undefined4 **)in_ECX[0x174])();
  }
  iVar3 = DAT_012589ac;
  in_ECX[0x174] = 0;
  *(undefined2 *)(in_ECX + 0x16f) = 0;
  *(undefined1 *)((int)in_ECX + 0x5be) = 0;
  if ((iVar3 == 1) || (iVar3 == 0)) {
    puStack_10c = (uint *)0x76cb4c;
    FUN_0076b930();
  }
  iVar3 = local_cc;
  uStack_38 = 0xf;
  uStack_3c = 0;
  uStack_4c = 0;
  if (local_cc != 0) {
    puStack_10c = (uint *)0x76cb7a;
    FUN_00413860();
    puStack_10c = (uint *)iVar3;
                    /* WARNING: Subroutine does not return */
    pppuStack_110 = (undefined4 ***)&UNK_0076cb80;
    FUN_00aae91b();
  }
  if (0xf < uStack_54) {
    puStack_10c = (uint *)uStack_68;
                    /* WARNING: Subroutine does not return */
    pppuStack_110 = (undefined4 ***)&UNK_0076cb9a;
    FUN_00aae91b();
  }
  ExceptionList = pvStack_2c;
  return;
}

