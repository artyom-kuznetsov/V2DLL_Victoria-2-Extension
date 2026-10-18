// FUN_00634240 @ 00634240 body=[[00634240, 0063433a] [0063433e, 006343a4] [006343a8, 00634430] [00634434, 00634452] [00634456, 006344ae] [006344b2, 006344d1] [006344d5, 0063453d] [00634541, 0063455f] [00634563, 006345bb] [006345bf, 006345de] [006345e2, 0063466f] [00634673, 00634736] [0063473a, 0063480c] [00634810, 006348c4] [006348c8, 00634904] [00634908, 00634944] [00634948, 00634984] [00634988, 006349c4] [006349c8, 00634a04] [00634a08, 00634a44] [00634a48, 00634a84] [00634a88, 00634ac4] [00634ac8, 00634b04] [00634b08, 00634b44] [00634b48, 00634b84] [00634b88, 00634bc4] [00634bc8, 00634c51] [00634c55, 00634cdb] [00634cdf, 00634cfc] [00634d00, 00634d4d] [00634d51, 00634dc4] [00634dc8, 00634ee5] [00634ee9, 00634f76] [00634f7a, 00635016] [0063501a, 00635161]]


void FUN_00634240(void)

{
  undefined1 uVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  HICON pHVar5;
  HANDLE Process;
  undefined4 *puVar6;
  int in_ECX;
  float10 fVar7;
  PROCESS_MEMORY_COUNTERS *ppsmemCounters;
  DWORD cb;
  undefined1 local_280 [84];
  undefined1 local_22c [56];
  undefined4 local_1f4;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined **local_16c [18];
  uint local_124 [4];
  undefined4 local_114;
  uint local_110;
  int local_cc;
  int local_c8;
  undefined4 local_c4;
  double local_ac;
  PROCESS_MEMORY_COUNTERS local_a4;
  float local_64;
  uint local_60 [4];
  undefined4 local_50;
  uint local_4c;
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  char local_31;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  undefined1 *local_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00bb9041;
  pvStack_10 = ExceptionList;
  local_14 = &stack0xfffffce0;
  local_3c = 0;
  ExceptionList = &pvStack_10;
  local_44 = in_ECX;
  FUN_004367c0();
  local_8 = 0;
  FUN_00436780();
  local_8._0_1_ = 1;
  local_40 = *(undefined4 *)(DAT_012586e0 + 0x54);
  FUN_004367c0();
  local_8._0_1_ = 2;
  FUN_00436780();
  local_8._0_1_ = 3;
  local_64 = *(float *)(DAT_012586e0 + 0x44);
  if (local_64 == 1.4013e-45) {
    FUN_00408ed0(local_22c,0,0xffffffff);
  }
  local_4c = 0xf;
  local_50 = 0;
  local_60[0] = local_60[0] & 0xffffff00;
  FUN_00409350("/graphicalculturetype.txt",0x19);
  local_8._0_1_ = 4;
  FUN_00988f20(local_60);
  local_8._0_1_ = 6;
  if (0xf < local_4c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_60[0]);
  }
  local_4c = 0xf;
  local_50 = 0;
  local_60[0] = local_60[0] & 0xffffff00;
  local_110 = 0xf;
  local_114 = 0;
  local_124[0] = local_124[0] & 0xffffff00;
  FUN_00409350("/bookmarks.txt",0xe);
  local_8._0_1_ = 7;
  FUN_00988f20(local_124);
  local_8._0_1_ = 9;
  if (0xf < local_110) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_124[0]);
  }
  local_110 = 0xf;
  local_114 = 0;
  local_124[0] = local_124[0] & 0xffffff00;
  if (local_64 != 2.8026e-45) goto LAB_006345e2;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("/graphicalculturetype.txt",0x19);
  local_8 = CONCAT31(local_8._1_3_,10);
  pcVar2 = (char *)FUN_00988f20(local_30);
  if (0xf < *(uint *)(pcVar2 + 0x14)) {
    pcVar2 = *(char **)pcVar2;
  }
  if ((pcVar2 == (char *)0x0) || (*pcVar2 == '\0')) {
LAB_0063441b:
    local_31 = '\0';
  }
  else {
    iVar3 = PHYSFS_exists(pcVar2);
    local_31 = '\x01';
    if (iVar3 == 0) goto LAB_0063441b;
  }
  if (0xf < local_4c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_60[0]);
  }
  local_8._0_1_ = 9;
  local_4c = 0xf;
  local_50 = 0;
  local_60[0] = local_60[0] & 0xffffff00;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  if (local_31 != '\0') {
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    FUN_00409350("/graphicalculturetype.txt",0x19);
    local_8._0_1_ = 0xb;
    uVar4 = FUN_00988f20(local_30);
    local_8._0_1_ = 0xc;
    FUN_00408ed0(uVar4,0,0xffffffff);
    if (0xf < local_4c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_60[0]);
    }
    local_8._0_1_ = 9;
    local_4c = 0xf;
    local_50 = 0;
    local_60[0] = local_60[0] & 0xffffff00;
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_30[0]);
    }
  }
  local_8._0_1_ = 9;
  local_4c = 0xf;
  local_50 = 0;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("/bookmarks.txt",0xe);
  local_8 = CONCAT31(local_8._1_3_,0xd);
  pcVar2 = (char *)FUN_00988f20(local_30);
  if (0xf < *(uint *)(pcVar2 + 0x14)) {
    pcVar2 = *(char **)pcVar2;
  }
  if ((pcVar2 == (char *)0x0) || (*pcVar2 == '\0')) {
LAB_00634528:
    local_31 = '\0';
  }
  else {
    iVar3 = PHYSFS_exists(pcVar2);
    local_31 = '\x01';
    if (iVar3 == 0) goto LAB_00634528;
  }
  if (0xf < local_4c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_60[0]);
  }
  local_8._0_1_ = 9;
  local_4c = 0xf;
  local_50 = 0;
  local_60[0] = local_60[0] & 0xffffff00;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  if (local_31 != '\0') {
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    FUN_00409350("/bookmarks.txt",0xe);
    local_8._0_1_ = 0xe;
    uVar4 = FUN_00988f20(local_30);
    local_8._0_1_ = 0xf;
    FUN_00408ed0(uVar4,0,0xffffffff);
    if (0xf < local_4c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_60[0]);
    }
    local_8._0_1_ = 9;
    local_4c = 0xf;
    local_50 = 0;
    local_60[0] = local_60[0] & 0xffffff00;
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_30[0]);
    }
  }
