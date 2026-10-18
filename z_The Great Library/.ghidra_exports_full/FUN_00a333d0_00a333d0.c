// FUN_00a333d0 @ 00a333d0 body=[[00a333d0, 00a3346a] [00a3346e, 00a33538] [00a3353c, 00a3358d] [00a33591, 00a335d0] [00a335d4, 00a335e8]]


undefined4 * FUN_00a333d0(undefined4 *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int in_ECX;
  uint local_48 [4];
  undefined4 local_38;
  uint local_34;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b96812;
  local_10 = ExceptionList;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("channel_window",0xe);
  uVar2 = *(undefined4 *)(in_ECX + 0x24);
  piVar1 = *(int **)(in_ECX + 0x28);
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
  uVar2 = (**(code **)(*piVar1 + 0x2c))(local_2c,uVar2);
  param_1[8] = uVar2;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  *param_1 = &PTR_FUN_00e405f4;
  param_1[7] = &PTR_LAB_00e40628;
  param_1[10] = in_ECX;
  param_1[0x10] = 0xf;
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[0x12] = 0xffffffff;
  FUN_009cd590(0,0,0,0,0,0,0,0,0,0,0,0,FUN_00a33830,0,0,0,0,0);
  FUN_009cd590(0,0,0,0,0,0,0,0,0,0,0,0,&LAB_00a338b0,0,0,0,0,0);
  local_8._0_1_ = 9;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("close",5);
  local_8._0_1_ = 10;
  iVar3 = (**(code **)(*(int *)param_1[8] + 0x34))(local_2c);
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))(param_1 + 0x14);
  local_8._0_1_ = 9;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("select",6);
  local_8._0_1_ = 0xb;
  iVar3 = (**(code **)(*(int *)param_1[8] + 0x34))(local_2c);
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))(param_1 + 0x28);
  local_8._0_1_ = 9;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  FUN_00409350("BASECHAT",8);
  local_8 = CONCAT31(local_8._1_3_,0xc);
  (**(code **)(*(int *)(param_1[8] + 0x18) + 0x78))(local_48);
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48[0]);
  }
  ExceptionList = local_10;
  return param_1;
}

