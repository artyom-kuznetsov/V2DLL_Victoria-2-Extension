// FUN_007f35d0 @ 007f35d0 body=[[007f35d0, 007f3682] [007f3686, 007f378b] [007f378f, 007f37b9] [007f37bd, 007f37e0] [007f37e4, 007f385a] [007f385e, 007f3882] [007f3886, 007f38a0] [007f38a4, 007f3aa5] [007f3aa9, 007f3b81] [007f3b85, 007f3c5c] [007f3c60, 007f3d2f] [007f3d33, 007f3ebc] [007f3ec0, 007f3ff2] [007f3ff6, 007f40cb] [007f40cf, 007f41fb] [007f41ff, 007f430c] [007f4310, 007f444f] [007f4453, 007f4528] [007f452c, 007f461e] [007f4622, 007f46a9] [007f46ad, 007f46dd] [007f46e1, 007f46fc] [007f4700, 007f47de] [007f47e2, 007f4800] [007f4804, 007f48fd] [007f4901, 007f49d8] [007f49dc, 007f4a9e] [007f4aa2, 007f4b69] [007f4b6d, 007f4b80] [007f4b84, 007f4ba9] [007f4bad, 007f4bd2] [007f4bd6, 007f4be8]]


void FUN_007f35d0(int param_1)

