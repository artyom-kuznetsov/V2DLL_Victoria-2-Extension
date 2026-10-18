// FUN_006c6ff0 @ 006c6ff0 body=[[006c6ff0, 006c7126]]


undefined4
FUN_006c6ff0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 *param_4)

{
  int iVar1;
  undefined8 uVar2;
  int local_58;
  int *local_54;
  int local_50;
  int local_48;
  int *local_44;
  undefined1 local_40 [4];
  undefined1 *local_3c;
  int local_38;
  int local_30;
  int *local_2c;
  int local_28;
  int local_24;
  int local_1c;
  int local_18;
  undefined4 local_14;
  int local_10;
  int local_c;
  int local_8;
  
  *param_4 = 0;
  local_10 = 0;
  local_8 = 0;
  local_2c = (int *)FUN_004d0070();
  local_28 = *local_2c;
  local_c = local_28;
  while (local_c != 0) {
    local_30 = local_c;
    local_1c = local_c;
    local_c = *(int *)(local_c + 0x224);
    local_14 = FUN_0043a900();
    FUN_004f2b70();
    iVar1 = FUN_004ee980();
    local_10 = iVar1 + local_10;
    local_44 = (int *)FUN_004f5260();
    local_3c = local_40;
    local_38 = local_8 + *local_44;
    local_8 = local_38;
  }
  if (local_10 != 0) {
    *param_4 = 1;
    local_48 = FUN_004d0070();
    local_18 = *(int *)(local_48 + 8);
    if (0 < local_18) {
      local_58 = local_18 * 1000;
      local_54 = &local_58;
      local_24 = local_58;
      uVar2 = __allmul(local_8,local_8 >> 0x1f,1000,0);
      local_50 = __alldiv(uVar2,local_58,local_58 >> 0x1f);
      local_8 = local_50;
    }
  }
  FUN_00414cc0(&local_8);
  return param_1;
}

