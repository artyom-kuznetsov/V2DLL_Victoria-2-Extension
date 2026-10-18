// FUN_004641f0 @ 004641f0 body=[[004641f0, 0046424b] [0046426f, 00464281]]


int FUN_004641f0(int param_1,int param_2)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b4d3c1;
  local_10 = ExceptionList;
  uStack_7 = 0;
  ExceptionList = &local_10;
  for (; in_ECX != param_1; in_ECX = in_ECX + 0xac) {
    local_8 = 1;
    if (param_2 != 0) {
      FUN_00463ca0(param_2);
    }
    param_2 = param_2 + 0xac;
  }
  ExceptionList = local_10;
  return param_2;
}

