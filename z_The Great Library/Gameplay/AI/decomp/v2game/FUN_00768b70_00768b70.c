// FUN_00768b70 @ 00768b70 body=[[00768b70, 00768c85] [00768c89, 00768d00] [00768d04, 00768d22] [00768d26, 00768da6] [00768daa, 00768dc8] [00768dcc, 00768e16] [00768e1a, 00768e2e]]


undefined4 * FUN_00768b70(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *in_ECX;
  uint local_48 [4];
  undefined4 local_38;
  uint local_34;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b7bb49;
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
  *param_1 = &PTR_FUN_00e392f0;
  param_1[7] = &PTR_FUN_00e39320;
  *(undefined1 *)(param_1 + 9) = 0;
  uVar1 = (**(code **)(*in_ECX + 0x2c))(param_2);
  param_1[8] = uVar1;
  local_8 = 4;
  param_1[10] = param_3;
  *param_1 = CBookmarkEntry::vftable;
  param_1[7] = CBookmarkEntry::vftable;
  FUN_007795b0(FUN_00768ec0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  local_8._0_1_ = 5;
  param_1[0x20] = param_4;
  if (*(int *)(param_3 + 0x88) != 0) {
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350("bookmark",8);
    local_8._0_1_ = 6;
    piVar2 = (int *)(**(code **)(*(int *)param_1[8] + 0x34))(local_2c);
    (**(code **)(*piVar2 + 0xe4))(param_3 + 0x78);
    local_8._0_1_ = 5;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
  }
  local_8._0_1_ = 5;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("title",5);
  local_8._0_1_ = 7;
  piVar2 = (int *)param_1[8];
  uVar1 = FUN_0045e4e0(param_3);
  local_8._0_1_ = 8;
  (**(code **)(*piVar2 + 0x3c))(local_2c);
  FUN_00408ed0(uVar1,0,0xffffffff);
  FUN_00a5ecc0(uVar1,0);
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48[0]);
  }
  local_8._0_1_ = 5;
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350(&DAT_00df0308,4);
  local_8._0_1_ = 9;
  piVar2 = (int *)param_1[8];
  uVar1 = FUN_0043b700(param_3 + 0xa4,local_48);
  local_8._0_1_ = 10;
  (**(code **)(*piVar2 + 0x3c))(local_2c);
  FUN_00408ed0(uVar1,0,0xffffffff);
  FUN_00a5ecc0(uVar1,0);
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48[0]);
  }
  local_8._0_1_ = 5;
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("bookmark",8);
  local_8 = CONCAT31(local_8._1_3_,0xb);
  iVar3 = (**(code **)(*(int *)param_1[8] + 0x34))(local_2c);
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))(param_1 + 0xc);
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  ExceptionList = local_10;
  return param_1;
}

