// FUN_009b2840 @ 009b2840 body=[[009b2840, 009b28ad] [009b28b1, 009b28eb]]


void FUN_009b2840(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3bd56;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = &PTR_FUN_00e394b8;
  param_1[1] = &PTR_FUN_00e39538;
  local_8 = 1;
  if (param_1[0x38] != 0) {
    FUN_009963d0(param_1[0x38]);
  }
  FUN_009963d0(param_1[0x30]);
  if (0xf < (uint)param_1[0x36]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x31]);
  }
  param_1[0x36] = 0xf;
  param_1[0x35] = 0;
  *(undefined1 *)(param_1 + 0x31) = 0;
  local_8 = 0xffffffff;
  FUN_009b2910();
  ExceptionList = local_10;
  return;
}

