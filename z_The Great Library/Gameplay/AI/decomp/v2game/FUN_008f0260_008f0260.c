// FUN_008f0260 @ 008f0260 body=[[008f0260, 008f03db] [008f03df, 008f0409] [008f040d, 008f0437] [008f043b, 008f045f] [008f0463, 008f0484] [008f0488, 008f04ac] [008f04b0, 008f0619] [008f061d, 008f0647] [008f064b, 008f0675] [008f0679, 008f069d] [008f06a1, 008f06c2] [008f06c6, 008f06ed] [008f06f1, 008f0715] [008f0719, 008f0732]]


/* WARNING: Removing unreachable block (ram,0x008f0456) */
/* WARNING: Removing unreachable block (ram,0x008f0694) */
/* WARNING: Removing unreachable block (ram,0x008f04a3) */
/* WARNING: Removing unreachable block (ram,0x008f0709) */
/* WARNING: Removing unreachable block (ram,0x008f04c9) */
/* WARNING: Removing unreachable block (ram,0x008f0710) */
/* WARNING: Removing unreachable block (ram,0x008f06e4) */

undefined4 FUN_008f0260(undefined4 param_1,undefined4 param_2,char param_3)

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

