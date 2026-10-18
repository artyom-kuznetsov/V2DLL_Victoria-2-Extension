// FUN_0077bdf0 @ 0077bdf0 body=[[0077bdf0, 0077be5f] [0077be63, 0077bebc] [0077bec0, 0077bf10] [0077bf14, 0077bf64] [0077bf68, 0077bfbd] [0077bfc1, 0077c010] [0077c014, 0077c060] [0077c077, 0077c0b3] [0077c0b7, 0077c110] [0077c114, 0077c164] [0077c168, 0077c1b8] [0077c1bc, 0077c20b] [0077c20f, 0077c25e] [0077c262, 0077c2aa] [0077c2ae, 0077c307] [0077c30b, 0077c364] [0077c368, 0077c3b4] [0077c3b8, 0077c408] [0077c40c, 0077c45b] [0077c45f, 0077c4ae] [0077c4b2, 0077c4fa] [0077c4fe, 0077c51a]]


void FUN_0077bdf0(int param_1)

{
  int iVar1;
  int *piVar2;
  int in_ECX;
  uint local_4c [4];
  undefined4 local_3c;
  uint local_38;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  undefined1 local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b43c38;
  local_10 = ExceptionList;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("tutorial_tab_basic",0x12);
  local_8 = 0;
  iVar1 = (**(code **)(**(int **)(in_ECX + 8) + 0x34))(local_30);
  local_11 = iVar1 == param_1;
  local_8 = 0xffffffff;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  if ((bool)local_11) {
    FUN_00409350("tutorial_tab_basic",0x12);
    local_8 = 1;
    piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 8) + 0x34))(local_30);
    (**(code **)(*piVar2 + 0x48))(2);
    local_8 = 0xffffffff;
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_30[0]);
    }
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    FUN_00409350("tutorial_tab_medium",0x13);
    local_8 = 2;
    piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 8) + 0x34))(local_30);
    (**(code **)(*piVar2 + 0x48))(1);
    local_8 = 0xffffffff;
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_30[0]);
    }
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    FUN_00409350("tutorial_tab_advanced",0x15);
    local_8 = 3;
    piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 8) + 0x34))(local_30);
    (**(code **)(*piVar2 + 0x48))(1);
    local_8 = 0xffffffff;
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_30[0]);
    }
    *(undefined4 *)(in_ECX + 0x94) = 0;
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    FUN_00409350("tutorial_chapters_basic",0x17);
    local_8 = 4;
    iVar1 = (**(code **)(**(int **)(in_ECX + 8) + 0x6c))(local_30);
    (**(code **)(*(int *)(iVar1 + 0x18) + 0x34))();
    local_8 = 0xffffffff;
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_30[0]);
    }
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    FUN_00409350("tutorial_chapters_medium",0x18);
    local_8 = 5;
    iVar1 = (**(code **)(**(int **)(in_ECX + 8) + 0x6c))(local_30);
    (**(code **)(*(int *)(iVar1 + 0x18) + 0x38))();
    local_8 = 0xffffffff;
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_30[0]);
    }
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    FUN_00409350("tutorial_chapters_advanced",0x1a);
    local_8 = 6;
    iVar1 = (**(code **)(**(int **)(in_ECX + 8) + 0x6c))(local_30);
    (**(code **)(*(int *)(iVar1 + 0x18) + 0x38))();
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_30[0]);
    }
  }
  else {
    FUN_00409350("tutorial_tab_medium",0x13);
    local_8 = 7;
    iVar1 = (**(code **)(**(int **)(in_ECX + 8) + 0x34))(local_30);
    local_11 = iVar1 == param_1;
    local_8 = 0xffffffff;
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_30[0]);
    }
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    if ((bool)local_11) {
      FUN_00409350("tutorial_tab_basic",0x12);
      local_8 = 8;
      piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 8) + 0x34))(local_30);
      (**(code **)(*piVar2 + 0x48))(1);
      local_8 = 0xffffffff;
      if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_30[0]);
      }
      local_1c = 0xf;
      local_20 = 0;
      local_30[0] = local_30[0] & 0xffffff00;
      FUN_00409350("tutorial_tab_medium",0x13);
      local_8 = 9;
      piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 8) + 0x34))(local_30);
      (**(code **)(*piVar2 + 0x48))(2);
      local_8 = 0xffffffff;
      if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_30[0]);
      }
      local_1c = 0xf;
      local_20 = 0;
      local_30[0] = local_30[0] & 0xffffff00;
      FUN_00409350("tutorial_tab_advanced",0x15);
      local_8 = 10;
      piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 8) + 0x34))(local_30);
      (**(code **)(*piVar2 + 0x48))(1);
      local_8 = 0xffffffff;
      if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_30[0]);
      }
      local_1c = 0xf;
      local_20 = 0;
      local_30[0] = local_30[0] & 0xffffff00;
      FUN_00409350("tutorial_chapters_basic",0x17);
      local_8 = 0xb;
      iVar1 = (**(code **)(**(int **)(in_ECX + 8) + 0x6c))(local_30);
      (**(code **)(*(int *)(iVar1 + 0x18) + 0x38))();
      local_8 = 0xffffffff;
      if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_30[0]);
      }
      local_1c = 0xf;
      local_20 = 0;
      local_30[0] = local_30[0] & 0xffffff00;
      FUN_00409350("tutorial_chapters_medium",0x18);
      local_8 = 0xc;
      iVar1 = (**(code **)(**(int **)(in_ECX + 8) + 0x6c))(local_30);
      (**(code **)(*(int *)(iVar1 + 0x18) + 0x34))();
      local_8 = 0xffffffff;
      if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_30[0]);
      }
      local_1c = 0xf;
      local_20 = 0;
      local_30[0] = local_30[0] & 0xffffff00;
      FUN_00409350("tutorial_chapters_advanced",0x1a);
      local_8 = 0xd;
      iVar1 = (**(code **)(**(int **)(in_ECX + 8) + 0x6c))(local_30);
      (**(code **)(*(int *)(iVar1 + 0x18) + 0x38))();
      if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_30[0]);
      }
      *(undefined4 *)(in_ECX + 0x94) = 1;
      ExceptionList = local_10;
      return;
    }
    FUN_00409350("tutorial_tab_advanced",0x15);
    local_8 = 0xe;
    iVar1 = (**(code **)(**(int **)(in_ECX + 8) + 0x34))(local_30);
    local_8 = 0xffffffff;
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_30[0]);
    }
    if (iVar1 == param_1) {
      local_1c = 0xf;
      local_20 = 0;
      local_30[0] = local_30[0] & 0xffffff00;
      FUN_00409350("tutorial_tab_basic",0x12);
      local_8 = 0xf;
      piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 8) + 0x34))(local_30);
      (**(code **)(*piVar2 + 0x48))(1);
      local_8 = 0xffffffff;
      if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_30[0]);
      }
      local_1c = 0xf;
      local_20 = 0;
      local_30[0] = local_30[0] & 0xffffff00;
      FUN_00409350("tutorial_tab_medium",0x13);
      local_8 = 0x10;
      piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 8) + 0x34))(local_30);
      (**(code **)(*piVar2 + 0x48))(1);
      local_8 = 0xffffffff;
      if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_30[0]);
      }
      local_1c = 0xf;
      local_20 = 0;
      local_30[0] = local_30[0] & 0xffffff00;
      FUN_00409350("tutorial_tab_advanced",0x15);
      local_8 = 0x11;
      piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 8) + 0x34))(local_30);
      (**(code **)(*piVar2 + 0x48))(2);
      local_8 = 0xffffffff;
      if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_30[0]);
      }
      local_1c = 0xf;
      local_20 = 0;
      local_30[0] = local_30[0] & 0xffffff00;
      FUN_00409350("tutorial_chapters_basic",0x17);
      local_8 = 0x12;
      iVar1 = (**(code **)(**(int **)(in_ECX + 8) + 0x6c))(local_30);
      (**(code **)(*(int *)(iVar1 + 0x18) + 0x38))();
      local_8 = 0xffffffff;
      if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_30[0]);
      }
      local_1c = 0xf;
      local_20 = 0;
      local_30[0] = local_30[0] & 0xffffff00;
      FUN_00409350("tutorial_chapters_medium",0x18);
      local_8 = 0x13;
      iVar1 = (**(code **)(**(int **)(in_ECX + 8) + 0x6c))(local_30);
      (**(code **)(*(int *)(iVar1 + 0x18) + 0x38))();
      local_8 = 0xffffffff;
      if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_30[0]);
      }
      local_38 = 0xf;
      local_3c = 0;
      local_4c[0] = local_4c[0] & 0xffffff00;
      FUN_00409350("tutorial_chapters_advanced",0x1a);
      local_8 = 0x14;
      iVar1 = (**(code **)(**(int **)(in_ECX + 8) + 0x6c))(local_4c);
      (**(code **)(*(int *)(iVar1 + 0x18) + 0x34))();
      if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_4c[0]);
      }
      *(undefined4 *)(in_ECX + 0x94) = 2;
    }
  }
  ExceptionList = local_10;
  return;
}

