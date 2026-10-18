// FUN_00944ef0 @ 00944ef0 body=[[00944ef0, 00944f59] [00944f5d, 00944fc3] [00944fc7, 00945054] [00945060, 00945269] [0094526d, 00945291]]


void FUN_00944ef0(void)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  int in_ECX;
  undefined4 *puVar7;
  undefined1 local_154 [8];
  undefined4 local_14c;
  undefined4 local_148;
  undefined1 local_10c [24];
  undefined4 local_f4;
  undefined1 *local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_c4;
  int local_c0;
  undefined **local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined1 local_84;
  undefined4 local_80;
  uint local_7c [4];
  undefined4 local_6c;
  uint local_68;
  uint local_60 [4];
  undefined4 local_50;
  uint local_4c;
  uint local_44 [4];
  undefined4 local_34;
  uint local_30;
  undefined4 *local_28;
  int *local_20;
  int local_1c;
  int local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00ba2dc6;
  local_10 = ExceptionList;
  local_68 = 0xf;
  local_6c = 0;
  local_7c[0] = local_7c[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("wargoal_state_select",0x14);
  local_8 = 0;
  piVar4 = (int *)(**(code **)(**(int **)(in_ECX + 4) + 0x6c))(local_7c);
  local_8 = 0xffffffff;
  if (0xf < local_68) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_7c[0]);
  }
  local_20 = piVar4 + 6;
  local_68 = 0xf;
  local_6c = 0;
  local_7c[0] = local_7c[0] & 0xffffff00;
  (**(code **)(*local_20 + 0x38))();
  local_4c = 0xf;
  local_50 = 0;
  local_60[0] = local_60[0] & 0xffffff00;
  FUN_00409350("state_list",10);
  local_8 = 1;
  piVar4 = (int *)(**(code **)(*piVar4 + 0x7c))(local_60);
  local_8 = 0xffffffff;
  local_14 = piVar4;
  if (local_4c < 0x10) {
    local_4c = 0xf;
    local_50 = 0;
    local_60[0] = local_60[0] & 0xffffff00;
    (**(code **)(*piVar4 + 0x5c))();
    FUN_008a8650(0);
    FUN_008a8650(0);
    local_14c = *(undefined4 *)(in_ECX + 0x9c);
    local_148 = *(undefined4 *)(in_ECX + 0xa0);
    local_e8 = local_154;
    local_e0 = *(undefined4 *)(*(int *)(in_ECX + 0x6c) + 0x38);
    local_dc = *(undefined4 *)(*(int *)(in_ECX + 0x6c) + 0x3c);
    iVar5 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0xa8) * 4);
    puVar7 = *(undefined4 **)(iVar5 + 0xd48);
    local_28 = *(undefined4 **)(in_ECX + 0xa4);
    local_1c = iVar5;
    while ((*(undefined4 **)(iVar5 + 0xd48) <= puVar7 && (puVar7 < *(undefined4 **)(iVar5 + 0xd4c)))
          ) {
      local_c4 = *puVar7;
      local_18 = *(int *)(*(int *)(DAT_012587e4 + 4) + puVar7[1] * 4);
      piVar1 = *(int **)(local_18 + 0xe44);
      puVar7 = puVar7 + 2;
      while (local_28 = puVar7, piVar1 != (int *)0x0) {
        iVar2 = *piVar1;
        piVar1 = (int *)piVar1[2];
        local_f4 = 0;
        if ((iVar2 != 0) && ((*(int *)(iVar2 + 0x4c) - *(int *)(iVar2 + 0x48) & 0xfffffffcU) != 0))
        {
          local_f4 = **(undefined4 **)(iVar2 + 0x48);
        }
        cVar3 = (**(code **)(*(int *)(*(int *)(*(int *)(in_ECX + 0x6c) + 0x34) + 0xbc) + 0x18))
                          (local_10c);
        puVar7 = local_28;
        iVar5 = local_1c;
        piVar4 = local_14;
        if (cVar3 != '\0') {
          iVar5 = *(int *)(in_ECX + 0x6c);
          local_b4 = *(undefined4 *)(iVar5 + 0x30);
          local_b0 = *(undefined4 *)(iVar5 + 0x34);
          local_ac = *(undefined4 *)(iVar5 + 0x38);
          local_a8 = *(undefined4 *)(iVar5 + 0x3c);
          local_a4 = *(undefined4 *)(iVar5 + 0x40);
          local_a0 = *(undefined4 *)(iVar5 + 0x44);
          local_9c = *(undefined4 *)(iVar5 + 0x48);
          local_98 = *(undefined4 *)(iVar5 + 0x4c);
          local_90 = *(undefined4 *)(iVar5 + 0x54);
          local_8c = *(undefined4 *)(iVar5 + 0x58);
          local_88 = *(undefined4 *)(iVar5 + 0x5c);
          local_84 = *(undefined1 *)(iVar5 + 0x60);
          local_80 = *(undefined4 *)(iVar5 + 100);
          local_94 = 0;
          local_b8 = 0x18d;
          local_bc = CWarGoal::vftable;
          if ((iVar2 != 0) && ((*(int *)(iVar2 + 0x4c) - *(int *)(iVar2 + 0x48) & 0xfffffffcU) != 0)
             ) {
            local_94 = **(undefined4 **)(iVar2 + 0x48);
          }
          iVar5 = (**(code **)(**(int **)(in_ECX + 0x6c) + 0x20))();
          cVar3 = FUN_00952230(&local_bc,iVar5 == 0x9fa);
          puVar7 = local_28;
          iVar5 = local_1c;
          piVar4 = local_14;
          if (cVar3 != '\0') {
            local_c0 = FUN_00aae9af(0x88);
            local_8 = 2;
            if (local_c0 == 0) {
              uVar6 = 0;
            }
            else {
              uVar6 = FUN_0093f2b0(local_c0,iVar2,in_ECX,*(undefined4 *)(local_18 + 0x1c),
                                   *(undefined4 *)(local_18 + 0x20));
            }
            local_8 = 0xffffffff;
            (**(code **)(*local_14 + 0x10))(uVar6,1);
            puVar7 = local_28;
            iVar5 = local_1c;
            piVar4 = local_14;
          }
        }
      }
    }
    local_30 = 0xf;
    local_34 = 0;
    local_44[0] = local_44[0] & 0xffffff00;
    FUN_00409350("message_dialog",0xe);
    local_8 = 3;
    (**(code **)(piVar4[1] + 0x78))(local_44);
    local_8 = 0xffffffff;
    if (local_30 < 0x10) {
      local_30 = 0xf;
      local_34 = 0;
      local_44[0] = local_44[0] & 0xffffff00;
      (**(code **)(*local_20 + 0x34))();
      ExceptionList = local_10;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_44[0]);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_60[0]);
}

