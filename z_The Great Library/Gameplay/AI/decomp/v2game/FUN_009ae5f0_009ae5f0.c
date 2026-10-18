// FUN_009ae5f0 @ 009ae5f0 body=[[009ae5f0, 009ae7c7] [009ae7cb, 009ae8ea] [009ae8ee, 009ae9c9] [009ae9cd, 009aeb52]]


undefined4 * FUN_009ae5f0(undefined4 *param_1)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 in_stack_00000064;
  undefined4 in_stack_00000068;
  undefined4 in_stack_00000070;
  int in_stack_00000074;
  undefined4 in_stack_0000007c;
  undefined4 in_stack_00000080;
  undefined4 in_stack_00000084;
  undefined4 in_stack_00000088;
  undefined1 in_stack_000000a8;
  undefined4 *puStack_70;
  undefined4 *puStack_6c;
  undefined1 local_68 [4];
  undefined4 uStack_64;
  int iStack_60;
  undefined4 *puStack_5c;
  undefined4 *local_58;
  undefined4 local_54;
  uint *puStack_50;
  undefined4 *puStack_4c;
  undefined4 *puStack_48;
  uint local_38 [4];
  undefined4 local_28;
  uint local_24;
  undefined4 *local_1c;
  undefined4 *local_18;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b576be;
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
  puStack_48 = param_1 + 0x45;
  local_8 = 0xd;
  uStack_7 = 0;
  puStack_4c = (undefined4 *)0x9ae6fa;
  FUN_00648af0();
  local_8 = 0xe;
  param_1[0x71] = in_stack_0000007c;
  param_1[0x70] = CVersion::vftable;
  param_1[0x72] = in_stack_00000080;
  param_1[0x73] = in_stack_00000084;
  param_1[0x74] = in_stack_00000088;
  puStack_48 = (undefined4 *)0xffffffff;
  puStack_4c = (undefined4 *)0x0;
  puStack_50 = (uint *)&stack0x0000008c;
  param_1[0x7a] = 0xf;
  param_1[0x79] = 0;
  *(undefined1 *)(param_1 + 0x75) = 0;
  local_54 = 0x9ae75b;
  FUN_00408ed0();
  local_8 = 0xf;
  puStack_48 = (undefined4 *)0x0;
  puStack_4c = (undefined4 *)&DAT_00ded94d;
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  puStack_50 = (uint *)0x9ae777;
  FUN_00409350();
  local_18 = param_1 + 0x7c;
  param_1[0x7d] = 0x18d;
  *local_18 = CVersion::vftable;
  param_1[0x7e] = 0;
  param_1[0x86] = 0xf;
  param_1[0x85] = 0;
  *(undefined1 *)(param_1 + 0x81) = 0;
  puStack_48 = (undefined4 *)0xffffffff;
  puStack_4c = (undefined4 *)0x0;
  puStack_50 = local_38;
  local_8 = 0x11;
  local_54 = 0x9ae7b0;
  FUN_00408ed0();
  param_1[0x80] = 0;
  param_1[0x7f] = 0;
  param_1[0x7e] = 0;
  if (0xf < local_24) {
    puStack_48 = (undefined4 *)local_38[0];
                    /* WARNING: Subroutine does not return */
    puStack_4c = (undefined4 *)&UNK_009ae7c8;
    FUN_00aae91b();
  }
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  *(undefined1 *)(param_1 + 0x8b) = 0;
  *(undefined1 *)((int)param_1 + 0x235) = in_stack_000000a8;
  *(undefined1 *)((int)param_1 + 0x236) = 0;
  param_1[0x93] = 0xf;
  param_1[0x92] = 0;
  *(undefined1 *)(param_1 + 0x8e) = 0;
  local_8 = 0x15;
  puStack_48 = (undefined4 *)0x9ae820;
  FUN_007589c0();
  puStack_48 = (undefined4 *)0xffffffff;
  puStack_4c = (undefined4 *)0x0;
  puStack_50 = (uint *)&stack0x00000048;
  local_54 = 0x9ae834;
  FUN_00408ed0();
  param_1[0x2b] = in_stack_00000070;
  param_1[0x2c] = 10000;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  if (in_stack_00000074 == 2) {
    puStack_48 = (undefined4 *)0x8c;
    puStack_4c = (undefined4 *)0x9ae865;
    puStack_4c = (undefined4 *)FUN_00aae9af();
    local_8 = 0x16;
    local_18 = puStack_4c;
    if (puStack_4c == (undefined4 *)0x0) {
      uVar3 = 0;
      param_1[0xb] = 4;
    }
    else {
      puStack_48 = param_1;
      puStack_50 = (uint *)0x9ae87a;
      uVar3 = FUN_00a682c0();
      param_1[0xb] = 4;
    }
  }
  else if (in_stack_00000074 == 0) {
    puStack_48 = (undefined4 *)0x0;
    puStack_4c = (undefined4 *)&DAT_00ded94d;
    local_24 = 0xf;
    local_28 = 0;
    local_38[0] = (uint)local_38[0]._1_3_ << 8;
    puStack_50 = (uint *)0x9ae8c0;
    FUN_00409350();
    local_8 = 0x17;
    puStack_48 = (undefined4 *)0x9ae8d2;
    cVar2 = FUN_00416db0();
    local_11 = cVar2 == '\0';
    local_8 = 0x15;
    if (0xf < local_24) {
      puStack_48 = (undefined4 *)local_38[0];
                    /* WARNING: Subroutine does not return */
      puStack_4c = (undefined4 *)&UNK_009ae8eb;
      FUN_00aae91b();
    }
    puStack_48 = (undefined4 *)0x10c;
    puStack_4c = (undefined4 *)0x9ae8f8;
    puVar4 = (undefined4 *)FUN_00aae9af();
    if (local_11 == '\0') {
      local_8 = 0x19;
      if (puVar4 == (undefined4 *)0x0) {
        uVar3 = 0;
      }
      else {
        puStack_48 = (undefined4 *)param_1[0x2e];
        puStack_4c = (undefined4 *)param_1[0x2d];
        puStack_50 = (uint *)param_1[0x2b];
        local_54 = in_stack_00000064;
        local_58 = param_1;
        iStack_60 = 0x9ae971;
        puStack_5c = puVar4;
        local_1c = puVar4;
        uVar3 = FUN_00a63830();
      }
    }
    else {
      local_8 = 0x18;
      local_18 = puVar4;
      if (puVar4 == (undefined4 *)0x0) {
LAB_009aeaf3:
        uVar3 = 0;
      }
      else {
        puStack_48 = (undefined4 *)param_1[0x2e];
        puStack_4c = (undefined4 *)param_1[0x2d];
        puStack_50 = (uint *)param_1[0x2b];
        local_1c = &puStack_6c;
        puStack_70 = (undefined4 *)0x9ae93a;
        FUN_00401320();
        puStack_70 = param_1;
        uVar3 = FUN_00a635c0(puVar4);
      }
    }
  }
  else {
    if (in_stack_00000074 == 1) {
      puStack_48 = (undefined4 *)0x0;
      puStack_4c = (undefined4 *)&DAT_00ded94d;
      local_24 = 0xf;
      local_28 = 0;
      local_38[0] = (uint)local_38[0]._1_3_ << 8;
      puStack_50 = (uint *)0x9ae9a2;
      FUN_00409350();
      local_8 = 0x1a;
      puStack_48 = (undefined4 *)0x9ae9b1;
      cVar2 = FUN_00416db0();
      local_11 = cVar2 == '\0';
      local_8 = 0x15;
      if (0xf < local_24) {
        puStack_48 = (undefined4 *)local_38[0];
                    /* WARNING: Subroutine does not return */
        puStack_4c = (undefined4 *)&UNK_009ae9ca;
        FUN_00aae91b();
      }
      puStack_48 = (undefined4 *)0xb0;
      puStack_4c = (undefined4 *)0x9ae9d7;
      iVar5 = FUN_00aae9af();
      local_1c = (undefined4 *)iVar5;
      if (local_11 == '\0') {
        local_8 = 0x1c;
        if (iVar5 == 0) {
          uVar3 = 0;
        }
        else {
          puStack_48 = (undefined4 *)param_1[0x2e];
          puStack_4c = (undefined4 *)param_1[0x2d];
          puStack_50 = (uint *)param_1[0x2c];
          local_54 = param_1[0x2b];
          local_58 = (undefined4 *)in_stack_00000064;
          puStack_5c = param_1;
          uStack_64 = 0x9aea5c;
          iStack_60 = iVar5;
          uVar3 = FUN_00a60bd0();
        }
      }
      else {
        local_8 = 0x1b;
        if (iVar5 == 0) {
          uVar3 = 0;
        }
        else {
          puStack_48 = (undefined4 *)param_1[0x2e];
          puStack_4c = (undefined4 *)param_1[0x2d];
          puStack_50 = (uint *)param_1[0x2c];
          local_54 = param_1[0x2b];
          local_18 = &puStack_70;
          FUN_00401320();
          uVar3 = FUN_00a60a10(iVar5,param_1);
        }
      }
      local_8 = 0x15;
      param_1[0xe] = uVar3;
      param_1[0xb] = 4;
      iVar5 = param_1[0x17];
      puStack_48 = (undefined4 *)0x10;
      puStack_4c = (undefined4 *)0x9aea78;
      puVar4 = (undefined4 *)FUN_00aae9af();
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        *puVar4 = param_1[0x1b];
        puVar4[1] = iVar5;
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
        *(undefined4 **)(iVar5 + 8) = puVar4;
      }
      goto LAB_009aeafe;
    }
    if (in_stack_00000074 != 3) goto LAB_009aeafe;
    puStack_48 = (undefined4 *)0x94;
    puStack_4c = (undefined4 *)0x9aeabb;
    puStack_70 = (undefined4 *)FUN_00aae9af();
    local_8 = 0x1d;
    if (puStack_70 == (undefined4 *)0x0) goto LAB_009aeaf3;
    puStack_4c = (undefined4 *)param_1[0x2b];
    puStack_48 = (undefined4 *)0x2710;
    local_18 = (undefined4 *)local_68;
    puStack_6c = (undefined4 *)0x9aeaea;
    local_1c = puStack_70;
    FUN_00401320();
    puStack_6c = param_1;
    uVar3 = FUN_00a68990();
  }
  local_8 = 0x15;
  param_1[0xe] = uVar3;
LAB_009aeafe:
  puStack_48 = (undefined4 *)in_stack_00000068;
  puStack_4c = (undefined4 *)in_stack_00000074;
  local_1c = (undefined4 *)local_68;
  puStack_6c = (undefined4 *)0xffffffff;
  param_1[0xc] = in_stack_00000068;
  puStack_70 = (undefined4 *)0x0;
  local_54 = 0xf;
  local_58 = (undefined4 *)0x0;
  local_68[0] = 0;
  FUN_00408ed0(&stack0x00000010);
  puStack_6c = (undefined4 *)0x9aeb36;
  FUN_009af160();
  puStack_48 = (undefined4 *)0x9aeb3e;
  FUN_00648a60();
  ExceptionList = local_10;
  return param_1;
}

