// FUN_00a524f0 @ 00a524f0 body=[[00a524f0, 00a5255e]]


void FUN_00a524f0(undefined4 param_1,int param_2)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3def8;
  local_10 = ExceptionList;
  local_8 = 0;
  if (param_2 != 0x23) {
    ExceptionList = &local_10;
    FUN_00a20b80(param_1,param_2);
    ExceptionList = local_10;
    return;
  }
  ExceptionList = &local_10;
  FUN_009a1750(in_ECX + 0x1a4,0);
  ExceptionList = local_10;
  return;
}

