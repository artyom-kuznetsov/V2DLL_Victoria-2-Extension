// FUN_008c5ec0 @ 008c5ec0 body=[[008c5ec0, 008c5f17] [008c5f20, 008c5f62] [008c5f66, 008c6009] [008c600d, 008c602a] [008c602e, 008c604f] [008c6053, 008c609e] [008c60a2, 008c60af] [008c60b3, 008c60c7]]


undefined1 * FUN_008c5ec0(undefined1 *param_1,int param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  undefined4 uVar2;
  int *in_ECX;
  undefined *puVar3;
  uint local_8c [4];
  undefined4 local_7c;
  uint local_78;
  uint local_70;
  undefined4 local_60;
  uint local_5c;
  uint local_54 [4];
  undefined4 local_44;
  uint local_40;
  uint local_38 [4];
  undefined4 local_28;
  uint local_24;
  int *local_1c;
  undefined4 local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b4aa0f;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  local_18 = 1;
  local_40 = 0xf;
  local_44 = 0;
  local_54[0] = local_54[0] & 0xffffff00;
  uStack_7 = 0;
  local_1c = in_ECX;
  if (0 < param_4) {
    local_14 = param_4;
    do {
      local_8 = 1;
      local_24 = 0xf;
      local_28 = 0;
      local_38[0] = local_38[0] & 0xffffff00;
      FUN_00409350(&DAT_00e29ba0,3);
      local_8 = 2;
      FUN_00448aa0(local_38,0,0xffffffff);
      local_8 = 1;
      if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_38[0]);
      }
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  local_8 = 1;
  FUN_00448aa0(local_54,0,0xffffffff);
  if (param_4 == 0) {
    cVar1 = (**(code **)(*in_ECX + 0x18))(param_2);
    if (cVar1 == (char)param_3) {
      puVar3 = &DAT_00e2cfe8;
    }
    else {
      puVar3 = &DAT_00e2cff0;
    }
    FUN_00448740(puVar3,7);
  }
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  FUN_00409350(&DAT_00e0ecb4,2);
  local_8 = 3;
  (**(code **)(*(int *)in_ECX[7] + 0x18))(local_8c);
  local_8 = 4;
  uVar2 = FUN_00988f20(local_38);
  local_8 = 5;
  FUN_00448aa0(uVar2,0,0xffffffff);
  if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_70);
  }
  local_5c = 0xf;
  local_60 = 0;
  local_70 = local_70 & 0xffffff00;
  if (0xf < local_78) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_8c[0]);
  }
  local_8 = 1;
  local_78 = 0xf;
  local_7c = 0;
  local_8c[0] = local_8c[0] & 0xffffff00;
  if (local_24 < 0x10) {
    if (*(int *)(local_1c[7] + 0x10) != 0) {
      *(undefined4 *)(param_2 + 0x10) = 0;
    }
    uVar2 = FUN_008b7f70(local_8c,param_2,param_3,param_4 + 1,1);
    _local_8 = CONCAT31(uStack_7,6);
    FUN_00448aa0(uVar2,0,0xffffffff);
    if (local_78 < 0x10) {
      if (local_40 < 0x10) {
        ExceptionList = local_10;
        return param_1;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_54[0]);
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_8c[0]);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_38[0]);
}

