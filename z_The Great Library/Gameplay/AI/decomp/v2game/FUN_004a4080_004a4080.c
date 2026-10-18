// FUN_004a4080 @ 004a4080 body=[[004a4080, 004a40d5] [004a40f5, 004a4107]]


int FUN_004a4080(int param_1,int param_2)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b40151;
  local_10 = ExceptionList;
  uStack_7 = 0;
  ExceptionList = &local_10;
  for (; in_ECX != param_1; in_ECX = in_ECX + 0x48) {
    local_8 = 1;
    if (param_2 != 0) {
      FUN_004a3dd0(param_2);
    }
    param_2 = param_2 + 0x48;
  }
  ExceptionList = local_10;
  return param_2;
}

