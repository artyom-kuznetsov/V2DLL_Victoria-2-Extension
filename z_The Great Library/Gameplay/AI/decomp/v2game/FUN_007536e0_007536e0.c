// FUN_007536e0 @ 007536e0 body=[[007536e0, 0075384b] [00753852, 00753883]]


undefined4 * FUN_007536e0(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b97d76;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar1 = (int *)(**(code **)(*param_2 + 0x34))();
  iVar2 = (**(code **)(*piVar1 + 0x48))(param_3);
  *param_1 = &PTR___purecall_00e38700;
  param_1[6] = 0xf;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  FUN_00408ed0(iVar2 + 0x24,0,0xffffffff);
  local_8 = 0;
  FUN_009a4bd0(param_1 + 1,param_1);
  *param_1 = CCountryView::vftable;
  param_1[8] = CButtonObserverGlue<CCountryView>::vftable;
  param_1[9] = param_1;
  param_1[10] = &LAB_007538c0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  local_8._0_1_ = 2;
  local_8._1_3_ = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = param_2;
  *(undefined1 *)(param_1 + 0x16) = 0;
  piVar1 = (int *)(**(code **)(*param_2 + 0x34))();
  local_14 = (undefined4 *)(*piVar1 + 0x2c);
  uVar3 = (**(code **)(*(int *)param_1[0x15] + 0x3c))();
  iVar2 = (*(code *)*local_14)(param_3,uVar3);
  param_1[0x13] = iVar2;
  (**(code **)(*(int *)(iVar2 + 0x18) + 0x38))();
  piVar1 = (int *)(**(code **)(*(int *)param_1[0x15] + 0x34))();
  iVar2 = *piVar1;
  uVar3 = (**(code **)(*(int *)param_1[0x15] + 0x3c))();
  iVar2 = (**(code **)(iVar2 + 0x2c))(param_4,uVar3);
  param_1[0x14] = iVar2;
  (**(code **)(*(int *)(iVar2 + 0x18) + 0x38))();
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("close_button",0xc);
  local_8._0_1_ = 3;
  iVar2 = (**(code **)(*(int *)param_1[0x13] + 0x34))(local_30);
  local_8 = CONCAT31(local_8._1_3_,2);
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  if (iVar2 != 0) {
    (**(code **)(*(int *)(iVar2 + 0x54) + 4))(param_1 + 8);
  }
  ExceptionList = local_10;
  return param_1;
}

