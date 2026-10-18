// FUN_009aeb90 @ 009aeb90 body=[[009aeb90, 009aed53] [009aed57, 009aeef0] [009aeef4, 009aef17] [009aef1b, 009aef62] [009aef66, 009aef83] [009aef87, 009aefa5] [009aefa9, 009af151]]


undefined4 * FUN_009aeb90(undefined4 *param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 in_stack_00000018;
  uint in_stack_0000001c;
  uint in_stack_00000024;
  undefined4 in_stack_00000034;
  uint in_stack_00000038;
  int in_stack_00000040;
  undefined4 in_stack_00000044;
  undefined4 *in_stack_00000048;
  undefined ***in_stack_0000004c;
  undefined4 in_stack_00000050;
  undefined1 uStack00000054;
  undefined4 in_stack_0000005c;
  undefined4 in_stack_00000060;
  undefined4 in_stack_00000064;
  undefined4 in_stack_00000068;
  undefined4 in_stack_0000006c;
  uint in_stack_00000080;
  undefined **local_134;
  undefined4 *local_130;
  undefined4 *local_12c;
  undefined4 *local_128;
  uint local_124;
  undefined1 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  uint *local_10c;
  char *pcStack_108;
  undefined4 *puStack_104;
  undefined1 local_f0 [164];
  undefined4 *local_4c;
  uint local_48 [4];
  undefined4 local_38;
  uint local_34;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b5755e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  DAT_013f08f0 = DAT_013f08f0 + 1;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR_FUN_00e390d0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x29] = 0xf;
  param_1[0x28] = 0;
  *(undefined1 *)(param_1 + 0x24) = 0;
  param_1[0x34] = 0xf;
  param_1[0x33] = 0;
  *(undefined1 *)(param_1 + 0x2f) = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  *(undefined1 *)(param_1 + 0x39) = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  *(undefined1 *)(param_1 + 0x3d) = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  *(undefined1 *)(param_1 + 0x42) = 0;
  puStack_104 = param_1 + 0x45;
  local_8 = 0xf;
  uStack_7 = 0;
  pcStack_108 = (char *)0x9aec9a;
  FUN_009f83a0();
  local_8 = 0x10;
  param_1[0x71] = in_stack_0000005c;
  param_1[0x70] = CVersion::vftable;
  param_1[0x72] = in_stack_00000060;
  param_1[0x73] = in_stack_00000064;
  param_1[0x74] = in_stack_00000068;
  puStack_104 = (undefined4 *)0xffffffff;
  pcStack_108 = (char *)0x0;
  local_10c = &stack0x0000006c;
  param_1[0x7a] = 0xf;
  param_1[0x79] = 0;
  *(undefined1 *)(param_1 + 0x75) = 0;
  local_110 = 0x9aece7;
  FUN_00408ed0();
  local_8 = 0x11;
  puStack_104 = (undefined4 *)0x0;
  pcStack_108 = "";
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  local_10c = (uint *)0x9aed03;
  FUN_00409350();
  local_4c = param_1 + 0x7c;
  param_1[0x7d] = 0x18d;
  *local_4c = CVersion::vftable;
  param_1[0x7e] = 0;
  param_1[0x86] = 0xf;
  param_1[0x85] = 0;
  *(undefined1 *)(param_1 + 0x81) = 0;
  puStack_104 = (undefined4 *)0xffffffff;
  pcStack_108 = (char *)0x0;
  local_10c = local_2c;
  local_8 = 0x13;
  local_110 = 0x9aed3c;
  FUN_00408ed0();
  param_1[0x80] = 0;
  param_1[0x7f] = 0;
  param_1[0x7e] = 0;
  if (0xf < local_18) {
    puStack_104 = (undefined4 *)local_2c[0];
                    /* WARNING: Subroutine does not return */
    pcStack_108 = &UNK_009aed54;
    FUN_00aae91b();
  }
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  *(undefined1 *)(param_1 + 0x8b) = 0;
  *(undefined1 *)((int)param_1 + 0x235) = uStack00000054;
  *(undefined1 *)((int)param_1 + 0x236) = 0;
  param_1[0x93] = 0xf;
  param_1[0x92] = 0;
  *(undefined1 *)(param_1 + 0x8e) = 0;
  puStack_104 = (undefined4 *)0xffffffff;
  pcStack_108 = (char *)0x0;
  local_10c = &stack0x00000024;
  local_8 = 0x17;
  local_110 = 0x9aedad;
  FUN_00408ed0();
  uVar2 = in_stack_00000050;
  param_1[0x2d] = in_stack_0000004c;
  param_1[0x2b] = in_stack_00000044;
  param_1[0x2c] = in_stack_00000048;
  param_1[0x2e] = in_stack_00000050;
  if (in_stack_00000040 == 2) {
    puStack_104 = (undefined4 *)0x8c;
    pcStack_108 = (char *)0x9aede7;
    _uStack00000054 = (undefined **)FUN_00aae9af();
    local_8 = 0x18;
    if (_uStack00000054 == (undefined **)0x0) {
      uVar2 = 0;
    }
    else {
      puStack_104 = param_1;
      local_10c = (uint *)0x9aedfc;
      pcStack_108 = (char *)_uStack00000054;
      uVar2 = FUN_00a682c0();
    }
    param_1[0xe] = uVar2;
    param_1[0xb] = 4;
  }
  else {
    if (in_stack_00000040 == 1) {
      puStack_104 = (undefined4 *)0xb0;
      pcStack_108 = (char *)0x9aefd1;
      _uStack00000054 = (undefined **)FUN_00aae9af();
      local_8 = 0x19;
      if (_uStack00000054 == (undefined **)0x0) {
        iVar3 = 0;
      }
      else {
        local_110 = param_1[0x2b];
        puStack_104 = (undefined4 *)uVar2;
        pcStack_108 = (char *)in_stack_0000004c;
        local_10c = in_stack_00000048;
        in_stack_0000004c = (undefined ***)&local_12c;
        local_130 = (undefined4 *)0xffffffff;
        local_134 = (undefined **)0x0;
        local_118 = 0xf;
        local_11c = 0;
        local_12c = (undefined4 *)((uint)local_12c & 0xffffff00);
        FUN_00408ed0(&stack0x00000024);
        local_130 = param_1;
        local_134 = _uStack00000054;
        iVar3 = FUN_00a60a10();
      }
      local_8 = 0x17;
      param_1[0xe] = iVar3;
      if (iVar3 != 0) {
        param_1[0xb] = 4;
        iVar3 = param_1[0x17];
        puStack_104 = (undefined4 *)0x10;
        pcStack_108 = (char *)0x9af03a;
        puVar4 = (undefined4 *)FUN_00aae9af();
        if (puVar4 == (undefined4 *)0x0) {
          puVar4 = (undefined4 *)0x0;
        }
        else {
          *puVar4 = param_1[0x1b];
          puVar4[1] = iVar3;
          puVar4[2] = 0;
          *(undefined1 *)(puVar4 + 3) = 0;
        }
        iVar1 = param_1[0x18];
        param_1[0x17] = puVar4;
        param_1[0x18] = iVar1 + 1;
        if (iVar1 == 0) {
          param_1[0x16] = puVar4;
        }
        else {
          *(undefined4 **)(iVar3 + 8) = puVar4;
        }
        puStack_104 = (undefined4 *)0x9af075;
        FUN_009ae5d0();
      }
      param_1[0xc] = 3;
      _uStack00000054 = (undefined **)0x3;
      goto LAB_009aee15;
    }
    if (in_stack_00000040 == 0) {
      puStack_104 = (undefined4 *)0x10c;
      pcStack_108 = (char *)0x9af093;
      _uStack00000054 = (undefined **)FUN_00aae9af();
      local_8 = 0x1a;
      if (_uStack00000054 == (undefined **)0x0) {
        local_8 = 0x17;
        param_1[0xe] = 0;
        _uStack00000054 = (undefined **)0x2;
      }
      else {
        local_10c = (uint *)param_1[0x2b];
        puStack_104 = (undefined4 *)uVar2;
        pcStack_108 = (char *)in_stack_0000004c;
        in_stack_0000004c = (undefined ***)&local_128;
        local_12c = (undefined4 *)0x9af0bd;
        FUN_00401320();
        local_12c = param_1;
        local_130 = _uStack00000054;
        local_134 = (undefined **)0x9af0c7;
        uVar2 = FUN_00a635c0();
        local_8 = 0x17;
        param_1[0xe] = uVar2;
        _uStack00000054 = (undefined **)0x2;
      }
      goto LAB_009aee15;
    }
    puStack_104 = (undefined4 *)0x94;
    param_1[0xc] = 4;
    pcStack_108 = (char *)0x9af100;
    _uStack00000054 = (undefined **)FUN_00aae9af();
    local_8 = 0x1b;
    if (_uStack00000054 == (undefined **)0x0) {
      uVar2 = 0;
    }
    else {
      puStack_104 = (undefined4 *)0x2710;
      pcStack_108 = (char *)in_stack_00000044;
      in_stack_0000004c = (undefined ***)&local_124;
      local_128 = (undefined4 *)0x9af127;
      FUN_00401320();
      local_128 = param_1;
      local_12c = _uStack00000054;
      local_130 = (undefined4 *)0x9af131;
      uVar2 = FUN_00a68990();
    }
    local_8 = 0x17;
    param_1[0xe] = uVar2;
    if (in_stack_00000040 == 3) {
      _uStack00000054 = (undefined **)0x4;
      goto LAB_009aee15;
    }
  }
  local_8 = 0x17;
  _uStack00000054 = (undefined **)0x5;
