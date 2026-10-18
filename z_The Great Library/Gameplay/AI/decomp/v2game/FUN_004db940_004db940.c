// FUN_004db940 @ 004db940 body=[[004db940, 004db9dc] [004db9e0, 004dba4c] [004dba50, 004dbb02]]


undefined1 * FUN_004db940(undefined1 *param_1,undefined4 **param_2)

{
  int *piVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int in_ECX;
  int *piVar4;
  undefined4 **ppuStack_f4;
  undefined4 **ppuStack_f0;
  undefined1 local_e0 [28];
  undefined1 local_c4 [64];
  undefined4 local_84 [6];
  int local_6c;
  undefined1 local_54;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 *local_38 [5];
  uint local_24;
  int local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b8232f;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
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
  local_18 = 1;
  local_40 = 0xf;
  local_44 = 0;
  local_54 = 0;
  local_8 = 1;
  ppuStack_f0 = local_38;
  ppuStack_f4 = (undefined4 **)0x4db9ba;
  uVar3 = (**(code **)(**(int **)(in_ECX + 0x18) + 0x20))();
  ppuStack_f4 = (undefined4 **)0xffffffff;
  local_8._0_1_ = 2;
  FUN_00408ed0(uVar3,0);
  local_8._0_1_ = 1;
  if (0xf < local_24) {
    ppuStack_f4 = (undefined4 **)local_38[0];
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ppuStack_f4 = (undefined4 **)local_84;
  FUN_0044bc60();
  local_8._0_1_ = 3;
  if (*(int *)(in_ECX + 0x18) == 0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)(*(int *)(in_ECX + 0x18) + 8);
  }
  piVar1 = (int *)(local_6c + *(int *)(piVar4[1] + 0x24) * 8);
  *piVar1 = *piVar1 + *piVar4;
  local_14 = (undefined1 *)&ppuStack_f4;
  ppuStack_f4 = *(undefined4 ***)(in_ECX + 0x24);
  FUN_0044cb00(local_84);
  ppuStack_f4 = local_38;
  uVar3 = FUN_0044c410();
  ppuStack_f4 = (undefined4 **)0xffffffff;
  local_8._0_1_ = 4;
  FUN_00408ed0(uVar3,0);
  local_8._0_1_ = 3;
  uVar2 = (undefined1)local_8;
  local_8._0_1_ = 3;
  if (0xf < local_24) {
    ppuStack_f4 = (undefined4 **)local_38[0];
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_14 = *(undefined1 **)(in_ECX + 0x18);
  if (DAT_0125ce80 == 0) {
    ppuStack_f4 = (undefined4 **)0x3c;
    local_1c = FUN_00aae9af();
    local_8._0_1_ = 5;
    if (local_1c == 0) {
      ppuStack_f4 = (undefined4 **)0x0;
    }
    else {
      ppuStack_f4 = (undefined4 **)0x4dba7b;
      ppuStack_f4 = (undefined4 **)FUN_004dada0();
    }
    local_8._0_1_ = 3;
    FUN_004dc340();
    uVar2 = (undefined1)local_8;
  }
  local_8._0_1_ = uVar2;
  if (local_14 == (undefined1 *)*(int *)(DAT_0125ce80 + 0x30)) {
    if (param_2[0x56] != (int *)0x0) {
      ppuStack_f4 = param_2;
      (**(code **)(*param_2[0x56] + 0xc))(local_e0);
      ppuStack_f4 = (undefined4 **)0xffffffff;
      local_8._0_1_ = 6;
      FUN_00448aa0(local_e0,0);
      ppuStack_f4 = (undefined4 **)0xffffffff;
      FUN_00448aa0(local_c4,0);
      ppuStack_f4 = (undefined4 **)0x4dbae6;
      FUN_00459820();
    }
  }
  ppuStack_f4 = (undefined4 **)0x4dbaee;
  FUN_0044be00();
  ExceptionList = local_10;
  return param_1;
}

