// FUN_0046e950 @ 0046e950 body=[[0046e950, 0046e9ec] [0046e9f0, 0046ea09]]


undefined4 * FUN_0046e950(undefined4 *param_1)

{
  undefined4 in_ECX;
  undefined4 in_EDX;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b938de;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = CNewsManagerList::vftable;
  param_1[1] = 0;
  param_1[2] = in_ECX;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[9] = 0;
  param_1[10] = in_EDX;
  param_1[0xb] = CWindowObserverGlue<CNewsManagerList>::vftable;
  param_1[0xc] = param_1;
  param_1[0xd] = 0;
  param_1[0xe] = FUN_0046eb00;
  local_8 = 1;
  uStack_7 = 0;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("interface/news.gui",0x12);
  local_8 = 2;
  FUN_009a4bd0(local_2c,param_1);
  _local_8 = CONCAT31(uStack_7,1);
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  FUN_0046ed30();
  ExceptionList = local_10;
  return param_1;
}

