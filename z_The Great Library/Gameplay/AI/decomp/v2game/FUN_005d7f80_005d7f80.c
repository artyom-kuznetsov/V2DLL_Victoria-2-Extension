// FUN_005d7f80 @ 005d7f80 body=[[005d7f80, 005d8054] [005d8058, 005d8075] [005d8079, 005d8096] [005d809a, 005d80ba] [005d80be, 005d80e1] [005d80e7, 005d8117]]


undefined1 * FUN_005d7f80(undefined1 *param_1)

{
  undefined4 uVar1;
  int *in_ECX;
  undefined *puStack_bc;
  uint *puStack_b8;
  int *piStack_b4;
  uint local_a4 [4];
  undefined4 local_94;
  uint local_90;
  uint local_88;
  undefined4 local_78;
  uint local_74;
  uint local_6c [4];
  undefined4 local_5c;
  uint local_58;
  uint local_50;
  undefined4 local_40;
  uint local_3c;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  undefined1 *local_18;
  undefined *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b7f83e;
  local_10 = ExceptionList;
  local_14 = (undefined *)0x0;
  piStack_b4 = (int *)&local_14;
  puStack_b8 = (uint *)0x5d7fb1;
  ExceptionList = &local_10;
  (**(code **)(*in_ECX + 0x7c))();
  if ((int)local_14 < 1) {
    puStack_b8 = (uint *)0x0;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *(undefined4 *)(param_1 + 0x10) = 0;
    puStack_bc = &DAT_00ded94d;
    *param_1 = 0;
    FUN_00409350();
  }
  else {
    puStack_b8 = (uint *)0x4;
    puStack_bc = &DAT_00e02e54;
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    FUN_00409350();
    puStack_b8 = local_a4;
    local_8 = 0;
    puStack_bc = (undefined *)0x5d7fea;
    uVar1 = FUN_00475d50();
    puStack_b8 = (uint *)0x2;
    local_18 = (undefined1 *)&puStack_bc;
    local_8._0_1_ = 1;
    puStack_bc = local_14;
    puStack_b8 = (uint *)FUN_00988a50(local_6c);
    local_8._0_1_ = 2;
    puStack_bc = (undefined *)0x5d801e;
    FUN_00988fa0();
    puStack_b8 = local_34;
    local_8._0_1_ = 3;
    puStack_bc = (undefined *)0x5d8033;
    FUN_00988f20();
    local_8 = CONCAT31(local_8._1_3_,4);
    puStack_bc = (undefined *)0x5d8042;
    puStack_b8 = (uint *)uVar1;
    FUN_00988f20();
    if (0xf < local_3c) {
      puStack_b8 = (uint *)local_50;
                    /* WARNING: Subroutine does not return */
      puStack_bc = &UNK_005d8055;
      FUN_00aae91b();
    }
    local_3c = 0xf;
    local_40 = 0;
    local_50 = local_50 & 0xffffff00;
    if (0xf < local_74) {
      puStack_b8 = (uint *)local_88;
                    /* WARNING: Subroutine does not return */
      puStack_bc = &UNK_005d8076;
      FUN_00aae91b();
    }
    local_74 = 0xf;
    local_78 = 0;
    local_88 = local_88 & 0xffffff00;
    if (0xf < local_58) {
      puStack_b8 = (uint *)local_6c[0];
                    /* WARNING: Subroutine does not return */
      puStack_bc = &UNK_005d8097;
      FUN_00aae91b();
    }
    local_58 = 0xf;
    local_5c = 0;
    local_6c[0] = local_6c[0] & 0xffffff00;
    if (0xf < local_90) {
      puStack_b8 = (uint *)local_a4[0];
                    /* WARNING: Subroutine does not return */
      puStack_bc = &UNK_005d80bb;
      FUN_00aae91b();
    }
    local_90 = 0xf;
    local_94 = 0;
    local_a4[0] = local_a4[0] & 0xffffff00;
    if (0xf < local_20) {
      puStack_b8 = (uint *)local_34[0];
                    /* WARNING: Subroutine does not return */
      puStack_bc = &UNK_005d80e2;
      FUN_00aae91b();
    }
  }
  ExceptionList = local_10;
  return param_1;
}

