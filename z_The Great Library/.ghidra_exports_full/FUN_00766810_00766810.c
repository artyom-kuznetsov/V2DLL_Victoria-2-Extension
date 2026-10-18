// FUN_00766810 @ 00766810 body=[[00766810, 0076687a] [0076687e, 007668eb] [007668ef, 00766951] [00766955, 00766985]]


void FUN_00766810(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
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
  puStack_c = &LAB_00b427a8;
  local_10 = ExceptionList;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("games",5);
  local_8 = 0;
  piVar1 = (int *)(**(code **)(**(int **)(in_ECX + 0x368) + 0x7c))(local_30);
  local_8 = 0xffffffff;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  puVar2 = (undefined4 *)(**(code **)(*piVar1 + 0x2c))();
  piVar1 = (int *)*puVar2;
  while( true ) {
    if (piVar1 == (int *)0x0) {
      ExceptionList = local_10;
      return;
    }
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    FUN_00409350(&DAT_00e09e48,4);
    local_8 = 1;
    iVar3 = (**(code **)(**(int **)(*piVar1 + 0x20) + 0x48))(local_30);
    local_11 = iVar3 != param_1;
    local_8 = 0xffffffff;
    if (0xf < local_1c) break;
    if ((bool)local_11) {
      local_38 = 0xf;
      local_3c = 0;
      local_4c[0] = local_4c[0] & 0xffffff00;
      FUN_00409350(&DAT_00e09e48,4);
      local_8 = 2;
      iVar3 = (**(code **)(**(int **)(*piVar1 + 0x20) + 0x48))(local_4c);
      if ((*(char *)(iVar3 + 0xe4) == '\0') || (*(char *)(iVar3 + 0x142) != '\0')) {
        *(undefined4 *)(iVar3 + 0x6c) = 0;
        *(undefined4 *)(iVar3 + 0x10c) = 0;
      }
      local_8 = 0xffffffff;
      if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_4c[0]);
      }
      local_38 = 0xf;
      local_3c = 0;
      local_4c[0] = local_4c[0] & 0xffffff00;
      (**(code **)(*(int *)*piVar1 + 0x1c))(0);
    }
    piVar1 = (int *)piVar1[2];
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_30[0]);
}

