// FUN_007630e0 @ 007630e0 body=[[007630e0, 00763179] [0076317d, 007632b6] [007632ba, 00763311] [00763315, 00763360] [00763364, 00763378]]


undefined4 * FUN_007630e0(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *in_ECX;
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b43f52;
  local_10 = ExceptionList;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("local_game_entry",0x10);
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
  uVar1 = (**(code **)(*in_ECX + 0x2c))(local_34,param_3);
  param_1[8] = uVar1;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  *param_1 = CGameNameMember::vftable;
  param_1[7] = CGameNameMember::vftable;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = &LAB_00763500;
  param_1[10] = CCheckBoxObserverGlue<CGameNameMember>::vftable;
  param_1[0xb] = param_1;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  local_14 = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = &LAB_00763510;
  param_1[0x18] = CCheckBoxObserverGlue<CGameNameMember>::vftable;
  param_1[0x19] = param_1;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  local_8._0_1_ = 8;
  FUN_00648af0(param_1 + 0x26);
  local_8._0_1_ = 9;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  FUN_00409350(&DAT_00e09e48,4);
  local_8 = CONCAT31(local_8._1_3_,10);
  iVar2 = (**(code **)(*(int *)param_1[8] + 0x48))(local_34);
  iVar3 = *(int *)(iVar2 + 300);
  FUN_00408ed0(param_2 + 0x24,0,0xffffffff);
  if (iVar3 != 0) {
    (**(code **)(**(int **)(iVar2 + 0x70) + 0xec))
              (*(undefined4 *)(iVar2 + 0x74),param_2 + 0x24,iVar3,2);
    (**(code **)(**(int **)(iVar2 + 0x70) + 0xf8))();
  }
  local_8._0_1_ = 9;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  FUN_00409350(&DAT_00e09e48,4);
  local_8._0_1_ = 0xb;
  iVar3 = (**(code **)(*(int *)param_1[8] + 0x48))(local_34);
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))(param_1 + 10);
  local_8._0_1_ = 9;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  FUN_00409350(&DAT_00e09e48,4);
  local_8 = CONCAT31(local_8._1_3_,0xc);
  iVar3 = (**(code **)(*(int *)param_1[8] + 0x48))(local_50);
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))(param_1 + 0x18);
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50[0]);
  }
  ExceptionList = local_10;
  return param_1;
}

