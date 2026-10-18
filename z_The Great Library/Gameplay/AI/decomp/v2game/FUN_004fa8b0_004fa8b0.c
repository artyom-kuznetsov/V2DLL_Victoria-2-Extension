// FUN_004fa8b0 @ 004fa8b0 body=[[004fa8b0, 004faad0] [004faad4, 004faaef] [004faaf3, 004fab7c] [004fab80, 004fab9b] [004fab9f, 004fac28] [004fac2c, 004fac47] [004fac4b, 004facd4] [004facd8, 004facf3] [004facf7, 004fad80] [004fad84, 004fad9f] [004fada3, 004fae2c] [004fae30, 004fae4b] [004fae4f, 004faed8] [004faedc, 004faef7] [004faefb, 004faf84] [004faf88, 004fafa3] [004fafa7, 004fb030] [004fb034, 004fb04f] [004fb053, 004fb0dc] [004fb0e0, 004fb0f7] [004fb0fb, 004fb1e1] [004fb1e5, 004fb200] [004fb204, 004fb222] [004fb226, 004fb27e] [004fb282, 004fb2d6] [004fb2da, 004fb2f8] [004fb2fc, 004fb390] [004fb394, 004fb3ec] [004fb3f0, 004fb40e] [004fb414, 004fb468] [004fb46c, 004fb4af] [004fb4b3, 004fb4e9] [004fb4ed, 004fb53e] [004fb542, 004fb578] [004fb57c, 004fb5a2] [004fb5a6, 004fb5ba]]


/* WARNING: Removing unreachable block (ram,0x004fb597) */
/* WARNING: Removing unreachable block (ram,0x004fb50c) */
/* WARNING: Removing unreachable block (ram,0x004faa12) */
/* WARNING: Removing unreachable block (ram,0x004fb59e) */

undefined1 *
FUN_004fa8b0(int param_1,undefined1 *param_2,int param_3,int *param_4,int param_5,int param_6,
            undefined2 *param_7)

