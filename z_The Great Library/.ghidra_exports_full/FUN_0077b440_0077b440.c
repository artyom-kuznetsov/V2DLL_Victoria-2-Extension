// FUN_0077b440 @ 0077b440 body=[[0077b440, 0077b4cf] [0077b4d3, 0077b522] [0077b526, 0077b5cf] [0077b5d3, 0077b622] [0077b626, 0077b6ab] [0077b6af, 0077b6fe] [0077b702, 0077b74a] [0077b74e, 0077b75e]]


void FUN_0077b440(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
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
  puStack_c = &LAB_00b43c98;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  (**(code **)(*(int *)(*(int *)(in_ECX + 8) + 0x18) + 0x34))();
  iVar3 = *(int *)(in_ECX + 0x94);
  if (iVar3 == 0) {
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350("tutorial_chapters_basic",0x17);
    local_8 = 0;
    iVar3 = (**(code **)(**(int **)(in_ECX + 8) + 0x6c))(local_2c);
    (**(code **)(*(int *)(iVar3 + 0x18) + 0x34))();
    local_8 = 0xffffffff;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350("tutorial_chapters_medium",0x18);
    local_8 = 1;
    iVar3 = (**(code **)(**(int **)(in_ECX + 8) + 0x6c))(local_2c);
    (**(code **)(*(int *)(iVar3 + 0x18) + 0x38))();
    local_8 = 0xffffffff;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350("tutorial_chapters_advanced",0x1a);
    local_8 = 2;
  }
  else {
    if (iVar3 != 1) {
      if (iVar3 != 2) {
        ExceptionList = local_10;
        return;
      }
      local_18 = 0xf;
      local_1c = 0;
      local_2c[0] = (uint)local_2c[0]._1_3_ << 8;
      FUN_00409350("tutorial_chapters_basic",0x17);
      local_8 = 6;
      iVar3 = (**(code **)(**(int **)(in_ECX + 8) + 0x6c))(local_2c);
      (**(code **)(*(int *)(iVar3 + 0x18) + 0x38))();
      local_8 = 0xffffffff;
      if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_2c[0]);
      }
      local_18 = 0xf;
      local_1c = 0;
      local_2c[0] = local_2c[0] & 0xffffff00;
      FUN_00409350("tutorial_chapters_medium",0x18);
      local_8 = 7;
      iVar3 = (**(code **)(**(int **)(in_ECX + 8) + 0x6c))(local_2c);
      (**(code **)(*(int *)(iVar3 + 0x18) + 0x38))();
      local_8 = 0xffffffff;
      if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_2c[0]);
      }
      local_34 = 0xf;
      local_38 = 0;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00409350("tutorial_chapters_advanced",0x1a);
      local_8 = 8;
      iVar3 = (**(code **)(**(int **)(in_ECX + 8) + 0x6c))(local_48);
      (**(code **)(*(int *)(iVar3 + 0x18) + 0x34))();
      uVar1 = local_48[0];
      uVar2 = local_34;
      goto joined_r0x0077b740;
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = (uint)local_2c[0]._1_3_ << 8;
    FUN_00409350("tutorial_chapters_basic",0x17);
    local_8 = 3;
    iVar3 = (**(code **)(**(int **)(in_ECX + 8) + 0x6c))(local_2c);
    (**(code **)(*(int *)(iVar3 + 0x18) + 0x38))();
    local_8 = 0xffffffff;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350("tutorial_chapters_medium",0x18);
    local_8 = 4;
    iVar3 = (**(code **)(**(int **)(in_ECX + 8) + 0x6c))(local_2c);
    (**(code **)(*(int *)(iVar3 + 0x18) + 0x34))();
    local_8 = 0xffffffff;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350("tutorial_chapters_advanced",0x1a);
    local_8 = 5;
  }
  iVar3 = (**(code **)(**(int **)(in_ECX + 8) + 0x6c))(local_2c);
  (**(code **)(*(int *)(iVar3 + 0x18) + 0x38))();
  uVar1 = local_2c[0];
  uVar2 = local_18;
joined_r0x0077b740:
  if (uVar2 < 0x10) {
    ExceptionList = local_10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(uVar1);
}

