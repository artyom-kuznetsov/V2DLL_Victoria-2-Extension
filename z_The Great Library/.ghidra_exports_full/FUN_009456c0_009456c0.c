// FUN_009456c0 @ 009456c0 body=[[009456c0, 00945729] [0094572d, 00945791] [00945795, 009459e1] [009459e5, 00945a08]]


void FUN_009456c0(void)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int in_ECX;
  uint *puVar5;
  undefined1 local_14c [8];
  undefined4 local_144;
  undefined4 local_140;
  undefined1 local_104 [8];
  undefined4 local_fc;
  undefined4 local_f8;
  undefined1 *local_e0;
  undefined4 local_d8;
  int local_d4;
  int local_b8;
  undefined **local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  int local_a8;
  undefined4 local_a4;
  int local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined1 local_7c;
  undefined4 local_78;
  uint local_70 [4];
  undefined4 local_60;
  uint local_5c;
  uint local_54 [4];
  undefined4 local_44;
  uint local_40;
  uint local_38 [4];
  undefined4 local_28;
  uint local_24;
  int *local_1c;
  uint *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00ba2d56;
  local_10 = ExceptionList;
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("wargoal_country_select",0x16);
  local_8 = 0;
  piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 4) + 0x6c))(local_38);
  local_8 = 0xffffffff;
  if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_38[0]);
  }
  local_1c = piVar2 + 6;
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  (**(code **)(*local_1c + 0x38))();
  local_5c = 0xf;
  local_60 = 0;
  local_70[0] = local_70[0] & 0xffffff00;
  FUN_00409350("country_list",0xc);
  local_8 = 1;
  local_14 = (int *)(**(code **)(*piVar2 + 0x7c))(local_70);
  local_8 = 0xffffffff;
  if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_70[0]);
  }
  local_5c = 0xf;
  local_60 = 0;
  local_70[0] = local_70[0] & 0xffffff00;
  (**(code **)(*local_14 + 0x5c))();
  FUN_008a8650(0);
  FUN_008a8650(0);
  local_144 = *(undefined4 *)(DAT_012588e8 + 0xb5c);
  local_140 = *(undefined4 *)(DAT_012588e8 + 0xb60);
  local_fc = *(undefined4 *)(in_ECX + 0xa4);
  local_e0 = local_14c;
  local_f8 = *(undefined4 *)(in_ECX + 0xa8);
  local_18 = (uint *)(DAT_012588e8 + 0xadc);
  piVar2 = (int *)*local_18;
  puVar5 = local_18;
LAB_00945814:
  do {
    do {
      if ((piVar2 < (int *)*puVar5) || ((int *)puVar5[1] <= piVar2)) {
        local_40 = 0xf;
        local_44 = 0;
        local_54[0] = local_54[0] & 0xffffff00;
        FUN_00409350("message_dialog",0xe);
        local_8 = 3;
        (**(code **)(local_14[1] + 0x78))(local_54);
        local_8 = 0xffffffff;
        if (local_40 < 0x10) {
          local_40 = 0xf;
          local_44 = 0;
          local_54[0] = local_54[0] & 0xffffff00;
          (**(code **)(*local_1c + 0x34))();
          ExceptionList = local_10;
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_54[0]);
      }
      local_d8 = *(undefined4 *)(*piVar2 + 0x1c);
      local_d4 = *(int *)(*piVar2 + 0x20);
      piVar2 = piVar2 + 1;
    } while (local_d4 == 0);
    *(undefined4 *)(local_e0 + 0x2c) = local_d8;
    *(int *)(local_e0 + 0x30) = local_d4;
    cVar1 = (**(code **)(*(int *)(*(int *)(*(int *)(in_ECX + 0x6c) + 0x34) + 0xd8) + 0x18))
                      (local_104);
    puVar5 = local_18;
  } while (cVar1 == '\0');
  iVar3 = *(int *)(in_ECX + 0x6c);
  local_9c = *(undefined4 *)(iVar3 + 0x40);
  local_ac = *(undefined4 *)(iVar3 + 0x30);
  local_98 = *(undefined4 *)(iVar3 + 0x44);
  local_94 = *(undefined4 *)(iVar3 + 0x48);
  local_90 = *(undefined4 *)(iVar3 + 0x4c);
  local_8c = *(undefined4 *)(iVar3 + 0x50);
  local_88 = *(undefined4 *)(iVar3 + 0x54);
  local_84 = *(undefined4 *)(iVar3 + 0x58);
  local_80 = *(undefined4 *)(iVar3 + 0x5c);
  local_7c = *(undefined1 *)(iVar3 + 0x60);
  local_a8 = *(int *)(iVar3 + 0x34);
  local_78 = *(undefined4 *)(iVar3 + 100);
  local_a4 = local_d8;
  local_b0 = 0x18d;
  local_b4 = CWarGoal::vftable;
  local_a0 = local_d4;
  if ((int)(*(int *)(local_a8 + 0xac) - *(int *)(local_a8 + 0xa8) & 0xfffffffcU) < 1)
  goto code_r0x0094591d;
  goto LAB_0094594a;
code_r0x0094591d:
  iVar3 = (**(code **)(**(int **)(in_ECX + 0x6c) + 0x20))();
  cVar1 = FUN_00952230(&local_b4,iVar3 == 0x9fa);
  puVar5 = local_18;
  if (cVar1 != '\0') {
LAB_0094594a:
    local_b8 = FUN_00aae9af(0x88);
    local_8 = 2;
    if (local_b8 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_0093f800(local_b8,*(undefined4 *)(in_ECX + 0x68),in_ECX);
    }
    local_8 = 0xffffffff;
    (**(code **)(*local_14 + 0x10))(uVar4,1);
    puVar5 = local_18;
  }
  goto LAB_00945814;
}

