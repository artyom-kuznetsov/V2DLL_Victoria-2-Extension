// FUN_00748b20 @ 00748b20 body=[[00748b20, 00748c1a] [00748c1e, 00748c32]]


undefined4 * FUN_00748b20(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b50434;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[5] = CButtonObserverGlue<CNationalFocusView>::vftable;
  param_1[6] = param_1;
  param_1[7] = FUN_00749970;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0xffffffff;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  local_8 = 2;
  uStack_7 = 0;
  param_1[0x15] = 0;
  iVar1 = FUN_00aae9af(0x58);
  local_8 = 3;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x3c))();
    uVar2 = FUN_00455b40(iVar1);
  }
  local_8 = 2;
  param_1[0x16] = uVar2;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("cancel_button",0xd);
  _local_8 = CONCAT31(uStack_7,4);
  iVar1 = (**(code **)(*(int *)*param_1 + 0x34))(local_2c);
  (**(code **)(*(int *)(iVar1 + 0x54) + 4))(param_1 + 5);
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  ExceptionList = local_10;
  return param_1;
}

