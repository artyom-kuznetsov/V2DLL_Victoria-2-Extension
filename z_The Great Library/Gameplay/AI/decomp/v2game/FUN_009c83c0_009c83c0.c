// FUN_009c83c0 @ 009c83c0 body=[[009c83c0, 009c8495] [009c8499, 009c84c3] [009c84c7, 009c859c] [009c85a0, 009c861d] [009c8621, 009c864b] [009c864f, 009c8673] [009c8677, 009c8698] [009c869c, 009c86c0] [009c86c4, 009c86df] [009c86e3, 009c86fa]]


/* WARNING: Removing unreachable block (ram,0x009c866a) */
/* WARNING: Removing unreachable block (ram,0x009c86d6) */
/* WARNING: Removing unreachable block (ram,0x009c84e6) */
/* WARNING: Removing unreachable block (ram,0x009c86da) */
/* WARNING: Removing unreachable block (ram,0x009c86b7) */

undefined4 FUN_009c83c0(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  char *pcVar2;
  undefined1 local_a4 [20];
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
  puStack_10 = &LAB_00b4f1ee;
  local_14 = ExceptionList;
  if (param_2 == 0 && param_3 == 0) {
    ExceptionList = &local_14;
    FUN_00409350();
    local_c = 0;
    FUN_00988bb0(local_a4,param_4);
    local_c._0_1_ = 1;
    FUN_00988fa0();
    local_c = CONCAT31(local_c._1_3_,2);
    FUN_00988f20();
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_3c = 0xf;
    local_40 = 0;
    local_50 = local_50 & 0xffffff00;
    if (0xf < local_90) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  else {
    ExceptionList = &local_14;
    FUN_00409350();
    local_c = 4;
    if (param_3 < 0) {
      pcVar2 = &DAT_00df8510;
    }
    else {
      pcVar2 = &DAT_00dfd24c;
    }
    FUN_00409350();
    local_c = 5;
    FUN_00988bb0(local_34,param_4);
    local_c._0_1_ = 6;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    FUN_00409350();
    local_c._0_1_ = 7;
    FUN_00988f20();
    local_c._0_1_ = 8;
    FUN_00988f20();
    local_c = CONCAT31(local_c._1_3_,9);
    FUN_00988f20();
    if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_74 = 0xf;
    local_78 = 0;
    local_88 = local_88 & 0xffffff00;
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
  ExceptionList = local_14;
  return param_1;
}

