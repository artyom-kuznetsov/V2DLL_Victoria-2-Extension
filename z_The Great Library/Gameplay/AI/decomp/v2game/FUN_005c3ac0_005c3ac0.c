// FUN_005c3ac0 @ 005c3ac0 body=[[005c3ac0, 005c3b86] [005c3b8a, 005c3bee] [005c3bf2, 005c3c48] [005c3c4c, 005c3c5c] [005c3c60, 005c3c7d]]


undefined1 * FUN_005c3ac0(undefined1 *param_1,int param_2,undefined4 ***param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int *in_ECX;
  undefined4 ***local_68;
  uint **local_58 [5];
  uint local_44;
  uint **local_3c [4];
  undefined4 local_2c;
  uint local_28;
  undefined1 *local_20;
  undefined4 local_1c;
  undefined4 *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00b4cb09;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  local_8 = 0;
  local_1c = 1;
  local_14 = 0;
  if (in_ECX[4] == 0) {
    local_68 = (undefined4 ***)0x3f000000;
    FUN_00401000();
    local_68 = (undefined4 ***)0x5c3b3c;
    iVar3 = FUN_00b31c00();
    if (*(int *)(in_ECX[6] + param_2 * 8) != iVar3) {
      local_18 = &local_68;
      local_68 = param_3;
      uVar4 = (**(code **)(*in_ECX + 0x20))(local_58,param_2);
      local_68 = (undefined4 ***)0xffffffff;
      local_8 = 1;
      FUN_00408ed0(uVar4,0);
      local_8 = local_8 & 0xffffff00;
      if (0xf < local_44) {
        local_68 = (undefined4 ***)local_58[0];
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
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
      local_68 = (undefined4 ***)0x1;
      local_28 = 0xf;
      local_2c = 0;
      local_3c[0] = (uint **)((uint)local_3c[0] & 0xffffff00);
      FUN_00409350(&DAT_00dee2cc);
      local_68 = (undefined4 ***)0xffffffff;
      local_8 = 2;
      FUN_00448aa0(local_3c,0);
      local_8 = local_8 & 0xffffff00;
      if (0xf < local_28) {
        local_68 = (undefined4 ***)local_3c[0];
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
    local_14 = *(int *)(param_1 + 0x10);
    local_20 = (undefined1 *)&local_68;
    local_68 = param_3;
    (**(code **)(*piVar1 + 0x24))(local_58,param_2);
    local_68 = local_3c;
    local_8 = 3;
    uVar4 = FUN_00989330();
    local_68 = (undefined4 ***)0xffffffff;
    local_8._0_1_ = 4;
    FUN_00448aa0(uVar4,0);
    if (0xf < local_28) break;
    local_8 = (uint)local_8._1_3_ << 8;
    puVar2 = local_18;
    if (0xf < local_44) {
      local_68 = (undefined4 ***)local_58[0];
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  local_68 = (undefined4 ***)local_3c[0];
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

