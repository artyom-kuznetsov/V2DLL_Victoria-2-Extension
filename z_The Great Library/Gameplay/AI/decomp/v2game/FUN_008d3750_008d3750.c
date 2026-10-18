// FUN_008d3750 @ 008d3750 body=[[008d3750, 008d3810] [008d3814, 008d3835] [008d3839, 008d38e7] [008d38eb, 008d390c] [008d3910, 008d3934] [008d3938, 008d3951]]


/* WARNING: Removing unreachable block (ram,0x008d3858) */
/* WARNING: Removing unreachable block (ram,0x008d392b) */
/* WARNING: Removing unreachable block (ram,0x008d3930) */

undefined4 FUN_008d3750(undefined4 param_1,undefined4 param_2,char param_3)

{
  uint local_74;
  uint local_58;
  undefined1 local_50 [20];
  uint local_3c;
  undefined1 local_34 [20];
  uint local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b67706;
  local_14 = ExceptionList;
  if (param_3 == '\0') {
    ExceptionList = &local_14;
    FUN_00409350();
    local_c = 3;
    FUN_00988a50(local_34);
    local_c._0_1_ = 4;
    FUN_0042c180();
    local_c = CONCAT31(local_c._1_3_,5);
    FUN_00988f20();
    if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  else {
    ExceptionList = &local_14;
    FUN_00409350();
    local_c = 0;
    FUN_00988a50(local_50);
    local_c._0_1_ = 1;
    FUN_0042c180();
    local_c = CONCAT31(local_c._1_3_,2);
    FUN_00988f20();
    if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  ExceptionList = local_14;
  return param_1;
}

