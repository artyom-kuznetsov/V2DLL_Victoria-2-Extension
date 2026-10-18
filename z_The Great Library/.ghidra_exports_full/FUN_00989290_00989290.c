// FUN_00989290 @ 00989290 body=[[00989290, 009892e5] [009892e9, 00989321]]


undefined4 FUN_00989290(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 local_2c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3def8;
  local_10 = ExceptionList;
  if (param_2 < 0) {
    ExceptionList = &local_10;
    uVar1 = FUN_0098a0d0(&param_1);
    ExceptionList = local_10;
    return uVar1;
  }
  ExceptionList = &local_10;
  FUN_009895f0(param_2);
  local_8 = 0;
  uVar1 = FUN_00989290(param_1,0xffffffff);
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c);
  }
  ExceptionList = local_10;
  return uVar1;
}

