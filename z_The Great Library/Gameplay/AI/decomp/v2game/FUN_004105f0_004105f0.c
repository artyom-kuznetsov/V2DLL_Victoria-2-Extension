// FUN_004105f0 @ 004105f0 body=[[004105f0, 00410715] [00410719, 00410754] [00410758, 0041077e] [00410787, 00410821] [00410825, 00410860] [00410864, 0041088a] [00410893, 0041092d] [00410931, 0041096d] [00410976, 004115b3]]


undefined4 FUN_004105f0(undefined4 param_1,int param_2)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 *puVar6;
  int in_ECX;
  undefined1 auStack_304 [3];
  char cStack_301;
  undefined1 auStack_300 [3];
  char cStack_2fd;
  uint local_2fc [4];
  undefined4 local_2ec;
  uint local_2e8;
  undefined1 auStack_2e4 [4];
  undefined1 local_2e0 [4];
  int local_2dc;
  undefined4 local_2d8;
  undefined4 local_2d4;
  undefined4 uStack_2d0;
  undefined4 local_2cc;
  uint local_2c8 [4];
  undefined4 local_2b8;
  uint local_2b4;
  undefined1 auStack_2ac [28];
  undefined1 local_290;
  undefined4 local_280;
  undefined4 local_27c;
  undefined1 local_274;
  undefined4 local_264;
  undefined4 local_260;
  undefined1 local_258;
  undefined4 local_248;
  undefined4 local_244;
  undefined4 local_23c;
  undefined1 local_238;
  undefined1 auStack_1f8 [28];
  undefined1 auStack_1dc [28];
  undefined1 auStack_1c0 [28];
  undefined1 auStack_1a4 [28];
  undefined1 auStack_188 [28];
  undefined1 auStack_16c [28];
  undefined1 auStack_150 [20];
  undefined1 auStack_13c [20];
  undefined1 auStack_128 [20];
  undefined1 auStack_114 [160];
  undefined1 auStack_74 [96];
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
  puStack_10 = &LAB_00b8fd3c;
  local_14 = ExceptionList;
  local_2cc = 0;
  local_27c = 0xf;
  local_280 = 0;
  local_290 = 0;
  local_260 = 0xf;
  local_264 = 0;
  local_274 = 0;
  local_244 = 0xf;
  local_248 = 0;
  local_258 = 0;
  local_23c = 0;
  local_238 = 1;
  local_c._0_1_ = 0;
  local_c._1_3_ = 0;
  if (param_2 == *(int *)(in_ECX + 0x6c)) {
    local_2e8 = 0xf;
    local_2ec = 0;
    local_2fc[0] = local_2fc[0] & 0xffffff00;
    ExceptionList = &local_14;
    FUN_00409350("BP_TOOLTIP_TAB_CURRENT",0x16);
    local_c._0_1_ = 1;
    FUN_009a8ee0(local_2e0,local_2fc);
    local_c._0_1_ = 2;
    iVar3 = FUN_00475500();
    uVar4 = FUN_009a9880((int)*(undefined8 *)(iVar3 + 0x6c),
                         (int)((ulonglong)*(undefined8 *)(iVar3 + 0x6c) >> 0x20),
                         (int)*(undefined8 *)(iVar3 + 0x74),
                         (int)((ulonglong)*(undefined8 *)(iVar3 + 0x74) >> 0x20));
    local_c._0_1_ = 3;
    FUN_00408ed0(uVar4,0,0xffffffff);
    if (0xf < local_2b4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c8[0]);
    }
    local_2b4 = 0xf;
    local_2b8 = 0;
    local_2c8[0] = local_2c8[0] & 0xffffff00;
    local_c._0_1_ = 4;
    FUN_009adb70();
    if (local_2dc != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2dc);
    }
    local_c._0_1_ = 0;
    uVar1 = (undefined1)local_c;
    local_c._0_1_ = 0;
    local_2dc = 0;
    local_2d8 = 0;
    local_2d4 = 0;
    if (0xf < local_2e8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2fc[0]);
    }
  }
  else if (param_2 == *(int *)(in_ECX + 0x70)) {
    local_2e8 = 0xf;
    local_2ec = 0;
    local_2fc[0] = (uint)local_2fc[0]._1_3_ << 8;
    ExceptionList = &local_14;
    FUN_00409350("BP_TOOLTIP_TAB_HISTORICAL",0x19);
    local_c._0_1_ = 5;
    FUN_009a8ee0(local_2e0,local_2fc);
    local_c._0_1_ = 6;
    iVar3 = FUN_00475500();
    uVar4 = FUN_009a9880((int)*(undefined8 *)(iVar3 + 0x6c),
                         (int)((ulonglong)*(undefined8 *)(iVar3 + 0x6c) >> 0x20),
                         (int)*(undefined8 *)(iVar3 + 0x74),
                         (int)((ulonglong)*(undefined8 *)(iVar3 + 0x74) >> 0x20));
    local_c._0_1_ = 7;
    FUN_00408ed0(uVar4,0,0xffffffff);
    if (0xf < local_2b4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c8[0]);
    }
    local_2b4 = 0xf;
    local_2b8 = 0;
    local_2c8[0] = local_2c8[0] & 0xffffff00;
    local_c._0_1_ = 8;
    FUN_009adb70();
    if (local_2dc != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2dc);
    }
    local_c._0_1_ = 0;
    local_2dc = 0;
    local_2d8 = 0;
    local_2d4 = 0;
    uVar1 = (undefined1)local_c;
    if (0xf < local_2e8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2fc[0]);
    }
  }
  else if (param_2 == *(int *)(in_ECX + 0x74)) {
    local_2e8 = 0xf;
    local_2ec = 0;
    local_2fc[0] = (uint)local_2fc[0]._1_3_ << 8;
    ExceptionList = &local_14;
    FUN_00409350("BP_TOOLTIP_TAB_SAVED",0x14);
    local_c._0_1_ = 9;
    FUN_009a8ee0(local_2e0,local_2fc);
    local_c._0_1_ = 10;
    iVar3 = FUN_00475500();
    uVar4 = FUN_009a9880((int)*(undefined8 *)(iVar3 + 0x6c),
                         (int)((ulonglong)*(undefined8 *)(iVar3 + 0x6c) >> 0x20),
                         (int)*(undefined8 *)(iVar3 + 0x74),
                         (int)((ulonglong)*(undefined8 *)(iVar3 + 0x74) >> 0x20));
    local_c._0_1_ = 0xb;
    FUN_00408ed0(uVar4,0,0xffffffff);
    if (0xf < local_2b4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c8[0]);
    }
    local_2b4 = 0xf;
    local_2b8 = 0;
    local_2c8[0] = local_2c8[0] & 0xffffff00;
    local_c._0_1_ = 9;
    FUN_009a9740(local_2e0);
    local_c._0_1_ = 0;
    uVar1 = (undefined1)local_c;
    if (0xf < local_2e8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2fc[0]);
    }
  }
  else {
    ExceptionList = &local_14;
    cVar2 = (**(code **)(*(int *)(*(int *)(in_ECX + 0x24) + 0x18) + 0x94))(param_2);
    if (cVar2 == '\0') {
      cVar2 = (**(code **)(*(int *)(*(int *)(in_ECX + 0x28) + 0x18) + 0x94))(param_2);
      if (cVar2 == '\0') {
        cVar2 = (**(code **)(*(int *)(*(int *)(in_ECX + 0x2c) + 0x18) + 0x94))(param_2);
        if (cVar2 == '\0') {
          if (*(char *)(*(int *)(in_ECX + 0x30) + 0x67) != '\0') {
            iVar3 = 0;
            if (0 < (int)(*(int *)(in_ECX + 0x40) - *(int *)(in_ECX + 0x3c) & 0xfffffffcU)) {
              piVar5 = *(int **)(in_ECX + 0x3c);
              do {
                if (*piVar5 == param_2) {
                  uVar1 = (undefined1)local_c;
                  switch(iVar3) {
                  case 0:
                    FUN_009885d0();
                    local_c._0_1_ = 0x28;
                    FUN_009a8ee0(local_2e0,auStack_1c0);
                    local_c._0_1_ = 0x29;
                    iVar3 = FUN_00475500();
                    uVar4 = FUN_009a9880((int)*(undefined8 *)(iVar3 + 0x6c),
                                         (int)((ulonglong)*(undefined8 *)(iVar3 + 0x6c) >> 0x20),
                                         (int)*(undefined8 *)(iVar3 + 0x74),
                                         (int)((ulonglong)*(undefined8 *)(iVar3 + 0x74) >> 0x20));
                    local_c._0_1_ = 0x2a;
                    FUN_00408ed0(uVar4,0,0xffffffff);
                    FUN_00408ad0();
                    local_c._0_1_ = 0x28;
                    FUN_009a9740(local_2e0);
                    local_c._0_1_ = 0;
                    FUN_00408ad0();
                    uVar1 = (undefined1)local_c;
                    break;
                  case 1:
                    FUN_009885d0();
                    local_c._0_1_ = 0x2b;
                    FUN_009a8ee0(auStack_13c,auStack_188);
                    local_c._0_1_ = 0x2c;
                    iVar3 = FUN_00475500();
                    uVar4 = FUN_009a9880((int)*(undefined8 *)(iVar3 + 0x6c),
                                         (int)((ulonglong)*(undefined8 *)(iVar3 + 0x6c) >> 0x20),
                                         (int)*(undefined8 *)(iVar3 + 0x74),
                                         (int)((ulonglong)*(undefined8 *)(iVar3 + 0x74) >> 0x20));
                    local_c._0_1_ = 0x2d;
                    FUN_00408ed0(uVar4,0,0xffffffff);
                    FUN_00408ad0();
                    local_c._0_1_ = 0x2b;
                    FUN_009a9740(auStack_13c);
                    local_c._0_1_ = 0;
                    FUN_00408ad0();
                    uVar1 = (undefined1)local_c;
                    break;
                  case 2:
                    FUN_009885d0();
                    local_c._0_1_ = 0x2e;
                    FUN_009a8ee0(auStack_114,auStack_16c);
                    local_c._0_1_ = 0x2f;
                    iVar3 = FUN_00475500();
                    uVar4 = FUN_009a9880((int)*(undefined8 *)(iVar3 + 0x6c),
                                         (int)((ulonglong)*(undefined8 *)(iVar3 + 0x6c) >> 0x20),
                                         (int)*(undefined8 *)(iVar3 + 0x74),
                                         (int)((ulonglong)*(undefined8 *)(iVar3 + 0x74) >> 0x20));
                    local_c._0_1_ = 0x30;
                    FUN_00408ed0(uVar4,0,0xffffffff);
                    FUN_00408ad0();
                    local_c._0_1_ = 0x2e;
                    FUN_009a9740(auStack_114);
                    local_c._0_1_ = 0;
                    FUN_00408ad0();
                    uVar1 = (undefined1)local_c;
                    break;
                  case 3:
                    FUN_009885d0();
                    local_c._0_1_ = 0x31;
                    FUN_009a8ee0(auStack_128,auStack_1f8);
                    local_c._0_1_ = 0x32;
                    iVar3 = FUN_00475500();
                    uVar4 = FUN_009a9880((int)*(undefined8 *)(iVar3 + 0x6c),
                                         (int)((ulonglong)*(undefined8 *)(iVar3 + 0x6c) >> 0x20),
                                         (int)*(undefined8 *)(iVar3 + 0x74),
                                         (int)((ulonglong)*(undefined8 *)(iVar3 + 0x74) >> 0x20));
                    local_c._0_1_ = 0x33;
                    FUN_00408ed0(uVar4,0,0xffffffff);
                    FUN_00408ad0();
                    local_c._0_1_ = 0x31;
                    FUN_009a9740(auStack_128);
                    local_c._0_1_ = 0;
                    FUN_00408ad0();
                    uVar1 = (undefined1)local_c;
                    break;
                  case 4:
                    FUN_009885d0();
                    local_c._0_1_ = 0x34;
                    FUN_009a8ee0(auStack_150,auStack_1a4);
                    local_c._0_1_ = 0x35;
                    iVar3 = FUN_00475500();
                    uVar4 = FUN_009a9880((int)*(undefined8 *)(iVar3 + 0x6c),
                                         (int)((ulonglong)*(undefined8 *)(iVar3 + 0x6c) >> 0x20),
                                         (int)*(undefined8 *)(iVar3 + 0x74),
                                         (int)((ulonglong)*(undefined8 *)(iVar3 + 0x74) >> 0x20));
                    local_c._0_1_ = 0x36;
                    FUN_00408ed0(uVar4,0,0xffffffff);
                    FUN_00408ad0();
                    local_c._0_1_ = 0x34;
                    FUN_009a9740(auStack_150);
                    local_c._0_1_ = 0;
                    FUN_00408ad0();
                    uVar1 = (undefined1)local_c;
                    break;
                  case 5:
                    FUN_009885d0();
                    local_c._0_1_ = 0x37;
                    FUN_009a8ee0(local_2c8,auStack_1dc);
                    local_c._0_1_ = 0x38;
                    iVar3 = FUN_00475500();
                    uVar4 = FUN_009a9880((int)*(undefined8 *)(iVar3 + 0x6c),
                                         (int)((ulonglong)*(undefined8 *)(iVar3 + 0x6c) >> 0x20),
                                         (int)*(undefined8 *)(iVar3 + 0x74),
                                         (int)((ulonglong)*(undefined8 *)(iVar3 + 0x74) >> 0x20));
                    local_c._0_1_ = 0x39;
                    FUN_00408ed0(uVar4,0,0xffffffff);
                    FUN_00408ad0();
                    local_c._0_1_ = 0x37;
                    FUN_009a9740(local_2c8);
                    local_c._0_1_ = 0;
                    FUN_00408ad0();
                    uVar1 = (undefined1)local_c;
                    break;
                  case 6:
                    FUN_009885d0();
                    local_c._0_1_ = 0x3a;
                    FUN_009a8ee0(local_2fc,auStack_2ac);
                    local_c._0_1_ = 0x3b;
                    iVar3 = FUN_00475500();
                    uVar4 = FUN_009a9880((int)*(undefined8 *)(iVar3 + 0x6c),
                                         (int)((ulonglong)*(undefined8 *)(iVar3 + 0x6c) >> 0x20),
                                         (int)*(undefined8 *)(iVar3 + 0x74),
                                         (int)((ulonglong)*(undefined8 *)(iVar3 + 0x74) >> 0x20));
                    local_c._0_1_ = 0x3c;
                    FUN_00408ed0(uVar4,0,0xffffffff);
                    FUN_00408ad0();
                    local_c._0_1_ = 0x3a;
                    FUN_009a9740(local_2fc);
                    local_c._0_1_ = 0;
                    FUN_00408ad0();
                    uVar1 = (undefined1)local_c;
                  }
                  goto switchD_00411004_default;
                }
                iVar3 = iVar3 + 1;
                piVar5 = piVar5 + 1;
              } while (iVar3 < *(int *)(in_ECX + 0x40) - *(int *)(in_ECX + 0x3c) >> 2);
            }
            if ((*(char *)(*(int *)(in_ECX + 0x34) + 0x67) != '\0') &&
               (iVar3 = 0,
               0 < (int)(*(int *)(in_ECX + 0x50) - *(int *)(in_ECX + 0x4c) & 0xfffffffcU))) {
              piVar5 = *(int **)(in_ECX + 0x4c);
              do {
                if (*piVar5 == param_2) {
                  iVar3 = FUN_00414a30(**(undefined4 **)(in_ECX + 0x398));
                  uVar1 = (undefined1)local_c;
                  if (iVar3 != 0) {
                    uVar4 = FUN_00a8bc80(iVar3);
                    local_c._0_1_ = 0x3d;
                    FUN_009a8ee0(local_2fc,uVar4);
                    local_c._0_1_ = 0x3e;
                    iVar3 = FUN_00475500();
                    uVar4 = FUN_009a9880((int)*(undefined8 *)(iVar3 + 0x6c),
                                         (int)((ulonglong)*(undefined8 *)(iVar3 + 0x6c) >> 0x20),
                                         (int)*(undefined8 *)(iVar3 + 0x74),
                                         (int)((ulonglong)*(undefined8 *)(iVar3 + 0x74) >> 0x20));
                    local_c._0_1_ = 0x3f;
                    FUN_00408ed0(uVar4,0,0xffffffff);
                    FUN_00408ad0();
                    local_c._0_1_ = 0x3d;
                    FUN_009a9740(local_2fc);
                    local_c._0_1_ = 0;
                    FUN_00408ad0();
                    uVar1 = (undefined1)local_c;
                  }
                  goto switchD_00411004_default;
                }
                iVar3 = iVar3 + 1;
                piVar5 = piVar5 + 1;
              } while (iVar3 < *(int *)(in_ECX + 0x50) - *(int *)(in_ECX + 0x4c) >> 2);
            }
          }
          puVar6 = (undefined4 *)(**(code **)(**(int **)(in_ECX + 0x88) + 0x2c))();
          piVar5 = (int *)*puVar6;
          do {
            uVar1 = (undefined1)local_c;
            if (piVar5 == (int *)0x0) goto switchD_00411004_default;
            iVar3 = *piVar5;
            piVar5 = (int *)piVar5[2];
            cVar2 = (**(code **)(*(int *)(iVar3 + 0x1c) + 0x58))(param_2);
          } while (cVar2 == '\0');
          FUN_0040c1b0(iVar3,auStack_74);
          local_c._0_1_ = 0x40;
          FUN_004115d0();
          local_c._0_1_ = 0;
          FUN_00459820();
          uVar1 = (undefined1)local_c;
          goto switchD_00411004_default;
        }
        FUN_009885d0();
        local_c = CONCAT31(local_c._1_3_,0x20);
        iVar3 = (**(code **)(**(int **)(in_ECX + 0x2c) + 0x34))(local_2fc);
        cStack_301 = iVar3 == param_2;
        puStack_10 = (undefined1 *)((uint)puStack_10 & 0xffffff00);
        FUN_00408ad0();
        if (cStack_301 != '\0') {
          FUN_009885d0();
          puStack_10._0_1_ = 0x21;
          uStack_2d0 = FUN_009a8ee0(auStack_2e4,auStack_300);
          puStack_10._0_1_ = 0x22;
          iVar3 = FUN_00475500();
          uVar4 = FUN_009a9880((int)*(undefined8 *)(iVar3 + 0x6c),
                               (int)((ulonglong)*(undefined8 *)(iVar3 + 0x6c) >> 0x20),
                               (int)*(undefined8 *)(iVar3 + 0x74),
                               (int)((ulonglong)*(undefined8 *)(iVar3 + 0x74) >> 0x20));
          puStack_10._0_1_ = 0x23;
          FUN_00408ed0(uVar4,0,0xffffffff);
          FUN_00408ad0();
          puStack_10._0_1_ = 0x21;
          FUN_009a9740(auStack_2e4);
          puStack_10 = (undefined1 *)((uint)puStack_10._1_3_ << 8);
          FUN_00408ad0();
        }
        FUN_009885d0();
        puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,0x24);
        iVar3 = (**(code **)(**(int **)(in_ECX + 0x2c) + 0x34))(auStack_300);
        cStack_2fd = iVar3 == param_2;
        local_c._0_1_ = 0;
        FUN_00408ad0();
        uVar1 = (undefined1)local_c;
        if (cStack_2fd == '\0') goto switchD_00411004_default;
        FUN_009885d0();
        local_c._0_1_ = 0x25;
        FUN_009a8ee0(local_2e0,local_2fc);
        local_c._0_1_ = 0x26;
        iVar3 = FUN_00475500();
        uVar4 = FUN_009a9880((int)*(undefined8 *)(iVar3 + 0x6c),
                             (int)((ulonglong)*(undefined8 *)(iVar3 + 0x6c) >> 0x20),
                             (int)*(undefined8 *)(iVar3 + 0x74),
                             (int)((ulonglong)*(undefined8 *)(iVar3 + 0x74) >> 0x20));
        local_c._0_1_ = 0x27;
        FUN_00408ed0(uVar4,0,0xffffffff);
        FUN_00408ad0();
        local_c._0_1_ = 0x25;
      }
      else {
        FUN_009885d0();
        local_14 = (void *)CONCAT31(local_14._1_3_,0x1c);
        iVar3 = (**(code **)(**(int **)(in_ECX + 0x28) + 0x34))(auStack_304);
        cStack_2fd = iVar3 == param_2;
        local_c._0_1_ = 0;
        FUN_00408ad0();
        uVar1 = (undefined1)local_c;
        if (cStack_2fd == '\0') goto switchD_00411004_default;
        FUN_009885d0();
        local_c._0_1_ = 0x1d;
        FUN_009a8ee0(local_2e0,local_2fc);
        local_c._0_1_ = 0x1e;
        iVar3 = FUN_00475500();
        uVar4 = FUN_009a9880((int)*(undefined8 *)(iVar3 + 0x6c),
                             (int)((ulonglong)*(undefined8 *)(iVar3 + 0x6c) >> 0x20),
                             (int)*(undefined8 *)(iVar3 + 0x74),
                             (int)((ulonglong)*(undefined8 *)(iVar3 + 0x74) >> 0x20));
        local_c._0_1_ = 0x1f;
        FUN_00408ed0(uVar4,0,0xffffffff);
        FUN_00408ad0();
        local_c._0_1_ = 0x1d;
      }
    }
    else {
      FUN_009885d0();
      puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,0xc);
      iVar3 = (**(code **)(**(int **)(in_ECX + 0x24) + 0x34))(auStack_300);
      cStack_2fd = iVar3 == param_2;
      local_c = (uint)local_c._1_3_ << 8;
      FUN_00408ad0();
      if (cStack_2fd == '\0') {
        FUN_009885d0();
        local_c._0_1_ = 0x10;
        iVar3 = (**(code **)(**(int **)(in_ECX + 0x24) + 0x34))(local_2fc);
        cStack_2fd = iVar3 == param_2;
        local_c._0_1_ = 0;
        FUN_00408ad0();
        if (cStack_2fd == '\0') {
          FUN_009885d0();
          local_c._0_1_ = 0x14;
          iVar3 = (**(code **)(**(int **)(in_ECX + 0x24) + 0x34))(local_2fc);
          cStack_2fd = iVar3 == param_2;
          local_c._0_1_ = 0;
          FUN_00408ad0();
          if (cStack_2fd == '\0') {
            FUN_009885d0();
            local_c._0_1_ = 0x18;
            iVar3 = (**(code **)(**(int **)(in_ECX + 0x24) + 0x34))(local_2fc);
            cStack_2fd = iVar3 == param_2;
            local_c._0_1_ = 0;
            FUN_00408ad0();
            uVar1 = (undefined1)local_c;
            if (cStack_2fd == '\0') goto switchD_00411004_default;
            FUN_009885d0();
            local_c._0_1_ = 0x19;
            FUN_009a8ee0(local_2e0,local_2fc);
            local_c._0_1_ = 0x1a;
            iVar3 = FUN_00475500();
            uVar4 = FUN_009a9880((int)*(undefined8 *)(iVar3 + 0x6c),
                                 (int)((ulonglong)*(undefined8 *)(iVar3 + 0x6c) >> 0x20),
                                 (int)*(undefined8 *)(iVar3 + 0x74),
                                 (int)((ulonglong)*(undefined8 *)(iVar3 + 0x74) >> 0x20));
            local_c._0_1_ = 0x1b;
            FUN_00408ed0(uVar4,0,0xffffffff);
            FUN_00408ad0();
            local_c._0_1_ = 0x19;
          }
          else {
            FUN_009885d0();
            local_c._0_1_ = 0x15;
            FUN_009a8ee0(local_2e0,local_2fc);
            local_c._0_1_ = 0x16;
            iVar3 = FUN_00475500();
            uVar4 = FUN_009a9880((int)*(undefined8 *)(iVar3 + 0x6c),
                                 (int)((ulonglong)*(undefined8 *)(iVar3 + 0x6c) >> 0x20),
                                 (int)*(undefined8 *)(iVar3 + 0x74),
                                 (int)((ulonglong)*(undefined8 *)(iVar3 + 0x74) >> 0x20));
            local_c._0_1_ = 0x17;
            FUN_00408ed0(uVar4,0,0xffffffff);
            FUN_00408ad0();
            local_c._0_1_ = 0x15;
          }
        }
        else {
          FUN_009885d0();
          local_c._0_1_ = 0x11;
          FUN_009a8ee0(local_2e0,local_2fc);
          local_c._0_1_ = 0x12;
          iVar3 = FUN_00475500();
          uVar4 = FUN_009a9880((int)*(undefined8 *)(iVar3 + 0x6c),
                               (int)((ulonglong)*(undefined8 *)(iVar3 + 0x6c) >> 0x20),
                               (int)*(undefined8 *)(iVar3 + 0x74),
                               (int)((ulonglong)*(undefined8 *)(iVar3 + 0x74) >> 0x20));
          local_c._0_1_ = 0x13;
          FUN_00408ed0(uVar4,0,0xffffffff);
          FUN_00408ad0();
          local_c._0_1_ = 0x11;
        }
      }
      else {
        FUN_009885d0();
        local_c._0_1_ = 0xd;
        FUN_009a8ee0(local_2e0,local_2fc);
        local_c._0_1_ = 0xe;
        iVar3 = FUN_00475500();
        uVar4 = FUN_009a9880((int)*(undefined8 *)(iVar3 + 0x6c),
                             (int)((ulonglong)*(undefined8 *)(iVar3 + 0x6c) >> 0x20),
                             (int)*(undefined8 *)(iVar3 + 0x74),
                             (int)((ulonglong)*(undefined8 *)(iVar3 + 0x74) >> 0x20));
        local_c._0_1_ = 0xf;
        FUN_00408ed0(uVar4,0,0xffffffff);
        FUN_00408ad0();
        local_c._0_1_ = 0xd;
      }
    }
    FUN_009a9740(local_2e0);
    local_c._0_1_ = 0;
    FUN_00408ad0();
    uVar1 = (undefined1)local_c;
  }
switchD_00411004_default:
  local_c._0_1_ = uVar1;
  FUN_0040c830(param_1);
  FUN_00459820();
  ExceptionList = local_14;
  return param_1;
}

