// FUN_009f2ff0 @ 009f2ff0 body=[[009f2ff0, 009f306f] [009f3073, 009f30ec] [009f30f0, 009f310d] [009f3111, 009f3131] [009f3135, 009f3191] [009f3195, 009f3208] [009f320c, 009f3226] [009f322a, 009f324e] [009f3267, 009f3284]]


undefined4 FUN_009f2ff0(undefined4 param_1)

{
  char cVar1;
  int in_ECX;
  undefined4 local_c0 [5];
  uint local_ac;
  undefined4 local_a4 [5];
  uint local_90;
  uint local_88;
  undefined4 local_78;
  uint local_74;
  uint local_6c;
  undefined4 local_5c;
  uint local_58;
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  undefined4 local_18;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4945a;
  local_10 = ExceptionList;
  local_18 = 0;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350(&DAT_00ded94d,0);
  local_8 = 0;
  local_18 = 1;
  cVar1 = FUN_00416db0();
  if ((cVar1 != '\0') || (local_11 = '\x01', *(char *)(in_ECX + 0x24) != '\0')) {
    local_11 = '\0';
  }
  local_8 = 0xffffffff;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  if (local_11 == '\0') {
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    FUN_00409350(&DAT_00ded94d,0);
    local_8 = 4;
    cVar1 = FUN_00416db0();
    local_11 = cVar1 == '\0';
    local_8 = 0xffffffff;
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_34[0]);
    }
    if (!(bool)local_11) {
      FUN_009f2390(param_1);
      ExceptionList = local_10;
      return param_1;
    }
    local_18 = FUN_009f2390(local_c0);
    local_8 = 5;
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = local_50[0] & 0xffffff00;
    FUN_00409350(&DAT_00e3cff4,3);
    local_8._0_1_ = 6;
    FUN_00988f20(local_50);
    local_8 = CONCAT31(local_8._1_3_,7);
    FUN_00988f20(local_18);
    if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_6c);
    }
    local_58 = 0xf;
    local_5c = 0;
    local_6c = local_6c & 0xffffff00;
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_50[0]);
    }
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = local_50[0] & 0xffffff00;
    if (0xf < local_ac) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_c0[0]);
    }
  }
  else {
    local_18 = FUN_009f2390(local_a4);
    local_8 = 1;
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    FUN_00409350(&DAT_00e3cff0,2);
    local_8._0_1_ = 2;
    FUN_00988f20(local_34);
    local_8 = CONCAT31(local_8._1_3_,3);
    FUN_00988f20(local_18);
    if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_88);
    }
    local_74 = 0xf;
    local_78 = 0;
    local_88 = local_88 & 0xffffff00;
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_34[0]);
    }
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    if (0xf < local_90) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_a4[0]);
    }
  }
  ExceptionList = local_10;
  return param_1;
}

