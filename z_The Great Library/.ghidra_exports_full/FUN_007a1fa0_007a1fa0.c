// FUN_007a1fa0 @ 007a1fa0 body=[[007a1fa0, 007a2127] [007a212b, 007a217a] [007a217e, 007a21cc] [007a21d0, 007a2212] [007a2216, 007a226e] [007a2272, 007a22da]]


undefined4 *
FUN_007a1fa0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined1 param_8)

{
  undefined4 uVar1;
  int iVar2;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b7a89a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[1] = 0x18d;
  *param_1 = &PTR_FUN_00e3a544;
  param_1[2] = DAT_00f0d858;
  param_1[3] = DAT_00f0d85c;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[10] = 0xf;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  local_8 = 0;
  FUN_009c1390(&DAT_00f0d858);
  param_1[0xe] = param_2;
  *param_1 = CChannelHandler::vftable;
  param_1[0xf] = param_4;
  param_1[0x10] = param_3;
  param_1[0x11] = param_6;
  param_1[0x14] = CButtonObserverGlue<CChannelHandler>::vftable;
  param_1[0x15] = param_1;
  param_1[0x16] = FUN_007a30b0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = CButtonObserverGlue<CChannelHandler>::vftable;
  param_1[0x20] = param_1;
  param_1[0x21] = FUN_007a3180;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  local_8._0_1_ = 3;
  local_8._1_3_ = 0;
  param_1[0x2a] = param_5;
  param_1[0x30] = 0xf;
  param_1[0x2f] = 0;
  *(undefined1 *)(param_1 + 0x2b) = 0;
  FUN_00409350(&DAT_00ded94d,0);
  local_8._0_1_ = 4;
  *(undefined1 *)(param_1 + 0x32) = param_8;
  param_1[0x33] = param_7;
  *(undefined1 *)(param_1 + 0x34) = 0;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("ChannelListActionWindow",0x17);
  local_8._0_1_ = 5;
  uVar1 = (**(code **)(*(int *)param_1[0xf] + 0x2c))(local_2c,param_1[0x2a]);
  local_8._0_1_ = 4;
  param_1[0x12] = uVar1;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("RefreshButton",0xd);
  local_8._0_1_ = 6;
  iVar2 = (**(code **)(*(int *)param_1[0x12] + 0x34))(local_2c);
  (**(code **)(*(int *)(iVar2 + 0x54) + 4))(param_1 + 0x14);
  local_8._0_1_ = 4;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("JoinButton",10);
  local_8._0_1_ = 7;
  iVar2 = (**(code **)(*(int *)param_1[0x12] + 0x34))(local_2c);
  (**(code **)(*(int *)(iVar2 + 0x54) + 4))(param_1 + 0x1f);
  local_8._0_1_ = 4;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("ChannelListing",0xe);
  local_8._0_1_ = 8;
  uVar1 = (**(code **)(*(int *)param_1[0x12] + 0x7c))(local_2c);
  local_8._0_1_ = 4;
  param_1[0xc] = uVar1;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  (**(code **)(*(int *)param_1[0xc] + 0x38))(1);
  (**(code **)(*(int *)param_1[0xc] + 0x54))();
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("ChannelUserListing",0x12);
  local_8._0_1_ = 9;
  uVar1 = (**(code **)(*(int *)param_1[0x12] + 0x7c))(local_2c);
  local_8._0_1_ = 4;
  param_1[0xd] = uVar1;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  iVar2 = FUN_00aae9af(0xd0);
  local_8._0_1_ = 10;
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_007a0ae0(iVar2,param_2,param_3,param_4,param_5,param_1[0x11],param_1[0x33]);
  }
  local_8 = CONCAT31(local_8._1_3_,4);
  param_1[0x13] = iVar2;
  *(undefined1 *)(iVar2 + 0x30) = 0;
  (**(code **)(*(int *)(*(int *)(iVar2 + 0x38) + 0x18) + 0x38))();
  ExceptionList = local_10;
  return param_1;
}

