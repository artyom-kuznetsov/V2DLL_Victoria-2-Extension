// FUN_008f07d0 @ 008f07d0 body=[[008f07d0, 008f094b] [008f094f, 008f0979] [008f097d, 008f09a7] [008f09ab, 008f09cf] [008f09d3, 008f09f4] [008f09f8, 008f0a1c] [008f0a20, 008f0b89] [008f0b8d, 008f0bb7] [008f0bbb, 008f0be5] [008f0be9, 008f0c0d] [008f0c11, 008f0c32] [008f0c36, 008f0c5d] [008f0c61, 008f0c85] [008f0c89, 008f0ca2]]


/* WARNING: Removing unreachable block (ram,0x008f09c6) */
/* WARNING: Removing unreachable block (ram,0x008f0c04) */
/* WARNING: Removing unreachable block (ram,0x008f0a13) */
/* WARNING: Removing unreachable block (ram,0x008f0c79) */
/* WARNING: Removing unreachable block (ram,0x008f0a39) */
/* WARNING: Removing unreachable block (ram,0x008f0c80) */
/* WARNING: Removing unreachable block (ram,0x008f0c54) */

undefined4 FUN_008f07d0(undefined4 param_1,undefined4 param_2,char param_3)

{
  int in_ECX;
  undefined1 local_f8 [20];
  uint local_e4;
  uint local_dc;
  undefined4 local_cc;
  uint local_c8;
  uint local_c0;
  undefined4 local_b0;
  uint local_ac;
  uint local_a4;
  undefined4 local_94;
  uint local_90;
  uint local_88;
  undefined4 local_78;
  uint local_74;
  uint local_6c;
  undefined4 local_5c;
  uint local_58;
  uint local_50;
  undefined4 local_40;
  uint local_3c;
  undefined1 local_34 [20];
  uint local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b65b5e;
  local_14 = ExceptionList;
  if (param_3 == '\0') {
    ExceptionList = &local_14;
    FUN_00409350();
    local_c = 7;
    FUN_00409350();
    local_c._0_1_ = 8;
    __allmul(*(undefined4 *)(in_ECX + 0x20),*(undefined4 *)(in_ECX + 0x24),0x320000,0);
    FUN_00988bb0(local_34,1);
    local_c._0_1_ = 9;
    FUN_00409350();
    local_c._0_1_ = 10;
    FUN_00988f20();
    local_c._0_1_ = 0xb;
    FUN_00988f20();
    local_c._0_1_ = 0xc;
    FUN_0042c180();
    local_c = CONCAT31(local_c._1_3_,0xd);
    FUN_00988f20();
    if (0xf < local_c8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_c8 = 0xf;
    local_cc = 0;
    local_dc = local_dc & 0xffffff00;
    if (0xf < local_90) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_90 = 0xf;
    local_94 = 0;
    local_a4 = local_a4 & 0xffffff00;
    if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_58 = 0xf;
    local_5c = 0;
    local_6c = local_6c & 0xffffff00;
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  else {
    ExceptionList = &local_14;
    FUN_00409350();
    local_c = 0;
    FUN_00409350();
    local_c._0_1_ = 1;
    __allmul(*(undefined4 *)(in_ECX + 0x20),*(undefined4 *)(in_ECX + 0x24),0x320000,0);
    FUN_00988bb0(local_f8,1);
    local_c._0_1_ = 2;
    FUN_00409350();
    local_c._0_1_ = 3;
    FUN_00988f20();
    local_c._0_1_ = 4;
    FUN_00988f20();
    local_c._0_1_ = 5;
    FUN_0042c180();
    local_c = CONCAT31(local_c._1_3_,6);
    FUN_00988f20();
    if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_74 = 0xf;
    local_78 = 0;
    local_88 = local_88 & 0xffffff00;
    if (0xf < local_ac) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_ac = 0xf;
    local_b0 = 0;
    local_c0 = local_c0 & 0xffffff00;
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_3c = 0xf;
    local_40 = 0;
    local_50 = local_50 & 0xffffff00;
    if (0xf < local_e4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  ExceptionList = local_14;
  return param_1;
}

