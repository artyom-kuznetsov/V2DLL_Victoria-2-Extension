// FUN_004e0490 @ 004e0490 body=[[004e0490, 004e04ec] [004e0514, 004e0526]]


int FUN_004e0490(int param_1,int param_2)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b4cf31;
  local_10 = ExceptionList;
  uStack_7 = 0;
  ExceptionList = &local_10;
  for (; in_ECX != param_1; in_ECX = in_ECX + 0x160) {
    local_8 = 1;
    if (param_2 != 0) {
      FUN_004dff10(param_2,in_ECX);
    }
    param_2 = param_2 + 0x160;
  }
  ExceptionList = local_10;
  return param_2;
}

