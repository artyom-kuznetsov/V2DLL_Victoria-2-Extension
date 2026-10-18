// FUN_00a7e0e0 @ 00a7e0e0 body=[[00a7e0e0, 00a7e135] [00a7e157, 00a7e169]]


int FUN_00a7e0e0(int param_1,int param_2)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b3b401;
  local_10 = ExceptionList;
  uStack_7 = 0;
  ExceptionList = &local_10;
  for (; in_ECX != param_1; in_ECX = in_ECX + 0x60) {
    local_8 = 1;
    if (param_2 != 0) {
      FUN_00a7db30(in_ECX);
    }
    param_2 = param_2 + 0x60;
  }
  ExceptionList = local_10;
  return param_2;
}

