// FUN_005f7590 @ 005f7590 body=[[005f7590, 005f7729] [005f772d, 005f777a] [005f7781, 005f77f7] [005f77fb, 005f7837] [005f783b, 005f7877] [005f787b, 005f78b7] [005f78bb, 005f78f7] [005f78fb, 005f7937] [005f793b, 005f7977] [005f797b, 005f79b7] [005f79bb, 005f79f2] [005f79f6, 005f7a0a]]


undefined1 * FUN_005f7590(undefined1 *param_1,undefined4 param_2)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 in_ECX;
  undefined4 in_EDX;
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b710f3;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x14) = param_2;
  *(undefined4 *)(param_1 + 0x18) = in_ECX;
  *(undefined4 *)(param_1 + 0x1c) = in_EDX;
  _eh_vector_constructor_iterator_
            (param_1 + 0x20,0x88,9,(_func_void_void_ptr *)&LAB_005f7540,FUN_005f7a10);
  *(undefined4 *)(param_1 + 0x4e8) = 0;
  *(undefined ***)(param_1 + 0x4ec) = CButtonObserverGlue<CAlertManager>::vftable;
  *(undefined1 **)(param_1 + 0x4f0) = param_1;
  *(undefined4 *)(param_1 + 0x4f4) = 0;
  *(undefined4 *)(param_1 + 0x4f8) = 0;
  *(undefined4 *)(param_1 + 0x4fc) = 0;
  *(undefined4 *)(param_1 + 0x500) = 0;
  *(undefined4 *)(param_1 + 0x504) = 0;
  *(undefined4 *)(param_1 + 0x508) = 0;
  *(code **)(param_1 + 0x50c) = FUN_005f7fa0;
  *(undefined4 *)(param_1 + 0x510) = 0;
  *(undefined4 *)(param_1 + 0x514) = 0;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  _eh_vector_constructor_iterator_(param_1 + 0x518,0x10,9,FUN_00413490,FUN_00aa8540);
  *(undefined4 *)(param_1 + 0x5a8) = 0;
  *(undefined4 *)(param_1 + 0x5ac) = 0;
  *(undefined4 *)(param_1 + 0x5b0) = 0;
  param_1[0x5b4] = 0;
  *(undefined4 *)(param_1 + 0x5cc) = 0xf;
  *(undefined4 *)(param_1 + 0x5c8) = 0;
  param_1[0x5b8] = 0;
  piVar1 = DAT_012588e8;
  local_8 = CONCAT31(local_8._1_3_,4);
  *(undefined4 *)(param_1 + 0x5d4) = 0;
  uVar2 = (**(code **)(*piVar1 + 0x18))();
  uVar3 = FUN_00aad56b(-(uint)((int)((ulonglong)uVar2 * 4 >> 0x20) != 0) |
                       (uint)((ulonglong)uVar2 * 4));
  *(undefined4 *)(param_1 + 0x5d8) = uVar3;
  if (DAT_00f20c18 == (undefined4 *)0x0) {
    DAT_00f20c18 = (undefined4 *)FUN_00aae9af(4);
    if (DAT_00f20c18 == (undefined4 *)0x0) {
      DAT_00f20c18 = (undefined4 *)0x0;
    }
    else {
      *DAT_00f20c18 = &PTR_FUN_00e38b28;
    }
  }
  *(undefined4 *)(param_1 + 0x5d4) = DAT_01258a8c;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  FUN_00409350("alerticon_startposition",0x17);
  local_8._0_1_ = 5;
  iVar4 = (**(code **)(**(int **)(param_1 + 0x14) + 0x48))(local_34);
  local_8._0_1_ = 4;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  FUN_00409350("alerticon_offset",0x10);
  local_8._0_1_ = 6;
  iVar5 = (**(code **)(**(int **)(param_1 + 0x14) + 0x48))(local_50);
  local_8._0_1_ = 4;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50[0]);
  }
  uVar3 = *(undefined4 *)(iVar4 + 100);
  *(undefined4 *)(param_1 + 8) = uVar3;
  *(undefined4 *)(param_1 + 4) = uVar3;
  local_18 = *(undefined4 *)(iVar4 + 100);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(iVar4 + 0x68);
  local_14 = *(undefined4 *)(iVar5 + 0x68);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(iVar5 + 100);
  *param_1 = 0;
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  FUN_00409350("alert_country_at_war",0x14);
  local_8._0_1_ = 7;
  FUN_005f7b70(param_1,0);
  local_8._0_1_ = 4;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50[0]);
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  FUN_00409350("alert_deployable_units",0x16);
  local_8._0_1_ = 8;
  FUN_005f7b70(param_1,1);
  local_8._0_1_ = 4;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50[0]);
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  FUN_00409350("alert_troops_in_foreign_territory",0x21);
  local_8._0_1_ = 9;
  FUN_005f7b70(param_1,2);
  local_8._0_1_ = 4;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50[0]);
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  FUN_00409350("alert_revoltrisk_in_provinces",0x1d);
  local_8._0_1_ = 10;
  FUN_005f7b70(param_1,3);
  local_8._0_1_ = 4;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50[0]);
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  FUN_00409350("alert_resource_panic",0x14);
  local_8._0_1_ = 0xb;
  FUN_005f7b70(param_1,4);
  local_8._0_1_ = 4;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50[0]);
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  FUN_00409350("alert_free_tech_slots",0x15);
  local_8._0_1_ = 0xc;
  FUN_005f7b70(param_1,5);
  local_8._0_1_ = 4;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50[0]);
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  FUN_00409350("alert_wasted_ic",0xf);
  local_8._0_1_ = 0xd;
  FUN_005f7b70(param_1,6);
  local_8._0_1_ = 4;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50[0]);
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  FUN_00409350("alert_tech_far_ahead",0x14);
  local_8._0_1_ = 0xe;
  FUN_005f7b70(param_1,7);
  local_8._0_1_ = 4;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50[0]);
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  FUN_00409350("alert_bad_supply",0x10);
  local_8 = CONCAT31(local_8._1_3_,0xf);
  FUN_005f7b70(param_1,8);
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50[0]);
  }
  ExceptionList = local_10;
  return param_1;
}

