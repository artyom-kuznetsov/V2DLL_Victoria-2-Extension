// FUN_0099f770 @ 0099f770 body=[[0099f770, 0099f86c] [0099f870, 0099f88e] [0099f892, 0099f8b3] [0099f8b7, 0099f8e1] [0099f8ea, 0099f96d] [0099f971, 0099f9a3]]


void FUN_0099f770(int param_1,char param_2)

{
  undefined4 *puVar1;
  undefined4 ***pppuVar2;
  undefined4 in_ECX;
  undefined4 **local_2ac [4];
  undefined4 local_29c;
  uint local_298;
  uint local_290;
  undefined4 local_280;
  uint local_27c;
  uint local_274 [4];
  undefined4 local_264;
  uint local_260;
  uint local_258;
  undefined4 local_248;
  uint local_244;
  uint local_23c;
  undefined4 local_22c;
  uint local_228;
  undefined4 local_220;
  char local_21c [256];
  undefined4 local_11c;
  char local_118 [260];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b4f627;
  local_14 = ExceptionList;
  if (*(char *)(param_1 + 0xc) == '\0') {
    local_260 = 0xf;
    local_264 = 0;
    local_274[0] = local_274[0] & 0xffffff00;
    ExceptionList = &local_14;
    FUN_00409350(&DAT_00dfaf28,1);
    local_c = 0;
    local_27c = 0xf;
    local_280 = 0;
    local_290 = local_290 & 0xffffff00;
    FUN_00409350(&DAT_00dfaf28,1);
    local_c._0_1_ = 1;
    FUN_00988f20(in_ECX);
    local_c._0_1_ = 2;
    puVar1 = (undefined4 *)FUN_00988f20(local_274);
    local_c = CONCAT31(local_c._1_3_,3);
    local_220 = 0xf;
    if (0xf < (uint)puVar1[5]) {
      puVar1 = (undefined4 *)*puVar1;
    }
    __snprintf(local_21c,0xff,"%s",puVar1);
    FUN_0099ff90(param_1);
    if (0xf < local_244) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_258);
    }
    local_244 = 0xf;
    local_248 = 0;
    local_258 = local_258 & 0xffffff00;
    if (0xf < local_228) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_23c);
    }
    local_228 = 0xf;
    local_22c = 0;
    local_23c = local_23c & 0xffffff00;
    if (0xf < local_27c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_290);
    }
    local_c = 0xffffffff;
    local_27c = 0xf;
    local_280 = 0;
    local_290 = local_290 & 0xffffff00;
    if (0xf < local_260) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_274[0]);
    }
  }
  else {
    local_298 = 0xf;
    local_29c = 0;
    local_2ac[0] = (undefined4 **)((uint)local_2ac[0] & 0xffffff00);
    ExceptionList = &local_14;
    FUN_00408ed0(in_ECX,0,0xffffffff);
    local_c = 4;
    local_11c = 0xf;
    pppuVar2 = (undefined4 ***)local_2ac[0];
    if (local_298 < 0x10) {
      pppuVar2 = local_2ac;
    }
    __snprintf(local_118,0xff,"%s",pppuVar2);
    FUN_0099ff90(param_1);
    local_c = 0xffffffff;
    if (0xf < local_298) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2ac[0]);
    }
    local_298 = 0xf;
    local_29c = 0;
    local_2ac[0] = (undefined4 **)((uint)local_2ac[0] & 0xffffff00);
  }
  local_c = 0xffffffff;
  if (param_2 == '\0') {
    FUN_004013e0(param_1);
  }
  ExceptionList = local_14;
  return;
}

