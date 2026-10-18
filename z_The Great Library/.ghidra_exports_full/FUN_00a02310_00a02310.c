// FUN_00a02310 @ 00a02310 body=[[00a02310, 00a0237a]]


void FUN_00a02310(undefined4 param_1,undefined **param_2)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b56288;
  local_10 = ExceptionList;
  if (param_2 == (undefined **)0xdd) {
    param_2 = &PTR_FUN_00e3ede4;
    local_8 = 0;
    ExceptionList = &local_10;
    FUN_00a12570(param_1,in_ECX + 0x3c,&param_2);
    ExceptionList = local_10;
    return;
  }
  ExceptionList = &local_10;
  FUN_009a2620(param_1,param_2);
  ExceptionList = local_10;
  return;
}

