// FUN_009f7cb0 @ 009f7cb0 body=[[009f7cb0, 009f7d76] [009f7d7a, 009f7d96] [009f7d9a, 009f7db1] [009f7db5, 009f7dc7]]


void FUN_009f7cb0(int param_1)

{
  undefined4 uVar1;
  int in_ECX;
  undefined4 local_80;
  uint local_6c;
  undefined4 local_64;
  uint local_50;
  undefined4 local_48;
  uint local_34;
  undefined4 local_2c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4e920;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined1 *)(param_1 + 0xb5) = 1;
  if (in_ECX < *(int *)(param_1 + 0x28) + -1) {
    uVar1 = FUN_009895f0(*(int *)(param_1 + 0x28));
    local_8 = 1;
    FUN_009895f0(in_ECX);
    local_8._0_1_ = 2;
    uVar1 = FUN_00988f20(uVar1);
    local_8 = CONCAT31(local_8._1_3_,3);
    FUN_00408ed0(uVar1,0,0xffffffff);
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c);
    }
    local_64 = local_80;
    local_50 = local_6c;
    if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_48);
    }
  }
  else {
    uVar1 = FUN_009895f0(in_ECX);
    local_8 = 0;
    FUN_00408ed0(uVar1,0,0xffffffff);
  }
  if (local_50 < 0x10) {
    ExceptionList = local_10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_64);
}

