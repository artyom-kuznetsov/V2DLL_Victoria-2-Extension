// FUN_00a33d40 @ 00a33d40 body=[[00a33d40, 00a33dda] [00a33dde, 00a33e97] [00a33e9b, 00a33eec] [00a33ef0, 00a33f2f] [00a33f33, 00a33f47]]


undefined4 * FUN_00a33d40(undefined4 *param_1)

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
  puStack_c = &LAB_00b830d7;
  local_10 = ExceptionList;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("user_item",9);
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
  param_1[10] = in_ECX;
  *param_1 = &PTR_FUN_00e40684;
  param_1[7] = &PTR_LAB_00e406b8;
  param_1[0xb] = 0;
  FUN_009cd590(0,0,0,0,0,0,0,0,0,0,0,0,FUN_00a34200,0,0,0,0,0);
  FUN_009cd590(0,0,0,0,0,0,0,0,0,0,0,0,FUN_00a34410,0,0,0,0,0);
  local_8._0_1_ = 8;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("whisper",7);
  local_8._0_1_ = 9;
  iVar3 = (**(code **)(*(int *)param_1[8] + 0x34))(local_2c);
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))(param_1 + 0xc);
  local_8._0_1_ = 8;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350(&DAT_00e40358,4);
  local_8._0_1_ = 10;
  iVar3 = (**(code **)(*(int *)param_1[8] + 0x34))(local_2c);
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))(param_1 + 0x20);
  local_8._0_1_ = 8;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  FUN_00409350("BASECHAT",8);
  local_8 = CONCAT31(local_8._1_3_,0xb);
  (**(code **)(*(int *)(param_1[8] + 0x18) + 0x78))(local_48);
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48[0]);
  }
  ExceptionList = local_10;
  return param_1;
}

