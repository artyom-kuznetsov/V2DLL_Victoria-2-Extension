// FUN_00533ac0 @ 00533ac0 body=[[00533ac0, 00533bb4] [00533bb8, 00533bd2] [00533bd6, 00533bf3] [00533bf7, 00533c17] [00533c1b, 00533ccf] [00533cd3, 00533cf0] [00533cf4, 00533d0e] [00533d12, 00533d2f] [00533d33, 00533dd8] [00533ddc, 00533df9] [00533dfd, 00533e17] [00533e1b, 00533e35] [00533e39, 00533e4d]]


undefined1 * FUN_00533ac0(int param_1,undefined1 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 local_a0;
  uint local_8c [4];
  undefined4 local_7c;
  uint local_78;
  uint local_70 [4];
  undefined4 local_60;
  uint local_5c;
  uint local_54 [4];
  undefined4 local_44;
  uint local_40;
  uint local_38 [4];
  undefined4 local_28;
  uint local_24;
  undefined1 *local_1c;
  int local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00b73732;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_2 + 0x14) = 0xf;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *param_2 = 0;
  local_8 = 0;
  local_a0._4_4_ = (uint *)0x1;
  local_a0._0_4_ = (uint *)&DAT_00dee2cc;
  local_14 = 1;
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  FUN_00409350();
  local_8 = 1;
  local_a0._0_4_ = *(uint **)(*(int *)(DAT_012586dc + 0x40) + 0x74);
  local_a0._4_4_ = (uint *)0x1;
  local_1c = (undefined1 *)&local_a0;
  local_18 = (int)(uint *)local_a0;
  FUN_00401000(0x47c35040);
  iVar2 = FUN_00b31c00();
  local_a0._0_4_ = (uint *)__alldiv((longlong)iVar2 * (longlong)local_18,1000,0);
  local_a0._4_4_ = (uint *)FUN_00988a50(local_8c);
  local_a0._0_4_ = local_70;
  local_8._0_1_ = 2;
  FUN_0042c180();
  local_a0._4_4_ = local_38;
  local_8._0_1_ = 3;
  local_a0._0_4_ = (uint *)0x533b93;
  uVar3 = FUN_00988f20();
  local_a0._4_4_ = (uint *)0xffffffff;
  local_a0._0_4_ = (uint *)0x0;
  local_8._0_1_ = 4;
  FUN_00448aa0(uVar3);
  if (0xf < local_40) {
    local_a0._4_4_ = (uint *)local_54[0];
                    /* WARNING: Subroutine does not return */
    local_a0._0_4_ = (uint *)&UNK_00533bb5;
    FUN_00aae91b();
  }
  local_40 = 0xf;
  local_44 = 0;
  local_54[0] = local_54[0] & 0xffffff00;
  if (0xf < local_5c) {
    local_a0._4_4_ = (uint *)local_70[0];
                    /* WARNING: Subroutine does not return */
    local_a0._0_4_ = (uint *)&UNK_00533bd3;
    FUN_00aae91b();
  }
  local_5c = 0xf;
  local_60 = 0;
  local_70[0] = local_70[0] & 0xffffff00;
  if (0xf < local_78) {
    local_a0._4_4_ = (uint *)local_8c[0];
                    /* WARNING: Subroutine does not return */
    local_a0._0_4_ = (uint *)&UNK_00533bf4;
    FUN_00aae91b();
  }
  local_8 = (uint)local_8._1_3_ << 8;
  local_78 = 0xf;
  local_7c = 0;
  local_8c[0] = local_8c[0] & 0xffffff00;
  if (0xf < local_24) {
    local_a0._4_4_ = (uint *)local_38[0];
                    /* WARNING: Subroutine does not return */
    local_a0._0_4_ = (uint *)&UNK_00533c18;
    FUN_00aae91b();
  }
  local_a0._4_4_ = (uint *)0x1;
  local_a0._0_4_ = (uint *)&DAT_00dee2cc;
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  FUN_00409350();
  local_8 = 5;
  local_a0._0_4_ = *(uint **)(param_1 + 0xe70);
  local_1c = (undefined1 *)&local_a0;
  local_a0 = __allmul((uint *)local_a0,*(undefined4 *)(param_1 + 0xe74),0x320000,0);
  local_a0 = local_a0 >> 0xf;
  uVar3 = FUN_00988bb0(local_54,1);
  local_a0._0_4_ = local_70;
  local_8._0_1_ = 6;
  local_a0._4_4_ = (uint *)uVar3;
  FUN_0042c180();
  local_a0._4_4_ = local_38;
  local_8._0_1_ = 7;
  local_a0._0_4_ = (uint *)0x533cab;
  uVar3 = FUN_00988f20();
  local_a0._4_4_ = (uint *)0xffffffff;
  local_a0._0_4_ = (uint *)0x0;
  local_8._0_1_ = 8;
  FUN_00448aa0(uVar3);
  if (0xf < local_78) {
    local_a0._4_4_ = (uint *)local_8c[0];
                    /* WARNING: Subroutine does not return */
    local_a0._0_4_ = (uint *)&UNK_00533cd0;
    FUN_00aae91b();
  }
  local_78 = 0xf;
  local_7c = 0;
  local_8c[0] = local_8c[0] & 0xffffff00;
  if (0xf < local_5c) {
    local_a0._4_4_ = (uint *)local_70[0];
                    /* WARNING: Subroutine does not return */
    local_a0._0_4_ = (uint *)&UNK_00533cf1;
    FUN_00aae91b();
  }
  local_5c = 0xf;
  local_60 = 0;
  local_70[0] = local_70[0] & 0xffffff00;
  if (0xf < local_40) {
    local_a0._4_4_ = (uint *)local_54[0];
                    /* WARNING: Subroutine does not return */
    local_a0._0_4_ = (uint *)&UNK_00533d0f;
    FUN_00aae91b();
  }
  local_8 = (uint)local_8._1_3_ << 8;
  local_40 = 0xf;
  local_44 = 0;
  uVar1 = local_54[0] >> 8;
  local_54[0] = uVar1 << 8;
  if (0xf < local_24) {
    local_a0._4_4_ = (uint *)local_38[0];
                    /* WARNING: Subroutine does not return */
    local_a0._0_4_ = (uint *)&UNK_00533d30;
    FUN_00aae91b();
  }
  local_a0._4_4_ = (uint *)0x0;
  local_a0._0_4_ = (uint *)&DAT_00ded94d;
  local_40 = 0xf;
  local_44 = 0;
  local_54[0] = uVar1 << 8;
  FUN_00409350();
  local_8 = 9;
  local_a0._4_4_ = (uint *)0x1;
  local_a0._0_4_ = (uint *)&DAT_00dee2cc;
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  FUN_00409350();
  local_a0._4_4_ = local_54;
  local_8._0_1_ = 10;
  local_a0._0_4_ = (uint *)0x3e8;
  (**(code **)(*(int *)(param_1 + 0xa48) + 0x24))(local_70,0x77);
  local_8._0_1_ = 0xb;
  uVar3 = FUN_00988f20();
  local_8 = CONCAT31(local_8._1_3_,0xc);
  FUN_00448aa0(uVar3,0,0xffffffff);
  if (0xf < local_78) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_78 = 0xf;
  local_7c = 0;
  local_8c[0] = local_8c[0] & 0xffffff00;
  if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_5c = 0xf;
  local_60 = 0;
  local_70[0] = local_70[0] & 0xffffff00;
  if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_2;
}

