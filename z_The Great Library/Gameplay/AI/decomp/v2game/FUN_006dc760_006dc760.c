// FUN_006dc760 @ 006dc760 body=[[006dc760, 006dc7cd] [006dc7d1, 006dc826] [006dc82a, 006dc877]]


void FUN_006dc760(int param_1)

{
  int iVar1;
  int in_ECX;
  uint local_48 [4];
  undefined4 local_38;
  uint local_34;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b44610;
  local_10 = ExceptionList;
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("sort_by_issue_name",0x12);
  local_8 = 0;
  iVar1 = (**(code **)(**(int **)(in_ECX + 0x4c) + 0x34))(local_48);
  local_8 = 0xffffffff;
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48[0]);
  }
  if (iVar1 == param_1) {
    iVar1 = 0;
  }
  else {
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350("sort_by_people",0xe);
    local_8 = 1;
    iVar1 = (**(code **)(**(int **)(in_ECX + 0x4c) + 0x34))(local_2c);
    local_8 = 0xffffffff;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    iVar1 = (iVar1 == param_1) + 1;
  }
  local_8 = 0xffffffff;
  if (iVar1 == *(int *)(in_ECX + 0x164)) {
    *(bool *)(in_ECX + 0x16d) = *(char *)(in_ECX + 0x16d) == '\0';
  }
  else {
    *(int *)(in_ECX + 0x164) = iVar1;
  }
  FUN_006d79f0(in_ECX);
  ExceptionList = local_10;
  return;
}

