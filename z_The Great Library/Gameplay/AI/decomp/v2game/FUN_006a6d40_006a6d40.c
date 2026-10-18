// FUN_006a6d40 @ 006a6d40 body=[[006a6d40, 006a6ffd] [006a7001, 006a701c] [006a7020, 006a7036] [006a703a, 006a7050] [006a7054, 006a7073] [006a7077, 006a7086]]


void FUN_006a6d40(char param_1)

{
  int iVar1;
  int in_ECX;
  int iVar2;
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
  iVar2 = *(int *)(in_ECX + 8);
  local_88 = 0xf;
  local_8c = 0;
  local_9c[0] = local_9c[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("log_button",10);
  local_8 = 0;
  local_6c = 0xf;
  local_70 = 0;
  local_80[0] = local_80[0] & 0xffffff00;
  FUN_00409350("onmap_button",0xc);
  local_8._0_1_ = 1;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("pause_button",0xc);
  local_8._0_1_ = 2;
  local_50 = 0xf;
  local_54 = 0;
  local_64[0] = local_64[0] & 0xffffff00;
  FUN_00409350("popup_button",0xc);
  local_8._0_1_ = 3;
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  FUN_00409350("icon_button",0xb);
  local_8 = CONCAT31(local_8._1_3_,4);
  if (param_1 != '\0') {
    iVar2 = *(int *)(iVar2 + 0x38);
    FUN_00448740("_interesting",0xc);
    FUN_00448740("_interesting",0xc);
    FUN_00448740("_interesting",0xc);
    FUN_00448740("_interesting",0xc);
    FUN_00448740("_interesting",0xc);
  }
  iVar1 = (**(code **)(**(int **)(in_ECX + 0x30) + 0x48))(local_9c);
  *(bool *)(iVar2 + 0xd) = *(int *)(iVar1 + 0x6c) == 1;
  iVar1 = (**(code **)(**(int **)(in_ECX + 0x30) + 0x48))(local_64);
  if (*(int *)(iVar1 + 0x6c) == 1) {
    iVar1 = (**(code **)(**(int **)(in_ECX + 0x30) + 0x48))(local_2c);
    if ((*(char *)(iVar1 + 0xe4) == '\0') || (*(char *)(iVar1 + 0x142) != '\0')) {
      *(undefined4 *)(iVar1 + 0x6c) = 0;
      *(undefined4 *)(iVar1 + 0x10c) = 0;
    }
    iVar1 = (**(code **)(**(int **)(in_ECX + 0x30) + 0x48))(local_48);
    if ((*(char *)(iVar1 + 0xe4) == '\0') || (*(char *)(iVar1 + 0x142) != '\0')) {
      *(undefined4 *)(iVar1 + 0x6c) = 0;
      *(undefined4 *)(iVar1 + 0x10c) = 0;
    }
    *(undefined1 *)(iVar2 + 0xe) = 1;
    *(undefined2 *)(iVar2 + 0x10) = 0;
  }
  else {
    *(undefined1 *)(iVar2 + 0xe) = 0;
  }
  iVar1 = (**(code **)(**(int **)(in_ECX + 0x30) + 0x48))(local_80);
  *(bool *)(iVar2 + 0xc) = *(int *)(iVar1 + 0x6c) == 1;
  iVar1 = (**(code **)(**(int **)(in_ECX + 0x30) + 0x48))(local_2c);
  if (*(int *)(iVar1 + 0x6c) == 1) {
    iVar1 = (**(code **)(**(int **)(in_ECX + 0x30) + 0x48))(local_64);
    if ((*(char *)(iVar1 + 0xe4) == '\0') || (*(char *)(iVar1 + 0x142) != '\0')) {
      *(undefined4 *)(iVar1 + 0x6c) = 0;
      *(undefined4 *)(iVar1 + 0x10c) = 0;
    }
    iVar1 = (**(code **)(**(int **)(in_ECX + 0x30) + 0x48))(local_48);
    if ((*(char *)(iVar1 + 0xe4) == '\0') || (*(char *)(iVar1 + 0x142) != '\0')) {
      *(undefined4 *)(iVar1 + 0x6c) = 0;
      *(undefined4 *)(iVar1 + 0x10c) = 0;
    }
    *(undefined1 *)(iVar2 + 0xe) = 0;
    *(undefined2 *)(iVar2 + 0x10) = 1;
  }
  else {
    *(undefined1 *)(iVar2 + 0x10) = 0;
  }
  iVar1 = (**(code **)(**(int **)(in_ECX + 0x30) + 0x48))(local_48);
  if (*(int *)(iVar1 + 0x6c) == 1) {
    iVar1 = (**(code **)(**(int **)(in_ECX + 0x30) + 0x48))(local_64);
    if ((*(char *)(iVar1 + 0xe4) == '\0') || (*(char *)(iVar1 + 0x142) != '\0')) {
      *(undefined4 *)(iVar1 + 0x6c) = 0;
      *(undefined4 *)(iVar1 + 0x10c) = 0;
    }
    iVar1 = (**(code **)(**(int **)(in_ECX + 0x30) + 0x48))(local_2c);
    if ((*(char *)(iVar1 + 0xe4) == '\0') || (*(char *)(iVar1 + 0x142) != '\0')) {
      *(undefined4 *)(iVar1 + 0x6c) = 0;
      *(undefined4 *)(iVar1 + 0x10c) = 0;
    }
    *(undefined1 *)(iVar2 + 0xe) = 0;
    *(undefined2 *)(iVar2 + 0x10) = 0x100;
  }
  else {
    *(undefined1 *)(iVar2 + 0x11) = 0;
  }
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
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
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
  if (0xf < local_88) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_9c[0]);
  }
  ExceptionList = local_10;
  return;
}

