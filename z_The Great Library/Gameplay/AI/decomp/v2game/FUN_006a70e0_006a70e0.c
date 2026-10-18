// FUN_006a70e0 @ 006a70e0 body=[[006a70e0, 006a72c7] [006a72cb, 006a72e6] [006a72ea, 006a7303] [006a7307, 006a7316]]


void FUN_006a70e0(char param_1)

{
  int iVar1;
  int in_ECX;
  int in_EDX;
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
  puStack_c = &LAB_00b44cf8;
  local_10 = ExceptionList;
  local_50 = 0xf;
  local_54 = 0;
  local_64[0] = local_64[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("pause_button",0xc);
  local_8 = 0;
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  FUN_00409350("popup_button",0xc);
  local_8._0_1_ = 1;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("icon_button",0xb);
  local_8 = CONCAT31(local_8._1_3_,2);
  if (param_1 != '\0') {
    FUN_00448740("_interesting",0xc);
    FUN_00448740("_interesting",0xc);
    FUN_00448740("_interesting",0xc);
  }
  iVar1 = (**(code **)(**(int **)(in_EDX + 0x30) + 0x48))(local_48);
  if (iVar1 == in_ECX) {
    iVar1 = (**(code **)(**(int **)(in_EDX + 0x30) + 0x48))(local_64);
    if ((*(char *)(iVar1 + 0xe4) == '\0') || (*(char *)(iVar1 + 0x142) != '\0')) {
      *(undefined4 *)(iVar1 + 0x6c) = 0;
      *(undefined4 *)(iVar1 + 0x10c) = 0;
    }
    iVar1 = (**(code **)(**(int **)(in_EDX + 0x30) + 0x48))(local_2c);
    if ((*(char *)(iVar1 + 0xe4) == '\0') || (*(char *)(iVar1 + 0x142) != '\0')) {
      *(undefined4 *)(iVar1 + 0x6c) = 0;
      *(undefined4 *)(iVar1 + 0x10c) = 0;
    }
  }
  iVar1 = (**(code **)(**(int **)(in_EDX + 0x30) + 0x48))(local_64);
  if (iVar1 == in_ECX) {
    iVar1 = (**(code **)(**(int **)(in_EDX + 0x30) + 0x48))(local_48);
    if ((*(char *)(iVar1 + 0xe4) == '\0') || (*(char *)(iVar1 + 0x142) != '\0')) {
      *(undefined4 *)(iVar1 + 0x6c) = 0;
      *(undefined4 *)(iVar1 + 0x10c) = 0;
    }
    iVar1 = (**(code **)(**(int **)(in_EDX + 0x30) + 0x48))(local_2c);
    if ((*(char *)(iVar1 + 0xe4) == '\0') || (*(char *)(iVar1 + 0x142) != '\0')) {
      *(undefined4 *)(iVar1 + 0x6c) = 0;
      *(undefined4 *)(iVar1 + 0x10c) = 0;
    }
  }
  iVar1 = (**(code **)(**(int **)(in_EDX + 0x30) + 0x48))(local_2c);
  if (iVar1 == in_ECX) {
    iVar1 = (**(code **)(**(int **)(in_EDX + 0x30) + 0x48))(local_48);
    if ((*(char *)(iVar1 + 0xe4) == '\0') || (*(char *)(iVar1 + 0x142) != '\0')) {
      *(undefined4 *)(iVar1 + 0x6c) = 0;
      *(undefined4 *)(iVar1 + 0x10c) = 0;
    }
    iVar1 = (**(code **)(**(int **)(in_EDX + 0x30) + 0x48))(local_64);
    if ((*(char *)(iVar1 + 0xe4) == '\0') || (*(char *)(iVar1 + 0x142) != '\0')) {
      *(undefined4 *)(iVar1 + 0x6c) = 0;
      *(undefined4 *)(iVar1 + 0x10c) = 0;
    }
  }
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48[0]);
  }
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_64[0]);
  }
  ExceptionList = local_10;
  return;
}

