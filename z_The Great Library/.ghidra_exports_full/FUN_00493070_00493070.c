// FUN_00493070 @ 00493070 body=[[00493070, 00493153] [00493157, 00493172] [00493176, 00493194] [00493198, 004931ca] [004931ce, 004931e2]]


undefined1 * FUN_00493070(undefined1 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int in_ECX;
  undefined4 local_68 [5];
  uint local_54;
  uint local_4c [4];
  undefined4 local_3c;
  uint local_38;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00b82889;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x30) = 0xf;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0xf;
  *(undefined4 *)(param_1 + 0x48) = 0;
  param_1[0x38] = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  param_1[0x58] = 1;
  local_8 = 0;
  local_14 = 1;
  if ((param_2 != 0) && (*(int *)(param_2 + 300) == *(int *)(DAT_012588e8 + 0xb60))) {
    uVar1 = FUN_0043acd0(in_ECX + 0xc,local_68);
    local_8 = 1;
    uVar2 = (**(code **)(**(int **)(in_ECX + 0x28) + 0x18))(local_4c);
    local_8._0_1_ = 2;
    uVar1 = FUN_0043ec10(local_30,&DAT_00dfbf14,uVar2,&DAT_00dfa9f8,uVar1);
    local_8._0_1_ = 3;
    FUN_00408ed0(uVar1,0,0xffffffff);
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_30[0]);
    }
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_4c[0]);
    }
    local_8 = (uint)local_8._1_3_ << 8;
    local_38 = 0xf;
    local_3c = 0;
    local_4c[0] = local_4c[0] & 0xffffff00;
    if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_68[0]);
    }
    if (*(int *)(in_ECX + 0x24) != 0) {
      uVar1 = FUN_008606c0(*(int *)(in_ECX + 0x24),local_68);
      local_8 = 4;
      FUN_00408ed0(uVar1,0,0xffffffff);
      if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_68[0]);
      }
    }
  }
  ExceptionList = local_10;
  return param_1;
}

