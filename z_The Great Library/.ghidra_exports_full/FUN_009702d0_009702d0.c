// FUN_009702d0 @ 009702d0 body=[[009702d0, 00970387] [009703ab, 009703bb]]


void FUN_009702d0(undefined4 *param_1,int param_2)

{
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 *local_24;
  undefined4 *local_20;
  undefined4 *local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b41fe4;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffa0;
  local_1c = param_1;
  uStack_7 = 0;
  ExceptionList = &local_10;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    local_34 = 0;
    local_30 = 0;
    local_2c = 0;
    if (param_1 != (undefined4 *)0x0) {
      local_24 = param_1 + 2;
      param_1[1] = 0x18d;
      *param_1 = CAdditiveMTTH::vftable;
      *local_24 = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      local_8 = 3;
      local_20 = param_1;
      FUN_0096fa80();
      param_1[6] = 0;
      local_24 = param_1 + 8;
      param_1[7] = 0;
      *local_24 = 0;
      param_1[9] = 0;
      param_1[10] = 0;
      local_8 = 5;
      FUN_009beeb0(&local_34);
    }
    param_1 = param_1 + 0xc;
  }
  ExceptionList = local_10;
  return;
}

