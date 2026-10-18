// FUN_006d1c80 @ 006d1c80 body=[[006d1c80, 006d1d1b] [006d1d1f, 006d1d8c] [006d1d90, 006d1dfe]]


undefined4 * FUN_006d1c80(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_EDI;
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  undefined4 *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b7e419;
  local_10 = ExceptionList;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("all_party_window",0x10);
  local_8 = 0;
  piVar1 = (int *)(**(code **)(*unaff_EDI + 0x34))();
  iVar2 = (**(code **)(*piVar1 + 0x48))(local_34);
  *param_1 = &PTR___purecall_00e38700;
  param_1[6] = 0xf;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  FUN_00408ed0(iVar2 + 0x24,0,0xffffffff);
  local_8._0_1_ = 1;
  FUN_009a4bd0(param_1 + 1,param_1);
  local_8._0_1_ = 3;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  *param_1 = CListPartiesWindow::vftable;
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  FUN_00409350("all_party_window",0x10);
  local_8._0_1_ = 4;
  local_14 = (int *)(**(code **)(*unaff_EDI + 0x34))();
  local_18 = (undefined4 *)(*local_14 + 0x2c);
  uVar3 = (**(code **)(*unaff_EDI + 0x3c))();
  uVar3 = (*(code *)*local_18)(local_50,uVar3);
  param_1[8] = uVar3;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50[0]);
  }
  param_1[9] = unaff_EDI;
  param_1[10] = CButtonObserverGlue<CListPartiesWindow>::vftable;
  param_1[0xb] = param_1;
  param_1[0xc] = FUN_006d2520;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = CButtonObserverGlue<CListPartiesWindow>::vftable;
  param_1[0x16] = param_1;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = FUN_006d2550;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  local_8 = CONCAT31(local_8._1_3_,6);
  FUN_006d1f80();
  ExceptionList = local_10;
  return param_1;
}

