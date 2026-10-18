// FUN_0061c810 @ 0061c810 body=[[0061c810, 0061c879] [0061c87d, 0061c90a] [0061c90e, 0061c97d] [0061c981, 0061c9fa] [0061c9fe, 0061ca0b]]


void FUN_0061c810(void)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  code *pcVar6;
  int in_ECX;
  undefined4 uVar7;
  uint local_54 [4];
  undefined4 local_44;
  uint local_40;
  uint local_38 [4];
  undefined4 local_28;
  uint local_24;
  int local_1c;
  int local_18;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b45878;
  local_10 = ExceptionList;
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  ExceptionList = &local_10;
  local_18 = in_ECX;
  FUN_00409350("country_listbox",0xf);
  local_8 = 0;
  piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 0x4c) + 0x7c))(local_38);
  local_8 = 0xffffffff;
  if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_38[0]);
  }
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  puVar3 = (undefined4 *)(**(code **)(*piVar2 + 0x2c))();
  piVar2 = (int *)*puVar3;
  do {
    if (piVar2 == (int *)0x0) {
      local_40 = 0xf;
      local_44 = 0;
      local_54[0] = local_54[0] & 0xffffff00;
      FUN_00409350("crisis_info",0xb);
      local_8 = 4;
      local_11 = *(int *)(*(int *)(DAT_012588e8 + 0xcf8) + 8) != 0;
      piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 0x4c) + 0x34))(local_54);
      if (local_11 == '\0') {
        pcVar6 = *(code **)(*piVar2 + 0xbc);
      }
      else {
        pcVar6 = *(code **)(*piVar2 + 0xb8);
      }
      (*pcVar6)();
      if (local_40 < 0x10) {
        ExceptionList = local_10;
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_54[0]);
    }
    iVar1 = *piVar2;
    piVar2 = (int *)piVar2[2];
    local_24 = 0xf;
    local_28 = 0;
    local_38[0] = local_38[0] & 0xffffff00;
    FUN_00409350("country_select",0xe);
    local_8 = 1;
    piVar4 = (int *)(**(code **)(**(int **)(iVar1 + 0x20) + 0x34))(local_38);
    local_1c = *(int *)(local_18 + 0x38c);
    iVar5 = (**(code **)(*piVar4 + 0x80))();
    local_11 = iVar5 == local_1c;
    local_8 = 0xffffffff;
    if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_38[0]);
    }
    local_24 = 0xf;
    local_28 = 0;
    local_38[0] = local_38[0] & 0xffffff00;
    FUN_00409350("country_select",0xe);
    if (local_11 == '\0') {
      local_8 = 3;
      piVar4 = (int *)(**(code **)(**(int **)(iVar1 + 0x20) + 0x34))(local_38);
      uVar7 = 1;
    }
    else {
      local_8 = 2;
      piVar4 = (int *)(**(code **)(**(int **)(iVar1 + 0x20) + 0x34))(local_38);
      uVar7 = 2;
    }
    (**(code **)(*piVar4 + 0x48))(uVar7);
    local_8 = 0xffffffff;
    in_ECX = local_18;
  } while (local_24 < 0x10);
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_38[0]);
}

