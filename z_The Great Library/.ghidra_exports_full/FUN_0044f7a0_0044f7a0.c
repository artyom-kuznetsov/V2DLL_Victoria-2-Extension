// FUN_0044f7a0 @ 0044f7a0 body=[[0044f7a0, 0044f81f] [0044f823, 0044f87c] [0044f880, 0044f8cf] [0044f8d3, 0044f926] [0044f92a, 0044f97d] [0044f981, 0044f9d4] [0044f9d8, 0044fa2b] [0044fa2f, 0044fa82] [0044fa86, 0044fad9] [0044fadd, 0044fb30] [0044fb34, 0044fb87] [0044fb8b, 0044fbde] [0044fbe2, 0044fc35] [0044fc39, 0044fc8c] [0044fc90, 0044fce3] [0044fce7, 0044fd36] [0044fd3a, 0044fd7f] [0044fd83, 0044fe19]]


/* WARNING: Removing unreachable block (ram,0x0044fdb5) */
/* WARNING: Removing unreachable block (ram,0x0044fdc9) */

undefined4 FUN_0044f7a0(void)

{
  undefined4 uVar1;
  int iVar2;
  int in_ECX;
  int *piVar3;
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  int *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b93a88;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(int **)(in_ECX + 8) != (int *)0x0) {
    ExceptionList = &local_10;
    (**(code **)(**(int **)(in_ECX + 8) + 0x50))();
    *(undefined4 *)(in_ECX + 8) = 0;
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  FUN_00409350("message_filters",0xf);
  local_8 = 0;
  uVar1 = (**(code **)(*DAT_01258a80 + 0x2c))(local_50,*(undefined4 *)(in_ECX + 4));
  local_8 = 0xffffffff;
  *(undefined4 *)(in_ECX + 8) = uVar1;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50[0]);
  }
  if (*(int *)(in_ECX + 8) == 0) {
    ExceptionList = local_10;
    return 0;
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  FUN_00409350("close_button",0xc);
  local_8 = 1;
  iVar2 = (**(code **)(**(int **)(in_ECX + 8) + 0x34))(local_50);
  (**(code **)(*(int *)(iVar2 + 0x54) + 4))(in_ECX + 0x38);
  local_8 = 0xffffffff;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50[0]);
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  FUN_00409350("filter_deselect",0xf);
  local_8 = 2;
  iVar2 = (**(code **)(**(int **)(in_ECX + 8) + 0x34))(local_50);
  (**(code **)(*(int *)(iVar2 + 0x54) + 4))(in_ECX + 100);
  local_8 = 0xffffffff;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50[0]);
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  FUN_00409350("filter_bestguess",0x10);
  local_8 = 3;
  iVar2 = (**(code **)(**(int **)(in_ECX + 8) + 0x34))(local_50);
  (**(code **)(*(int *)(iVar2 + 0x54) + 4))(in_ECX + 0x90);
  local_8 = 0xffffffff;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50[0]);
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  FUN_00409350("filter_enemies",0xe);
  local_8 = 4;
  iVar2 = (**(code **)(**(int **)(in_ECX + 8) + 0x34))(local_50);
  (**(code **)(*(int *)(iVar2 + 0x54) + 4))(in_ECX + 0xbc);
  local_8 = 0xffffffff;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50[0]);
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  FUN_00409350("filter_allies",0xd);
  local_8 = 5;
  iVar2 = (**(code **)(**(int **)(in_ECX + 8) + 0x34))(local_50);
  (**(code **)(*(int *)(iVar2 + 0x54) + 4))(in_ECX + 0xe8);
  local_8 = 0xffffffff;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50[0]);
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  FUN_00409350("filter_neighbours",0x11);
  local_8 = 6;
  iVar2 = (**(code **)(**(int **)(in_ECX + 8) + 0x34))(local_50);
  (**(code **)(*(int *)(iVar2 + 0x54) + 4))(in_ECX + 0x114);
  local_8 = 0xffffffff;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50[0]);
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  FUN_00409350("filter_sphere",0xd);
  local_8 = 7;
  iVar2 = (**(code **)(**(int **)(in_ECX + 8) + 0x34))(local_50);
  (**(code **)(*(int *)(iVar2 + 0x54) + 4))(in_ECX + 0x140);
  local_8 = 0xffffffff;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50[0]);
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  FUN_00409350("filter_north_america",0x14);
  local_8 = 8;
  iVar2 = (**(code **)(**(int **)(in_ECX + 8) + 0x34))(local_50);
  (**(code **)(*(int *)(iVar2 + 0x54) + 4))(in_ECX + 0x16c);
  local_8 = 0xffffffff;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50[0]);
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  FUN_00409350("filter_south_america",0x14);
  local_8 = 9;
  iVar2 = (**(code **)(**(int **)(in_ECX + 8) + 0x34))(local_50);
  (**(code **)(*(int *)(iVar2 + 0x54) + 4))(in_ECX + 0x198);
  local_8 = 0xffffffff;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50[0]);
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  FUN_00409350("filter_europe",0xd);
  local_8 = 10;
  iVar2 = (**(code **)(**(int **)(in_ECX + 8) + 0x34))(local_50);
  (**(code **)(*(int *)(iVar2 + 0x54) + 4))(in_ECX + 0x1c4);
  local_8 = 0xffffffff;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50[0]);
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  FUN_00409350("filter_africa",0xd);
  local_8 = 0xb;
  iVar2 = (**(code **)(**(int **)(in_ECX + 8) + 0x34))(local_50);
  (**(code **)(*(int *)(iVar2 + 0x54) + 4))(in_ECX + 0x1f0);
  local_8 = 0xffffffff;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50[0]);
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  FUN_00409350("filter_asia",0xb);
  local_8 = 0xc;
  iVar2 = (**(code **)(**(int **)(in_ECX + 8) + 0x34))(local_50);
  (**(code **)(*(int *)(iVar2 + 0x54) + 4))(in_ECX + 0x21c);
  local_8 = 0xffffffff;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50[0]);
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  FUN_00409350("filter_oceania",0xe);
  local_8 = 0xd;
  iVar2 = (**(code **)(**(int **)(in_ECX + 8) + 0x34))(local_50);
  (**(code **)(*(int *)(iVar2 + 0x54) + 4))(in_ECX + 0x248);
  local_8 = 0xffffffff;
  if (local_3c < 0x10) {
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = local_50[0] & 0xffffff00;
    FUN_00409350("sort_name",9);
    local_8 = 0xe;
    iVar2 = (**(code **)(**(int **)(in_ECX + 8) + 0x34))(local_50);
    (**(code **)(*(int *)(iVar2 + 0x54) + 4))(in_ECX + 0x274);
    local_8 = 0xffffffff;
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_50[0]);
    }
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = local_50[0] & 0xffffff00;
    FUN_00409350("sort_selected",0xd);
    local_8 = 0xf;
    iVar2 = (**(code **)(**(int **)(in_ECX + 8) + 0x34))(local_50);
    (**(code **)(*(int *)(iVar2 + 0x54) + 4))(in_ECX + 0x2a0);
    local_8 = 0xffffffff;
    if (local_3c < 0x10) {
      local_20 = 0xf;
      local_24 = 0;
      local_34[0] = local_34[0] & 0xffffff00;
      FUN_00409350("message_filters",0xf);
      local_8 = 0x10;
      (**(code **)(*(int *)(*(int *)(in_ECX + 8) + 0x18) + 0x78))(local_34);
      local_8 = 0xffffffff;
      if (local_20 < 0x10) {
        local_20 = 0xf;
        local_24 = 0;
        local_34[0] = local_34[0] & 0xffffff00;
        (**(code **)(*(int *)(*(int *)(in_ECX + 8) + 0x18) + 0x38))();
        piVar3 = (int *)(in_ECX + 0x2d4);
        local_14 = 0;
        do {
          if (*piVar3 != piVar3[1]) {
            piVar3[1] = *piVar3;
          }
          local_18 = piVar3;
          FUN_0044fe40(in_ECX,local_14,0,1);
          local_14 = local_14 + 1;
          piVar3 = piVar3 + 4;
        } while (local_14 < 0xb);
        local_18 = piVar3;
        FUN_00450280(in_ECX);
        ExceptionList = local_10;
        return 1;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_34[0]);
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50[0]);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_50[0]);
}

