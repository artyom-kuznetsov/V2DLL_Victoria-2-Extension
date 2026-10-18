// FUN_009c80d0 @ 009c80d0 body=[[009c80d0, 009c81a2] [009c81a6, 009c81ca] [009c81ce, 009c81e9] [009c81ed, 009c8320] [009c8324, 009c834c] [009c8350, 009c8375] [009c8379, 009c83a1] [009c83a5, 009c83bb]]


/* WARNING: Removing unreachable block (ram,0x009c8343) */
/* WARNING: Removing unreachable block (ram,0x009c8398) */
/* WARNING: Removing unreachable block (ram,0x009c81e0) */

undefined4 FUN_009c80d0(undefined4 param_1,int param_2,int param_3,undefined4 param_4,char param_5)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  undefined1 local_88 [20];
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
  puStack_10 = &LAB_00b4f241;
  local_14 = ExceptionList;
  if (param_2 != 0 || param_3 != 0) {
    if (param_5 == '\0') {
      pcVar3 = &DAT_00df8510;
      pcVar2 = &DAT_00df8518;
    }
    else {
      pcVar3 = &DAT_00df8518;
      pcVar2 = &DAT_00df8510;
    }
    if (-1 < param_3) {
      pcVar2 = pcVar3;
    }
    ExceptionList = &local_14;
    FUN_00409350();
    local_c = 3;
    __allmul(param_2,param_3,0x320000,0);
    FUN_00988bb0(local_34,param_4);
    local_c._0_1_ = 4;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    FUN_00409350();
    local_c._0_1_ = 5;
    FUN_00988f20();
    local_c = CONCAT31(local_c._1_3_,6);
    FUN_00988f20();
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
    ExceptionList = local_14;
    return param_1;
  }
  ExceptionList = &local_14;
  FUN_00409350();
  local_c = 0;
  FUN_00988bb0(local_88,param_4);
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
  if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_14;
  return param_1;
}

