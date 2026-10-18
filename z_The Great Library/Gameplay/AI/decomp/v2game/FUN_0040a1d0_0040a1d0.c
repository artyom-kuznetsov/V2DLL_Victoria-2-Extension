// FUN_0040a1d0 @ 0040a1d0 body=[[0040a1d0, 0040a223] [0040a245, 0040a257]]


int FUN_0040a1d0(int param_1,int param_2)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b409d1;
  local_10 = ExceptionList;
  uStack_7 = 0;
  ExceptionList = &local_10;
  for (; in_ECX != param_1; in_ECX = in_ECX + 0x58) {
    local_8 = 1;
    if (param_2 != 0) {
      FUN_004014c0(param_2);
    }
    param_2 = param_2 + 0x58;
  }
  ExceptionList = local_10;
  return param_2;
}

