// FUN_005699b0 @ 005699b0 body=[[005699b0, 00569af7] [00569afb, 00569b15] [00569b19, 00569b33] [00569b37, 00569b57] [00569b5b, 00569be1] [00569be5, 00569c37] [00569c3b, 00569c55] [00569c59, 00569c6d]]


undefined1 * FUN_005699b0(int param_1,undefined1 *param_2,int param_3)

{
  char cVar1;
  char *pcVar2;
  char local_a8 [32];
  uint local_88;
  undefined4 local_78;
  uint local_74;
  uint local_6c;
  undefined4 local_5c;
  uint local_58;
  uint local_50;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_34;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00b7244c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_2 + 0x14) = 0xf;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *param_2 = 0;
  local_8 = 0;
  local_34 = 1;
  if ((int)((double)((*(int *)(DAT_012588e8 + 0xb0c) + -43800000) / 0x18) / 365.0) <
      *(int *)(param_3 + 0x340)) {
    local_74 = 0xf;
    local_78 = 0;
    local_88 = local_88 & 0xffffff00;
    FUN_00409350();
    local_3c = 0xf;
    local_40 = 0;
    local_50 = local_50 & 0xffffff00;
    local_8._0_1_ = 2;
    local_8._1_3_ = 0;
    pcVar2 = __itoa(*(int *)(param_3 + 0x340),local_a8,10);
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    FUN_00409350();
    local_8._0_1_ = 3;
    FUN_0042c180();
    local_8._0_1_ = 4;
    FUN_00988f20();
    local_8._0_1_ = 5;
    FUN_00448aa0();
    if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_58 = 0xf;
    local_5c = 0;
    local_6c = local_6c & 0xffffff00;
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = (uint)local_8._1_3_ << 8;
    local_3c = 0xf;
    local_40 = 0;
    local_50 = local_50 & 0xffffff00;
    if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  cVar1 = (**(code **)(**(int **)(param_3 + 0x2ec) + 0x20))();
  if (cVar1 != '\0') {
    FUN_00409350(&DAT_00dedc20,2);
    FUN_009c98f0(local_30,0 < *(int *)(*(int *)(param_1 + 0x2b8) +
                                      *(int *)(*(int *)(param_3 + 0x2ec) + 0x2e4) * 4));
    local_8 = 6;
    FUN_00448aa0();
    local_8 = local_8 & 0xffffff00;
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    (**(code **)(**(int **)(param_3 + 0x2ec) + 0x18))();
    local_8 = 7;
    FUN_0042c180();
    local_8 = CONCAT31(local_8._1_3_,8);
    FUN_00448aa0();
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  ExceptionList = local_10;
  return param_2;
}

