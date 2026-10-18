// FUN_007a9630 @ 007a9630 body=[[007a9630, 007a96c3] [007a96c7, 007a96e4] [007a96e8, 007a96f7]]


void FUN_007a9630(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  uint local_48 [4];
  undefined4 local_38;
  uint local_34;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4e110;
  local_10 = ExceptionList;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("group_name",10);
  local_8 = 0;
  uVar1 = (**(code **)*in_ECX)(local_48);
  local_8 = CONCAT31(local_8._1_3_,1);
  (**(code **)(*(int *)*param_1 + 0x3c))(local_2c);
  FUN_00408ed0(uVar1,0,0xffffffff);
  FUN_00a5ecc0(uVar1,0);
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48[0]);
  }
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  local_34 = 0xf;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  ExceptionList = local_10;
  return;
}

