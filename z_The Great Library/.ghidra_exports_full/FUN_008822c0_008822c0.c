// FUN_008822c0 @ 008822c0 body=[[008822c0, 0088234a] [0088234e, 008823af] [008823b3, 008824a9] [008824ad, 008824c8] [008824cc, 008824eb] [008824ef, 008825ce] [008825d2, 008825ed] [008825f1, 0088260f] [00882613, 0088265e] [00882662, 0088267d]]


undefined1 * FUN_008822c0(undefined1 *param_1,undefined4 *param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int in_ECX;
  uint in_stack_00000020;
  uint local_94 [4];
  undefined4 local_84;
  uint local_80;
  uint local_78 [4];
  undefined4 local_68;
  uint local_64;
  int local_5c;
  uint local_58 [4];
  undefined4 local_48;
  uint local_44;
  undefined1 local_3c [4];
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 *local_28;
  undefined1 local_24 [4];
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puVar2 = param_2;
  puStack_c = &LAB_00b698a5;
  local_10 = ExceptionList;
  local_28 = (undefined4 *)0x0;
  local_8 = 0;
  if (*(int *)(in_ECX + 0x20) == 0) {
LAB_00882320:
    ExceptionList = &local_10;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *param_1 = 0;
    FUN_00409350(&DAT_00ded94d,0);
  }
  else {
    piVar1 = *(int **)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + param_2[4] * 4) + 200);
    do {
      if (piVar1 == (int *)0x0) goto LAB_00882320;
      iVar5 = *piVar1;
      piVar1 = (int *)piVar1[2];
    } while (*(int *)(iVar5 + 8) != *(int *)(in_ECX + 0x20));
    local_80 = 0xf;
    local_84 = 0;
    local_94[0] = local_94[0] & 0xffffff00;
    ExceptionList = &local_10;
    local_5c = in_ECX;
    FUN_00409350("MODIFIER_REMOVED",0x10);
    local_8._0_1_ = 1;
    FUN_009a8ee0(local_3c,local_94);
    local_8._0_1_ = 3;
    if (0xf < local_80) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_80 = 0xf;
    local_84 = 0;
    local_94[0] = local_94[0] & 0xffffff00;
    local_44 = 0xf;
    local_48 = 0;
    local_58[0] = local_58[0] & 0xffffff00;
    FUN_00409350("WHERE",5);
    local_8._0_1_ = 4;
    (**(code **)(**(int **)(*(int *)(DAT_012588e8 + 0xacc) + puVar2[4] * 4) + 0x1c))();
    local_8._0_1_ = 5;
    puVar2 = (undefined4 *)FUN_009a8ee0();
    local_8._0_1_ = 6;
    puVar3 = (undefined4 *)FUN_00aae9af(0x38);
    local_8._0_1_ = 7;
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3[1] = local_3c;
      *puVar3 = &PTR_FUN_00e38ecc;
      puVar3[7] = 0xf;
      puVar3[6] = 0;
      *(undefined1 *)(puVar3 + 2) = 0;
      param_2 = puVar3;
      FUN_00408ed0(local_58,0,0xffffffff);
      *puVar3 = &PTR_FUN_00e38f08;
      local_28 = puVar3 + 9;
      *local_28 = *puVar2;
      puVar3[10] = 0;
      puVar3[0xb] = 0;
      puVar3[0xc] = 0;
      local_8._0_1_ = 9;
      FUN_009a97b0();
    }
    local_8._0_1_ = 6;
    param_2 = puVar3;
    FUN_009e6810();
    local_8._0_1_ = 10;
    FUN_009adb70();
    if (local_20 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_20);
    }
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    if (0xf < local_64) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_78[0]);
    }
    local_8._0_1_ = 3;
    local_64 = 0xf;
    local_68 = 0;
    local_78[0] = local_78[0] & 0xffffff00;
    if (0xf < local_44) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_58[0]);
    }
    local_44 = 0xf;
    local_48 = 0;
    local_58[0] = local_58[0] & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 0xb;
    uVar4 = (**(code **)(**(int **)(local_5c + 0x20) + 0x18))(local_78);
    local_8._0_1_ = 0xc;
    puVar2 = (undefined4 *)FUN_009a8ee0(local_24,uVar4);
    local_8._0_1_ = 0xd;
    puVar3 = (undefined4 *)FUN_00aae9af();
    local_8._0_1_ = 0xe;
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3[1] = local_3c;
      *puVar3 = &PTR_FUN_00e38ecc;
      puVar3[7] = 0xf;
      puVar3[6] = 0;
      *(undefined1 *)(puVar3 + 2) = 0;
      param_2 = puVar3;
      FUN_00408ed0();
      *puVar3 = &PTR_FUN_00e38f08;
      local_28 = puVar3 + 9;
      *local_28 = *puVar2;
      puVar3[10] = 0;
      puVar3[0xb] = 0;
      puVar3[0xc] = 0;
      local_8._0_1_ = 0x10;
      FUN_009a97b0();
    }
    local_8._0_1_ = 0xd;
    param_2 = puVar3;
    FUN_009e6810(local_58,&param_2);
    local_8._0_1_ = 0x11;
    FUN_009adb70();
    if (local_20 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    if (0xf < local_64) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 3;
    local_64 = 0xf;
    local_68 = 0;
    local_78[0] = local_78[0] & 0xffffff00;
    if (0xf < local_44) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    iVar5 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c),*(undefined8 *)(iVar5 + 0x74));
    local_8 = CONCAT31(local_8._1_3_,0x12);
    FUN_009adb70();
    if (local_38 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_38 = 0;
    local_34 = 0;
    local_30 = 0;
  }
  if (0xf < in_stack_00000020) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_1;
}

