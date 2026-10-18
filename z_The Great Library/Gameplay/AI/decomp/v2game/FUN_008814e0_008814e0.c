// FUN_008814e0 @ 008814e0 body=[[008814e0, 0088158e] [00881592, 00881689] [0088168d, 008816a8] [008816ac, 008816cb] [008816cf, 008817ae] [008817b2, 008817cd] [008817d1, 008817f0] [008817f4, 0088189b] [0088189f, 008818b9] [008818bd, 0088199c] [008819a0, 008819bb] [008819bf, 008819dd] [008819e1, 00881a2c] [00881a30, 00881a6f] [00881a73, 00881a87]]


undefined1 * FUN_008814e0(undefined1 *param_1,undefined4 *param_2,undefined4 param_3)

{
  int *piVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  int in_ECX;
  uint in_stack_00000020;
  uint local_94 [4];
  undefined4 local_84;
  uint local_80;
  undefined1 local_78 [4];
  int local_74;
  undefined4 local_70;
  undefined4 local_6c;
  int local_64;
  undefined4 *local_60;
  uint local_5c [4];
  undefined4 local_4c;
  uint local_48;
  undefined1 local_40 [4];
  int local_3c;
  undefined4 local_38;
  undefined4 local_34;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puVar3 = param_2;
  puStack_c = &LAB_00b79495;
  local_10 = ExceptionList;
  local_60 = (undefined4 *)0x0;
  local_8 = 0;
  piVar1 = *(int **)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + param_2[4] * 4) + 200);
  do {
    if (piVar1 == (int *)0x0) {
      local_80 = 0xf;
      local_84 = 0;
      local_94[0] = local_94[0] & 0xffffff00;
      ExceptionList = &local_10;
      local_64 = in_ECX;
      FUN_00409350("MODIFIER_ADDED",0xe);
      local_8._0_1_ = 1;
      FUN_009a8ee0(local_78,local_94);
      local_8._0_1_ = 3;
      if (0xf < local_80) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_80 = 0xf;
      local_84 = 0;
      local_94[0] = local_94[0] & 0xffffff00;
      local_18 = 0xf;
      local_1c = 0;
      local_2c[0] = local_2c[0] & 0xffffff00;
      FUN_00409350("WHERE",5);
      local_8._0_1_ = 4;
      (**(code **)(**(int **)(*(int *)(DAT_012588e8 + 0xacc) + puVar3[4] * 4) + 0x1c))();
      local_8._0_1_ = 5;
      puVar3 = (undefined4 *)FUN_009a8ee0();
      local_8._0_1_ = 6;
      puVar4 = (undefined4 *)FUN_00aae9af(0x38);
      local_8._0_1_ = 7;
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        *puVar4 = &PTR_FUN_00e38ecc;
        puVar4[1] = local_78;
        puVar4[7] = 0xf;
        puVar4[6] = 0;
        *(undefined1 *)(puVar4 + 2) = 0;
        param_2 = puVar4;
        FUN_00408ed0(local_2c,0,0xffffffff);
        *puVar4 = &PTR_FUN_00e38f08;
        local_60 = puVar4 + 9;
        *local_60 = *puVar3;
        puVar4[10] = 0;
        puVar4[0xb] = 0;
        puVar4[0xc] = 0;
        local_8._0_1_ = 9;
        FUN_009a97b0();
      }
      local_8._0_1_ = 6;
      param_2 = puVar4;
      FUN_009e6810();
      local_8._0_1_ = 10;
      FUN_009adb70();
      if (local_3c != 0) {
        FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_3c);
      }
      local_3c = 0;
      local_38 = 0;
      local_34 = 0;
      if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_5c[0]);
      }
      local_8._0_1_ = 3;
      local_48 = 0xf;
      local_4c = 0;
      local_5c[0] = local_5c[0] & 0xffffff00;
      if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_2c[0]);
      }
      local_18 = 0xf;
      local_1c = 0;
      local_2c[0] = local_2c[0] & 0xffffff00;
      FUN_00409350();
      local_8._0_1_ = 0xb;
      uVar5 = (**(code **)(**(int **)(local_64 + 0x24) + 0x18))(local_5c);
      local_8._0_1_ = 0xc;
      puVar3 = (undefined4 *)FUN_009a8ee0(local_40,uVar5);
      local_8._0_1_ = 0xd;
      puVar4 = (undefined4 *)FUN_00aae9af();
      local_8._0_1_ = 0xe;
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        *puVar4 = &PTR_FUN_00e38ecc;
        puVar4[1] = local_78;
        puVar4[7] = 0xf;
        puVar4[6] = 0;
        *(undefined1 *)(puVar4 + 2) = 0;
        param_2 = puVar4;
        FUN_00408ed0(local_2c,0,0xffffffff);
        *puVar4 = &PTR_FUN_00e38f08;
        local_60 = puVar4 + 9;
        *local_60 = *puVar3;
        puVar4[10] = 0;
        puVar4[0xb] = 0;
        puVar4[0xc] = 0;
        local_8._0_1_ = 0x10;
        FUN_009a97b0();
      }
      local_8._0_1_ = 0xd;
      param_2 = puVar4;
      FUN_009e6810(local_2c,&param_2);
      local_8._0_1_ = 0x11;
      FUN_009adb70();
      if (local_3c != 0) {
        FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_3c = 0;
      local_38 = 0;
      local_34 = 0;
      if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8._0_1_ = 3;
      uVar2 = (undefined1)local_8;
      local_8._0_1_ = 3;
      local_48 = 0xf;
      local_4c = 0;
      local_5c[0] = local_5c[0] & 0xffffff00;
      if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      if (*(int *)(local_64 + 0x20) < 1) {
        local_18 = 0xf;
        local_1c = 0;
        local_2c[0] = (uint)local_2c[0]._1_3_ << 8;
        FUN_00409350(&DAT_00dfa9f8,4);
        local_8._0_1_ = 0x12;
        FUN_0043b700(DAT_012586dc + 0xc,local_5c);
        local_8._0_1_ = 0x13;
      }
      else {
        param_2 = (undefined4 *)(*(int *)(DAT_012588e8 + 0xb0c) + *(int *)(local_64 + 0x20) * 0x18);
        local_18 = 0xf;
        local_1c = 0;
        local_2c[0] = (uint)local_2c[0]._1_3_ << 8;
        local_8._0_1_ = uVar2;
        FUN_00409350(&DAT_00dfa9f8,4);
        local_8._0_1_ = 0x14;
        FUN_0043b700(&param_2,local_5c);
        local_8._0_1_ = 0x15;
      }
      FUN_009a9980();
      if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8._0_1_ = 3;
      local_5c[0] = local_5c[0] & 0xffffff00;
      local_4c = 0;
      local_48 = 0xf;
      if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_18 = 0xf;
      local_1c = 0;
      local_2c[0] = local_2c[0] & 0xffffff00;
      FUN_00409350("EFFECT",6);
      local_8._0_1_ = 0x16;
      uVar5 = (**(code **)(**(int **)(local_64 + 0x24) + 0x1c))();
      local_8._0_1_ = 0x17;
      puVar3 = (undefined4 *)FUN_009a8ee0(local_40,uVar5);
      local_8._0_1_ = 0x18;
      puVar4 = (undefined4 *)FUN_00aae9af();
      local_8._0_1_ = 0x19;
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        puVar4[1] = local_78;
        *puVar4 = &PTR_FUN_00e38ecc;
        puVar4[7] = 0xf;
        puVar4[6] = 0;
        *(undefined1 *)(puVar4 + 2) = 0;
        param_2 = puVar4;
        FUN_00408ed0();
        *puVar4 = &PTR_FUN_00e38f08;
        local_60 = puVar4 + 9;
        *local_60 = *puVar3;
        puVar4[10] = 0;
        puVar4[0xb] = 0;
        puVar4[0xc] = 0;
        local_8._0_1_ = 0x1b;
        FUN_009a97b0();
      }
      local_8._0_1_ = 0x18;
      param_2 = puVar4;
      FUN_009e6810(local_2c,&param_2);
      local_8._0_1_ = 0x1c;
      FUN_009adb70();
      if (local_3c != 0) {
        FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_3c = 0;
      local_38 = 0;
      local_34 = 0;
      if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8._0_1_ = 3;
      local_48 = 0xf;
      local_4c = 0;
      local_5c[0] = local_5c[0] & 0xffffff00;
      if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      iVar6 = FUN_00475500();
      FUN_009a9880(*(undefined8 *)(iVar6 + 0x6c),*(undefined8 *)(iVar6 + 0x74));
      local_8 = CONCAT31(local_8._1_3_,0x1d);
      FUN_009adb70();
      if (local_74 != 0) {
        FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_74 = 0;
      local_70 = 0;
      local_6c = 0;
      goto joined_r0x00881a65;
    }
    iVar6 = *piVar1;
    piVar1 = (int *)piVar1[2];
  } while (*(int *)(iVar6 + 8) != *(int *)(in_ECX + 0x24));
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  FUN_00409350(&DAT_00ded94d,0);
joined_r0x00881a65:
  if (in_stack_00000020 < 0x10) {
    ExceptionList = local_10;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

