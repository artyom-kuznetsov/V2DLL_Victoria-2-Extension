// FUN_0088f160 @ 0088f160 body=[[0088f160, 0088f1ff] [0088f203, 0088f2c0] [0088f2c4, 0088f2e2] [0088f2e6, 0088f333] [0088f337, 0088f34c] [0088f350, 0088f3ee] [0088f3f2, 0088f4ce] [0088f4d2, 0088f4f6] [0088f4fa, 0088f596] [0088f59a, 0088f6d5] [0088f6d9, 0088f709] [0088f70d, 0088f72e] [0088f732, 0088f757] [0088f75b, 0088f79d] [0088f7a1, 0088f7bc] [0088f7c0, 0088f7ec] [0088f7f0, 0088f7fd] [0088f801, 0088f81c] [0088f820, 0088f837] [0088f83b, 0088f850]]


undefined1 * FUN_0088f160(undefined1 *param_1,undefined4 param_2)

{
  char cVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int in_ECX;
  uint in_stack_00000020;
  undefined1 auStack_114 [12];
  undefined4 uStack_108;
  undefined4 local_104;
  uint local_e8 [4];
  int local_d8;
  uint local_d4;
  uint local_cc;
  undefined4 local_bc;
  uint local_b8;
  int *local_b0;
  undefined4 local_ac;
  int local_a8;
  uint local_a4 [4];
  undefined4 local_94;
  uint local_90;
  undefined1 *local_84;
  undefined1 *local_80;
  undefined4 local_7c;
  char local_74 [4];
  uint local_70 [4];
  undefined4 local_60;
  uint local_5c;
  uint local_54;
  undefined1 local_4c [4];
  undefined1 *local_48;
  undefined1 *local_44;
  uint local_40;
  int local_38;
  uint local_34;
  int local_28;
  undefined4 local_24;
  uint local_20;
  undefined4 *local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b69216;
  local_10 = ExceptionList;
  local_8 = 1;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  local_ac = 1;
  local_b8 = 0xf;
  local_bc = 0;
  local_cc = local_cc & 0xffffff00;
  _local_104 = CONCAT44(0x88f1d0,local_104);
  local_38 = in_ECX;
  FUN_00409350();
  local_8._0_1_ = 2;
  _local_104 = CONCAT44(0x88f1e7,local_104);
  FUN_009a8ee0();
  local_8._0_1_ = 4;
  if (0xf < local_b8) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_b8 = 0xf;
  local_bc = 0;
  local_cc = local_cc & 0xffffff00;
  local_20 = 0xf;
  local_24 = 0;
  local_34 = local_34 & 0xffffff00;
  _local_104 = CONCAT44(0x88f22d,local_104);
  FUN_00409350();
  local_40 = 0xf;
  local_44 = (undefined1 *)0x0;
  local_54 = local_54 & 0xffffff00;
  local_8._0_1_ = 6;
  _local_104 = CONCAT44(*(int *)(in_ECX + 0x2c),0x88f249);
  pcVar3 = __itoa(*(int *)(in_ECX + 0x2c),local_74,10);
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  _local_104 = CONCAT44(0x88f266,local_104);
  FUN_00409350();
  local_8._0_1_ = 7;
  local_14 = (undefined4 *)FUN_00aae9af();
  local_8._0_1_ = 8;
  if (local_14 == (undefined4 *)0x0) {
    local_18 = (undefined4 *)0x0;
  }
  else {
    _local_104 = CONCAT44(local_14,0x88f293);
    local_18 = (undefined4 *)FUN_009a9ce0();
  }
  local_8._0_1_ = 7;
  _local_104 = CONCAT44(0x88f2ae,local_104);
  FUN_009e6810();
  if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 4;
  local_40 = 0xf;
  local_44 = (undefined1 *)0x0;
  local_54 = local_54 & 0xffffff00;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  iVar4 = FUN_00475500();
  _local_104 = *(undefined8 *)(iVar4 + 0x6c);
  uStack_108 = 0x88f311;
  uVar5 = FUN_009a9880();
  local_8._0_1_ = 9;
  _local_104 = CONCAT44(uVar5,0x88f321);
  FUN_00448aa0();
  local_8._0_1_ = 4;
  if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_18 = *(undefined4 **)(local_38 + 8);
  piVar2 = *(int **)(local_38 + 0x24);
  while( true ) {
    if (local_18 == (undefined4 *)0x0) {
      local_8 = CONCAT31(local_8._1_3_,0x1c);
      FUN_009adb70();
      if (local_84 == (undefined1 *)0x0) {
        local_84 = (undefined1 *)0x0;
        local_80 = (undefined1 *)0x0;
        local_7c = 0;
        if (0xf < in_stack_00000020) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        ExceptionList = local_10;
        return param_1;
      }
      while( true ) {
        if (local_84 == local_80) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        if (0xf < *(uint *)(local_84 + 0x14)) break;
        *(undefined4 *)(local_84 + 0x14) = 0xf;
        *(undefined4 *)(local_84 + 0x10) = 0;
        *local_84 = 0;
        local_84 = local_84 + 0x20;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 4;
    local_b0 = (int *)piVar2[2];
    _local_104 = (longlong)(*piVar2 * 1000);
    uStack_108 = 0x88f381;
    _local_104 = __allmul();
    uStack_108 = 0x88f38e;
    iVar4 = __alldiv();
    _local_104 = (longlong)iVar4;
    uStack_108 = 0x88f39c;
    _local_104 = __allmul();
    uStack_108 = 0x88f3ac;
    __alldiv();
    local_20 = 0xf;
    local_24 = 0;
    local_34 = local_34 & 0xffffff00;
    _local_104 = CONCAT44(0x88f3cb,local_104);
    FUN_00409350();
    local_8._0_1_ = 10;
    _local_104 = CONCAT44(0x88f3dc,local_104);
    FUN_009a8ee0();
    local_8._0_1_ = 0xc;
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_20 = 0xf;
    local_24 = 0;
    local_34 = local_34 & 0xffffff00;
    local_90 = 0xf;
    local_94 = 0;
    local_a4[0] = local_a4[0] & 0xffffff00;
    _local_104 = CONCAT44(0x88f41f,local_104);
    FUN_00409350();
    local_14 = (undefined4 *)&stack0xffffff04;
    local_8._0_1_ = 0xd;
    _local_104 = CONCAT44(local_70,0x88f435);
    uVar5 = FUN_00988a50();
    local_8._0_1_ = 0xe;
    puVar6 = (undefined4 *)FUN_00aae9af();
    local_8._0_1_ = 0xf;
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      *puVar6 = &PTR_FUN_00e38ecc;
      puVar6[1] = local_4c;
      puVar6[7] = 0xf;
      puVar6[6] = 0;
      *(undefined1 *)(puVar6 + 2) = 0;
      _local_104 = CONCAT44(local_a4,0x88f47c);
      local_14 = puVar6;
      FUN_00408ed0();
      local_8._0_1_ = 0x10;
      *puVar6 = &PTR_FUN_00e38ef4;
      puVar6[0xe] = 0xf;
      puVar6[0xd] = 0;
      *(undefined1 *)(puVar6 + 9) = 0;
      _local_104 = CONCAT44(uVar5,0x88f49e);
      FUN_00408ed0();
    }
    local_8._0_1_ = 0xe;
    _local_104 = CONCAT44(0x88f4bc,local_104);
    local_14 = puVar6;
    FUN_009e6810();
    if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 0xc;
    local_5c = 0xf;
    local_60 = 0;
    local_70[0] = local_70[0] & 0xffffff00;
    if (0xf < local_90) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    puVar6 = DAT_0125b5e0;
    if (DAT_0125b5e0 == (undefined4 *)0x0) {
      local_14 = (undefined4 *)FUN_00aae9af();
      local_8._0_1_ = 0x11;
      if (local_14 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        puVar6 = (undefined4 *)FUN_00475150();
      }
      local_8._0_1_ = 0x12;
      local_14 = (undefined4 *)0x0;
      if ((puVar6 != DAT_0125b5e0) && (DAT_0125b5e0 != (undefined4 *)0x0)) {
        (**(code **)*DAT_0125b5e0)();
      }
    }
    DAT_0125b5e0 = puVar6;
    local_8._0_1_ = 0xc;
    _local_104 = *(longlong *)(DAT_0125b5e0 + 0x1b);
    uStack_108 = 0x88f572;
    uVar5 = FUN_009a9880();
    local_8._0_1_ = 0x13;
    _local_104 = CONCAT44(uVar5,0x88f584);
    FUN_00448aa0();
    local_8._0_1_ = 0xc;
    if (0xf < local_5c) break;
    piVar2 = (int *)*local_18;
    local_14 = (undefined4 *)auStack_114;
    _local_104 = 0xf00000000;
    auStack_114[0] = 0;
    FUN_00409350(&DAT_00ded94d,0);
    (**(code **)(*piVar2 + 0x20))(local_e8,param_2,0);
    local_8._0_1_ = 0x14;
    if (local_d8 < 2) {
      local_90 = 0xf;
      local_94 = 0;
      local_a4[0] = local_a4[0] & 0xffffff00;
      _local_104 = CONCAT44(0x88f61f,local_104);
      FUN_00409350();
      local_8._0_1_ = 0x15;
      _local_104 = CONCAT44(0x88f633,local_104);
      local_14 = (undefined4 *)FUN_009a8ee0();
      local_8._0_1_ = 0x16;
      puVar6 = DAT_0125b5e0;
      if (DAT_0125b5e0 == (undefined4 *)0x0) {
        local_a8 = FUN_00aae9af();
        local_8._0_1_ = 0x17;
        if (local_a8 == 0) {
          puVar6 = (undefined4 *)0x0;
        }
        else {
          puVar6 = (undefined4 *)FUN_00475150();
        }
        local_8._0_1_ = 0x18;
        local_a8 = 0;
        if ((puVar6 != DAT_0125b5e0) && (DAT_0125b5e0 != (undefined4 *)0x0)) {
          (**(code **)*DAT_0125b5e0)();
        }
      }
      DAT_0125b5e0 = puVar6;
      local_8._0_1_ = 0x16;
      _local_104 = *(longlong *)(DAT_0125b5e0 + 0x1b);
      uStack_108 = 0x88f6b8;
      uVar5 = FUN_009a9880();
      local_8._0_1_ = 0x19;
      _local_104 = CONCAT44(uVar5,0x88f6c7);
      FUN_00448aa0();
      if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_5c = 0xf;
      local_60 = 0;
      local_70[0] = local_70[0] & 0xffffff00;
      local_8._0_1_ = 0x1a;
      FUN_009adb70();
      if (local_28 != 0) {
        FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8._0_1_ = 0x14;
      local_28 = 0;
      local_24 = 0;
      local_20 = 0;
      if (0xf < local_90) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
    else {
      _local_104 = CONCAT44(local_e8,0x88f5f2);
      FUN_00448aa0();
    }
    _local_104 = CONCAT44(0x88f743,local_104);
    FUN_00448740();
    if (0xf < local_d4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_d4 = 0xf;
    local_d8 = 0;
    local_e8[0] = local_e8[0] & 0xffffff00;
    local_8._0_1_ = 0x1b;
    FUN_009adb70();
    local_8._0_1_ = 4;
    if (local_48 != (undefined1 *)0x0) {
      while( true ) {
        if (local_48 == local_44) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        if (0xf < *(uint *)(local_48 + 0x14)) break;
        *(undefined4 *)(local_48 + 0x14) = 0xf;
        *(undefined4 *)(local_48 + 0x10) = 0;
        *local_48 = 0;
        local_48 = local_48 + 0x20;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_18 = (undefined4 *)local_18[2];
    piVar2 = local_b0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

