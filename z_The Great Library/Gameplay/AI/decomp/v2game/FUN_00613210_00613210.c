// FUN_00613210 @ 00613210 body=[[00613210, 006132b2] [006132b6, 00613311] [00613315, 00613375]]


undefined4 * FUN_00613210(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int *in_ECX;
  uint local_48 [4];
  undefined4 local_38;
  uint local_34;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4595e;
  local_10 = ExceptionList;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("console_entry_wnd",0x11);
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  DAT_013f08e0 = DAT_013f08e0 + 1;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[7] = &PTR_FUN_00e39158;
  local_8._0_1_ = 4;
  local_8._1_3_ = 0;
  *param_1 = &PTR_FUN_00e392f0;
  param_1[7] = &PTR_FUN_00e39320;
  *(undefined1 *)(param_1 + 9) = 0;
  uVar1 = (**(code **)(*in_ECX + 0x2c))(local_2c,param_2);
  param_1[8] = uVar1;
  local_8._0_1_ = 6;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  *param_1 = CConsoleMemberOption::vftable;
  param_1[7] = CConsoleMemberOption::vftable;
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  FUN_00409350("console_text",0xc);
  local_8._0_1_ = 7;
  iVar2 = (**(code **)(*(int *)param_1[8] + 0x38))(local_48);
  local_8 = CONCAT31(local_8._1_3_,6);
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48[0]);
  }
  local_38 = 0;
  local_34 = 0xf;
  local_48[0] = local_48[0] & 0xffffff00;
  FUN_009e7500();
  piVar3 = (int *)FUN_00973bd0(iVar2 + 0x7c);
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)FUN_00973bd0(iVar2 + 0x7c);
  }
  (**(code **)(*piVar3 + 0x3c))(iVar2 + 0x100);
  ExceptionList = local_10;
  return param_1;
}

