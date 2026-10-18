// FUN_00640880 @ 00640880 body=[[00640880, 006408f4] [006408f8, 0064095a] [0064095e, 006409a9]]


void FUN_00640880(void)

{
  int iVar1;
  undefined4 *in_ECX;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b4568e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = CEU3Dialog::vftable;
  local_8 = 2;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("AgreeButton",0xb);
  local_8._0_1_ = 3;
  iVar1 = (**(code **)(*(int *)in_ECX[1] + 0x34))(local_30);
  local_8._0_1_ = 2;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 0x54) + 8))(in_ECX + 3);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("DeclineButton",0xd);
  local_8._0_1_ = 4;
  iVar1 = (**(code **)(*(int *)in_ECX[1] + 0x34))(local_30);
  local_8 = CONCAT31(local_8._1_3_,2);
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 0x54) + 8))(in_ECX + 0xe);
  }
  (**(code **)(*(int *)in_ECX[1] + 0x50))();
  in_ECX[0xe] = CButtonObserver::vftable;
  in_ECX[3] = CButtonObserver::vftable;
  *in_ECX = CUpdateable::vftable;
  ExceptionList = local_10;
  return;
}

