// FUN_004c0a50 @ 004c0a50 body=[[004c0a50, 004c0aab] [004c0ad3, 004c0ae5]]


int FUN_004c0a50(int param_1,int param_2)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b51781;
  local_10 = ExceptionList;
  uStack_7 = 0;
  ExceptionList = &local_10;
  for (; in_ECX != param_1; in_ECX = in_ECX + 0x220) {
    local_8 = 1;
    if (param_2 != 0) {
      FUN_004f2e50(param_2);
    }
    param_2 = param_2 + 0x220;
  }
  ExceptionList = local_10;
  return param_2;
}

