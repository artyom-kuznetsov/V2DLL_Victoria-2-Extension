// FUN_00733b80 @ 00733b80 body=[[00733b80, 00733e3a] [00733e3e, 00733e8e] [00733e92, 00733ede] [00733ee2, 00733f2e] [00733f32, 00733f78] [00733f7c, 00733fc2] [00733fc6, 00734039] [00734040, 007340dd]]


undefined4 * FUN_00733b80(undefined4 *param_1,char *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 in_ECX;
  uint local_4c [4];
  undefined4 local_3c;
  uint local_38;
  undefined **local_30 [3];
  undefined **local_24 [3];
  undefined4 local_18;
  char *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b9d6e7;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = CBuildUnitView::vftable;
  param_1[1] = CButtonObserverGlue<CBuildUnitView>::vftable;
  param_1[2] = param_1;
  param_1[3] = FUN_00737260;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = CButtonObserverGlue<CBuildUnitView>::vftable;
  param_1[0xd] = param_1;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = FUN_00737390;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  local_8 = 2;
  uStack_7 = 0;
  local_18 = 0x2d2d2d;
  *(undefined1 *)(param_1 + 0x17) = 0;
  param_1[0x18] = param_2;
  *(undefined1 *)(param_1 + 0x19) = 1;
  param_1[0x1a] = in_ECX;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0x2d2d2d;
  param_1[0x1d] = 0;
  puVar1 = param_1 + 0x1f;
  *puVar1 = 0;
  puVar2 = (undefined4 *)FUN_00aae9af(8);
  if (puVar2 == (undefined4 *)0x0) {
    param_2 = (char *)0x0;
    std::exception::exception((exception *)local_24,&param_2);
    local_24[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_24,&DAT_00e6fb20);
  }
  *puVar1 = puVar2;
  puVar2[1] = 0;
  *puVar2 = 0;
  *(undefined4 **)*puVar1 = puVar1;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  local_8 = 3;
  puVar1 = param_1 + 0x25;
  *puVar1 = 0;
  puVar2 = (undefined4 *)FUN_00aae9af(8);
  if (puVar2 == (undefined4 *)0x0) {
    local_14 = (char *)0x0;
    std::exception::exception((exception *)local_30,&local_14);
    local_30[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_30,&DAT_00e6fb20);
  }
  *puVar1 = puVar2;
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined4 **)*puVar1 = puVar1;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  local_8 = 4;
  puVar1 = param_1 + 0x2b;
  *puVar1 = 0;
  puVar2 = (undefined4 *)FUN_00aae9af(8);
  if (puVar2 == (undefined4 *)0x0) {
    param_2 = (char *)0x0;
    std::exception::exception((exception *)local_24,&param_2);
    local_24[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_24,&DAT_00e6fb20);
  }
  *puVar1 = puVar2;
  puVar2[1] = 0;
  *puVar2 = 0;
  *(undefined4 **)*puVar1 = puVar1;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x31] = 0xffffffff;
  param_1[0x32] = 0xffffffff;
  param_1[0x33] = 0xffffffff;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x44] = CScrollbarObserverGlue<CBuildUnitView>::vftable;
  param_1[0x45] = param_1;
  param_1[0x46] = &LAB_007346b0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = CScrollbarObserverGlue<CBuildUnitView>::vftable;
  param_1[0x4b] = param_1;
  param_1[0x4c] = &LAB_007346c0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = CWindowObserverGlue<CBuildUnitView>::vftable;
  param_1[0x51] = param_1;
  param_1[0x52] = 0;
  param_1[0x53] = FUN_00734a70;
  param_1[0x54] = CWindowObserverGlue<CBuildUnitView>::vftable;
  param_1[0x55] = param_1;
  param_1[0x56] = 0;
  param_1[0x57] = FUN_00734aa0;
  *(undefined1 *)(param_1 + 0x58) = 1;
  param_1[0x59] = CButtonObserverGlue<CBuildUnitView>::vftable;
  param_1[0x5a] = param_1;
  param_1[0x5b] = FUN_00734600;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  local_8 = 0xd;
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  FUN_00409350("cell_window_list",0x10);
  local_8 = 0xe;
  piVar3 = (int *)(**(code **)(*(int *)param_1[0x18] + 0x6c))(local_4c);
  (**(code **)(*piVar3 + 4))(param_1 + 0x50);
  local_8 = 0xd;
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_4c[0]);
  }
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  FUN_00409350("cell_window_queue",0x11);
  local_8 = 0xf;
  piVar3 = (int *)(**(code **)(*(int *)param_1[0x18] + 0x6c))(local_4c);
  (**(code **)(*piVar3 + 4))(param_1 + 0x54);
  local_8 = 0xd;
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_4c[0]);
  }
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  FUN_00409350("cell_window_list",0x10);
  local_8 = 0x10;
  iVar4 = (**(code **)(*(int *)param_1[0x18] + 0x6c))(local_4c);
  (**(code **)(*(int *)(iVar4 + 0x18) + 0x10))(0xfffffffe);
  local_8 = 0xd;
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_4c[0]);
  }
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  FUN_00409350("cell_window_queue",0x11);
  local_8 = 0x11;
  iVar4 = (**(code **)(*(int *)param_1[0x18] + 0x6c))(local_4c);
  (**(code **)(*(int *)(iVar4 + 0x18) + 0x10))(0xfffffffe);
  local_8 = 0xd;
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_4c[0]);
  }
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  FUN_00409350("external_scroll_slider_list",0x1b);
  local_8 = 0x12;
  uVar5 = (**(code **)(*(int *)param_1[0x18] + 0x4c))(local_4c);
  local_8 = 0xd;
  param_1[0x42] = uVar5;
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_4c[0]);
  }
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  FUN_00409350("external_scroll_slider_queue",0x1c);
  local_8 = 0x13;
  uVar5 = (**(code **)(*(int *)param_1[0x18] + 0x4c))(local_4c);
  local_8 = 0xd;
  param_1[0x43] = uVar5;
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_4c[0]);
  }
  (**(code **)(*(int *)(param_1[0x42] + 0x54) + 4))(param_1 + 0x44);
  (**(code **)(*(int *)(param_1[0x43] + 0x54) + 4))(param_1 + 0x4a);
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  FUN_00409350("cancel_all_units",0x10);
  local_8 = 0x14;
  param_2 = (char *)(**(code **)(*(int *)param_1[0x18] + 0x34))(local_4c);
  _local_8 = CONCAT31(uStack_7,0xd);
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_4c[0]);
  }
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  if (param_2 != (char *)0x0) {
    (**(code **)(*(int *)(param_2 + 0x54) + 4))(param_1 + 0x59);
  }
  ExceptionList = local_10;
  return param_1;
}

