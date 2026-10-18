// FUN_004e3a40 @ 004e3a40 body=[[004e3a40, 004e3afe] [004e3b02, 004e3b22] [004e3b26, 004e3ba3] [004e3ba7, 004e3bc6] [004e3bca, 004e3c3c] [004e3c40, 004e3cb2] [004e3cb6, 004e3d3f] [004e3d43, 004e3dfc] [004e3e00, 004e3e1a] [004e3e1e, 004e3e9f] [004e3ea3, 004e3ec2] [004e3ec6, 004e3f47] [004e3f4b, 004e3f6a] [004e3f6e, 004e4000] [004e4004, 004e4023] [004e4027, 004e4085] [004e4089, 004e40a7] [004e40ab, 004e4180] [004e4184, 004e41c7] [004e41cb, 004e420f] [004e4213, 004e4237] [004e423b, 004e426e] [004e4272, 004e4287]]


/* WARNING: Removing unreachable block (ram,0x004e422c) */
/* WARNING: Removing unreachable block (ram,0x004e4204) */

undefined4 FUN_004e3a40(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  uint in_stack_00000020;
  undefined1 local_68 [20];
  uint local_54;
  undefined4 local_44;
  uint local_40;
  uint local_38 [4];
  undefined4 local_28;
  uint local_24;
  undefined4 local_1c;
  int local_18 [2];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b821d1;
  local_10 = ExceptionList;
  local_8 = 1;
  ExceptionList = &local_10;
  FUN_009a8ee0(local_68,&param_3);
  local_8._0_1_ = 2;
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  FUN_00409350("COUNTRY",7);
  local_8._0_1_ = 3;
  FUN_0055dd70();
  local_8._0_1_ = 4;
  local_18[0] = FUN_00aae9af();
  local_8._0_1_ = 5;
  if (local_18[0] == 0) {
    local_18[0] = 0;
  }
  else {
    local_18[0] = FUN_009a9ce0();
  }
  local_8._0_1_ = 4;
  FUN_009e6810(local_38,local_18);
  if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 2;
  local_40 = 0xf;
  local_44 = 0;
  local_54 = local_54 & 0xffffff00;
  if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  FUN_00409350("COUNTRY_ADJ",0xb);
  local_8._0_1_ = 6;
  FUN_0055dd70();
  local_8._0_1_ = 7;
  local_18[0] = FUN_00aae9af();
  local_8._0_1_ = 8;
  if (local_18[0] == 0) {
    local_18[0] = 0;
  }
  else {
    local_18[0] = FUN_009a9ce0();
  }
  local_8._0_1_ = 7;
  FUN_009e6810(local_38,local_18);
  if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 2;
  local_40 = 0xf;
  local_44 = 0;
  local_54 = local_54 & 0xffffff00;
  if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  FUN_00409350(&DAT_00ded94d,0);
  local_8._0_1_ = 9;
  piVar5 = *(int **)(*(int *)(param_1 + 0x30) + 0x130);
  cVar3 = (**(code **)(*piVar5 + 0x20))();
  if (cVar3 != '\0') {
    (**(code **)(*piVar5 + 0x18))();
    local_8._0_1_ = 10;
    FUN_00408ed0();
    local_8._0_1_ = 9;
    if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  FUN_00409350("IDEOLOGY",8);
  local_8._0_1_ = 0xb;
  local_18[0] = FUN_00aae9af();
  local_8._0_1_ = 0xc;
  if (local_18[0] == 0) {
    local_18[0] = 0;
  }
  else {
    local_18[0] = FUN_009a9ce0();
  }
  local_8._0_1_ = 0xb;
  FUN_009e6810(local_38,local_18);
  local_8._0_1_ = 9;
  uVar2 = (undefined1)local_8;
  local_8._0_1_ = 9;
  if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if (*(int *)(param_1 + 0x48) == 0) {
    if (*(int *)(*(int *)(param_1 + 0x30) + 0x100) == 6) goto LAB_004e3e1e;
    local_40 = 0xf;
    local_44 = 0;
    local_54 = local_54 & 0xffffff00;
    local_8._0_1_ = uVar2;
    FUN_00409350(&DAT_00ded94d,0);
    local_8._0_1_ = 0x10;
    local_24 = 0xf;
    local_28 = 0;
    local_38[0] = local_38[0] & 0xffffff00;
    FUN_00409350("INDEP",5);
    local_8._0_1_ = 0x11;
    local_18[0] = FUN_00aae9af();
    local_8._0_1_ = 0x12;
    if (local_18[0] == 0) {
      local_18[0] = 0;
    }
    else {
      local_18[0] = FUN_009a9ce0();
    }
    local_8._0_1_ = 0x11;
    FUN_009e6810(local_38,local_18);
    if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_24 = 0xf;
    local_28 = 0;
    local_38[0] = local_38[0] & 0xffffff00;
    uVar1 = local_40;
  }
  else {
    local_24 = 0xf;
    local_28 = 0;
    local_38[0] = local_38[0] & 0xffffff00;
    FUN_00409350("INDEP",5);
    local_8._0_1_ = 0xd;
    FUN_0055dd70();
    local_8._0_1_ = 0xe;
    local_18[0] = FUN_00aae9af();
    local_8._0_1_ = 0xf;
    if (local_18[0] == 0) {
      local_18[0] = 0;
    }
    else {
      local_18[0] = FUN_009a9ce0();
    }
    local_8._0_1_ = 0xe;
    FUN_009e6810(local_38,local_18);
    if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_40 = 0xf;
    local_44 = 0;
    local_54 = local_54 & 0xffffff00;
    uVar1 = local_24;
  }
  if (0xf < uVar1) {
    local_8._0_1_ = 9;
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
LAB_004e3e1e:
  local_8._0_1_ = 9;
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  FUN_00409350("RELIGION",8);
  local_8._0_1_ = 0x13;
  FUN_00567250();
  local_8._0_1_ = 0x14;
  local_18[0] = FUN_00aae9af();
  local_8._0_1_ = 0x15;
  if (local_18[0] == 0) {
    local_18[0] = 0;
  }
  else {
    local_18[0] = FUN_009a9ce0();
  }
  local_8._0_1_ = 0x14;
  FUN_009e6810(local_38,local_18);
  if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 9;
  local_40 = 0xf;
  local_44 = 0;
  local_54 = local_54 & 0xffffff00;
  if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  FUN_00409350("CULTURE",7);
  local_8._0_1_ = 0x16;
  FUN_00974c50();
  local_8._0_1_ = 0x17;
  local_18[0] = FUN_00aae9af();
  local_8._0_1_ = 0x18;
  if (local_18[0] == 0) {
    local_18[0] = 0;
  }
  else {
    local_18[0] = FUN_009a9ce0();
  }
  local_8._0_1_ = 0x17;
  FUN_009e6810(local_38,local_18);
  if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 9;
  local_40 = 0xf;
  local_44 = 0;
  local_54 = local_54 & 0xffffff00;
  if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  FUN_00409350("UNION",5);
  local_8._0_1_ = 0x19;
  iVar4 = *(int *)(*(int *)(param_1 + 0x4c) + 0x50);
  local_1c = *(undefined4 *)(iVar4 + 0x1c);
  local_18[0] = *(int *)(iVar4 + 0x20);
  FUN_0055dd40();
  local_8._0_1_ = 0x1a;
  local_18[0] = FUN_00aae9af();
  local_8._0_1_ = 0x1b;
  if (local_18[0] == 0) {
    local_18[0] = 0;
  }
  else {
    local_18[0] = FUN_009a9ce0();
  }
  local_8._0_1_ = 0x1a;
  FUN_009e6810(local_38,local_18);
  if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 9;
  local_40 = 0xf;
  local_44 = 0;
  uVar1 = local_54 >> 8;
  local_54 = uVar1 << 8;
  if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_40 = 0xf;
  local_44 = 0;
  local_54 = uVar1 << 8;
  FUN_00409350("UNION_ADJ",9);
  local_8._0_1_ = 0x1c;
  iVar4 = *(int *)(*(int *)(param_1 + 0x4c) + 0x50);
  local_1c = *(undefined4 *)(iVar4 + 0x1c);
  local_18[0] = *(int *)(iVar4 + 0x20);
  FUN_0055dd70();
  local_8._0_1_ = 0x1d;
  FUN_009a9980();
  if (local_24 < 0x10) {
    local_8._0_1_ = 9;
    local_24 = 0xf;
    local_28 = 0;
    local_38[0] = local_38[0] & 0xffffff00;
    if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_1c = *(undefined4 *)(param_1 + 0x44);
    if (*(int *)(param_1 + 0x48) == 0) {
      FUN_004e4d40();
    }
    FUN_00409350(&DAT_00ded94d,0);
    local_8._0_1_ = 0x1e;
    iVar4 = FUN_004e18b0();
    if (iVar4 != 0) {
      piVar5 = (int *)FUN_004e18b0();
      cVar3 = (**(code **)(*piVar5 + 0x20))();
      if (cVar3 != '\0') {
        FUN_004e18b0();
        FUN_00408ed0();
      }
    }
    iVar4 = FUN_004e18b0();
    if (iVar4 != 0) {
      local_40 = 0xf;
      local_44 = 0;
      local_54 = local_54 & 0xffffff00;
      FUN_00409350("PRETENDER_GENERAL",0x11);
      local_8._0_1_ = 0x1f;
      FUN_004e18b0();
      FUN_009a9980();
      local_8._0_1_ = 0x1e;
      if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_40 = 0xf;
      local_44 = 0;
      local_54 = local_54 & 0xffffff00;
      FUN_00409350("PRETENDER_MONARCH",0x11);
      local_8._0_1_ = 0x20;
      FUN_009a9980();
      local_8._0_1_ = 0x1e;
      if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
    iVar4 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
    local_8 = CONCAT31(local_8._1_3_,0x21);
    FUN_009adb70();
    FUN_004d8540();
    if (in_stack_00000020 < 0x10) {
      ExceptionList = local_10;
      return param_2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

