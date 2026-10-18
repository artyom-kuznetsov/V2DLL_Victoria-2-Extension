// FUN_0093fa90 @ 0093fa90 body=[[0093fa90, 0093faf3] [0093faf7, 0093fc19] [0093fc1d, 0093fc91] [0093fc95, 0093fcb4] [0093fcb8, 0093fd30] [0093fd34, 0093fd52] [0093fd56, 0093fda0] [0093fda4, 0093fe8e] [0093fe92, 0093fed3] [0093fed7, 0093feeb]]


undefined4 *
FUN_0093fa90(undefined4 *param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5,
            undefined4 param_6)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *in_ECX;
  int iVar6;
  uint local_58 [4];
  undefined4 local_48;
  uint local_44;
  uint local_3c [4];
  undefined4 local_2c;
  uint local_28;
  undefined4 local_20;
  undefined4 local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00ba2fcb;
  local_10 = ExceptionList;
  local_28 = 0xf;
  local_2c = 0;
  local_3c[0] = local_3c[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("DeclareWarDialog",0x10);
  local_8 = 0;
  FUN_00640680(param_1,local_3c);
  local_8._0_1_ = 2;
  if (0xf < local_28) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_3c[0]);
  }
  param_1[0x1a] = param_2;
  *param_1 = CWarGoalDialog::vftable;
  local_28 = 0xf;
  local_2c = 0;
  local_3c[0] = local_3c[0] & 0xffffff00;
  uVar1 = (**(code **)(*in_ECX + 0x30))();
  param_1[0x1b] = uVar1;
  param_1[0x1c] = CButtonObserverGlue<CWarGoalDialog>::vftable;
  param_1[0x1d] = param_1;
  param_1[0x1e] = FUN_00944d80;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  local_8._0_1_ = 3;
  param_1[0x27] = param_3;
  param_1[0x28] = param_4;
  param_1[0x29] = param_5;
  param_1[0x2a] = param_6;
  if (param_4 == 0) {
    param_1[0x27] = *(undefined4 *)(param_1[0x1b] + 8);
    param_1[0x28] = *(undefined4 *)(param_1[0x1b] + 0xc);
  }
  if (param_1[0x2a] == 0) {
    param_1[0x29] = *(undefined4 *)(param_1[0x1b] + 0x10);
    param_1[0x2a] = *(undefined4 *)(param_1[0x1b] + 0x14);
  }
  local_18 = *(undefined4 *)(param_1[0x1b] + 8);
  local_14 = *(undefined4 *)(param_1[0x1b] + 0xc);
  FUN_00641630();
  local_18 = *(undefined4 *)(param_1[0x1b] + 0x10);
  local_14 = *(undefined4 *)(param_1[0x1b] + 0x14);
  FUN_006416a0();
  (**(code **)(*in_ECX + 0x1c))(local_58);
  local_8._0_1_ = 4;
  FUN_00641710();
  local_8._0_1_ = 3;
  if (0xf < local_44) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_58[0]);
  }
  local_44 = 0xf;
  local_48 = 0;
  local_58[0] = local_58[0] & 0xffffff00;
  FUN_00409350("cancel_select",0xd);
  local_8._0_1_ = 5;
  local_28 = 0xf;
  local_2c = 0;
  local_3c[0] = local_3c[0] & 0xffffff00;
  FUN_00409350("wargoal_state_select",0x14);
  local_8._0_1_ = 6;
  piVar2 = (int *)(**(code **)(*(int *)param_1[1] + 0x6c))(local_3c);
  iVar3 = (**(code **)(*piVar2 + 0x34))(local_58);
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))(param_1 + 0x1c);
  if (0xf < local_28) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_3c[0]);
  }
  local_8._0_1_ = 3;
  local_28 = 0xf;
  local_2c = 0;
  local_3c[0] = local_3c[0] & 0xffffff00;
  if (0xf < local_44) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_58[0]);
  }
  local_44 = 0xf;
  local_48 = 0;
  local_58[0] = local_58[0] & 0xffffff00;
  FUN_00409350("cancel_select",0xd);
  local_8._0_1_ = 7;
  local_28 = 0xf;
  local_2c = 0;
  local_3c[0] = local_3c[0] & 0xffffff00;
  FUN_00409350("wargoal_country_select",0x16);
  local_8._0_1_ = 8;
  piVar2 = (int *)(**(code **)(*(int *)param_1[1] + 0x6c))(local_3c);
  iVar3 = (**(code **)(*piVar2 + 0x34))(local_58);
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))(param_1 + 0x1c);
  if (0xf < local_28) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_3c[0]);
  }
  local_8._0_1_ = 3;
  local_28 = 0xf;
  local_2c = 0;
  local_3c[0] = local_3c[0] & 0xffffff00;
  if (0xf < local_44) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_58[0]);
  }
  FUN_00940090();
  local_28 = 0xf;
  local_2c = 0;
  local_3c[0] = local_3c[0] & 0xffffff00;
  FUN_00409350("message_dialog",0xe);
  local_8._0_1_ = 9;
  (**(code **)(*(int *)(param_1[1] + 0x18) + 0x78))(local_3c);
  local_8._0_1_ = 3;
  if (0xf < local_28) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_3c[0]);
  }
  local_18 = param_1[0x27];
  local_28 = 0xf;
  local_2c = 0;
  local_3c[0] = local_3c[0] & 0xffffff00;
  local_14 = *(int *)(DAT_012587e4 + 4);
  iVar3 = *(int *)(local_14 + param_1[0x28] * 4);
  param_2 = 0;
  uVar4 = *(uint *)(iVar3 + 0xd58);
  while ((*(uint *)(iVar3 + 0xd58) <= uVar4 && (uVar4 < *(uint *)(iVar3 + 0xd5c)))) {
    uVar5 = uVar4 + 8;
    piVar2 = (int *)(uVar4 + 4);
    uVar4 = uVar5;
    if (param_1[0x2a] == *piVar2) {
      param_2 = param_2 + 1;
    }
  }
  local_20 = param_1[0x27];
  iVar3 = *(int *)(local_14 + param_1[0x28] * 4);
  iVar6 = *(int *)(iVar3 + 0xd5c) - *(int *)(iVar3 + 0xd58) >> 3;
  iVar3 = (**(code **)(*(int *)param_1[0x1b] + 0x20))();
  if ((iVar3 != 0x38d) || (iVar6 == param_2 || iVar6 - param_2 < 0)) {
    local_44 = 0xf;
    local_48 = 0;
    local_58[0] = local_58[0] & 0xffffff00;
    FUN_00409350("call_allies_checkbox",0x14);
    local_8._0_1_ = 10;
    piVar2 = (int *)(**(code **)(*(int *)param_1[1] + 0x48))(local_58);
    (**(code **)(*piVar2 + 0x38))();
    local_8._0_1_ = 3;
    if (0xf < local_44) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_58[0]);
    }
    local_44 = 0xf;
    local_48 = 0;
    local_58[0] = local_58[0] & 0xffffff00;
    FUN_00409350("call_allies_text",0x10);
    local_8 = CONCAT31(local_8._1_3_,0xb);
    piVar2 = (int *)(**(code **)(*(int *)param_1[1] + 0x3c))(local_58);
    (**(code **)(*piVar2 + 0x38))();
    if (0xf < local_44) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_58[0]);
    }
  }
  ExceptionList = local_10;
  return param_1;
}

