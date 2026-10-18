// FUN_00a40f80 @ 00a40f80 body=[[00a40f80, 00a40fd4] [00a40ff5, 00a41007]]


int FUN_00a40f80(int param_1,int param_2)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b3d9b1;
  local_10 = ExceptionList;
  uStack_7 = 0;
  ExceptionList = &local_10;
  for (; in_ECX != param_1; in_ECX = in_ECX + 0x74) {
    local_8 = 1;
    if (param_2 != 0) {
      FUN_00a40e20();
    }
    param_2 = param_2 + 0x74;
  }
  ExceptionList = local_10;
  return param_2;
}

