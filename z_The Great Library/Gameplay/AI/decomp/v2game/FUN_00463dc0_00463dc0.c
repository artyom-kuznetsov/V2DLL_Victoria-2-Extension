// FUN_00463dc0 @ 00463dc0 body=[[00463dc0, 00463e07]]


void FUN_00463dc0(undefined4 param_1)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b40618;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  local_8 = 0;
  FUN_00463e10(param_1);
  ExceptionList = local_10;
  return;
}

