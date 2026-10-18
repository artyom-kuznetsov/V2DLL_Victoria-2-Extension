// FUN_00791a50 @ 00791a50 body=[[00791a50, 00791ad9] [00791add, 00791b6c] [00791b70, 00791bae]]


undefined1 * FUN_00791a50(undefined1 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *unaff_EDI;
  uint local_38 [4];
  undefined4 local_28;
  uint local_24;
  undefined4 *local_1c;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b439cb;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  local_8 = 0;
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  FUN_00409350("single_unitpanel",0x10);
  local_8._0_1_ = 1;
  local_14 = (int *)(**(code **)(*unaff_EDI + 0x34))();
  iVar1 = *local_14;
  uVar2 = (**(code **)(*unaff_EDI + 0x3c))();
  uVar2 = (**(code **)(iVar1 + 0x2c))(local_38,uVar2);
  local_8._0_1_ = 0;
  *(undefined4 *)(param_1 + 4) = uVar2;
  if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_38[0]);
  }
  FUN_0068ea30(7);
  local_14 = (int *)0x0;
  if (0 < (int)(*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10) & 0xfffffffcU)) {
    do {
      local_24 = 0xf;
      local_28 = 0;
      local_38[0] = local_38[0] & 0xffffff00;
      FUN_00409350("unittype_item",0xd);
      local_8._0_1_ = 2;
      local_18 = (int *)(**(code **)(*unaff_EDI + 0x34))();
      iVar1 = *local_18;
      local_1c = (undefined4 *)(*(int *)(param_1 + 0x10) + (int)local_14 * 4);
      uVar2 = (**(code **)(*unaff_EDI + 0x3c))();
      uVar2 = (**(code **)(iVar1 + 0x2c))(local_38,uVar2);
      *local_1c = uVar2;
      local_8._0_1_ = 0;
      if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_38[0]);
      }
      local_14 = (int *)((int)local_14 + 1);
    } while ((int)local_14 < *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10) >> 2);
  }
  *param_1 = 0;
  (**(code **)(*(int *)(*(int *)(param_1 + 4) + 0x18) + 0x38))();
  ExceptionList = local_10;
  return param_1;
}

