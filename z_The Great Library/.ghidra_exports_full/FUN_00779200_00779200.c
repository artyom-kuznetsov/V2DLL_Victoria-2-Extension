// FUN_00779200 @ 00779200 body=[[00779200, 007793e2] [007793e6, 00779407] [0077940b, 00779435] [00779439, 00779463] [00779467, 007794a7] [007794ab, 007794c6] [007794ca, 007794f0] [007794f4, 00779534] [00779538, 00779559] [0077955d, 0077958b] [0077958f, 007795a3]]


void FUN_00779200(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 local_128 [4];
  int local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined1 local_114 [4];
  int local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined **local_100;
  undefined4 local_fc;
  uint local_f8;
  undefined4 local_e8;
  uint local_e4;
  uint local_dc;
  undefined4 local_cc;
  uint local_c8;
  uint local_c0 [4];
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
  uint local_34;
  undefined4 local_24;
  uint local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b7b54c;
  local_14 = ExceptionList;
  local_ac = 0xf;
  local_b0 = 0;
  local_c0[0] = local_c0[0] & 0xffffff00;
  ExceptionList = &local_14;
  FUN_00409350("FE_DIFFICULTY",0xd);
  local_c = 0;
  uVar1 = FUN_0075a970();
  local_c._0_1_ = 1;
  FUN_009a8ee0(local_114,uVar1);
  local_c._0_1_ = 2;
  iVar2 = FUN_00475500();
  FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c),*(undefined8 *)(iVar2 + 0x74));
  local_c._0_1_ = 3;
  local_c8 = 0xf;
  local_cc = 0;
  local_dc = local_dc & 0xffffff00;
  FUN_00409350(&DAT_00ded950,1);
  local_c._0_1_ = 4;
  FUN_009a8ee0(local_128,local_c0);
  local_c._0_1_ = 5;
  iVar2 = FUN_00475500();
  FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c),*(undefined8 *)(iVar2 + 0x74));
  local_c._0_1_ = 6;
  FUN_00988f20();
  local_c._0_1_ = 7;
  FUN_00988f20();
  local_c._0_1_ = 8;
  local_fc = 0x18d;
  local_100 = &PTR_FUN_00e3cffc;
  local_e4 = 0xf;
  local_e8 = 0;
  local_f8 = local_f8 & 0xffffff00;
  FUN_00408ed0();
  local_100 = &PTR_FUN_00e3d020;
  local_c._0_1_ = 9;
  FUN_00771510();
  local_100 = &PTR_FUN_00e3cffc;
  if (0xf < local_e4) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_e4 = 0xf;
  local_e8 = 0;
  local_f8 = local_f8 & 0xffffff00;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34 = local_34 & 0xffffff00;
  if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_74 = 0xf;
  local_78 = 0;
  local_88 = local_88 & 0xffffff00;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50 = local_50 & 0xffffff00;
  local_c._0_1_ = 10;
  FUN_009adb70();
  if (local_124 != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_124 = 0;
  local_120 = 0;
  local_11c = 0;
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
  local_c = CONCAT31(local_c._1_3_,0xb);
  FUN_009adb70();
  if (local_110 != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_110 = 0;
  local_10c = 0;
  local_108 = 0;
  if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_58 = 0xf;
  local_5c = 0;
  local_6c = local_6c & 0xffffff00;
  if (0xf < local_ac) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_14;
  return;
}

