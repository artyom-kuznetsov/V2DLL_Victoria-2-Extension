// FUN_0097efd0 @ 0097efd0 body=[[0097efd0, 0097f08a] [0097f08e, 0097f0f6] [0097f0fa, 0097f1d7] [0097f1db, 0097f214] [0097f218, 0097f239] [0097f23d, 0097f261] [0097f265, 0097f282] [0097f286, 0097f2e5]]


/* WARNING: Removing unreachable block (ram,0x0097f259) */
/* WARNING: Removing unreachable block (ram,0x0097f0eb) */

undefined4 *
FUN_0097efd0(undefined4 param_1,undefined4 param_2,int *param_3,int param_4,int param_5,int param_6,
            undefined4 param_7)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int *in_ECX;
  uint *puVar6;
  undefined8 uVar5;
  undefined4 local_d4;
  uint local_c0;
  undefined4 local_b8;
  uint local_a4;
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
  int *local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b63ddb;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = (undefined4 *)FUN_00aae9af(100);
  if (local_14 == (undefined4 *)0x0) {
    local_14 = (undefined4 *)0x0;
  }
  else {
    local_14[6] = 0xf;
    local_14[5] = 0;
    *(undefined1 *)(local_14 + 1) = 0;
    local_14[9] = 0;
    local_14[10] = 0;
    local_14[0xb] = 0;
    local_14[0xd] = 0;
    local_14[0xe] = 0;
    local_14[0xf] = 0;
    local_14[0x11] = 0;
    local_14[0x12] = 0;
    local_14[0x13] = 0;
    local_14[0x15] = 0;
    local_14[0x16] = 0;
    local_14[0x17] = 0;
  }
  puVar1 = local_14;
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  FUN_00409350("distribution_window",0x13);
  local_8 = 0;
  piVar2 = (int *)(**(code **)(*in_ECX + 0x2c))(local_48,param_7);
  local_8 = 0xffffffff;
  local_18 = piVar2;
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  *puVar1 = piVar2;
  FUN_00408ed0();
  local_8 = 1;
  FUN_00408ed0();
  local_8 = 0xffffffff;
  puVar1[8] = param_2;
  local_50 = 0xf;
  local_54 = 0;
  local_64[0] = local_64[0] & 0xffffff00;
  FUN_00409350("item_name",9);
  local_8 = 2;
  FUN_00409350("_DISTTITLE",10);
  local_8._0_1_ = 3;
  uVar3 = FUN_00988f20();
  local_8._0_1_ = 4;
  FUN_009a8ee0(local_2c,uVar3);
  local_8._0_1_ = 5;
  iVar4 = FUN_00475500();
  uVar3 = FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
  local_8._0_1_ = 6;
  puVar6 = local_64;
  (**(code **)(*piVar2 + 0x3c))();
  FUN_00408ed0(uVar3,0,0xffffffff);
  FUN_00a5ecc0();
  if (0xf < local_a4) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_b8);
  }
  local_8 = CONCAT31(local_8._1_3_,7);
  FUN_009adb70();
  if (local_28 == 0) {
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    if (0xf < local_c0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_d4);
    }
    local_8 = 0xffffffff;
    if (local_50 < 0x10) {
      local_50 = 0xf;
      uVar3 = *(undefined4 *)(param_4 + 100);
      uVar5 = CONCAT44(puVar6,*(int *)(param_4 + 0x68) + *(int *)(param_5 + 0x68) * param_6);
      local_54 = 0;
      local_64[0] = local_64[0] & 0xffffff00;
      (**(code **)(*local_18 + 0xa8))();
      puVar1 = local_14;
      (**(code **)(*param_3 + 0xbc))(local_14 + 1,*local_14,uVar3,uVar5);
      ExceptionList = local_10;
      return puVar1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_64[0]);
  }
  FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_28);
}

