// FUN_00698660 @ 00698660 body=[[00698660, 006986ca] [006986ce, 0069873e] [00698742, 0069878f]]


void FUN_00698660(int param_1)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
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
  puStack_c = &LAB_00b63410;
  local_10 = ExceptionList;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  ExceptionList = &local_10;
  local_14 = in_ECX;
  FUN_00409350("multiplayer_list",0x10);
  local_8 = 0;
  piVar1 = (int *)(**(code **)(**(int **)(in_ECX + 0x34) + 0x7c))(local_30);
  local_8 = 0xffffffff;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  piVar1 = (int *)(**(code **)(*piVar1 + 0x2c))();
  piVar1 = (int *)*piVar1;
  if (piVar1 != (int *)0x0) {
    while( true ) {
      local_38 = 0xf;
      local_3c = 0;
      local_4c[0] = local_4c[0] & 0xffffff00;
      FUN_00409350("button_kick",0xb);
      local_8 = 1;
      iVar2 = (**(code **)(**(int **)(*piVar1 + 0x20) + 0x34))(local_4c);
      local_8 = 0xffffffff;
      if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_4c[0]);
      }
      local_38 = 0xf;
      local_3c = 0;
      local_4c[0] = local_4c[0] & 0xffffff00;
      if (param_1 == iVar2) break;
      piVar1 = (int *)piVar1[2];
      if (piVar1 == (int *)0x0) {
        ExceptionList = local_10;
        return;
      }
    }
    FUN_00696360(local_14,*(undefined4 *)(*piVar1 + 0x2c));
  }
  ExceptionList = local_10;
  return;
}

