// FUN_007a5890 @ 007a5890 body=[[007a5890, 007a5957] [007a595b, 007a59ac] [007a59b0, 007a5a01] [007a5a05, 007a5a56] [007a5a5a, 007a5aae] [007a5ab2, 007a5b06] [007a5b0a, 007a5b5e] [007a5b62, 007a5bd0] [007a5bd4, 007a5ca4] [007a5ca8, 007a5cd1] [007a5cd5, 007a5d52]]


void FUN_007a5890(undefined4 *param_1)

{
  int iVar1;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b434be;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = CMetaserverInterface::vftable;
  param_1[1] = CMetaserverInterface::vftable;
  param_1[2] = CMetaserverInterface::vftable;
  local_8 = 0xf;
  if ((undefined4 *)param_1[0xed] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0xed])(1);
  }
  if ((undefined4 *)param_1[0xf4] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0xf4])(1);
  }
  if ((undefined4 *)param_1[0xf0] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0xf0])(1);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("Backbutton",10);
  local_8._0_1_ = 0x10;
  iVar1 = (**(code **)(*(int *)param_1[0xe6] + 0x34))(local_2c);
  (**(code **)(*(int *)(iVar1 + 0x54) + 8))(param_1 + 8);
  local_8._0_1_ = 0xf;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("LoginButton",0xb);
  local_8._0_1_ = 0x11;
  iVar1 = (**(code **)(*(int *)param_1[0xe5] + 0x34))(local_2c);
  (**(code **)(*(int *)(iVar1 + 0x54) + 8))(param_1 + 0x1c);
  local_8._0_1_ = 0xf;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("BackButton",10);
  local_8._0_1_ = 0x12;
  iVar1 = (**(code **)(*(int *)param_1[0xe4] + 0x34))(local_2c);
  (**(code **)(*(int *)(iVar1 + 0x54) + 8))(param_1 + 8);
  local_8._0_1_ = 0xf;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("CreateGame",10);
  local_8._0_1_ = 0x13;
  iVar1 = (**(code **)(*(int *)param_1[0xe6] + 0x34))(local_2c);
  (**(code **)(*(int *)(iVar1 + 0x54) + 8))(param_1 + 8);
  local_8._0_1_ = 0xf;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("BackButton",10);
  local_8._0_1_ = 0x14;
  iVar1 = (**(code **)(*(int *)param_1[0xee] + 0x34))(local_2c);
  (**(code **)(*(int *)(iVar1 + 0x54) + 8))(param_1 + 0xbc);
  local_8._0_1_ = 0xf;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("BackButton",10);
  local_8._0_1_ = 0x15;
  iVar1 = (**(code **)(*(int *)param_1[0xef] + 0x34))(local_2c);
  (**(code **)(*(int *)(iVar1 + 0x54) + 8))(param_1 + 0xbc);
  local_8._0_1_ = 0xf;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("JoinGameButton",0xe);
  local_8._0_1_ = 0x16;
  iVar1 = (**(code **)(*(int *)param_1[0xef] + 0x34))(local_2c);
  (**(code **)(*(int *)(iVar1 + 0x54) + 8))(param_1 + 0xd0);
  local_8._0_1_ = 0xf;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  (**(code **)(*(int *)param_1[0xe4] + 0x50))();
  (**(code **)(*(int *)param_1[0xe5] + 0x50))();
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("StartGameButton",0xf);
  local_8._0_1_ = 0x17;
  iVar1 = (**(code **)(*(int *)param_1[0xee] + 0x34))(local_2c);
  (**(code **)(*(int *)(iVar1 + 0x54) + 8))(param_1 + 0x44);
  local_8 = CONCAT31(local_8._1_3_,0xf);
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  (**(code **)(*(int *)param_1[0xee] + 0x50))();
  if (param_1[0xea] != 0) {
    (**(code **)(*(int *)(param_1[0xea] + 0x30) + 8))(param_1);
    if ((undefined4 *)param_1[0xea] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[0xea])(1);
    }
  }
  if (param_1[0xe8] != 0) {
    iVar1 = (**(code **)(*(int *)param_1[4] + 0x100))();
    *(undefined4 *)(iVar1 + 0x130) = 0;
    if ((undefined4 *)param_1[0xe8] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[0xe8])(1);
    }
    param_1[0xe8] = 0;
  }
  (**(code **)(*(int *)param_1[0xe6] + 0x50))();
  if ((undefined4 *)param_1[0xeb] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0xeb])(1);
  }
  param_1[0xeb] = 0;
  if ((undefined4 *)param_1[0xec] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0xec])(1);
  }
  param_1[0xec] = 0;
  if ((undefined4 *)param_1[0xf5] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0xf5])(1);
  }
  param_1[0xeb] = 0;
  if (0xf < (uint)param_1[0x103]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0xfe]);
  }
  param_1[0x103] = 0xf;
  param_1[0x102] = 0;
  *(undefined1 *)(param_1 + 0xfe) = 0;
  if (0xf < (uint)param_1[0xfc]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0xf7]);
  }
  param_1[0xfb] = 0;
  param_1[0xfc] = 0xf;
  *(undefined1 *)(param_1 + 0xf7) = 0;
  param_1[0xd0] = CButtonObserver::vftable;
  param_1[0xbc] = CButtonObserver::vftable;
  param_1[0xa8] = CButtonObserver::vftable;
  param_1[0x94] = CButtonObserver::vftable;
  param_1[0x80] = CButtonObserver::vftable;
  param_1[0x6c] = CButtonObserver::vftable;
  param_1[0x58] = CButtonObserver::vftable;
  param_1[0x44] = CButtonObserver::vftable;
  param_1[0x30] = CButtonObserver::vftable;
  param_1[0x1c] = CButtonObserver::vftable;
  param_1[8] = CButtonObserver::vftable;
  param_1[2] = CFrontEndView::vftable;
  param_1[1] = CSessionInfoObserver::vftable;
  *param_1 = CLoginObserver::vftable;
  ExceptionList = local_10;
  return;
}

