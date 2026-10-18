// FUN_00530980 @ 00530980 body=[[00530980, 00530a1f] [00530a23, 00530a43] [00530a47, 00530ae1] [00530ae5, 00530b04] [00530b08, 00530b27] [00530b2b, 00530b4e] [00530b52, 00530bed] [00530bf1, 00530c11] [00530c15, 00530c30] [00530c34, 00530c4f] [00530c53, 00530c67]]


undefined1 * FUN_00530980(int param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  uint *local_9c;
  uint local_98;
  undefined4 local_84 [5];
  uint local_70;
  uint local_68 [4];
  undefined4 local_58;
  uint local_54;
  uint local_4c [4];
  undefined4 local_3c;
  uint local_38;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00b73a79;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_2 + 0x14) = 0xf;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *param_2 = 0;
  local_8 = 0;
  local_98 = 0;
  local_14 = (undefined1 *)&local_9c;
  local_9c = (uint *)(*(int *)(*(int *)(param_1 + 0xbcc) + 0x28c) + *(int *)(param_1 + 0xea0));
  local_98 = FUN_00988a50(local_68);
  local_9c = local_30;
  local_8 = 1;
  uVar1 = FUN_0042c180();
  local_98 = 0xffffffff;
  local_9c = (uint *)0x0;
  local_8._0_1_ = 2;
  FUN_00448aa0(uVar1);
  if (0xf < local_1c) {
    local_98 = local_30[0];
                    /* WARNING: Subroutine does not return */
    local_9c = (uint *)&UNK_00530a20;
    FUN_00aae91b();
  }
  local_8 = (uint)local_8._1_3_ << 8;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  if (0xf < local_54) {
    local_98 = local_68[0];
                    /* WARNING: Subroutine does not return */
    local_9c = (uint *)&UNK_00530a44;
    FUN_00aae91b();
  }
  local_9c = *(uint **)(param_1 + 0x1a0);
  local_14 = (undefined1 *)&local_9c;
  local_98 = *(undefined4 *)(param_1 + 0x1a4);
  local_98 = FUN_00988bb0(local_84,0);
  local_9c = local_68;
  local_8 = 3;
  local_14 = (undefined1 *)FUN_0042c180();
  local_8._0_1_ = 4;
  local_98 = 1;
  local_9c = (uint *)&DAT_00dee2cc;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350();
  local_98 = (uint)local_14;
  local_8._0_1_ = 5;
  local_9c = (uint *)0x530abf;
  uVar1 = FUN_00988f20();
  local_98 = 0xffffffff;
  local_9c = (uint *)0x0;
  local_8._0_1_ = 6;
  FUN_00448aa0(uVar1);
  if (0xf < local_38) {
    local_98 = local_4c[0];
                    /* WARNING: Subroutine does not return */
    local_9c = (uint *)&UNK_00530ae2;
    FUN_00aae91b();
  }
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  if (0xf < local_1c) {
    local_98 = local_30[0];
                    /* WARNING: Subroutine does not return */
    local_9c = (uint *)&UNK_00530b05;
    FUN_00aae91b();
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  if (0xf < local_54) {
    local_98 = local_68[0];
                    /* WARNING: Subroutine does not return */
    local_9c = (uint *)&UNK_00530b28;
    FUN_00aae91b();
  }
  local_8 = (uint)local_8._1_3_ << 8;
  local_54 = 0xf;
  local_58 = 0;
  local_68[0] = local_68[0] & 0xffffff00;
  if (0xf < local_70) {
    local_98 = local_84[0];
                    /* WARNING: Subroutine does not return */
    local_9c = (uint *)&UNK_00530b4f;
    FUN_00aae91b();
  }
  local_9c = *(uint **)(param_1 + 0x198);
  local_14 = (undefined1 *)&local_9c;
  local_98 = *(undefined4 *)(param_1 + 0x19c);
  local_98 = FUN_00988bb0(local_84,0);
  local_9c = local_4c;
  local_8 = 7;
  uVar1 = FUN_0042c180();
  local_8._0_1_ = 8;
  local_98 = 1;
  local_9c = (uint *)&DAT_00dee2cc;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 9;
  local_9c = (uint *)0x530bcb;
  local_98 = uVar1;
  uVar1 = FUN_00988f20();
  local_98 = 0xffffffff;
  local_9c = (uint *)0x0;
  local_8 = CONCAT31(local_8._1_3_,10);
  FUN_00448aa0(uVar1);
  if (0xf < local_54) {
    local_98 = local_68[0];
                    /* WARNING: Subroutine does not return */
    local_9c = (uint *)&UNK_00530bee;
    FUN_00aae91b();
  }
  local_54 = 0xf;
  local_58 = 0;
  local_68[0] = local_68[0] & 0xffffff00;
  if (0xf < local_1c) {
    local_98 = local_30[0];
                    /* WARNING: Subroutine does not return */
    local_9c = (uint *)&UNK_00530c12;
    FUN_00aae91b();
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  if (0xf < local_38) {
    local_98 = local_4c[0];
                    /* WARNING: Subroutine does not return */
    local_9c = (uint *)&UNK_00530c31;
    FUN_00aae91b();
  }
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  if (0xf < local_70) {
    local_98 = local_84[0];
                    /* WARNING: Subroutine does not return */
    local_9c = (uint *)&UNK_00530c50;
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_2;
}

