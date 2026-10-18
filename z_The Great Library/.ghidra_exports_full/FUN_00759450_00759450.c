// FUN_00759450 @ 00759450 body=[[00759450, 007594bf] [007594c3, 0075956c] [00759570, 0075976d] [00759771, 00759795] [00759799, 007597c1] [007597c5, 00759927] [0075992b, 0075994e] [00759952, 0075997c] [00759980, 007599dd]]


void FUN_00759450(void)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  short *psVar6;
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
  puStack_c = &LAB_00b7c15e;
  local_10 = ExceptionList;
  local_14 = (int *)0x0;
  local_40 = 0xf;
  local_44 = 0;
  local_54[0] = local_54[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("options",7);
  local_8 = 0;
  piVar1 = (int *)(**(code **)(**(int **)(in_ECX + 0x8c) + 0x7c))(local_54);
  local_8 = 0xffffffff;
  if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_54[0]);
  }
  local_40 = 0xf;
  local_44 = 0;
  local_54[0] = local_54[0] & 0xffffff00;
  (**(code **)(*piVar1 + 0x5c))();
  if (*(int *)(in_ECX + 0x94) != 0) {
    local_18 = (int *)FUN_00aae9af(0x28);
    local_8 = 1;
    if (local_18 == (int *)0x0) {
      uVar2 = 0;
    }
    else {
      local_24 = 0xf;
      local_28 = 0;
      local_38[0] = local_38[0] & 0xffffff00;
      FUN_00409350("empty_right_click_entry",0x17);
      local_8 = CONCAT31(local_8._1_3_,2);
      local_14 = (int *)0x1;
      uVar2 = FUN_009b1df0(local_18,local_38);
    }
    local_8 = 3;
    (**(code **)(*piVar1 + 0x10))(uVar2,1);
    local_8 = 0xffffffff;
    if ((((uint)local_14 & 1) != 0) && (0xf < local_24)) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_38[0]);
    }
    local_1c = (int *)FUN_00aae9af(0xa0);
    local_8 = 4;
    if (local_1c == (int *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_006a47e0(local_1c,in_ECX,*(int *)(*(int *)(in_ECX + 0x94) + 0x30) + 0x24);
    }
    local_8 = 0xffffffff;
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = iVar3 + 4;
    }
    (**(code **)(*piVar1 + 0x10))(iVar3,1);
  }
  iVar3 = (**(code **)(*piVar1 + 0x2c))();
  if (*(int *)(iVar3 + 8) < 2) {
    (**(code **)(*(int *)(*(int *)(in_ECX + 0x8c) + 0x18) + 0x38))();
    ExceptionList = local_10;
    return;
  }
  local_1c = (int *)FUN_00aae9af(0x88);
  local_8 = 5;
  if (local_1c == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_006a4380(local_1c);
  }
  local_8 = 0xffffffff;
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = iVar3 + 4;
  }
  (**(code **)(*piVar1 + 0x10))(iVar3,1);
  local_dc = 0xf;
  local_e0 = 0;
  local_f0[0] = local_f0[0] & 0xffffff00;
  FUN_00409350("options",7);
  local_8 = 6;
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  FUN_00409350("options",7);
  local_8._0_1_ = 7;
  local_94 = 0xf;
  local_98 = 0;
  local_a8[0] = local_a8[0] & 0xffffff00;
  FUN_00409350("options",7);
  local_8 = CONCAT31(local_8._1_3_,8);
  piVar4 = (int *)(**(code **)(**(int **)(in_ECX + 0x8c) + 0x7c))(local_f0);
  puVar5 = (undefined4 *)(**(code **)(*piVar4 + 0x2c))();
  local_14 = (int *)(*(int *)*puVar5 + 0x1c);
  local_18 = (int *)(**(code **)(**(int **)(in_ECX + 0x8c) + 0x7c))(local_38);
  piVar4 = (int *)(**(code **)(**(int **)(in_ECX + 0x8c) + 0x7c))(local_a8);
  puVar5 = (undefined4 *)(**(code **)(*piVar4 + 0x2c))();
  local_1c = (int *)(*(int *)*puVar5 + 0x1c);
  iVar3 = (**(code **)(*local_18 + 0x2c))();
  local_18 = *(int **)(iVar3 + 8);
  iVar3 = (**(code **)(*local_14 + 0x14))(local_d0);
  local_18 = (int *)(uint)(ushort)(((short)local_18 + 1) * *(short *)(iVar3 + 2) + 7);
  psVar6 = (short *)(**(code **)(*local_1c + 0x14))(local_d4);
  local_14 = (int *)CONCAT22(local_18._0_2_,*psVar6 + 0x14);
  FUN_005fcb30(local_14);
  if (0xf < local_94) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_a8[0]);
  }
  local_94 = 0xf;
  local_98 = 0;
  local_a8[0] = local_a8[0] & 0xffffff00;
  if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_38[0]);
  }
  local_8 = 0xffffffff;
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  if (0xf < local_dc) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_f0[0]);
  }
  iVar3 = (**(code **)(*piVar1 + 0x2c))();
  if (*(int *)(iVar3 + 8) == 3) {
    local_5c = 0xf;
    local_60 = 0;
    local_70[0] = local_70[0] & 0xffffff00;
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
    piVar1 = (int *)(**(code **)(**(int **)(in_ECX + 0x8c) + 0x7c))(local_70);
    puVar5 = (undefined4 *)(**(code **)(*piVar1 + 0x2c))();
    local_18 = (int *)(*(int *)*puVar5 + 0x1c);
    local_1c = (int *)(**(code **)(**(int **)(in_ECX + 0x8c) + 0x7c))(local_c4);
    piVar1 = (int *)(**(code **)(**(int **)(in_ECX + 0x8c) + 0x7c))(local_8c);
    puVar5 = (undefined4 *)(**(code **)(*piVar1 + 0x2c))();
    local_14 = (int *)(*(int *)*puVar5 + 0x1c);
    iVar3 = (**(code **)(*local_1c + 0x2c))();
    local_1c = *(int **)(iVar3 + 8);
    iVar3 = (**(code **)(*local_18 + 0x14))(local_cc);
    local_1c = (int *)(uint)(ushort)(((short)local_1c + 1) * *(short *)(iVar3 + 2) + 0xe);
    psVar6 = (short *)(**(code **)(*local_14 + 0x14))(local_c8);
    local_14 = (int *)CONCAT22(local_1c._0_2_,*psVar6 + 0x14);
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
    if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_70[0]);
    }
    local_5c = 0xf;
    local_60 = 0;
    local_70[0] = local_70[0] & 0xffffff00;
  }
  (**(code **)(*(int *)(*(int *)(in_ECX + 0x8c) + 0x18) + 0x34))();
  (**(code **)(**(int **)(in_ECX + 0x8c) + 0x2c))();
  ExceptionList = local_10;
  return;
}

