// FUN_0048cb10 @ 0048cb10 body=[[0048cb10, 0048cb66] [0048cb8b, 0048cb9d]]


int FUN_0048cb10(int param_1,int param_2)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b4d0c1;
  local_10 = ExceptionList;
  uStack_7 = 0;
  ExceptionList = &local_10;
  for (; in_ECX != param_1; in_ECX = in_ECX + 0x58) {
    local_8 = 1;
    if (param_2 != 0) {
      FUN_0047db00(param_2,in_ECX);
    }
    param_2 = param_2 + 0x58;
  }
  ExceptionList = local_10;
  return param_2;
}

