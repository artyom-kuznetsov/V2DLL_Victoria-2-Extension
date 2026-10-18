// FUN_00881b40 @ 00881b40 body=[[00881b40, 00881c14] [00881c18, 00881ca7] [00881cab, 00881cca] [00881cce, 00881dad] [00881db1, 00881dcc] [00881dd0, 00881def] [00881df3, 00881e58] [00881e5c, 00881ed6] [00881eda, 00881ef4] [00881ef8, 00881fd7] [00881fdb, 00881ff6] [00881ffa, 00882018] [0088201c, 00882067] [0088206b, 008820aa] [008820ae, 008820c2]]


undefined1 * FUN_00881b40(undefined1 *param_1,undefined4 *param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  undefined1 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  int in_ECX;
  uint in_stack_00000020;
  uint *puVar9;
  undefined8 uVar8;
  uint local_a0 [4];
  undefined4 local_90;
  uint local_8c;
  undefined4 local_84;
  undefined4 *local_80;
  uint local_7c;
  undefined1 local_74 [4];
  int local_70;
  undefined4 local_6c;
  uint local_68;
  undefined1 local_60 [4];
  int local_5c;
  undefined4 local_58;
  undefined4 local_54;
  uint local_4c [4];
  undefined4 local_3c;
  uint local_38;
  int local_30;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b88590;
  local_10 = ExceptionList;
  local_80 = (undefined4 *)0x0;
  local_8 = 0;
  local_84 = param_2[2];
  iVar7 = *(int *)(*(int *)(DAT_012587e4 + 4) + param_2[3] * 4);
  piVar1 = *(int **)(iVar7 + 0x4d8);
  do {
    if (piVar1 == (int *)0x0) {
      piVar1 = *(int **)(iVar7 + 0x4e8);
      goto joined_r0x00881bab;
    }
    iVar2 = *piVar1;
    piVar1 = (int *)piVar1[2];
  } while (*(int *)(iVar2 + 8) != *(int *)(in_ECX + 0x24));
  goto LAB_00882080;
  while (iVar7 = *piVar1, piVar1 = (int *)piVar1[2], iVar7 != *(int *)(in_ECX + 0x24)) {
joined_r0x00881bab:
    if (piVar1 == (int *)0x0) {
      local_8c = 0xf;
      local_90 = 0;
      local_a0[0] = local_a0[0] & 0xffffff00;
      ExceptionList = &local_10;
      local_30 = in_ECX;
      FUN_00409350("MODIFIER_ADDED",0xe);
      local_8._0_1_ = 1;
      FUN_009a8ee0(local_60,local_a0);
      local_8._0_1_ = 3;
      if (0xf < local_8c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8c = 0xf;
      local_90 = 0;
      local_a0[0] = local_a0[0] & 0xffffff00;
      local_18 = 0xf;
      local_1c = 0;
      local_2c[0] = local_2c[0] & 0xffffff00;
      FUN_00409350("WHERE",5);
      local_8._0_1_ = 4;
      FUN_0055dd40();
      local_8._0_1_ = 5;
      param_2 = (undefined4 *)FUN_00aae9af();
      local_8._0_1_ = 6;
      if (param_2 == (undefined4 *)0x0) {
        param_2 = (undefined4 *)0x0;
      }
      else {
        param_2 = (undefined4 *)FUN_009a9ce0();
      }
      local_8._0_1_ = 5;
      FUN_009e6810(local_2c,&param_2);
      if (0xf < local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8._0_1_ = 3;
      local_68 = 0xf;
      local_6c = 0;
      local_7c = local_7c & 0xffffff00;
      if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_18 = 0xf;
      local_1c = 0;
      local_2c[0] = local_2c[0] & 0xffffff00;
      FUN_00409350(&DAT_00e29cf4,4);
      local_8._0_1_ = 7;
      puVar9 = local_4c;
      (**(code **)(**(int **)(local_30 + 0x24) + 0x18))();
      local_8._0_1_ = 8;
      puVar4 = (undefined4 *)FUN_009a8ee0();
      local_8._0_1_ = 9;
      puVar5 = (undefined4 *)FUN_00aae9af(0x38);
      local_8._0_1_ = 10;
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        puVar5[1] = local_60;
        *puVar5 = &PTR_FUN_00e38ecc;
        puVar5[7] = 0xf;
        puVar5[6] = 0;
        *(undefined1 *)(puVar5 + 2) = 0;
        param_2 = puVar5;
        FUN_00408ed0(local_2c,0,0xffffffff);
        *puVar5 = &PTR_FUN_00e38f08;
        local_80 = puVar5 + 9;
        *local_80 = *puVar4;
        puVar5[10] = 0;
        puVar5[0xb] = 0;
        puVar5[0xc] = 0;
        local_8._0_1_ = 0xc;
        FUN_009a97b0();
      }
      local_8._0_1_ = 9;
      param_2 = puVar5;
      FUN_009e6810();
      local_8._0_1_ = 0xd;
      FUN_009adb70();
      if (local_70 != 0) {
        FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_70);
      }
      local_70 = 0;
      local_6c = 0;
      local_68 = 0;
      if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_4c[0]);
      }
      local_8._0_1_ = 3;
      uVar3 = (undefined1)local_8;
      local_8._0_1_ = 3;
      local_38 = 0xf;
      local_3c = 0;
      local_4c[0] = local_4c[0] & 0xffffff00;
      if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_2c[0]);
      }
      if (*(int *)(local_30 + 0x20) < 1) {
        local_18 = 0xf;
        local_1c = 0;
        local_2c[0] = (uint)local_2c[0]._1_3_ << 8;
        FUN_00409350();
        local_8._0_1_ = 0xe;
        uVar6 = FUN_0043b700();
        local_8._0_1_ = 0xf;
        FUN_009a9980(uVar6);
        if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_4c[0]);
        }
        local_4c[0] = local_4c[0] & 0xffffff00;
        if (0xf < local_18) {
          uVar8 = CONCAT44(puVar9,local_2c[0]);
LAB_00881ef0:
          local_8._0_1_ = 3;
          local_38 = 0xf;
          local_3c = 0;
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(uVar8);
        }
      }
      else {
        param_2 = (undefined4 *)(*(int *)(DAT_012588e8 + 0xb0c) + *(int *)(local_30 + 0x20) * 0x18);
        local_18 = 0xf;
        local_1c = 0;
        local_2c[0] = (uint)local_2c[0]._1_3_ << 8;
        local_8._0_1_ = uVar3;
        FUN_00409350();
        local_8._0_1_ = 0x10;
        uVar6 = FUN_0043b700();
        local_8._0_1_ = 0x11;
        FUN_009a9980(uVar6);
        if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_4c[0]);
        }
        local_4c[0] = local_4c[0] & 0xffffff00;
        if (0xf < local_18) {
          uVar8 = CONCAT44(puVar9,local_2c[0]);
          goto LAB_00881ef0;
        }
      }
      local_8._0_1_ = 3;
      local_38 = 0xf;
      local_3c = 0;
      local_18 = 0xf;
      local_1c = 0;
      local_2c[0] = local_2c[0] & 0xffffff00;
      FUN_00409350();
      local_8._0_1_ = 0x12;
      uVar6 = (**(code **)(**(int **)(local_30 + 0x24) + 0x1c))(local_4c);
      local_8._0_1_ = 0x13;
      puVar4 = (undefined4 *)FUN_009a8ee0(local_74,uVar6);
      local_8._0_1_ = 0x14;
      puVar5 = (undefined4 *)FUN_00aae9af();
      local_8._0_1_ = 0x15;
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        puVar5[1] = local_60;
        *puVar5 = &PTR_FUN_00e38ecc;
        puVar5[7] = 0xf;
        puVar5[6] = 0;
        *(undefined1 *)(puVar5 + 2) = 0;
        param_2 = puVar5;
        FUN_00408ed0();
        *puVar5 = &PTR_FUN_00e38f08;
        local_80 = puVar5 + 9;
        *local_80 = *puVar4;
        puVar5[10] = 0;
        puVar5[0xb] = 0;
        puVar5[0xc] = 0;
        local_8._0_1_ = 0x17;
        FUN_009a97b0();
      }
      local_8._0_1_ = 0x14;
      param_2 = puVar5;
      FUN_009e6810(local_2c,&param_2);
      local_8._0_1_ = 0x18;
      FUN_009adb70();
      if (local_70 != 0) {
        FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_70 = 0;
      local_6c = 0;
      local_68 = 0;
      if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8._0_1_ = 3;
      local_38 = 0xf;
      local_3c = 0;
      local_4c[0] = local_4c[0] & 0xffffff00;
      if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      iVar7 = FUN_00475500();
      FUN_009a9880(*(undefined8 *)(iVar7 + 0x6c),*(undefined8 *)(iVar7 + 0x74));
      local_8 = CONCAT31(local_8._1_3_,0x19);
      FUN_009adb70();
      if (local_5c != 0) {
        FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_5c = 0;
      local_58 = 0;
      local_54 = 0;
      goto joined_r0x008820a0;
    }
  }
LAB_00882080:
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  FUN_00409350(&DAT_00ded94d,0);
joined_r0x008820a0:
  if (0xf < in_stack_00000020) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_1;
}

