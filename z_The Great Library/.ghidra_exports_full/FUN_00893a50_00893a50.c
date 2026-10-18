// FUN_00893a50 @ 00893a50 body=[[00893a50, 00893ad4] [00893ad8, 00893b6a] [00893b6e, 00893b8c] [00893b90, 00893bdb] [00893bdf, 00893c1e] [00893c22, 00893c36]]


undefined1 * FUN_00893a50(undefined1 *param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  uint in_stack_00000020;
  uint local_68;
  uint local_60 [4];
  undefined4 local_50;
  uint local_4c;
  uint local_44 [4];
  undefined4 local_34;
  uint local_30;
  undefined1 local_28 [4];
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b90b3d;
  local_10 = ExceptionList;
  local_14 = 0;
  local_8 = 0;
  ExceptionList = &local_10;
  piVar2 = (int *)FUN_00893c40();
  cVar1 = (**(code **)(*piVar2 + 0x18))();
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *param_1 = 0;
    FUN_00409350(&DAT_00ded94d,0);
  }
  else {
    local_30 = 0xf;
    local_34 = 0;
    local_44[0] = local_44[0] & 0xffffff00;
    FUN_00409350("SET_PRIMARY_CULTURE",0x13);
    local_8._0_1_ = 1;
    FUN_009a8ee0(local_28,local_44);
    local_8._0_1_ = 3;
    if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_30 = 0xf;
    local_34 = 0;
    local_44[0] = local_44[0] & 0xffffff00;
    local_4c = 0xf;
    local_50 = 0;
    local_60[0] = local_60[0] & 0xffffff00;
    FUN_00409350("CULTURE",7);
    local_8._0_1_ = 4;
    FUN_00893c40();
    FUN_00974c50();
    local_8._0_1_ = 5;
    param_2 = FUN_00aae9af();
    local_8._0_1_ = 6;
    if (param_2 == 0) {
      param_2 = 0;
    }
    else {
      param_2 = FUN_009a9ce0();
    }
    local_8._0_1_ = 5;
    FUN_009e6810(local_60,&param_2);
    if (0xf < local_68) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 3;
    if (0xf < local_4c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    iVar3 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar3 + 0x6c),*(undefined8 *)(iVar3 + 0x74));
    local_8 = CONCAT31(local_8._1_3_,7);
    FUN_009adb70();
    if (local_24 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_24 = 0;
    local_20 = 0;
    local_1c = 0;
  }
  if (0xf < in_stack_00000020) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_1;
}

