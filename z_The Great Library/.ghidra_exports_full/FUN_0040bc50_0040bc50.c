// FUN_0040bc50 @ 0040bc50 body=[[0040bc50, 0040bcf7] [0040bcfb, 0040bdf9] [0040bdfd, 0040be51] [0040be55, 0040be95] [0040be99, 0040bed9] [0040bedd, 0040bf8c] [0040bf92, 0040bff9] [0040bfff, 0040c01a] [0040c01e, 0040c063] [0040c067, 0040c0bc] [0040c0c0, 0040c0e9]]


undefined4 *
FUN_0040bc50(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *in_ECX;
  uint local_58 [4];
  undefined4 local_48;
  uint local_44;
  uint local_3c [3];
  int local_30 [4];
  int local_20;
  int local_1c;
  code *local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4de45;
  local_10 = ExceptionList;
  local_44 = 0xf;
  local_48 = 0;
  local_58[0] = local_58[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("battleplan_entry",0x10);
  local_8 = 0;
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
  uVar3 = (**(code **)(*piVar2 + 0x2c))(local_58,param_2);
  param_1[8] = uVar3;
  if (0xf < local_44) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_58[0]);
  }
  param_1[0xb] = in_ECX;
  param_1[10] = param_3;
  *param_1 = CBattlePlanEntry::vftable;
  param_1[7] = CBattlePlanEntry::vftable;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  local_18 = FUN_0040c940;
  param_1[0x16] = FUN_0040c940;
  param_1[0x17] = 0;
  param_1[0x18] = FUN_0040c940;
  param_1[0x12] = CCheckBoxObserverGlue<CBattlePlanEntry>::vftable;
  param_1[0x13] = param_1;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  FUN_00413790(&LAB_0040c8d0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  FUN_00413790(&LAB_0040c8f0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  local_8._0_1_ = 9;
  param_1[0x48] = param_4;
  local_44 = 0xf;
  local_48 = 0;
  local_58[0] = local_58[0] & 0xffffff00;
  FUN_00409350("background_button",0x11);
  local_8._0_1_ = 10;
  uVar3 = (**(code **)(*(int *)param_1[8] + 0x48))(local_58);
  local_8._0_1_ = 9;
  param_1[0xc] = uVar3;
  if (0xf < local_44) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_58[0]);
  }
  (**(code **)(*(int *)(param_1[0xc] + 0x54) + 4))(param_1 + 0x12);
  local_44 = 0xf;
  local_48 = 0;
  local_58[0] = local_58[0] & 0xffffff00;
  FUN_00409350("title",5);
  local_8._0_1_ = 0xb;
  uVar3 = (**(code **)(*(int *)param_1[8] + 0x3c))(local_58);
  local_8._0_1_ = 9;
  param_1[0xd] = uVar3;
  if (0xf < local_44) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_58[0]);
  }
  local_44 = 0xf;
  local_48 = 0;
  local_58[0] = local_58[0] & 0xffffff00;
  FUN_00409350(&DAT_00dedbb4,4);
  local_8._0_1_ = 0xc;
  uVar3 = (**(code **)(*(int *)param_1[8] + 0x44))(local_58);
  local_8._0_1_ = 9;
  param_1[0x10] = uVar3;
  if (local_44 < 0x10) {
    local_44 = 0xf;
    local_48 = 0;
    local_58[0] = local_58[0] & 0xffffff00;
    FUN_00409350("file_path",9);
    local_8._0_1_ = 0xd;
    uVar3 = (**(code **)(*(int *)param_1[8] + 0x3c))(local_58);
    local_8._0_1_ = 9;
    param_1[0xe] = uVar3;
    if (0xf < local_44) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_58[0]);
    }
    if (*(char *)(param_1[10] + 0x1f0) == '\0') {
      FUN_004063b0(param_1[10]);
      local_8._0_1_ = 0xe;
      FUN_00989510(&local_20,0x2f);
      local_8._0_1_ = 0xf;
      iVar1 = (local_1c - local_20) / 0x1c;
      if (0 < iVar1) {
        FUN_00408ed0(local_20 + -0x1c + iVar1 * 0x1c,0,0xffffffff);
      }
      FUN_004138b0(&local_20,&param_2,local_20,local_1c);
      uVar3 = FUN_00989510(local_30,0x2e);
      local_8._0_1_ = 0x10;
      FUN_004134a0(uVar3);
      local_8._0_1_ = 0xf;
      if (local_30[0] != 0) {
        FUN_00413860();
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_30[0]);
      }
      if (0 < (local_1c - local_20) / 0x1c) {
        FUN_00408ed0(local_20,0,0xffffffff);
      }
      FUN_00408ed0(local_58,0,0xffffffff);
      FUN_00a5ecc0(local_58,0);
      if (local_20 != 0) {
        FUN_00413860();
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_20);
      }
      local_8._0_1_ = 9;
      local_20 = 0;
      local_1c = 0;
      local_18 = (code *)0x0;
      if (0xf < local_44) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_58[0]);
      }
    }
    local_8._0_1_ = 9;
    local_44 = 0xf;
    local_48 = 0;
    local_58[0] = local_58[0] & 0xffffff00;
    FUN_00409350("visibility",10);
    local_8._0_1_ = 0x11;
    uVar3 = (**(code **)(*(int *)param_1[8] + 0x34))(local_58);
    local_8._0_1_ = 9;
    param_1[0x11] = uVar3;
    if (0xf < local_44) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_58[0]);
    }
    (**(code **)(*(int *)(param_1[0x11] + 0x54) + 4))(param_1 + 0x20);
    local_30[2] = 0xf;
    local_30[1] = 0;
    local_3c[0] = local_3c[0] & 0xffffff00;
    FUN_00409350("share_with_allies",0x11);
    local_8._0_1_ = 0x12;
    uVar3 = (**(code **)(*(int *)param_1[8] + 0x34))(local_3c);
    local_8 = CONCAT31(local_8._1_3_,9);
    param_1[0xf] = uVar3;
    if ((uint)local_30[2] < 0x10) {
      (**(code **)(*(int *)(param_1[0xf] + 0x54) + 4))(param_1 + 0x34);
      ExceptionList = local_10;
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_3c[0]);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_58[0]);
}

