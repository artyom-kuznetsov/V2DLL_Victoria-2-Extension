// FUN_009b1c20 @ 009b1c20 body=[[009b1c20, 009b1c7b] [009b1ca3, 009b1cb5]]


int FUN_009b1c20(int param_1,int param_2)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b3e2b1;
  local_10 = ExceptionList;
  uStack_7 = 0;
  ExceptionList = &local_10;
  for (; in_ECX != param_1; in_ECX = in_ECX + 0xa4) {
    local_8 = 1;
    if (param_2 != 0) {
      FUN_00648af0(param_2);
    }
    param_2 = param_2 + 0xa4;
  }
  ExceptionList = local_10;
  return param_2;
}

