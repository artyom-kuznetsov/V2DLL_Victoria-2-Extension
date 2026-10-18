// FUN_00673a10 @ 00673a10 body=[[00673a10, 00673a7b] [00673a7f, 00673aea] [00673aee, 00673b48] [00673b4c, 00673ba6] [00673baa, 00673c04] [00673c08, 00673c62] [00673c66, 00673cc0] [00673cc4, 00673d0c] [00673d10, 00673d22]]


void FUN_00673a10(int param_1)

{
  int *piVar1;
  int iVar2;
  uint local_64 [4];
  undefined4 local_54;
  uint local_50;
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
  puStack_c = &LAB_00b44f70;
  local_10 = ExceptionList;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("menu_message_settings",0x15);
  local_8 = 0;
  piVar1 = (int *)(**(code **)(**(int **)(param_1 + 0x1d24) + 0x6c))(local_2c);
  local_8 = 0xffffffff;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  if (piVar1 != (int *)0x0) {
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    FUN_00409350("messagecat_combat",0x11);
    local_8 = 1;
    iVar2 = (**(code **)(*piVar1 + 0x48))(local_48);
    if ((*(char *)(iVar2 + 0xe4) == '\0') || (*(char *)(iVar2 + 0x142) != '\0')) {
      *(undefined4 *)(iVar2 + 0x6c) = 0;
      *(undefined4 *)(iVar2 + 0x10c) = 0;
    }
    local_8 = 0xffffffff;
    if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_48[0]);
    }
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    FUN_00409350("messagecat_diplomacy",0x14);
    local_8 = 2;
    iVar2 = (**(code **)(*piVar1 + 0x48))(local_48);
    if ((*(char *)(iVar2 + 0xe4) == '\0') || (*(char *)(iVar2 + 0x142) != '\0')) {
      *(undefined4 *)(iVar2 + 0x6c) = 0;
      *(undefined4 *)(iVar2 + 0x10c) = 0;
    }
    local_8 = 0xffffffff;
    if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_48[0]);
    }
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    FUN_00409350("messagecat_units",0x10);
    local_8 = 3;
    iVar2 = (**(code **)(*piVar1 + 0x48))(local_48);
    if ((*(char *)(iVar2 + 0xe4) == '\0') || (*(char *)(iVar2 + 0x142) != '\0')) {
      *(undefined4 *)(iVar2 + 0x6c) = 0;
      *(undefined4 *)(iVar2 + 0x10c) = 0;
    }
    local_8 = 0xffffffff;
    if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_48[0]);
    }
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    FUN_00409350("messagecat_provinces",0x14);
    local_8 = 4;
    iVar2 = (**(code **)(*piVar1 + 0x48))(local_48);
    if ((*(char *)(iVar2 + 0xe4) == '\0') || (*(char *)(iVar2 + 0x142) != '\0')) {
      *(undefined4 *)(iVar2 + 0x6c) = 0;
      *(undefined4 *)(iVar2 + 0x10c) = 0;
    }
    local_8 = 0xffffffff;
    if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_48[0]);
    }
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    FUN_00409350("messagecat_events",0x11);
    local_8 = 5;
    iVar2 = (**(code **)(*piVar1 + 0x48))(local_48);
    if ((*(char *)(iVar2 + 0xe4) == '\0') || (*(char *)(iVar2 + 0x142) != '\0')) {
      *(undefined4 *)(iVar2 + 0x6c) = 0;
      *(undefined4 *)(iVar2 + 0x10c) = 0;
    }
    local_8 = 0xffffffff;
    if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_48[0]);
    }
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    FUN_00409350("messagecat_others",0x11);
    local_8 = 6;
    iVar2 = (**(code **)(*piVar1 + 0x48))(local_48);
    if ((*(char *)(iVar2 + 0xe4) == '\0') || (*(char *)(iVar2 + 0x142) != '\0')) {
      *(undefined4 *)(iVar2 + 0x6c) = 0;
      *(undefined4 *)(iVar2 + 0x10c) = 0;
    }
    local_8 = 0xffffffff;
    if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_48[0]);
    }
    local_50 = 0xf;
    local_54 = 0;
    local_64[0] = local_64[0] & 0xffffff00;
    FUN_00409350("messagecat_all",0xe);
    local_8 = 7;
    iVar2 = (**(code **)(*piVar1 + 0x48))(local_64);
    *(undefined4 *)(iVar2 + 0x6c) = 1;
    *(undefined4 *)(iVar2 + 0x10c) = 1;
    if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_64[0]);
    }
  }
  ExceptionList = local_10;
  return;
}

