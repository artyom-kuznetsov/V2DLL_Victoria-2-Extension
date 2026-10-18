// FUN_005db300 @ 005db300 body=[[005db300, 005db38e] [005db392, 005db3b3] [005db3b7, 005db45c] [005db460, 005db481] [005db485, 005db4a4] [005db4a8, 005db4ba]]


void FUN_005db300(int param_1)

{
  undefined4 uVar1;
  int in_ECX;
  uint local_9c [4];
  undefined4 local_8c;
  uint local_88;
  uint local_80;
  undefined4 local_70;
  uint local_6c;
  uint local_64;
  undefined4 local_54;
  uint local_50;
  uint local_48;
  undefined4 local_38;
  uint local_34;
  uint local_2c;
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b45d0b;
  local_10 = ExceptionList;
  if (param_1 != 0) {
    ExceptionList = &local_10;
    if (0 < *(int *)(in_ECX + 0x10)) {
      ExceptionList = &local_10;
      FUN_00448740();
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c = local_2c & 0xffffff00;
    FUN_00409350();
    local_8 = 0;
    uVar1 = FUN_00988f20();
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_00448aa0(uVar1);
    if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = 0xffffffff;
    local_50 = 0xf;
    local_54 = 0;
    local_64 = local_64 & 0xffffff00;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    FUN_00448740();
    if (0 < param_1) {
      FUN_00448740();
    }
    local_34 = 0xf;
    local_38 = 0;
    local_48 = local_48 & 0xffffff00;
    FUN_00409350();
    local_8 = 2;
    FUN_00988a50(local_9c);
    local_8._0_1_ = 3;
    uVar1 = FUN_00988f20();
    local_8 = CONCAT31(local_8._1_3_,4);
    FUN_00448aa0(uVar1);
    if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_6c = 0xf;
    local_70 = 0;
    local_80 = local_80 & 0xffffff00;
    if (0xf < local_88) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_88 = 0xf;
    local_8c = 0;
    local_9c[0] = local_9c[0] & 0xffffff00;
    if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  ExceptionList = local_10;
  return;
}

