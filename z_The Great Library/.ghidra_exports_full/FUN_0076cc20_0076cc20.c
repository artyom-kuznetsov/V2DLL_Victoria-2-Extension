// FUN_0076cc20 @ 0076cc20 body=[[0076cc20, 0076cd25] [0076cd29, 0076cd3d]]


undefined4 * FUN_0076cc20(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int *in_ECX;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b43d3c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  DAT_013f08e0 = DAT_013f08e0 + 1;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[7] = &PTR_FUN_00e39158;
  local_8 = 3;
  *(undefined1 *)(param_1 + 9) = 0;
  *param_1 = &PTR_FUN_00e392f0;
  param_1[7] = &PTR_FUN_00e39320;
  uVar1 = (**(code **)(*in_ECX + 0x2c))(param_3);
  param_1[8] = uVar1;
  local_8 = 4;
  *param_1 = CHumanItem::vftable;
  param_1[7] = CHumanItem::vftable;
  FUN_0064a460();
  param_1[0x18] = 0;
  FUN_007799b0(FUN_0076d160,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  local_8._0_1_ = 6;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("player_shield",0xd);
  local_8 = CONCAT31(local_8._1_3_,7);
  iVar2 = (**(code **)(*(int *)param_1[8] + 0x34))(local_2c);
  (**(code **)(*(int *)(iVar2 + 0x54) + 4))(param_1 + 0x1a);
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  ExceptionList = local_10;
  return param_1;
}

