// FUN_00798420 @ 00798420 body=[[00798420, 007984bd] [007984c1, 0079868a] [0079868e, 007986b6] [007986ba, 0079870a] [0079870e, 0079874b] [00798754, 007987e0] [007987e4, 00798808] [0079880c, 007988b0] [007988b4, 0079893b] [0079893f, 007989e3] [007989e7, 00798a4a]]


undefined4 FUN_00798420(undefined4 *param_1,undefined4 param_2,int param_3)

{
  bool bVar1;
  undefined1 uVar2;
  char cVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  bool bVar10;
  undefined1 local_108 [92];
  undefined1 local_ac;
  uint local_9c;
  undefined4 local_98;
  undefined1 local_90;
  uint local_80;
  undefined4 local_7c;
  undefined1 local_74;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_58;
  undefined1 local_54;
  uint local_4c [4];
  uint local_3c;
  uint local_38;
  uint local_30 [4];
  uint local_20;
  uint local_1c;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00b894d0;
  local_10 = ExceptionList;
  local_14 = 0;
  local_98 = 0xf;
  local_9c = 0;
  local_ac = 0;
  local_7c = 0xf;
  local_80 = 0;
  local_90 = 0;
  local_60 = 0xf;
  local_64 = 0;
  local_74 = 0;
  local_58 = 0;
  local_54 = 1;
  local_8 = 0;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("leaderlist",10);
  local_8._0_1_ = 1;
  piVar4 = (int *)(**(code **)(*(int *)*param_1 + 0x7c))(local_30);
  local_8 = (uint)local_8._1_3_ << 8;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  puVar5 = (undefined4 *)(**(code **)(*piVar4 + 0x2c))();
  for (piVar4 = (int *)*puVar5; piVar4 != (int *)0x0; piVar4 = (int *)piVar4[2]) {
    cVar3 = (**(code **)(*(int *)(*piVar4 + 0x1c) + 0x58))(param_3);
    if (cVar3 != '\0') {
      iVar6 = FUN_00796c00(local_108,param_3);
      local_8._0_1_ = 2;
      FUN_00408ed0(iVar6,0,0xffffffff);
      FUN_00408ed0(iVar6 + 0x1c,0,0xffffffff);
      FUN_00408ed0(iVar6 + 0x38,0,0xffffffff);
      local_58 = *(undefined4 *)(iVar6 + 0x54);
      local_54 = *(undefined1 *)(iVar6 + 0x58);
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_00459820();
    }
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350(&DAT_00ded94d,0);
  uVar7 = local_9c;
  local_8 = CONCAT31(local_8._1_3_,3);
  local_14 = 1;
  uVar8 = local_20;
  if (local_9c < local_20) {
    uVar8 = local_9c;
  }
  iVar6 = FUN_00414bd0(uVar8);
  bVar10 = false;
  if (iVar6 == 0) {
    if (uVar7 < local_20) {
      uVar7 = 0xffffffff;
    }
    else {
      uVar7 = (uint)(uVar7 != local_20);
    }
    bVar10 = uVar7 == 0;
  }
  if (bVar10) {
    local_38 = 0xf;
    local_3c = 0;
    local_4c[0] = local_4c[0] & 0xffffff00;
    FUN_00409350(&DAT_00ded94d,0);
    uVar7 = local_80;
    local_14 = 3;
    uVar8 = local_3c;
    if (local_80 < local_3c) {
      uVar8 = local_80;
    }
    iVar6 = FUN_00414bd0(uVar8);
    bVar10 = false;
    if (iVar6 == 0) {
      if (uVar7 < local_3c) {
        uVar7 = 0xffffffff;
      }
      else {
        uVar7 = (uint)(uVar7 != local_3c);
      }
      bVar10 = uVar7 == 0;
    }
    bVar1 = false;
    if (!bVar10) goto LAB_0079866e;
  }
  else {
LAB_0079866e:
    bVar1 = true;
  }
  if ((local_14 & 2) != 0) {
    local_14 = local_14 & 0xfffffffd;
    if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_4c[0]);
    }
    local_38 = 0xf;
    local_3c = 0;
    local_4c[0] = local_4c[0] & 0xffffff00;
  }
  local_8._0_1_ = 0;
  local_8._1_3_ = 0;
  if (((local_14 & 1) != 0) && (local_14 = local_14 & 0xfffffffe, 0xf < local_1c)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  uVar2 = (undefined1)local_8;
  if (bVar1) goto LAB_00798a20;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("current_leader_prestige_bar",0x1b);
  local_8._0_1_ = 5;
  iVar6 = (**(code **)(*(int *)*param_1 + 0x44))(local_30);
  local_8._0_1_ = 0;
  uVar2 = (undefined1)local_8;
  local_8._0_1_ = 0;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  if (param_3 == iVar6) {
    uVar9 = FUN_005b70c0(param_1[0x4d],local_30);
    local_8._0_1_ = 6;
    FUN_00408ed0(uVar9,0,0xffffffff);
    local_8._0_1_ = 0;
    uVar2 = (undefined1)local_8;
    local_8._0_1_ = 0;
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_30[0]);
    }
    goto LAB_00798a20;
  }
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  local_8._0_1_ = uVar2;
  FUN_00409350("selected_photo",0xe);
  local_8 = CONCAT31(local_8._1_3_,7);
  local_14 = local_14 | 8;
  iVar6 = (**(code **)(*(int *)*param_1 + 0x44))(local_4c);
  if (param_3 == iVar6) {
LAB_007987c4:
    bVar10 = true;
  }
  else {
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    FUN_00409350("selected_leader_name",0x14);
    local_8 = 8;
    local_14 = local_14 | 0x10;
    iVar6 = (**(code **)(*(int *)*param_1 + 0x3c))(local_30);
    bVar10 = false;
    if (param_3 == iVar6) goto LAB_007987c4;
  }
  if ((local_14 & 0x10) != 0) {
    local_14 = local_14 & 0xffffffef;
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_30[0]);
    }
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
  }
  local_8 = 0;
  if (((local_14 & 8) != 0) && (0xf < local_38)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_4c[0]);
  }
  if (bVar10) {
    iVar6 = (**(code **)(*(int *)param_1[0x4d] + 0x24))(local_108);
    local_8 = CONCAT31(local_8._1_3_,9);
    FUN_00408ed0(iVar6,0,0xffffffff);
    FUN_00408ed0(iVar6 + 0x1c,0,0xffffffff);
    FUN_00408ed0(iVar6 + 0x38,0,0xffffffff);
    local_58 = *(undefined4 *)(iVar6 + 0x54);
    local_54 = *(undefined1 *)(iVar6 + 0x58);
LAB_00798a12:
    local_8._0_1_ = 0;
    FUN_00459820();
    uVar2 = (undefined1)local_8;
  }
  else {
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    FUN_00409350("unitleader_personality",0x16);
    local_8._0_1_ = 10;
    iVar6 = (**(code **)(*(int *)*param_1 + 0x3c))(local_30);
    local_8._0_1_ = 0;
    uVar2 = (undefined1)local_8;
    local_8._0_1_ = 0;
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_30[0]);
    }
    if (param_3 == iVar6) {
      uVar2 = (undefined1)local_8;
      if ((param_1[0x4d] == 0) ||
         (cVar3 = (**(code **)(*(int *)param_1[0x4d] + 0x20))(), uVar2 = (undefined1)local_8,
         cVar3 == '\0')) goto LAB_00798a20;
      uVar9 = (**(code **)(**(int **)(param_1[0x4d] + 0x7c) + 0x1c))(local_30);
      local_8._0_1_ = 0xb;
    }
    else {
      local_1c = 0xf;
      local_20 = 0;
      local_30[0] = local_30[0] & 0xffffff00;
      local_8._0_1_ = uVar2;
      FUN_00409350("unitleader_background",0x15);
      local_8._0_1_ = 0xc;
      iVar6 = (**(code **)(*(int *)*param_1 + 0x3c))(local_30);
      local_8._0_1_ = 0;
      if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_30[0]);
      }
      if (param_3 != iVar6) {
        local_1c = 0xf;
        local_20 = 0;
        local_30[0] = local_30[0] & 0xffffff00;
        FUN_00409350("noleader_button",0xf);
        local_8._0_1_ = 0xe;
        iVar6 = (**(code **)(*(int *)*param_1 + 0x34))(local_30);
        local_8._0_1_ = 0;
        if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_30[0]);
        }
        uVar2 = (undefined1)local_8;
        if (param_3 != iVar6) goto LAB_00798a20;
        piVar4 = (int *)FUN_005b6140();
        (**(code **)(*piVar4 + 0x24))(local_108);
        local_8 = CONCAT31(local_8._1_3_,0xf);
        FUN_004115d0();
        goto LAB_00798a12;
      }
      uVar2 = (undefined1)local_8;
      if ((param_1[0x4d] == 0) ||
         (cVar3 = (**(code **)(*(int *)param_1[0x4d] + 0x20))(), uVar2 = (undefined1)local_8,
         cVar3 == '\0')) goto LAB_00798a20;
      uVar9 = (**(code **)(**(int **)(param_1[0x4d] + 0x80) + 0x1c))(local_30);
      local_8._0_1_ = 0xd;
    }
    FUN_00408ed0(uVar9,0,0xffffffff);
    local_8._0_1_ = 0;
    FUN_00408ad0();
    uVar2 = (undefined1)local_8;
  }
LAB_00798a20:
  local_8._0_1_ = uVar2;
  FUN_0040c830(param_2);
  FUN_00459820();
  ExceptionList = local_10;
  return param_2;
}