{
  void *pvVar1;
  undefined1 uVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  HANDLE pvVar6;
  int *piVar7;
  uint uVar8;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 extraout_ECX_06;
  undefined4 extraout_ECX_07;
  float10 fVar9;
  undefined8 uVar10;
  PROCESS_MEMORY_COUNTERS *pPVar11;
  DWORD DVar12;
  PROCESS_MEMORY_COUNTERS local_248;
  PROCESS_MEMORY_COUNTERS local_220;
  int local_1f8;
  undefined1 local_1ec [20];
  uint local_1d8;
  uint local_1d0;
  undefined4 local_1c0;
  uint local_1bc;
  uint local_1b4;
  undefined4 local_1a4;
  uint local_1a0;
  uint local_198;
  undefined4 local_188;
  uint local_184;
  uint local_17c [4];
  undefined4 local_16c;
  uint local_168;
  undefined **local_e8 [18];
  uint local_a0 [4];
  undefined4 local_90;
  uint local_8c;
  PROCESS_MEMORY_COUNTERS local_84;
  uint local_5c [2];
  undefined1 local_54 [4];
  int local_50;
  undefined4 local_4c;
  uint local_48;
  char local_3e;
  char local_3d;
  float local_3c;
  uint local_38 [4];
  undefined4 local_28;
  uint local_24;
  float local_1c;
  float local_18;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b6ad0a;
  local_10 = ExceptionList;
  local_48 = 0xf;
  local_4c = 0;
  local_5c[0] = local_5c[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("provincemanager.cpp",0x13);
  local_8 = 0;
  FUN_004015b0(local_5c,0x664,3);
  local_8._0_1_ = 1;
  uVar4 = FUN_00987d20();
  FUN_00401280(uVar4);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_00987ac0(local_e8);
  local_e8[0] = std::ios_base::vftable;
  FUN_00aad52d(local_e8);
  local_8 = 0xffffffff;
  if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_5c[0]);
  }
  local_48 = 0xf;
  local_4c = 0;
  local_5c[0] = local_5c[0] & 0xffffff00;
  FUN_00436780();
  local_8 = 2;
  FUN_004367c0();
  local_8._0_1_ = 3;
  iVar5 = *(int *)(DAT_012586e0 + 0x5c);
  if (iVar5 == 1) {
    FUN_00408ed0(local_17c,0,0xffffffff);
  }
  local_8c = 0xf;
  local_90 = 0;
  local_a0[0] = local_a0[0] & 0xffffff00;
  FUN_00409350(&DAT_00ded94d,0);
  local_8._0_1_ = 4;
  uVar2 = (undefined1)local_8;
  local_8._0_1_ = 4;
  if (iVar5 == 2) {
    local_24 = 0xf;
    local_28 = 0;
    local_38[0] = local_38[0] & 0xffffff00;
    local_8._0_1_ = uVar2;
    FUN_00409350("/cache/quad_textures/",0x15);
    local_8._0_1_ = 8;
    FUN_00988fa0(local_17c);
    local_8._0_1_ = 9;
    uVar4 = FUN_00988f20(local_38);
    local_8._0_1_ = 10;
    FUN_00448aa0(uVar4,0,0xffffffff);
    if (0xf < local_1bc) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_1d0);
    }
    local_1bc = 0xf;
    local_1c0 = 0;
    local_1d0 = local_1d0 & 0xffffff00;
    if (0xf < local_84.PagefileUsage) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_84.WorkingSetSize);
    }
    local_8 = CONCAT31(local_8._1_3_,4);
    local_84.PagefileUsage = 0xf;
    local_84.QuotaNonPagedPoolUsage = 0;
    local_84.WorkingSetSize = local_84.WorkingSetSize & 0xffffff00;
    if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_38[0]);
    }
    local_24 = 0xf;
    local_28 = 0;
    local_38[0] = local_38[0] & 0xffffff00;
  }
  else {
    local_48 = 0xf;
    local_4c = 0;
    local_5c[0] = local_5c[0] & 0xffffff00;
    FUN_00409350("/cache/quad_textures/",0x15);
    local_8._0_1_ = 5;
    FUN_00988fa0(local_1ec);
    local_8._0_1_ = 6;
    uVar4 = FUN_00988f20(local_5c);
    local_8._0_1_ = 7;
    FUN_00448aa0(uVar4,0,0xffffffff);
    if (0xf < local_184) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_198);
    }
    local_184 = 0xf;
    local_188 = 0;
    local_198 = local_198 & 0xffffff00;
    if (0xf < local_1a0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_1b4);
    }
    local_8 = CONCAT31(local_8._1_3_,4);
    local_1a0 = 0xf;
    local_1a4 = 0;
    local_1b4 = local_1b4 & 0xffffff00;
    if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_5c[0]);
    }
    local_48 = 0xf;
    local_4c = 0;
    local_5c[0] = local_5c[0] & 0xffffff00;
  }
  local_3c = (float)(param_1 + 0x18fc);
  (**(code **)(*DAT_0125870c + 0x24))();
  FUN_007d8660();
  piVar7 = *(int **)(*(int *)(param_1 + 0x3c) + 100);
  iVar5 = (**(code **)(*piVar7 + 0x158))(piVar7,&DAT_00f09350,param_1 + 4);
  if (iVar5 < 0) {
    MessageBoxA((HWND)0x0,"CreateVertexDeclaration failed!! (ProvinceWaterVertexDecl)","ERROR",0);
    FatalExit(1);
  }
  piVar7 = *(int **)(*(int *)(param_1 + 0x3c) + 100);
  iVar5 = (**(code **)(*piVar7 + 0x158))(piVar7,&DAT_00f09320,param_1 + 0x18e8);
  if (iVar5 < 0) {
    MessageBoxA((HWND)0x0,"CreateVertexDeclaration failed!! (ProvinceVertexDecl)","ERROR",0);
    FatalExit(1);
  }
  piVar7 = *(int **)(*(int *)(param_1 + 0x3c) + 100);
  iVar5 = (**(code **)(*piVar7 + 0x158))(piVar7,&DAT_00f09338,param_1 + 0x18ec);
  if (iVar5 < 0) {
    MessageBoxA((HWND)0x0,"CreateVertexDeclaration failed!! (ProvinceVertexDecl)","ERROR",0);
    FatalExit(1);
  }
  piVar7 = *(int **)(*(int *)(param_1 + 0x3c) + 100);
  iVar5 = (**(code **)(*piVar7 + 0x158))(piVar7,&DAT_00f09308,param_1 + 0x18f0);
  if (iVar5 < 0) {
    MessageBoxA((HWND)0x0,"CreateVertexDeclaration failed!! (BorderVertexDecl)","ERROR",0);
    FatalExit(1);
  }
  piVar7 = *(int **)(*(int *)(param_1 + 0x3c) + 100);
  iVar5 = (**(code **)(*piVar7 + 0x158))(piVar7,&DAT_00f09378,param_1 + 0x18f4);
  if (iVar5 < 0) {
    MessageBoxA((HWND)0x0,"CreateVertexDeclaration failed!! (WaterBorderDecl)","ERROR",0);
    FatalExit(1);
  }
  piVar7 = *(int **)(*(int *)(param_1 + 0x3c) + 100);
  iVar5 = (**(code **)(*piVar7 + 0x158))(piVar7,&DAT_00f09398,param_1 + 0x18f8);
  if (iVar5 < 0) {
    MessageBoxA((HWND)0x0,"CreateVertexDeclaration failed!! (WaterFarDecl)","ERROR",0);
    FatalExit(1);
  }
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  FUN_00409350("provincemanager.cpp",0x13);
  local_8._0_1_ = 0xb;
  FUN_004015b0(local_38,0x699,3);
  local_8._0_1_ = 0xc;
  uVar4 = FUN_00987d20();
  FUN_00401280(uVar4);
  local_8._0_1_ = 0xb;
  FUN_00987ac0(local_e8);
  local_e8[0] = std::ios_base::vftable;
  FUN_00aad52d(local_e8);
  local_8._0_1_ = 4;
  if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_38[0]);
  }
  fVar9 = (float10)(**(code **)(**(int **)(param_1 + 0x18) + 0x14))();
  local_1c = (float)fVar9;
  FUN_007f4bf0(param_1);
  fVar9 = (float10)(**(code **)(**(int **)(param_1 + 0x18) + 0x14))();
  local_18 = (float)fVar9;
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  FUN_00409350("provincemanager.cpp",0x13);
  local_8._0_1_ = 0xd;
  FUN_004015b0(local_38,0x6a1,0x10006);
  local_1c = local_18 - local_1c;
  local_8._0_1_ = 0xe;
  uVar4 = FUN_00987d20(local_1c,extraout_ECX,&DAT_00e07938);
  uVar4 = FUN_0048b410(uVar4);
  uVar4 = FUN_00418e30(uVar4);
  FUN_00401280(uVar4);
  local_8._0_1_ = 0xd;
  FUN_00987ac0(local_e8);
  local_e8[0] = std::ios_base::vftable;
  FUN_00aad52d(local_e8);
  local_8._0_1_ = 4;
  if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_38[0]);
  }
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  FUN_00409350("provincemanager.cpp",0x13);
  local_8._0_1_ = 0xf;
  FUN_004015b0(local_38,0x6a2,0x10005);
  DVar12 = 0x28;
  pPVar11 = &local_84;
  local_8._0_1_ = 0x10;
  pvVar6 = GetCurrentProcess();
  GetProcessMemoryInfo(pvVar6,pPVar11,DVar12);
  local_1c = (float)(int)local_84.WorkingSetSize;
  if ((int)local_84.WorkingSetSize < 0) {
    local_1c = local_1c + 4.2949673e+09;
  }
  local_1c = local_1c * 0.0009765625;
  uVar4 = FUN_00987d20((int)local_1c,local_84.WorkingSetSize,&DAT_00e0785c);
  uVar4 = FUN_00455470(uVar4);
  uVar4 = FUN_00418e30(uVar4);
  FUN_00401280(uVar4);
  local_8._0_1_ = 0xf;
  FUN_00987ac0(local_e8);
  local_e8[0] = std::ios_base::vftable;
  FUN_00aad52d(local_e8);
  local_8._0_1_ = 4;
  if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_38[0]);
  }
  fVar9 = (float10)(**(code **)(**(int **)(param_1 + 0x18) + 0x14))();
  local_1c = (float)fVar9;
  fVar9 = (float10)(**(code **)(**(int **)(param_1 + 0x18) + 0x14))();
  local_18 = (float)fVar9;
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  FUN_00409350("provincemanager.cpp",0x13);
  local_8._0_1_ = 0x11;
  FUN_004015b0(local_38,0x6a9,0x10006);
  local_1c = local_18 - local_1c;
  local_8._0_1_ = 0x12;
  uVar4 = FUN_00987d20(local_1c,extraout_ECX_00,&DAT_00e07938);
  uVar4 = FUN_0048b410(uVar4);
  uVar4 = FUN_00418e30(uVar4);
  FUN_00401280(uVar4);
  local_8._0_1_ = 0x11;
  FUN_00987ac0(local_e8);
  local_e8[0] = std::ios_base::vftable;
  FUN_00aad52d(local_e8);
  local_8 = CONCAT31(local_8._1_3_,4);
  if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_38[0]);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  FUN_00804430();
  iVar5 = (*(int *)(param_1 + 0x1920) - *(int *)(param_1 + 0x191c)) / 0x24;
  local_1c = 0.0;
  if (0 < iVar5) {
    do {
      FUN_00804270();
      local_1c = (float)((int)local_1c + 1);
    } while ((int)local_1c < iVar5);
  }
  fVar9 = (float10)(**(code **)(**(int **)(param_1 + 0x18) + 0x14))();
  local_1c = (float)fVar9;
  local_3d = FUN_00809fa0();
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  FUN_00409350("provincemanager.cpp",0x13);
  local_8._0_1_ = 0x13;
  FUN_004015b0(local_38,0x6ba,0x10005);
  DVar12 = 0x28;
  pPVar11 = &local_84;
  local_8 = CONCAT31(local_8._1_3_,0x14);
  pvVar6 = GetCurrentProcess();
  GetProcessMemoryInfo(pvVar6,pPVar11,DVar12);
  local_18 = (float)(int)local_84.WorkingSetSize;
  if ((int)local_84.WorkingSetSize < 0) {
    local_18 = local_18 + 4.2949673e+09;
  }
  local_18 = local_18 * 0.0009765625;
  uVar4 = FUN_00987d20((int)local_18,extraout_ECX_01,&DAT_00e0785c);
  uVar4 = FUN_00455470(uVar4);
  piVar7 = (int *)FUN_00418e30(uVar4);
  FUN_00408be0(piVar7);
  local_18 = 0.0;
  if (((*(byte *)(*(int *)(*piVar7 + 4) + 0xc + (int)piVar7) & 6) == 0) &&
     (iVar5 = (**(code **)(**(int **)(*(int *)(*piVar7 + 4) + 0x38 + (int)piVar7) + 0x34))(),
     iVar5 == -1)) {
    local_18 = 5.60519e-45;
  }
  if (local_18 != 0.0) {
    uVar8 = *(uint *)((int)piVar7 + *(int *)(*piVar7 + 4) + 0xc) | (uint)local_18;
    if (*(int *)((int)piVar7 + *(int *)(*piVar7 + 4) + 0x38) == 0) {
      uVar8 = uVar8 | 4;
    }
    FUN_00401120(uVar8,0);
  }
  local_8._0_1_ = 0x13;
  FUN_00987ac0(local_e8);
  local_e8[0] = std::ios_base::vftable;
  FUN_00aad52d(local_e8);
  local_8._0_1_ = 4;
  if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_38[0]);
  }
  local_3e = FUN_007f5a00(param_1,local_a0);
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  FUN_00409350("provincemanager.cpp",0x13);
  local_8._0_1_ = 0x15;
  FUN_004015b0(local_38,0x6bd,0x10005);
  DVar12 = 0x28;
  pPVar11 = &local_84;
  local_8 = CONCAT31(local_8._1_3_,0x16);
  pvVar6 = GetCurrentProcess();
  GetProcessMemoryInfo(pvVar6,pPVar11,DVar12);
  local_18 = (float)(int)local_84.WorkingSetSize;
  if ((int)local_84.WorkingSetSize < 0) {
    local_18 = local_18 + 4.2949673e+09;
  }
  local_18 = local_18 * 0.0009765625;
  uVar4 = FUN_00987d20((int)local_18,extraout_ECX_02,&DAT_00e0785c);
  uVar4 = FUN_00455470(uVar4);
  piVar7 = (int *)FUN_00418e30(uVar4);
  FUN_00408be0(piVar7);
  local_18 = 0.0;
  if (((*(byte *)(*(int *)(*piVar7 + 4) + 0xc + (int)piVar7) & 6) == 0) &&
     (iVar5 = (**(code **)(**(int **)(*(int *)(*piVar7 + 4) + 0x38 + (int)piVar7) + 0x34))(),
     iVar5 == -1)) {
    local_18 = 5.60519e-45;
  }
  if (local_18 != 0.0) {
    uVar8 = *(uint *)((int)piVar7 + *(int *)(*piVar7 + 4) + 0xc) | (uint)local_18;
    if (*(int *)((int)piVar7 + *(int *)(*piVar7 + 4) + 0x38) == 0) {
      uVar8 = uVar8 | 4;
    }
    FUN_00401120(uVar8,0);
  }
  local_8._0_1_ = 0x15;
  FUN_00987ac0(local_e8);
  local_e8[0] = std::ios_base::vftable;
  FUN_00aad52d(local_e8);
  local_8._0_1_ = 4;
  if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_38[0]);
  }
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  FUN_00409350("provincemanager.cpp",0x13);
  local_8._0_1_ = 0x17;
  FUN_004015b0(local_38,0x6c2,3);
  local_8 = CONCAT31(local_8._1_3_,0x18);
  piVar7 = (int *)FUN_00987d20();
  FUN_00408be0(piVar7);
  local_18 = 0.0;
  if (((*(byte *)(*(int *)(*piVar7 + 4) + 0xc + (int)piVar7) & 6) == 0) &&
     (iVar5 = (**(code **)(**(int **)(*(int *)(*piVar7 + 4) + 0x38 + (int)piVar7) + 0x34))(),
     iVar5 == -1)) {
    local_18 = 5.60519e-45;
  }
  if (local_18 != 0.0) {
    uVar8 = *(uint *)((int)piVar7 + *(int *)(*piVar7 + 4) + 0xc) | (uint)local_18;
    if (*(int *)((int)piVar7 + *(int *)(*piVar7 + 4) + 0x38) == 0) {
      uVar8 = uVar8 | 4;
    }
    FUN_00401120(uVar8,0);
  }
  local_8._0_1_ = 0x17;
  FUN_00987ac0(local_e8);
  local_e8[0] = std::ios_base::vftable;
  FUN_00aad52d(local_e8);
  local_8._0_1_ = 4;
  if (local_24 < 0x10) {
    if (local_3d == '\0') {
      FUN_0080a7b0();
    }
    local_24 = 0xf;
    local_28 = 0;
    local_38[0] = local_38[0] & 0xffffff00;
    FUN_00409350("provincemanager.cpp",0x13);
    local_8._0_1_ = 0x19;
    FUN_004015b0(local_38,0x6c9,0x10005);
    DVar12 = 0x28;
    pPVar11 = &local_84;
    local_8 = CONCAT31(local_8._1_3_,0x1a);
    pvVar6 = GetCurrentProcess();
    GetProcessMemoryInfo(pvVar6,pPVar11,DVar12);
    local_18 = (float)(int)local_84.WorkingSetSize;
    if ((int)local_84.WorkingSetSize < 0) {
      local_18 = local_18 + 4.2949673e+09;
    }
    local_18 = local_18 * 0.0009765625;
    uVar4 = FUN_00987d20((int)local_18,local_84.WorkingSetSize,&DAT_00e0785c);
    uVar4 = FUN_00455470(uVar4);
    piVar7 = (int *)FUN_00418e30(uVar4);
    FUN_00408be0(piVar7);
    local_18 = 0.0;
    if (((*(byte *)(*(int *)(*piVar7 + 4) + 0xc + (int)piVar7) & 6) == 0) &&
       (iVar5 = (**(code **)(**(int **)(*(int *)(*piVar7 + 4) + 0x38 + (int)piVar7) + 0x34))(),
       iVar5 == -1)) {
      local_18 = 5.60519e-45;
    }
    if (local_18 != 0.0) {
      uVar8 = *(uint *)((int)piVar7 + *(int *)(*piVar7 + 4) + 0xc) | (uint)local_18;
      if (*(int *)((int)piVar7 + *(int *)(*piVar7 + 4) + 0x38) == 0) {
        uVar8 = uVar8 | 4;
      }
      FUN_00401120(uVar8,0);
    }
    local_8._0_1_ = 0x19;
    FUN_00987ac0(local_e8);
    local_e8[0] = std::ios_base::vftable;
    FUN_00aad52d(local_e8);
    local_8._0_1_ = 4;
    if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_38[0]);
    }
    fVar9 = (float10)(**(code **)(**(int **)(param_1 + 0x18) + 0x14))();
    local_18 = (float)fVar9;
    local_24 = 0xf;
    local_28 = 0;
    local_38[0] = local_38[0] & 0xffffff00;
    FUN_00409350("provincemanager.cpp",0x13);
    local_8._0_1_ = 0x1b;
    FUN_004015b0(local_38,0x6cc,0x10006);
    local_1c = local_18 - local_1c;
    local_8 = CONCAT31(local_8._1_3_,0x1c);
    uVar4 = FUN_00987d20(local_1c,extraout_ECX_03,&DAT_00e07938);
    uVar4 = FUN_0048b410(uVar4);
    piVar7 = (int *)FUN_00418e30(uVar4);
    FUN_00408be0(piVar7);
    local_1c = 0.0;
    if (((*(byte *)(*(int *)(*piVar7 + 4) + 0xc + (int)piVar7) & 6) == 0) &&
       (iVar5 = (**(code **)(**(int **)(*(int *)(*piVar7 + 4) + 0x38 + (int)piVar7) + 0x34))(),
       iVar5 == -1)) {
      local_1c = 5.60519e-45;
    }
    if (local_1c != 0.0) {
      uVar8 = *(uint *)((int)piVar7 + *(int *)(*piVar7 + 4) + 0xc) | (uint)local_1c;
      if (*(int *)((int)piVar7 + *(int *)(*piVar7 + 4) + 0x38) == 0) {
        uVar8 = uVar8 | 4;
      }
      FUN_00401120(uVar8,0);
    }
    local_8._0_1_ = 0x1b;
    FUN_00987ac0(local_e8);
    local_e8[0] = std::ios_base::vftable;
    FUN_00aad52d(local_e8);
    local_8 = CONCAT31(local_8._1_3_,4);
    if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_38[0]);
    }
    if (((*(char *)(*(int *)(param_1 + 0x40) + 0x28) != '\0') || (local_3e != '\0')) ||
       (cVar3 = FUN_0080ae10(param_1), cVar3 == '\0')) {
      FUN_0080ab40(param_1);
    }
    local_24 = 0xf;
    local_28 = 0;
    local_38[0] = local_38[0] & 0xffffff00;
    FUN_00409350("provincemanager.cpp",0x13);
    local_8._0_1_ = 0x1d;
    FUN_004015b0(local_38,0x6df,0x10005);
    DVar12 = 0x28;
    pPVar11 = &local_84;
    local_8 = CONCAT31(local_8._1_3_,0x1e);
    pvVar6 = GetCurrentProcess();
    GetProcessMemoryInfo(pvVar6,pPVar11,DVar12);
    local_1c = (float)(int)local_84.WorkingSetSize;
    if ((int)local_84.WorkingSetSize < 0) {
      local_1c = local_1c + 4.2949673e+09;
    }
    local_1c = local_1c * 0.0009765625;
    uVar4 = FUN_00987d20((int)local_1c,extraout_ECX_04,&DAT_00e0785c);
    uVar4 = FUN_00455470(uVar4);
    piVar7 = (int *)FUN_00418e30(uVar4);
    FUN_00408be0(piVar7);
    local_1c = 0.0;
    if (((*(byte *)(*(int *)(*piVar7 + 4) + 0xc + (int)piVar7) & 6) == 0) &&
       (iVar5 = (**(code **)(**(int **)(*(int *)(*piVar7 + 4) + 0x38 + (int)piVar7) + 0x34))(),
       iVar5 == -1)) {
      local_1c = 5.60519e-45;
    }
    if (local_1c != 0.0) {
      FUN_00401120();
    }
    local_8._0_1_ = 0x1d;
    FUN_00987ac0(local_e8);
    local_e8[0] = std::ios_base::vftable;
    FUN_00aad52d(local_e8);
    local_8._0_1_ = 4;
    if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_38[0]);
    }
    local_24 = 0xf;
    local_28 = 0;
    local_38[0] = local_38[0] & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 0x1f;
    FUN_004015b0(local_38,0x6e2,3);
    local_8 = CONCAT31(local_8._1_3_,0x20);
    piVar7 = (int *)FUN_00987d20();
    FUN_00408be0(piVar7);
    local_1c = 0.0;
    if (((*(byte *)(*(int *)(*piVar7 + 4) + 0xc + (int)piVar7) & 6) == 0) &&
       (iVar5 = (**(code **)(**(int **)(*(int *)(*piVar7 + 4) + 0x38 + (int)piVar7) + 0x34))(),
       iVar5 == -1)) {
      local_1c = 5.60519e-45;
    }
    if (local_1c != 0.0) {
      uVar8 = *(uint *)((int)piVar7 + *(int *)(*piVar7 + 4) + 0xc) | (uint)local_1c;
      if (*(int *)((int)piVar7 + *(int *)(*piVar7 + 4) + 0x38) == 0) {
        uVar8 = uVar8 | 4;
      }
      FUN_00401120(uVar8,0);
    }
    local_8._0_1_ = 0x1f;
    FUN_00987ac0();
    local_e8[0] = std::ios_base::vftable;
    FUN_00aad52d();
    local_8._0_1_ = 4;
    if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (*(char *)(*(int *)(param_1 + 0x1580) + 0x88) == '\0') {
      FUN_007d7280();
      local_24 = 0xf;
      local_28 = 0;
      local_38[0] = local_38[0] & 0xffffff00;
      FUN_00409350("provincemanager.cpp",0x13);
      local_8._0_1_ = 0x21;
      FUN_004015b0();
      pPVar11 = &local_84;
      DVar12 = 0x28;
      local_8._0_1_ = 0x22;
      pvVar6 = GetCurrentProcess();
      GetProcessMemoryInfo(pvVar6,pPVar11,DVar12);
      local_3c = (float)(int)local_84.WorkingSetSize;
      if ((int)local_84.WorkingSetSize < 0) {
        local_3c = local_3c + 4.2949673e+09;
      }
      local_3c = local_3c * 0.0009765625;
      uVar10 = CONCAT44(&DAT_00e0785c,extraout_ECX_05);
      iVar5 = (int)local_3c;
      uVar4 = FUN_00987d20();
      uVar4 = FUN_00455470(uVar4,iVar5,uVar10);
      FUN_00418e30(uVar4);
      FUN_00401280();
      local_8._0_1_ = 0x21;
      FUN_00987ac0();
      local_e8[0] = std::ios_base::vftable;
      FUN_00aad52d();
      local_8._0_1_ = 4;
      if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
    local_8._0_1_ = 4;
    if (*(int *)(param_1 + 0x1588) != 0) {
      local_24 = 0xf;
      local_28 = 0;
      local_38[0] = local_38[0] & 0xffffff00;
      FUN_00409350("CREATE_WAVES",0xc);
      local_8._0_1_ = 0x23;
      FUN_009a8ee0(local_54,local_38);
      local_8._0_1_ = 0x24;
      iVar5 = FUN_00475500();
      FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c),*(undefined8 *)(iVar5 + 0x74));
      local_8._0_1_ = 0x25;
      FUN_007e1210();
      if (0xf < local_84.PagefileUsage) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_84.PagefileUsage = 0xf;
      local_84.QuotaNonPagedPoolUsage = 0;
      local_84.WorkingSetSize = local_84.WorkingSetSize & 0xffffff00;
      local_8._0_1_ = 0x26;
      FUN_009adb70();
      if (local_50 != 0) {
        FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8._0_1_ = 4;
      local_50 = 0;
      local_4c = 0;
      local_48 = 0;
      if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      fVar9 = (float10)(**(code **)(**(int **)(param_1 + 0x18) + 0x14))();
      local_1c = (float)fVar9;
      pPVar11 = &local_248;
      DVar12 = 0x28;
      pvVar6 = GetCurrentProcess();
      GetProcessMemoryInfo(pvVar6,pPVar11,DVar12);
      local_24 = 0xf;
      local_28 = 0;
      local_38[0] = local_38[0] & 0xffffff00;
      FUN_00409350("provincemanager.cpp",0x13);
      local_8._0_1_ = 0x27;
      local_18 = (float)FUN_0099d3d0(*(undefined4 *)(param_1 + 0x3c),&local_84.WorkingSetSize);
      local_8._0_1_ = 0x28;
      FUN_004015b0();
      local_8._0_1_ = 0x29;
      uVar4 = FUN_00987d20();
      FUN_00418e30(uVar4);
      FUN_00401280();
      local_8._0_1_ = 0x28;
      FUN_00987ac0();
      local_e8[0] = std::ios_base::vftable;
      FUN_00aad52d();
      if (0xf < local_84.PagefileUsage) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8._0_1_ = 4;
      local_84.PagefileUsage = 0xf;
      local_84.QuotaNonPagedPoolUsage = 0;
      local_84.WorkingSetSize = local_84.WorkingSetSize & 0xffffff00;
      if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      FUN_007d3350();
      pPVar11 = &local_220;
      DVar12 = 0x28;
      pvVar6 = GetCurrentProcess();
      GetProcessMemoryInfo(pvVar6,pPVar11,DVar12);
      local_1f8 = local_220.WorkingSetSize - local_248.WorkingSetSize;
      local_24 = 0xf;
      local_28 = 0;
      local_38[0] = local_38[0] & 0xffffff00;
      FUN_00409350("provincemanager.cpp",0x13);
      local_8._0_1_ = 0x2a;
      FUN_004015b0();
      local_8._0_1_ = 0x2b;
      uVar10 = CONCAT44(&DAT_00e0785c,extraout_ECX_06);
      iVar5 = (int)((double)local_1f8 * 0.0009765625);
      uVar4 = FUN_00987d20();
      uVar4 = FUN_00455470(uVar4,iVar5,uVar10);
      uVar4 = FUN_00418e30(uVar4);
      FUN_00401280(uVar4);
      local_8._0_1_ = 0x2a;
      FUN_00987ac0();
      local_e8[0] = std::ios_base::vftable;
      FUN_00aad52d();
      local_8._0_1_ = 4;
      if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_24 = 0xf;
      local_28 = 0;
      local_38[0] = local_38[0] & 0xffffff00;
      FUN_00409350("provincemanager.cpp",0x13);
      local_8._0_1_ = 0x2c;
      FUN_004015b0(local_38,0x6f9);
      pPVar11 = &local_84;
      DVar12 = 0x28;
      local_8._0_1_ = 0x2d;
      pvVar6 = GetCurrentProcess();
      GetProcessMemoryInfo(pvVar6,pPVar11,DVar12);
      local_3c = (float)(int)local_84.WorkingSetSize;
      if ((int)local_84.WorkingSetSize < 0) {
        local_3c = local_3c + 4.2949673e+09;
      }
      local_3c = local_3c * 0.0009765625;
      uVar4 = FUN_00987d20((int)local_3c,local_84.WorkingSetSize);
      uVar4 = FUN_00455470(uVar4);
      uVar4 = FUN_00418e30(uVar4);
      FUN_00401280(uVar4);
      local_8._0_1_ = 0x2c;
      FUN_00987ac0(local_e8);
      local_e8[0] = std::ios_base::vftable;
      FUN_00aad52d(local_e8);
      local_8._0_1_ = 4;
      if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_38[0]);
      }
      fVar9 = (float10)(**(code **)(**(int **)(param_1 + 0x18) + 0x14))();
      local_18 = (float)fVar9;
      local_24 = 0xf;
      local_28 = 0;
      local_38[0] = local_38[0] & 0xffffff00;
      FUN_00409350("provincemanager.cpp",0x13);
      local_8._0_1_ = 0x2e;
      FUN_004015b0(local_38,0x6fc,0x10006);
      local_3c = local_18 - local_1c;
      local_8._0_1_ = 0x2f;
      uVar4 = FUN_00987d20(local_3c,extraout_ECX_07,&DAT_00e07938);
      uVar4 = FUN_0048b410(uVar4);
      FUN_00418e30(uVar4);
      FUN_00401280();
      local_8._0_1_ = 0x2e;
      FUN_00987ac0();
      local_e8[0] = std::ios_base::vftable;
      FUN_00aad52d();
      local_8._0_1_ = 4;
      if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
    local_8._0_1_ = 4;
    pvVar1 = *(void **)(param_1 + 0x15ac);
    if (pvVar1 != (void *)0x0) {
      _eh_vector_destructor_iterator_(pvVar1,0x10,*(int *)((int)pvVar1 + -4),FUN_00aa8540);
      FUN_00aaea59();
      FUN_00aaea59();
    }
    local_24 = 0xf;
    local_28 = 0;
    local_38[0] = local_38[0] & 0xffffff00;
    FUN_00409350("provincemanager.cpp",0x13);
    local_8._0_1_ = 0x30;
    FUN_004015b0();
    local_8._0_1_ = 0x31;
    FUN_00987d20();
    FUN_00401280();
    local_8 = CONCAT31(local_8._1_3_,0x30);
    FUN_00987ac0();
    FUN_00aad52d();
    if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_8c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8c = 0xf;
    local_90 = 0;
    local_a0[0] = local_a0[0] & 0xffffff00;
    if (0xf < local_168) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_168 = 0xf;
    local_16c = 0;
    local_17c[0] = local_17c[0] & 0xffffff00;
    if (0xf < local_1d8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    ExceptionList = local_10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_38[0]);
}

