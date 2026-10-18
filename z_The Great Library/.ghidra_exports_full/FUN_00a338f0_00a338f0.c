// FUN_00a338f0 @ 00a338f0 body=[[00a338f0, 00a33977] [00a3397b, 00a339c4] [00a339c8, 00a339f0] [00a339f4, 00a33a50]]


void FUN_00a338f0(undefined4 *param_1)

{
  int iVar1;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b48cff;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = &PTR_FUN_00e405f4;
  param_1[7] = &PTR_LAB_00e40628;
  local_8 = 3;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("close",5);
  local_8._0_1_ = 4;
  iVar1 = (**(code **)(*(int *)param_1[8] + 0x34))(local_2c);
  (**(code **)(*(int *)(iVar1 + 0x54) + 8))(param_1 + 0x14);
  local_8._0_1_ = 3;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("select",6);
  local_8 = CONCAT31(local_8._1_3_,5);
  iVar1 = (**(code **)(*(int *)param_1[8] + 0x34))(local_2c);
  (**(code **)(*(int *)(iVar1 + 0x54) + 8))(param_1 + 0x28);
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  param_1[0x28] = CButtonObserver::vftable;
  param_1[0x14] = CButtonObserver::vftable;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  if (0xf < (uint)param_1[0x10]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0xb]);
  }
  param_1[0x10] = 0xf;
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  *param_1 = &PTR_FUN_00e392f0;
  param_1[7] = &PTR_FUN_00e39320;
  local_8 = 7;
  if ((int *)param_1[8] != (int *)0x0) {
    (**(code **)(*(int *)param_1[8] + 0x50))();
  }
  local_8 = 0xffffffff;
  param_1[7] = &PTR_FUN_00e39158;
  *param_1 = &PTR_FUN_00e38708;
  FUN_009a62b0();
  ExceptionList = local_10;
  return;
}

