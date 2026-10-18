// FUN_004749b0 @ 004749b0 body=[[004749b0, 00474a2e] [00474a32, 00474a3e] [00474a40, 00474a97] [00474a9b, 00474ae6] [00474aea, 00474afa] [00474afe, 00474b1b]]


undefined1 * FUN_004749b0(undefined1 *param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *in_ECX;
  undefined4 local_54 [5];
  uint local_40;
  uint local_38 [4];
  undefined4 local_28;
  uint local_24;
  undefined4 local_1c;
  undefined4 *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00b4d2a9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  local_8 = 0;
  local_1c = 1;
  local_14 = 0;
  if ((in_ECX[4] == 0) && ((char)in_ECX[param_2 * 2 + 6] != '\0')) {
    uVar3 = (**(code **)(*in_ECX + 0x20))(local_54,param_2);
    local_8 = 1;
    FUN_00408ed0(uVar3,0,0xffffffff);
    local_8 = local_8 & 0xffffff00;
    if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_54[0]);
    }
  }
  puVar2 = (undefined4 *)in_ECX[2];
  while( true ) {
    if (puVar2 == (undefined4 *)0x0) {
      ExceptionList = local_10;
      return param_1;
    }
    local_18 = (undefined4 *)puVar2[2];
    piVar1 = (int *)*puVar2;
    if (local_14 < *(int *)(param_1 + 0x10)) {
      local_24 = 0xf;
      local_28 = 0;
      local_38[0] = local_38[0] & 0xffffff00;
      FUN_00409350(&DAT_00dee2cc,1);
      local_8 = 2;
      FUN_00448aa0(local_38,0,0xffffffff);
      local_8 = local_8 & 0xffffff00;
      if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_38[0]);
      }
    }
    local_14 = *(int *)(param_1 + 0x10);
    (**(code **)(*piVar1 + 0x24))(local_54,param_2);
    local_8 = 3;
    uVar3 = FUN_00989330(local_38);
    local_8._0_1_ = 4;
    FUN_00448aa0(uVar3,0,0xffffffff);
    if (0xf < local_24) break;
    local_8 = (uint)local_8._1_3_ << 8;
    puVar2 = local_18;
    if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_54[0]);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_38[0]);
}

