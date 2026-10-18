// FUN_004c2960 @ 004c2960 body=[[004c2960, 004c2a14] [004c2a18, 004c2b24] [004c2b28, 004c2b61] [004c2bdf, 004c2bef]]


void FUN_004c2960(int param_1,int param_2)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined **local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c0 [10];
  undefined1 local_98 [4];
  undefined1 local_94 [4];
  undefined4 *local_90;
  int local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48;
  undefined1 *local_3c;
  uint local_38 [4];
  undefined4 local_28;
  uint local_24;
  int local_1c;
  undefined ***local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b51765;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff04;
  local_1c = param_1;
  local_8 = 0;
  if (param_2 == 0) {
    return;
  }
  ExceptionList = &local_10;
  puVar1 = &stack0xffffff04;
  if (DAT_01258734 == (undefined4 *)0x0) {
    ExceptionList = &local_10;
    puVar2 = (undefined4 *)FUN_00aae9af(0x170);
    if (puVar2 == (undefined4 *)0x0) {
      DAT_01258734 = (undefined4 *)0x0;
      puVar1 = local_14;
    }
    else {
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      local_8._0_1_ = 2;
      local_24 = 0xf;
      local_28 = 0;
      local_38[0] = local_38[0] & 0xffffff00;
      local_18 = (undefined ***)puVar2;
      FUN_00409350(&DAT_00dfbe80,4);
      local_8 = CONCAT31(local_8._1_3_,3);
      FUN_004dd0a0(puVar2 + 4,local_38);
      if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_38[0]);
      }
      local_24 = 0xf;
      local_28 = 0;
      local_38[0] = local_38[0] & 0xffffff00;
      DAT_01258734 = puVar2;
      puVar1 = local_14;
    }
  }
  local_14 = puVar1;
  local_18 = &local_e0;
  local_dc = 0x18d;
  local_e0 = CStateEmployment::vftable;
  local_d8 = 0;
  local_d4 = 0;
  local_d0 = 0;
  local_cc = 0;
  local_c8 = 0;
  local_8._0_1_ = 4;
  iVar3 = 4;
  puVar2 = local_c0;
  while (iVar3 = iVar3 + -1, -1 < iVar3) {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2 = puVar2 + 2;
  }
  local_c0[8] = 0;
  local_c0[9] = 0;
  FUN_004ed5f0(local_98);
  local_c0[1] = 0;
  local_c0[0] = 0x8000;
  local_c0[2] = 0x8000;
  local_c0[3] = 0;
  local_c0[4] = 0;
  local_c0[5] = 0;
  local_c0[6] = 0;
  local_c0[7] = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_18 = (undefined ***)param_1;
  local_8._0_1_ = 6;
  if (param_1 != 0) {
    FUN_004c2d60();
  }
  local_18 = &local_e0;
  if (local_84 == 0) {
    local_3c = local_94;
    local_84 = 0;
    local_80 = 0;
    local_7c = 0;
    local_8 = CONCAT31(local_8._1_3_,8);
    FUN_00445600(*local_90,local_90);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_90);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_84);
}

