// FUN_006f95b0 @ 006f95b0 body=[[006f95b0, 006f9647] [006f964b, 006f96c0] [006f96c4, 006f976c]]


undefined4 * FUN_006f95b0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_EDI;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  undefined4 *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b7d143;
  local_10 = ExceptionList;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("build_factory",0xd);
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
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  param_1[9] = CChoiceObserver<CStandardlistboxItem>::vftable;
  local_8._0_1_ = 4;
  *param_1 = CBuildFactoryWindow::vftable;
  param_1[9] = CBuildFactoryWindow::vftable;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  FUN_00409350("build_factory",0xd);
  local_8._0_1_ = 5;
  local_14 = (int *)(**(code **)(*unaff_EDI + 0x34))();
  local_18 = (undefined4 *)(*local_14 + 0x2c);
  uVar3 = (**(code **)(*unaff_EDI + 0x3c))();
  uVar3 = (*(code *)*local_18)(local_34,uVar3);
  param_1[10] = uVar3;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  param_1[0xb] = unaff_EDI;
  FUN_00705040(FUN_006f9f40,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  FUN_00705040(FUN_006f9ff0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  param_1[0x34] = param_2;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  local_8 = CONCAT31(local_8._1_3_,9);
  param_1[0x3e] = param_3;
  FUN_006f9920();
  ExceptionList = local_10;
  return param_1;
}

