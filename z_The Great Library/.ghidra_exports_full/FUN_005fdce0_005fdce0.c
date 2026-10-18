// FUN_005fdce0 @ 005fdce0 body=[[005fdce0, 005fdd51] [005fdd55, 005fddaa] [005fddae, 005fddf3] [005fddf7, 005fde4c] [005fde50, 005fdeb4]]


undefined4 FUN_005fdce0(void)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int in_ECX;
  uint local_4c [4];
  undefined4 local_3c;
  uint local_38;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b6b3b0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(int *)(in_ECX + 0x20) != 0) {
    local_38 = 0xf;
    local_3c = 0;
    local_4c[0] = local_4c[0] & 0xffffff00;
    ExceptionList = &local_10;
    FUN_00409350(&DAT_00e05118,2);
    local_8 = 0;
    local_14 = (**(code **)(**(int **)(in_ECX + 0x20) + 0x34))(local_4c);
    local_8 = 0xffffffff;
    if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_4c[0]);
    }
    if (local_14 != 0) {
      local_38 = 0xf;
      local_3c = 0;
      local_4c[0] = local_4c[0] & 0xffffff00;
      FUN_00409350(&DAT_00e05118,2);
      local_8 = 1;
      iVar1 = (**(code **)(**(int **)(in_ECX + 0x20) + 0x34))(local_4c);
      (**(code **)(*(int *)(iVar1 + 0x54) + 8))(in_ECX + 0x28);
      local_8 = 0xffffffff;
      if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_4c[0]);
      }
    }
    local_8 = 0xffffffff;
    local_38 = 0xf;
    local_3c = 0;
    local_4c[0] = local_4c[0] & 0xffffff00;
    FUN_00409350("Cancel",6);
    local_8 = 2;
    local_14 = (**(code **)(**(int **)(in_ECX + 0x20) + 0x34))(local_4c);
    local_8 = 0xffffffff;
    if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_4c[0]);
    }
    if (local_14 != 0) {
      local_1c = 0xf;
      local_20 = 0;
      local_30[0] = local_30[0] & 0xffffff00;
      FUN_00409350("Cancel",6);
      local_8 = 3;
      iVar1 = (**(code **)(**(int **)(in_ECX + 0x20) + 0x34))(local_30);
      (**(code **)(*(int *)(iVar1 + 0x54) + 8))(in_ECX + 0x54);
      local_8 = 0xffffffff;
      if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_30[0]);
      }
      local_1c = 0xf;
      local_20 = 0;
      local_30[0] = local_30[0] & 0xffffff00;
    }
    local_8 = 0xffffffff;
    (**(code **)(*(int *)(*(int *)(in_ECX + 0x20) + 0x18) + 0x38))();
    (**(code **)(**(int **)(in_ECX + 0x20) + 0x50))();
  }
  piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 0x24) + 0x34))();
  iVar1 = *piVar2;
  uVar3 = (**(code **)(**(int **)(in_ECX + 0x24) + 0x3c))();
  uVar3 = (**(code **)(iVar1 + 0x2c))(in_ECX + 0x80,uVar3);
  *(undefined4 *)(in_ECX + 0x20) = uVar3;
  FUN_005fdec0();
  ExceptionList = local_10;
  return 1;
}

