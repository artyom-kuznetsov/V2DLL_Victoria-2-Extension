// FUN_00a7ba40 @ 00a7ba40 body=[[00a7ba40, 00a7bd7f] [00a7bd83, 00a7beab] [00a7beaf, 00a7bec6]]


void FUN_00a7ba40(undefined4 *param_1,undefined1 **param_2,undefined1 *param_3,undefined1 *param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 uVar5;
  uint uVar6;
  int *piVar7;
  undefined1 *in_stack_00000024;
  undefined4 in_stack_00000028;
  int in_stack_00000030;
  undefined8 in_stack_00000034;
  undefined4 in_stack_0000003c;
  undefined4 in_stack_00000040;
  undefined4 in_stack_00000044;
  undefined1 auStack_f0 [52];
  undefined4 uStack_bc;
  undefined4 *puStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined1 local_ac [12];
  undefined4 uStack_a0;
  undefined4 *local_9c;
  undefined4 local_98;
  int *piStack_94;
  undefined1 *local_90;
  int *piStack_8c;
  int *piStack_88;
  int iStack_84;
  undefined1 *local_80;
  int *local_7c;
  uint *puStack_78;
  int **ppiStack_74;
  uint local_64 [4];
  undefined4 local_54;
  uint local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  int *local_28;
  int *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 *local_18;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b63236;
  pvStack_10 = ExceptionList;
  local_8 = 0;
  ppiStack_74 = (int **)param_2;
  puStack_78 = param_1;
  local_7c = (int *)0xa7ba70;
  ExceptionList = &pvStack_10;
  FUN_007d9800();
  local_8._0_1_ = 1;
  param_1[0x52] = param_3;
  param_1[0x53] = in_stack_00000030;
  param_1[0x54] = in_stack_00000040;
  param_1[0x55] = in_stack_00000044;
  *(undefined8 *)(param_1 + 0x56) = in_stack_00000034;
  ppiStack_74 = (int **)0xffffffff;
  *param_1 = &PTR_FUN_00e43c40;
  param_1[0x58] = in_stack_0000003c;
  puStack_78 = (uint *)0x0;
  local_7c = (int *)&stack0x00000014;
  param_1[0x5e] = 0xf;
  param_1[0x5d] = 0;
  *(undefined1 *)(param_1 + 0x59) = 0;
  local_80 = (undefined1 *)0xa7bad2;
  FUN_00408ed0();
  param_1[99] = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_8._0_1_ = 4;
  local_24 = (int *)0xbf200000;
  local_20 = DAT_00f17898;
  local_1c = in_stack_0000003c;
  ppiStack_74 = (int **)0xa7bb1d;
  FUN_007ea300();
  local_24 = (int *)0x3f200000;
  local_20 = DAT_00f17898;
  local_1c = in_stack_0000003c;
  ppiStack_74 = (int **)0xa7bb49;
  FUN_007ea300();
  local_24 = (int *)0xbf200000;
  local_20 = DAT_00f1f768;
  local_1c = in_stack_0000003c;
  ppiStack_74 = (int **)0xa7bb75;
  FUN_007ea300();
  local_24 = (int *)0x0;
  local_20 = DAT_00f092fc;
  local_1c = 0;
  ppiStack_74 = (int **)0xa7bb9a;
  FUN_007ea300();
  local_24 = (int *)0x0;
  local_20 = DAT_00f092fc;
  local_1c = 0;
  ppiStack_74 = (int **)0xa7bbbc;
  FUN_007ea300();
  local_24 = (int *)0x0;
  local_20 = DAT_00f092fc;
  local_1c = 0;
  ppiStack_74 = (int **)0xa7bbde;
  FUN_007ea300();
  local_28 = (int *)0x0;
  local_24 = (int *)0x0;
  local_20 = 0;
  local_8 = CONCAT31(local_8._1_3_,5);
  ppiStack_74 = (int **)0xa7bbf6;
  FUN_007e65b0();
  piVar4 = local_28;
  param_2 = (undefined1 **)((int)local_24 - (int)local_28 >> 4);
  if (0 < (int)param_2) {
    do {
      ppiStack_74 = (int **)0xa7bc1a;
      FUN_007e6620();
      param_2 = (undefined1 **)((int)param_2 + -1);
    } while (param_2 != (undefined1 **)0x0);
  }
  uVar5 = DAT_00f092fc;
  *(undefined4 *)*piVar4 = 0;
  *(undefined4 *)(*piVar4 + 4) = 0;
  uVar3 = DAT_00f1783c;
  *(undefined4 *)piVar4[4] = uVar5;
  *(undefined4 *)(piVar4[4] + 4) = 0;
  *(undefined4 *)piVar4[8] = 0;
  *(undefined4 *)(piVar4[8] + 4) = uVar3;
  *(undefined4 *)(*piVar4 + 8) = 0;
  *(undefined4 *)(*piVar4 + 0xc) = 0;
  *(undefined4 *)(piVar4[4] + 8) = uVar5;
  *(undefined4 *)(piVar4[4] + 0xc) = 0;
  ppiStack_74 = &local_28;
  param_2 = &local_90;
  *(undefined4 *)(piVar4[8] + 8) = 0;
  piStack_94 = (int *)0xffffffff;
  *(undefined4 *)(piVar4[8] + 0xc) = uVar3;
  local_98 = 0;
  local_7c = (int *)0xf;
  local_80 = (undefined1 *)0x0;
  local_90 = (undefined1 *)((uint)local_90 & 0xffffff00);
  uStack_a0 = 0xa7bcbb;
  local_9c = param_1 + 0x59;
  FUN_00408ed0();
  param_3 = local_ac;
  local_8._0_1_ = 6;
  uStack_b0 = 0xffffffff;
  uStack_b4 = 0;
  local_98 = 0xf;
  local_9c = (undefined4 *)0x0;
  local_ac[0] = 0;
  uStack_bc = 0xa7bce2;
  puStack_b8 = param_1 + 0x59;
  FUN_00408ed0();
  uStack_b0 = 0;
  param_2 = (undefined1 **)auStack_f0;
  FUN_005da1e0();
  local_8._0_1_ = 5;
  uVar5 = FUN_0099b3d0(param_1[0x52],&local_38);
  ppiStack_74 = (int **)0x0;
  puVar1 = param_1 + 0x60;
  local_7c = (int *)0x0;
  local_80 = (undefined1 *)0x0;
  iStack_84 = 0;
  piStack_88 = (int *)0x0;
  piStack_8c = (int *)0xe43c18;
  local_90 = param_4;
  param_1[0x50] = uVar5;
  piStack_94 = (int *)0xa7bd31;
  puStack_78 = puVar1;
  D3DXCreateEffectFromFileA();
  local_50 = 0xf;
  local_54 = 0;
  local_64[0] = local_64[0] & 0xffffff00;
  ppiStack_74 = (int **)0x10;
  puStack_78 = (uint *)0xe43c2c;
  local_7c = (int *)0xa7bd52;
  FUN_00409350();
  ppiStack_74 = (int **)0x1;
  puStack_78 = local_64;
  local_8._0_1_ = 7;
  local_7c = (int *)0xa7bd67;
  uVar5 = FUN_009bcbf0();
  local_8 = CONCAT31(local_8._1_3_,5);
  param_1[0x62] = uVar5;
  if (0xf < local_50) {
    ppiStack_74 = (int **)local_64[0];
                    /* WARNING: Subroutine does not return */
    puStack_78 = (uint *)&UNK_00a7bd80;
    FUN_00aae91b();
  }
  local_7c = (int *)*puVar1;
  ppiStack_74 = (int **)&DAT_00e19384;
  puStack_78 = (uint *)0x0;
  local_80 = (undefined1 *)0xa7bd94;
  iStack_84 = (**(code **)(*local_7c + 0x24))();
  if (iStack_84 != 0) {
    uVar6 = param_1[0x62];
    if ((uVar6 == 0xffffffff) || (9999 < uVar6)) {
      param_2 = (undefined1 **)0x0;
    }
    else {
      param_2 = *(undefined1 ***)(uVar6 * 0x2c + 4 + in_stack_00000030);
    }
    local_80 = (undefined1 *)param_2;
    piStack_88 = (int *)*puVar1;
    piStack_8c = (int *)0xa7bdd0;
    (**(code **)(*piStack_88 + 0xd0))();
  }
  piStack_88 = (int *)*puVar1;
  local_80 = &DAT_00e0bce4;
  iStack_84 = 0;
  piStack_8c = (int *)0xa7bde1;
  local_18 = (undefined1 *)(**(code **)(*piStack_88 + 0x24))();
  piVar2 = piVar4;
  if (local_18 == (undefined1 *)0x0) goto joined_r0x00a7be9d;
  piStack_8c = (int *)&stack0x00000014;
  local_90 = (undefined1 *)0xa7bdfd;
  param_3 = (undefined1 *)FUN_00462500();
  param_4 = *(undefined1 **)(in_stack_00000030 + 0x6b6c8);
  if (param_3 == param_4) {
LAB_00a7be65:
    param_2 = (undefined1 **)param_4;
    piVar7 = (int *)&param_2;
  }
  else {
    param_2 = *(undefined1 ***)(param_3 + 0x1c);
    piStack_8c = (int *)in_stack_00000024;
    if (param_2 <= in_stack_00000024) {
      piStack_8c = (int *)param_2;
    }
    local_90 = (undefined1 *)0xa7be3f;
    uVar6 = FUN_00414bd0();
    if (uVar6 == 0) {
      if (in_stack_00000024 < param_2) goto LAB_00a7be65;
      uVar6 = (uint)((undefined1 **)in_stack_00000024 != param_2);
    }
    if ((int)uVar6 < 0) goto LAB_00a7be65;
    piVar7 = (int *)&param_3;
  }
  if (*piVar7 == *(int *)(in_stack_00000030 + 0x6b6c8)) {
    piStack_8c = (int *)0x0;
  }
  else {
    piStack_8c = *(int **)(*(int *)(*piVar7 + 0x28) * 0x2c + 4 + in_stack_00000030);
  }
  piStack_94 = (int *)*puVar1;
  local_90 = local_18;
  local_98 = 0xa7be98;
  (**(code **)(*piStack_94 + 0xd0))();
joined_r0x00a7be9d:
  while( true ) {
    if (piVar2 == local_24) {
      piStack_8c = piVar4;
                    /* WARNING: Subroutine does not return */
      local_90 = &UNK_00a7bec7;
      FUN_00aae91b();
    }
    piStack_8c = (int *)*piVar2;
    if (piStack_8c != (int *)0x0) break;
    *piVar2 = 0;
    piVar2[1] = 0;
    piVar2[2] = 0;
    piVar2 = piVar2 + 4;
  }
                    /* WARNING: Subroutine does not return */
  local_90 = &UNK_00a7beac;
  FUN_00aae91b();
}

