// FUN_004f9d10 @ 004f9d10 body=[[004f9d10, 004f9de6] [004f9dea, 004f9e05] [004f9e09, 004f9e92] [004f9e96, 004f9eb1] [004f9eb5, 004f9f3e] [004f9f42, 004f9f5d] [004f9f61, 004f9fea] [004f9fee, 004fa009] [004fa00d, 004fa096] [004fa09a, 004fa0b5] [004fa0b9, 004fa142] [004fa146, 004fa161] [004fa165, 004fa1ee] [004fa1f2, 004fa20d] [004fa211, 004fa29a] [004fa29e, 004fa2b9] [004fa2bd, 004fa346] [004fa34a, 004fa365] [004fa369, 004fa3fb] [004fa3ff, 004fa419] [004fa41d, 004fa44a] [004fa450, 004fa5a0] [004fa5a4, 004fa5bf] [004fa5c3, 004fa5e5] [004fa5e9, 004fa67a] [004fa67e, 004fa734] [004fa738, 004fa753] [004fa757, 004fa774] [004fa778, 004fa7cf] [004fa7d3, 004fa80f] [004fa813, 004fa830] [004fa839, 004fa873] [004fa877, 004fa897] [004fa89b, 004fa8af]]


undefined1 * FUN_004f9d10(int param_1,undefined1 *param_2,char param_3,int *param_4)

