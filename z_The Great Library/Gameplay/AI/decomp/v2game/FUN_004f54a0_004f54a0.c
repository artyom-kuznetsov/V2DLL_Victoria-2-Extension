// FUN_004f54a0 @ 004f54a0 body=[[004f54a0, 004f55e7] [004f55eb, 004f5608] [004f560c, 004f5626] [004f562a, 004f564a] [004f564e, 004f5674] [004f5678, 004f56a7]]


undefined1 * FUN_004f54a0(undefined1 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  uint local_a8 [4];
  undefined4 local_98;
  uint local_94;
  uint local_8c;
  undefined4 local_7c;
  uint local_78;
  uint local_70 [4];
  undefined4 local_60;
  uint local_5c;
  uint local_54 [4];
  undefined4 local_44;
  uint local_40;
  uint local_38 [4];
  undefined4 local_28;
  uint local_24;
  undefined4 local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_10 = ExceptionList;
  puStack_c = &LAB_00b75107;
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
  *(undefined2 *)(param_1 + 0x54) = 0;
  *(undefined2 *)(param_1 + 0x56) = 0;
  param_1[0x58] = 1;
  local_8 = 0;
  local_1c = 1;
  local_18 = *(int *)(*(int *)(in_ECX + 0x1c) + 0x60);
  while( true ) {
    do {
      iVar2 = local_18;
      if (iVar2 == 0) {
        ExceptionList = local_10;
        return param_1;
      }
      local_18 = *(int *)(iVar2 + 0x224);
    } while (*(int *)(iVar2 + 0x17c) == 0);
    local_14 = *(int *)(DAT_012588e8 + 0xb0c) + *(int *)(iVar2 + 0x17c) * 0x18;
    local_24 = 0xf;
    local_28 = 0;
    local_38[0] = local_38[0] & 0xffffff00;
    FUN_00409350(&DAT_00dee2cc,1);
    local_8 = 1;
    piVar1 = *(int **)(iVar2 + 0x18);
    local_14 = FUN_0043acd0(&local_14,local_a8);
    local_8._0_1_ = 2;
    uVar3 = (**(code **)(*piVar1 + 0x18))(local_70);
    local_8._0_1_ = 3;
    FUN_0043ec10(local_54,&DAT_00dfbf14,uVar3,&DAT_00dfa9f8,local_14);
    local_8._0_1_ = 4;
    uVar3 = FUN_00988f20(local_38);
    local_8._0_1_ = 5;
    FUN_00448aa0(uVar3,0,0xffffffff);
    if (0xf < local_78) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_8c);
    }
    local_78 = 0xf;
    local_7c = 0;
    local_8c = local_8c & 0xffffff00;
    if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_54[0]);
    }
    local_40 = 0xf;
    local_44 = 0;
    local_54[0] = local_54[0] & 0xffffff00;
    if (0xf < local_5c) break;
    local_5c = 0xf;
    local_60 = 0;
    local_70[0] = local_70[0] & 0xffffff00;
    if (0xf < local_94) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_a8[0]);
    }
    local_8 = (uint)local_8._1_3_ << 8;
    local_94 = 0xf;
    local_98 = 0;
    local_a8[0] = local_a8[0] & 0xffffff00;
    if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_38[0]);
    }
    local_38[0] = local_38[0] & 0xffffff00;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_70[0]);
}

