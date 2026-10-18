// FUN_00893570 @ 00893570 body=[[00893570, 008935f2] [008935f6, 00893649] [0089364d, 00893667] [0089366b, 008936b6] [008936ba, 0089371f] [00893723, 008937c8] [008937cc, 008937ea] [008937ee, 00893839] [0089383d, 0089387c] [00893880, 00893894]]


undefined1 * FUN_00893570(undefined1 *param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  uint in_stack_00000020;
  uint local_6c;
  uint local_64 [4];
  undefined4 local_54;
  uint local_50;
  uint local_48 [4];
  undefined4 local_38;
  uint local_34;
  undefined1 local_2c [4];
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b68f17;
  local_10 = ExceptionList;
  local_14 = 0;
  local_8 = 0;
  ExceptionList = &local_10;
  if ((*(int **)(in_ECX + 0x20) == (int *)0x0) ||
     (ExceptionList = &local_10, cVar1 = (**(code **)(**(int **)(in_ECX + 0x20) + 0x18))(),
     cVar1 == '\0')) {
    if (*(char *)(in_ECX + 0x24) == '\0') {
      *(undefined4 *)(param_1 + 0x14) = 0xf;
      *(undefined4 *)(param_1 + 0x10) = 0;
      *param_1 = 0;
      FUN_00409350(&DAT_00ded94d,0);
      goto joined_r0x00893872;
    }
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    FUN_00409350("ADD_ACCEPTED_CULTURE",0x14);
    local_8._0_1_ = 7;
    FUN_009a8ee0(local_2c,local_48);
    local_8._0_1_ = 9;
    if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    local_50 = 0xf;
    local_54 = 0;
    local_64[0] = local_64[0] & 0xffffff00;
    FUN_00409350("CULTURE",7);
    local_8._0_1_ = 10;
    local_18 = *(undefined4 *)(param_2 + 8);
    FUN_00560aa0();
    local_8._0_1_ = 0xb;
    param_2 = FUN_00aae9af();
    local_8._0_1_ = 0xc;
    if (param_2 == 0) {
      param_2 = 0;
    }
    else {
      param_2 = FUN_009a9ce0();
    }
    local_8._0_1_ = 0xb;
    FUN_009e6810(local_64,&param_2);
    if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 9;
    if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    iVar2 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c),*(undefined8 *)(iVar2 + 0x74));
    local_8 = CONCAT31(local_8._1_3_,0xd);
    FUN_009adb70();
    if (local_28 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  else {
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    FUN_00409350("ADD_ACCEPTED_CULTURE",0x14);
    local_8._0_1_ = 1;
    FUN_009a8ee0(local_2c,local_48);
    local_8._0_1_ = 3;
    if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    local_50 = 0xf;
    local_54 = 0;
    local_64[0] = local_64[0] & 0xffffff00;
    FUN_00409350("CULTURE",7);
    local_8._0_1_ = 4;
    FUN_00974c50();
    local_8._0_1_ = 5;
    FUN_009a9980();
    if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 3;
    if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    iVar2 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c),*(undefined8 *)(iVar2 + 0x74));
    local_8 = CONCAT31(local_8._1_3_,6);
    FUN_009adb70();
    if (local_28 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  local_20 = 0;
  local_24 = 0;
  local_28 = 0;
joined_r0x00893872:
  if (in_stack_00000020 < 0x10) {
    ExceptionList = local_10;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

