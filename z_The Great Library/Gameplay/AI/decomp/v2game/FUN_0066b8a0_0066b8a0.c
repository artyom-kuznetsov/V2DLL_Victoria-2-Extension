// FUN_0066b8a0 @ 0066b8a0 body=[[0066b8a0, 0066b90a] [0066b90e, 0066b9ac] [0066b9b0, 0066b9d8] [0066b9dc, 0066ba34] [0066ba3a, 0066baee] [0066baf2, 0066bbad] [0066bbb1, 0066bbd1] [0066bbd5, 0066bbe7]]


void FUN_0066b8a0(int param_1)

{
  int *piVar1;
  char cVar2;
  undefined4 *puVar3;
  int in_ECX;
  int iVar4;
  uint local_94 [4];
  undefined4 local_84;
  uint local_80;
  undefined1 local_78 [4];
  undefined1 local_74 [4];
  uint local_70 [4];
  undefined4 local_60;
  uint local_5c;
  uint local_54 [4];
  undefined4 local_44;
  uint local_40;
  int local_38;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  char local_15;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00bb2a32;
  local_10 = ExceptionList;
  local_14 = 0;
  piVar1 = *(int **)(in_ECX + 0x1644);
  iVar4 = 0;
  if (piVar1 != (int *)0x0) {
    iVar4 = piVar1[5];
  }
  if (iVar4 == param_1) {
    return;
  }
  ExceptionList = &local_10;
  if (piVar1 == (int *)0x0) goto LAB_0066ba3f;
  ExceptionList = &local_10;
  (**(code **)(*(int *)(*piVar1 + 0x18) + 0x38))();
  iVar4 = *(int *)(in_ECX + 0x1644);
  if (iVar4 != 0) {
    FUN_00780410(iVar4);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(iVar4);
  }
  *(undefined4 *)(in_ECX + 0x1644) = 0;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  FUN_00409350("messagelog_window",0x11);
  local_8 = 0;
  local_14 = 1;
  iVar4 = (**(code **)(**(int **)(in_ECX + 0x1630) + 0x6c))(local_34);
  if (*(char *)(iVar4 + 0x67) == '\0') {
    local_40 = 0xf;
    local_44 = 0;
    local_54[0] = local_54[0] & 0xffffff00;
    FUN_00409350("chat_window",0xb);
    local_8 = 1;
    local_14 = 3;
    iVar4 = (**(code **)(**(int **)(in_ECX + 0x1630) + 0x6c))(local_54);
    local_15 = '\0';
    if (*(char *)(iVar4 + 0x67) != '\0') goto LAB_0066b990;
  }
  else {
LAB_0066b990:
    local_15 = '\x01';
  }
  if ((local_14 & 2) != 0) {
    local_14 = local_14 & 0xfffffffd;
    if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_54[0]);
    }
    local_40 = 0xf;
    local_44 = 0;
    local_54[0] = local_54[0] & 0xffffff00;
  }
  local_8 = 0xffffffff;
  if (((local_14 & 1) != 0) && (local_14 = local_14 & 0xfffffffe, 0xf < local_20)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  if (local_15 != '\0') {
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    FUN_00409350("messagelog_window",0x11);
    local_8 = 2;
    iVar4 = (**(code **)(**(int **)(in_ECX + 0x1630) + 0x6c))(local_34);
    (**(code **)(*(int *)(iVar4 + 0x18) + 0x3c))(&local_38);
    local_8 = 0xffffffff;
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_34[0]);
    }
  }
LAB_0066ba3f:
  local_8 = 0xffffffff;
  if (param_1 != 0) {
    local_38 = FUN_00aae9af(0xae0);
    local_8 = 3;
    if (local_38 == 0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = (undefined4 *)FUN_0077f860(local_38,param_1,in_ECX);
    }
    local_8 = 0xffffffff;
    *(undefined4 **)(in_ECX + 0x1644) = puVar3;
    (**(code **)(*(int *)*puVar3 + 0x2c))();
    (**(code **)(*(int *)**(undefined4 **)(in_ECX + 0x1644) + 0x60))(local_78);
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    FUN_00409350("messagelog_window",0x11);
    local_8 = 4;
    iVar4 = (**(code **)(**(int **)(in_ECX + 0x1630) + 0x6c))(local_34);
    (**(code **)(*(int *)(iVar4 + 0x18) + 0x3c))(local_74);
    local_8 = 0xffffffff;
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_34[0]);
    }
    FUN_00676e10();
    cVar2 = FUN_0066bbf0();
    if (cVar2 != '\0') {
      FUN_0066bd60(*(undefined4 *)(in_ECX + 0xd7c),0);
    }
    FUN_0066f060();
    local_80 = 0xf;
    local_84 = 0;
    local_94[0] = local_94[0] & 0xffffff00;
    FUN_00409350("messagelog_window",0x11);
    local_8 = 5;
    local_14 = local_14 | 4;
    iVar4 = (**(code **)(**(int **)(in_ECX + 0x1630) + 0x6c))(local_94);
    if (*(char *)(iVar4 + 0x67) == '\0') {
      local_5c = 0xf;
      local_60 = 0;
      local_70[0] = local_70[0] & 0xffffff00;
      FUN_00409350("chat_window",0xb);
      local_8 = 6;
      local_14 = local_14 | 8;
      (**(code **)(**(int **)(in_ECX + 0x1630) + 0x6c))(local_70);
    }
    if ((local_14 & 8) != 0) {
      local_14 = local_14 & 0xfffffff7;
      if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_70[0]);
      }
      local_5c = 0xf;
      local_60 = 0;
      local_70[0] = local_70[0] & 0xffffff00;
    }
    if (((local_14 & 4) != 0) && (0xf < local_80)) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_94[0]);
    }
  }
  ExceptionList = local_10;
  return;
}

