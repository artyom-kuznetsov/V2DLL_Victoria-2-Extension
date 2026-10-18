// FUN_0040f820 @ 0040f820 body=[[0040f820, 0040f948] [0040f94c, 0040f99f] [0040f9a3, 0040f9ec] [0040f9f0, 0040fa39] [0040fa3d, 0040fad7] [0040fadb, 0040fb24] [0040fb28, 0040fb90] [0040fb94, 0040fbfc] [0040fc00, 0040fc56] [0040fc5a, 0040fcb0] [0040fcb4, 0040fcfd] [0040fd01, 0040fd4a] [0040fd4e, 0040fd97] [0040fd9b, 0040fde4] [0040fde8, 0040fe31] [0040fe35, 0040fedc] [0040fee0, 0040ff33] [0040ff37, 0040ff8e] [0040ff92, 0040ffe9] [0040ffed, 00410044] [00410048, 0041009f] [004100a3, 004100fa] [004100fe, 00410147] [0041014b, 00410194] [00410198, 004101e1] [004101e5, 0041023c] [00410240, 004102e3] [004102e7, 004103cc] [004103d0, 00410423] [00410427, 004104f3] [004104f7, 00410593]]


undefined4 FUN_0040f820(void)

{
  char cVar1;
  void *pvVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  int *piVar6;
  short *psVar7;
  char *pcVar8;
  int in_ECX;
  uint local_84 [4];
  undefined4 local_74;
  uint local_70;
  char *local_68 [4];
  char *local_58;
  undefined *local_54;
  char *local_50;
  uint local_4c [4];
  undefined4 local_3c;
  uint local_38;
  short local_30;
  short sStack_2e;
  int local_28;
  int *local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b77b28;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(int **)(in_ECX + 0x20) != (int *)0x0) {
    ExceptionList = &local_10;
    (**(code **)(**(int **)(in_ECX + 0x20) + 0x24))();
    (**(code **)(**(int **)(in_ECX + 0x20) + 0x50))();
    pvVar2 = *(void **)(in_ECX + 0x4c);
    if (pvVar2 != *(void **)(in_ECX + 0x50)) {
      FID_conflict__memcpy(pvVar2,*(void **)(in_ECX + 0x50),0);
      *(void **)(in_ECX + 0x50) = pvVar2;
    }
    pvVar2 = *(void **)(in_ECX + 0x3c);
    if (pvVar2 != *(void **)(in_ECX + 0x40)) {
      FID_conflict__memcpy(pvVar2,*(void **)(in_ECX + 0x40),0);
      *(void **)(in_ECX + 0x40) = pvVar2;
    }
  }
  FUN_0040d430(in_ECX);
  iVar4 = DAT_012588e8;
  *(undefined4 *)(in_ECX + 0x3a0) = *(undefined4 *)(DAT_012588e8 + 0xb5c);
  *(undefined4 *)(in_ECX + 0x3a4) = *(undefined4 *)(iVar4 + 0xb60);
  FUN_004123a0(in_ECX);
  FUN_00412650(in_ECX);
  FUN_00412940(in_ECX);
  local_54 = (undefined *)0xf;
  local_58 = (char *)0x0;
  local_68[0] = (char *)((uint)local_68[0] & 0xffffff00);
  FUN_00409350("battleplans_window",0x12);
  local_8 = 0;
  local_24 = (int *)(**(code **)(**(int **)(in_ECX + 0x80) + 0x34))();
  iVar4 = *local_24;
  uVar3 = (**(code **)(**(int **)(in_ECX + 0x80) + 0x3c))();
  uVar3 = (**(code **)(iVar4 + 0x2c))(local_68,uVar3);
  local_8 = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x20) = uVar3;
  if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_68[0]);
  }
  if (*(int *)(in_ECX + 0x20) == 0) {
    ExceptionList = local_10;
    return 0;
  }
  local_54 = (undefined *)0xf;
  local_58 = (char *)0x0;
  local_68[0] = (char *)((uint)local_68[0] & 0xffffff00);
  FUN_00409350("tab_current",0xb);
  local_8 = 1;
  uVar3 = (**(code **)(**(int **)(in_ECX + 0x20) + 0x34))(local_68);
  local_8 = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x6c) = uVar3;
  if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_68[0]);
  }
  local_54 = (undefined *)0xf;
  local_58 = (char *)0x0;
  local_68[0] = (char *)((uint)local_68[0] & 0xffffff00);
  FUN_00409350("tab_historical",0xe);
  local_8 = 2;
  uVar3 = (**(code **)(**(int **)(in_ECX + 0x20) + 0x34))(local_68);
  local_8 = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x70) = uVar3;
  if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_68[0]);
  }
  local_54 = (undefined *)0xf;
  local_58 = (char *)0x0;
  local_68[0] = (char *)((uint)local_68[0] & 0xffffff00);
  FUN_00409350("tab_saved",9);
  local_8 = 3;
  uVar3 = (**(code **)(**(int **)(in_ECX + 0x20) + 0x34))(local_68);
  local_8 = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x74) = uVar3;
  if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_68[0]);
  }
  (**(code **)(*(int *)(*(int *)(in_ECX + 0x6c) + 0x54) + 4))(in_ECX + 0x8c);
  if (*(int *)(in_ECX + 0x70) != 0) {
    (**(code **)(*(int *)(*(int *)(in_ECX + 0x70) + 0x54) + 4))(in_ECX + 0xb8);
  }
  (**(code **)(*(int *)(*(int *)(in_ECX + 0x74) + 0x54) + 4))(in_ECX + 0xe4);
  local_54 = (undefined *)0xf;
  local_58 = (char *)0x0;
  local_68[0] = (char *)((uint)local_68[0] & 0xffffff00);
  FUN_00409350("close_button",0xc);
  local_8 = 4;
  iVar4 = (**(code **)(**(int **)(in_ECX + 0x20) + 0x34))(local_68);
  (**(code **)(*(int *)(iVar4 + 0x54) + 4))(in_ECX + 0x29c);
  local_8 = 0xffffffff;
  if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_68[0]);
  }
  local_54 = (undefined *)0xf;
  local_58 = (char *)0x0;
  local_68[0] = (char *)((uint)local_68[0] & 0xffffff00);
  FUN_00409350("save_confirm",0xc);
  local_8 = 5;
  uVar3 = (**(code **)(**(int **)(in_ECX + 0x20) + 0x34))(local_68);
  local_8 = 0xffffffff;
  *(undefined4 *)(in_ECX + 100) = uVar3;
  if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_68[0]);
  }
  (**(code **)(*(int *)(*(int *)(in_ECX + 100) + 0x54) + 4))(in_ECX + 0x2c8);
  (**(code **)(**(int **)(in_ECX + 100) + 0x38))();
  local_54 = (undefined *)0xf;
  local_58 = (char *)0x0;
  local_68[0] = (char *)((uint)local_68[0] & 0xffffff00);
  FUN_00409350("save_cancel",0xb);
  local_8 = 6;
  uVar3 = (**(code **)(**(int **)(in_ECX + 0x20) + 0x34))(local_68);
  local_8 = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x68) = uVar3;
  if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_68[0]);
  }
  (**(code **)(*(int *)(*(int *)(in_ECX + 0x68) + 0x54) + 4))(in_ECX + 0x2f4);
  (**(code **)(**(int **)(in_ECX + 0x68) + 0x38))();
  local_54 = (undefined *)0xf;
  local_58 = (char *)0x0;
  local_68[0] = (char *)((uint)local_68[0] & 0xffffff00);
  FUN_00409350("save_editbox",0xc);
  local_8 = 7;
  uVar3 = (**(code **)(**(int **)(in_ECX + 0x20) + 0x40))(local_68);
  local_8 = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x78) = uVar3;
  if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_68[0]);
  }
  (**(code **)(**(int **)(in_ECX + 0x78) + 0x38))();
  local_54 = (undefined *)0xf;
  local_58 = (char *)0x0;
  local_68[0] = (char *)((uint)local_68[0] & 0xffffff00);
  FUN_00409350("listbox_plans",0xd);
  local_8 = 8;
  uVar3 = (**(code **)(**(int **)(in_ECX + 0x20) + 0x7c))(local_68);
  local_8 = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x88) = uVar3;
  if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_68[0]);
  }
  (**(code **)(**(int **)(in_ECX + 0x88) + 0x50))();
  local_54 = (undefined *)0xf;
  local_58 = (char *)0x0;
  local_68[0] = (char *)((uint)local_68[0] & 0xffffff00);
  FUN_00409350("actions_list_current",0x14);
  local_8 = 9;
  uVar3 = (**(code **)(**(int **)(in_ECX + 0x20) + 0x6c))(local_68);
  local_8 = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x24) = uVar3;
  if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_68[0]);
  }
  local_54 = (undefined *)0xf;
  local_58 = (char *)0x0;
  local_68[0] = (char *)((uint)local_68[0] & 0xffffff00);
  FUN_00409350("actions_list_historical",0x17);
  local_8 = 10;
  uVar3 = (**(code **)(**(int **)(in_ECX + 0x20) + 0x6c))(local_68);
  local_8 = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x28) = uVar3;
  if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_68[0]);
  }
  local_54 = (undefined *)0xf;
  local_58 = (char *)0x0;
  local_68[0] = (char *)((uint)local_68[0] & 0xffffff00);
  FUN_00409350("actions_list_saved",0x12);
  local_8 = 0xb;
  uVar3 = (**(code **)(**(int **)(in_ECX + 0x20) + 0x6c))(local_68);
  local_8 = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x2c) = uVar3;
  if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_68[0]);
  }
  local_54 = (undefined *)0xf;
  local_58 = (char *)0x0;
  local_68[0] = (char *)((uint)local_68[0] & 0xffffff00);
  FUN_00409350("tools",5);
  local_8 = 0xc;
  uVar3 = (**(code **)(**(int **)(in_ECX + 0x20) + 0x6c))(local_68);
  local_8 = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x30) = uVar3;
  if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_68[0]);
  }
  local_54 = (undefined *)0xf;
  local_58 = (char *)0x0;
  local_68[0] = (char *)((uint)local_68[0] & 0xffffff00);
  FUN_00409350("options_window",0xe);
  local_8 = 0xd;
  uVar3 = (**(code **)(**(int **)(in_ECX + 0x30) + 0x6c))(local_68);
  local_8 = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x34) = uVar3;
  if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_68[0]);
  }
  local_54 = (undefined *)0xf;
  local_58 = (char *)0x0;
  local_68[0] = (char *)((uint)local_68[0] & 0xffffff00);
  FUN_00409350("text_prompt_window",0x12);
  local_8 = 0xe;
  uVar3 = (**(code **)(**(int **)(in_ECX + 0x20) + 0x6c))(local_68);
  local_8 = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x38) = uVar3;
  if (local_54 < 0x10) {
    (**(code **)(*(int *)(*(int *)(in_ECX + 0x24) + 0x18) + 0x38))();
    (**(code **)(*(int *)(*(int *)(in_ECX + 0x28) + 0x18) + 0x38))();
    (**(code **)(*(int *)(*(int *)(in_ECX + 0x2c) + 0x18) + 0x38))();
    (**(code **)(*(int *)(*(int *)(in_ECX + 0x30) + 0x18) + 0x38))();
    (**(code **)(*(int *)(*(int *)(in_ECX + 0x34) + 0x18) + 0x38))();
    (**(code **)(*(int *)(*(int *)(in_ECX + 0x38) + 0x18) + 0x38))();
    local_54 = (undefined *)0xf;
    local_58 = (char *)0x0;
    local_68[0] = (char *)((uint)local_68[0] & 0xffffff00);
    FUN_00409350("new_plan",8);
    local_8 = 0xf;
    iVar4 = (**(code **)(**(int **)(in_ECX + 0x24) + 0x34))(local_68);
    (**(code **)(*(int *)(iVar4 + 0x54) + 4))(in_ECX + 0x110);
    local_8 = 0xffffffff;
    if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_68[0]);
    }
    local_54 = (undefined *)0xf;
    local_58 = (char *)0x0;
    local_68[0] = (char *)((uint)local_68[0] & 0xffffff00);
    FUN_00409350("remove_plan",0xb);
    local_8 = 0x10;
    iVar4 = (**(code **)(**(int **)(in_ECX + 0x24) + 0x34))(local_68);
    (**(code **)(*(int *)(iVar4 + 0x54) + 4))(in_ECX + 0x13c);
    local_8 = 0xffffffff;
    if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_68[0]);
    }
    local_54 = (undefined *)0xf;
    local_58 = (char *)0x0;
    local_68[0] = (char *)((uint)local_68[0] & 0xffffff00);
    FUN_00409350("save_plan",9);
    local_8 = 0x11;
    iVar4 = (**(code **)(**(int **)(in_ECX + 0x24) + 0x34))(local_68);
    (**(code **)(*(int *)(iVar4 + 0x54) + 4))(in_ECX + 0x168);
    local_8 = 0xffffffff;
    if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_68[0]);
    }
    local_54 = (undefined *)0xf;
    local_58 = (char *)0x0;
    local_68[0] = (char *)((uint)local_68[0] & 0xffffff00);
    FUN_00409350("rename_plan",0xb);
    local_8 = 0x12;
    iVar4 = (**(code **)(**(int **)(in_ECX + 0x24) + 0x34))(local_68);
    (**(code **)(*(int *)(iVar4 + 0x54) + 4))(in_ECX + 0x194);
    local_8 = 0xffffffff;
    if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_68[0]);
    }
    local_54 = (undefined *)0xf;
    local_58 = (char *)0x0;
    local_68[0] = (char *)((uint)local_68[0] & 0xffffff00);
    FUN_00409350("load_plan",9);
    local_8 = 0x13;
    iVar4 = (**(code **)(**(int **)(in_ECX + 0x28) + 0x34))(local_68);
    (**(code **)(*(int *)(iVar4 + 0x54) + 4))(in_ECX + 0x1c0);
    local_8 = 0xffffffff;
    if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_68[0]);
    }
    local_54 = (undefined *)0xf;
    local_58 = (char *)0x0;
    local_68[0] = (char *)((uint)local_68[0] & 0xffffff00);
    FUN_00409350("load_plan",9);
    local_8 = 0x14;
    iVar4 = (**(code **)(**(int **)(in_ECX + 0x2c) + 0x34))(local_68);
    (**(code **)(*(int *)(iVar4 + 0x54) + 4))(in_ECX + 0x1ec);
    local_8 = 0xffffffff;
    if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_68[0]);
    }
    local_54 = (undefined *)0xf;
    local_58 = (char *)0x0;
    local_68[0] = (char *)((uint)local_68[0] & 0xffffff00);
    FUN_00409350("delete_plan",0xb);
    local_8 = 0x15;
    iVar4 = (**(code **)(**(int **)(in_ECX + 0x2c) + 0x34))(local_68);
    (**(code **)(*(int *)(iVar4 + 0x54) + 4))(in_ECX + 0x218);
    local_8 = 0xffffffff;
    if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_68[0]);
    }
    local_54 = (undefined *)0xf;
    local_58 = (char *)0x0;
    local_68[0] = (char *)((uint)local_68[0] & 0xffffff00);
    FUN_00409350("marker",6);
    local_8 = 0x16;
    uVar3 = (**(code **)(**(int **)(in_ECX + 0x30) + 0x44))(local_68);
    local_8 = 0xffffffff;
    *(undefined4 *)(in_ECX + 0x5c) = uVar3;
    if (local_54 < 0x10) {
      local_54 = (undefined *)0xf;
      local_58 = (char *)0x0;
      local_68[0] = (char *)((uint)local_68[0] & 0xffffff00);
      FUN_00409350("marker",6);
      local_8 = 0x17;
      uVar3 = (**(code **)(**(int **)(in_ECX + 0x34) + 0x44))(local_68);
      local_8 = 0xffffffff;
      *(undefined4 *)(in_ECX + 0x60) = uVar3;
      if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_68[0]);
      }
      local_54 = (undefined *)0xf;
      local_58 = (char *)0x0;
      local_68[0] = (char *)((uint)local_68[0] & 0xffffff00);
      FUN_00409350("text_editbox",0xc);
      local_8 = 0x18;
      uVar3 = (**(code **)(**(int **)(in_ECX + 0x38) + 0x40))(local_68);
      local_8 = 0xffffffff;
      *(undefined4 *)(in_ECX + 0x7c) = uVar3;
      if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_68[0]);
      }
      local_54 = (undefined *)0xf;
      local_58 = (char *)0x0;
      local_68[0] = (char *)((uint)local_68[0] & 0xffffff00);
      FUN_00409350("apply",5);
      local_8 = 0x19;
      iVar4 = (**(code **)(**(int **)(in_ECX + 0x38) + 0x34))(local_68);
      (**(code **)(*(int *)(iVar4 + 0x54) + 4))(in_ECX + 800);
      local_8 = 0xffffffff;
      if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_68[0]);
      }
      local_14 = 0;
      local_68[0] = "select";
      local_68[1] = "arrows";
      local_68[2] = "borders";
      local_68[3] = "icons";
      local_58 = "colors";
      local_54 = &DAT_00dede68;
      local_50 = "erase";
      FUN_004bf300(7);
      local_18 = 0;
      do {
        pcVar8 = local_68[local_18];
        local_70 = 0xf;
        local_74 = 0;
        local_84[0] = local_84[0] & 0xffffff00;
        pcVar5 = pcVar8;
        do {
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        FUN_00409350(pcVar8,(int)pcVar5 - (int)(pcVar8 + 1));
        local_8 = 0x1a;
        piVar6 = (int *)(**(code **)(**(int **)(in_ECX + 0x30) + 0x34))(local_84);
        iVar4 = local_18;
        local_8 = 0xffffffff;
        local_24 = piVar6;
        if (0xf < local_70) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_84[0]);
        }
        if (piVar6 == (int *)0x0) {
          local_24 = (int *)0x0;
          FUN_004e9b90();
        }
        else {
          (**(code **)(*piVar6 + 0xd4))(local_18);
          (**(code **)(piVar6[0x15] + 4))(in_ECX + 0x244);
          FUN_004e9b90();
          local_18 = iVar4;
        }
        iVar4 = *(int *)(in_ECX + 0x398);
        switch(local_18) {
        case 1:
          iVar4 = *(int *)(iVar4 + 0x48) - *(int *)(iVar4 + 0x44) >> 2;
          break;
        case 2:
          iVar4 = *(int *)(iVar4 + 0x58) - *(int *)(iVar4 + 0x54) >> 2;
          break;
        case 3:
          iVar4 = *(int *)(iVar4 + 0x68) - *(int *)(iVar4 + 100) >> 2;
          break;
        case 4:
          iVar4 = *(int *)(iVar4 + 0x38) - *(int *)(iVar4 + 0x34) >> 2;
          break;
        default:
          iVar4 = 0;
        }
        if (local_14 < iVar4) {
          local_14 = iVar4;
        }
        local_18 = local_18 + 1;
      } while (local_18 < 7);
      if (0 < local_14) {
        local_1c = 0;
        local_20 = 0;
        psVar7 = (short *)(**(code **)(**(int **)(in_ECX + 0x34) + 0x60))(&local_28);
        iVar4 = local_14;
        local_28 = (int)*psVar7;
        FUN_004bf300(local_14);
        local_18 = 0;
        if (0 < iVar4) {
          do {
            local_70 = 0xf;
            local_74 = 0;
            local_84[0] = local_84[0] & 0xffffff00;
            FUN_00409350("battleplan_tool_option_entry",0x1c);
            local_8 = 0x1b;
            piVar6 = (int *)(**(code **)(*DAT_01258a80 + 0xc))(local_84);
            local_8 = 0xffffffff;
            local_24 = piVar6;
            if (0xf < local_70) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b(local_84[0]);
            }
            (**(code **)(*piVar6 + 0x3c))(&local_30);
            iVar4 = local_1c;
            sStack_2e = sStack_2e * (short)local_1c;
            local_30 = ((short)local_20 + 1) * local_30 + (short)local_28;
            (**(code **)(*piVar6 + 200))(CONCAT22(sStack_2e,local_30));
            (**(code **)(piVar6[0x15] + 4))(in_ECX + 0x270);
            (**(code **)(*piVar6 + 0xd4))(local_18);
            local_1c = iVar4 + 1;
            if (6 < local_1c) {
              local_20 = local_20 + 1;
              local_1c = 0;
            }
            local_38 = 0xf;
            local_3c = 0;
            local_4c[0] = local_4c[0] & 0xffffff00;
            pcVar8 = "entry_" + local_18;
            do {
              cVar1 = *pcVar8;
              pcVar8 = pcVar8 + 1;
            } while (cVar1 != '\0');
            FUN_00409350("entry_" + local_18,(int)pcVar8 - (int)("entry_" + local_18 + 1));
            local_8 = 0x1c;
            (**(code **)(**(int **)(in_ECX + 0x34) + 0x58))(local_4c,piVar6);
            local_8 = 0xffffffff;
            if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b(local_4c[0]);
            }
            local_38 = 0xf;
            local_3c = 0;
            local_4c[0] = local_4c[0] & 0xffffff00;
            FUN_0068f390();
            (**(code **)(*local_24 + 0x38))();
            local_18 = local_18 + 1;
          } while (local_18 < local_14);
        }
      }
      (**(code **)(*(int *)(*(int *)(in_ECX + 0x20) + 0x18) + 0x34))();
      *(undefined4 *)(in_ECX + 0x34c) = 0;
      *(undefined1 *)(in_ECX + 0x39c) = 0;
      FUN_0040d870();
      FUN_0040f040(in_ECX);
      FUN_0040f740();
      FUN_0040f4d0();
      ExceptionList = local_10;
      return 1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_68[0]);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_68[0]);
}

