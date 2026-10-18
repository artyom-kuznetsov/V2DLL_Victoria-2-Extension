// FUN_00976cf0 @ 00976cf0 body=[[00976cf0, 00976d46] [00976d6b, 00976d7d]]


int FUN_00976cf0(int param_1,int param_2)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b4a701;
  local_10 = ExceptionList;
  uStack_7 = 0;
  ExceptionList = &local_10;
  for (; in_ECX != param_1; in_ECX = in_ECX + 0x50) {
    local_8 = 1;
    if (param_2 != 0) {
      FUN_00976c40(param_2,in_ECX);
    }
    param_2 = param_2 + 0x50;
  }
  ExceptionList = local_10;
  return param_2;
}

