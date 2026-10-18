// FUN_0071b200 @ 0071b200 body=[[0071b200, 0071b2e4] [0071b2e8, 0071b33a] [0071b33e, 0071b38b] [0071b38f, 0071b3a9]]


int * FUN_0071b200(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int in_EDX;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b8a99e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = param_2;
  param_1[1] = in_EDX;
  param_1[2] = param_3;
  param_1[3] = (int)CButtonObserverGlue<CGoodsEntry>::vftable;
  param_1[4] = (int)param_1;
  param_1[5] = (int)&LAB_0071c600;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = (int)CButtonObserverGlue<CGoodsEntry>::vftable;
  param_1[0xf] = (int)param_1;
  param_1[0x10] = (int)&LAB_0071c5e0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  local_8 = 1;
  uStack_7 = 0;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("goods_type",10);
  local_8 = 2;
  piVar1 = (int *)(**(code **)(*(int *)param_1[1] + 0x34))(local_2c);
  (**(code **)(*piVar1 + 0x48))(*(int *)(param_2 + 8) + 2);
  local_8 = 1;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("goods_type",10);
  local_8 = 3;
  iVar2 = (**(code **)(*(int *)param_1[1] + 0x34))(local_2c);
  (**(code **)(*(int *)(iVar2 + 0x54) + 4))(param_1 + 0xe);
  local_8 = 1;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("entry_button",0xc);
  local_8 = 4;
  iVar2 = (**(code **)(*(int *)param_1[1] + 0x34))(local_2c);
  (**(code **)(*(int *)(iVar2 + 0x54) + 4))(param_1 + 3);
  _local_8 = CONCAT31(uStack_7,1);
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  FUN_0071b3b0(param_1);
  ExceptionList = local_10;
  return param_1;
}

