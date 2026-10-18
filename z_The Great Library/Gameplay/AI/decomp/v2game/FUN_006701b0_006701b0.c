// FUN_006701b0 @ 006701b0 body=[[006701b0, 00670634] [00670638, 00670653] [00670657, 0067066d] [00670671, 00670687] [0067068b, 006706aa] [006706ae, 006706bd]]


void FUN_006701b0(int param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  uint local_9c [4];
  undefined4 local_8c;
  uint local_88;
  uint local_80 [4];
  undefined4 local_70;
  uint local_6c;
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
  puStack_c = &LAB_00b44d3b;
  local_10 = ExceptionList;
  local_88 = 0xf;
  local_8c = 0;
  local_9c[0] = local_9c[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("messageicon_log",0xf);
  local_8 = 0;
  local_6c = 0xf;
  local_70 = 0;
  local_80[0] = local_80[0] & 0xffffff00;
  FUN_00409350("messageicon_map",0xf);
  local_8._0_1_ = 1;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("messageicon_pause",0x11);
  local_8._0_1_ = 2;
  local_50 = 0xf;
  local_54 = 0;
  local_64[0] = local_64[0] & 0xffffff00;
  FUN_00409350("messageicon_dialog",0x12);
  local_8._0_1_ = 3;
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  FUN_00409350("messageicon_icon",0x10);
  local_8 = CONCAT31(local_8._1_3_,4);
  if (param_2 != '\0') {
    FUN_00448740("_interesting",0xc);
    FUN_00448740("_interesting",0xc);
    FUN_00448740("_interesting",0xc);
    FUN_00448740("_interesting",0xc);
    FUN_00448740("_interesting",0xc);
  }
  if (*(char *)(param_1 + 0xd) == '\0') {
    iVar2 = (**(code **)(**(int **)(in_ECX + 0x20) + 0x48))(local_9c);
    if ((*(char *)(iVar2 + 0xe4) == '\0') || (*(char *)(iVar2 + 0x142) != '\0')) {
      *(undefined4 *)(iVar2 + 0x6c) = 0;
      *(undefined4 *)(iVar2 + 0x10c) = 0;
    }
  }
  else {
    iVar2 = (**(code **)(**(int **)(in_ECX + 0x20) + 0x48))(local_9c);
    *(undefined4 *)(iVar2 + 0x6c) = 1;
    *(undefined4 *)(iVar2 + 0x10c) = 1;
  }
  if (*(char *)(param_1 + 0xc) == '\0') {
    iVar2 = (**(code **)(**(int **)(in_ECX + 0x20) + 0x48))(local_80);
    if ((*(char *)(iVar2 + 0xe4) == '\0') || (*(char *)(iVar2 + 0x142) != '\0')) {
      *(undefined4 *)(iVar2 + 0x6c) = 0;
      *(undefined4 *)(iVar2 + 0x10c) = 0;
    }
  }
  else {
    iVar2 = (**(code **)(**(int **)(in_ECX + 0x20) + 0x48))(local_80);
    *(undefined4 *)(iVar2 + 0x6c) = 1;
    *(undefined4 *)(iVar2 + 0x10c) = 1;
  }
  piVar1 = *(int **)(in_ECX + 0x20);
  if (*(char *)(param_1 + 0x10) == '\0') {
    if (*(char *)(param_1 + 0xe) == '\0') {
      if (*(char *)(param_1 + 0x11) == '\0') {
        iVar2 = (**(code **)(*piVar1 + 0x48))(local_48);
        if ((*(char *)(iVar2 + 0xe4) == '\0') || (*(char *)(iVar2 + 0x142) != '\0')) {
          *(undefined4 *)(iVar2 + 0x6c) = 0;
          *(undefined4 *)(iVar2 + 0x10c) = 0;
        }
        iVar2 = (**(code **)(**(int **)(in_ECX + 0x20) + 0x48))(local_64);
        if ((*(char *)(iVar2 + 0xe4) == '\0') || (*(char *)(iVar2 + 0x142) != '\0')) {
          *(undefined4 *)(iVar2 + 0x6c) = 0;
          *(undefined4 *)(iVar2 + 0x10c) = 0;
        }
        iVar2 = (**(code **)(**(int **)(in_ECX + 0x20) + 0x48))(local_2c);
      }
      else {
        iVar2 = (**(code **)(*piVar1 + 0x48))(local_48);
        *(undefined4 *)(iVar2 + 0x6c) = 1;
        *(undefined4 *)(iVar2 + 0x10c) = 1;
        iVar2 = (**(code **)(**(int **)(in_ECX + 0x20) + 0x48))(local_2c);
        if ((*(char *)(iVar2 + 0xe4) == '\0') || (*(char *)(iVar2 + 0x142) != '\0')) {
          *(undefined4 *)(iVar2 + 0x6c) = 0;
          *(undefined4 *)(iVar2 + 0x10c) = 0;
        }
        iVar2 = (**(code **)(**(int **)(in_ECX + 0x20) + 0x48))(local_64);
      }
      if ((*(char *)(iVar2 + 0xe4) == '\0') || (*(char *)(iVar2 + 0x142) != '\0')) {
        *(undefined4 *)(iVar2 + 0x10c) = 0;
        *(undefined4 *)(iVar2 + 0x6c) = 0;
      }
    }
    else {
      iVar2 = (**(code **)(*piVar1 + 0x48))(local_64);
      *(undefined4 *)(iVar2 + 0x6c) = 1;
      *(undefined4 *)(iVar2 + 0x10c) = 1;
      iVar2 = (**(code **)(**(int **)(in_ECX + 0x20) + 0x48))(local_2c);
      if ((*(char *)(iVar2 + 0xe4) == '\0') || (*(char *)(iVar2 + 0x142) != '\0')) {
        *(undefined4 *)(iVar2 + 0x6c) = 0;
        *(undefined4 *)(iVar2 + 0x10c) = 0;
      }
      iVar2 = (**(code **)(**(int **)(in_ECX + 0x20) + 0x48))(local_48);
      if ((*(char *)(iVar2 + 0xe4) == '\0') || (*(char *)(iVar2 + 0x142) != '\0')) {
        *(undefined4 *)(iVar2 + 0x6c) = 0;
        *(undefined4 *)(iVar2 + 0x10c) = 0;
      }
      *(undefined2 *)(param_1 + 0x10) = 0;
    }
  }
  else {
    iVar2 = (**(code **)(*piVar1 + 0x48))(local_2c);
    *(undefined4 *)(iVar2 + 0x6c) = 1;
    *(undefined4 *)(iVar2 + 0x10c) = 1;
    iVar2 = (**(code **)(**(int **)(in_ECX + 0x20) + 0x48))(local_64);
    if ((*(char *)(iVar2 + 0xe4) == '\0') || (*(char *)(iVar2 + 0x142) != '\0')) {
      *(undefined4 *)(iVar2 + 0x6c) = 0;
      *(undefined4 *)(iVar2 + 0x10c) = 0;
    }
    iVar2 = (**(code **)(**(int **)(in_ECX + 0x20) + 0x48))(local_48);
    if ((*(char *)(iVar2 + 0xe4) == '\0') || (*(char *)(iVar2 + 0x142) != '\0')) {
      *(undefined4 *)(iVar2 + 0x6c) = 0;
      *(undefined4 *)(iVar2 + 0x10c) = 0;
    }
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0x11) = 0;
  }
  iVar2 = in_ECX + 0x68;
  if (param_2 == '\0') {
    iVar2 = in_ECX + 0x30;
  }
  iVar3 = (**(code **)(**(int **)(in_ECX + 0x20) + 0x48))(local_9c);
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))(iVar2);
  iVar3 = (**(code **)(**(int **)(in_ECX + 0x20) + 0x48))(local_64);
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))(iVar2);
  iVar3 = (**(code **)(**(int **)(in_ECX + 0x20) + 0x48))(local_80);
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))(iVar2);
  iVar3 = (**(code **)(**(int **)(in_ECX + 0x20) + 0x48))(local_2c);
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))(iVar2);
  iVar3 = (**(code **)(**(int **)(in_ECX + 0x20) + 0x48))(local_48);
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))(iVar2);
  iVar3 = (**(code **)(**(int **)(in_ECX + 0x20) + 0x48))(local_9c);
  iVar2 = in_ECX + 0xa0;
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))(iVar2);
  iVar3 = (**(code **)(**(int **)(in_ECX + 0x20) + 0x48))(local_64);
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))(iVar2);
  iVar3 = (**(code **)(**(int **)(in_ECX + 0x20) + 0x48))(local_80);
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))(iVar2);
  iVar3 = (**(code **)(**(int **)(in_ECX + 0x20) + 0x48))(local_2c);
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))(iVar2);
  iVar3 = (**(code **)(**(int **)(in_ECX + 0x20) + 0x48))(local_48);
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))(iVar2);
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
  local_50 = 0xf;
  local_54 = 0;
  local_64[0] = local_64[0] & 0xffffff00;
  if (local_18 < 0x10) {
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_80[0]);
    }
    local_6c = 0xf;
    local_70 = 0;
    local_80[0] = local_80[0] & 0xffffff00;
    if (local_88 < 0x10) {
      ExceptionList = local_10;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_9c[0]);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_2c[0]);
}

