// FUN_007945d0 @ 007945d0 body=[[007945d0, 00794815] [00794819, 00794867] [0079486b, 007948b8] [007948bc, 0079490d] [00794911, 00794955] [00794959, 007949d3] [007949d7, 00794a21] [00794a25, 00794a42]]


int * FUN_007945d0(int *param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  undefined4 *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b501c3;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[4] = (int)CButtonObserverGlue<CReorgPanel>::vftable;
  param_1[5] = (int)param_1;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = (int)&LAB_007951e0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = (int)CButtonObserverGlue<CReorgPanel>::vftable;
  param_1[0x10] = (int)param_1;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = (int)FUN_00795060;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  local_8 = 3;
  uStack_7 = 0;
  param_1[0x33] = 0xf;
  param_1[0x32] = 0;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  FUN_00409350("left_list",9);
  local_8 = 4;
  param_1[0x3a] = 0xf;
  param_1[0x39] = 0;
  *(undefined1 *)(param_1 + 0x35) = 0;
  FUN_00409350("right_list",10);
  local_8 = 5;
  param_1[0x41] = 0xf;
  param_1[0x40] = 0;
  *(undefined1 *)(param_1 + 0x3c) = 0;
  FUN_00409350("reorg_entry",0xb);
  local_8 = 6;
  param_1[0x48] = 0xf;
  param_1[0x47] = 0;
  *(undefined1 *)(param_1 + 0x43) = 0;
  FUN_00409350("reorg_entry_right",0x11);
  param_1[0x4a] = (int)CScrollbarObserverGlue<CReorgPanel>::vftable;
  param_1[0x4b] = (int)param_1;
  param_1[0x4c] = (int)&LAB_00795840;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = (int)CScrollbarObserverGlue<CReorgPanel>::vftable;
  param_1[0x51] = (int)param_1;
  param_1[0x52] = (int)&LAB_00795830;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = (int)CWindowObserverGlue<CReorgPanel>::vftable;
  param_1[0x57] = (int)param_1;
  param_1[0x58] = 0;
  param_1[0x59] = (int)FUN_00795a10;
  param_1[0x5a] = (int)CWindowObserverGlue<CReorgPanel>::vftable;
  param_1[0x5b] = (int)param_1;
  param_1[0x5c] = 0;
  param_1[0x5d] = (int)FUN_00795a30;
  local_8 = 0xb;
  param_1[0x5e] = 0;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  FUN_00409350("reorg_window",0xc);
  local_8 = 0xc;
  local_14 = (int *)(**(code **)(*param_2 + 0x34))();
  local_18 = (undefined4 *)(*local_14 + 0x2c);
  uVar1 = (**(code **)(*param_2 + 0x3c))();
  iVar2 = (*(code *)*local_18)(local_34,uVar1);
  local_8 = 0xb;
  *param_1 = iVar2;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  FUN_00409350("closebutton",0xb);
  local_8 = 0xd;
  iVar2 = (**(code **)(*(int *)*param_1 + 0x34))(local_34);
  (**(code **)(*(int *)(iVar2 + 0x54) + 4))(param_1 + 4);
  local_8 = 0xb;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  FUN_00409350("balancebutton",0xd);
  local_8 = 0xe;
  iVar2 = (**(code **)(*(int *)*param_1 + 0x34))(local_34);
  (**(code **)(*(int *)(iVar2 + 0x54) + 4))(param_1 + 0xf);
  local_8 = 0xb;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  (**(code **)(*(int *)(*param_1 + 0x18) + 0x38))();
  *(undefined1 *)(param_1 + 3) = 0;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  FUN_00409350("external_scroll_slider_left",0x1b);
  local_8 = 0xf;
  iVar2 = (**(code **)(*(int *)*param_1 + 0x4c))(local_34);
  local_8 = 0xb;
  param_1[0x1a] = iVar2;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  FUN_00409350("external_scroll_slider_right",0x1c);
  local_8 = 0x10;
  iVar2 = (**(code **)(*(int *)*param_1 + 0x4c))(local_34);
  local_8 = 0xb;
  param_1[0x24] = iVar2;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  (**(code **)(*(int *)(param_1[0x1a] + 0x54) + 4))(param_1 + 0x4a);
  (**(code **)(*(int *)(param_1[0x24] + 0x54) + 4))(param_1 + 0x50);
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  FUN_00409350("cell_window_left",0x10);
  local_8 = 0x11;
  piVar3 = (int *)(**(code **)(*(int *)*param_1 + 0x6c))(local_34);
  (**(code **)(*piVar3 + 4))(param_1 + 0x56);
  local_8 = 0xb;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  FUN_00409350("cell_window_right",0x11);
  _local_8 = CONCAT31(uStack_7,0x12);
  piVar3 = (int *)(**(code **)(*(int *)*param_1 + 0x6c))(local_34);
  (**(code **)(*piVar3 + 4))(param_1 + 0x5a);
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  param_1[0x1b] = 0;
  param_1[0x25] = 0;
  ExceptionList = local_10;
  return param_1;
}

