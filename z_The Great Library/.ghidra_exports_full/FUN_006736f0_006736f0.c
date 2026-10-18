// FUN_006736f0 @ 006736f0 body=[[006736f0, 0067375d] [00673761, 006737b3] [006737b7, 00673809] [0067380d, 0067385f] [00673863, 006738b5] [006738b9, 006739dd]]


void FUN_006736f0(void)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  undefined1 local_6c [28];
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  int local_18;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b7f1b8;
  local_10 = ExceptionList;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  ExceptionList = &local_10;
  local_18 = in_ECX;
  FUN_00409350("menu_message_settings",0x15);
  local_8 = 0;
  piVar1 = (int *)(**(code **)(**(int **)(in_ECX + 0x1d24) + 0x6c))(local_34);
  local_8 = 0xffffffff;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  FUN_00409350("messagecat_all",0xe);
  local_8 = 1;
  iVar2 = (**(code **)(*piVar1 + 0x48))(local_50);
  local_11 = *(int *)(iVar2 + 0x6c) == 1;
  local_8 = 0xffffffff;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50[0]);
  }
  if (!(bool)local_11) {
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = local_50[0] & 0xffffff00;
    FUN_00409350("messagecat_combat",0x11);
    local_8 = 2;
    iVar2 = (**(code **)(*piVar1 + 0x48))(local_50);
    local_11 = *(int *)(iVar2 + 0x6c) == 1;
    local_8 = 0xffffffff;
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_50[0]);
    }
    if (!(bool)local_11) {
      local_3c = 0xf;
      local_40 = 0;
      local_50[0] = local_50[0] & 0xffffff00;
      FUN_00409350("messagecat_diplomacy",0x14);
      local_8 = 3;
      iVar2 = (**(code **)(*piVar1 + 0x48))(local_50);
      local_11 = *(int *)(iVar2 + 0x6c) == 1;
      local_8 = 0xffffffff;
      if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_50[0]);
      }
      if (!(bool)local_11) {
        local_3c = 0xf;
        local_40 = 0;
        local_50[0] = local_50[0] & 0xffffff00;
        FUN_00409350("messagecat_units",0x10);
        local_8 = 4;
        iVar2 = (**(code **)(*piVar1 + 0x48))(local_50);
        local_11 = *(int *)(iVar2 + 0x6c) == 1;
        local_8 = 0xffffffff;
        if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_50[0]);
        }
        if (!(bool)local_11) {
          FUN_009885d0();
          local_8 = 5;
          iVar2 = (**(code **)(*piVar1 + 0x48))(local_50);
          local_11 = *(int *)(iVar2 + 0x6c) == 1;
          local_8 = 0xffffffff;
          FUN_00408ad0();
          if (local_11 == '\0') {
            FUN_009885d0();
            local_8 = 6;
            iVar2 = (**(code **)(*piVar1 + 0x48))(local_50);
            local_11 = *(int *)(iVar2 + 0x6c) == 1;
            local_8 = 0xffffffff;
            FUN_00408ad0();
            if (local_11 == '\0') {
              FUN_009885d0();
              local_8 = 7;
              iVar2 = (**(code **)(*piVar1 + 0x48))(local_50);
              local_11 = *(int *)(iVar2 + 0x6c) == 1;
              local_8 = 0xffffffff;
              FUN_00408ad0();
              if (local_11 == '\0') {
                FUN_009885d0();
                local_8 = 8;
                (**(code **)(*piVar1 + 0x48))(local_6c);
                FUN_009a8ba0();
                local_8 = 0xffffffff;
                FUN_00408ad0();
                FUN_00672320(6,*(undefined4 *)(local_18 + 0x54),local_18 + 0x17ec,local_18);
              }
            }
          }
        }
      }
    }
  }
  ExceptionList = local_10;
  return;
}

