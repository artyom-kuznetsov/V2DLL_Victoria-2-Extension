// FUN_00702ed0 @ 00702ed0 body=[[00702ed0, 00702f50] [00702f54, 00702fa2] [00702fa6, 00702ff4] [00702ff8, 00703046] [0070304a, 00703097] [0070309b, 007030ec] [007030f0, 00703179] [0070317d, 007031cb] [007031cf, 0070321d] [00703221, 0070326f] [00703273, 007032c0] [007032c4, 00703315] [00703319, 00703368] [0070337f, 007033df] [007033e3, 00703431] [00703435, 00703483] [00703487, 007034d5] [007034d9, 00703526] [0070352a, 0070357b] [0070357f, 007035ce] [007035e5, 00703941]]


void FUN_00702ed0(int param_1)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  undefined1 local_48 [28];
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9d998;
  local_10 = ExceptionList;
  if (param_1 == 0) {
    ExceptionList = &local_10;
    FUN_00703950(0);
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350("tab_factories",0xd);
    local_8 = 0;
    piVar1 = (int *)(**(code **)(**(int **)(in_ECX + 0x4c) + 0x34))(local_2c);
    (**(code **)(*piVar1 + 0x48))(2);
    local_8 = 0xffffffff;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350("tab_goodsproduction",0x13);
    local_8 = 1;
    piVar1 = (int *)(**(code **)(**(int **)(in_ECX + 0x4c) + 0x34))(local_2c);
    (**(code **)(*piVar1 + 0x48))(1);
    local_8 = 0xffffffff;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350("tab_popprojects",0xf);
    local_8 = 2;
    piVar1 = (int *)(**(code **)(**(int **)(in_ECX + 0x4c) + 0x34))(local_2c);
    (**(code **)(*piVar1 + 0x48))(1);
    local_8 = 0xffffffff;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350("tab_invest",10);
    local_8 = 3;
    piVar1 = (int *)(**(code **)(**(int **)(in_ECX + 0x4c) + 0x34))(local_2c);
    (**(code **)(*piVar1 + 0x48))(1);
    local_8 = 0xffffffff;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350("factory_buttons",0xf);
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
    FUN_00409350("invest_buttons",0xe);
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
    FUN_00409350("investment_browser",0x12);
    local_8 = 6;
  }
  else {
    if (param_1 != 1) {
      if (param_1 != 2) {
        if (param_1 == 3) {
          ExceptionList = &local_10;
          if (*(int **)(in_ECX + 0x1c4) != (int *)0x0) {
            ExceptionList = &local_10;
            (**(code **)(**(int **)(in_ECX + 0x1c4) + 4))(1);
          }
          *(undefined4 *)(in_ECX + 0x1c4) = 0;
          FUN_00703950(3);
          FUN_009885d0();
          local_8 = 0x15;
          piVar1 = (int *)(**(code **)(**(int **)(in_ECX + 0x4c) + 0x34))(local_2c);
          (**(code **)(*piVar1 + 0x48))(1);
          local_8 = 0xffffffff;
          FUN_00408ad0();
          FUN_009885d0();
          local_8 = 0x16;
          piVar1 = (int *)(**(code **)(**(int **)(in_ECX + 0x4c) + 0x34))(local_2c);
          (**(code **)(*piVar1 + 0x48))(2);
          local_8 = 0xffffffff;
          FUN_00408ad0();
          FUN_009885d0();
          local_8 = 0x17;
          piVar1 = (int *)(**(code **)(**(int **)(in_ECX + 0x4c) + 0x34))(local_2c);
          (**(code **)(*piVar1 + 0x48))(1);
          local_8 = 0xffffffff;
          FUN_00408ad0();
          FUN_009885d0();
          local_8 = 0x18;
          piVar1 = (int *)(**(code **)(**(int **)(in_ECX + 0x4c) + 0x34))(local_2c);
          (**(code **)(*piVar1 + 0x48))(1);
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
          iVar2 = (**(code **)(**(int **)(in_ECX + 0x4c) + 0x6c))(local_2c);
          (**(code **)(*(int *)(iVar2 + 0x18) + 0x38))();
          local_8 = 0xffffffff;
          FUN_00408ad0();
          FUN_009885d0();
          local_8 = 0x1b;
          iVar2 = (**(code **)(**(int **)(in_ECX + 0x4c) + 0x6c))(local_2c);
          (**(code **)(*(int *)(iVar2 + 0x18) + 0x38))();
        }
        else {
          if (param_1 != 4) {
            return;
          }
          ExceptionList = &local_10;
          if (*(int **)(in_ECX + 0x1c4) != (int *)0x0) {
            ExceptionList = &local_10;
            (**(code **)(**(int **)(in_ECX + 0x1c4) + 4))(1);
          }
          *(undefined4 *)(in_ECX + 0x1c4) = 0;
          FUN_00703950(4);
          FUN_009885d0();
          local_8 = 0x1c;
          piVar1 = (int *)(**(code **)(**(int **)(in_ECX + 0x4c) + 0x34))(local_2c);
          (**(code **)(*piVar1 + 0x48))(1);
          local_8 = 0xffffffff;
          FUN_00408ad0();
          FUN_009885d0();
          local_8 = 0x1d;
          piVar1 = (int *)(**(code **)(**(int **)(in_ECX + 0x4c) + 0x34))(local_2c);
          (**(code **)(*piVar1 + 0x48))(1);
          local_8 = 0xffffffff;
          FUN_00408ad0();
          FUN_009885d0();
          local_8 = 0x1e;
          piVar1 = (int *)(**(code **)(**(int **)(in_ECX + 0x4c) + 0x34))(local_2c);
          (**(code **)(*piVar1 + 0x48))(2);
          local_8 = 0xffffffff;
          FUN_00408ad0();
          FUN_009885d0();
          local_8 = 0x1f;
          piVar1 = (int *)(**(code **)(**(int **)(in_ECX + 0x4c) + 0x34))(local_2c);
          (**(code **)(*piVar1 + 0x48))(1);
          local_8 = 0xffffffff;
          FUN_00408ad0();
          FUN_009885d0();
          local_8 = 0x20;
          iVar2 = (**(code **)(**(int **)(in_ECX + 0x4c) + 0x6c))(local_2c);
          (**(code **)(*(int *)(iVar2 + 0x18) + 0x38))();
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
          iVar2 = (**(code **)(**(int **)(in_ECX + 0x4c) + 0x6c))(local_48);
          (**(code **)(*(int *)(iVar2 + 0x18) + 0x38))();
        }
        FUN_00408ad0();
        ExceptionList = local_10;
        return;
      }
      ExceptionList = &local_10;
      FUN_00703950(2);
      local_18 = 0xf;
      local_1c = 0;
      local_2c[0] = local_2c[0] & 0xffffff00;
      FUN_00409350("tab_factories",0xd);
      local_8 = 0xe;
      piVar1 = (int *)(**(code **)(**(int **)(in_ECX + 0x4c) + 0x34))(local_2c);
      (**(code **)(*piVar1 + 0x48))(1);
      local_8 = 0xffffffff;
      if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_2c[0]);
      }
      local_18 = 0xf;
      local_1c = 0;
      local_2c[0] = local_2c[0] & 0xffffff00;
      FUN_00409350("tab_goodsproduction",0x13);
      local_8 = 0xf;
      piVar1 = (int *)(**(code **)(**(int **)(in_ECX + 0x4c) + 0x34))(local_2c);
      (**(code **)(*piVar1 + 0x48))(1);
      local_8 = 0xffffffff;
      if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_2c[0]);
      }
      local_18 = 0xf;
      local_1c = 0;
      local_2c[0] = local_2c[0] & 0xffffff00;
      FUN_00409350("tab_popprojects",0xf);
      local_8 = 0x10;
      piVar1 = (int *)(**(code **)(**(int **)(in_ECX + 0x4c) + 0x34))(local_2c);
      (**(code **)(*piVar1 + 0x48))(1);
      local_8 = 0xffffffff;
      if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_2c[0]);
      }
      local_18 = 0xf;
      local_1c = 0;
      local_2c[0] = local_2c[0] & 0xffffff00;
      FUN_00409350("tab_invest",10);
      local_8 = 0x11;
      piVar1 = (int *)(**(code **)(**(int **)(in_ECX + 0x4c) + 0x34))(local_2c);
      (**(code **)(*piVar1 + 0x48))(2);
      local_8 = 0xffffffff;
      if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_2c[0]);
      }
      local_18 = 0xf;
      local_1c = 0;
      local_2c[0] = local_2c[0] & 0xffffff00;
      FUN_00409350("factory_buttons",0xf);
      local_8 = 0x12;
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
      local_8 = 0x13;
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
      local_8 = 0x14;
      iVar2 = (**(code **)(**(int **)(in_ECX + 0x4c) + 0x6c))(local_2c);
      (**(code **)(*(int *)(iVar2 + 0x18) + 0x34))();
      if (local_18 < 0x10) {
        ExceptionList = local_10;
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
    ExceptionList = &local_10;
    FUN_00703950(1);
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350("tab_factories",0xd);
    local_8 = 7;
    piVar1 = (int *)(**(code **)(**(int **)(in_ECX + 0x4c) + 0x34))(local_2c);
    (**(code **)(*piVar1 + 0x48))(1);
    local_8 = 0xffffffff;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350("tab_goodsproduction",0x13);
    local_8 = 8;
    piVar1 = (int *)(**(code **)(**(int **)(in_ECX + 0x4c) + 0x34))(local_2c);
    (**(code **)(*piVar1 + 0x48))(1);
    local_8 = 0xffffffff;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350("tab_popprojects",0xf);
    local_8 = 9;
    piVar1 = (int *)(**(code **)(**(int **)(in_ECX + 0x4c) + 0x34))(local_2c);
    (**(code **)(*piVar1 + 0x48))(1);
    local_8 = 0xffffffff;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350("tab_invest",10);
    local_8 = 10;
    piVar1 = (int *)(**(code **)(**(int **)(in_ECX + 0x4c) + 0x34))(local_2c);
    (**(code **)(*piVar1 + 0x48))(2);
    local_8 = 0xffffffff;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350("factory_buttons",0xf);
    local_8 = 0xb;
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
    local_8 = 0xc;
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
    FUN_00409350("investment_browser",0x12);
    local_8 = 0xd;
  }
  iVar2 = (**(code **)(**(int **)(in_ECX + 0x4c) + 0x6c))(local_2c);
  (**(code **)(*(int *)(iVar2 + 0x18) + 0x38))();
  if (local_18 < 0x10) {
    ExceptionList = local_10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_2c[0]);
}

