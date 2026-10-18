// FUN_0093f2b0 @ 0093f2b0 body=[[0093f2b0, 0093f361] [0093f365, 0093f3fd] [0093f401, 0093f4e2] [0093f4e6, 0093f509] [0093f50d, 0093f527] [0093f52b, 0093f54f] [0093f553, 0093f587] [0093f58b, 0093f5aa] [0093f5ae, 0093f5c2]]


undefined4 *
FUN_0093f2b0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  char *pcVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  char *pcVar5;
  int *in_ECX;
  undefined4 local_bc;
  uint local_a8;
  uint local_a0 [4];
  undefined4 local_90;
  uint local_8c;
  uint local_84 [4];
  undefined4 local_74;
  uint local_70;
  uint local_68 [4];
  undefined4 local_58;
  uint local_54;
  uint local_4c [4];
  undefined4 local_3c;
  uint local_38;
  undefined4 local_30;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4a8ef;
  local_10 = ExceptionList;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("wargoal_state_item",0x12);
  local_8 = 0;
  local_30 = (**(code **)(*in_ECX + 0x3c))();
  piVar3 = (int *)(**(code **)(*in_ECX + 0x34))();
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
  uVar4 = (**(code **)(*piVar3 + 0x2c))(local_2c,local_30);
  param_1[8] = uVar4;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  param_1[10] = param_3;
  param_1[0xb] = param_2;
  *param_1 = CStateSelectionItem::vftable;
  param_1[7] = CStateSelectionItem::vftable;
  FUN_0094bba0(&LAB_0077a0a0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  local_8._0_1_ = 7;
  pcVar1 = (char *)(param_1 + 0x20);
  param_1[0x21] = param_5;
  *(undefined4 *)pcVar1 = param_4;
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  FUN_00409350("select_state",0xc);
  local_8._0_1_ = 8;
  piVar3 = (int *)(**(code **)(*(int *)param_1[8] + 0x34))(local_4c);
  local_8._0_1_ = 7;
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_4c[0]);
  }
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  (**(code **)(piVar3[0x15] + 4))(param_1 + 0xc);
  local_70 = 0xf;
  local_74 = 0;
  local_84[0] = local_84[0] & 0xffffff00;
  local_8._0_1_ = 9;
  if (param_1[0x21] != 0) {
    local_8c = 0xf;
    local_90 = 0;
    local_a0[0] = local_a0[0] & 0xffffff00;
    FUN_00409350(&DAT_00ded950,1);
    local_8._0_1_ = 10;
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    pcVar5 = pcVar1;
    do {
      cVar2 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar2 != '\0');
    FUN_00409350(pcVar1,(int)pcVar5 - ((int)param_1 + 0x81));
    local_8._0_1_ = 0xb;
    FUN_00988fa0(local_2c);
    local_8._0_1_ = 0xc;
    uVar4 = FUN_00988f20(local_a0);
    local_8._0_1_ = 0xd;
    FUN_00448aa0(uVar4,0,0xffffffff);
    if (0xf < local_a8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_bc);
    }
    if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_68[0]);
    }
    local_54 = 0xf;
    local_58 = 0;
    local_68[0] = local_68[0] & 0xffffff00;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
    local_8._0_1_ = 9;
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    if (0xf < local_8c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_a0[0]);
    }
  }
  local_8._0_1_ = 9;
  uVar4 = (**(code **)(*(int *)param_1[0xb] + 0x20))(local_68);
  local_8._0_1_ = 0xe;
  FUN_00448aa0(uVar4,0,0xffffffff);
  local_8 = CONCAT31(local_8._1_3_,9);
  if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_68[0]);
  }
  (**(code **)(*piVar3 + 0xcc))(local_84,0);
  if (0xf < local_70) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_84[0]);
  }
  ExceptionList = local_10;
  return param_1;
}

