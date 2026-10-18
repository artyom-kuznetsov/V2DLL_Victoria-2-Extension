// FUN_0055e380 @ 0055e380 body=[[0055e380, 0055e3e7] [0055e3eb, 0055e40a]]


undefined * FUN_0055e380(void)

{
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b5adc6;
  local_10 = ExceptionList;
  if ((DAT_013f296c & 1) == 0) {
    DAT_013f296c = DAT_013f296c | 1;
    local_8 = 0;
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    ExceptionList = &local_10;
    FUN_00409350("NullCrime",9);
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_0055e0a0(local_2c);
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
    _atexit(FUN_00c7ff10);
  }
  ExceptionList = local_10;
  return &DAT_013f28f0;
}

