// FUN_008da6b0 @ 008da6b0 body=[[008da6b0, 008da8b7] [008da8bb, 008da8e5] [008da8e9, 008da90e] [008da912, 008da937] [008da93b, 008da960] [008da964, 008da999] [008da99d, 008da9b9] [008da9bd, 008da9f6] [008da9fa, 008daa16] [008daa1a, 008daa44] [008daa48, 008daa6a] [008daa6e, 008daa8d] [008daa91, 008dac8b] [008dac8f, 008dacb9] [008dacbd, 008dace2] [008dace6, 008dad0b] [008dad0f, 008dad34] [008dad38, 008dad6d] [008dad71, 008dad92] [008dad96, 008dadcf] [008dadd3, 008dadef] [008dadf3, 008dae1d] [008dae21, 008dae46] [008dae4a, 008dae6f] [008dae73, 008dae98] [008dae9c, 008daeb1]]


/* WARNING: Removing unreachable block (ram,0x008daa82) */
/* WARNING: Removing unreachable block (ram,0x008daa39) */
/* WARNING: Removing unreachable block (ram,0x008dae64) */
/* WARNING: Removing unreachable block (ram,0x008dae3b) */
/* WARNING: Removing unreachable block (ram,0x008dae8d) */
/* WARNING: Removing unreachable block (ram,0x008daa5f) */
/* WARNING: Removing unreachable block (ram,0x008daaaf) */
/* WARNING: Removing unreachable block (ram,0x008dae93) */
/* WARNING: Removing unreachable block (ram,0x008dae12) */

undefined4 FUN_008da6b0(undefined4 param_1,undefined4 param_2,char param_3)

{
  int iVar1;
  uint local_2c0;
  uint local_2a4;
  uint local_288;
  uint local_26c;
  uint local_250;
  uint local_234;
  uint local_218;
  uint local_1fc;
  uint local_1e0;
  uint local_1c4;
  uint local_1a8;
  uint local_18c;
  uint local_170;
  uint local_154;
  int local_68;
  int local_54;
  int local_40;
  int local_2c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b66923;
  local_10 = ExceptionList;
  if (param_3 == '\0') {
    ExceptionList = &local_10;
    FUN_00409350();
    local_8 = 0x10;
    FUN_00409350();
    local_8._0_1_ = 0x11;
    FUN_00409350();
    local_8._0_1_ = 0x12;
    FUN_00409350();
    local_8._0_1_ = 0x13;
    FUN_00988a50();
    local_8._0_1_ = 0x14;
    FUN_009a8ee0();
    local_8._0_1_ = 0x15;
    iVar1 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c));
    local_8._0_1_ = 0x16;
    FUN_009a8ee0();
    local_8._0_1_ = 0x17;
    iVar1 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c));
    local_8._0_1_ = 0x18;
    FUN_00988f20();
    local_8._0_1_ = 0x19;
    FUN_00988f20();
    local_8._0_1_ = 0x1a;
    FUN_00988f20();
    local_8._0_1_ = 0x1b;
    FUN_00988f20();
    local_8._0_1_ = 0x1c;
    FUN_00988f20();
    if (0xf < local_170) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_1a8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_1e0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_218) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_250) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 0x1d;
    FUN_009adb70();
    if (local_40 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_288) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = CONCAT31(local_8._1_3_,0x1e);
    FUN_009adb70();
    if (local_2c != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_2c0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  else {
    ExceptionList = &local_10;
    FUN_00409350();
    local_8 = 1;
    FUN_00409350();
    local_8._0_1_ = 2;
    FUN_00409350();
    local_8._0_1_ = 3;
    FUN_00409350();
    local_8._0_1_ = 4;
    FUN_00988a50();
    local_8._0_1_ = 5;
    FUN_009a8ee0();
    local_8._0_1_ = 6;
    iVar1 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c));
    local_8._0_1_ = 7;
    FUN_009a8ee0();
    local_8._0_1_ = 8;
    iVar1 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c));
    local_8._0_1_ = 9;
    FUN_00988f20();
    local_8._0_1_ = 10;
    FUN_00988f20();
    local_8._0_1_ = 0xb;
    FUN_00988f20();
    local_8._0_1_ = 0xc;
    FUN_00988f20();
    local_8._0_1_ = 0xd;
    FUN_00988f20();
    if (0xf < local_26c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_18c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_234) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_1c4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_2a4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 0xe;
    FUN_009adb70();
    if (local_68 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_1fc) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = CONCAT31(local_8._1_3_,0xf);
    FUN_009adb70();
    if (local_54 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_154) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  ExceptionList = local_10;
  return param_1;
}

