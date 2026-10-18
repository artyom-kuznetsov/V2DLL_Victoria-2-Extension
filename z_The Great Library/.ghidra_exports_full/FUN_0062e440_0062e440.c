// FUN_0062e440 @ 0062e440 body=[[0062e440, 0062e4ac] [0062e4b0, 0062e502] [0062e506, 0062e563] [0062e567, 0062e66d] [0062e676, 0062e923] [0062e927, 0062e998] [0062e99c, 0062ea6b] [0062ea6f, 0062eb7a] [0062eb7e, 0062ebe6] [0062ebea, 0062ec77] [0062ec7b, 0062ed36] [0062ed3a, 0062ee0e]]


void FUN_0062e440(int param_1,int *param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  uint *puVar4;
  int iVar5;
  int *piVar6;
  code *pcVar7;
  undefined4 uVar8;
  uint local_90 [4];
  undefined4 local_80;
  uint local_7c;
  uint local_74 [4];
  undefined4 local_64;
  uint local_60;
  uint local_58 [4];
  undefined4 local_48;
  uint local_44;
  int local_3c;
  int local_34;
  int *local_30;
  undefined4 *local_2c;
  int *local_24;
  int *local_20;
  int *local_1c;
  uint local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b8c7b6;
  local_10 = ExceptionList;
  local_18 = 0;
  local_44 = 0xf;
  local_48 = 0;
  local_58[0] = local_58[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("country_flag",0xc);
  local_8 = 0;
  piVar2 = (int *)(**(code **)(*param_2 + 0x34))(local_58);
  local_8 = 0xffffffff;
  if (0xf < local_44) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_58[0]);
  }
  local_44 = 0xf;
  local_48 = 0;
  local_58[0] = local_58[0] & 0xffffff00;
  local_60 = 0xf;
  local_64 = 0;
  local_74[0] = local_74[0] & 0xffffff00;
  FUN_00409350("sponsored_flag",0xe);
  local_8 = 1;
  local_20 = (int *)(**(code **)(*param_2 + 0x34))(local_74);
  local_8 = 0xffffffff;
  if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_74[0]);
  }
  local_60 = 0xf;
  local_64 = 0;
  local_74[0] = local_74[0] & 0xffffff00;
  local_7c = 0xf;
  local_80 = 0;
  local_90[0] = local_90[0] & 0xffffff00;
  FUN_00409350("country_name",0xc);
  local_8 = 2;
  (**(code **)(*param_2 + 0x3c))(local_90);
  local_8 = 0xffffffff;
  if (0xf < local_7c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_90[0]);
  }
  local_7c = 0xf;
  local_80 = 0;
  local_90[0] = local_90[0] & 0xffffff00;
  if ((char)param_4 == '\0') {
    local_1c = (int *)(param_3 + 0x1c);
    local_14 = (int *)(param_3 + 0x3c);
    local_24 = (int *)(param_3 + 0x98);
  }
  else {
    local_1c = (int *)(param_3 + 0x14);
    local_14 = (int *)(param_3 + 0x2c);
    local_24 = (int *)(param_3 + 0x88);
  }
  local_34 = *local_1c;
  local_2c = (undefined4 *)0x0;
  if (*(char *)(*(int *)(*(int *)(DAT_012587e4 + 4) + local_1c[1] * 4) + 0x31) == '\0') {
    (**(code **)(*local_20 + 0xd4))(local_1c[1]);
    if ((local_14[1] - *local_14 & 0xfffffff8U) == 0) {
      if (*(int *)(param_3 + 0x60) == 0) {
        if ((char)param_4 == '\0') {
          iVar5 = FUN_00429c20();
          (**(code **)(*piVar2 + 0xd4))(*(undefined4 *)(iVar5 + 4));
          local_1c = (int *)(**(code **)(*piVar2 + 0xec))();
          piVar6 = (int *)FUN_00429c20();
          local_34 = *piVar6;
          local_30 = (int *)(*local_1c + 0x150);
          uVar3 = FUN_0052fc10();
        }
        else {
          iVar5 = FUN_00429bd0();
          (**(code **)(*piVar2 + 0xd4))(*(undefined4 *)(iVar5 + 4));
          local_1c = (int *)(**(code **)(*piVar2 + 0xec))();
          piVar6 = (int *)FUN_00429bd0();
          local_34 = *piVar6;
          local_30 = (int *)(*local_1c + 0x150);
          uVar3 = FUN_0052fc10();
        }
        (*(code *)*local_30)(uVar3);
        (**(code **)(*piVar2 + 0xbc))();
        local_44 = 0xf;
        local_48 = 0;
        local_58[0] = local_58[0] & 0xffffff00;
        FUN_00409350(&DAT_00e073d4,3);
        local_8 = 6;
        FUN_00408ed0(local_58,0,0xffffffff);
        puVar4 = local_58;
        goto LAB_0062e903;
      }
      (**(code **)(*piVar2 + 0xd4))(*(int *)(param_3 + 0x60));
      local_30 = (int *)(**(code **)(*piVar2 + 0xec))();
      local_3c = *(int *)(param_3 + 0x5c);
      local_1c = (int *)(*local_30 + 0x150);
      uVar3 = FUN_0052fc10();
      (*(code *)*local_1c)(uVar3);
      (**(code **)(*piVar2 + 0xbc))();
      local_44 = 0xf;
      local_48 = 0;
      local_58[0] = local_58[0] & 0xffffff00;
      FUN_00409350(&DAT_00e073d4,3);
      local_8 = 5;
      FUN_00408ed0(local_58,0,0xffffffff);
      FUN_00a5ecc0(local_58,0);
      piVar2 = local_20;
    }
    else {
      (**(code **)(*piVar2 + 0xd4))(*(undefined4 *)(*local_14 + 4));
      local_30 = (int *)(**(code **)(*piVar2 + 0xec))();
      local_3c = *(int *)*local_14;
      local_2c = (undefined4 *)(*local_30 + 0x150);
      uVar3 = FUN_0052fc10();
      (*(code *)*local_2c)(uVar3);
      local_2c = (undefined4 *)0x1;
      (**(code **)(*piVar2 + 0xb8))();
      puVar4 = (uint *)FUN_0055dd40();
      local_8 = 4;
      FUN_00408ed0(puVar4,0,0xffffffff);
LAB_0062e903:
      FUN_00a5ecc0(puVar4,0);
      piVar2 = local_20;
    }
    local_20 = piVar2;
    if (0xf < local_44) {
      local_8 = 0xffffffff;
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_58[0]);
    }
    local_8 = 0xffffffff;
    (**(code **)(*piVar2 + 0x108))();
    (**(code **)(*piVar2 + 0x34))();
  }
  else {
    (**(code **)(*piVar2 + 0xd4))();
    local_30 = (int *)(**(code **)(*piVar2 + 0xec))();
    local_3c = *local_1c;
    iVar5 = *local_30;
    uVar3 = FUN_0052fc10();
    (**(code **)(iVar5 + 0x150))(uVar3);
    (**(code **)(*local_20 + 0x104))();
    uVar3 = FUN_0055dd40();
    local_8 = 3;
    FUN_00408ed0(uVar3,0,0xffffffff);
    FUN_00a5ecc0(uVar3,0);
    local_8 = 0xffffffff;
    if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_74[0]);
    }
  }
  local_7c = 0xf;
  local_80 = 0;
  local_90[0] = local_90[0] & 0xffffff00;
  FUN_00409350("backers",7);
  local_8 = 7;
  piVar2 = (int *)(**(code **)(*param_2 + 0x9c))(local_90);
  local_8 = 0xffffffff;
  if (0xf < local_7c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_90[0]);
  }
  local_7c = 0xf;
  local_80 = 0;
  local_90[0] = local_90[0] & 0xffffff00;
  FUN_0062fc70(param_1,piVar2);
  local_30 = (int *)(local_14[1] - *local_14 >> 3);
  local_20 = local_2c;
  if ((int)local_2c < (int)local_30) {
    do {
      iVar5 = *piVar2;
      uVar8 = 0;
      uVar3 = FUN_0062f9c0(param_1,*local_14 + (int)local_20 * 8);
      (**(code **)(iVar5 + 0xb4))(uVar3,uVar8);
      local_20 = (int *)((int)local_20 + 1);
    } while ((int)local_20 < (int)local_30);
  }
  (**(code **)(*piVar2 + 0xe4))();
  local_7c = 0xf;
  local_80 = 0;
  local_90[0] = local_90[0] & 0xffffff00;
  FUN_00409350("wargoals",8);
  local_8 = 8;
  piVar2 = (int *)(**(code **)(*param_2 + 0x9c))(local_90);
  local_8 = 0xffffffff;
  local_20 = piVar2;
  if (0xf < local_7c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_90[0]);
  }
  local_7c = 0xf;
  local_80 = 0;
  local_90[0] = local_90[0] & 0xffffff00;
  (**(code **)(*piVar2 + 0xc0))();
  iVar5 = local_24[1] - *local_24 >> 6;
  if (0 < iVar5) {
    param_1 = 0;
    local_2c = (undefined4 *)iVar5;
    do {
      local_30 = (int *)(*local_24 + param_1);
      piVar2 = (int *)FUN_00aae9af(0x28);
      local_8 = 9;
      local_1c = piVar2;
      if (piVar2 == (int *)0x0) {
        piVar2 = (int *)0x0;
      }
      else {
        local_60 = 0xf;
        local_64 = 0;
        local_74[0] = local_74[0] & 0xffffff00;
        FUN_00409350("wargoal",7);
        piVar6 = DAT_01258a80;
        local_8 = CONCAT31(local_8._1_3_,10);
        local_18 = local_18 | 1;
        uVar3 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x3c))();
        piVar2[1] = 0;
        piVar2[2] = 0;
        piVar2[3] = 0;
        *(undefined1 *)(piVar2 + 4) = 0;
        DAT_013f08e0 = DAT_013f08e0 + 1;
        *(undefined1 *)(piVar2 + 5) = 0;
        *(undefined1 *)(piVar2 + 6) = 0;
        piVar2[7] = (int)&PTR_FUN_00e39158;
        local_8 = 0xe;
        *piVar2 = (int)&PTR_FUN_00e392f0;
        piVar2[7] = (int)&PTR_FUN_00e39320;
        *(undefined1 *)(piVar2 + 9) = 0;
        iVar5 = (**(code **)(*piVar6 + 0x2c))(local_74,uVar3);
        piVar2[8] = iVar5;
      }
      local_8 = 0xffffffff;
      if ((local_18 & 1) != 0) {
        local_18 = local_18 & 0xfffffffe;
        if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_74[0]);
        }
        local_60 = 0xf;
        local_64 = 0;
        local_74[0] = local_74[0] & 0xffffff00;
      }
      piVar6 = (int *)piVar2[8];
      local_44 = 0xf;
      local_48 = 0;
      local_58[0] = local_58[0] & 0xffffff00;
      FUN_00409350("wargoal_icon",0xc);
      local_8 = 0x10;
      piVar6 = (int *)(**(code **)(*piVar6 + 0x44))(local_58);
      (**(code **)(*piVar6 + 0x48))(*(undefined4 *)(*(int *)((int)local_30 + 0xc) + 0xc));
      local_8 = 0xffffffff;
      if (0xf < local_44) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_58[0]);
      }
      (**(code **)(piVar2[7] + 0x28))();
      (**(code **)(*local_20 + 0xb4))(piVar2,0);
      param_1 = param_1 + 0x40;
      local_2c = (undefined4 *)((int)local_2c + -1);
    } while (local_2c != (undefined4 *)0x0);
    local_2c = (undefined4 *)0x0;
    piVar2 = local_20;
  }
  (**(code **)(*piVar2 + 0xe4))();
  local_7c = 0xf;
  local_80 = 0;
  local_90[0] = local_90[0] & 0xffffff00;
  FUN_00409350("support_side",0xc);
  local_8 = 0x11;
  piVar2 = (int *)(**(code **)(*param_2 + 0x34))(local_90);
  local_8 = 0xffffffff;
  if (0xf < local_7c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_90[0]);
  }
  local_7c = 0xf;
  local_30 = (int *)(uint)((char)param_4 != '\0');
  local_80 = 0;
  local_90[0] = local_90[0] & 0xffffff00;
  (**(code **)(*piVar2 + 0xd4))(local_30);
  cVar1 = FUN_00425e20(param_4);
  if ((char)param_4 == '\0') {
    iVar5 = FUN_00425ac0();
  }
  else {
    iVar5 = FUN_00425a40();
  }
  if ((*(int *)(iVar5 + 4) == 0) || (cVar1 == '\0')) {
    pcVar7 = *(code **)(*piVar2 + 0xbc);
  }
  else {
    pcVar7 = *(code **)(*piVar2 + 0xb8);
  }
  (*pcVar7)();
  local_60 = 0xf;
  local_64 = 0;
  local_74[0] = local_74[0] & 0xffffff00;
  FUN_00409350("back_down",9);
  local_8 = 0x12;
  piVar6 = (int *)(**(code **)(*param_2 + 0x34))(local_74);
  local_8 = 0xffffffff;
  if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_74[0]);
  }
  local_60 = 0xf;
  local_64 = 0;
  local_74[0] = local_74[0] & 0xffffff00;
  (**(code **)(*piVar6 + 0xd4))(local_30);
  if ((char)param_4 == '\0') {
    iVar5 = FUN_00425ac0();
    if (*(int *)(iVar5 + 4) == *(int *)(DAT_012588e8 + 0xb60)) goto LAB_0062edd0;
  }
  else {
    iVar5 = FUN_00425a40();
    if (*(int *)(iVar5 + 4) == *(int *)(DAT_012588e8 + 0xb60)) {
LAB_0062edd0:
      cVar1 = FUN_00429b30();
      if (cVar1 == '\0') {
        pcVar7 = *(code **)(*piVar6 + 0xbc);
      }
      else {
        pcVar7 = *(code **)(*piVar6 + 0xb8);
      }
      (*pcVar7)();
      (**(code **)(*piVar6 + 0x108))();
      (**(code **)(*piVar6 + 0x34))();
      pcVar7 = *(code **)(*piVar2 + 0x104);
      goto LAB_0062eda1;
    }
  }
  (**(code **)(*piVar6 + 0xbc))();
  (**(code **)(*piVar6 + 0x104))();
  (**(code **)(*piVar2 + 0x108))();
  pcVar7 = *(code **)(*piVar2 + 0x34);
LAB_0062eda1:
  (*pcVar7)();
  ExceptionList = local_10;
  return;
}

