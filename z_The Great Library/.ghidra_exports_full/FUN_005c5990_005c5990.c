// FUN_005c5990 @ 005c5990 body=[[005c5990, 005c5a21] [005c5a47, 005c5a57]]


void FUN_005c5990(undefined4 *param_1,int param_2)

{
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined2 local_24;
  undefined4 *local_20;
  undefined4 *local_1c;
  undefined4 *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b3cda1;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffb8;
  local_18 = param_1;
  uStack_7 = 0;
  ExceptionList = &local_10;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    local_34 = 0;
    local_30 = 0;
    local_2c = 0;
    local_24 = 0;
    if (param_1 != (undefined4 *)0x0) {
      local_20 = param_1 + 2;
      param_1[1] = 0x18d;
      *param_1 = CUniqueUnitNameInternal::vftable;
      *local_20 = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      local_8 = 3;
      local_1c = param_1;
      FUN_009d5f10(&local_34);
      *(undefined2 *)(param_1 + 6) = 0;
    }
    param_1 = param_1 + 7;
  }
  ExceptionList = local_10;
  return;
}

