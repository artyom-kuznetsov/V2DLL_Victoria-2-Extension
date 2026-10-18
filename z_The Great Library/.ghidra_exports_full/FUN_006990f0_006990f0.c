// FUN_006990f0 @ 006990f0 body=[[006990f0, 00699176]]


undefined4 * FUN_006990f0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3f656;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  DAT_013f08e0 = DAT_013f08e0 + 1;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[7] = &PTR_FUN_00e39158;
  local_8 = 3;
  *(undefined1 *)(param_1 + 9) = 0;
  *param_1 = &PTR_FUN_00e392f0;
  param_1[7] = &PTR_FUN_00e39320;
  uVar1 = (**(code **)(*in_ECX + 0x2c))(param_2);
  param_1[8] = uVar1;
  *param_1 = CLedgerListboxItem::vftable;
  param_1[7] = CLedgerListboxItem::vftable;
  ExceptionList = local_10;
  return param_1;
}

