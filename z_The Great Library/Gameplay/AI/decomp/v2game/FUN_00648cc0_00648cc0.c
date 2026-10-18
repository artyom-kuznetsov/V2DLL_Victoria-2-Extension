// FUN_00648cc0 @ 00648cc0 body=[[00648cc0, 00648e15] [00648e19, 00648e72] [00648e76, 00648ec6] [00648eca, 00648f15] [00648f19, 0064900b] [0064900f, 00649048] [0064904c, 00649067] [0064906b, 00649086] [0064908a, 006490a4] [006490a8, 006490d3]]


undefined4 * FUN_00648cc0(undefined4 *param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  uint local_88;
  uint local_80 [4];
  undefined4 local_70;
  uint local_6c;
  uint local_64 [4];
  undefined4 local_54;
  uint local_50;
  undefined1 local_48 [4];
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int *local_34;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b9a289;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = CMultiplayerHandler::vftable;
  param_1[1] = param_2;
  param_1[3] = CButtonObserverGlue<CMultiplayerHandler>::vftable;
  param_1[4] = param_1;
  param_1[5] = FUN_0064a4c0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = CButtonObserverGlue<CMultiplayerHandler>::vftable;
  param_1[0xf] = param_1;
  param_1[0x10] = FUN_0064a560;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = CButtonObserverGlue<CMultiplayerHandler>::vftable;
  param_1[0x1a] = param_1;
  param_1[0x1b] = FUN_0064a580;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *(undefined1 *)(param_1 + 0x27) = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  *(undefined1 *)(param_1 + 0x2b) = 0;
  local_8 = 5;
  uStack_7 = 0;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("player_lost_window",0x12);
  local_8 = 6;
  local_34 = (int *)(**(code **)(*param_2 + 0x34))();
  local_14 = (undefined4 *)(*local_34 + 0x2c);
  uVar1 = (**(code **)(*param_2 + 0x3c))();
  uVar1 = (*(code *)*local_14)(local_30,uVar1);
  local_8 = 5;
  param_1[2] = uVar1;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  (**(code **)(*(int *)(param_1[2] + 0x18) + 0x38))();
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("continue_button",0xf);
  local_8 = 7;
  iVar2 = (**(code **)(*(int *)param_1[2] + 0x34))(local_30);
  (**(code **)(*(int *)(iVar2 + 0x54) + 4))(param_1 + 3);
  local_8 = 5;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("save_button",0xb);
  local_8 = 8;
  iVar2 = (**(code **)(*(int *)param_1[2] + 0x34))(local_30);
  (**(code **)(*(int *)(iVar2 + 0x54) + 4))(param_1 + 0xe);
  local_8 = 5;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("quit_button",0xb);
  local_8 = 9;
  iVar2 = (**(code **)(*(int *)param_1[2] + 0x34))(local_30);
  (**(code **)(*(int *)(iVar2 + 0x54) + 4))(param_1 + 0x19);
  local_8 = 5;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_6c = 0xf;
  local_70 = 0;
  local_80[0] = local_80[0] & 0xffffff00;
  FUN_00409350("quit_button",0xb);
  local_8 = 10;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("CONT_AI",7);
  local_8 = 0xb;
  local_50 = 0xf;
  local_54 = 0;
  local_64[0] = local_64[0] & 0xffffff00;
  FUN_00409350("quit_button",0xb);
  local_8 = 0xc;
  piVar3 = (int *)(**(code **)(*(int *)param_1[2] + 0x34))(local_80);
  piVar4 = (int *)(**(code **)(*(int *)param_1[2] + 0x34))(local_64);
  local_14 = (undefined4 *)FUN_009a8ee0(local_48,local_30);
  local_8 = 0xd;
  iVar2 = FUN_00475500();
  local_14 = (undefined4 *)FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c),*(undefined8 *)(iVar2 + 0x74))
  ;
  local_8 = 0xe;
  iVar2 = *piVar4;
  uVar1 = (**(code **)(*piVar3 + 0xd0))();
  (**(code **)(iVar2 + 0xcc))(local_14,uVar1);
  if (0xf < local_88) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8 = 0xf;
  FUN_009adb70();
  if (local_44 != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_50 = 0xf;
  local_54 = 0;
  local_64[0] = local_64[0] & 0xffffff00;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  _local_8 = CONCAT31(uStack_7,5);
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  piVar3 = (int *)(**(code **)(*(int *)param_1[1] + 0x44))();
  (**(code **)(*piVar3 + 4))();
  ExceptionList = local_10;
  return param_1;
}

