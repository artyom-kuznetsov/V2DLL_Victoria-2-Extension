// FUN_0088d7a0 @ 0088d7a0 body=[[0088d7a0, 0088d80c] [0088d810, 0088d8e9] [0088d8ed, 0088d90b] [0088d90f, 0088d961] [0088d965, 0088d97c] [0088d980, 0088d994]]


undefined4 FUN_0088d7a0(undefined4 param_1,undefined1 *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  uint in_stack_00000020;
  undefined1 auStack_100 [28];
  undefined4 uStack_e4;
  undefined1 auStack_e0 [60];
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined8 local_98;
  uint local_84 [4];
  undefined4 local_74;
  uint local_70;
  uint local_68 [4];
  undefined4 local_58;
  uint local_54;
  uint local_4c [4];
  undefined4 local_3c;
  uint local_38;
  undefined1 local_30 [4];
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b9416b;
  local_10 = ExceptionList;
  local_14 = 0;
  local_8 = 1;
  local_98 = 0xb00e29f2c;
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  local_a0 = CONCAT44(0x88d7e9,(undefined4)local_a0);
  ExceptionList = &local_10;
  FUN_00409350();
  local_98 = CONCAT44(local_4c,local_30);
  local_8._0_1_ = 2;
  local_a0 = CONCAT44(0x88d7fa,(undefined4)local_a0);
  FUN_009a8ee0();
  local_8._0_1_ = 4;
  if (0xf < local_38) {
    local_98 = CONCAT44(local_4c[0],&UNK_0088d80d);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_18 = (undefined1 *)&local_98;
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  local_98 = CONCAT44(*(undefined4 *)(in_ECX + 0x20),0x27);
  local_a0 = CONCAT44(0x88d832,(undefined4)local_a0);
  iVar1 = FUN_009c16d0();
  if (iVar1 != 0) {
    local_98 = 0x500dfe78c;
    local_54 = 0xf;
    local_58 = 0;
    local_68[0] = local_68[0] & 0xffffff00;
    local_a0 = CONCAT44(0x88d857,(undefined4)local_a0);
    FUN_00409350();
    local_1c = 0x2d2d2d;
    local_98 = 0x2d2d2d;
    local_18 = auStack_e0;
    uStack_e4 = 0x88d873;
    FUN_008a88d0();
    uStack_e4 = 0;
    param_2 = auStack_100;
    local_8._0_1_ = 6;
    FUN_008a6010(iVar1);
    local_8._0_1_ = 5;
    uVar2 = FUN_008adbe0(local_84);
    local_8._0_1_ = 7;
    param_2 = (undefined1 *)FUN_00aae9af(0x40);
    local_8._0_1_ = 8;
    if (param_2 == (undefined1 *)0x0) {
      param_2 = (undefined1 *)0x0;
    }
    else {
      local_98 = CONCAT44(uVar2,local_30);
      local_a0 = CONCAT44(param_2,0x88d8bc);
      param_2 = (undefined1 *)FUN_009a9ce0();
    }
    local_8._0_1_ = 7;
    local_98 = CONCAT44(&param_2,local_68);
    local_a0 = CONCAT44(0x88d8d7,(undefined4)local_a0);
    FUN_009e6810();
    if (0xf < local_70) {
      local_98 = CONCAT44(local_84[0],&UNK_0088d8ea);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 4;
    local_70 = 0xf;
    local_74 = 0;
    local_84[0] = local_84[0] & 0xffffff00;
    if (0xf < local_54) {
      local_98 = CONCAT44(local_68[0],&UNK_0088d90c);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  local_98 = CONCAT44(0x88d914,(undefined4)local_98);
  iVar1 = FUN_00475500();
  local_a0 = *(undefined8 *)(iVar1 + 0x6c);
  local_98 = *(undefined8 *)(iVar1 + 0x74);
  uStack_a4 = 0x88d937;
  FUN_009a9880();
  local_14 = 1;
  local_8 = CONCAT31(local_8._1_3_,9);
  local_98 = CONCAT44(0x88d94a,(undefined4)local_98);
  FUN_009adb70();
  if (local_2c != 0) {
    local_98 = CONCAT44(0x88d959,(undefined4)local_98);
    FUN_009e6a80();
    local_98 = CONCAT44(local_2c,&UNK_0088d962);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  if (0xf < in_stack_00000020) {
    local_98 = CONCAT44(param_3,&UNK_0088d97d);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_1;
}

