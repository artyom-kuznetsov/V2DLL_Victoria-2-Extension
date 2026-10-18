// FUN_00678a90 @ 00678a90 body=[[00678a90, 00678b02] [00678b06, 00678ba0] [00678ba4, 00678d96] [00678d9a, 00678db6] [00678dba, 00678dde] [00678de2, 00678f3d] [00678f41, 00678f64] [00678f68, 00678f98] [00678f9c, 00679002]]


void FUN_00678a90(void)

{
  short sVar1;
  short sVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  short *psVar7;
  int in_ECX;
  uint local_f0 [4];
  undefined4 local_e0;
  uint local_dc;
  undefined1 local_d4 [4];
  undefined1 local_d0 [4];
  undefined1 local_cc [4];
  undefined1 local_c8 [4];
  uint local_c4 [4];
  undefined4 local_b4;
  uint local_b0;
  uint local_a8 [4];
  undefined4 local_98;
  uint local_94;
  uint local_8c [4];
  undefined4 local_7c;
  uint local_78;
  uint local_70 [4];
  undefined4 local_60;
  uint local_5c;
  uint local_54 [4];
  undefined4 local_44;
  uint local_40;
  uint local_38 [4];
  undefined4 local_28;
  uint local_24;
  int *local_1c;
  int *local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b6f4ee;
  local_10 = ExceptionList;
  local_18 = (int *)0x0;
  local_40 = 0xf;
  local_44 = 0;
  local_54[0] = local_54[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("options",7);
  local_8 = 0;
  piVar3 = (int *)(**(code **)(**(int **)(in_ECX + 0x1dc0) + 0x7c))(local_54);
  local_8 = 0xffffffff;
  local_1c = piVar3;
  if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_54[0]);
  }
  local_40 = 0xf;
  local_44 = 0;
  local_54[0] = local_54[0] & 0xffffff00;
  (**(code **)(*piVar3 + 0x5c))();
  if (*(int *)(in_ECX + 0x1dc8) != 0) {
    local_14 = (int *)FUN_00aae9af(0x28);
    local_8 = 1;
    if (local_14 == (int *)0x0) {
      local_14 = (int *)0x0;
    }
    else {
      local_24 = 0xf;
      local_28 = 0;
      local_38[0] = local_38[0] & 0xffffff00;
      FUN_00409350("empty_right_click_entry",0x17);
      local_8 = CONCAT31(local_8._1_3_,2);
      local_18 = (int *)0x1;
      local_14 = (int *)FUN_009b1df0(local_14,local_38);
    }
    local_8 = 0xffffffff;
    if (((uint)local_18 & 1) != 0) {
      if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_38[0]);
      }
      local_24 = 0xf;
      local_28 = 0;
      local_38[0] = local_38[0] & 0xffffff00;
    }
    (**(code **)(*piVar3 + 0x10))(local_14,1);
    local_14 = (int *)FUN_00aae9af(0xa0);
    local_8 = 4;
    if (local_14 == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = FUN_006a47e0(local_14,in_ECX,*(int *)(*(int *)(in_ECX + 0x1dc8) + 0x30) + 0x24);
    }
    local_8 = 0xffffffff;
    if (iVar4 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = iVar4 + 4;
    }
    (**(code **)(*piVar3 + 0x10))(iVar4,1);
  }
  iVar4 = (**(code **)(*piVar3 + 0x2c))();
  if (*(int *)(iVar4 + 8) < 2) {
    (**(code **)(*(int *)(*(int *)(in_ECX + 0x1dc0) + 0x18) + 0x38))();
    ExceptionList = local_10;
    return;
  }
  local_14 = (int *)FUN_00aae9af(0x88);
  local_8 = 5;
  if (local_14 == (int *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_006a4380(local_14);
  }
  local_8 = 0xffffffff;
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = iVar4 + 4;
  }
  (**(code **)(*piVar3 + 0x10))(iVar4,1);
  local_dc = 0xf;
  local_e0 = 0;
  local_f0[0] = local_f0[0] & 0xffffff00;
  FUN_00409350("options",7);
  local_8 = 6;
  local_5c = 0xf;
  local_60 = 0;
  local_70[0] = local_70[0] & 0xffffff00;
  FUN_00409350("options",7);
  local_8._0_1_ = 7;
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  FUN_00409350("options",7);
  local_8 = CONCAT31(local_8._1_3_,8);
  piVar3 = (int *)(**(code **)(**(int **)(in_ECX + 0x1dc0) + 0x7c))(local_f0);
  puVar5 = (undefined4 *)(**(code **)(*piVar3 + 0x2c))();
  iVar4 = *(int *)*puVar5;
  local_14 = (int *)(**(code **)(**(int **)(in_ECX + 0x1dc0) + 0x7c))(local_70);
  piVar3 = (int *)(**(code **)(**(int **)(in_ECX + 0x1dc0) + 0x7c))(local_38);
  puVar5 = (undefined4 *)(**(code **)(*piVar3 + 0x2c))();
  local_18 = (int *)(*(int *)*puVar5 + 0x1c);
  iVar6 = (**(code **)(*local_14 + 0x2c))();
  local_14 = *(int **)(iVar6 + 8);
  iVar4 = (**(code **)(*(int *)(iVar4 + 0x1c) + 0x14))(local_d0);
  sVar2 = (short)local_14;
  sVar1 = *(short *)(iVar4 + 2);
  psVar7 = (short *)(**(code **)(*local_18 + 0x14))(local_d4);
  local_14 = (int *)CONCAT22((sVar2 + 1) * sVar1 + 7,*psVar7 + 0x14);
  FUN_005fcb30(local_14);
  if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_38[0]);
  }
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_70[0]);
  }
  local_8 = 0xffffffff;
  local_5c = 0xf;
  local_60 = 0;
  local_70[0] = local_70[0] & 0xffffff00;
  if (0xf < local_dc) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_f0[0]);
  }
  iVar4 = (**(code **)(*local_1c + 0x2c))();
  if (*(int *)(iVar4 + 8) == 3) {
    local_94 = 0xf;
    local_98 = 0;
    local_a8[0] = local_a8[0] & 0xffffff00;
    FUN_00409350("options",7);
    local_8 = 9;
    local_b0 = 0xf;
    local_b4 = 0;
    local_c4[0] = local_c4[0] & 0xffffff00;
    FUN_00409350("options",7);
    local_8._0_1_ = 10;
    local_78 = 0xf;
    local_7c = 0;
    local_8c[0] = local_8c[0] & 0xffffff00;
    FUN_00409350("options",7);
    local_8 = CONCAT31(local_8._1_3_,0xb);
    piVar3 = (int *)(**(code **)(**(int **)(in_ECX + 0x1dc0) + 0x7c))(local_a8);
    puVar5 = (undefined4 *)(**(code **)(*piVar3 + 0x2c))();
    iVar4 = *(int *)*puVar5;
    local_14 = (int *)(**(code **)(**(int **)(in_ECX + 0x1dc0) + 0x7c))(local_c4);
    piVar3 = (int *)(**(code **)(**(int **)(in_ECX + 0x1dc0) + 0x7c))(local_8c);
    puVar5 = (undefined4 *)(**(code **)(*piVar3 + 0x2c))();
    local_18 = (int *)(*(int *)*puVar5 + 0x1c);
    iVar6 = (**(code **)(*local_14 + 0x2c))();
    local_14 = *(int **)(iVar6 + 8);
    iVar4 = (**(code **)(*(int *)(iVar4 + 0x1c) + 0x14))(local_cc);
    sVar2 = (short)local_14;
    sVar1 = *(short *)(iVar4 + 2);
    psVar7 = (short *)(**(code **)(*local_18 + 0x14))(local_c8);
    local_14 = (int *)CONCAT22((sVar2 + 1) * sVar1 + 0xe,*psVar7 + 0x14);
    FUN_005fcb30(local_14);
    if (0xf < local_78) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_8c[0]);
    }
    local_78 = 0xf;
    local_7c = 0;
    local_8c[0] = local_8c[0] & 0xffffff00;
    if (0xf < local_b0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_c4[0]);
    }
    local_8 = 0xffffffff;
    local_b0 = 0xf;
    local_b4 = 0;
    local_c4[0] = local_c4[0] & 0xffffff00;
    if (0xf < local_94) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_a8[0]);
    }
    local_94 = 0xf;
    local_98 = 0;
    local_a8[0] = local_a8[0] & 0xffffff00;
  }
  (**(code **)(*(int *)(*(int *)(in_ECX + 0x1dc0) + 0x18) + 0x34))();
  (**(code **)(**(int **)(in_ECX + 0x1dc0) + 0x2c))();
  ExceptionList = local_10;
  return;
}

