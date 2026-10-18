// FUN_009d8140 @ 009d8140 body=[[009d8140, 009d8302] [009d8306, 009d844a] [009d844e, 009d8528] [009d852c, 009d868c] [009d8690, 009d8732] [009d8736, 009d87f3] [009d87f7, 009d8a5b] [009d8a5f, 009d8c75] [009d8c79, 009d8d37] [009d8d3b, 009d8e08] [009d8e0c, 009d8e27] [009d8e2b, 009d8e3d]]


void FUN_009d8140(int *param_1,char *param_2)

{
  char cVar1;
  undefined1 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  BOOL BVar7;
  uint uVar8;
  CHAR *pCVar9;
  DWORD DVar10;
  undefined4 *puVar11;
  uint in_stack_0000001c;
  DWORD DVar12;
  DWORD DVar13;
  va_list *ppcVar14;
  CHAR local_454 [184];
  undefined **local_39c;
  CHAR local_354 [184];
  undefined **local_29c;
  _OSVERSIONINFOA local_254;
  undefined4 local_1bc;
  undefined **local_140 [18];
  _MEMORYSTATUSEX local_f8;
  undefined1 *local_b8;
  undefined4 *local_b4;
  uint local_b0;
  undefined4 local_a0;
  uint local_9c;
  uint local_94;
  undefined4 local_84;
  uint local_80;
  _union_530 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int local_54;
  undefined4 *local_50;
  uint local_4c;
  uint local_48;
  undefined4 local_38;
  uint local_34;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00b5daca;
  local_10 = ExceptionList;
  local_4c = 0;
  local_8 = 0;
  ExceptionList = &local_10;
  FUN_00408ed0();
  *(undefined1 *)(param_1 + 0x28) = 1;
  if (in_stack_0000001c < 0x10) {
    pcVar3 = (char *)&param_2;
LAB_009d819e:
    if ((*pcVar3 != '\0') && (iVar4 = PHYSFS_exists(), iVar4 != 0)) {
      local_50 = (undefined4 *)FUN_00aae9af();
      local_8._0_1_ = 1;
      if (local_50 == (undefined4 *)0x0) {
        puVar11 = (undefined4 *)0x0;
      }
      else {
        local_18 = 0xf;
        local_1c = 0;
        local_2c[0] = local_2c[0] & 0xffffff00;
        FUN_00409350();
        local_8 = CONCAT31(local_8._1_3_,2);
        local_4c = 1;
        puVar5 = (undefined4 *)FUN_00aae9af();
        local_8 = 3;
        local_b4 = puVar5;
        if (puVar5 == (undefined4 *)0x0) {
          puVar5 = (undefined4 *)0x0;
        }
        else {
          local_54 = FUN_00aae9af();
          local_8._0_1_ = 4;
          if (local_54 == 0) {
            uVar6 = 0;
          }
          else {
            local_b8 = &stack0xfffffac4;
            FUN_009885d0();
            uVar6 = FUN_00992740(local_54,&param_2,0);
          }
          local_8 = CONCAT31(local_8._1_3_,3);
          *puVar5 = &PTR_FUN_00e37c30;
          puVar5[1] = uVar6;
          *(undefined2 *)(puVar5 + 0x44) = 0x100;
          FUN_00990100();
          *puVar5 = &PTR_FUN_00e37c3c;
        }
        puVar11 = local_50;
        *local_50 = &PTR_FUN_00e38524;
        local_50[1] = 0;
        local_50[2] = 0;
        local_50[3] = 0;
        *(undefined1 *)(local_50 + 4) = 0;
        local_8 = 5;
        *(undefined1 *)(local_50 + 5) = 0;
        local_50[7] = puVar5;
        local_50[0xd0] = 0xf;
        local_50[0xcf] = 0;
        *(undefined1 *)(local_50 + 0xcb) = 0;
        FUN_00408ed0();
        puVar11[0xd2] = 0;
        puVar11[0xd3] = 0;
        puVar11[0xd4] = 0;
        *(undefined1 *)(puVar11 + 0xd6) = 1;
        puVar11[0xd7] = 0;
      }
      local_8 = 0;
      if ((local_4c & 1) != 0) {
        if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_18 = 0xf;
        local_1c = 0;
        local_2c[0] = local_2c[0] & 0xffffff00;
      }
      (**(code **)(*param_1 + 0xc))();
      if (puVar11[3] != 0) {
        (**(code **)(*param_1 + 0x18))();
      }
      (**(code **)*puVar11)();
    }
  }
  else {
    pcVar3 = param_2;
    if (param_2 != (char *)0x0) goto LAB_009d819e;
  }
  _memset(&local_f8,-1,0x40);
  local_f8.dwLength = 0x40;
  BVar7 = GlobalMemoryStatusEx(&local_f8);
  if (BVar7 == 1) {
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 7;
    FUN_004015b0();
    local_8._0_1_ = 8;
    FUN_00987d20();
    uVar6 = FUN_009d8ea0();
    FUN_00418e30(uVar6);
    uVar6 = FUN_009d8ea0();
    uVar6 = FUN_00418e30(uVar6);
    FUN_00401280(uVar6);
    local_8._0_1_ = 7;
    FUN_00987ac0();
    local_140[0] = std::ios_base::vftable;
    FUN_00aad52d();
    local_8._0_1_ = 0;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350("systemsettings.cpp");
    local_8._0_1_ = 9;
    FUN_004015b0(local_2c,0xb9);
    local_8._0_1_ = 10;
    uVar6 = FUN_00987d20(local_f8.ullAvailPageFile._0_4_ >> 0x14 |
                         local_f8.ullAvailPageFile._4_4_ << 0xc,
                         local_f8.ullAvailPageFile._4_4_ >> 0x14,&DAT_00dedc68,
                         local_f8.ullTotalPageFile._0_4_ >> 0x14 |
                         local_f8.ullTotalPageFile._4_4_ << 0xc,
                         local_f8.ullTotalPageFile._4_4_ >> 0x14);
    uVar6 = FUN_009d8ea0(uVar6);
    uVar6 = FUN_00418e30(uVar6);
    uVar6 = FUN_009d8ea0(uVar6);
    uVar6 = FUN_00418e30(uVar6);
    FUN_00401280(uVar6);
    local_8._0_1_ = 9;
    FUN_00987ac0(local_140);
    local_140[0] = std::ios_base::vftable;
    FUN_00aad52d(local_140);
    local_8._0_1_ = 0;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350("systemsettings.cpp",0x12);
    local_8._0_1_ = 0xb;
    FUN_004015b0(local_2c,0xba,3);
    local_8._0_1_ = 0xc;
    uVar6 = FUN_00987d20(local_f8.ullAvailVirtual._0_4_ >> 0x14 |
                         local_f8.ullAvailVirtual._4_4_ << 0xc,
                         local_f8.ullAvailVirtual._4_4_ >> 0x14,&DAT_00dedc68,
                         local_f8.ullTotalVirtual._0_4_ >> 0x14 |
                         local_f8.ullTotalVirtual._4_4_ << 0xc,
                         local_f8.ullTotalVirtual._4_4_ >> 0x14,&DAT_00e3b584);
    uVar6 = FUN_009d8ea0(uVar6);
    uVar6 = FUN_00418e30(uVar6);
    FUN_009d8ea0(uVar6);
    FUN_00418e30();
    FUN_00401280();
    local_8._0_1_ = 0xb;
  }
  else {
    ppcVar14 = (va_list *)0x0;
    DVar13 = 0xff;
    pCVar9 = local_354;
    DVar12 = 0;
    DVar10 = GetLastError();
    FormatMessageA(0x1000,(LPCVOID)0x0,DVar10,DVar12,pCVar9,DVar13,ppcVar14);
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 0xd;
    FUN_004015b0();
    local_8._0_1_ = 0xe;
    FUN_00987d20();
    FUN_00418e30();
    FUN_00401280();
    local_8._0_1_ = 0xd;
  }
  FUN_00987ac0();
  local_140[0] = std::ios_base::vftable;
  FUN_00aad52d();
  local_8._0_1_ = 0;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 0xf;
  FUN_004015b0();
  local_8._0_1_ = 0x10;
  FUN_009d80a0();
  FUN_00987d20();
  FUN_00447240();
  FUN_00418e30();
  FUN_00401280();
  local_8._0_1_ = 0xf;
  FUN_00987ac0();
  local_140[0] = std::ios_base::vftable;
  FUN_00aad52d();
  local_8._0_1_ = 0;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_78.dwOemId = 0xffffffff;
  local_74 = 0xffffffff;
  local_70 = 0xffffffff;
  local_6c = 0xffffffff;
  local_68 = 0xffffffff;
  local_64 = 0xffffffff;
  local_60 = 0xffffffff;
  local_5c = 0xffffffff;
  local_58 = 0xffffffff;
  GetNativeSystemInfo((LPSYSTEM_INFO)&local_78.s);
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 0x11;
  FUN_004015b0();
  local_8._0_1_ = 0x12;
  FUN_00987d20();
  FUN_00447240();
  FUN_00401280();
  local_8._0_1_ = 0x11;
  FUN_00987ac0();
  local_140[0] = std::ios_base::vftable;
  FUN_00aad52d();
  local_8._0_1_ = 0;
  uVar2 = (undefined1)local_8;
  local_8._0_1_ = 0;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  uVar8 = local_78.dwOemId & 0xffff;
  if (uVar8 == 0) {
    local_34 = 0xf;
    local_38 = 0;
    local_48 = local_48 & 0xffffff00;
    local_8._0_1_ = uVar2;
    FUN_00409350();
    local_8._0_1_ = 0x17;
    FUN_004015b0();
    local_8._0_1_ = 0x18;
    FUN_00987d20();
    FUN_00401280();
    local_8._0_1_ = 0x17;
    FUN_00987ac0();
    local_29c = std::ios_base::vftable;
    FUN_00aad52d();
    uVar8 = local_34;
  }
  else if (uVar8 == 6) {
    local_80 = 0xf;
    local_84 = 0;
    local_94 = local_94 & 0xffffff00;
    local_8._0_1_ = uVar2;
    FUN_00409350();
    local_8._0_1_ = 0x15;
    FUN_004015b0();
    local_8._0_1_ = 0x16;
    FUN_00987d20();
    FUN_00401280();
    local_8._0_1_ = 0x15;
    FUN_00987ac0();
    local_39c = std::ios_base::vftable;
    FUN_00aad52d();
    uVar8 = local_80;
  }
  else if (uVar8 == 9) {
    local_9c = 0xf;
    local_a0 = 0;
    local_b0 = local_b0 & 0xffffff00;
    local_8._0_1_ = uVar2;
    FUN_00409350();
    local_8._0_1_ = 0x13;
    FUN_004015b0();
    local_8._0_1_ = 0x14;
    FUN_00987d20();
    FUN_00401280();
    local_8._0_1_ = 0x13;
    FUN_00987ac0();
    FUN_00aad52d();
    uVar8 = local_9c;
  }
  else {
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 0x19;
    FUN_004015b0();
    local_8._0_1_ = 0x1a;
    FUN_00987d20();
    FUN_00401280();
    local_8._0_1_ = 0x19;
    FUN_00987ac0();
    local_140[0] = std::ios_base::vftable;
    FUN_00aad52d();
    uVar8 = local_18;
  }
  if (0xf < uVar8) {
    local_8._0_1_ = 0;
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 0;
  _memset(&local_254,-1,0x9c);
  local_254.dwOSVersionInfoSize = 0x9c;
  BVar7 = GetVersionExA(&local_254);
  if (BVar7 == 0) {
    ppcVar14 = (va_list *)0x0;
    DVar13 = 0xff;
    pCVar9 = local_454;
    DVar12 = 0;
    DVar10 = GetLastError();
    FormatMessageA(0x1000,(LPCVOID)0x0,DVar10,DVar12,pCVar9,DVar13,ppcVar14);
    local_34 = 0xf;
    local_38 = 0;
    local_48 = local_48 & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 0x1f;
    FUN_004015b0();
    local_8._0_1_ = 0x20;
    FUN_00987d20();
    FUN_00418e30();
    FUN_00401280();
    local_8._0_1_ = 0x1f;
    FUN_00987ac0();
    local_29c = std::ios_base::vftable;
    FUN_00aad52d();
    uVar8 = local_34;
    goto joined_r0x009d8dfe;
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 0x1b;
  if ((local_254.dwPlatformId == 1) || (local_254.dwPlatformId != 2)) {
LAB_009d8c1e:
    FUN_00409350();
  }
  else if (local_254.dwMajorVersion == 5) {
    if ((local_254.dwMinorVersion != 0) && (local_254.dwMinorVersion != 1)) {
      if (local_254.dwMinorVersion != 2) goto LAB_009d8c26;
      if (((local_1bc._2_1_ != '\x01') || (local_78.s.wProcessorArchitecture != 9)) &&
         ((local_1bc & 0x8000) == 0)) {
        GetSystemMetrics(0x59);
      }
    }
    FUN_004012f0();
LAB_009d8c05:
    if (local_254.dwMajorVersion < 5) goto LAB_009d8c1e;
  }
  else {
    if (local_254.dwMajorVersion != 6) goto LAB_009d8c05;
    if (local_254.dwMinorVersion == 0) {
      if (local_1bc._2_1_ == '\x01') {
        FUN_004012f0();
      }
      else {
        FUN_004012f0();
      }
    }
    else if (local_254.dwMinorVersion == 1) {
      if (local_1bc._2_1_ == '\x01') {
        FUN_004012f0();
      }
      else {
        FUN_004012f0();
      }
    }
    else if (local_254.dwMinorVersion == 2) {
      if (local_1bc._2_1_ == '\x01') {
        FUN_004012f0();
      }
      else {
        FUN_004012f0();
      }
    }
  }
LAB_009d8c26:
  pCVar9 = local_254.szCSDVersion;
  local_34 = 0xf;
  local_38 = 0;
  local_48 = local_48 & 0xffffff00;
  do {
    cVar1 = *pCVar9;
    pCVar9 = pCVar9 + 1;
  } while (cVar1 != '\0');
  FUN_00409350();
  local_8._0_1_ = 0x1c;
  FUN_00448aa0();
  local_8._0_1_ = 0x1b;
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_34 = 0xf;
  local_38 = 0;
  local_48 = local_48 & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 0x1d;
  FUN_004015b0();
  local_8._0_1_ = 0x1e;
  FUN_00987d20();
  FUN_00418e30();
  FUN_00418e30();
  FUN_00455470();
  FUN_00401280();
  local_8._0_1_ = 0x1d;
  FUN_00987ac0();
  local_29c = std::ios_base::vftable;
  FUN_00aad52d();
  uVar8 = local_18;
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
joined_r0x009d8dfe:
  local_8 = (uint)local_8._1_3_ << 8;
  if (0xf < uVar8) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  (**(code **)(param_1[2] + 0x18))();
  if (0xf < in_stack_0000001c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return;
}

