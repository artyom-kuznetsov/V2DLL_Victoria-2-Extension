// FUN_00490c40 @ 00490c40 body=[[00490c40, 00490cc4] [00490cc8, 00490ce1]]


undefined4 * FUN_00490c40(undefined4 *param_1)

{
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b5ab10;
  local_10 = ExceptionList;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350(&DAT_00dfbe80,4);
  local_8 = 0;
  FUN_0044bc60(param_1);
  local_8 = CONCAT31(local_8._1_3_,1);
  *param_1 = CClimate::vftable;
  param_1[0x11] = 0xf;
  param_1[0x10] = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  FUN_00408ed0(local_2c,0,0xffffffff);
  param_1[0x13] = 0xffffffff;
  param_1[0x14] = 0;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  *param_1 = CNullClimate::vftable;
  ExceptionList = local_10;
  return param_1;
}

