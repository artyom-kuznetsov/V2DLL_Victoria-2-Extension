// FUN_00693b90 @ 00693b90 body=[[00693b90, 00693c2a] [00693c2e, 00693c7c]]


undefined4 *
FUN_00693b90(undefined4 *param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int *unaff_EDI;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b92f46;
  local_10 = ExceptionList;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("ingame_multiplayer_entry",0x18);
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  DAT_013f08e0 = DAT_013f08e0 + 1;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[7] = &PTR_FUN_00e39158;
  local_8._0_1_ = 4;
  local_8._1_3_ = 0;
  *param_1 = &PTR_FUN_00e392f0;
  param_1[7] = &PTR_FUN_00e39320;
  *(undefined1 *)(param_1 + 9) = 0;
  uVar1 = (**(code **)(*unaff_EDI + 0x2c))(local_2c,param_2);
  param_1[8] = uVar1;
  local_8 = CONCAT31(local_8._1_3_,6);
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  *(undefined1 *)(param_1 + 10) = param_3;
  *param_1 = CLobbyHumanItem::vftable;
  param_1[7] = CLobbyHumanItem::vftable;
  param_1[0xb] = param_4;
  param_1[0x11] = 0xf;
  param_1[0x10] = 0;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  *(undefined1 *)(param_1 + 0xc) = 0;
  FUN_00408ed0(param_4,0,0xffffffff);
  ExceptionList = local_10;
  return param_1;
}

