// FUN_0073b4e0 @ 0073b4e0 body=[[0073b4e0, 0073b592] [0073b596, 0073b616] [0073b61a, 0073b68f] [0073b693, 0073b6ae]]


undefined4 * FUN_0073b4e0(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *in_ECX;
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b50516;
  local_10 = ExceptionList;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("colonist_item",0xd);
  local_8 = 0;
  local_14 = (**(code **)(*in_ECX + 0x3c))();
  piVar2 = (int *)(**(code **)(*in_ECX + 0x34))();
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
  uVar3 = (**(code **)(*piVar2 + 0x2c))(local_34,local_14);
  param_1[8] = uVar3;
  local_8._0_1_ = 6;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  *param_1 = _anon_2433CAEC::CColonistEntry::vftable;
  param_1[7] = _anon_2433CAEC::CColonistEntry::vftable;
  param_1[10] = *param_2;
  local_20 = 0xf;
  local_3c = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  param_1[0xb] = param_2[1];
  param_1[0xc] = param_3;
  param_1[0xd] = in_ECX;
  param_1[0xe] = 0;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  FUN_00409350("controller_flag",0xf);
  local_8._0_1_ = 7;
  piVar2 = (int *)(**(code **)(*(int *)param_1[8] + 0x44))(local_50);
  (**(code **)(*piVar2 + 0xd4))(param_1[0xb]);
  local_8._0_1_ = 6;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50[0]);
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  FUN_00409350("controller_flag",0xf);
  local_8._0_1_ = 8;
  piVar2 = (int *)(**(code **)(*(int *)param_1[8] + 0x44))(local_50);
  piVar2 = (int *)(**(code **)(*piVar2 + 0xec))();
  local_18 = param_1[10];
  iVar1 = *piVar2;
  uVar3 = FUN_0052fc10();
  (**(code **)(iVar1 + 0x150))(uVar3);
  local_8 = CONCAT31(local_8._1_3_,6);
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50[0]);
  }
  FUN_0073c4e0();
  ExceptionList = local_10;
  return param_1;
}

