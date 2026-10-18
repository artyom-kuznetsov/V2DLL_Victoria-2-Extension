// FUN_009e6d40 @ 009e6d40 body=[[009e6d40, 009e70fe] [009e7102, 009e711f] [009e7123, 009e713e] [009e7142, 009e7160] [009e7164, 009e718a] [009e7194, 009e71a8]]


undefined4 * FUN_009e6d40(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 in_stack_00000020;
  uint in_stack_00000024;
  uint in_stack_0000002c;
  undefined4 in_stack_0000003c;
  uint in_stack_00000040;
  undefined2 uStack00000048;
  undefined2 uStack0000004c;
  undefined4 in_stack_00000050;
  uint in_stack_00000054;
  undefined4 in_stack_00000064;
  uint in_stack_00000068;
  uint in_stack_00000070;
  undefined4 in_stack_00000080;
  uint in_stack_00000084;
  undefined4 in_stack_0000008c;
  undefined1 *in_stack_00000090;
  undefined1 uStack00000094;
  undefined4 in_stack_00000098;
  undefined4 in_stack_0000009c;
  undefined4 in_stack_000000a0;
  undefined1 *in_stack_000000a4;
  int in_stack_000000ac;
  undefined4 in_stack_000000b4;
  undefined4 in_stack_000000b8;
  undefined1 local_b4 [12];
  undefined4 uStack_a8;
  undefined4 *local_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined1 local_98 [12];
  undefined4 uStack_8c;
  undefined4 *local_88;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined1 local_7c [16];
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 *puStack_58;
  undefined4 local_54;
  undefined4 *local_50;
  undefined4 *local_4c;
  undefined4 *local_48;
  undefined1 local_38 [28];
  undefined **local_1c;
  undefined4 *local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b4ee5b;
  local_10 = ExceptionList;
  local_48 = (undefined4 *)param_3;
  local_4c = param_1;
  local_8 = 4;
  local_50 = (undefined4 *)0x9e6d72;
  ExceptionList = &local_10;
  FUN_009a6a30();
  param_1[0x15] = param_2;
  *param_1 = &PTR_FUN_00e3c258;
  param_1[0x1d] = 0xf;
  param_1[0x1c] = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  puVar1 = param_1 + 0x1f;
  param_1[0x24] = 0xf;
  param_1[0x23] = 0;
  *(undefined1 *)puVar1 = 0;
  param_1[0x2b] = 0xf;
  param_1[0x2a] = 0;
  *(undefined1 *)(param_1 + 0x26) = 0;
  param_1[0x34] = in_stack_00000090;
  param_1[0x36] = in_stack_00000098;
  param_1[0x37] = in_stack_000000b4;
  param_1[0x33] = 0;
  param_1[0x38] = in_stack_000000b8;
  param_1[0x3e] = 0xf;
  param_1[0x3d] = 0;
  *(undefined1 *)(param_1 + 0x39) = 0;
  uVar2 = DAT_00f092fc;
  local_8._0_1_ = 9;
  param_1[0x41] = 0x18d;
  param_1[0x42] = uVar2;
  param_1[0x43] = uVar2;
  param_1[0x44] = uVar2;
  param_1[0x45] = uVar2;
  param_1[0x40] = CColor::vftable;
  *(undefined1 *)(param_1 + 0x46) = 1;
  local_48 = (undefined4 *)0xffffffff;
  *(undefined1 *)(param_1 + 0x4d) = 1;
  local_4c = (undefined4 *)0x0;
  local_50 = &stack0x00000070;
  param_1[0x48] = 0x18d;
  param_1[0x47] = CColor::vftable;
  param_1[0x49] = uVar2;
  param_1[0x4a] = uVar2;
  param_1[0x4b] = uVar2;
  param_1[0x4c] = uVar2;
  *(undefined1 *)(param_1 + 0x4f) = 0;
  local_54 = 0x9e6e92;
  FUN_00408ed0();
  local_48 = (undefined4 *)0xffffffff;
  local_4c = (undefined4 *)0x0;
  local_50 = &stack0x0000002c;
  local_54 = 0x9e6ea1;
  FUN_00408ed0();
  local_48 = (undefined4 *)0xffffffff;
  local_4c = (undefined4 *)0x0;
  local_50 = &param_4;
  local_54 = 0x9e6eb4;
  FUN_00408ed0();
  uVar2 = in_stack_0000008c;
  *(undefined2 *)(param_1 + 0x2d) = uStack00000048;
  *(undefined2 *)((int)param_1 + 0xb6) = uStack0000004c;
  local_48 = (undefined4 *)0xffffffff;
  param_1[0x2f] = in_stack_000000a0;
  param_1[0x2e] = in_stack_0000009c;
  local_4c = (undefined4 *)0x0;
  local_50 = &stack0x00000054;
  *(undefined1 *)(param_1 + 0x35) = uStack00000094;
  param_1[0x17] = in_stack_0000008c;
  *(undefined1 *)(param_1 + 0x32) = 0;
  param_1[0x31] = in_stack_00000050;
  local_54 = 0x9e6f1a;
  FUN_00408ed0();
  local_48 = (undefined4 *)in_stack_000000a0;
  local_4c = (undefined4 *)in_stack_0000009c;
  param_1[0x30] = in_stack_00000050;
  local_50 = _uStack00000094;
  local_54 = in_stack_00000090;
  puStack_58 = (undefined1 *)uVar2;
  uStack_5c = _uStack0000004c;
  uStack_60 = _uStack00000048;
  _uStack00000094 = (undefined4 *)local_7c;
  uStack_80 = 0xffffffff;
  local_84 = 0;
  local_88 = &param_4;
  local_68 = 0xf;
  local_6c = 0;
  local_7c[0] = 0;
  uStack_8c = 0x9e6f72;
  FUN_00408ed0();
  in_stack_00000090 = local_98;
  local_8._0_1_ = 10;
  uStack_9c = 0xffffffff;
  local_a0 = 0;
  local_a4 = &stack0x0000002c;
  local_84 = 0xf;
  local_88 = (undefined4 *)0x0;
  local_98[0] = 0;
  uStack_a8 = 0x9e6f9b;
  FUN_00408ed0();
  _uStack0000004c = local_b4;
  local_8._0_1_ = 0xb;
  local_a0 = 0xf;
  local_a4 = (undefined4 *)0x0;
  local_b4[0] = 0;
  FUN_00408ed0(&stack0x00000054,0,0xffffffff);
  local_8 = CONCAT31(local_8._1_3_,9);
  local_14 = FUN_009966a0(&stack0x00000070);
  param_1[0x16] = local_14;
  local_18 = param_1;
  local_1c = &PTR_FUN_00e40cd8;
  local_48 = (undefined4 *)0x9e6ff2;
  FUN_0099e960();
  if (in_stack_000000ac != 0) {
    _uStack00000094 = &local_54;
    local_54 = 0;
    local_50 = (undefined4 *)0x0;
    local_4c = (undefined4 *)0x0;
    local_48 = (undefined4 *)((uint)local_48 & 0xffffff00);
    puStack_58 = in_stack_000000a4;
    while (puStack_58 != (undefined1 *)0x0) {
      _uStack00000094 = *(undefined4 **)(puStack_58 + 8);
      uStack_5c = 0x9e7031;
      FUN_0057aab0();
      puStack_58 = (undefined1 *)_uStack00000094;
    }
    puStack_58 = (undefined1 *)param_1[0x15];
    uStack_5c = 0x9e704c;
    (**(code **)(*(int *)param_1[0x16] + 0xe8))();
  }
  local_48 = (undefined4 *)param_1[0x31];
  local_4c = (undefined4 *)0x9e705a;
  FUN_009e7350();
  local_4c = (undefined4 *)0x9e7069;
  local_48 = puVar1;
  piVar3 = (int *)FUN_00973bd0();
  if (piVar3 == (int *)0x0) {
    local_4c = (undefined4 *)0x9e7079;
    local_48 = puVar1;
    piVar3 = (int *)FUN_00973bd0();
  }
  param_1[0x4e] = piVar3;
  local_48 = (undefined4 *)local_38;
  local_4c = (undefined4 *)0x9e708c;
  iVar4 = (**(code **)(*piVar3 + 0x40))();
  uVar2 = *(undefined4 *)(iVar4 + 4);
  param_1[0x41] = uVar2;
  *(undefined8 *)(param_1 + 0x42) = *(undefined8 *)(iVar4 + 8);
  *(undefined8 *)(param_1 + 0x44) = *(undefined8 *)(iVar4 + 0x10);
  *(undefined1 *)(param_1 + 0x46) = *(undefined1 *)(iVar4 + 0x18);
  param_1[0x48] = uVar2;
  *(undefined8 *)(param_1 + 0x49) = *(undefined8 *)(param_1 + 0x42);
  *(undefined8 *)(param_1 + 0x4b) = *(undefined8 *)(param_1 + 0x44);
  *(undefined1 *)(param_1 + 0x4d) = *(undefined1 *)(param_1 + 0x46);
  if (0xf < in_stack_00000024) {
    local_4c = (undefined4 *)param_4;
                    /* WARNING: Subroutine does not return */
    local_50 = (undefined4 *)&UNK_009e70ff;
    FUN_00aae91b();
  }
  in_stack_00000024 = 0xf;
  in_stack_00000020 = 0;
  param_4 = param_4 & 0xffffff00;
  if (0xf < in_stack_00000040) {
    local_4c = (undefined4 *)in_stack_0000002c;
                    /* WARNING: Subroutine does not return */
    local_50 = (undefined4 *)&UNK_009e7120;
    FUN_00aae91b();
  }
  in_stack_00000040 = 0xf;
  in_stack_0000003c = 0;
  in_stack_0000002c = in_stack_0000002c & 0xffffff00;
  if (0xf < in_stack_00000068) {
    local_4c = (undefined4 *)in_stack_00000054;
                    /* WARNING: Subroutine does not return */
    local_50 = (undefined4 *)&UNK_009e713f;
    FUN_00aae91b();
  }
  in_stack_00000068 = 0xf;
  in_stack_00000064 = 0;
  in_stack_00000054 = in_stack_00000054 & 0xffffff00;
  if (0xf < in_stack_00000084) {
    local_4c = (undefined4 *)in_stack_00000070;
                    /* WARNING: Subroutine does not return */
    local_50 = (undefined4 *)&UNK_009e7161;
    FUN_00aae91b();
  }
  in_stack_00000084 = 0xf;
  in_stack_00000080 = 0;
  in_stack_00000070 = in_stack_00000070 & 0xffffff00;
  if (in_stack_000000a4 != (undefined1 *)0x0) {
    local_4c = (undefined4 *)in_stack_000000a4;
                    /* WARNING: Subroutine does not return */
    local_50 = (undefined4 *)&UNK_009e718b;
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_1;
}

