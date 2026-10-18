// FUN_00a375d0 @ 00a375d0 body=[[00a375d0, 00a37623] [00a37645, 00a37657]]


int FUN_00a375d0(int param_1,int param_2)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b4e3d1;
  local_10 = ExceptionList;
  uStack_7 = 0;
  ExceptionList = &local_10;
  for (; in_ECX != param_1; in_ECX = in_ECX + 0x54) {
    local_8 = 1;
    if (param_2 != 0) {
      FUN_00a37430(param_2);
    }
    param_2 = param_2 + 0x54;
  }
  ExceptionList = local_10;
  return param_2;
}

