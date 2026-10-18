// FUN_006a2e70 @ 006a2e70 body=[[006a2e70, 006a2ec4] [006a2ee5, 006a2ef7]]


int FUN_006a2e70(int param_1,int param_2)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b4c241;
  local_10 = ExceptionList;
  uStack_7 = 0;
  ExceptionList = &local_10;
  for (; in_ECX != param_1; in_ECX = in_ECX + 0x58) {
    local_8 = 1;
    if (param_2 != 0) {
      FUN_006a24d0(param_2,in_ECX);
    }
    param_2 = param_2 + 0x58;
  }
  ExceptionList = local_10;
  return param_2;
}