LAB_006345e2:
  local_8._0_1_ = 9;
  local_4c = 0xf;
  local_50 = 0;
  local_60[0] = local_60[0] & 0xffffff00;
  FUN_00409350("eu3application.cpp",0x12);
  local_8._0_1_ = 0x10;
  FUN_004015b0(local_60,0xe2,3);
  local_8._0_1_ = 0x11;
  uVar4 = FUN_00987d20();
  FUN_00401280(uVar4);
  local_8._0_1_ = 0x10;
  FUN_00987ac0(local_16c);
  local_16c[0] = std::ios_base::vftable;
  FUN_00aad52d(local_16c);
  local_8._0_1_ = 9;
  if (0xf < local_4c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_60[0]);
  }
  local_4c = 0xf;
  local_50 = 0;
  local_60[0] = local_60[0] & 0xffffff00;
  FUN_0042e410(DAT_012586dc);
  (**(code **)(**(int **)(in_ECX + 0x128) + 4))();
  fVar7 = (float10)(**(code **)(**(int **)(in_ECX + 0x128) + 0x14))();
  local_ac = (double)fVar7;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("eu3application.cpp",0x12);
  local_8._0_1_ = 0x12;
  FUN_004015b0(local_30,0xe9,3);
  local_8._0_1_ = 0x13;
  uVar4 = FUN_00987d20();
  FUN_00401280(uVar4);
  local_8._0_1_ = 0x12;
  FUN_00987ac0(local_16c);
  local_16c[0] = std::ios_base::vftable;
  FUN_00aad52d(local_16c);
  local_8._0_1_ = 9;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  pHVar5 = LoadIconA(*(HINSTANCE *)(in_ECX + 0xbc),(LPCSTR)0x7e);
  SendMessageA(*(HWND *)(in_ECX + 0xd8),0x80,1,(LPARAM)pHVar5);
  pHVar5 = LoadIconA(*(HINSTANCE *)(in_ECX + 0xbc),(LPCSTR)0x7e);
  SendMessageA(*(HWND *)(in_ECX + 0xd8),0x80,0,(LPARAM)pHVar5);
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("eu3application.cpp",0x12);
  local_8._0_1_ = 0x14;
  FUN_004015b0(local_30,0xf8,3);
  local_8._0_1_ = 0x15;
  uVar4 = FUN_00987d20();
  FUN_00401280(uVar4);
  local_8._0_1_ = 0x14;
  FUN_00987ac0(local_16c);
  local_16c[0] = std::ios_base::vftable;
  FUN_00aad52d(local_16c);
  local_8._0_1_ = 9;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  FUN_009df080();
  FUN_004367c0();
  local_8._0_1_ = 0x16;
  FUN_00436780();
  local_8._0_1_ = 0x17;
  local_64 = *(float *)(DAT_012586e0 + 0x4c);
  if (local_64 == 1.4013e-45) {
    FUN_00408ed0(local_280,0,0xffffffff);
  }
  local_cc = 0;
  local_c8 = 0;
  local_c4 = 0;
  local_8._0_1_ = 0x18;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("/cursors/normal.cur",0x13);
  local_8._0_1_ = 0x19;
  FUN_00a840b0();
  local_8._0_1_ = 0x18;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("/cursors/busy.ani",0x11);
  local_8._0_1_ = 0x1a;
  FUN_00a840b0();
  local_8._0_1_ = 0x18;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("/cursors/cant_move.cur",0x16);
  local_8._0_1_ = 0x1b;
  FUN_00a840b0();
  local_8._0_1_ = 0x18;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("/cursors/dragselect.ani",0x17);
  local_8._0_1_ = 0x1c;
  FUN_00a840b0();
  local_8._0_1_ = 0x18;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("/cursors/selected.cur",0x15);
  local_8._0_1_ = 0x1d;
  FUN_00a840b0();
  local_8._0_1_ = 0x18;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("/cursors/no_move.ani",0x14);
  local_8._0_1_ = 0x1e;
  FUN_00a840b0();
  local_8._0_1_ = 0x18;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("/cursors/friendly_move.ani",0x1a);
  local_8._0_1_ = 0x1f;
  FUN_00a840b0();
  local_8._0_1_ = 0x18;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("/cursors/attack_move.ani",0x18);
  local_8._0_1_ = 0x20;
  FUN_00a840b0();
  local_8._0_1_ = 0x18;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("/cursors/embark.cur",0x13);
  local_8._0_1_ = 0x21;
  FUN_00a840b0();
  local_8._0_1_ = 0x18;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("/cursors/exploration.cur",0x18);
  local_8._0_1_ = 0x22;
  FUN_00a840b0();
  local_8._0_1_ = 0x18;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("/cursors/deploy_valid.ani",0x19);
  local_8._0_1_ = 0x23;
  FUN_00a840b0();
  local_8._0_1_ = 0x18;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("/cursors/deploy_not_valid.cur",0x1d);
  local_8._0_1_ = 0x24;
  FUN_00a840b0();
  local_8._0_1_ = 0x18;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("/cursors/objective.cur",0x16);
  local_8._0_1_ = 0x25;
  FUN_00a840b0();
  local_8._0_1_ = 0x18;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("eu3application.cpp",0x12);
  local_8._0_1_ = 0x26;
  FUN_004015b0(local_30,0x112,3);
  local_8._0_1_ = 0x27;
  uVar4 = FUN_00987d20();
  FUN_00401280(uVar4);
  local_8._0_1_ = 0x26;
  FUN_00987ac0(local_16c);
  local_16c[0] = std::ios_base::vftable;
  FUN_00aad52d(local_16c);
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1f4 = 0;
  local_1f0 = 0;
  local_1ec = 0;
  iVar3 = (local_c8 - local_cc) / 0x1c;
  if (local_64 == 2.8026e-45) {
    if (0 < iVar3) {
      local_38 = local_cc;
      local_64 = (float)iVar3;
      do {
        local_8._0_1_ = 0x28;
        pcVar2 = (char *)FUN_00988f20(local_38);
        if (0xf < *(uint *)(pcVar2 + 0x14)) {
          pcVar2 = *(char **)pcVar2;
        }
        if ((pcVar2 == (char *)0x0) || (*pcVar2 == '\0')) {
LAB_00634d3a:
          local_31 = '\0';
        }
        else {
          iVar3 = PHYSFS_exists(pcVar2);
          local_31 = '\x01';
          if (iVar3 == 0) goto LAB_00634d3a;
        }
        if (0xf < local_a4.PagefileUsage) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_a4.WorkingSetSize);
        }
        if (local_31 == '\0') {
          FUN_00988f20(local_38);
          local_8._0_1_ = 0x2b;
          FUN_00a840b0();
        }
        else {
          FUN_00988f20(local_38);
          local_8._0_1_ = 0x2a;
          FUN_00a840b0();
        }
        if (0xf < local_a4.PagefileUsage) {
          local_8._0_1_ = 0x28;
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_a4.WorkingSetSize);
        }
        local_38 = local_38 + 0x1c;
        local_64 = (float)((int)local_64 + -1);
      } while (local_64 != 0.0);
    }
  }
  else if (0 < iVar3) {
    local_38 = local_cc;
    local_64 = (float)iVar3;
    do {
      local_8._0_1_ = 0x28;
      FUN_00988f20(local_38);
      local_8._0_1_ = 0x29;
      FUN_00a840b0();
      local_8._0_1_ = 0x28;
      if (0xf < local_a4.PagefileUsage) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_a4.WorkingSetSize);
      }
      local_38 = local_38 + 0x1c;
      local_64 = (float)((int)local_64 + -1);
    } while (local_64 != 0.0);
    local_64 = 0.0;
  }
  local_8._0_1_ = 0x28;
  (**(code **)(**(int **)(local_44 + 0xe4) + 0x18))(&local_1f4);
  (**(code **)(**(int **)(local_44 + 0xe4) + 0x10))(1);
  ShowCursor(1);
  ShowCursor(1);
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("eu3application.cpp",0x12);
  local_8._0_1_ = 0x2c;
  FUN_004015b0(local_30,300,0x10005);
  cb = 0x28;
  ppsmemCounters = &local_a4;
  local_8._0_1_ = 0x2d;
  Process = GetCurrentProcess();
  GetProcessMemoryInfo(Process,ppsmemCounters,cb);
  local_64 = (float)(int)local_a4.WorkingSetSize;
  if ((int)local_a4.WorkingSetSize < 0) {
    local_64 = local_64 + 4.2949673e+09;
  }
  local_64 = local_64 * 0.0009765625;
  uVar4 = FUN_00987d20((int)local_64,&DAT_00e0785c);
  uVar4 = FUN_00455470(uVar4);
  uVar4 = FUN_00418e30(uVar4);
  FUN_00401280(uVar4);
  local_8._0_1_ = 0x2c;
  FUN_00987ac0(local_16c);
  local_16c[0] = std::ios_base::vftable;
  FUN_00aad52d(local_16c);
  local_8._0_1_ = 0x28;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("eu3application.cpp",0x12);
  local_8._0_1_ = 0x2e;
  FUN_004015b0(local_30,0x12e,3);
  local_8._0_1_ = 0x2f;
  uVar4 = FUN_00987d20();
  FUN_00401280(uVar4);
  local_8._0_1_ = 0x2e;
  FUN_00987ac0(local_16c);
  local_16c[0] = std::ios_base::vftable;
  FUN_00aad52d(local_16c);
  local_8._0_1_ = 0x28;
  uVar1 = (undefined1)local_8;
  local_8._0_1_ = 0x28;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  if (*(char *)(local_44 + 0x16c) != '\0') {
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    FUN_00409350("eu3application.cpp",0x12);
    local_8._0_1_ = 0x30;
    FUN_004015b0(local_30,0x131,0x10000);
    local_8._0_1_ = 0x31;
    uVar4 = FUN_00987d20();
    FUN_00401280(uVar4);
    local_8._0_1_ = 0x30;
    FUN_00987ac0(local_16c);
    local_16c[0] = std::ios_base::vftable;
    FUN_00aad52d(local_16c);
    local_8._0_1_ = 0x28;
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_30[0]);
    }
    FUN_009e8090();
    puVar6 = (undefined4 *)FUN_00aae9af(4);
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      DAT_00f20c3c = 3;
      *puVar6 = CNullMusic::vftable;
    }
    local_8._0_1_ = 0x32;
    local_64 = 0.0;
    if ((puVar6 != DAT_0131cb34) && (DAT_0131cb34 != (undefined4 *)0x0)) {
      (**(code **)*DAT_0131cb34)(1);
    }
    local_8._0_1_ = 0x28;
    DAT_0131cb34 = puVar6;
    FUN_009c7290();
    puVar6 = (undefined4 *)FUN_00aae9af(0xc);
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      puVar6[1] = 10000;
      *(undefined1 *)((int)puVar6 + 9) = 1;
      *puVar6 = CNullSound::vftable;
    }
    local_8._0_1_ = 0x33;
    local_64 = 0.0;
    if ((puVar6 != DAT_0131ca9c) && (DAT_0131ca9c != (undefined4 *)0x0)) {
      (**(code **)*DAT_0131ca9c)(1);
    }
    local_8 = CONCAT31(local_8._1_3_,0x28);
    DAT_0131ca9c = puVar6;
    FUN_00635207();
    return;
  }
  local_8._0_1_ = uVar1;
  FUN_009e8090();
  local_64 = (float)FUN_00aae9af(4);
  local_8._0_1_ = 0x34;
  if (local_64 == 0.0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar6 = (undefined4 *)FUN_009e8210(local_64);
  }
  local_8._0_1_ = 0x35;
  local_64 = 0.0;
  if ((puVar6 != DAT_0131cb34) && (DAT_0131cb34 != (undefined4 *)0x0)) {
    (**(code **)*DAT_0131cb34)(1);
  }
  local_8._0_1_ = 0x36;
  DAT_0131cb34 = puVar6;
  FUN_009c7290();
  local_64 = (float)FUN_00aae9af(0x20);
  local_8._0_1_ = 0x37;
  if (local_64 == 0.0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar6 = (undefined4 *)FUN_006376e0(local_64);
  }
  local_8 = CONCAT31(local_8._1_3_,0x38);
  local_64 = 0.0;
  if ((puVar6 != DAT_0131ca9c) && (DAT_0131ca9c != (undefined4 *)0x0)) {
    (**(code **)*DAT_0131ca9c)(1);
  }
  local_8 = 0x28;
  DAT_0131ca9c = puVar6;
  FUN_00635207();
  return;
}

