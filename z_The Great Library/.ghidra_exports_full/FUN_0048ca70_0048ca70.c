// FUN_0048ca70 @ 0048ca70 body=[[0048ca70, 0048cacd] [0048caf2, 0048cb02]]


void FUN_0048ca70(int param_1,undefined4 param_2)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b468d1;
  local_10 = ExceptionList;
  uStack_7 = 0;
  ExceptionList = &local_10;
  for (; in_ECX != 0; in_ECX = in_ECX + -1) {
    local_8 = 1;
    if (param_1 != 0) {
      FUN_0047db00(param_1,param_2);
    }
    param_1 = param_1 + 0x58;
  }
  ExceptionList = local_10;
  return;
}