{
  char cVar1;
  undefined1 *puVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  char *pcVar7;
  char local_d4 [32];
  uint local_b4;
  undefined4 local_a4;
  uint local_a0;
  int local_98;
  int local_94;
  uint local_90 [4];
  undefined4 local_80;
  uint local_7c;
  int local_74;
  uint local_70 [4];
  undefined4 local_60;
  uint local_5c;
  uint local_54 [4];
  undefined4 local_44;
  uint local_40;
  undefined1 local_38 [4];
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 local_24 [4];
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b750ad;
  local_10 = ExceptionList;
  local_98 = 0;
  local_a0 = 0xf;
  local_a4 = 0;
  local_b4 = local_b4 & 0xffffff00;
  uStack_7 = 0;
  ExceptionList = &local_10;
  if ((DAT_013f2d38 & 1) == 0) {
    DAT_013f2d38 = DAT_013f2d38 | 1;
    local_8 = 1;
    uStack_7 = 0;
    local_40 = 0xf;
    local_44 = 0;
    local_54[0] = local_54[0] & 0xffffff00;
    ExceptionList = &local_10;
    FUN_00409350(&DAT_00dfdcbc,2);
    local_8 = 2;
    FUN_009a8ee0(local_38,local_54);
    local_8 = 3;
    iVar4 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
    local_8 = 6;
    FUN_009adb70();
    if (local_34 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_34 = 0;
    local_30 = 0;
    local_2c = 0;
    local_8 = 7;
    if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_40 = 0xf;
    local_44 = 0;
    local_54[0] = local_54[0] & 0xffffff00;
    local_5c = 0xf;
    local_60 = 0;
    local_70[0] = local_70[0] & 0xffffff00;
    FUN_00409350(&DAT_00dfdcb8,2);
    local_8 = 8;
    FUN_009a8ee0(local_24,local_70);
    local_8 = 9;
    iVar4 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
    local_8 = 0xc;
    FUN_009adb70();
    if (local_20 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    local_8 = 0xd;
    if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_5c = 0xf;
    local_60 = 0;
    local_70[0] = local_70[0] & 0xffffff00;
    local_40 = 0xf;
    local_44 = 0;
    local_54[0] = local_54[0] & 0xffffff00;
    FUN_00409350(&DAT_00dfdcb4,2);
    local_8 = 0xe;
    FUN_009a8ee0(local_38,local_54);
    local_8 = 0xf;
    iVar4 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
    local_8 = 0x12;
    FUN_009adb70();
    if (local_34 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_34 = 0;
    local_30 = 0;
    local_2c = 0;
    local_8 = 0x13;
    if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_40 = 0xf;
    local_44 = 0;
    local_54[0] = local_54[0] & 0xffffff00;
    local_5c = 0xf;
    local_60 = 0;
    local_70[0] = local_70[0] & 0xffffff00;
    FUN_00409350(&DAT_00dfdcb0,2);
    local_8 = 0x14;
    FUN_009a8ee0(local_24,local_70);
    local_8 = 0x15;
    iVar4 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
    local_8 = 0x18;
    FUN_009adb70();
    if (local_20 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    local_8 = 0x19;
    if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_5c = 0xf;
    local_60 = 0;
    local_70[0] = local_70[0] & 0xffffff00;
    local_40 = 0xf;
    local_44 = 0;
    local_54[0] = local_54[0] & 0xffffff00;
    FUN_00409350(&DAT_00dfdcbc,2);
    local_8 = 0x1a;
    FUN_009a8ee0(local_38,local_54);
    local_8 = 0x1b;
    iVar4 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
    local_8 = 0x1e;
    FUN_009adb70();
    if (local_34 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_34 = 0;
    local_30 = 0;
    local_2c = 0;
    local_8 = 0x1f;
    if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_40 = 0xf;
    local_44 = 0;
    local_54[0] = local_54[0] & 0xffffff00;
    local_5c = 0xf;
    local_60 = 0;
    local_70[0] = local_70[0] & 0xffffff00;
    FUN_00409350(&DAT_00dfdcbc,2);
    local_8 = 0x20;
    FUN_009a8ee0(local_24,local_70);
    local_8 = 0x21;
    iVar4 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
    local_8 = 0x24;
    FUN_009adb70();
    if (local_20 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    local_8 = 0x25;
    if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_5c = 0xf;
    local_60 = 0;
    local_70[0] = local_70[0] & 0xffffff00;
    local_40 = 0xf;
    local_44 = 0;
    local_54[0] = local_54[0] & 0xffffff00;
    FUN_00409350(&DAT_00dfdcbc,2);
    local_8 = 0x26;
    FUN_009a8ee0(local_38,local_54);
    local_8 = 0x27;
    iVar4 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
    local_8 = 0x2a;
    FUN_009adb70();
    if (local_34 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_34 = 0;
    local_30 = 0;
    local_2c = 0;
    local_8 = 0x2b;
    if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_40 = 0xf;
    local_44 = 0;
    local_54[0] = local_54[0] & 0xffffff00;
    local_5c = 0xf;
    local_60 = 0;
    local_70[0] = local_70[0] & 0xffffff00;
    FUN_00409350(&DAT_00dfdcbc,2);
    local_8 = 0x2c;
    FUN_009a8ee0(local_24,local_70);
    local_8 = 0x2d;
    iVar4 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
    local_8 = 0x30;
    FUN_009adb70();
    if (local_20 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    local_8 = 0x31;
    if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_5c = 0xf;
    local_60 = 0;
    local_70[0] = local_70[0] & 0xffffff00;
    local_40 = 0xf;
    local_44 = 0;
    local_54[0] = local_54[0] & 0xffffff00;
    FUN_00409350(&DAT_00dfdcbc,2);
    local_8 = 0x32;
    FUN_009a8ee0(local_38,local_54);
    local_8 = 0x33;
    iVar4 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
    local_8 = 0x36;
    FUN_009adb70();
    if (local_34 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_34 = 0;
    local_30 = 0;
    local_2c = 0;
    local_8 = 0x37;
    if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_40 = 0xf;
    local_44 = 0;
    local_54[0] = local_54[0] & 0xffffff00;
    local_7c = 0xf;
    local_80 = 0;
    local_90[0] = local_90[0] & 0xffffff00;
    FUN_00409350(&DAT_00dfdcbc,2);
    local_8 = 0x38;
    FUN_009a8ee0(local_24,local_90);
    local_8 = 0x39;
    iVar4 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
    local_8 = 0x3c;
    FUN_009adb70();
    if (local_20 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    if (0xf < local_7c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    _atexit((_func_4879 *)&LAB_00c7fb50);
  }
  local_98 = param_1 + 0x110;
  local_74 = 1;
  do {
    iVar4 = local_74;
    local_8 = 0;
    param_1 = local_74 % 10;
    if (local_74 - 0xbU < 3) {
      param_1 = 0;
    }
    local_40 = 0xf;
    local_44 = 0;
    local_54[0] = local_54[0] & 0xffffff00;
    FUN_00409350("ARMY_NAME",9);
    local_8 = 0x3e;
    if (param_3 != '\0') {
      FUN_00409350("NAVY_NAME",9);
    }
    FUN_009a8ee0(local_38,local_54);
    local_8 = 0x3f;
    local_7c = 0xf;
    local_80 = 0;
    local_90[0] = local_90[0] & 0xffffff00;
    FUN_00409350(&DAT_00df7e7c,3);
    local_5c = 0xf;
    local_60 = 0;
    local_70[0] = local_70[0] & 0xffffff00;
    local_8 = 0x41;
    pcVar5 = __itoa(iVar4,local_d4,10);
    pcVar7 = pcVar5;
    do {
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    FUN_00409350(pcVar5,(int)pcVar7 - (int)(pcVar5 + 1));
    local_8 = 0x42;
    FUN_009a8ee0(local_24,local_70);
    local_8 = 0x43;
    local_94 = FUN_00aae9af();
    local_8 = 0x44;
    if (local_94 == 0) {
      local_94 = 0;
    }
    else {
      local_94 = FUN_009a9f20(local_94,local_38);
    }
    local_8 = 0x43;
    FUN_009e6810(local_90,&local_94);
    local_8 = 0x45;
    FUN_009adb70();
    if (local_20 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = 0x3f;
    local_5c = 0xf;
    local_60 = 0;
    local_70[0] = local_70[0] & 0xffffff00;
    if (0xf < local_7c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_7c = 0xf;
    local_80 = 0;
    local_90[0] = local_90[0] & 0xffffff00;
    FUN_00409350("ORDER",5);
    local_8 = 0x46;
    local_94 = FUN_00aae9af();
    local_8 = 0x47;
    if (local_94 == 0) {
      param_1 = 0;
    }
    else {
      param_1 = FUN_009a9ce0();
    }
    local_8 = 0x46;
    FUN_009e6810(local_90,&param_1);
    piVar3 = param_4;
    local_8 = 0x3f;
    if (0xf < local_7c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (param_4 != (int *)0x0) {
      local_7c = 0xf;
      local_80 = 0;
      local_90[0] = local_90[0] & 0xffffff00;
      FUN_00409350(&DAT_00dfe2c0,4);
      local_8 = 0x48;
      uVar6 = (**(code **)(*piVar3 + 0x1c))();
      local_8 = 0x49;
      FUN_009a8ee0(local_24,uVar6);
      local_8 = 0x4a;
      param_1 = FUN_00aae9af();
      local_8 = 0x4b;
      if (param_1 == 0) {
        param_1 = 0;
      }
      else {
        param_1 = FUN_009a9f20(param_1,local_38);
      }
      local_8 = 0x4a;
      FUN_009e6810(local_90,&param_1);
      local_8 = 0x4c;
      FUN_009adb70();
      if (local_20 != 0) {
        FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_20 = 0;
      local_1c = 0;
      local_18 = 0;
      if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8 = 0x3f;
      local_5c = 0xf;
      local_60 = 0;
      local_70[0] = local_70[0] & 0xffffff00;
      if (0xf < local_7c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
    local_8 = 0x3f;
    iVar4 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
    local_8 = 0x4d;
    FUN_00408ed0();
    local_8 = 0x3f;
    if (0xf < local_7c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    iVar4 = FUN_00a727a0();
    puVar2 = param_2;
    if (iVar4 == 0) {
      *(undefined4 *)(param_2 + 0x14) = 0xf;
      *(undefined4 *)(param_2 + 0x10) = 0;
      *param_2 = 0;
      FUN_00408ed0();
      _local_8 = CONCAT31(uStack_7,0x3e);
      FUN_009a9740();
      if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_40 = 0xf;
      local_44 = 0;
      local_54[0] = local_54[0] & 0xffffff00;
      if (local_a0 < 0x10) {
        ExceptionList = local_10;
        return puVar2;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_74 = local_74 + 1;
    local_8 = 0x4e;
    FUN_009adb70();
    if (local_34 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = 0;
    local_34 = 0;
    local_30 = 0;
    local_2c = 0;
  } while (local_40 < 0x10);
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

