// FUN_004562e0 @ 004562e0 body=[[004562e0, 00456373] [00456377, 004563df] [004563e3, 004563f3]]


void FUN_004562e0(void)

{
  undefined4 uVar1;
  int in_ECX;
  uint local_64 [5];
  uint local_50;
  uint local_48 [4];
  undefined4 local_38;
  uint local_34;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b774f8;
  local_10 = ExceptionList;
  if ((*(int *)(in_ECX + 0x14) == 0) || (*(int *)(in_ECX + 0x10) == 0)) {
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    ExceptionList = &local_10;
    FUN_00409350(&DAT_00ded94d,0);
    local_8 = 0;
    FUN_00408ed0(local_2c,0,0xffffffff);
    FUN_00a5ecc0(local_2c,0);
    local_64[0] = local_2c[0];
    local_50 = local_18;
  }
  else {
    ExceptionList = &local_10;
    uVar1 = (**(code **)(**(int **)(in_ECX + 0x14) + 0x18))(local_64);
    local_8 = 1;
    uVar1 = FUN_0042c180(local_48,uVar1);
    local_8 = CONCAT31(local_8._1_3_,2);
    FUN_00408ed0(uVar1,0,0xffffffff);
    FUN_00a5ecc0(uVar1,0);
    if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_48[0]);
    }
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
  }
  if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_64[0]);
  }
  ExceptionList = local_10;
  return;
}

