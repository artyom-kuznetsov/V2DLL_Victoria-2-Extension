// FUN_00691ce0 @ 00691ce0 body=[[00691ce0, 00691d7d] [00691d81, 00691e55] [00691e59, 00691e73] [00691e77, 00691e8b]]


undefined4 * FUN_00691ce0(undefined4 *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *in_ECX;
  undefined4 local_64;
  uint local_50;
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
  puStack_c = &LAB_00b44e56;
  local_10 = ExceptionList;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("save_game_entry",0xf);
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
  uVar3 = (**(code **)(*in_ECX + 0x2c))(local_2c,param_2);
  param_1[8] = uVar3;
  local_8._0_1_ = 6;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  *param_1 = CGotoProvinceItem::vftable;
  param_1[7] = CGotoProvinceItem::vftable;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  local_34 = 0xf;
  param_1[10] = *(undefined4 *)
                 (*(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_3 + 0xbe4) * 4) + 0x58);
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  FUN_00409350(&DAT_00e09e48,4);
  local_8._0_1_ = 7;
  piVar1 = (int *)param_1[8];
  uVar3 = FUN_004f97a0();
  local_8 = CONCAT31(local_8._1_3_,8);
  iVar4 = (**(code **)(*piVar1 + 0x48))(local_48);
  iVar2 = *(int *)(iVar4 + 300);
  FUN_00408ed0(uVar3,0,0xffffffff);
  if (iVar2 != 0) {
    (**(code **)(**(int **)(iVar4 + 0x70) + 0xec))(*(undefined4 *)(iVar4 + 0x74),uVar3,iVar2,2);
    (**(code **)(**(int **)(iVar4 + 0x70) + 0xf8))();
  }
  if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_64);
  }
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48[0]);
  }
  ExceptionList = local_10;
  return param_1;
}

