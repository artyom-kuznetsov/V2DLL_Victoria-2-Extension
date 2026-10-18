// FUN_0064f570 @ 0064f570 body=[[0064f570, 0064f5ed] [0064f5f1, 0064f64d] [0064f651, 0064f6a2] [0064f6a6, 0064f70d] [0064f711, 0064f75e] [0064f762, 0064f7b3] [0064f7b7, 0064f80d] [0064f811, 0064f841]]


void FUN_0064f570(void)

{
  int iVar1;
  int *piVar2;
  int in_ECX;
  uint local_40 [4];
  undefined4 local_30;
  uint local_2c;
  undefined1 local_24 [4];
  undefined1 local_20 [4];
  undefined1 local_1c [6];
  undefined1 local_16 [5];
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b45528;
  local_10 = ExceptionList;
  if (*(char *)(in_ECX + 0xba8) == '\0') {
    local_2c = 0xf;
    local_30 = 0;
    local_40[0] = local_40[0] & 0xffffff00;
    ExceptionList = &local_10;
    FUN_00409350("messagelog_window",0x11);
    local_8 = 0;
    iVar1 = (**(code **)(**(int **)(in_ECX + 0x1630) + 0x6c))(local_40);
    local_11 = *(char *)(iVar1 + 0x67);
    local_8 = 0xffffffff;
    if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_40[0]);
    }
    local_2c = 0xf;
    local_30 = 0;
    local_40[0] = local_40[0] & 0xffffff00;
    if (local_11 == '\0') {
      *(undefined1 *)(in_ECX + 0x1dba) = 1;
      FUN_00409350("messagelog_window",0x11);
      local_8 = 4;
      iVar1 = (**(code **)(**(int **)(in_ECX + 0x1630) + 0x6c))(local_40);
      (**(code **)(*(int *)(iVar1 + 0x18) + 0x34))();
      local_8 = 0xffffffff;
      if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_40[0]);
      }
      local_2c = 0xf;
      local_30 = 0;
      local_40[0] = local_40[0] & 0xffffff00;
      FUN_00409350("OPENbutton",10);
      local_8 = 5;
      piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 0x1630) + 0x34))(local_40);
      (**(code **)(*piVar2 + 0x38))();
      local_8 = 0xffffffff;
      if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_40[0]);
      }
      local_2c = 0xf;
      local_30 = 0;
      local_40[0] = local_40[0] & 0xffffff00;
      FUN_00409350("messagelog_window",0x11);
      local_8 = 6;
      iVar1 = (**(code **)(**(int **)(in_ECX + 0x1630) + 0x6c))(local_40);
      (**(code **)(*(int *)(iVar1 + 0x18) + 0x3c))(local_20);
      local_8 = 0xffffffff;
      if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_40[0]);
      }
      if (*(undefined4 **)(in_ECX + 0x1644) != (undefined4 *)0x0) {
        (**(code **)(*(int *)**(undefined4 **)(in_ECX + 0x1644) + 0x60))(local_24);
      }
    }
    else {
      FUN_00409350("messagelog_window",0x11);
      local_8 = 1;
      iVar1 = (**(code **)(**(int **)(in_ECX + 0x1630) + 0x6c))(local_40);
      (**(code **)(*(int *)(iVar1 + 0x18) + 0x38))();
      local_8 = 0xffffffff;
      if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_40[0]);
      }
      local_2c = 0xf;
      local_30 = 0;
      local_40[0] = local_40[0] & 0xffffff00;
      FUN_00409350("OPENbutton",10);
      local_8 = 2;
      piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 0x1630) + 0x34))(local_40);
      (**(code **)(*piVar2 + 0x34))();
      local_8 = 0xffffffff;
      if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_40[0]);
      }
      if (*(undefined4 **)(in_ECX + 0x1644) != (undefined4 *)0x0) {
        (**(code **)(*(int *)**(undefined4 **)(in_ECX + 0x1644) + 0x60))(local_16);
        local_2c = 0xf;
        local_30 = 0;
        local_40[0] = local_40[0] & 0xffffff00;
        FUN_00409350("messagelog_window",0x11);
        local_8 = 3;
        iVar1 = (**(code **)(**(int **)(in_ECX + 0x1630) + 0x6c))(local_40);
        (**(code **)(*(int *)(iVar1 + 0x18) + 0x3c))(local_1c);
        if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_40[0]);
        }
      }
      *(undefined1 *)(in_ECX + 0x1dba) = 0;
    }
    *(undefined1 *)(in_ECX + 0xba8) = 1;
  }
  ExceptionList = local_10;
  return;
}

