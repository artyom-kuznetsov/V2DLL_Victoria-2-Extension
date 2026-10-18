// FUN_00a09e60 @ 00a09e60 body=[[00a09e60, 00a09f28] [00a09f2c, 00a0a05e] [00a0a062, 00a0a087] [00a0a08b, 00a0a0b0] [00a0a0b4, 00a0a0d6] [00a0a0da, 00a0a0f9] [00a0a0fd, 00a0a11c] [00a0a120, 00a0a136] [00a0a13a, 00a0a154] [00a0a158, 00a0a1b6] [00a0a1ba, 00a0a1cd] [00a0a1d1, 00a0a1e1]]


void FUN_00a09e60(void)

{
  char cVar1;
  char *pcVar2;
  int in_ECX;
  undefined1 local_2e0 [12];
  undefined4 uStack_2d4;
  undefined4 local_138 [5];
  uint local_124;
  uint local_11c;
  undefined4 local_10c;
  uint local_108;
  uint local_100;
  undefined4 local_f0;
  uint local_ec;
  uint local_e4;
  undefined4 local_d4;
  uint local_d0;
  uint local_c8;
  undefined4 local_b8;
  uint local_b4;
  char local_ac [8];
  undefined1 local_a4 [8];
  int local_9c;
  undefined4 local_98;
  uint local_8c;
  undefined4 local_7c;
  uint local_78;
  uint local_70;
  undefined4 local_60;
  uint local_5c;
  uint local_54;
  undefined4 local_44;
  uint local_40;
  uint local_38;
  undefined4 local_28;
  uint local_24;
  int *local_1c;
  undefined1 *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b55a6b;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffd3c;
  ExceptionList = &local_10;
  cVar1 = FUN_009fabb0();
  if (cVar1 != '\0') {
    local_1c = DAT_01258b64;
    local_24 = 0xf;
    local_28 = 0;
    local_38 = local_38 & 0xffffff00;
    FUN_00409350();
    local_8 = 0;
    uStack_2d4 = 0xa09ed6;
    FUN_004015b0();
    local_8._0_1_ = 1;
    FUN_00987d20();
    FUN_00401280();
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_00987ac0();
    FUN_00aad52d();
    if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = 2;
    local_24 = 0xf;
    local_28 = 0;
    local_38 = local_38 & 0xffffff00;
    FUN_00409350();
    local_5c = 0xf;
    local_60 = 0;
    local_70 = local_70 & 0xffffff00;
    local_8._0_1_ = 4;
    uStack_2d4 = 0xa09f6f;
    pcVar2 = __itoa(*(int *)(in_ECX + 0x74),local_ac,10);
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    FUN_00409350();
    local_8._0_1_ = 5;
    local_40 = 0xf;
    local_44 = 0;
    local_54 = local_54 & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 6;
    FUN_009d71b0();
    local_8._0_1_ = 7;
    local_78 = 0xf;
    local_7c = 0;
    local_8c = local_8c & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 8;
    FUN_00988f20();
    local_8._0_1_ = 9;
    FUN_00988f20();
    local_8._0_1_ = 10;
    FUN_00988f20();
    local_8._0_1_ = 0xb;
    FUN_00988f20();
    if (0xf < local_108) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_108 = 0xf;
    local_10c = 0;
    local_11c = local_11c & 0xffffff00;
    if (0xf < local_b4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_b4 = 0xf;
    local_b8 = 0;
    local_c8 = local_c8 & 0xffffff00;
    if (0xf < local_ec) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_ec = 0xf;
    local_f0 = 0;
    local_100 = local_100 & 0xffffff00;
    if (0xf < local_78) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_78 = 0xf;
    local_7c = 0;
    local_8c = local_8c & 0xffffff00;
    if (0xf < local_d0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_d0 = 0xf;
    local_d4 = 0;
    local_e4 = local_e4 & 0xffffff00;
    if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_40 = 0xf;
    local_44 = 0;
    local_54 = local_54 & 0xffffff00;
    if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_5c = 0xf;
    local_60 = 0;
    local_70 = local_70 & 0xffffff00;
    local_8 = CONCAT31(local_8._1_3_,0x14);
    if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_18 = local_2e0;
    local_24 = 0xf;
    local_28 = 0;
    local_38 = local_38 & 0xffffff00;
    local_2e0[0] = 0;
    FUN_00408ed0(local_138,0,0xffffffff);
    (**(code **)(*local_1c + 0x10))(local_a4);
    if (local_9c != 0) {
      FUN_00463b30(local_98,local_1c);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_9c);
    }
    if (0xf < local_124) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_138[0]);
    }
  }
  ExceptionList = local_10;
  return;
}