LAB_009aee15:
  puStack_104 = (undefined4 *)0x0;
  pcStack_108 = "";
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  local_10c = (uint *)0x9aee32;
  FUN_00409350();
  local_8 = 0x1c;
  puStack_104 = (undefined4 *)0xc;
  pcStack_108 = "Default Game";
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  local_10c = (uint *)0x9aee4f;
  FUN_00409350();
  puStack_104 = (undefined4 *)0x0;
  in_stack_0000004c = &local_134;
  local_130 = (undefined4 *)0x18d;
  local_134 = CVersion::vftable;
  local_12c = (undefined4 *)0x0;
  local_10c = (uint *)0xf;
  local_110 = 0;
  local_120 = 0;
  local_8 = 0x1e;
  FUN_00408ed0(local_48,0,0xffffffff);
  local_124 = 0;
  local_128 = (undefined4 *)0x0;
  local_12c = (undefined4 *)0x0;
  local_8 = 0x1d;
  FUN_009f8180(local_f0,param_1 + 0x2f,&stack0x00000024,param_1[0x2b],local_2c,0,0,in_stack_00000040
               ,1);
  local_8 = 0x1f;
  puStack_104 = (undefined4 *)0x9aeed3;
  FUN_007589c0();
  puStack_104 = (undefined4 *)0x9aeede;
  FUN_00648a60();
  if (0xf < local_18) {
    puStack_104 = (undefined4 *)local_2c[0];
                    /* WARNING: Subroutine does not return */
    pcStack_108 = &UNK_009aeef1;
    FUN_00aae91b();
  }
  _local_8 = CONCAT31(uStack_7,0x17);
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  if (0xf < local_34) {
    puStack_104 = (undefined4 *)local_48[0];
                    /* WARNING: Subroutine does not return */
    pcStack_108 = &UNK_009aef18;
    FUN_00aae91b();
  }
  puStack_104 = _uStack00000054;
  pcStack_108 = (char *)in_stack_00000040;
  _uStack00000054 = (undefined **)&local_124;
  local_128 = (undefined4 *)0xffffffff;
  local_12c = (undefined4 *)0x0;
  local_130 = &param_2;
  local_110 = 0xf;
  local_114 = 0;
  local_124 = local_124 & 0xffffff00;
  local_134 = (undefined **)0x9aef4c;
  FUN_00408ed0();
  local_128 = (undefined4 *)0x9aef55;
  FUN_009af160();
  if (0xf < in_stack_0000001c) {
    puStack_104 = (undefined4 *)param_2;
                    /* WARNING: Subroutine does not return */
    pcStack_108 = &UNK_009aef63;
    FUN_00aae91b();
  }
  in_stack_0000001c = 0xf;
  in_stack_00000018 = 0;
  param_2 = param_2 & 0xffffff00;
  if (0xf < in_stack_00000038) {
    puStack_104 = (undefined4 *)in_stack_00000024;
                    /* WARNING: Subroutine does not return */
    pcStack_108 = &UNK_009aef84;
    FUN_00aae91b();
  }
  in_stack_00000038 = 0xf;
  in_stack_00000034 = 0;
  in_stack_00000024 = in_stack_00000024 & 0xffffff00;
  if (0xf < in_stack_00000080) {
    puStack_104 = (undefined4 *)in_stack_0000006c;
                    /* WARNING: Subroutine does not return */
    pcStack_108 = &UNK_009aefa6;
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_1;
}

