// FUN_00a12c20 @ 00a12c20 body=[[00a12c20, 00a12c74] [00a12c9a, 00a12cac]]


int FUN_00a12c20(int param_1,int param_2)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b3dbf1;
  local_10 = ExceptionList;
  uStack_7 = 0;
  ExceptionList = &local_10;
  for (; in_ECX != param_1; in_ECX = in_ECX + 0x50) {
    local_8 = 1;
    if (param_2 != 0) {
      FUN_00a0bcd0();
    }
    param_2 = param_2 + 0x50;
  }
  ExceptionList = local_10;
  return param_2;
}

