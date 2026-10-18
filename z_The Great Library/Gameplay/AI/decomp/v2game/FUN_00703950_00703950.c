// FUN_00703950 @ 00703950 body=[[00703950, 00703a02] [00703a06, 00703a52] [00703a56, 00703aa2] [00703aa6, 00703af2] [00703af6, 00703b43] [00703b47, 00703b94] [00703b98, 00703be5] [00703be9, 00703c3a] [00703c3e, 00703d1b] [00703d1f, 00703d6b] [00703d6f, 00703dbb] [00703dbf, 00703e0b] [00703e0f, 00703e5c] [00703e60, 00703ead] [00703eb1, 00703efe] [00703f02, 00703f53] [00703f57, 00703fa4] [00703fa8, 00704057] [0070405b, 007040a7] [007040ab, 007040f7] [007040fb, 007046a4]]


void FUN_00703950(int param_1)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  undefined1 local_64 [28];
  undefined1 local_48 [28];
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9d868;
  local_10 = ExceptionList;
  if (param_1 == 0) {
    ExceptionList = &local_10;
    (**(code **)(**(int **)(in_ECX + 0x84) + 0x54))();
    (**(code **)(*(int *)(*(int *)(in_ECX + 0x88) + 0x18) + 0x38))();
    FUN_006f3e70();
    (**(code **)(**(int **)(in_ECX + 0x7c) + 0x50))();
    (**(code **)(**(int **)(in_ECX + 0x80) + 0x54))();
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350("sort_by_state",0xd);
    local_8 = 0;
    piVar1 = (int *)(**(code **)(**(int **)(in_ECX + 0x4c) + 0x34))(local_2c);
    (**(code **)(*piVar1 + 0x38))();
    local_8 = 0xffffffff;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350("sort_by_projects",0x10);
    local_8 = 1;
    piVar1 = (int *)(**(code **)(**(int **)(in_ECX + 0x4c) + 0x34))(local_2c);
    (**(code **)(*piVar1 + 0x38))();
    local_8 = 0xffffffff;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350("sort_by_completion",0x12);
    local_8 = 2;
    piVar1 = (int *)(**(code **)(**(int **)(in_ECX + 0x4c) + 0x34))(local_2c);
    (**(code **)(*piVar1 + 0x38))();
    local_8 = 0xffffffff;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350("sort_by_projecteers",0x13);
    local_8 = 3;
    piVar1 = (int *)(**(code **)(**(int **)(in_ECX + 0x4c) + 0x34))(local_2c);
    (**(code **)(*piVar1 + 0x38))();
    local_8 = 0xffffffff;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350("pop_sort_buttons",0x10);
    local_8 = 4;
    iVar2 = (**(code **)(**(int **)(in_ECX + 0x4c) + 0x6c))(local_2c);
    (**(code **)(*(int *)(iVar2 + 0x18) + 0x34))();
    local_8 = 0xffffffff;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350("pop_sort_buttons_invest",0x17);
    local_8 = 5;
    iVar2 = (**(code **)(**(int **)(in_ECX + 0x4c) + 0x6c))(local_2c);
    (**(code **)(*(int *)(iVar2 + 0x18) + 0x38))();
    local_8 = 0xffffffff;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350("factory_buttons",0xf);
    local_8 = 6;
    iVar2 = (**(code **)(**(int **)(in_ECX + 0x4c) + 0x6c))(local_2c);
    (**(code **)(*(int *)(iVar2 + 0x18) + 0x34))();
    local_8 = 0xffffffff;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350("invest_buttons",0xe);
    local_8 = 7;
    iVar2 = (**(code **)(**(int **)(in_ECX + 0x4c) + 0x6c))(local_2c);
    (**(code **)(*(int *)(iVar2 + 0x18) + 0x38))();
    local_8 = 0xffffffff;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350("investment_browser",0x12);
    local_8 = 8;
    iVar2 = (**(code **)(**(int **)(in_ECX + 0x4c) + 0x6c))(local_2c);
    (**(code **)(*(int *)(iVar2 + 0x18) + 0x38))();
    if (local_18 < 0x10) {
      *(undefined4 *)(in_ECX + 0x1c8) = 0;
      ExceptionList = local_10;
      return;
    }
LAB_00703f9c:
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  if (param_1 == 4) {
    ExceptionList = &local_10;
    (**(code **)(**(int **)(in_ECX + 0x7c) + 0x54))();
    (**(code **)(**(int **)(in_ECX + 0x80) + 0x54))();
    (**(code **)(*(int *)(*(int *)(in_ECX + 0x88) + 0x18) + 0x38))();
    FUN_007046b0(in_ECX);
    (**(code **)(**(int **)(in_ECX + 0x84) + 0x50))();
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350("sort_by_state",0xd);
    local_8 = 9;
    piVar1 = (int *)(**(code **)(**(int **)(in_ECX + 0x4c) + 0x34))(local_2c);
    (**(code **)(*piVar1 + 0x34))();
    local_8 = 0xffffffff;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350("sort_by_projects",0x10);
    local_8 = 10;
    piVar1 = (int *)(**(code **)(**(int **)(in_ECX + 0x4c) + 0x34))(local_2c);
    (**(code **)(*piVar1 + 0x34))();
    local_8 = 0xffffffff;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350("sort_by_completion",0x12);
    local_8 = 0xb;
    piVar1 = (int *)(**(code **)(**(int **)(in_ECX + 0x4c) + 0x34))(local_2c);
    (**(code **)(*piVar1 + 0x34))();
    local_8 = 0xffffffff;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350("sort_by_projecteers",0x13);
    local_8 = 0xc;
    piVar1 = (int *)(**(code **)(**(int **)(in_ECX + 0x4c) + 0x34))(local_2c);
    (**(code **)(*piVar1 + 0x34))();
    local_8 = 0xffffffff;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350("pop_sort_buttons",0x10);
    local_8 = 0xd;
    iVar2 = (**(code **)(**(int **)(in_ECX + 0x4c) + 0x6c))(local_2c);
    (**(code **)(*(int *)(iVar2 + 0x18) + 0x38))();
    local_8 = 0xffffffff;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350("pop_sort_buttons_invest",0x17);
    local_8 = 0xe;
    iVar2 = (**(code **)(**(int **)(in_ECX + 0x4c) + 0x6c))(local_2c);
    (**(code **)(*(int *)(iVar2 + 0x18) + 0x38))();
    local_8 = 0xffffffff;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350("factory_buttons",0xf);
    local_8 = 0xf;
    iVar2 = (**(code **)(**(int **)(in_ECX + 0x4c) + 0x6c))(local_2c);
    (**(code **)(*(int *)(iVar2 + 0x18) + 0x38))();
    local_8 = 0xffffffff;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350("invest_buttons",0xe);
    local_8 = 0x10;
    iVar2 = (**(code **)(**(int **)(in_ECX + 0x4c) + 0x6c))(local_2c);
    (**(code **)(*(int *)(iVar2 + 0x18) + 0x38))();
    local_8 = 0xffffffff;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350("investment_browser",0x12);
    local_8 = 0x11;
    iVar2 = (**(code **)(**(int **)(in_ECX + 0x4c) + 0x6c))(local_2c);
    (**(code **)(*(int *)(iVar2 + 0x18) + 0x38))();
    if (local_18 < 0x10) {
      *(undefined4 *)(in_ECX + 0x1c8) = 4;
      ExceptionList = local_10;
      return;
    }
    goto LAB_00703f9c;
  }
  if (param_1 == 3) {
    ExceptionList = &local_10;
    (**(code **)(**(int **)(in_ECX + 0x84) + 0x54))();
    (**(code **)(**(int **)(in_ECX + 0x7c) + 0x54))();
    (**(code **)(**(int **)(in_ECX + 0x80) + 0x54))();
    FUN_00704be0(in_ECX);
    (**(code **)(*(int *)(*(int *)(in_ECX + 0x88) + 0x18) + 0x34))();
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350("sort_by_state",0xd);
    local_8 = 0x12;
    piVar1 = (int *)(**(code **)(**(int **)(in_ECX + 0x4c) + 0x34))(local_2c);
    (**(code **)(*piVar1 + 0x38))();
    local_8 = 0xffffffff;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350("sort_by_projects",0x10);
    local_8 = 0x13;
    piVar1 = (int *)(**(code **)(**(int **)(in_ECX + 0x4c) + 0x34))(local_2c);
    (**(code **)(*piVar1 + 0x38))();
    local_8 = 0xffffffff;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350("sort_by_completion",0x12);
    local_8 = 0x14;
    piVar1 = (int *)(**(code **)(**(int **)(in_ECX + 0x4c) + 0x34))(local_2c);
    (**(code **)(*piVar1 + 0x38))();
    local_8 = 0xffffffff;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350("sort_by_projecteers",0x13);
    local_8 = 0x15;
    piVar1 = (int *)(**(code **)(**(int **)(in_ECX + 0x4c) + 0x34))(local_2c);
    (**(code **)(*piVar1 + 0x38))();
    local_8 = 0xffffffff;
    FUN_00408ad0();
    FUN_009885d0();
    local_8 = 0x16;
    iVar2 = (**(code **)(**(int **)(in_ECX + 0x4c) + 0x6c))(local_2c);
    (**(code **)(*(int *)(iVar2 + 0x18) + 0x38))();
    local_8 = 0xffffffff;
    FUN_00408ad0();
    FUN_009885d0();
    local_8 = 0x17;
    iVar2 = (**(code **)(**(int **)(in_ECX + 0x4c) + 0x6c))(local_2c);
    (**(code **)(*(int *)(iVar2 + 0x18) + 0x38))();
    local_8 = 0xffffffff;
    FUN_00408ad0();
    FUN_009885d0();
    local_8 = 0x18;
    iVar2 = (**(code **)(**(int **)(in_ECX + 0x4c) + 0x6c))(local_2c);
    (**(code **)(*(int *)(iVar2 + 0x18) + 0x38))();
    local_8 = 0xffffffff;
    FUN_00408ad0();
    FUN_009885d0();
    local_8 = 0x19;
    iVar2 = (**(code **)(**(int **)(in_ECX + 0x4c) + 0x6c))(local_2c);
    (**(code **)(*(int *)(iVar2 + 0x18) + 0x38))();
    local_8 = 0xffffffff;
    FUN_00408ad0();
    FUN_009885d0();
    local_8 = 0x1a;
LAB_00704431:
    iVar2 = (**(code **)(**(int **)(in_ECX + 0x4c) + 0x6c))(local_2c);
    (**(code **)(*(int *)(iVar2 + 0x18) + 0x38))();
  }
  else {
    if (param_1 == 1) {
      ExceptionList = &local_10;
      (**(code **)(**(int **)(in_ECX + 0x84) + 0x54))();
      (**(code **)(*(int *)(*(int *)(in_ECX + 0x88) + 0x18) + 0x38))();
      FUN_006f7140(in_ECX);
      (**(code **)(**(int **)(in_ECX + 0x7c) + 0x54))();
      (**(code **)(**(int **)(in_ECX + 0x80) + 0x50))();
      FUN_009885d0();
      local_8 = 0x1b;
      piVar1 = (int *)(**(code **)(**(int **)(in_ECX + 0x4c) + 0x34))(local_2c);
      (**(code **)(*piVar1 + 0x38))();
      local_8 = 0xffffffff;
      FUN_00408ad0();
      FUN_009885d0();
      local_8 = 0x1c;
      piVar1 = (int *)(**(code **)(**(int **)(in_ECX + 0x4c) + 0x34))(local_2c);
      (**(code **)(*piVar1 + 0x38))();
      local_8 = 0xffffffff;
      FUN_00408ad0();
      FUN_009885d0();
      local_8 = 0x1d;
      piVar1 = (int *)(**(code **)(**(int **)(in_ECX + 0x4c) + 0x34))(local_2c);
      (**(code **)(*piVar1 + 0x38))();
      local_8 = 0xffffffff;
      FUN_00408ad0();
      FUN_009885d0();
      local_8 = 0x1e;
      piVar1 = (int *)(**(code **)(**(int **)(in_ECX + 0x4c) + 0x34))(local_2c);
      (**(code **)(*piVar1 + 0x38))();
      local_8 = 0xffffffff;
      FUN_00408ad0();
      FUN_009885d0();
      local_8 = 0x1f;
      iVar2 = (**(code **)(**(int **)(in_ECX + 0x4c) + 0x6c))(local_2c);
      (**(code **)(*(int *)(iVar2 + 0x18) + 0x38))();
      local_8 = 0xffffffff;
      FUN_00408ad0();
      FUN_009885d0();
      local_8 = 0x20;
      iVar2 = (**(code **)(**(int **)(in_ECX + 0x4c) + 0x6c))(local_2c);
      (**(code **)(*(int *)(iVar2 + 0x18) + 0x34))();
      local_8 = 0xffffffff;
      FUN_00408ad0();
      FUN_009885d0();
      local_8 = 0x21;
      iVar2 = (**(code **)(**(int **)(in_ECX + 0x4c) + 0x6c))(local_2c);
      (**(code **)(*(int *)(iVar2 + 0x18) + 0x38))();
      local_8 = 0xffffffff;
      FUN_00408ad0();
      FUN_009885d0();
      local_8 = 0x22;
      iVar2 = (**(code **)(**(int **)(in_ECX + 0x4c) + 0x6c))(local_2c);
      (**(code **)(*(int *)(iVar2 + 0x18) + 0x34))();
      local_8 = 0xffffffff;
      FUN_00408ad0();
      FUN_009885d0();
      local_8 = 0x23;
      goto LAB_00704431;
    }
    if (param_1 != 2) goto LAB_00704454;
    ExceptionList = &local_10;
    (**(code **)(**(int **)(in_ECX + 0x84) + 0x54))();
    (**(code **)(*(int *)(*(int *)(in_ECX + 0x88) + 0x18) + 0x38))();
    (**(code **)(**(int **)(in_ECX + 0x7c) + 0x54))();
    (**(code **)(**(int **)(in_ECX + 0x80) + 0x54))();
    FUN_006f53a0(in_ECX,0);
    FUN_009885d0();
    local_8 = 0x24;
    piVar1 = (int *)(**(code **)(**(int **)(in_ECX + 0x4c) + 0x34))(local_2c);
    (**(code **)(*piVar1 + 0x38))();
    local_8 = 0xffffffff;
    FUN_00408ad0();
    FUN_009885d0();
    local_8 = 0x25;
    piVar1 = (int *)(**(code **)(**(int **)(in_ECX + 0x4c) + 0x34))(local_2c);
    (**(code **)(*piVar1 + 0x38))();
    local_8 = 0xffffffff;
    FUN_00408ad0();
    FUN_009885d0();
    local_8 = 0x26;
    piVar1 = (int *)(**(code **)(**(int **)(in_ECX + 0x4c) + 0x34))(local_2c);
    (**(code **)(*piVar1 + 0x38))();
    local_8 = 0xffffffff;
    FUN_00408ad0();
    FUN_009885d0();
    local_8 = 0x27;
    piVar1 = (int *)(**(code **)(**(int **)(in_ECX + 0x4c) + 0x34))(local_2c);
    (**(code **)(*piVar1 + 0x38))();
    local_8 = 0xffffffff;
    FUN_00408ad0();
    FUN_009885d0();
    local_8 = 0x28;
    iVar2 = (**(code **)(**(int **)(in_ECX + 0x4c) + 0x6c))(local_2c);
    (**(code **)(*(int *)(iVar2 + 0x18) + 0x38))();
    local_8 = 0xffffffff;
    FUN_00408ad0();
    FUN_009885d0();
    local_8 = 0x29;
    iVar2 = (**(code **)(**(int **)(in_ECX + 0x4c) + 0x6c))(local_2c);
    (**(code **)(*(int *)(iVar2 + 0x18) + 0x38))();
    local_8 = 0xffffffff;
    FUN_00408ad0();
    FUN_009885d0();
    local_8 = 0x2a;
    iVar2 = (**(code **)(**(int **)(in_ECX + 0x4c) + 0x6c))(local_2c);
    (**(code **)(*(int *)(iVar2 + 0x18) + 0x38))();
    local_8 = 0xffffffff;
    FUN_00408ad0();
    FUN_009885d0();
    local_8 = 0x2b;
    iVar2 = (**(code **)(**(int **)(in_ECX + 0x4c) + 0x6c))(local_48);
    (**(code **)(*(int *)(iVar2 + 0x18) + 0x38))();
    local_8 = 0xffffffff;
    FUN_00408ad0();
    FUN_009885d0();
    local_8 = 0x2c;
    iVar2 = (**(code **)(**(int **)(in_ECX + 0x4c) + 0x6c))(local_64);
    (**(code **)(*(int *)(iVar2 + 0x18) + 0x34))();
  }
  FUN_00408ad0();
LAB_00704454:
  *(int *)(in_ECX + 0x1c8) = param_1;
  ExceptionList = local_10;
  return;
}

