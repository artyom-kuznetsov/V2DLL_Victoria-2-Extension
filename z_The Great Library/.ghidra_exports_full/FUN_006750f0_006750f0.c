// FUN_006750f0 @ 006750f0 body=[[006750f0, 0067518b] [0067518f, 006751ad] [006751b1, 006751e9] [006751f0, 00675235] [00675239, 006752bf] [006752c3, 00675346] [0067534a, 00675365] [00675369, 006753e6] [006753ea, 00675406] [0067540a, 0067541a] [0067541e, 00675430]]


void FUN_006750f0(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int in_ECX;
  uint local_a4 [4];
  undefined4 local_94;
  uint local_90;
  uint local_88 [4];
  undefined4 local_78;
  uint local_74;
  uint local_6c [4];
  undefined4 local_5c;
  uint local_58;
  int local_50;
  uint local_4c [4];
  undefined4 local_3c;
  uint local_38;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4c676;
  local_10 = ExceptionList;
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  ExceptionList = &local_10;
  local_50 = in_ECX;
  FUN_00409350("games",5);
  local_8 = 0;
  local_58 = 0xf;
  local_5c = 0;
  local_6c[0] = local_6c[0] & 0xffffff00;
  FUN_00409350("menu_save",9);
  local_8 = CONCAT31(local_8._1_3_,1);
  piVar1 = (int *)(**(code **)(**(int **)(in_ECX + 0x1d24) + 0x6c))(local_6c);
  piVar1 = (int *)(**(code **)(*piVar1 + 0x7c))(local_4c);
  puVar2 = (undefined4 *)(**(code **)(*piVar1 + 0x2c))();
  if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_6c[0]);
  }
  local_8 = 0xffffffff;
  local_58 = 0xf;
  local_5c = 0;
  local_6c[0] = local_6c[0] & 0xffffff00;
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_4c[0]);
  }
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  local_74 = 0xf;
  local_78 = 0;
  local_88[0] = local_88[0] & 0xffffff00;
  FUN_00409350(&DAT_00ded94d,0);
  local_8._1_3_ = 0;
  for (piVar1 = (int *)*puVar2; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
    local_8._0_1_ = 2;
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    FUN_00409350(&DAT_00e09e48,4);
    local_8._0_1_ = 3;
    iVar3 = (**(code **)(**(int **)(*piVar1 + 0x20) + 0x48))(local_30);
    local_11 = param_1 == iVar3;
    local_8._0_1_ = 2;
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_30[0]);
    }
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    FUN_00409350(&DAT_00e09e48,4);
    if (local_11 == '\0') {
      local_8 = CONCAT31(local_8._1_3_,5);
      iVar3 = (**(code **)(**(int **)(*piVar1 + 0x20) + 0x48))(local_30);
      if ((*(char *)(iVar3 + 0xe4) == '\0') || (*(char *)(iVar3 + 0x142) != '\0')) {
        *(undefined4 *)(iVar3 + 0x6c) = 0;
        *(undefined4 *)(iVar3 + 0x10c) = 0;
      }
    }
    else {
      local_8 = CONCAT31(local_8._1_3_,4);
      iVar3 = (**(code **)(**(int **)(*piVar1 + 0x20) + 0x48))(local_30);
      FUN_00408ed0(iVar3 + 0x110,0,0xffffffff);
    }
    local_8._0_1_ = 2;
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_30[0]);
    }
  }
  local_8._0_1_ = 2;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("game_name",9);
  local_8._0_1_ = 6;
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  FUN_00409350("menu_save",9);
  local_8._0_1_ = 7;
  piVar1 = (int *)(**(code **)(**(int **)(local_50 + 0x1d24) + 0x6c))(local_4c);
  iVar3 = (**(code **)(*piVar1 + 0x40))(local_30);
  (**(code **)(*(int *)(iVar3 + 0x54) + 0x40))(local_88);
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_4c[0]);
  }
  local_8._0_1_ = 2;
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_90 = 0xf;
  local_94 = 0;
  local_a4[0] = local_a4[0] & 0xffffff00;
  FUN_00409350("game_name",9);
  local_8._0_1_ = 8;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("menu_save",9);
  local_8 = CONCAT31(local_8._1_3_,9);
  piVar1 = (int *)(**(code **)(**(int **)(local_50 + 0x1d24) + 0x6c))(local_30);
  uVar4 = (**(code **)(*piVar1 + 0x40))(local_a4);
  FUN_009b6400(uVar4);
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  if (0xf < local_90) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_a4[0]);
  }
  if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_88[0]);
  }
  ExceptionList = local_10;
  return;
}

