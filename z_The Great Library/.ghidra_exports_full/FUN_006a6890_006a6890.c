// FUN_006a6890 @ 006a6890 body=[[006a6890, 006a6bfc] [006a6c00, 006a6c1e] [006a6c22, 006a6c3b] [006a6c3f, 006a6c55] [006a6c59, 006a6c78] [006a6c7c, 006a6c8b]]


void FUN_006a6890(char param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  uint local_ac [4];
  undefined4 local_9c;
  uint local_98;
  uint local_90 [4];
  undefined4 local_80;
  uint local_7c;
  uint local_74 [4];
  undefined4 local_64;
  uint local_60;
  uint local_58 [4];
  undefined4 local_48;
  uint local_44;
  uint local_3c [4];
  undefined4 local_2c;
  uint local_28;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b44d7e;
  local_10 = ExceptionList;
  local_18 = *(int *)(in_ECX + 8);
  local_98 = 0xf;
  local_9c = 0;
  local_ac[0] = local_ac[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("log_button",10);
  local_8 = 0;
  local_60 = 0xf;
  local_64 = 0;
  local_74[0] = local_74[0] & 0xffffff00;
  FUN_00409350("onmap_button",0xc);
  local_8._0_1_ = 1;
  local_44 = 0xf;
  local_48 = 0;
  local_58[0] = local_58[0] & 0xffffff00;
  FUN_00409350("pause_button",0xc);
  local_8._0_1_ = 2;
  local_7c = 0xf;
  local_80 = 0;
  local_90[0] = local_90[0] & 0xffffff00;
  FUN_00409350("popup_button",0xc);
  local_8._0_1_ = 3;
  local_28 = 0xf;
  local_2c = 0;
  local_3c[0] = local_3c[0] & 0xffffff00;
  FUN_00409350("icon_button",0xb);
  local_8 = CONCAT31(local_8._1_3_,4);
  if (param_1 != '\0') {
    local_18 = *(int *)(*(int *)(in_ECX + 8) + 0x38);
    FUN_00448740("_interesting",0xc);
    FUN_00448740("_interesting",0xc);
    FUN_00448740("_interesting",0xc);
    FUN_00448740("_interesting",0xc);
    FUN_00448740("_interesting",0xc);
  }
  local_1c = (**(code **)(**(int **)(in_ECX + 0x30) + 0x48))(local_ac);
  local_20 = (**(code **)(**(int **)(in_ECX + 0x30) + 0x48))(local_74);
  iVar1 = (**(code **)(**(int **)(in_ECX + 0x30) + 0x48))(local_58);
  local_14 = (**(code **)(**(int **)(in_ECX + 0x30) + 0x48))(local_90);
  iVar2 = (**(code **)(**(int **)(in_ECX + 0x30) + 0x48))(local_3c);
  if (*(char *)(local_18 + 0xd) == '\0') {
    if ((*(char *)(local_1c + 0xe4) == '\0') || (*(char *)(local_1c + 0x142) != '\0')) {
      *(undefined4 *)(local_1c + 0x6c) = 0;
      *(undefined4 *)(local_1c + 0x10c) = 0;
    }
  }
  else {
    *(undefined4 *)(local_1c + 0x6c) = 1;
    *(undefined4 *)(local_1c + 0x10c) = 1;
  }
  if (*(char *)(local_18 + 0xc) == '\0') {
    if ((*(char *)(local_20 + 0xe4) == '\0') || (*(char *)(local_20 + 0x142) != '\0')) {
      *(undefined4 *)(local_20 + 0x6c) = 0;
      *(undefined4 *)(local_20 + 0x10c) = 0;
    }
  }
  else {
    *(undefined4 *)(local_20 + 0x6c) = 1;
    *(undefined4 *)(local_20 + 0x10c) = 1;
  }
  if (*(char *)(local_18 + 0x10) == '\0') {
    if (*(char *)(local_18 + 0xe) == '\0') {
      if (*(char *)(local_18 + 0x11) == '\0') {
        if ((*(char *)(iVar2 + 0xe4) == '\0') || (*(char *)(iVar2 + 0x142) != '\0')) {
          *(undefined4 *)(iVar2 + 0x6c) = 0;
          *(undefined4 *)(iVar2 + 0x10c) = 0;
        }
        if ((*(char *)(local_14 + 0xe4) == '\0') || (*(char *)(local_14 + 0x142) != '\0')) {
          *(undefined4 *)(local_14 + 0x6c) = 0;
          *(undefined4 *)(local_14 + 0x10c) = 0;
        }
        if ((*(char *)(iVar1 + 0xe4) == '\0') || (*(char *)(iVar1 + 0x142) != '\0')) {
          *(undefined4 *)(iVar1 + 0x6c) = 0;
          *(undefined4 *)(iVar1 + 0x10c) = 0;
        }
      }
      else {
        *(undefined4 *)(iVar2 + 0x6c) = 1;
        *(undefined4 *)(iVar2 + 0x10c) = 1;
        if ((*(char *)(iVar1 + 0xe4) == '\0') || (*(char *)(iVar1 + 0x142) != '\0')) {
          *(undefined4 *)(iVar1 + 0x6c) = 0;
          *(undefined4 *)(iVar1 + 0x10c) = 0;
        }
        if ((*(char *)(local_14 + 0xe4) == '\0') || (*(char *)(local_14 + 0x142) != '\0')) {
          *(undefined4 *)(local_14 + 0x6c) = 0;
          *(undefined4 *)(local_14 + 0x10c) = 0;
        }
      }
    }
    else {
      *(undefined4 *)(local_14 + 0x6c) = 1;
      *(undefined4 *)(local_14 + 0x10c) = 1;
      if ((*(char *)(iVar1 + 0xe4) == '\0') || (*(char *)(iVar1 + 0x142) != '\0')) {
        *(undefined4 *)(iVar1 + 0x6c) = 0;
        *(undefined4 *)(iVar1 + 0x10c) = 0;
      }
      if ((*(char *)(iVar2 + 0xe4) == '\0') || (*(char *)(iVar2 + 0x142) != '\0')) {
        *(undefined4 *)(iVar2 + 0x6c) = 0;
        *(undefined4 *)(iVar2 + 0x10c) = 0;
      }
      *(undefined2 *)(local_18 + 0x10) = 0;
    }
  }
  else {
    *(undefined4 *)(iVar1 + 0x6c) = 1;
    *(undefined4 *)(iVar1 + 0x10c) = 1;
    if ((*(char *)(local_14 + 0xe4) == '\0') || (*(char *)(local_14 + 0x142) != '\0')) {
      *(undefined4 *)(local_14 + 0x6c) = 0;
      *(undefined4 *)(local_14 + 0x10c) = 0;
    }
    if ((*(char *)(iVar2 + 0xe4) == '\0') || (*(char *)(iVar2 + 0x142) != '\0')) {
      *(undefined4 *)(iVar2 + 0x6c) = 0;
      *(undefined4 *)(iVar2 + 0x10c) = 0;
    }
    *(undefined1 *)(local_18 + 0xe) = 0;
    *(undefined1 *)(local_18 + 0x11) = 0;
  }
  if (param_1 == '\0') {
    iVar3 = in_ECX + 0xd8;
  }
  else {
    iVar3 = in_ECX + 0x110;
  }
  (**(code **)(*(int *)(iVar2 + 0x54) + 4))(iVar3);
  (**(code **)(*(int *)(local_14 + 0x54) + 4))(iVar3);
  (**(code **)(*(int *)(iVar1 + 0x54) + 4))(iVar3);
  if (0xf < local_28) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_3c[0]);
  }
  local_28 = 0xf;
  local_2c = 0;
  local_3c[0] = local_3c[0] & 0xffffff00;
  if (0xf < local_7c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_90[0]);
  }
  local_7c = 0xf;
  local_80 = 0;
  local_90[0] = local_90[0] & 0xffffff00;
  if (local_44 < 0x10) {
    local_44 = 0xf;
    local_48 = 0;
    local_58[0] = local_58[0] & 0xffffff00;
    if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_74[0]);
    }
    local_60 = 0xf;
    local_64 = 0;
    local_74[0] = local_74[0] & 0xffffff00;
    if (local_98 < 0x10) {
      ExceptionList = local_10;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_ac[0]);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_58[0]);
}

