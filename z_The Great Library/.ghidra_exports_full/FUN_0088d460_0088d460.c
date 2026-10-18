// FUN_0088d460 @ 0088d460 body=[[0088d460, 0088d4cf] [0088d4d3, 0088d5e6] [0088d5ea, 0088d610] [0088d614, 0088d674] [0088d678, 0088d68f] [0088d693, 0088d6a7]]


undefined4 FUN_0088d460(undefined4 param_1,undefined1 *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int in_ECX;
  uint in_stack_00000020;
  undefined1 auStack_10c [28];
  undefined4 uStack_f0;
  undefined1 auStack_ec [60];
  undefined4 uStack_b0;
  undefined8 local_ac;
  undefined8 local_a4;
  uint local_90 [4];
  undefined4 local_80;
  uint local_7c;
  uint local_74 [4];
  undefined4 local_64;
  uint local_60;
  uint local_58 [4];
  undefined4 local_48;
  uint local_44;
  undefined1 local_3c [4];
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b941de;
  local_10 = ExceptionList;
  local_18 = 0;
  local_8 = 1;
  local_a4 = 0xb00e29f2c;
  local_44 = 0xf;
  local_48 = 0;
  local_58[0] = local_58[0] & 0xffffff00;
  local_ac = CONCAT44(0x88d4ac,(undefined4)local_ac);
  ExceptionList = &local_10;
  FUN_00409350();
  local_a4 = CONCAT44(local_58,local_3c);
  local_8._0_1_ = 2;
  local_ac = CONCAT44(0x88d4bd,(undefined4)local_ac);
  FUN_009a8ee0();
  local_8._0_1_ = 4;
  if (0xf < local_44) {
    local_a4 = CONCAT44(local_58[0],&UNK_0088d4d0);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_14 = (undefined1 *)&local_a4;
  local_44 = 0xf;
  local_48 = 0;
  local_58[0] = local_58[0] & 0xffffff00;
  local_a4 = CONCAT44(*(undefined4 *)(in_ECX + 0x20),0x27);
  local_ac = CONCAT44(0x88d4f6,(undefined4)local_ac);
  local_14 = (undefined1 *)FUN_009c16d0();
  iVar3 = (int)param_2;
  if (local_14 != (undefined1 *)0x0) {
    local_28 = *(undefined4 *)((int)param_2 + 0x2c);
    local_24 = *(undefined4 *)((int)param_2 + 0x30);
    local_a4 = CONCAT44(0x88d51d,(undefined4)local_a4);
    puVar1 = (undefined4 *)FUN_008a8dc0();
    *(undefined4 *)(iVar3 + 0x2c) = *puVar1;
    local_a4 = 0x500dfe78c;
    *(undefined4 *)(iVar3 + 0x30) = puVar1[1];
    local_60 = 0xf;
    local_64 = 0;
    local_74[0] = local_74[0] & 0xffffff00;
    local_ac = CONCAT44(0x88d549,(undefined4)local_ac);
    FUN_00409350();
    local_20 = 0x2d2d2d;
    local_a4 = 0x2d2d2d;
    param_2 = auStack_ec;
    uStack_f0 = 0x88d566;
    FUN_008a88d0();
    uStack_f0 = 0;
    param_2 = auStack_10c;
    local_8._0_1_ = 6;
    FUN_008a6010(local_14);
    local_8._0_1_ = 5;
    uVar2 = FUN_008adbe0(local_90);
    local_8._0_1_ = 7;
    param_2 = (undefined1 *)FUN_00aae9af(0x40);
    local_8._0_1_ = 8;
    if (param_2 == (undefined1 *)0x0) {
      param_2 = (undefined1 *)0x0;
    }
    else {
      local_a4 = CONCAT44(uVar2,local_3c);
      local_ac = CONCAT44(param_2,0x88d5b6);
      param_2 = (undefined1 *)FUN_009a9ce0();
    }
    local_8._0_1_ = 7;
    local_a4 = CONCAT44(&param_2,local_74);
    local_ac = CONCAT44(0x88d5d1,(undefined4)local_ac);
    FUN_009e6810();
    if (0xf < local_7c) {
      local_a4 = CONCAT44(local_90[0],&UNK_0088d5e7);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 4;
    local_7c = 0xf;
    local_80 = 0;
    local_90[0] = local_90[0] & 0xffffff00;
    if (0xf < local_60) {
      local_a4 = CONCAT44(local_74[0],&UNK_0088d611);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    *(undefined4 *)(iVar3 + 0x2c) = local_28;
    *(undefined4 *)(iVar3 + 0x30) = local_24;
  }
  local_a4 = CONCAT44(0x88d627,(undefined4)local_a4);
  iVar3 = FUN_00475500();
  local_ac = *(undefined8 *)(iVar3 + 0x6c);
  local_a4 = *(undefined8 *)(iVar3 + 0x74);
  uStack_b0 = 0x88d64a;
  FUN_009a9880();
  local_18 = 1;
  local_8 = CONCAT31(local_8._1_3_,9);
  local_a4 = CONCAT44(0x88d65d,(undefined4)local_a4);
  FUN_009adb70();
  if (local_38 != 0) {
    local_a4 = CONCAT44(0x88d66c,(undefined4)local_a4);
    FUN_009e6a80();
    local_a4 = CONCAT44(local_38,&UNK_0088d675);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  if (0xf < in_stack_00000020) {
    local_a4 = CONCAT44(param_3,&UNK_0088d690);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_1;
}

