// FUN_0085a1c0 @ 0085a1c0 body=[[0085a1c0, 0085a23c] [0085a240, 0085a257]]


undefined4 * FUN_0085a1c0(undefined4 *param_1)

{
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3f003;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[1] = 0x18d;
  *param_1 = CStringIntInt::vftable;
  param_1[8] = 0xf;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  local_8 = 0;
  param_1[2] = 0;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350(&DAT_00ded94d,0);
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_00408ed0(local_2c,0,0xffffffff);
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  param_1[10] = 0;
  ExceptionList = local_10;
  return param_1;
}

