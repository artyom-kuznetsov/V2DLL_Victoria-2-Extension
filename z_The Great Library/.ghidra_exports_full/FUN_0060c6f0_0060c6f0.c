// FUN_0060c6f0 @ 0060c6f0 body=[[0060c6f0, 0060c775] [0060c779, 0060c7ca] [0060c7d3, 0060c80d] [0060c811, 0060c85e] [0060c862, 0060c880]]


void FUN_0060c6f0(void)

{
  int *piVar1;
  int unaff_ESI;
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
  puStack_c = &LAB_00b9a640;
  local_10 = ExceptionList;
  if (*(char *)(*(int *)(unaff_ESI + 0x4c) + 0x67) != '\0') {
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    local_34 = 0xf;
    if (*(char *)(unaff_ESI + 0xe0) == '\0') {
      ExceptionList = &local_10;
      FUN_00409350("tab_takenloans",0xe);
      local_8 = 2;
      piVar1 = (int *)(**(code **)(**(int **)(unaff_ESI + 0x4c) + 0x34))(local_48);
      (**(code **)(*piVar1 + 0x48))(1);
      local_8 = 0xffffffff;
      if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_48[0]);
      }
      local_18 = 0xf;
      local_1c = 0;
      local_2c[0] = local_2c[0] & 0xffffff00;
      FUN_00409350("tab_givenloans",0xe);
      local_8 = 3;
      piVar1 = (int *)(**(code **)(**(int **)(unaff_ESI + 0x4c) + 0x34))(local_2c);
      (**(code **)(*piVar1 + 0x48))(2);
      local_8 = 0xffffffff;
      if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_2c[0]);
      }
      local_18 = 0xf;
      local_1c = 0;
      local_2c[0] = local_2c[0] & 0xffffff00;
    }
    else {
      ExceptionList = &local_10;
      FUN_00409350("tab_takenloans",0xe);
      local_8 = 0;
      piVar1 = (int *)(**(code **)(**(int **)(unaff_ESI + 0x4c) + 0x34))(local_48);
      (**(code **)(*piVar1 + 0x48))(2);
      local_8 = 0xffffffff;
      if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_48[0]);
      }
      local_34 = 0xf;
      local_38 = 0;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00409350("tab_givenloans",0xe);
      local_8 = 1;
      piVar1 = (int *)(**(code **)(**(int **)(unaff_ESI + 0x4c) + 0x34))(local_48);
      (**(code **)(*piVar1 + 0x48))(1);
      local_8 = 0xffffffff;
      if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_48[0]);
      }
    }
    local_8 = 0xffffffff;
    FUN_0060ca30(unaff_ESI);
  }
  ExceptionList = local_10;
  return;
}