{
  undefined1 uVar1;
  char cVar2;
  undefined2 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  undefined8 uVar8;
  undefined1 local_c8 [20];
  uint local_b4 [4];
  undefined4 local_a4;
  uint local_a0;
  uint local_98 [4];
  undefined4 local_88;
  uint local_84;
  int local_7c;
  undefined4 local_78;
  int local_74;
  undefined1 local_70 [4];
  int local_6c;
  undefined4 local_68;
  undefined4 local_64;
  uint local_5c [4];
  undefined4 local_4c;
  uint local_48;
  undefined1 local_40 [4];
  int local_3c;
  undefined4 local_38;
  undefined4 local_34;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = ExceptionList;
  puStack_c = &LAB_00b74e69;
  local_78 = 0;
  ExceptionList = &local_10;
  *param_7 = 0;
  local_8 = 1;
  if (*(char *)(param_3 + 0x39) == '\0') {
    piVar7 = (int *)(*(int *)(param_3 + 0x24) * 0x10 + *(int *)(param_1 + 0x994));
    iVar6 = *(int *)(*(int *)(param_1 + 0x9a4) + *(int *)(param_3 + 0x24) * 4);
    for (local_74 = (piVar7[1] - *piVar7) / 0x1c; 0 < local_74; local_74 = local_74 + -1) {
      local_7c = *piVar7 + iVar6 * 0x1c;
      *(int *)(*(int *)(param_1 + 0x9a4) + *(int *)(param_3 + 0x24) * 4) = iVar6;
      iVar6 = iVar6 + 1;
      cVar2 = FUN_004f9ad0(param_1,local_7c);
      if ((cVar2 == '\0') && (iVar4 = FUN_00a727a0(), iVar4 == 0)) {
        *(undefined4 *)(param_2 + 0x14) = 0xf;
        *(undefined4 *)(param_2 + 0x10) = 0;
        *param_2 = 0;
        FUN_00408ed0();
        ExceptionList = local_10;
        return param_2;
      }
      if ((piVar7[1] - *piVar7) / 0x1c <= iVar6) {
        iVar6 = 0;
      }
    }
  }
  local_84 = 0xf;
  local_88 = 0;
  local_98[0] = local_98[0] & 0xffffff00;
  local_8._0_1_ = 2;
  if (*(char *)(param_3 + 0x39) == '\0') {
    uVar8 = 0xd00dfe2f0;
  }
  else if ((param_5 == 0) || (*(char *)(param_5 + 0x4c) != '\0')) {
    uVar8 = 0x1200dfe2dc;
  }
  else {
    uVar8 = 0x1100dfe2c8;
  }
  FUN_00409350(uVar8);
  if ((DAT_013f2c18 & 1) == 0) {
    DAT_013f2c18 = DAT_013f2c18 | 1;
    local_8._0_1_ = 3;
    local_48 = 0xf;
    local_4c = 0;
    local_5c[0] = local_5c[0] & 0xffffff00;
    FUN_00409350(&DAT_00dfdcbc,2);
    local_8._0_1_ = 4;
    FUN_009a8ee0(local_70,local_5c);
    local_8._0_1_ = 5;
    iVar6 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar6 + 0x6c),*(undefined8 *)(iVar6 + 0x74));
    local_8._0_1_ = 8;
    FUN_009adb70();
    if (local_6c != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_6c = 0;
    local_68 = 0;
    local_64 = 0;
    local_8._0_1_ = 9;
    if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_48 = 0xf;
    local_4c = 0;
    local_5c[0] = local_5c[0] & 0xffffff00;
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350(&DAT_00dfdcb8,2);
    local_8._0_1_ = 10;
    FUN_009a8ee0(local_40,local_2c);
    local_8._0_1_ = 0xb;
    iVar6 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar6 + 0x6c),*(undefined8 *)(iVar6 + 0x74));
    local_8._0_1_ = 0xe;
    FUN_009adb70();
    if (local_3c != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_3c = 0;
    local_38 = 0;
    local_34 = 0;
    local_8._0_1_ = 0xf;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    local_48 = 0xf;
    local_4c = 0;
    local_5c[0] = local_5c[0] & 0xffffff00;
    FUN_00409350(&DAT_00dfdcb4,2);
    local_8._0_1_ = 0x10;
    FUN_009a8ee0(local_70,local_5c);
    local_8._0_1_ = 0x11;
    iVar6 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar6 + 0x6c),*(undefined8 *)(iVar6 + 0x74));
    local_8._0_1_ = 0x14;
    FUN_009adb70();
    if (local_6c != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_6c = 0;
    local_68 = 0;
    local_64 = 0;
    local_8._0_1_ = 0x15;
    if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_48 = 0xf;
    local_4c = 0;
    local_5c[0] = local_5c[0] & 0xffffff00;
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350(&DAT_00dfdcb0,2);
    local_8._0_1_ = 0x16;
    FUN_009a8ee0(local_40,local_2c);
    local_8._0_1_ = 0x17;
    iVar6 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar6 + 0x6c),*(undefined8 *)(iVar6 + 0x74));
    local_8._0_1_ = 0x1a;
    FUN_009adb70();
    if (local_3c != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_3c = 0;
    local_38 = 0;
    local_34 = 0;
    local_8._0_1_ = 0x1b;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    local_48 = 0xf;
    local_4c = 0;
    local_5c[0] = local_5c[0] & 0xffffff00;
    FUN_00409350(&DAT_00dfdcbc,2);
    local_8._0_1_ = 0x1c;
    FUN_009a8ee0(local_70,local_5c);
    local_8._0_1_ = 0x1d;
    iVar6 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar6 + 0x6c),*(undefined8 *)(iVar6 + 0x74));
    local_8._0_1_ = 0x20;
    FUN_009adb70();
    if (local_6c != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_6c = 0;
    local_68 = 0;
    local_64 = 0;
    local_8._0_1_ = 0x21;
    if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_48 = 0xf;
    local_4c = 0;
    local_5c[0] = local_5c[0] & 0xffffff00;
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350(&DAT_00dfdcbc,2);
    local_8._0_1_ = 0x22;
    FUN_009a8ee0(local_40,local_2c);
    local_8._0_1_ = 0x23;
    iVar6 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar6 + 0x6c),*(undefined8 *)(iVar6 + 0x74));
    local_8._0_1_ = 0x26;
    FUN_009adb70();
    if (local_3c != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_3c = 0;
    local_38 = 0;
    local_34 = 0;
    local_8._0_1_ = 0x27;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    local_48 = 0xf;
    local_4c = 0;
    local_5c[0] = local_5c[0] & 0xffffff00;
    FUN_00409350(&DAT_00dfdcbc,2);
    local_8._0_1_ = 0x28;
    FUN_009a8ee0(local_70,local_5c);
    local_8._0_1_ = 0x29;
    iVar6 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar6 + 0x6c),*(undefined8 *)(iVar6 + 0x74));
    local_8._0_1_ = 0x2c;
    FUN_009adb70();
    if (local_6c != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_6c = 0;
    local_68 = 0;
    local_64 = 0;
    local_8._0_1_ = 0x2d;
    if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_48 = 0xf;
    local_4c = 0;
    local_5c[0] = local_5c[0] & 0xffffff00;
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350(&DAT_00dfdcbc,2);
    local_8._0_1_ = 0x2e;
    FUN_009a8ee0(local_40,local_2c);
    local_8._0_1_ = 0x2f;
    iVar6 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar6 + 0x6c),*(undefined8 *)(iVar6 + 0x74));
    local_8._0_1_ = 0x32;
    FUN_009adb70();
    if (local_3c != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_3c = 0;
    local_38 = 0;
    local_34 = 0;
    local_8._0_1_ = 0x33;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    local_48 = 0xf;
    local_4c = 0;
    local_5c[0] = local_5c[0] & 0xffffff00;
    FUN_00409350(&DAT_00dfdcbc,2);
    local_8._0_1_ = 0x34;
    FUN_009a8ee0(local_70,local_5c);
    local_8._0_1_ = 0x35;
    iVar6 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar6 + 0x6c),*(undefined8 *)(iVar6 + 0x74));
    local_8._0_1_ = 0x38;
    FUN_009adb70();
    if (local_6c != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_6c = 0;
    local_68 = 0;
    local_64 = 0;
    local_8._0_1_ = 0x39;
    if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_48 = 0xf;
    local_4c = 0;
    local_5c[0] = local_5c[0] & 0xffffff00;
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350(&DAT_00dfdcbc,2);
    local_8._0_1_ = 0x3a;
    FUN_009a8ee0(local_40,local_2c);
    local_8._0_1_ = 0x3b;
    iVar6 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar6 + 0x6c),*(undefined8 *)(iVar6 + 0x74));
    local_8._0_1_ = 0x3e;
    FUN_009adb70();
    if (local_3c != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_3c = 0;
    local_38 = 0;
    local_34 = 0;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    _atexit((_func_4879 *)&LAB_00c7fb70);
    local_8._0_1_ = 2;
  }
  uVar3 = FUN_005c5000();
  *param_7 = uVar3;
  FUN_009a8ee0(local_c8,local_98);
  local_8._0_1_ = 0x40;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350(&DAT_00df7e7c,3);
  local_8._0_1_ = 0x41;
  uVar5 = FUN_009888f0();
  local_8._0_1_ = 0x42;
  FUN_009a8ee0(local_40,uVar5);
  local_8._0_1_ = 0x43;
  FUN_009a9a90();
  local_8._0_1_ = 0x44;
  FUN_009adb70();
  if (local_3c != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 0x40;
  local_48 = 0xf;
  local_4c = 0;
  local_5c[0] = local_5c[0] & 0xffffff00;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("ORDER",5);
  local_8._0_1_ = 0x45;
  FUN_009a9980();
  local_8._0_1_ = 0x40;
  if (local_18 < 0x10) {
    if (param_4 != (int *)0x0) {
      local_18 = 0xf;
      local_1c = 0;
      local_2c[0] = local_2c[0] & 0xffffff00;
      FUN_00409350(&DAT_00dfe2c0,4);
      local_8._0_1_ = 0x46;
      (**(code **)(*param_4 + 0x1c))();
      local_8._0_1_ = 0x47;
      FUN_009a9980();
      if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8._0_1_ = 0x40;
      local_48 = 0xf;
      local_4c = 0;
      local_5c[0] = local_5c[0] & 0xffffff00;
      if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
    local_8._0_1_ = 0x40;
    local_a0 = 0xf;
    local_a4 = 0;
    local_b4[0] = local_b4[0] & 0xffffff00;
    FUN_00408ed0();
    local_8._0_1_ = 0x48;
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350(&DAT_00df7e80,4);
    local_8._0_1_ = 0x49;
    FUN_009a8ee0(local_40,local_b4);
    local_8._0_1_ = 0x4a;
    FUN_009a9a90();
    local_8._0_1_ = 0x4b;
    FUN_009adb70();
    FUN_004d8540();
    local_8._0_1_ = 0x48;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (param_5 != 0) {
      local_18 = 0xf;
      local_1c = 0;
      local_2c[0] = local_2c[0] & 0xffffff00;
      FUN_00409350(&DAT_00dfb880,3);
      local_8._0_1_ = 0x4c;
      FUN_00974c50();
      local_8._0_1_ = 0x4d;
      FUN_009a9980();
      if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8._0_1_ = 0x48;
      local_48 = 0xf;
      local_4c = 0;
      local_5c[0] = local_5c[0] & 0xffffff00;
      if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
    local_8._0_1_ = 0x48;
    iVar6 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar6 + 0x6c),*(undefined8 *)(iVar6 + 0x74));
    local_8._0_1_ = 0x4e;
    FUN_00408ed0();
    local_8._0_1_ = 0x48;
    uVar1 = (undefined1)local_8;
    local_8._0_1_ = 0x48;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    *(undefined4 *)(param_2 + 0x14) = 0xf;
    *(undefined4 *)(param_2 + 0x10) = 0;
    *param_2 = 0;
    if (param_6 == 0) {
      local_8._0_1_ = uVar1;
      FUN_00408ed0();
      local_78 = 1;
      if (0xf < local_a0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_a0 = 0xf;
      local_a4 = 0;
      local_b4[0] = local_b4[0] & 0xffffff00;
      local_8 = CONCAT31(local_8._1_3_,2);
      FUN_009a9740();
      if (0xf < local_84) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
    else {
      FUN_00408ed0();
      local_78 = 1;
      if (0xf < local_a0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_a0 = 0xf;
      local_a4 = 0;
      local_b4[0] = local_b4[0] & 0xffffff00;
      local_8 = CONCAT31(local_8._1_3_,2);
      FUN_009a9740();
      if (0xf < local_84) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
    ExceptionList = local_10;
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

