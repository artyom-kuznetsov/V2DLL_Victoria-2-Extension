// FUN_0054b7c0 @ 0054b7c0 body=[[0054b7c0, 0054b82f] [0054b855, 0054b865]]


void FUN_0054b7c0(undefined4 *param_1)

{
  int in_ECX;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 *local_1c;
  undefined4 *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b3cf71;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc4;
  local_18 = param_1;
  uStack_7 = 0;
  ExceptionList = &local_10;
  for (; in_ECX != 0; in_ECX = in_ECX + -1) {
    local_2c = 0;
    local_28 = 0;
    local_24 = 0;
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      local_8 = 3;
      local_1c = param_1;
      FUN_009beeb0(&local_2c);
    }
    param_1 = param_1 + 4;
  }
  ExceptionList = local_10;
  return;
}

