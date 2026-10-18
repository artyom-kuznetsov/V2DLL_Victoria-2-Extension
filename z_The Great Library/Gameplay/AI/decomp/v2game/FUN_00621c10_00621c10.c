// FUN_00621c10 @ 00621c10 body=[[00621c10, 00621ce3] [00621ce7, 00621d34] [00621d38, 00621d90] [00621d94, 00621de1] [00621de5, 00621ea7] [00621eab, 00621f77] [00621f7b, 00621fdd] [00621fe1, 00622040] [00622044, 006220c1] [006220c5, 00622112] [00622116, 00622174] [00622178, 0062220b] [0062220f, 00622257] [0062225b, 0062226b]]


void FUN_00621c10(void)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  int *piVar4;
  char *pcVar5;
  int iVar6;
  int in_ECX;
  char *pcVar7;
  undefined4 uVar8;
  char local_54 [4];
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00bb3bc0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00625000(in_ECX);
  FUN_00625a50(in_ECX,*(int *)(in_ECX + 0x5c) == 1);
  FUN_00627580();
  FUN_0062b620(in_ECX);
  if ((*(int *)(in_ECX + 0x394) == 3) && (*(int *)(*(int *)(DAT_012588e8 + 0xcf8) + 8) == 0)) {
    cVar3 = FUN_0042b440();
    *(uint *)(in_ECX + 0x394) = (uint)(cVar3 != '\0');
  }
  if (*(int *)(in_ECX + 0x394) == 1) {
    FUN_0062bac0(in_ECX);
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    FUN_00409350("war_listbox",0xb);
    local_8 = 0;
    piVar4 = (int *)(**(code **)(**(int **)(in_ECX + 0x4c) + 0x7c))(local_34);
    (**(code **)(*piVar4 + 0x50))();
    local_8 = 0xffffffff;
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_34[0]);
    }
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    FUN_00409350("war_info",8);
    local_8 = 1;
    piVar4 = (int *)(**(code **)(**(int **)(in_ECX + 0x4c) + 0x34))(local_34);
    (**(code **)(*piVar4 + 0x48))(2);
    local_8 = 0xffffffff;
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_34[0]);
    }
  }
  else {
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    FUN_00409350("war_listbox",0xb);
    local_8 = 2;
    piVar4 = (int *)(**(code **)(**(int **)(in_ECX + 0x4c) + 0x7c))(local_34);
    (**(code **)(*piVar4 + 0x54))();
    local_8 = 0xffffffff;
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_34[0]);
    }
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    FUN_00409350("war_info",8);
    local_8 = 3;
    piVar4 = (int *)(**(code **)(**(int **)(in_ECX + 0x4c) + 0x34))(local_34);
    (**(code **)(*piVar4 + 0x48))(1);
    local_8 = 0xffffffff;
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_34[0]);
    }
  }
  local_34[0] = local_34[0] & 0xffffff00;
  local_18 = *(int *)(*(int *)(DAT_012586dc + 0x40) + 0x1c) / 1000;
  local_14 = 0;
  if (*(int *)(in_ECX + 0x394) == 0) {
    if (0 < local_18) {
      do {
        local_20 = 0xf;
        local_24 = 0;
        local_34[0] = local_34[0] & 0xffffff00;
        local_8 = 4;
        pcVar5 = __itoa(local_14,local_54,10);
        pcVar7 = pcVar5;
        do {
          cVar3 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar3 != '\0');
        FUN_00409350(pcVar5,(int)pcVar7 - (int)(pcVar5 + 1));
        local_8 = 5;
        iVar6 = (**(code **)(**(int **)(in_ECX + 0x4c) + 0x6c))(local_34);
        (**(code **)(*(int *)(iVar6 + 0x18) + 0x34))();
        local_8 = 0xffffffff;
        if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_34[0]);
        }
        local_14 = local_14 + 1;
      } while (local_14 < local_18);
    }
    local_8 = 0xffffffff;
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    FUN_00409350("gp_info",7);
    local_8 = 6;
    piVar4 = (int *)(**(code **)(**(int **)(in_ECX + 0x4c) + 0x34))(local_34);
    uVar8 = 2;
  }
  else {
    if (0 < local_18) {
      do {
        local_20 = 0xf;
        local_24 = 0;
        local_34[0] = local_34[0] & 0xffffff00;
        local_8 = 7;
        pcVar5 = __itoa(local_14,local_54,10);
        pcVar7 = pcVar5;
        do {
          cVar3 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar3 != '\0');
        FUN_00409350(pcVar5,(int)pcVar7 - (int)(pcVar5 + 1));
        local_8 = 8;
        iVar6 = (**(code **)(**(int **)(in_ECX + 0x4c) + 0x6c))(local_34);
        (**(code **)(*(int *)(iVar6 + 0x18) + 0x38))();
        local_8 = 0xffffffff;
        if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_34[0]);
        }
        local_14 = local_14 + 1;
      } while (local_14 < local_18);
    }
    local_8 = 0xffffffff;
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    FUN_00409350("gp_info",7);
    local_8 = 9;
    piVar4 = (int *)(**(code **)(**(int **)(in_ECX + 0x4c) + 0x34))(local_34);
    uVar8 = 1;
  }
  (**(code **)(*piVar4 + 0x48))(uVar8);
  local_8 = 0xffffffff;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  if (*(int *)(in_ECX + 0x394) == 2) {
    FUN_0062ee10(in_ECX);
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    FUN_00409350("cb_info_win",0xb);
    local_8 = 10;
    iVar6 = (**(code **)(**(int **)(in_ECX + 0x4c) + 0x6c))(local_34);
    (**(code **)(*(int *)(iVar6 + 0x18) + 0x34))();
    local_8 = 0xffffffff;
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_34[0]);
    }
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    FUN_00409350("cb_info",7);
    local_8 = 0xb;
    piVar4 = (int *)(**(code **)(**(int **)(in_ECX + 0x4c) + 0x34))(local_34);
    uVar8 = 2;
  }
  else {
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    FUN_00409350("cb_info_win",0xb);
    local_8 = 0xc;
    iVar6 = (**(code **)(**(int **)(in_ECX + 0x4c) + 0x6c))(local_34);
    (**(code **)(*(int *)(iVar6 + 0x18) + 0x38))();
    local_8 = 0xffffffff;
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_34[0]);
    }
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    FUN_00409350("cb_info",7);
    local_8 = 0xd;
    piVar4 = (int *)(**(code **)(**(int **)(in_ECX + 0x4c) + 0x34))(local_34);
    uVar8 = 1;
  }
  (**(code **)(*piVar4 + 0x48))(uVar8);
  local_8 = 0xffffffff;
  if (local_20 < 0x10) {
    if (*(int *)(in_ECX + 0x394) == 3) {
      FUN_0062d960(in_ECX);
      local_20 = 0xf;
      local_24 = 0;
      local_34[0] = local_34[0] & 0xffffff00;
      FUN_00409350("crisis_info_win",0xf);
      local_8 = 0xe;
      iVar6 = (**(code **)(**(int **)(in_ECX + 0x4c) + 0x6c))(local_34);
      (**(code **)(*(int *)(iVar6 + 0x18) + 0x34))();
      local_8 = 0xffffffff;
      if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_34[0]);
      }
      local_20 = 0xf;
      local_24 = 0;
      local_34[0] = local_34[0] & 0xffffff00;
      FUN_00409350("crisis_info",0xb);
      local_8 = 0xf;
      piVar4 = (int *)(**(code **)(**(int **)(in_ECX + 0x4c) + 0x34))(local_34);
      (**(code **)(*piVar4 + 0x48))(2);
      uVar1 = local_34[0];
      uVar2 = local_20;
    }
    else {
      local_20 = 0xf;
      local_24 = 0;
      local_34[0] = local_34[0] & 0xffffff00;
      FUN_00409350("crisis_info_win",0xf);
      local_8 = 0x10;
      iVar6 = (**(code **)(**(int **)(in_ECX + 0x4c) + 0x6c))(local_34);
      (**(code **)(*(int *)(iVar6 + 0x18) + 0x38))();
      local_8 = 0xffffffff;
      if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_34[0]);
      }
      local_3c = 0xf;
      local_40 = 0;
      local_50[0] = local_50[0] & 0xffffff00;
      FUN_00409350("crisis_info",0xb);
      local_8 = 0x11;
      piVar4 = (int *)(**(code **)(**(int **)(in_ECX + 0x4c) + 0x34))(local_50);
      (**(code **)(*piVar4 + 0x48))(1);
      uVar1 = local_50[0];
      uVar2 = local_3c;
    }
    if (0xf < uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uVar1);
    }
    ExceptionList = local_10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_34[0]);
}

