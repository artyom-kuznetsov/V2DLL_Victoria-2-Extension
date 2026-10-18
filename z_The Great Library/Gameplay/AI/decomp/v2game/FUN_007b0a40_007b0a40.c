// FUN_007b0a40 @ 007b0a40 body=[[007b0a40, 007b0b03]]


undefined4 * FUN_007b0a40(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4fe63;
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
  local_8 = 1;
  *param_1 = CSideMenu::vftable;
  param_1[8] = param_2;
  param_1[9] = 0;
  piVar1 = (int *)(**(code **)(*param_2 + 0x34))();
  iVar2 = *piVar1;
  uVar3 = (**(code **)(*(int *)param_1[8] + 0x3c))();
  uVar3 = (**(code **)(iVar2 + 0x2c))(param_3,uVar3);
  param_1[9] = uVar3;
  ExceptionList = local_10;
  return param_1;
}

