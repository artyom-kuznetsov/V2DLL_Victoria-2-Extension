// FUN_00671e40 @ 00671e40 body=[[00671e40, 00671ead] [00671eb1, 00671f16] [00671f1a, 00671f7a] [00671f7e, 00671fe3] [00671fe7, 0067204e] [00672052, 006720bb] [006720bf, 00672119] [00672130, 00672173] [00672177, 0067231b]]


void FUN_00671e40(int param_1)

{
  int iVar1;
  int in_ECX;
  undefined1 local_4c [28];
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b45010;
  local_10 = ExceptionList;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("messageicon_pause",0x11);
  local_8 = 0;
  iVar1 = (**(code **)(**(int **)(in_ECX + 0x20) + 0x48))(local_30);
  local_11 = iVar1 == param_1;
  local_8 = 0xffffffff;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  if ((bool)local_11) {
    local_1c = 0xf;
    FUN_00409350("messageicon_dialog",0x12);
    local_8 = 1;
    iVar1 = (**(code **)(**(int **)(in_ECX + 0x20) + 0x48))(local_30);
    if ((*(char *)(iVar1 + 0xe4) == '\0') || (*(char *)(iVar1 + 0x142) != '\0')) {
      *(undefined4 *)(iVar1 + 0x6c) = 0;
      *(undefined4 *)(iVar1 + 0x10c) = 0;
    }
    local_8 = 0xffffffff;
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_30[0]);
    }
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    FUN_00409350("messageicon_icon",0x10);
    local_8 = 2;
  }
  else {
    local_1c = 0xf;
    FUN_00409350("messageicon_dialog",0x12);
    local_8 = 3;
    iVar1 = (**(code **)(**(int **)(in_ECX + 0x20) + 0x48))(local_30);
    local_11 = iVar1 == param_1;
    local_8 = 0xffffffff;
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_30[0]);
    }
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    if ((bool)local_11) {
      local_1c = 0xf;
      FUN_00409350("messageicon_pause",0x11);
      local_8 = 4;
      iVar1 = (**(code **)(**(int **)(in_ECX + 0x20) + 0x48))(local_30);
      if ((*(char *)(iVar1 + 0xe4) == '\0') || (*(char *)(iVar1 + 0x142) != '\0')) {
        *(undefined4 *)(iVar1 + 0x6c) = 0;
        *(undefined4 *)(iVar1 + 0x10c) = 0;
      }
      local_8 = 0xffffffff;
      if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_30[0]);
      }
      local_1c = 0xf;
      local_20 = 0;
      local_30[0] = local_30[0] & 0xffffff00;
      FUN_00409350("messageicon_icon",0x10);
      local_8 = 5;
    }
    else {
      local_1c = 0xf;
      FUN_00409350("messageicon_icon",0x10);
      local_8 = 6;
      iVar1 = (**(code **)(**(int **)(in_ECX + 0x20) + 0x48))(local_30);
      local_11 = iVar1 == param_1;
      local_8 = 0xffffffff;
      if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_30[0]);
      }
      local_20 = 0;
      local_30[0] = local_30[0] & 0xffffff00;
      if (!(bool)local_11) {
        local_1c = 0xf;
        FUN_00409350("messageicon_pause_interesting",0x1d);
        local_8 = 9;
        iVar1 = (**(code **)(**(int **)(in_ECX + 0x20) + 0x48))(local_30);
        local_11 = iVar1 == param_1;
        local_8 = 0xffffffff;
        if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_30[0]);
        }
        FUN_009885d0();
        if (local_11 == '\0') {
          local_8 = 0xc;
          iVar1 = (**(code **)(**(int **)(in_ECX + 0x20) + 0x48))(local_30);
          local_11 = iVar1 == param_1;
          local_8 = 0xffffffff;
          FUN_00408ad0();
          if (local_11 == '\0') {
            FUN_009885d0();
            local_8 = 0xf;
            iVar1 = (**(code **)(**(int **)(in_ECX + 0x20) + 0x48))(local_30);
            local_8 = 0xffffffff;
            FUN_00408ad0();
            if (iVar1 != param_1) {
              ExceptionList = local_10;
              return;
            }
            FUN_009885d0();
            local_8 = 0x10;
            (**(code **)(**(int **)(in_ECX + 0x20) + 0x48))(local_30);
            FUN_009a8ba0();
            local_8 = 0xffffffff;
            FUN_00408ad0();
            FUN_009885d0();
            local_8 = 0x11;
            (**(code **)(**(int **)(in_ECX + 0x20) + 0x48))(local_4c);
            FUN_009a8ba0();
          }
          else {
            FUN_009885d0();
            local_8 = 0xd;
            (**(code **)(**(int **)(in_ECX + 0x20) + 0x48))(local_30);
            FUN_009a8ba0();
            local_8 = 0xffffffff;
            FUN_00408ad0();
            FUN_009885d0();
            local_8 = 0xe;
            (**(code **)(**(int **)(in_ECX + 0x20) + 0x48))(local_30);
            FUN_009a8ba0();
          }
        }
        else {
          local_8 = 10;
          (**(code **)(**(int **)(in_ECX + 0x20) + 0x48))(local_30);
          FUN_009a8ba0();
          local_8 = 0xffffffff;
          FUN_00408ad0();
          FUN_009885d0();
          local_8 = 0xb;
          (**(code **)(**(int **)(in_ECX + 0x20) + 0x48))(local_30);
          FUN_009a8ba0();
        }
        FUN_00408ad0();
        ExceptionList = local_10;
        return;
      }
      local_1c = 0xf;
      FUN_00409350("messageicon_pause",0x11);
      local_8 = 7;
      iVar1 = (**(code **)(**(int **)(in_ECX + 0x20) + 0x48))(local_30);
      if ((*(char *)(iVar1 + 0xe4) == '\0') || (*(char *)(iVar1 + 0x142) != '\0')) {
        *(undefined4 *)(iVar1 + 0x6c) = 0;
        *(undefined4 *)(iVar1 + 0x10c) = 0;
      }
      local_8 = 0xffffffff;
      if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_30[0]);
      }
      local_1c = 0xf;
      local_20 = 0;
      local_30[0] = local_30[0] & 0xffffff00;
      FUN_00409350("messageicon_dialog",0x12);
      local_8 = 8;
    }
  }
  iVar1 = (**(code **)(**(int **)(in_ECX + 0x20) + 0x48))(local_30);
  if ((*(char *)(iVar1 + 0xe4) == '\0') || (*(char *)(iVar1 + 0x142) != '\0')) {
    *(undefined4 *)(iVar1 + 0x6c) = 0;
    *(undefined4 *)(iVar1 + 0x10c) = 0;
  }
  if (local_1c < 0x10) {
    ExceptionList = local_10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_30[0]);
}

