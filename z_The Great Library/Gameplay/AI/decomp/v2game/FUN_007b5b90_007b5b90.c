// FUN_007b5b90 @ 007b5b90 body=[[007b5b90, 007b5bfa] [007b5bfe, 007b5cd7] [007b5cdb, 007b5ce8] [007b5cec, 007b5cfc] [007b5d00, 007b5d26]]


undefined1 * FUN_007b5b90(undefined1 *param_1,undefined4 param_2)

{
  char cVar1;
  int *piVar2;
  undefined4 *puVar3;
  int in_ECX;
  uint local_8c [4];
  undefined4 local_7c;
  uint local_78;
  uint local_70 [4];
  undefined4 local_60;
  uint local_5c;
  uint local_54 [4];
  undefined4 local_44;
  uint local_40;
  undefined4 local_38;
  undefined1 local_34;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b7a176;
  local_10 = ExceptionList;
  local_14 = 0;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("owned_items_list",0x10);
  local_8 = 0;
  piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 4) + 0x7c))(local_30);
  local_8 = 0xffffffff;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  puVar3 = (undefined4 *)(**(code **)(*piVar2 + 0x2c))();
  for (piVar2 = (int *)*puVar3; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[2]) {
    local_14 = *piVar2;
    cVar1 = (**(code **)(*(int *)(local_14 + 0x1c) + 0x58))(param_2);
    if (cVar1 != '\0') {
      FUN_007b89d0(local_14,param_1);
      ExceptionList = local_10;
      return param_1;
    }
  }
  local_78 = 0xf;
  local_7c = 0;
  local_8c[0] = local_8c[0] & 0xffffff00;
  local_5c = 0xf;
  local_60 = 0;
  local_70[0] = local_70[0] & 0xffffff00;
  local_40 = 0xf;
  local_44 = 0;
  local_54[0] = local_54[0] & 0xffffff00;
  local_38 = 0;
  local_34 = 1;
  local_8 = 1;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  FUN_00408ed0(local_8c,0,0xffffffff);
  local_8._0_1_ = 2;
  *(undefined4 *)(param_1 + 0x30) = 0xf;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  param_1[0x1c] = 0;
  FUN_00408ed0(local_70,0,0xffffffff);
  local_8 = CONCAT31(local_8._1_3_,3);
  *(undefined4 *)(param_1 + 0x4c) = 0xf;
  *(undefined4 *)(param_1 + 0x48) = 0;
  param_1[0x38] = 0;
  FUN_00408ed0(local_54,0,0xffffffff);
  *(undefined4 *)(param_1 + 0x54) = local_38;
  param_1[0x58] = local_34;
  if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_54[0]);
  }
  if (local_5c < 0x10) {
    if (local_78 < 0x10) {
      ExceptionList = local_10;
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_8c[0]);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_70[0]);
}

