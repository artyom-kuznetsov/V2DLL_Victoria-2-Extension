// FUN_007b00a0 @ 007b00a0 body=[[007b00a0, 007b0140] [007b0166, 007b0176]]


void FUN_007b00a0(undefined4 *param_1)

{
  int in_ECX;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 *local_20;
  undefined4 *local_1c;
  undefined4 *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00b3ef56;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffb0;
  local_18 = param_1;
  local_8 = 0;
  ExceptionList = &local_10;
  for (; in_ECX != 0; in_ECX = in_ECX + -1) {
    local_44 = 0;
    local_40 = 0;
    local_3c = 0;
    local_38 = 0;
    local_30 = 0;
    local_2c = 0;
    local_28 = 0;
    local_1c = param_1;
    if (param_1 != (undefined4 *)0x0) {
      local_20 = param_1 + 1;
      *param_1 = 0;
      *local_20 = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      local_8._0_1_ = 3;
      FUN_009beeb0(&local_40);
      local_20 = param_1 + 5;
      *local_20 = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      local_8 = CONCAT31(local_8._1_3_,5);
      FUN_009beeb0(&local_30);
    }
    local_8 = local_8 & 0xffffff00;
    FUN_007a91c0(&local_44);
    param_1 = param_1 + 9;
  }
  ExceptionList = local_10;
  return;
}

