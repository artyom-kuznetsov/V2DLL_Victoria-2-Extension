// FUN_0064d5b0 @ 0064d5b0 body=[[0064d5b0, 0064d655] [0064d659, 0064d677] [0064d67b, 0064d758] [0064d765, 0064d7bc] [0064d7c0, 0064d817] [0064d81b, 0064d86e] [0064d877, 0064d8ba] [0064d8be, 0064d90c] [0064d910, 0064d933]]


undefined4 FUN_0064d5b0(int param_1)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  uint local_68 [4];
  undefined4 local_58;
  uint local_54;
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
  puStack_c = &LAB_00b92c38;
  local_10 = ExceptionList;
  if ((DAT_013f084c == 0) && (*(int *)(in_ECX + 0x1630) != 0)) {
    local_38 = 0xf;
    local_3c = 0;
    local_4c[0] = local_4c[0] & 0xffffff00;
    ExceptionList = &local_10;
    FUN_00409350("messagelog",10);
    local_8 = 0;
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    FUN_00409350("messagelog_window",0x11);
    local_8 = CONCAT31(local_8._1_3_,1);
    piVar1 = (int *)(**(code **)(**(int **)(in_ECX + 0x1630) + 0x6c))(local_30);
    local_14 = (**(code **)(*piVar1 + 0x7c))(local_4c);
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_30[0]);
    }
    local_8 = 0xffffffff;
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_4c[0]);
    }
    local_38 = 0xf;
    local_3c = 0;
    local_4c[0] = local_4c[0] & 0xffffff00;
    if (*(int *)(*(int *)(in_ECX + 0x7e0) + *(int *)(*(int *)(param_1 + 0x20) + 8) * 4) == 1) {
      FUN_0064cf70(local_14,param_1,*(undefined4 *)(in_ECX + 0x54),in_ECX + 0x17ec,in_ECX + 0x90,
                   in_ECX + 0x1dfc);
    }
    local_14 = *(int *)(in_ECX + 0x1df0);
    piVar1 = (int *)FUN_00aae9af(0x10);
    if (piVar1 == (int *)0x0) {
      piVar1 = (int *)0x0;
    }
    else {
      *piVar1 = param_1;
      piVar1[1] = local_14;
      piVar1[2] = 0;
      *(undefined1 *)(piVar1 + 3) = 0;
    }
    iVar2 = *(int *)(in_ECX + 0x1df4);
    *(int **)(in_ECX + 0x1df0) = piVar1;
    *(int *)(in_ECX + 0x1df4) = iVar2 + 1;
    if (iVar2 == 0) {
      *(int **)(in_ECX + 0x1dec) = piVar1;
    }
    else {
      *(int **)(local_14 + 8) = piVar1;
    }
    if (200 < *(int *)(in_ECX + 0x1df4)) {
      piVar1 = *(int **)(in_ECX + 0x1dec);
      if (piVar1 != (int *)0x0) {
        if (*(char *)(in_ECX + 0x1df8) == '\0') {
          iVar2 = piVar1[2];
          *(int *)(in_ECX + 0x1dec) = iVar2;
          if (iVar2 == 0) {
            *(undefined4 *)(in_ECX + 0x1df0) = 0;
          }
          else {
            *(undefined4 *)(iVar2 + 4) = 0;
          }
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(piVar1);
        }
        *(undefined1 *)(piVar1 + 3) = 1;
      }
      if ((undefined4 *)*piVar1 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*piVar1)(1);
      }
    }
    local_38 = 0xf;
    local_3c = 0;
    local_4c[0] = local_4c[0] & 0xffffff00;
    FUN_00409350("messagelog_window",0x11);
    local_8 = 2;
    iVar2 = (**(code **)(**(int **)(in_ECX + 0x1630) + 0x6c))(local_4c);
    local_8 = 0xffffffff;
    if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_4c[0]);
    }
    local_38 = 0xf;
    local_3c = 0;
    local_4c[0] = local_4c[0] & 0xffffff00;
    if (*(char *)(iVar2 + 0x67) == '\0') {
      FUN_00409350("messagelog_window",0x11);
      local_8 = 5;
      iVar2 = (**(code **)(**(int **)(in_ECX + 0x1630) + 0x6c))(local_4c);
      (**(code **)(*(int *)(iVar2 + 0x18) + 0x38))();
      local_8 = 0xffffffff;
      if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_4c[0]);
      }
      local_54 = 0xf;
      local_58 = 0;
      local_68[0] = local_68[0] & 0xffffff00;
      FUN_00409350("OPENbutton",10);
      local_8 = 6;
      piVar1 = (int *)(**(code **)(**(int **)(in_ECX + 0x1630) + 0x34))(local_68);
      (**(code **)(*piVar1 + 0x34))();
      local_8 = 0xffffffff;
      if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_68[0]);
      }
      local_54 = 0xf;
      local_58 = 0;
      local_68[0] = local_68[0] & 0xffffff00;
    }
    else {
      FUN_00409350("OPENbutton",10);
      local_8 = 3;
      piVar1 = (int *)(**(code **)(**(int **)(in_ECX + 0x1630) + 0x34))(local_4c);
      (**(code **)(*piVar1 + 0x38))();
      local_8 = 0xffffffff;
      if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_4c[0]);
      }
      local_38 = 0xf;
      local_3c = 0;
      local_4c[0] = local_4c[0] & 0xffffff00;
      FUN_00409350("messagelog_window",0x11);
      local_8 = 4;
      iVar2 = (**(code **)(**(int **)(in_ECX + 0x1630) + 0x6c))(local_4c);
      (**(code **)(*(int *)(iVar2 + 0x18) + 0x34))();
      local_8 = 0xffffffff;
      if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_4c[0]);
      }
    }
    local_8 = 0xffffffff;
    FUN_0064f170(in_ECX);
  }
  ExceptionList = local_10;
  return 1;
}

