// FUN_00a33a60 @ 00a33a60 body=[[00a33a60, 00a33af7] [00a33afb, 00a33b59] [00a33b5d, 00a33b70]]


undefined4 * FUN_00a33a60(undefined4 *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int unaff_EDI;
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
  puStack_c = &LAB_00b48c99;
  local_10 = ExceptionList;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("chat_item",9);
  uVar2 = *(undefined4 *)(unaff_EDI + 0x24);
  piVar1 = *(int **)(unaff_EDI + 0x28);
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
  *param_1 = &PTR_FUN_00e40564;
  param_1[7] = &PTR_LAB_00e40598;
  param_1[10] = unaff_EDI;
  param_1[0x10] = 0xf;
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  local_8._0_1_ = 7;
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  FUN_00409350("BASECHAT",8);
  local_8 = CONCAT31(local_8._1_3_,8);
  (**(code **)(*(int *)(param_1[8] + 0x18) + 0x78))(local_48);
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48[0]);
  }
  ExceptionList = local_10;
  return param_1;
}

