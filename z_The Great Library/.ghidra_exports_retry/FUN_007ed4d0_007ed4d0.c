// FUN_007ed4d0 @ 007ed4d0  (requested 007ED4D0, first bytes: 55 8B EC 6A FF 68 C2 A0)


void FUN_007ed4d0(int param_1)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  HANDLE pvVar6;
  undefined4 *puVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 extraout_ECX_06;
  undefined4 extraout_ECX_07;
  undefined4 extraout_ECX_08;
  undefined4 extraout_ECX_09;
  undefined4 extraout_ECX_10;
  undefined4 extraout_ECX_11;
  undefined4 extraout_ECX_12;
  undefined4 extraout_ECX_13;
  undefined4 extraout_ECX_14;
  undefined4 extraout_ECX_15;
  undefined4 extraout_ECX_16;
  undefined4 extraout_ECX_17;
  undefined4 extraout_ECX_18;
  undefined4 extraout_ECX_19;
  undefined4 extraout_ECX_20;
  undefined4 extraout_ECX_21;
  undefined4 extraout_ECX_22;
  undefined4 extraout_ECX_23;
  undefined4 extraout_ECX_24;
  undefined4 extraout_ECX_25;
  undefined4 extraout_ECX_26;
  undefined4 extraout_ECX_27;
  undefined4 extraout_ECX_28;
  int iVar12;
  float10 fVar13;
  double dVar14;
  PROCESS_MEMORY_COUNTERS *pPVar15;
  DWORD DVar16;
  uint local_2dc [4];
  undefined4 local_2cc;
  uint local_2c8;
  uint local_2c0;
  undefined4 local_2b0;
  uint local_2ac;
  uint local_2a4 [4];
  undefined4 local_294;
  uint local_290;
  int local_288;
  int local_284;
  uint local_280 [4];
  undefined4 local_270;
  uint local_26c;
  uint local_264 [4];
  undefined4 local_254;
  uint local_250;
  uint local_248 [4];
  undefined4 local_238;
  uint local_234;
  uint local_22c [4];
  undefined4 local_21c;
  uint local_218;
  PROCESS_MEMORY_COUNTERS local_210;
  PROCESS_MEMORY_COUNTERS local_1e8;
  int local_1c0;
  undefined4 local_1b8 [5];
  uint local_1a4;
  uint local_19c [4];
  undefined4 local_18c;
  uint local_188;
  undefined **local_108 [18];
  int local_c0;
  uint local_bc [2];
  undefined1 local_b4 [8];
  undefined4 local_ac;
  uint local_a8;
  double local_a0;
  double local_98;
  PROCESS_MEMORY_COUNTERS local_90;
  uint local_68 [4];
  undefined4 local_58;
  uint local_54;
  uint local_4c [4];
  undefined4 local_3c;
  uint local_38;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar3 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b7a0c2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00436780();
  local_8 = 0;
  FUN_004367c0();
  local_8._0_1_ = 1;
  local_284 = *(int *)(DAT_012586e0 + 0x5c);
  if (local_284 == 1) {
    FUN_00408ed0(local_280,0,0xffffffff);
  }
  FUN_00436780();
  local_8._0_1_ = 2;
  FUN_004367c0();
  local_8._0_1_ = 3;
  local_c0 = *(int *)(DAT_012586e0 + 0x4c);
  if (local_c0 == 1) {
    FUN_00408ed0(local_2dc,0,0xffffffff);
  }
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  FUN_00409350("provincemanager.cpp",0x13);
  local_8._0_1_ = 4;
  FUN_004015b0(local_4c,0x1cb,0x10005);
  local_8._0_1_ = 5;
  uVar5 = FUN_00987d20();
  FUN_00401280(uVar5);
  local_8._0_1_ = 4;
  FUN_00987ac0(local_108);
  local_108[0] = std::ios_base::vftable;
  FUN_00aad52d(local_108);
  local_8._0_1_ = 3;
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_4c[0]);
  }
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  FUN_00409350("provincemanager.cpp",0x13);
  local_8._0_1_ = 6;
  FUN_004015b0(local_4c,0x1cc,0x10005);
  DVar16 = 0x28;
  pPVar15 = &local_90;
  local_8._0_1_ = 7;
  pvVar6 = GetCurrentProcess();
  GetProcessMemoryInfo(pvVar6,pPVar15,DVar16);
  fVar2 = (float)(int)local_90.WorkingSetSize;
  if ((int)local_90.WorkingSetSize < 0) {
    fVar2 = fVar2 + 4.2949673e+09;
  }
  uVar5 = FUN_00987d20((int)(fVar2 * 0.0009765625),local_90.WorkingSetSize,&DAT_00e0785c);
  uVar5 = FUN_00455470(uVar5);
  FUN_00418e30(uVar5);
  FUN_00401280();
  local_8._0_1_ = 6;
  FUN_00987ac0(local_108);
  local_108[0] = std::ios_base::vftable;
  FUN_00aad52d(local_108);
  local_8._0_1_ = 3;
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_4c[0]);
  }
  iVar8 = *(int *)(param_1 + 0x40);
  iVar10 = *(int *)(iVar8 + 0x2abc);
  iVar11 = 0x3c;
  *(undefined4 *)(param_1 + 0x194) = 0x3c;
  iVar12 = iVar10 % 0x3c;
  while (iVar12 != 0) {
    iVar11 = iVar11 + 1;
    *(int *)(param_1 + 0x194) = iVar11;
    iVar12 = iVar10 % iVar11;
  }
  iVar10 = *(int *)(param_1 + 0x194);
  *(int *)(param_1 + 0x198) = iVar10;
  *(int *)(param_1 + 0x18c) = *(int *)(iVar8 + 0x2abc) / iVar10;
  iVar11 = *(int *)(iVar8 + 0x2ac0) / iVar10;
  *(int *)(param_1 + 400) = iVar11;
  if (*(int *)(iVar8 + 0x2ac0) % iVar10 != 0) {
    *(int *)(param_1 + 400) = iVar11 + 1;
  }
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  FUN_00409350("provincemanager.cpp",0x13);
  local_8._0_1_ = 8;
  puVar7 = (undefined4 *)FUN_0099d3d0(*(undefined4 *)(param_1 + 0x3c),local_30);
  local_8._0_1_ = 9;
  FUN_004015b0();
  local_8._0_1_ = 10;
  uVar5 = FUN_00987d20();
  if (0xf < (uint)puVar7[5]) {
    puVar7 = (undefined4 *)*puVar7;
  }
  FUN_00418e30(uVar5,puVar7);
  FUN_00401280();
  local_8._0_1_ = 9;
  FUN_00987ac0(local_108);
  local_108[0] = std::ios_base::vftable;
  FUN_00aad52d(local_108);
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_8._0_1_ = 3;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_4c[0]);
  }
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  FUN_00409350("provincemanager.cpp",0x13);
  local_8._0_1_ = 0xb;
  FUN_004015b0();
  local_8._0_1_ = 0xc;
  uVar5 = FUN_00987d20();
  FUN_00401280(uVar5);
  local_8._0_1_ = 0xb;
  FUN_00987ac0(local_108);
  local_108[0] = std::ios_base::vftable;
  FUN_00aad52d(local_108);
  local_8 = CONCAT31(local_8._1_3_,3);
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_4c[0]);
  }
  DVar16 = 0x28;
  pPVar15 = &local_210;
  pvVar6 = GetCurrentProcess();
  GetProcessMemoryInfo(pvVar6,pPVar15,DVar16);
  fVar13 = (float10)(**(code **)(**(int **)(param_1 + 0x18) + 0x14))();
  local_a0 = (double)fVar13;
  if (DAT_00f20c18 == (undefined4 *)0x0) {
    DAT_00f20c18 = (undefined4 *)FUN_00aae9af(4);
    if (DAT_00f20c18 == (undefined4 *)0x0) {
      DAT_00f20c18 = (undefined4 *)0x0;
    }
    else {
      *DAT_00f20c18 = &PTR_FUN_00e38b28;
    }
  }
  (**(code **)(*DAT_01258a8c + 0x14))();
  iVar8 = FUN_00aae9af(0x48);
  local_8._0_1_ = 0xd;
  if (iVar8 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_004946e0(iVar8);
  }
  local_8._0_1_ = 3;
  *(undefined4 *)(param_1 + 0x15a8) = uVar5;
  if (DAT_00f20c18 == (undefined4 *)0x0) {
    DAT_00f20c18 = (undefined4 *)FUN_00aae9af(4);
    if (DAT_00f20c18 == (undefined4 *)0x0) {
      DAT_00f20c18 = (undefined4 *)0x0;
    }
    else {
      *DAT_00f20c18 = &PTR_FUN_00e38b28;
    }
  }
  (**(code **)(*DAT_01258a8c + 0x14))();
  fVar13 = (float10)(**(code **)(**(int **)(param_1 + 0x18) + 0x14))();
  local_98 = (double)fVar13;
  DVar16 = 0x28;
  pPVar15 = &local_1e8;
  pvVar6 = GetCurrentProcess();
  GetProcessMemoryInfo(pvVar6,pPVar15,DVar16);
  local_1c0 = local_1e8.WorkingSetSize - local_210.WorkingSetSize;
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  FUN_00409350("provincemanager.cpp",0x13);
  local_8._0_1_ = 0xe;
  FUN_004015b0();
  local_8._0_1_ = 0xf;
  uVar5 = FUN_00987d20(local_98 - local_a0,extraout_ECX,&DAT_00e07938);
  uVar5 = FUN_0048c130(uVar5);
  uVar5 = FUN_00418e30(uVar5);
  FUN_00401280(uVar5);
  local_8._0_1_ = 0xe;
  FUN_00987ac0(local_108);
  local_108[0] = std::ios_base::vftable;
  FUN_00aad52d(local_108);
  local_8._0_1_ = 3;
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_4c[0]);
  }
  dVar14 = (double)local_1c0;
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  local_288 = (int)(dVar14 * 0.0009765625);
  FUN_00409350("provincemanager.cpp",0x13);
  local_8._0_1_ = 0x10;
  FUN_004015b0(local_4c,0x1f0,0x10005);
  local_8._0_1_ = 0x11;
  uVar5 = FUN_00987d20((int)(dVar14 * 0.0009765625),extraout_ECX_00,&DAT_00e0785c);
  uVar5 = FUN_00455470(uVar5);
  uVar5 = FUN_00418e30(uVar5);
  FUN_00401280(uVar5);
  local_8._0_1_ = 0x10;
  FUN_00987ac0(local_108);
  local_108[0] = std::ios_base::vftable;
  FUN_00aad52d(local_108);
  local_8._0_1_ = 3;
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_4c[0]);
  }
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  FUN_00409350("provincemanager.cpp",0x13);
  local_8._0_1_ = 0x12;
  FUN_004015b0(local_4c,0x1f1,0x10005);
  DVar16 = 0x28;
  pPVar15 = &local_90;
  local_8._0_1_ = 0x13;
  pvVar6 = GetCurrentProcess();
  GetProcessMemoryInfo(pvVar6,pPVar15,DVar16);
  fVar2 = (float)(int)local_90.WorkingSetSize;
  if ((int)local_90.WorkingSetSize < 0) {
    fVar2 = fVar2 + 4.2949673e+09;
  }
  uVar5 = FUN_00987d20((int)(fVar2 * 0.0009765625),extraout_ECX_01,&DAT_00e0785c);
  uVar5 = FUN_00455470(uVar5);
  uVar5 = FUN_00418e30(uVar5);
  FUN_00401280(uVar5);
  local_8._0_1_ = 0x12;
  FUN_00987ac0(local_108);
  local_108[0] = std::ios_base::vftable;
  FUN_00aad52d(local_108);
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_4c[0]);
  }
  DVar16 = 0x28;
  pPVar15 = &local_210;
  pvVar6 = GetCurrentProcess();
  GetProcessMemoryInfo(pvVar6,pPVar15,DVar16);
  local_218 = 0xf;
  local_21c = 0;
  local_22c[0] = local_22c[0] & 0xffffff00;
  local_8._0_1_ = 0x14;
  uVar4 = (undefined1)local_8;
  local_8._0_1_ = 0x14;
  local_38 = 0xf;
  local_4c[0] = local_4c[0] & 0xffffff00;
  if (local_c0 == 2) {
    local_3c = 0;
    local_8._0_1_ = uVar4;
    FUN_00409350("/FX/borders_2_0.fx",0x12);
    local_8._0_1_ = 0x17;
    uVar5 = FUN_00436de0(local_30,local_2dc,local_264);
    local_8._0_1_ = 0x18;
    FUN_00408ed0(uVar5,0,0xffffffff);
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_30[0]);
    }
  }
  else {
    local_3c = 0;
    FUN_00409350("/FX/borders_2_0.fx",0x12);
    local_8._0_1_ = 0x15;
    uVar5 = FUN_00988f20(local_4c);
    local_8._0_1_ = 0x16;
    FUN_00408ed0(uVar5,0,0xffffffff);
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_30[0]);
    }
  }
  local_30[0] = local_30[0] & 0xffffff00;
  if (0xf < local_38) {
    local_8._0_1_ = 0x14;
    local_1c = 0xf;
    local_20 = 0;
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_4c[0]);
  }
  local_8._0_1_ = 0x14;
  local_1c = 0xf;
  local_20 = 0;
  local_a8 = 0xf;
  local_ac = 0;
  local_bc[0] = local_bc[0] & 0xffffff00;
  FUN_00409350("Borders",7);
  local_8._0_1_ = 0x19;
  iVar8 = FUN_009be510(*(int *)(param_1 + 0x3c) + 0x6bcfc,local_22c,local_bc,
                       *(undefined4 *)(*(int *)(param_1 + 0x3c) + 100));
  local_8._0_1_ = 0x14;
  if (0xf < local_a8) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_bc[0]);
  }
  local_a8 = 0xf;
  local_ac = 0;
  local_bc[0] = local_bc[0] & 0xffffff00;
  if (iVar8 == 0) {
    piVar9 = (int *)0x0;
  }
  else {
    piVar9 = *(int **)(*(int *)(*(int *)(param_1 + 0x3c) + 0x6bd00) + -4 + iVar8 * 4);
  }
  *(int **)(param_1 + 0x268) = piVar9;
  uVar5 = (**(code **)(*piVar9 + 0x24))(piVar9,0,"WorldViewProjectionMatrix");
  *(undefined4 *)(param_1 + 0x270) = uVar5;
  uVar5 = (**(code **)(**(int **)(param_1 + 0x268) + 0x34))
                    (*(int **)(param_1 + 0x268),"WaterBorderShader");
  *(undefined4 *)(param_1 + 0x26c) = uVar5;
  local_38 = 0xf;
  local_4c[0] = local_4c[0] & 0xffffff00;
  if (local_c0 == 2) {
    local_3c = 0;
    FUN_00409350("/FX/terrain_2_0.fx",0x12);
    local_8._0_1_ = 0x1c;
    uVar5 = FUN_00436de0(local_30,local_2dc,local_264);
    local_8._0_1_ = 0x1d;
    FUN_00408ed0(uVar5,0,0xffffffff);
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_30[0]);
    }
  }
  else {
    local_3c = 0;
    FUN_00409350("/FX/terrain_2_0.fx",0x12);
    local_8._0_1_ = 0x1a;
    uVar5 = FUN_00988f20(local_4c);
    local_8._0_1_ = 0x1b;
    FUN_00408ed0(uVar5,0,0xffffffff);
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_30[0]);
    }
  }
  local_30[0] = local_30[0] & 0xffffff00;
  if (0xf < local_38) {
    local_8._0_1_ = 0x14;
    local_1c = 0xf;
    local_20 = 0;
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_4c[0]);
  }
  local_8._0_1_ = 0x14;
  local_1c = 0xf;
  local_20 = 0;
  local_290 = 0xf;
  local_294 = 0;
  local_2a4[0] = local_2a4[0] & 0xffffff00;
  FUN_00409350("TerrainShader",0xd);
  local_8._0_1_ = 0x1e;
  iVar8 = FUN_009be510(*(int *)(param_1 + 0x3c) + 0x6bcfc,local_22c,local_2a4,
                       *(undefined4 *)(*(int *)(param_1 + 0x3c) + 100));
  *(int *)(param_1 + 0x2a0) = iVar8;
  if (iVar8 == 0) {
    piVar9 = (int *)0x0;
  }
  else {
    piVar9 = *(int **)(*(int *)(*(int *)(param_1 + 0x3c) + 0x6bd00) + -4 + iVar8 * 4);
  }
  *(int **)(param_1 + 0x1a0) = piVar9;
  uVar5 = (**(code **)(*piVar9 + 0x24))(piVar9,0,&DAT_00e0bce4);
  *(undefined4 *)(param_1 + 0x1a4) = uVar5;
  uVar5 = (**(code **)(**(int **)(param_1 + 0x1a0) + 0x24))
                    (*(int **)(param_1 + 0x1a0),0,&DAT_00e19384);
  *(undefined4 *)(param_1 + 0x1a8) = uVar5;
  uVar5 = (**(code **)(**(int **)(param_1 + 0x1a0) + 0x24))
                    (*(int **)(param_1 + 0x1a0),0,&DAT_00e1939c);
  *(undefined4 *)(param_1 + 0x1ac) = uVar5;
  uVar5 = (**(code **)(**(int **)(param_1 + 0x1a0) + 0x24))
                    (*(int **)(param_1 + 0x1a0),0,&DAT_00e1a710);
  *(undefined4 *)(param_1 + 0x1b0) = uVar5;
  uVar5 = (**(code **)(**(int **)(param_1 + 0x1a0) + 0x24))
                    (*(int **)(param_1 + 0x1a0),0,"WorldViewProjectionMatrix");
  *(undefined4 *)(param_1 + 0x1c0) = uVar5;
  uVar5 = (**(code **)(**(int **)(param_1 + 0x1a0) + 0x24))
                    (*(int **)(param_1 + 0x1a0),0,"WorldMatrix");
  *(undefined4 *)(param_1 + 0x1b4) = uVar5;
  uVar5 = (**(code **)(**(int **)(param_1 + 0x1a0) + 0x24))
                    (*(int **)(param_1 + 0x1a0),0,"ViewMatrix");
  *(undefined4 *)(param_1 + 0x1b8) = uVar5;
  uVar5 = (**(code **)(**(int **)(param_1 + 0x1a0) + 0x24))
                    (*(int **)(param_1 + 0x1a0),0,"ProjectionMatrix");
  *(undefined4 *)(param_1 + 0x1bc) = uVar5;
  uVar5 = (**(code **)(**(int **)(param_1 + 0x1a0) + 0x24))
                    (*(int **)(param_1 + 0x1a0),0,"LightDirection");
  *(undefined4 *)(param_1 + 0x1c4) = uVar5;
  uVar5 = (**(code **)(**(int **)(param_1 + 0x1a0) + 0x34))
                    (*(int **)(param_1 + 0x1a0),"TerrainShader_Graphical");
  *(undefined4 *)(param_1 + 0x208) = uVar5;
  uVar5 = (**(code **)(**(int **)(param_1 + 0x1a0) + 0x34))
                    (*(int **)(param_1 + 0x1a0),"TerrainShader_General");
  *(undefined4 *)(param_1 + 0x210) = uVar5;
  uVar5 = (**(code **)(**(int **)(param_1 + 0x1a0) + 0x34))
                    (*(int **)(param_1 + 0x1a0),"TerrainShader_General_Low");
  *(undefined4 *)(param_1 + 0x214) = uVar5;
  uVar5 = (**(code **)(**(int **)(param_1 + 0x1a0) + 0x34))
                    (*(int **)(param_1 + 0x1a0),"TerrainShader_Border");
  *(undefined4 *)(param_1 + 0x228) = uVar5;
  uVar5 = (**(code **)(**(int **)(param_1 + 0x1a0) + 0x34))
                    (*(int **)(param_1 + 0x1a0),"BeachShader_Graphical");
  *(undefined4 *)(param_1 + 0x218) = uVar5;
  uVar5 = (**(code **)(**(int **)(param_1 + 0x1a0) + 0x34))
                    (*(int **)(param_1 + 0x1a0),"BeachShader_General");
  *(undefined4 *)(param_1 + 0x220) = uVar5;
  uVar5 = (**(code **)(**(int **)(param_1 + 0x1a0) + 0x34))
                    (*(int **)(param_1 + 0x1a0),"BeachShader_General_Low");
  *(undefined4 *)(param_1 + 0x224) = uVar5;
  uVar5 = (**(code **)(**(int **)(param_1 + 0x1a0) + 0x34))(*(int **)(param_1 + 0x1a0),"PTIShader");
  *(undefined4 *)(param_1 + 0x230) = uVar5;
  uVar5 = (**(code **)(**(int **)(param_1 + 0x1a0) + 0x34))(*(int **)(param_1 + 0x1a0),"TreeShader")
  ;
  *(undefined4 *)(param_1 + 0x22c) = uVar5;
  uVar5 = (**(code **)(**(int **)(param_1 + 0x1a0) + 0x24))
                    (*(int **)(param_1 + 0x1a0),0,"ColorMapHeight");
  *(undefined4 *)(param_1 + 0x1c8) = uVar5;
  uVar5 = (**(code **)(**(int **)(param_1 + 0x1a0) + 0x24))
                    (*(int **)(param_1 + 0x1a0),0,"ColorMapWidth");
  *(undefined4 *)(param_1 + 0x1cc) = uVar5;
  uVar5 = (**(code **)(**(int **)(param_1 + 0x1a0) + 0x24))
                    (*(int **)(param_1 + 0x1a0),0,"ColorMapTextureHeight");
  *(undefined4 *)(param_1 + 0x1d0) = uVar5;
  uVar5 = (**(code **)(**(int **)(param_1 + 0x1a0) + 0x24))
                    (*(int **)(param_1 + 0x1a0),0,"ColorMapTextureWidth");
  *(undefined4 *)(param_1 + 0x1d4) = uVar5;
  uVar5 = (**(code **)(**(int **)(param_1 + 0x1a0) + 0x24))(*(int **)(param_1 + 0x1a0),0,"MapWidth")
  ;
  *(undefined4 *)(param_1 + 0x1e0) = uVar5;
  uVar5 = (**(code **)(**(int **)(param_1 + 0x1a0) + 0x24))
                    (*(int **)(param_1 + 0x1a0),0,"MapHeight");
  *(undefined4 *)(param_1 + 0x1e4) = uVar5;
  uVar5 = (**(code **)(**(int **)(param_1 + 0x1a0) + 0x24))
                    (*(int **)(param_1 + 0x1a0),0,"BorderWidth");
  *(undefined4 *)(param_1 + 0x1d8) = uVar5;
  uVar5 = (**(code **)(**(int **)(param_1 + 0x1a0) + 0x24))
                    (*(int **)(param_1 + 0x1a0),0,"BorderHeight");
  *(undefined4 *)(param_1 + 0x1dc) = uVar5;
  local_38 = 0xf;
  local_4c[0] = local_4c[0] & 0xffffff00;
  if (local_c0 == 2) {
    local_3c = 0;
    FUN_00409350("/FX/mapobject.fx",0x10);
    local_8._0_1_ = 0x21;
    uVar5 = FUN_00436de0(local_30,local_2dc,local_264);
    local_8._0_1_ = 0x22;
    FUN_00408ed0(uVar5,0,0xffffffff);
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_30[0]);
    }
    local_8._0_1_ = 0x1e;
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_4c[0]);
    }
    local_38 = 0xf;
    local_3c = 0;
    local_4c[0] = local_4c[0] & 0xffffff00;
    FUN_00409350("/FX/water.fx",0xc);
    local_8._0_1_ = 0x25;
    uVar5 = FUN_00436de0(local_30,local_2dc,local_264);
    local_8._0_1_ = 0x26;
    FUN_00408ed0(uVar5,0,0xffffffff);
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_30[0]);
    }
  }
  else {
    local_3c = 0;
    FUN_00409350("/FX/mapobject.fx",0x10);
    local_8._0_1_ = 0x1f;
    uVar5 = FUN_00988f20(local_4c);
    local_8._0_1_ = 0x20;
    FUN_00408ed0(uVar5,0,0xffffffff);
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_30[0]);
    }
    local_8._0_1_ = 0x1e;
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_4c[0]);
    }
    local_38 = 0xf;
    local_3c = 0;
    local_4c[0] = local_4c[0] & 0xffffff00;
    FUN_00409350("/FX/water.fx",0xc);
    local_8._0_1_ = 0x23;
    uVar5 = FUN_00988f20(local_4c);
    local_8._0_1_ = 0x24;
    FUN_00408ed0(uVar5,0,0xffffffff);
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_30[0]);
    }
  }
  local_30[0] = local_30[0] & 0xffffff00;
  if (0xf < local_38) {
    local_8._0_1_ = 0x1e;
    local_1c = 0xf;
    local_20 = 0;
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_4c[0]);
  }
  local_8._0_1_ = 0x1e;
  local_1c = 0xf;
  local_20 = 0;
  FUN_00409350("WaterShader",0xb);
  iVar8 = FUN_009be510(*(int *)(param_1 + 0x3c) + 0x6bcfc,local_22c,local_2a4,
                       *(undefined4 *)(*(int *)(param_1 + 0x3c) + 100));
  *(int *)(param_1 + 0x29c) = iVar8;
  piVar9 = (int *)0x0;
  if (iVar8 != 0) {
    piVar9 = *(int **)(*(int *)(*(int *)(param_1 + 0x3c) + 0x6bd00) + -4 + iVar8 * 4);
  }
  *(int **)(param_1 + 0x234) = piVar9;
  uVar5 = (**(code **)(*piVar9 + 0x34))(piVar9,"WaterShader_2_0");
  *(undefined4 *)(param_1 + 0x23c) = uVar5;
  uVar5 = (**(code **)(**(int **)(param_1 + 0x234) + 0x34))
                    (*(int **)(param_1 + 0x234),"WaterShader_1_1");
  *(undefined4 *)(param_1 + 0x238) = uVar5;
  uVar5 = (**(code **)(**(int **)(param_1 + 0x234) + 0x34))
                    (*(int **)(param_1 + 0x234),"HoiWaterShader_2_0");
  *(undefined4 *)(param_1 + 0x248) = uVar5;
  uVar5 = (**(code **)(**(int **)(param_1 + 0x234) + 0x24))
                    (*(int **)(param_1 + 0x234),0,&DAT_00e0bce4);
  *(undefined4 *)(param_1 + 0x240) = uVar5;
  uVar5 = (**(code **)(**(int **)(param_1 + 0x234) + 0x24))
                    (*(int **)(param_1 + 0x234),0,&DAT_00e19384);
  *(undefined4 *)(param_1 + 0x244) = uVar5;
  uVar5 = (**(code **)(**(int **)(param_1 + 0x234) + 0x24))
                    (*(int **)(param_1 + 0x234),0,&DAT_00e19990);
  *(undefined4 *)(param_1 + 0x24c) = uVar5;
  uVar5 = (**(code **)(**(int **)(param_1 + 0x234) + 0x24))
                    (*(int **)(param_1 + 0x234),0,"WorldViewProjectionMatrix");
  *(undefined4 *)(param_1 + 0x250) = uVar5;
  uVar5 = (**(code **)(**(int **)(param_1 + 0x234) + 0x24))
                    (*(int **)(param_1 + 0x234),0,"WorldMatrix");
  *(undefined4 *)(param_1 + 0x254) = uVar5;
  uVar5 = (**(code **)(**(int **)(param_1 + 0x234) + 0x24))
                    (*(int **)(param_1 + 0x234),0,"CameraPosition");
  *(undefined4 *)(param_1 + 600) = uVar5;
  uVar5 = (**(code **)(**(int **)(param_1 + 0x234) + 0x24))
                    (*(int **)(param_1 + 0x234),0,"LightPosition");
  *(undefined4 *)(param_1 + 0x25c) = uVar5;
  uVar5 = (**(code **)(**(int **)(param_1 + 0x234) + 0x24))
                    (*(int **)(param_1 + 0x234),0,"LightDirection");
  *(undefined4 *)(param_1 + 0x260) = uVar5;
  uVar5 = (**(code **)(**(int **)(param_1 + 0x234) + 0x24))(*(int **)(param_1 + 0x234),0,"MapWidth")
  ;
  *(undefined4 *)(param_1 + 0x1e8) = uVar5;
  uVar5 = (**(code **)(**(int **)(param_1 + 0x234) + 0x24))
                    (*(int **)(param_1 + 0x234),0,"MapHeight");
  *(undefined4 *)(param_1 + 0x1ec) = uVar5;
  uVar5 = (**(code **)(**(int **)(param_1 + 0x234) + 0x24))
                    (*(int **)(param_1 + 0x234),0,"BorderWidth");
  *(undefined4 *)(param_1 + 0x1f0) = uVar5;
  uVar5 = (**(code **)(**(int **)(param_1 + 0x234) + 0x24))
                    (*(int **)(param_1 + 0x234),0,"BorderHeight");
  *(undefined4 *)(param_1 + 500) = uVar5;
  uVar5 = (**(code **)(**(int **)(param_1 + 0x234) + 0x24))
                    (*(int **)(param_1 + 0x234),0,"ColorMapHeight");
  *(undefined4 *)(param_1 + 0x1f8) = uVar5;
  uVar5 = (**(code **)(**(int **)(param_1 + 0x234) + 0x24))
                    (*(int **)(param_1 + 0x234),0,"ColorMapWidth");
  *(undefined4 *)(param_1 + 0x1fc) = uVar5;
  uVar5 = (**(code **)(**(int **)(param_1 + 0x234) + 0x24))
                    (*(int **)(param_1 + 0x234),0,"ColorMapTextureHeight");
  *(undefined4 *)(param_1 + 0x200) = uVar5;
  uVar5 = (**(code **)(**(int **)(param_1 + 0x234) + 0x24))
                    (*(int **)(param_1 + 0x234),0,"ColorMapTextureWidth");
  *(undefined4 *)(param_1 + 0x204) = uVar5;
  DVar16 = 0x28;
  pPVar15 = &local_1e8;
  pvVar6 = GetCurrentProcess();
  GetProcessMemoryInfo(pvVar6,pPVar15,DVar16);
  local_1c0 = local_1e8.WorkingSetSize - local_210.WorkingSetSize;
  fVar2 = (float)local_1c0;
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  FUN_00409350("provincemanager.cpp",0x13);
  local_8._0_1_ = 0x27;
  FUN_004015b0(local_4c,0x282,0x10005);
  local_8._0_1_ = 0x28;
  uVar5 = FUN_00987d20((int)(fVar2 * 0.0009765625),extraout_ECX_02,&DAT_00e0785c);
  uVar5 = FUN_00455470(uVar5);
  uVar5 = FUN_00418e30(uVar5);
  FUN_00401280(uVar5);
  local_8._0_1_ = 0x27;
  FUN_00987ac0(local_108);
  local_108[0] = std::ios_base::vftable;
  FUN_00aad52d(local_108);
  local_8._0_1_ = 0x1e;
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_4c[0]);
  }
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  FUN_00409350("provincemanager.cpp",0x13);
  local_8._0_1_ = 0x29;
  FUN_004015b0(local_4c,0x283,0x10005);
  local_8._0_1_ = 0x2a;
  FUN_009da350(extraout_ECX_03,&DAT_00e0785c);
  uVar5 = FUN_00b31c00();
  uVar5 = FUN_00987d20(uVar5);
  uVar5 = FUN_00455470(uVar5);
  uVar5 = FUN_00418e30(uVar5);
  FUN_00401280(uVar5);
  local_8._0_1_ = 0x29;
  FUN_00987ac0(local_108);
  local_108[0] = std::ios_base::vftable;
  FUN_00aad52d(local_108);
  local_8._0_1_ = 0x1e;
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_4c[0]);
  }
  DVar16 = 0x28;
  pPVar15 = &local_210;
  pvVar6 = GetCurrentProcess();
  GetProcessMemoryInfo(pvVar6,pPVar15,DVar16);
  FUN_0068ea30((*(int *)(*(int *)(param_1 + 0x40) + 0x44) -
                *(int *)(*(int *)(param_1 + 0x40) + 0x40) >> 2) + 1);
  FUN_0068ea30((*(int *)(*(int *)(param_1 + 0x40) + 0x34) -
                *(int *)(*(int *)(param_1 + 0x40) + 0x30) >> 2) + 1);
  if (local_284 == 2) {
    FUN_009885d0();
    local_8._0_1_ = 0x4f;
    uVar5 = FUN_00802710(param_1,local_280,local_1b8);
    local_8._0_1_ = 0x1e;
    FUN_00408ad0();
    **(undefined4 **)(param_1 + 0x27c) = uVar5;
    piVar9 = (int *)(param_1 + 0x280);
    piVar1 = (int *)(param_1 + 0x27c);
    param_1 = 0;
    if (0 < (int)(*piVar9 - *piVar1 & 0xfffffffcU)) {
      do {
        local_a8 = 0xf;
        local_ac = 0;
        local_bc[0] = local_bc[0] & 0xffffff00;
        FUN_00409350(&DAT_00e17f6c,4);
        local_8._0_1_ = 0x50;
        uVar5 = FUN_009888f0(local_19c);
        local_8._0_1_ = 0x51;
        local_38 = 0xf;
        local_3c = 0;
        local_4c[0] = local_4c[0] & 0xffffff00;
        FUN_00409350("texturesheet",0xc);
        local_8._0_1_ = 0x52;
        FUN_00988f20(uVar5);
        local_8._0_1_ = 0x53;
        FUN_00988f20(local_bc);
        if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_68[0]);
        }
        local_54 = 0xf;
        local_58 = 0;
        local_68[0] = local_68[0] & 0xffffff00;
        if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_4c[0]);
        }
        local_38 = 0xf;
        local_3c = 0;
        local_4c[0] = local_4c[0] & 0xffffff00;
        if (0xf < local_188) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_19c[0]);
        }
        local_188 = 0xf;
        local_18c = 0;
        local_19c[0] = local_19c[0] & 0xffffff00;
        local_8._0_1_ = 0x58;
        if (0xf < local_a8) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_bc[0]);
        }
        local_a8 = 0xf;
        local_ac = 0;
        local_bc[0] = local_bc[0] & 0xffffff00;
        FUN_00988fa0(&local_90.WorkingSetSize);
        local_8._0_1_ = 0x59;
        uVar5 = FUN_00802710(iVar3,local_280,local_1b8);
        if (0xf < local_234) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_248[0]);
        }
        *(undefined4 *)(*(int *)(iVar3 + 0x27c) + 4 + param_1 * 4) = uVar5;
        local_8._0_1_ = 0x1e;
        if (0xf < local_90.PagefileUsage) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_90.WorkingSetSize);
        }
        param_1 = param_1 + 1;
      } while (param_1 < *(int *)(iVar3 + 0x280) - *(int *)(iVar3 + 0x27c) >> 2);
    }
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    FUN_00409350("/terrain/borders.tga",0x14);
    local_8._0_1_ = 0x5a;
    uVar5 = FUN_00802710(iVar3,local_280,local_1b8);
    local_8._0_1_ = 0x1e;
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_30[0]);
    }
    **(undefined4 **)(iVar3 + 0x28c) = uVar5;
    param_1 = 0;
    if (0 < (int)(*(int *)(iVar3 + 0x290) - *(int *)(iVar3 + 0x28c) & 0xfffffffcU)) {
      do {
        local_8._0_1_ = 0x1e;
        local_a8 = 0xf;
        local_ac = 0;
        local_bc[0] = local_bc[0] & 0xffffff00;
        FUN_00409350(&DAT_00e17f6c,4);
        local_8._0_1_ = 0x5b;
        uVar5 = FUN_009888f0(local_19c);
        local_8._0_1_ = 0x5c;
        local_38 = 0xf;
        local_3c = 0;
        local_4c[0] = local_4c[0] & 0xffffff00;
        FUN_00409350("borders",7);
        local_8._0_1_ = 0x5d;
        FUN_00988f20(uVar5);
        local_8._0_1_ = 0x5e;
        FUN_00988f20(local_bc);
        if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_68[0]);
        }
        local_54 = 0xf;
        local_58 = 0;
        local_68[0] = local_68[0] & 0xffffff00;
        if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_4c[0]);
        }
        local_38 = 0xf;
        local_3c = 0;
        local_4c[0] = local_4c[0] & 0xffffff00;
        if (0xf < local_188) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_19c[0]);
        }
        local_188 = 0xf;
        local_18c = 0;
        local_19c[0] = local_19c[0] & 0xffffff00;
        local_8._0_1_ = 99;
        if (0xf < local_a8) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_bc[0]);
        }
        local_a8 = 0xf;
        local_ac = 0;
        local_bc[0] = local_bc[0] & 0xffffff00;
        FUN_00988fa0(&local_90.WorkingSetSize);
        local_8._0_1_ = 100;
        uVar5 = FUN_00802710(iVar3,local_280,local_1b8);
        if (0xf < local_234) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_248[0]);
        }
        *(undefined4 *)(*(int *)(iVar3 + 0x28c) + 4 + param_1 * 4) = uVar5;
        local_8._0_1_ = 0x1e;
        if (0xf < local_90.PagefileUsage) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_90.WorkingSetSize);
        }
        param_1 = param_1 + 1;
      } while (param_1 < *(int *)(iVar3 + 0x290) - *(int *)(iVar3 + 0x28c) >> 2);
    }
    local_8._0_1_ = 0x1e;
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    FUN_00409350("/terrain/water_borders.tga",0x1a);
    local_8._0_1_ = 0x65;
    uVar5 = FUN_00802710(iVar3,local_280,local_1b8);
    local_8._0_1_ = 0x1e;
    *(undefined4 *)(iVar3 + 0x2a8) = uVar5;
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_30[0]);
    }
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    FUN_00409350("/terrain/water_diag_borders.tga",0x1f);
    local_8._0_1_ = 0x66;
    uVar5 = FUN_00802710(iVar3,local_280,local_1b8);
    local_8._0_1_ = 0x1e;
    *(undefined4 *)(iVar3 + 0x2ac) = uVar5;
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_30[0]);
    }
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    FUN_00409350("/terrain/sea_normal.dds",0x17);
    local_8._0_1_ = 0x67;
    uVar5 = FUN_00802710(iVar3,local_280,local_1b8);
    local_8._0_1_ = 0x1e;
    *(undefined4 *)(iVar3 + 0x2b0) = uVar5;
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_30[0]);
    }
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    FUN_00409350("/terrain/map_overlay_tile.dds",0x1d);
    local_8._0_1_ = 0x68;
    uVar5 = FUN_00802710(iVar3,local_280,local_1b8);
    *(undefined4 *)(iVar3 + 0x2a4) = uVar5;
  }
  else {
    local_38 = 0xf;
    local_3c = 0;
    local_4c[0] = local_4c[0] & 0xffffff00;
    FUN_00409350("/terrain/texturesheet.tga",0x19);
    local_8._0_1_ = 0x2b;
    uVar5 = FUN_00988f20(local_4c);
    local_8._0_1_ = 0x2c;
    uVar5 = FUN_009bcbf0(uVar5,1);
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_30[0]);
    }
    local_8._0_1_ = 0x1e;
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_4c[0]);
    }
    **(undefined4 **)(param_1 + 0x27c) = uVar5;
    piVar9 = (int *)(param_1 + 0x40);
    param_1 = 0;
    if (0 < (int)(*(int *)(*piVar9 + 0x44) - *(int *)(*piVar9 + 0x40) & 0xfffffffcU)) {
      do {
        local_8._0_1_ = 0x1e;
        local_38 = 0xf;
        local_3c = 0;
        local_4c[0] = local_4c[0] & 0xffffff00;
        FUN_00409350(&DAT_00e17f6c,4);
        local_8._0_1_ = 0x2d;
        uVar5 = FUN_009888f0(local_248);
        local_8._0_1_ = 0x2e;
        local_a8 = 0xf;
        local_ac = 0;
        local_bc[0] = local_bc[0] & 0xffffff00;
        FUN_00409350("texturesheet",0xc);
        local_8._0_1_ = 0x2f;
        FUN_00988f20(uVar5);
        local_8._0_1_ = 0x30;
        FUN_00988f20(local_4c);
        if (0xf < local_2ac) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_2c0);
        }
        local_2ac = 0xf;
        local_2b0 = 0;
        local_2c0 = local_2c0 & 0xffffff00;
        if (0xf < local_a8) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_bc[0]);
        }
        local_a8 = 0xf;
        local_ac = 0;
        local_bc[0] = local_bc[0] & 0xffffff00;
        if (0xf < local_234) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_248[0]);
        }
        local_234 = 0xf;
        local_238 = 0;
        local_248[0] = local_248[0] & 0xffffff00;
        local_8._0_1_ = 0x35;
        if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_4c[0]);
        }
        local_38 = 0xf;
        local_3c = 0;
        local_4c[0] = local_4c[0] & 0xffffff00;
        local_1c = 0xf;
        local_20 = 0;
        local_30[0] = local_30[0] & 0xffffff00;
        FUN_00409350("/terrain/",9);
        local_8._0_1_ = 0x36;
        FUN_00988f20(local_30);
        local_8._0_1_ = 0x37;
        uVar5 = FUN_00988f20(&local_90.WorkingSetSize);
        local_8._0_1_ = 0x38;
        uVar5 = FUN_009bcbf0(uVar5,1);
        if (0xf < local_188) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_19c[0]);
        }
        local_188 = 0xf;
        local_18c = 0;
        local_19c[0] = local_19c[0] & 0xffffff00;
        if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_68[0]);
        }
        local_54 = 0xf;
        local_58 = 0;
        local_68[0] = local_68[0] & 0xffffff00;
        if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_30[0]);
        }
        *(undefined4 *)(*(int *)(iVar3 + 0x27c) + 4 + param_1 * 4) = uVar5;
        local_8._0_1_ = 0x1e;
        if (0xf < local_90.PagefileUsage) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_90.WorkingSetSize);
        }
        param_1 = param_1 + 1;
      } while (param_1 < *(int *)(*(int *)(iVar3 + 0x40) + 0x44) -
                         *(int *)(*(int *)(iVar3 + 0x40) + 0x40) >> 2);
    }
    local_8._0_1_ = 0x1e;
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    FUN_00409350("/terrain/borders.tga",0x14);
    local_8._0_1_ = 0x39;
    uVar5 = FUN_00988f20(local_30);
    local_8._0_1_ = 0x3a;
    uVar5 = FUN_009bcbf0(uVar5,1);
    if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_68[0]);
    }
    local_8._0_1_ = 0x1e;
    local_54 = 0xf;
    local_58 = 0;
    local_68[0] = local_68[0] & 0xffffff00;
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_30[0]);
    }
    **(undefined4 **)(iVar3 + 0x28c) = uVar5;
    param_1 = 0;
    if (0 < (int)(*(int *)(*(int *)(iVar3 + 0x40) + 0x34) - *(int *)(*(int *)(iVar3 + 0x40) + 0x30)
                 & 0xfffffffcU)) {
      do {
        local_8._0_1_ = 0x1e;
        local_a8 = 0xf;
        local_ac = 0;
        local_bc[0] = local_bc[0] & 0xffffff00;
        FUN_00409350(&DAT_00e17f6c,4);
        local_8._0_1_ = 0x3b;
        uVar5 = FUN_009888f0(local_19c);
        local_8._0_1_ = 0x3c;
        local_38 = 0xf;
        local_3c = 0;
        local_4c[0] = local_4c[0] & 0xffffff00;
        FUN_00409350("borders",7);
        local_8._0_1_ = 0x3d;
        FUN_00988f20(uVar5);
        local_8._0_1_ = 0x3e;
        FUN_00988f20(local_bc);
        if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_68[0]);
        }
        local_54 = 0xf;
        local_58 = 0;
        local_68[0] = local_68[0] & 0xffffff00;
        if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_4c[0]);
        }
        local_38 = 0xf;
        local_3c = 0;
        local_4c[0] = local_4c[0] & 0xffffff00;
        if (0xf < local_188) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_19c[0]);
        }
        local_188 = 0xf;
        local_18c = 0;
        local_19c[0] = local_19c[0] & 0xffffff00;
        local_8._0_1_ = 0x43;
        if (0xf < local_a8) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_bc[0]);
        }
        local_a8 = 0xf;
        local_ac = 0;
        local_bc[0] = local_bc[0] & 0xffffff00;
        local_1c = 0xf;
        local_20 = 0;
        local_30[0] = local_30[0] & 0xffffff00;
        FUN_00409350("/terrain/",9);
        local_8._0_1_ = 0x44;
        FUN_00988f20(local_30);
        local_8._0_1_ = 0x45;
        uVar5 = FUN_00988f20(&local_90.WorkingSetSize);
        local_8._0_1_ = 0x46;
        uVar5 = FUN_009bcbf0(uVar5,1);
        if (0xf < local_234) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_248[0]);
        }
        local_234 = 0xf;
        local_238 = 0;
        local_248[0] = local_248[0] & 0xffffff00;
        if (0xf < local_2ac) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_2c0);
        }
        local_2ac = 0xf;
        local_2b0 = 0;
        local_2c0 = local_2c0 & 0xffffff00;
        if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_30[0]);
        }
        *(undefined4 *)(*(int *)(iVar3 + 0x28c) + 4 + param_1 * 4) = uVar5;
        local_8._0_1_ = 0x1e;
        if (0xf < local_90.PagefileUsage) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_90.WorkingSetSize);
        }
        param_1 = param_1 + 1;
      } while (param_1 < *(int *)(*(int *)(iVar3 + 0x40) + 0x34) -
                         *(int *)(*(int *)(iVar3 + 0x40) + 0x30) >> 2);
    }
    local_8._0_1_ = 0x1e;
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    FUN_00409350("/terrain/water_borders.tga",0x1a);
    local_8._0_1_ = 0x47;
    uVar5 = FUN_00988f20(local_30);
    local_8._0_1_ = 0x48;
    uVar5 = FUN_009bcbf0(uVar5,1);
    *(undefined4 *)(iVar3 + 0x2a8) = uVar5;
    if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_68[0]);
    }
    local_8._0_1_ = 0x1e;
    local_54 = 0xf;
    local_58 = 0;
    local_68[0] = local_68[0] & 0xffffff00;
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_30[0]);
    }
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    FUN_00409350("/terrain/water_diag_borders.tga",0x1f);
    local_8._0_1_ = 0x49;
    uVar5 = FUN_00988f20(local_30);
    local_8._0_1_ = 0x4a;
    uVar5 = FUN_009bcbf0(uVar5,1);
    *(undefined4 *)(iVar3 + 0x2ac) = uVar5;
    if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_68[0]);
    }
    local_8._0_1_ = 0x1e;
    local_54 = 0xf;
    local_58 = 0;
    local_68[0] = local_68[0] & 0xffffff00;
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_30[0]);
    }
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    FUN_00409350("/terrain/sea_normal.dds",0x17);
    local_8._0_1_ = 0x4b;
    uVar5 = FUN_00988f20(local_30);
    local_8._0_1_ = 0x4c;
    uVar5 = FUN_009bcbf0(uVar5,1);
    *(undefined4 *)(iVar3 + 0x2b0) = uVar5;
    if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_68[0]);
    }
    local_8._0_1_ = 0x1e;
    local_54 = 0xf;
    local_58 = 0;
    local_68[0] = local_68[0] & 0xffffff00;
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_30[0]);
    }
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    FUN_00409350("/terrain/map_overlay_tile.dds",0x1d);
    local_8._0_1_ = 0x4d;
    uVar5 = FUN_00988f20(local_30);
    local_8._0_1_ = 0x4e;
    uVar5 = FUN_009bcbf0(uVar5,1);
    *(undefined4 *)(iVar3 + 0x2a4) = uVar5;
    if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_68[0]);
    }
    local_54 = 0xf;
    local_58 = 0;
    local_68[0] = local_68[0] & 0xffffff00;
  }
  if (0xf < local_1c) {
    local_8._0_1_ = 0x1e;
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_8._0_1_ = 0x1e;
  DVar16 = 0x28;
  pPVar15 = &local_1e8;
  pvVar6 = GetCurrentProcess();
  GetProcessMemoryInfo(pvVar6,pPVar15,DVar16);
  local_1c0 = local_1e8.WorkingSetSize - local_210.WorkingSetSize;
  fVar2 = (float)local_1c0;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("provincemanager.cpp",0x13);
  local_8._0_1_ = 0x69;
  FUN_004015b0(local_30,0x2cc,0x10005);
  local_8._0_1_ = 0x6a;
  uVar5 = FUN_00987d20((int)(fVar2 * 0.0009765625),extraout_ECX_04,&DAT_00e0785c);
  uVar5 = FUN_00455470(uVar5);
  uVar5 = FUN_00418e30(uVar5);
  FUN_00401280(uVar5);
  local_8._0_1_ = 0x69;
  FUN_00987ac0(local_108);
  local_108[0] = std::ios_base::vftable;
  FUN_00aad52d(local_108);
  local_8._0_1_ = 0x1e;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("provincemanager.cpp",0x13);
  local_8._0_1_ = 0x6b;
  FUN_004015b0(local_30,0x2cd,0x10005);
  local_8._0_1_ = 0x6c;
  FUN_009da350(extraout_ECX_05,&DAT_00e0785c);
  uVar5 = FUN_00b31c00();
  uVar5 = FUN_00987d20(uVar5);
  uVar5 = FUN_00455470(uVar5);
  FUN_00418e30(uVar5);
  FUN_00401280();
  local_8._0_1_ = 0x6b;
  FUN_00987ac0(local_108);
  local_108[0] = std::ios_base::vftable;
  FUN_00aad52d(local_108);
  local_8._0_1_ = 0x1e;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("provincemanager.cpp",0x13);
  local_8._0_1_ = 0x6d;
  FUN_004015b0();
  local_8._0_1_ = 0x6e;
  uVar5 = FUN_00987d20();
  FUN_00401280(uVar5);
  local_8._0_1_ = 0x6d;
  FUN_00987ac0(local_108);
  local_108[0] = std::ios_base::vftable;
  FUN_00aad52d(local_108);
  local_8._0_1_ = 0x1e;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  DVar16 = 0x28;
  pPVar15 = &local_210;
  pvVar6 = GetCurrentProcess();
  GetProcessMemoryInfo(pvVar6,pPVar15,DVar16);
  fVar13 = (float10)(**(code **)(**(int **)(iVar3 + 0x18) + 0x14))();
  local_a0 = (double)fVar13;
  iVar8 = FUN_00aae9af(0x40);
  local_8._0_1_ = 0x6f;
  if (iVar8 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_007d22b0(iVar8,*(undefined4 *)(iVar3 + 0x3c),*(undefined4 *)(iVar3 + 0x18c),
                         *(undefined4 *)(iVar3 + 400));
  }
  local_8._0_1_ = 0x1e;
  *(undefined4 *)(iVar3 + 0x1588) = uVar5;
  fVar13 = (float10)(**(code **)(**(int **)(iVar3 + 0x18) + 0x14))();
  local_98 = (double)fVar13;
  DVar16 = 0x28;
  pPVar15 = &local_1e8;
  pvVar6 = GetCurrentProcess();
  GetProcessMemoryInfo(pvVar6,pPVar15,DVar16);
  local_1c0 = local_1e8.WorkingSetSize - local_210.WorkingSetSize;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("provincemanager.cpp",0x13);
  local_8._0_1_ = 0x70;
  FUN_004015b0();
  local_8._0_1_ = 0x71;
  uVar5 = FUN_00987d20(local_98 - local_a0,extraout_ECX_06,&DAT_00e07938);
  uVar5 = FUN_0048c130(uVar5);
  uVar5 = FUN_00418e30(uVar5);
  FUN_00401280(uVar5);
  local_8._0_1_ = 0x70;
  FUN_00987ac0(local_108);
  local_108[0] = std::ios_base::vftable;
  FUN_00aad52d(local_108);
  local_8._0_1_ = 0x1e;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("provincemanager.cpp",0x13);
  local_8._0_1_ = 0x72;
  FUN_004015b0(local_30,0x2d7,0x10005);
  local_8._0_1_ = 0x73;
  uVar5 = FUN_00987d20((int)((double)local_1c0 * 0.0009765625),extraout_ECX_07,&DAT_00e0785c);
  uVar5 = FUN_00455470(uVar5);
  uVar5 = FUN_00418e30(uVar5);
  FUN_00401280(uVar5);
  local_8._0_1_ = 0x72;
  FUN_00987ac0(local_108);
  local_108[0] = std::ios_base::vftable;
  FUN_00aad52d(local_108);
  local_8._0_1_ = 0x1e;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("provincemanager.cpp",0x13);
  local_8._0_1_ = 0x74;
  FUN_004015b0(local_30,0x2d8,0x10005);
  local_8._0_1_ = 0x75;
  FUN_009da350(extraout_ECX_08,&DAT_00e0785c);
  uVar5 = FUN_00b31c00();
  uVar5 = FUN_00987d20(uVar5);
  uVar5 = FUN_00455470(uVar5);
  FUN_00418e30(uVar5);
  FUN_00401280();
  local_8._0_1_ = 0x74;
  FUN_00987ac0(local_108);
  local_108[0] = std::ios_base::vftable;
  FUN_00aad52d(local_108);
  local_8._0_1_ = 0x1e;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("provincemanager.cpp",0x13);
  local_8._0_1_ = 0x76;
  FUN_004015b0();
  local_8._0_1_ = 0x77;
  uVar5 = FUN_00987d20();
  FUN_00401280(uVar5);
  local_8._0_1_ = 0x76;
  FUN_00987ac0(local_108);
  local_108[0] = std::ios_base::vftable;
  FUN_00aad52d(local_108);
  local_8._0_1_ = 0x1e;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  DVar16 = 0x28;
  pPVar15 = &local_210;
  pvVar6 = GetCurrentProcess();
  GetProcessMemoryInfo(pvVar6,pPVar15,DVar16);
  fVar13 = (float10)(**(code **)(**(int **)(iVar3 + 0x18) + 0x14))();
  local_a0 = (double)fVar13;
  FUN_007f2820(iVar3);
  fVar13 = (float10)(**(code **)(**(int **)(iVar3 + 0x18) + 0x14))();
  local_98 = (double)fVar13;
  DVar16 = 0x28;
  pPVar15 = &local_1e8;
  pvVar6 = GetCurrentProcess();
  GetProcessMemoryInfo(pvVar6,pPVar15,DVar16);
  local_1c0 = local_1e8.WorkingSetSize - local_210.WorkingSetSize;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("provincemanager.cpp",0x13);
  local_8._0_1_ = 0x78;
  FUN_004015b0();
  local_8._0_1_ = 0x79;
  uVar5 = FUN_00987d20();
  FUN_00401280(uVar5);
  local_8._0_1_ = 0x78;
  FUN_00987ac0(local_108);
  local_108[0] = std::ios_base::vftable;
  FUN_00aad52d(local_108);
  local_8._0_1_ = 0x1e;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  FUN_004471e0("provincemanager.cpp");
  local_8._0_1_ = 0x7a;
  FUN_004015b0();
  local_8._0_1_ = 0x7b;
  uVar5 = FUN_00987d20(local_98 - local_a0,extraout_ECX_09,&DAT_00e07938);
  uVar5 = FUN_0048c130(uVar5);
  uVar5 = FUN_00418e30(uVar5);
  FUN_00401280(uVar5);
  local_8._0_1_ = 0x7a;
  FUN_00987ac0(local_108);
  local_108[0] = std::ios_base::vftable;
  FUN_00aad52d(local_108);
  local_8._0_1_ = 0x1e;
  if (0xf < local_90.PagefileUsage) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_90.WorkingSetSize);
  }
  FUN_004471e0("provincemanager.cpp");
  local_8._0_1_ = 0x7c;
  FUN_004015b0(&local_90.WorkingSetSize,0x2e3,0x10005);
  local_8._0_1_ = 0x7d;
  uVar5 = FUN_00987d20((int)((double)local_1c0 * 0.0009765625),extraout_ECX_10,&DAT_00e0785c);
  uVar5 = FUN_00455470(uVar5);
  FUN_00418e30(uVar5);
  FUN_00401280();
  local_8._0_1_ = 0x7c;
  FUN_00987ac0(local_108);
  local_108[0] = std::ios_base::vftable;
  FUN_00aad52d(local_108);
  local_8._0_1_ = 0x1e;
  if (0xf < local_90.PagefileUsage) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_90.WorkingSetSize);
  }
  FUN_004471e0("provincemanager.cpp");
  local_8._0_1_ = 0x7e;
  FUN_004015b0();
  local_8._0_1_ = 0x7f;
  FUN_009da350(extraout_ECX_11,&DAT_00e0785c);
  FUN_00b31c00();
  uVar5 = FUN_00987d20();
  uVar5 = FUN_00455470(uVar5);
  FUN_00418e30(uVar5);
  FUN_00401280();
  local_8._0_1_ = 0x7e;
  FUN_00987ac0();
  local_108[0] = std::ios_base::vftable;
  FUN_00aad52d();
  local_8._0_1_ = 0x1e;
  if (0xf < local_90.PagefileUsage) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  FUN_004471e0();
  local_8._0_1_ = 0x80;
  FUN_009a8ee0(local_b4,&local_90.WorkingSetSize);
  local_8._0_1_ = 0x81;
  iVar8 = FUN_00475500();
  FUN_009a9880(*(undefined8 *)(iVar8 + 0x6c),*(undefined8 *)(iVar8 + 0x74));
  local_8._0_1_ = 0x82;
  FUN_007e1210();
  if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_54 = 0xf;
  local_58 = 0;
  local_68[0] = local_68[0] & 0xffffff00;
  local_8._0_1_ = 0x80;
  FUN_009a9740();
  local_8._0_1_ = 0x1e;
  if (0xf < local_90.PagefileUsage) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  FUN_004471e0();
  local_8._0_1_ = 0x83;
  FUN_0099d3d0(*(undefined4 *)(iVar3 + 0x3c),local_68);
  local_8._0_1_ = 0x84;
  FUN_004015b0();
  local_8._0_1_ = 0x85;
  uVar5 = FUN_00987d20();
  FUN_00418e30(uVar5);
  FUN_00401280();
  local_8._0_1_ = 0x84;
  FUN_00987ac0();
  local_108[0] = std::ios_base::vftable;
  FUN_00aad52d();
  if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 0x1e;
  local_54 = 0xf;
  local_58 = 0;
  local_68[0] = local_68[0] & 0xffffff00;
  if (0xf < local_90.PagefileUsage) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  pPVar15 = &local_210;
  DVar16 = 0x28;
  pvVar6 = GetCurrentProcess();
  GetProcessMemoryInfo(pvVar6,pPVar15,DVar16);
  fVar13 = (float10)(**(code **)(**(int **)(iVar3 + 0x18) + 0x14))();
  local_a0 = (double)fVar13;
  iVar8 = FUN_00aae9af();
  local_8._0_1_ = 0x86;
  if (iVar8 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_007d4480(iVar8,*(undefined4 *)(iVar3 + 0x3c),*(undefined4 *)(iVar3 + 0x194),
                         *(undefined4 *)(iVar3 + 400));
  }
  local_8._0_1_ = 0x1e;
  *(undefined4 *)(iVar3 + 0x1580) = uVar5;
  fVar13 = (float10)(**(code **)(**(int **)(iVar3 + 0x18) + 0x14))();
  local_98 = (double)fVar13;
  pPVar15 = &local_1e8;
  DVar16 = 0x28;
  pvVar6 = GetCurrentProcess();
  GetProcessMemoryInfo(pvVar6,pPVar15,DVar16);
  local_1c0 = local_1e8.WorkingSetSize - local_210.WorkingSetSize;
  FUN_004471e0();
  local_8._0_1_ = 0x87;
  FUN_004015b0();
  local_8._0_1_ = 0x88;
  uVar5 = FUN_00987d20(local_98 - local_a0,extraout_ECX_12,&DAT_00e07938);
  uVar5 = FUN_0048c130(uVar5);
  uVar5 = FUN_00418e30(uVar5);
  FUN_00401280(uVar5);
  local_8._0_1_ = 0x87;
  FUN_00987ac0(local_108);
  local_108[0] = std::ios_base::vftable;
  FUN_00aad52d(local_108);
  local_8._0_1_ = 0x1e;
  if (0xf < local_90.PagefileUsage) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_90.WorkingSetSize);
  }
  FUN_004471e0("provincemanager.cpp");
  local_8._0_1_ = 0x89;
  FUN_004015b0(&local_90.WorkingSetSize,0x2f0,0x10005);
  local_8._0_1_ = 0x8a;
  uVar5 = FUN_00987d20((int)((double)local_1c0 * 0.0009765625),extraout_ECX_13,&DAT_00e0785c);
  uVar5 = FUN_00455470(uVar5);
  FUN_00418e30(uVar5);
  FUN_00401280();
  local_8._0_1_ = 0x89;
  FUN_00987ac0(local_108);
  local_108[0] = std::ios_base::vftable;
  FUN_00aad52d(local_108);
  local_8._0_1_ = 0x1e;
  if (0xf < local_90.PagefileUsage) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_90.WorkingSetSize);
  }
  FUN_004471e0("provincemanager.cpp");
  local_8._0_1_ = 0x8b;
  FUN_004015b0();
  local_8._0_1_ = 0x8c;
  FUN_009da350(extraout_ECX_14,&DAT_00e0785c);
  FUN_00b31c00();
  uVar5 = FUN_00987d20();
  uVar5 = FUN_00455470(uVar5);
  FUN_00418e30(uVar5);
  FUN_00401280();
  local_8._0_1_ = 0x8b;
  FUN_00987ac0();
  local_108[0] = std::ios_base::vftable;
  FUN_00aad52d();
  local_8._0_1_ = 0x1e;
  if (0xf < local_90.PagefileUsage) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  FUN_007f2f70();
  FUN_004471e0();
  local_8._0_1_ = 0x8d;
  FUN_009a8ee0(local_b4,&local_90.WorkingSetSize);
  local_8._0_1_ = 0x8e;
  iVar8 = FUN_00475500();
  FUN_009a9880(*(undefined8 *)(iVar8 + 0x6c),*(undefined8 *)(iVar8 + 0x74));
  local_8._0_1_ = 0x8f;
  FUN_007e1210();
  if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_54 = 0xf;
  local_58 = 0;
  local_68[0] = local_68[0] & 0xffffff00;
  local_8._0_1_ = 0x8d;
  FUN_009a9740();
  local_8._0_1_ = 0x1e;
  if (0xf < local_90.PagefileUsage) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  FUN_004471e0();
  local_8._0_1_ = 0x90;
  FUN_0099d3d0(*(undefined4 *)(iVar3 + 0x3c),local_68);
  local_8._0_1_ = 0x91;
  FUN_004015b0();
  local_8._0_1_ = 0x92;
  uVar5 = FUN_00987d20();
  FUN_00418e30(uVar5);
  FUN_00401280();
  local_8._0_1_ = 0x91;
  FUN_00987ac0();
  local_108[0] = std::ios_base::vftable;
  FUN_00aad52d();
  if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 0x1e;
  local_54 = 0xf;
  local_58 = 0;
  local_68[0] = local_68[0] & 0xffffff00;
  if (0xf < local_90.PagefileUsage) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  pPVar15 = &local_210;
  DVar16 = 0x28;
  pvVar6 = GetCurrentProcess();
  GetProcessMemoryInfo(pvVar6,pPVar15,DVar16);
  fVar13 = (float10)(**(code **)(**(int **)(iVar3 + 0x18) + 0x14))();
  local_a0 = (double)fVar13;
  FUN_007f2480();
  FUN_007f2380();
  fVar13 = (float10)(**(code **)(**(int **)(iVar3 + 0x18) + 0x14))();
  local_98 = (double)fVar13;
  pPVar15 = &local_1e8;
  DVar16 = 0x28;
  pvVar6 = GetCurrentProcess();
  GetProcessMemoryInfo(pvVar6,pPVar15,DVar16);
  local_1c0 = local_1e8.WorkingSetSize - local_210.WorkingSetSize;
  FUN_004471e0();
  local_8._0_1_ = 0x93;
  FUN_004015b0();
  local_8._0_1_ = 0x94;
  uVar5 = FUN_00987d20(local_98 - local_a0,extraout_ECX_15,&DAT_00e07938);
  uVar5 = FUN_0048c130(uVar5);
  uVar5 = FUN_00418e30(uVar5);
  FUN_00401280(uVar5);
  local_8._0_1_ = 0x93;
  FUN_00987ac0(local_108);
  local_108[0] = std::ios_base::vftable;
  FUN_00aad52d(local_108);
  local_8._0_1_ = 0x1e;
  if (0xf < local_90.PagefileUsage) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_90.WorkingSetSize);
  }
  FUN_004471e0("provincemanager.cpp");
  local_8._0_1_ = 0x95;
  FUN_004015b0(&local_90.WorkingSetSize,0x300,0x10005);
  local_8._0_1_ = 0x96;
  uVar5 = FUN_00987d20((int)((double)local_1c0 * 0.0009765625),extraout_ECX_16,&DAT_00e0785c);
  uVar5 = FUN_00455470(uVar5);
  FUN_00418e30(uVar5);
  FUN_00401280();
  local_8._0_1_ = 0x95;
  FUN_00987ac0(local_108);
  local_108[0] = std::ios_base::vftable;
  FUN_00aad52d(local_108);
  local_8._0_1_ = 0x1e;
  if (0xf < local_90.PagefileUsage) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_90.WorkingSetSize);
  }
  FUN_004471e0("provincemanager.cpp");
  local_8._0_1_ = 0x97;
  FUN_004015b0();
  local_8._0_1_ = 0x98;
  FUN_009da350(extraout_ECX_17,&DAT_00e0785c);
  FUN_00b31c00();
  uVar5 = FUN_00987d20();
  uVar5 = FUN_00455470(uVar5);
  FUN_00418e30(uVar5);
  FUN_00401280();
  local_8._0_1_ = 0x97;
  FUN_00987ac0();
  local_108[0] = std::ios_base::vftable;
  FUN_00aad52d();
  local_8._0_1_ = 0x1e;
  if (0xf < local_90.PagefileUsage) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  FUN_009885d0();
  local_8._0_1_ = 0xa5;
  FUN_009a8ee0(local_b4,&local_90.WorkingSetSize);
  local_8._0_1_ = 0xa6;
  iVar8 = FUN_00475500();
  FUN_009a9880(*(undefined8 *)(iVar8 + 0x6c),*(undefined8 *)(iVar8 + 0x74));
  local_8._0_1_ = 0xa7;
  FUN_007e1210();
  if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_54 = 0xf;
  local_58 = 0;
  local_68[0] = local_68[0] & 0xffffff00;
  local_8._0_1_ = 0xa5;
  FUN_009a9740();
  local_8._0_1_ = 0x1e;
  if (0xf < local_90.PagefileUsage) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  FUN_009885d0();
  local_8._0_1_ = 0xa8;
  FUN_0099d3d0(*(undefined4 *)(iVar3 + 0x3c),local_68);
  local_8._0_1_ = 0xa9;
  FUN_004015b0();
  local_8._0_1_ = 0xaa;
  uVar5 = FUN_00987d20();
  FUN_00418e30(uVar5);
  FUN_00401280();
  local_8._0_1_ = 0xa9;
  FUN_00987ac0();
  local_108[0] = std::ios_base::vftable;
  FUN_00aad52d();
  if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 0x1e;
  local_54 = 0xf;
  local_58 = 0;
  local_68[0] = local_68[0] & 0xffffff00;
  if (0xf < local_90.PagefileUsage) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  pPVar15 = &local_210;
  DVar16 = 0x28;
  pvVar6 = GetCurrentProcess();
  GetProcessMemoryInfo(pvVar6,pPVar15,DVar16);
  fVar13 = (float10)(**(code **)(**(int **)(iVar3 + 0x18) + 0x14))();
  local_a0 = (double)fVar13;
  iVar8 = FUN_00aae9af();
  local_8._0_1_ = 0xab;
  if (iVar8 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_008108e0();
  }
  local_8._0_1_ = 0x1e;
  *(undefined4 *)(iVar3 + 0x1584) = uVar5;
  fVar13 = (float10)(**(code **)(**(int **)(iVar3 + 0x18) + 0x14))();
  local_98 = (double)fVar13;
  pPVar15 = &local_1e8;
  DVar16 = 0x28;
  pvVar6 = GetCurrentProcess();
  GetProcessMemoryInfo(pvVar6,pPVar15,DVar16);
  local_1c0 = local_1e8.WorkingSetSize - local_210.WorkingSetSize;
  FUN_009885d0();
  local_8._0_1_ = 0xac;
  FUN_004015b0();
  local_8._0_1_ = 0xad;
  uVar5 = FUN_00987d20(local_98 - local_a0,extraout_ECX_18,&DAT_00e07938);
  uVar5 = FUN_0048c130(uVar5);
  uVar5 = FUN_00418e30(uVar5);
  FUN_00401280(uVar5);
  local_8._0_1_ = 0xac;
  FUN_00987ac0(local_108);
  local_108[0] = std::ios_base::vftable;
  FUN_00aad52d(local_108);
  local_8._0_1_ = 0x1e;
  if (0xf < local_90.PagefileUsage) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_90.WorkingSetSize);
  }
  FUN_009885d0();
  local_8._0_1_ = 0xae;
  FUN_004015b0(&local_90.WorkingSetSize,800,0x10005);
  local_8._0_1_ = 0xaf;
  uVar5 = FUN_00987d20((int)((double)local_1c0 * 0.0009765625),extraout_ECX_19,&DAT_00e0785c);
  uVar5 = FUN_00455470(uVar5);
  FUN_00418e30(uVar5);
  FUN_00401280();
  local_8._0_1_ = 0xae;
  FUN_00987ac0(local_108);
  local_108[0] = std::ios_base::vftable;
  FUN_00aad52d(local_108);
  local_8._0_1_ = 0x1e;
  if (0xf < local_90.PagefileUsage) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_90.WorkingSetSize);
  }
  FUN_009885d0();
  local_8._0_1_ = 0xb0;
  FUN_004015b0();
  local_8._0_1_ = 0xb1;
  FUN_009da350(extraout_ECX_20,&DAT_00e0785c);
  FUN_00b31c00();
  uVar5 = FUN_00987d20();
  uVar5 = FUN_00455470(uVar5);
  FUN_00418e30(uVar5);
  FUN_00401280();
  local_8._0_1_ = 0xb0;
  FUN_00987ac0();
  local_108[0] = std::ios_base::vftable;
  FUN_00aad52d();
  local_8._0_1_ = 0x1e;
  if (0xf < local_90.PagefileUsage) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  FUN_009885d0();
  local_8._0_1_ = 0xb2;
  FUN_009a8ee0(local_b4,&local_90.WorkingSetSize);
  local_8._0_1_ = 0xb3;
  iVar8 = FUN_00475500();
  FUN_009a9880(*(undefined8 *)(iVar8 + 0x6c),*(undefined8 *)(iVar8 + 0x74));
  local_8._0_1_ = 0xb4;
  FUN_007e1210();
  if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_54 = 0xf;
  local_58 = 0;
  local_68[0] = local_68[0] & 0xffffff00;
  local_8._0_1_ = 0xb2;
  FUN_009a9740();
  local_8._0_1_ = 0x1e;
  if (0xf < local_90.PagefileUsage) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  FUN_009885d0();
  local_8._0_1_ = 0xb5;
  FUN_0099d3d0(*(undefined4 *)(iVar3 + 0x3c),local_68);
  local_8._0_1_ = 0xb6;
  FUN_004015b0();
  local_8._0_1_ = 0xb7;
  uVar5 = FUN_00987d20();
  FUN_00418e30(uVar5);
  FUN_00401280();
  local_8._0_1_ = 0xb6;
  FUN_00987ac0();
  local_108[0] = std::ios_base::vftable;
  FUN_00aad52d();
  if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 0x1e;
  local_54 = 0xf;
  local_58 = 0;
  local_68[0] = local_68[0] & 0xffffff00;
  if (0xf < local_90.PagefileUsage) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  pPVar15 = &local_210;
  DVar16 = 0x28;
  pvVar6 = GetCurrentProcess();
  GetProcessMemoryInfo(pvVar6,pPVar15,DVar16);
  fVar13 = (float10)(**(code **)(**(int **)(iVar3 + 0x18) + 0x14))();
  local_a0 = (double)fVar13;
  FUN_007f35d0();
  fVar13 = (float10)(**(code **)(**(int **)(iVar3 + 0x18) + 0x14))();
  local_98 = (double)fVar13;
  pPVar15 = &local_1e8;
  DVar16 = 0x28;
  pvVar6 = GetCurrentProcess();
  GetProcessMemoryInfo(pvVar6,pPVar15,DVar16);
  local_1c0 = local_1e8.WorkingSetSize - local_210.WorkingSetSize;
  FUN_009885d0();
  local_8._0_1_ = 0xb8;
  FUN_004015b0();
  local_8._0_1_ = 0xb9;
  uVar5 = FUN_00987d20(local_98 - local_a0,extraout_ECX_21,&DAT_00e07938);
  uVar5 = FUN_0048c130(uVar5);
  uVar5 = FUN_00418e30(uVar5);
  FUN_00401280(uVar5);
  local_8._0_1_ = 0xb8;
  FUN_00987ac0(local_108);
  local_108[0] = std::ios_base::vftable;
  FUN_00aad52d(local_108);
  local_8._0_1_ = 0x1e;
  if (0xf < local_90.PagefileUsage) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_90.WorkingSetSize);
  }
  FUN_009885d0();
  local_8._0_1_ = 0xba;
  FUN_004015b0(&local_90.WorkingSetSize,0x32d,0x10005);
  local_8._0_1_ = 0xbb;
  uVar5 = FUN_00987d20((int)((double)local_1c0 * 0.0009765625),extraout_ECX_22,&DAT_00e0785c);
  uVar5 = FUN_00455470(uVar5);
  FUN_00418e30(uVar5);
  FUN_00401280();
  local_8._0_1_ = 0xba;
  FUN_00987ac0(local_108);
  local_108[0] = std::ios_base::vftable;
  FUN_00aad52d(local_108);
  local_8._0_1_ = 0x1e;
  if (0xf < local_90.PagefileUsage) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_90.WorkingSetSize);
  }
  FUN_009885d0();
  local_8._0_1_ = 0xbc;
  FUN_004015b0();
  local_8._0_1_ = 0xbd;
  FUN_009da350(extraout_ECX_23,&DAT_00e0785c);
  FUN_00b31c00();
  uVar5 = FUN_00987d20();
  uVar5 = FUN_00455470(uVar5);
  FUN_00418e30(uVar5);
  FUN_00401280();
  local_8._0_1_ = 0xbc;
  FUN_00987ac0();
  local_108[0] = std::ios_base::vftable;
  FUN_00aad52d();
  local_8._0_1_ = 0x1e;
  if (0xf < local_90.PagefileUsage) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  FUN_009885d0();
  local_8._0_1_ = 0xbe;
  FUN_009a8ee0(local_b4,&local_90.WorkingSetSize);
  local_8._0_1_ = 0xbf;
  iVar8 = FUN_00475500();
  FUN_009a9880(*(undefined8 *)(iVar8 + 0x6c),*(undefined8 *)(iVar8 + 0x74));
  local_8._0_1_ = 0xc0;
  FUN_007e1210();
  if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_54 = 0xf;
  local_58 = 0;
  local_68[0] = local_68[0] & 0xffffff00;
  local_8._0_1_ = 0xbe;
  FUN_009a9740();
  local_8._0_1_ = 0x1e;
  if (0xf < local_90.PagefileUsage) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  FUN_009885d0();
  local_8._0_1_ = 0xc1;
  puVar7 = (undefined4 *)FUN_0099d3d0(*(undefined4 *)(iVar3 + 0x3c),local_68);
  local_8._0_1_ = 0xc2;
  FUN_004015b0();
  local_8._0_1_ = 0xc3;
  uVar5 = FUN_00987d20();
  if (0xf < (uint)puVar7[5]) {
    puVar7 = (undefined4 *)*puVar7;
  }
  FUN_00418e30(uVar5,puVar7);
  FUN_00401280();
  local_8._0_1_ = 0xc2;
  FUN_00987ac0();
  local_108[0] = std::ios_base::vftable;
  FUN_00aad52d();
  if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 0x1e;
  local_54 = 0xf;
  local_58 = 0;
  local_68[0] = local_68[0] & 0xffffff00;
  if (0xf < local_90.PagefileUsage) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_a0 = local_98;
  FUN_004a11d0();
  fVar13 = (float10)(**(code **)(**(int **)(iVar3 + 0x18) + 0x14))();
  local_98 = (double)fVar13;
  FUN_009885d0();
  local_8._0_1_ = 0xc4;
  FUN_004015b0();
  local_8._0_1_ = 0xc5;
  uVar5 = FUN_00987d20(local_98 - local_a0,extraout_ECX_24,&DAT_00e07938);
  uVar5 = FUN_0048c130(uVar5);
  FUN_00418e30(uVar5);
  FUN_00401280();
  local_8._0_1_ = 0xc4;
  FUN_00987ac0(local_108);
  local_108[0] = std::ios_base::vftable;
  FUN_00aad52d(local_108);
  local_8._0_1_ = 0x1e;
  if (0xf < local_90.PagefileUsage) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_90.WorkingSetSize);
  }
  FUN_009da350();
  iVar8 = FUN_00b31c00();
  DVar16 = 0x28;
  pPVar15 = &local_210;
  pvVar6 = GetCurrentProcess();
  GetProcessMemoryInfo(pvVar6,pPVar15,DVar16);
  FUN_007fc780();
  DVar16 = 0x28;
  pPVar15 = &local_1e8;
  pvVar6 = GetCurrentProcess();
  GetProcessMemoryInfo(pvVar6,pPVar15,DVar16);
  local_1c0 = local_1e8.WorkingSetSize - local_210.WorkingSetSize;
  FUN_009da350();
  iVar10 = FUN_00b31c00();
  local_a0 = local_98;
  fVar13 = (float10)(**(code **)(**(int **)(iVar3 + 0x18) + 0x14))();
  local_98 = (double)fVar13;
  FUN_009885d0();
  local_8._0_1_ = 0xc6;
  FUN_004015b0();
  local_8._0_1_ = 199;
  uVar5 = FUN_00987d20(local_98 - local_a0,extraout_ECX_25,&DAT_00e07938);
  uVar5 = FUN_0048c130(uVar5);
  uVar5 = FUN_00418e30(uVar5);
  FUN_00401280(uVar5);
  local_8._0_1_ = 0xc6;
  FUN_00987ac0(local_108);
  local_108[0] = std::ios_base::vftable;
  FUN_00aad52d(local_108);
  local_8._0_1_ = 0x1e;
  if (0xf < local_90.PagefileUsage) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_90.WorkingSetSize);
  }
  FUN_009885d0();
  local_8._0_1_ = 200;
  FUN_004015b0(&local_90.WorkingSetSize,0x343,0x10005);
  local_8._0_1_ = 0xc9;
  uVar5 = FUN_00987d20(iVar8 - iVar10,extraout_ECX_26,&DAT_00e0785c);
  uVar5 = FUN_00455470(uVar5);
  uVar5 = FUN_00418e30(uVar5);
  FUN_00401280(uVar5);
  local_8._0_1_ = 200;
  FUN_00987ac0(local_108);
  local_108[0] = std::ios_base::vftable;
  FUN_00aad52d(local_108);
  local_8._0_1_ = 0x1e;
  if (0xf < local_90.PagefileUsage) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_90.WorkingSetSize);
  }
  FUN_009885d0();
  local_8._0_1_ = 0xca;
  FUN_004015b0(&local_90.WorkingSetSize,0x344,0x10005);
  local_8._0_1_ = 0xcb;
  uVar5 = FUN_00987d20(local_288 - (iVar8 - iVar10),extraout_ECX_27,&DAT_00e0785c);
  uVar5 = FUN_00455470(uVar5);
  uVar5 = FUN_00418e30(uVar5);
  FUN_00401280(uVar5);
  local_8._0_1_ = 0xca;
  FUN_00987ac0(local_108);
  local_108[0] = std::ios_base::vftable;
  FUN_00aad52d(local_108);
  local_8._0_1_ = 0x1e;
  if (0xf < local_90.PagefileUsage) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_90.WorkingSetSize);
  }
  FUN_009885d0();
  local_8._0_1_ = 0xcc;
  FUN_004015b0(&local_90.WorkingSetSize,0x346,0x10005);
  local_8._0_1_ = 0xcd;
  FUN_009da350(extraout_ECX_28,&DAT_00e0785c);
  uVar5 = FUN_00b31c00();
  uVar5 = FUN_00987d20(uVar5);
  uVar5 = FUN_00455470(uVar5);
  uVar5 = FUN_00418e30(uVar5);
  uVar5 = FUN_00401280(uVar5);
  FUN_00401280(uVar5);
  local_8 = CONCAT31(local_8._1_3_,0xcc);
  FUN_00987ac0(local_108);
  local_108[0] = std::ios_base::vftable;
  FUN_00aad52d(local_108);
  if (0xf < local_90.PagefileUsage) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_90.WorkingSetSize);
  }
  if (0xf < local_290) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2a4[0]);
  }
  local_290 = 0xf;
  local_294 = 0;
  local_2a4[0] = local_2a4[0] & 0xffffff00;
  if (0xf < local_218) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_22c[0]);
  }
  local_218 = 0xf;
  local_21c = 0;
  local_22c[0] = local_22c[0] & 0xffffff00;
  if (0xf < local_2c8) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2dc[0]);
  }
  local_2c8 = 0xf;
  local_2cc = 0;
  local_2dc[0] = local_2dc[0] & 0xffffff00;
  if (0xf < local_250) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_264[0]);
  }
  local_250 = 0xf;
  local_254 = 0;
  local_264[0] = local_264[0] & 0xffffff00;
  if (0xf < local_26c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_280[0]);
  }
  local_26c = 0xf;
  local_270 = 0;
  local_280[0] = local_280[0] & 0xffffff00;
  if (local_1a4 < 0x10) {
    ExceptionList = local_10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_1b8[0]);
}

