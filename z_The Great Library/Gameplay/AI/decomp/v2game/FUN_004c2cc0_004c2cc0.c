// FUN_004c2cc0 @ 004c2cc0 body=[[004c2cc0, 004c2d1a] [004c2d42, 004c2d54]]


int FUN_004c2cc0(int param_1,int param_2)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b4cfa1;
  local_10 = ExceptionList;
  uStack_7 = 0;
  ExceptionList = &local_10;
  for (; in_ECX != param_1; in_ECX = in_ECX + 0xb0) {
    local_8 = 1;
    if (param_2 != 0) {
      FUN_004c2d60();
    }
    param_2 = param_2 + 0xb0;
  }
  ExceptionList = local_10;
  return param_2;
}

