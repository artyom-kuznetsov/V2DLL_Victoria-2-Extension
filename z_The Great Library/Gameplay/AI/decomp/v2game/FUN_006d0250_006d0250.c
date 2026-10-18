// FUN_006d0250 @ 006d0250 body=[[006d0250, 006d02fc] [006d0300, 006d039d] [006d03a1, 006d03ec] [006d03f0, 006d04a4] [006d04a8, 006d052e] [006d0532, 006d0588] [006d058c, 006d05dd] [006d05e1, 006d0667] [006d066b, 006d0689] [006d068d, 006d06a9]]


undefined4 * FUN_006d0250(undefined4 *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  uint local_70 [4];
  undefined4 local_60;
  uint local_5c;
  uint local_54 [4];
  undefined4 local_44;
  uint local_40;
  uint local_38 [4];
  undefined4 local_28;
  uint local_24;
  undefined4 local_1c;
  undefined4 *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b8ae79;
  local_10 = ExceptionList;
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("movement_entry",0xe);
  piVar6 = DAT_01258a80;
  local_8 = 0;
  uVar4 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x3c))();
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
  uVar4 = (**(code **)(*piVar6 + 0x2c))(local_38,uVar4);
  param_1[8] = uVar4;
  if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_38[0]);
  }
  *param_1 = CMovementItem::vftable;
  param_1[7] = CMovementItem::vftable;
  param_1[10] = *(undefined4 *)(param_2 + 0xc);
  param_1[0xb] = *(undefined4 *)(param_2 + 0x10);
  param_1[0xc] = *(undefined4 *)(param_2 + 0x14);
  FUN_006dff00(FUN_006d1170,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  local_8._0_1_ = 7;
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  FUN_00409350("suppress_button",0xf);
  local_8._0_1_ = 8;
  iVar5 = (**(code **)(*(int *)param_1[8] + 0x34))(local_38);
  (**(code **)(*(int *)(iVar5 + 0x54) + 4))(param_1 + 0xe);
  local_8._0_1_ = 7;
  uVar3 = (undefined1)local_8;
  local_8._0_1_ = 7;
  if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_38[0]);
  }
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  if (param_1[0xc] == 0) {
    local_8._0_1_ = uVar3;
    FUN_00409350(&DAT_00dedbb4,4);
    local_8._0_1_ = 0xd;
    piVar6 = (int *)(**(code **)(*(int *)param_1[8] + 0x44))(local_38);
    (**(code **)(*piVar6 + 0x104))();
    local_8._0_1_ = 7;
    if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_38[0]);
    }
    local_24 = 0xf;
    local_28 = 0;
    local_38[0] = local_38[0] & 0xffffff00;
    FUN_00409350("nationalist_name",0x10);
    local_8._0_1_ = 0xe;
    piVar6 = (int *)(**(code **)(*(int *)param_1[8] + 0x3c))(local_38);
    (**(code **)(*piVar6 + 0x38))();
    *(undefined1 *)(piVar6 + 0x40) = 1;
    local_8._0_1_ = 7;
    if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_38[0]);
    }
    local_40 = 0xf;
    local_44 = 0;
    local_54[0] = local_54[0] & 0xffffff00;
    FUN_00409350(&DAT_00df09f4,4);
    local_8._0_1_ = 0xf;
    piVar6 = (int *)param_1[8];
    uVar4 = FUN_00471d20(local_70,DAT_012588e8 + 0xb5c);
    local_8._0_1_ = 0x10;
    (**(code **)(*piVar6 + 0x3c))(local_54);
    FUN_00408ed0(uVar4,0,0xffffffff);
    FUN_00a5ecc0(uVar4,0);
    if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_70[0]);
    }
    local_5c = 0xf;
    local_60 = 0;
    local_70[0] = local_70[0] & 0xffffff00;
    uVar1 = local_54[0];
    uVar2 = local_40;
  }
  else {
    FUN_00409350(&DAT_00dedbb4,4);
    local_8._0_1_ = 9;
    piVar6 = (int *)(**(code **)(*(int *)param_1[8] + 0x44))(local_38);
    local_8._0_1_ = 7;
    if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_38[0]);
    }
    local_24 = 0xf;
    local_28 = 0;
    local_38[0] = local_38[0] & 0xffffff00;
    if (piVar6 != (int *)0x0) {
      local_14 = (int *)(**(code **)(*piVar6 + 0xec))();
      local_1c = param_1[0xb];
      local_18 = (undefined4 *)(*local_14 + 0x150);
      uVar4 = FUN_0052fc10();
      (*(code *)*local_18)(uVar4);
      (**(code **)(*piVar6 + 0xd4))(param_1[0xc]);
    }
    local_24 = 0xf;
    local_28 = 0;
    local_38[0] = local_38[0] & 0xffffff00;
    FUN_00409350(&DAT_00df09f4,4);
    local_8._0_1_ = 10;
    piVar6 = (int *)(**(code **)(*(int *)param_1[8] + 0x3c))(local_38);
    (**(code **)(*piVar6 + 0x38))();
    *(undefined1 *)(piVar6 + 0x40) = 1;
    local_8._0_1_ = 7;
    if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_38[0]);
    }
    local_24 = 0xf;
    local_28 = 0;
    local_38[0] = local_38[0] & 0xffffff00;
    FUN_00409350("nationalist_name",0x10);
    local_8._0_1_ = 0xb;
    piVar6 = (int *)param_1[8];
    uVar4 = FUN_00471d20(local_54,DAT_012588e8 + 0xb5c);
    local_8._0_1_ = 0xc;
    (**(code **)(*piVar6 + 0x3c))(local_38);
    FUN_00408ed0(uVar4,0,0xffffffff);
    FUN_00a5ecc0(uVar4,0);
    if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_54[0]);
    }
    local_40 = 0xf;
    local_44 = 0;
    local_54[0] = local_54[0] & 0xffffff00;
    uVar1 = local_38[0];
    uVar2 = local_24;
  }
  local_8 = CONCAT31(local_8._1_3_,7);
  if (0xf < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uVar1);
  }
  FUN_006d0740();
  ExceptionList = local_10;
  return param_1;
}

