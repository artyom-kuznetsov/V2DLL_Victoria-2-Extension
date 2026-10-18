// FUN_00692040 @ 00692040 body=[[00692040, 00692172] [00692176, 006921d9] [006921dd, 0069222e] [00692232, 0069227f] [00692283, 00692297]]


undefined4 * FUN_00692040(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b92bf4;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = CGotoBox::vftable;
  param_1[1] = CButtonObserverGlue<CGotoBox>::vftable;
  param_1[2] = param_1;
  param_1[3] = FUN_006922e0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = CButtonObserverGlue<CGotoBox>::vftable;
  param_1[0xd] = param_1;
  param_1[0xe] = &LAB_00692c10;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = CTextBufferObserverGlue<CGotoBox>::vftable;
  param_1[0x18] = param_1;
  param_1[0x19] = FUN_00692cd0;
  param_1[0x1a] = FUN_00692cd0;
  param_1[0x1b] = FUN_006922e0;
  param_1[0x1c] = CCheckBoxObserverGlue<CGotoBox>::vftable;
  param_1[0x1d] = param_1;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = FUN_006938f0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  local_8 = 4;
  uStack_7 = 0;
  param_1[0x25] = param_3;
  param_1[0x24] = param_2;
  param_1[0x27] = 0xffffffff;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("goto_box",8);
  local_8 = 5;
  uVar1 = (**(code **)(*(int *)param_1[0x24] + 0x2c))(local_2c,param_3);
  local_8 = 4;
  param_1[0x26] = uVar1;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  (**(code **)(*(int *)(param_1[0x26] + 0x18) + 0x38))();
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350(&DAT_00e0aef0,4);
  local_8 = 6;
  iVar2 = (**(code **)(*(int *)param_1[0x26] + 0x34))(local_2c);
  (**(code **)(*(int *)(iVar2 + 0x54) + 4))(param_1 + 1);
  local_8 = 4;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("cancel",6);
  local_8 = 7;
  iVar2 = (**(code **)(*(int *)param_1[0x26] + 0x34))(local_2c);
  (**(code **)(*(int *)(iVar2 + 0x54) + 4))(param_1 + 0xc);
  local_8 = 4;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("goto_edit",9);
  _local_8 = CONCAT31(uStack_7,8);
  iVar2 = (**(code **)(*(int *)param_1[0x26] + 0x40))(local_2c);
  (**(code **)(*(int *)(iVar2 + 0x54) + 4))(param_1 + 0x17);
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  ExceptionList = local_10;
  return param_1;
}

