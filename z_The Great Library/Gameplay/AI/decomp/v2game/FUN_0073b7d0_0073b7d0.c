// FUN_0073b7d0 @ 0073b7d0 body=[[0073b7d0, 0073b87e] [0073b882, 0073b923] [0073b927, 0073b96a] [0073b971, 0073b9c6] [0073b9ca, 0073ba31] [0073ba35, 0073ba50]]


undefined4 *
FUN_0073b7d0(undefined4 *param_1,int param_2,char param_3,undefined4 param_4,undefined4 param_5)

{
  int *piVar1;
  undefined4 uVar2;
  int *in_ECX;
  uint local_4c [4];
  undefined4 local_3c;
  uint local_38;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4bb21;
  local_10 = ExceptionList;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("level_entry",0xb);
  local_8 = 0;
  local_14 = (**(code **)(*in_ECX + 0x3c))();
  piVar1 = (int *)(**(code **)(*in_ECX + 0x34))();
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  DAT_013f08e0 = DAT_013f08e0 + 1;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[7] = &PTR_FUN_00e39158;
  local_8._0_1_ = 4;
  *param_1 = &PTR_FUN_00e392f0;
  param_1[7] = &PTR_FUN_00e39320;
  *(undefined1 *)(param_1 + 9) = 0;
  uVar2 = (**(code **)(*piVar1 + 0x2c))(local_30,local_14);
  param_1[8] = uVar2;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  param_1[10] = param_2;
  param_1[0xc] = param_5;
  param_1[0xb] = param_4;
  *param_1 = _anon_2433CAEC::CColonyLevelItem::vftable;
  param_1[7] = _anon_2433CAEC::CColonyLevelItem::vftable;
  FUN_00753460(&LAB_0073c140,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  local_8._0_1_ = 7;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("progress_icon",0xd);
  if (param_3 == '\0') {
    local_8._0_1_ = 10;
    piVar1 = (int *)(**(code **)(*(int *)param_1[8] + 0x44))(local_30);
    local_8._0_1_ = 7;
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_30[0]);
    }
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    (**(code **)(*piVar1 + 0x48))(param_2 + 1);
    local_38 = 0xf;
    local_3c = 0;
    local_4c[0] = local_4c[0] & 0xffffff00;
    FUN_00409350("progress_button",0xf);
    local_8._0_1_ = 0xb;
    piVar1 = (int *)(**(code **)(*(int *)param_1[8] + 0x34))(local_4c);
    (**(code **)(*piVar1 + 0x104))();
    local_8 = CONCAT31(local_8._1_3_,7);
    if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_4c[0]);
    }
  }
  else {
    local_8._0_1_ = 8;
    piVar1 = (int *)(**(code **)(*(int *)param_1[8] + 0x44))(local_30);
    (**(code **)(*piVar1 + 0x104))();
    local_8._0_1_ = 7;
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_30[0]);
    }
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    FUN_00409350("progress_button",0xf);
    local_8._0_1_ = 9;
    piVar1 = (int *)(**(code **)(*(int *)param_1[8] + 0x34))(local_30);
    local_8 = CONCAT31(local_8._1_3_,7);
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_30[0]);
    }
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    (**(code **)(*piVar1 + 0x48))(param_2 + 1);
    (**(code **)(piVar1[0x15] + 4))(param_1 + 0xe);
  }
  FUN_0073ba60();
  ExceptionList = local_10;
  return param_1;
}

