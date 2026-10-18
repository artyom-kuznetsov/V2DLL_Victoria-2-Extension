// FUN_0088e2d0 @ 0088e2d0 body=[[0088e2d0, 0088e39c] [0088e3a0, 0088e487] [0088e48b, 0088e4b5] [0088e4b9, 0088e4de] [0088e4e2, 0088e501] [0088e505, 0088e525] [0088e529, 0088e574] [0088e578, 0088e593] [0088e597, 0088e5dd] [0088e5e1, 0088e5fb] [0088e5ff, 0088e613]]


undefined1 * FUN_0088e2d0(undefined1 *param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint in_stack_00000020;
  undefined8 local_104;
  undefined4 local_f0;
  uint local_dc;
  undefined4 local_d4;
  uint local_c0;
  undefined4 local_b8;
  uint local_a4;
  uint local_9c [4];
  undefined4 local_8c;
  uint local_88;
  uint local_80 [4];
  undefined4 local_70;
  uint local_6c;
  uint local_64;
  undefined4 local_54;
  uint local_50;
  uint local_48 [4];
  undefined4 local_38;
  uint local_34;
  undefined1 local_2c [4];
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puVar1 = (undefined1 *)param_2;
  puStack_c = &LAB_00b879f9;
  local_10 = ExceptionList;
  local_14 = 0;
  local_8 = 0;
  local_104 = CONCAT44(param_2,0x88e307);
  ExceptionList = &local_10;
  FUN_0088e620();
  local_104 = CONCAT44(0x88e312,(undefined4)local_104);
  FUN_0055dd40();
  local_8._0_1_ = 1;
  if ((((char)local_18 == 'R') && ((char)((uint)local_18 >> 8) == 'E')) && (local_18._2_1_ == 'B'))
  {
    param_2 = &local_104;
    local_104 = *(undefined8 *)(puVar1 + 0x38);
    iVar2 = FUN_009c16d0();
    if (iVar2 != 0) {
      local_18 = *(undefined4 *)(iVar2 + 0x44);
      local_14 = *(int *)(iVar2 + 0x48);
    }
  }
  if (local_14 == 0) {
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *(undefined4 *)(param_1 + 0x10) = 0;
    local_104 = 0xded94d;
    *param_1 = 0;
    FUN_00409350();
    if (0xf < local_50) {
      local_104 = CONCAT44(local_64,&UNK_0088e5de);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  else {
    local_104 = 0x1500e29f58;
    local_6c = 0xf;
    local_70 = 0;
    local_80[0] = local_80[0] & 0xffffff00;
    FUN_00409350();
    local_104 = CONCAT44(local_80,local_2c);
    local_8._0_1_ = 2;
    FUN_009a8ee0();
    local_8._0_1_ = 4;
    if (0xf < local_6c) {
      local_104 = CONCAT44(local_80[0],&UNK_0088e39d);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_104 = 0x200df8514;
    local_6c = 0xf;
    local_70 = 0;
    local_80[0] = local_80[0] & 0xffffff00;
    local_88 = 0xf;
    local_8c = 0;
    local_9c[0] = local_9c[0] & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 5;
    local_104 = 0x600dfe490;
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 6;
    local_104 = CONCAT44(0x88e3fb,(undefined4)local_104);
    uVar3 = FUN_0055dd40();
    local_8._0_1_ = 7;
    local_104 = CONCAT44(uVar3,0x88e410);
    FUN_00988fa0();
    local_8._0_1_ = 8;
    local_104 = CONCAT44(local_9c,0x88e42b);
    uVar3 = FUN_00988f20();
    local_8._0_1_ = 9;
    local_104 = 0x400088e438;
    param_2 = (undefined8 *)FUN_00aae9af();
    local_8._0_1_ = 10;
    if (param_2 == (undefined8 *)0x0) {
      param_2 = (undefined8 *)0x0;
    }
    else {
      local_104 = CONCAT44(uVar3,local_2c);
      param_2 = (undefined8 *)FUN_009a9ce0();
    }
    local_8._0_1_ = 9;
    local_104 = CONCAT44(&param_2,local_48);
    FUN_009e6810();
    if (0xf < local_a4) {
      local_104 = CONCAT44(local_b8,&UNK_0088e488);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_c0) {
      local_104 = CONCAT44(local_d4,&UNK_0088e4b6);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_dc) {
      local_104 = CONCAT44(local_f0,&UNK_0088e4df);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_34) {
      local_104 = CONCAT44(local_48[0],&UNK_0088e502);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 4;
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    if (0xf < local_88) {
      local_104 = CONCAT44(local_9c[0],&UNK_0088e526);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_104 = CONCAT44(0x88e52e,(undefined4)local_104);
    iVar2 = FUN_00475500();
    local_104 = *(undefined8 *)(iVar2 + 0x74);
    FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c));
    local_8._0_1_ = 0xb;
    local_104 = CONCAT44(0x88e55d,(undefined4)local_104);
    FUN_009adb70();
    if (local_28 != 0) {
      local_104 = CONCAT44(0x88e56c,(undefined4)local_104);
      FUN_009e6a80();
      local_104 = CONCAT44(local_28,&UNK_0088e575);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    if (0xf < local_50) {
      local_104 = CONCAT44(local_64,&UNK_0088e594);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  if (in_stack_00000020 < 0x10) {
    ExceptionList = local_10;
    return param_1;
  }
  local_50 = 0xf;
  local_54 = 0;
  local_64 = local_64 & 0xffffff00;
  local_104 = CONCAT44(param_3,&UNK_0088e5fc);
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

