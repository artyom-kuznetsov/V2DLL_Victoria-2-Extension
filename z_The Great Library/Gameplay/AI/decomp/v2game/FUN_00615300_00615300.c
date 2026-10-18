// FUN_00615300 @ 00615300 body=[[00615300, 0061536a] [0061538a, 0061539c]]


undefined1 * FUN_00615300(int param_1,undefined1 *param_2)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b3f731;
  local_10 = ExceptionList;
  uStack_7 = 0;
  ExceptionList = &local_10;
  for (; in_ECX != param_1; in_ECX = in_ECX + 0x20) {
    local_8 = 1;
    if (param_2 != (undefined1 *)0x0) {
      *(undefined4 *)(param_2 + 0x14) = 0xf;
      *(undefined4 *)(param_2 + 0x10) = 0;
      *param_2 = 0;
      FUN_00408ed0(in_ECX,0,0xffffffff);
      param_2[0x1c] = *(undefined1 *)(in_ECX + 0x1c);
    }
    param_2 = param_2 + 0x20;
  }
  ExceptionList = local_10;
  return param_2;
}

