// FUN_0043d7f0 @ 0043d7f0 body=[[0043d7f0, 0043d870] [0043d874, 0043d8c2] [0043d8c6, 0043d94a] [0043d94e, 0043da61] [0043da65, 0043daad] [0043dab1, 0043db0d] [0043db11, 0043db71] [0043db75, 0043dbc1] [0043dbc5, 0043dc25] [0043dc29, 0043dc74] [0043dc78, 0043dcc0] [0043dcc4, 0043dd2b] [0043dd2f, 0043dd9a] [0043dd9e, 0043ddc9]]


void FUN_0043d7f0(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  int **ppiStack_94;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  char *pcStack_84;
  uint *puStack_80;
  char *pcStack_7c;
  uint *puStack_78;
  uint *puStack_74;
  undefined4 uStack_70;
  uint local_5c [4];
  undefined4 local_4c;
  uint local_48;
  uint local_40 [4];
  undefined4 local_30;
  uint local_2c;
  undefined1 *local_24;
  undefined4 *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b47938;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(int **)(in_ECX + 8) != (int *)0x0) {
    uStack_70 = 0x43d820;
    ExceptionList = &local_10;
    (**(code **)(**(int **)(in_ECX + 8) + 0x50))();
    *(undefined4 *)(in_ECX + 8) = 0;
  }
  uStack_70 = 0x15;
  puStack_74 = (uint *)0xdf82a4;
  local_48 = 0xf;
  local_4c = 0;
  local_5c[0] = local_5c[0] & 0xffffff00;
  puStack_78 = (uint *)0x43d840;
  FUN_00409350();
  local_8 = 0;
  uStack_70 = *(undefined4 *)(in_ECX + 0x18);
  puStack_74 = local_5c;
  puStack_78 = (uint *)0x43d858;
  uVar3 = (**(code **)(*DAT_01258a80 + 0x2c))();
  local_8 = 0xffffffff;
  *(undefined4 *)(in_ECX + 8) = uVar3;
  if (0xf < local_48) {
    puStack_78 = (uint *)local_5c[0];
                    /* WARNING: Subroutine does not return */
    pcStack_7c = &UNK_0043d871;
    FUN_00aae91b();
  }
  if (*(int *)(in_ECX + 8) != 0) {
    puStack_78 = (uint *)0xc;
    pcStack_7c = "close_button";
    local_48 = 0xf;
    local_4c = 0;
    local_5c[0] = local_5c[0] & 0xffffff00;
    puStack_80 = (uint *)0x43d895;
    FUN_00409350();
    local_8 = 1;
    puStack_78 = local_5c;
    pcStack_7c = (char *)0x43d8aa;
    uVar3 = (**(code **)(**(int **)(in_ECX + 8) + 0x34))();
    local_8 = 0xffffffff;
    *(undefined4 *)(in_ECX + 0x1c) = uVar3;
    if (0xf < local_48) {
      pcStack_7c = (char *)local_5c[0];
                    /* WARNING: Subroutine does not return */
      puStack_80 = (uint *)&UNK_0043d8c3;
      FUN_00aae91b();
    }
    puVar1 = *(undefined4 **)(*(int *)(in_ECX + 0x1c) + 0x58);
    local_14 = (int *)(*(int *)(in_ECX + 0x1c) + 0x54);
    while (puVar1 != (undefined4 *)0x0) {
      pcStack_7c = (char *)*puVar1;
      puVar1 = (undefined4 *)puVar1[2];
      puStack_80 = (uint *)0x43d8e8;
      (**(code **)(*local_14 + 8))();
    }
    pcStack_7c = (char *)(in_ECX + 0x28);
    puStack_80 = (uint *)0x43d8fe;
    (**(code **)(*(int *)(*(int *)(in_ECX + 0x1c) + 0x54) + 4))();
    puStack_80 = (uint *)0xf;
    pcStack_84 = "transfer_slider";
    local_48 = 0xf;
    local_4c = 0;
    local_5c[0] = local_5c[0] & 0xffffff00;
    puStack_88 = (undefined *)0x43d91a;
    FUN_00409350();
    local_8 = 2;
    puStack_80 = local_5c;
    pcStack_84 = (char *)0x43d92f;
    uVar3 = (**(code **)(**(int **)(in_ECX + 8) + 0x4c))();
    local_8 = 0xffffffff;
    *(undefined4 *)(in_ECX + 0xac) = uVar3;
    if (0xf < local_48) {
      pcStack_84 = (char *)local_5c[0];
                    /* WARNING: Subroutine does not return */
      puStack_88 = &UNK_0043d94b;
      FUN_00aae91b();
    }
    local_18 = 1000;
    local_1c = 0;
    pcStack_84 = (char *)0x41280000;
    puStack_88 = (undefined *)0x43d96b;
    FUN_00401000();
    pcStack_84 = (char *)0x43d973;
    local_14 = (int *)FUN_00b31c00();
    local_20 = (undefined4 *)(*(int *)(*(int *)(in_ECX + 0xac) + 0x54) + 0x14);
    local_24 = auStack_90;
    ppiStack_94 = &local_14;
    uStack_98 = 0x43d99c;
    FUN_0043d130();
    ppiStack_94 = (int **)0x43d9ac;
    (*(code *)*local_20)();
    iVar2 = *(int *)(in_ECX + 0xac);
    ppiStack_94 = (int **)0x1;
    uStack_98 = 1;
    local_20 = &uStack_9c;
    FUN_00401000(0x3f000000);
    uVar3 = FUN_00b31c00();
    *local_20 = uVar3;
    (**(code **)(*(int *)(iVar2 + 0x54) + 0x1c))();
    (**(code **)(*(int *)(*(int *)(in_ECX + 0xac) + 0x54) + 4))(in_ECX + 0xbc);
    local_48 = 0xf;
    local_4c = 0;
    local_5c[0] = local_5c[0] & 0xffffff00;
    FUN_00409350("left_value",10);
    local_8 = 3;
    uVar3 = (**(code **)(**(int **)(in_ECX + 8) + 0x3c))(local_5c);
    local_8 = 0xffffffff;
    *(undefined4 *)(in_ECX + 0xb0) = uVar3;
    if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_5c[0]);
    }
    local_48 = 0xf;
    local_4c = 0;
    local_5c[0] = local_5c[0] & 0xffffff00;
    FUN_00409350("right_value",0xb);
    local_8 = 4;
    uVar3 = (**(code **)(**(int **)(in_ECX + 8) + 0x3c))(local_5c);
    local_8 = 0xffffffff;
    *(undefined4 *)(in_ECX + 0xb4) = uVar3;
    if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_5c[0]);
    }
    local_48 = 0xf;
    local_4c = 0;
    local_5c[0] = local_5c[0] & 0xffffff00;
    FUN_00409350(&DAT_00df82e4,2);
    local_8 = 5;
    FUN_00408ed0(local_5c,0,0xffffffff);
    FUN_00a5ecc0(local_5c,0);
    local_8 = 0xffffffff;
    if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_5c[0]);
    }
    local_48 = 0xf;
    local_4c = 0;
    local_5c[0] = local_5c[0] & 0xffffff00;
    FUN_00409350(&DAT_00df82e4,2);
    local_8 = 6;
    FUN_00408ed0(local_5c,0,0xffffffff);
    FUN_00a5ecc0(local_5c,0);
    local_8 = 0xffffffff;
    if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_5c[0]);
    }
    local_48 = 0xf;
    local_4c = 0;
    local_5c[0] = local_5c[0] & 0xffffff00;
    FUN_00409350("your_investment",0xf);
    local_8 = 7;
    uVar3 = (**(code **)(**(int **)(in_ECX + 8) + 0x3c))(local_5c);
    local_8 = 0xffffffff;
    *(undefined4 *)(in_ECX + 0xb8) = uVar3;
    if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_5c[0]);
    }
    local_48 = 0xf;
    local_4c = 0;
    local_5c[0] = local_5c[0] & 0xffffff00;
    FUN_00409350(&DAT_00df82e4,2);
    local_8 = 8;
    FUN_00408ed0(local_5c,0,0xffffffff);
    FUN_00a5ecc0(local_5c,0);
    local_8 = 0xffffffff;
    if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_5c[0]);
    }
    local_48 = 0xf;
    local_4c = 0;
    local_5c[0] = local_5c[0] & 0xffffff00;
    FUN_00409350("header",6);
    local_8 = 9;
    uVar3 = (**(code **)(**(int **)(in_ECX + 8) + 0x3c))(local_5c);
    local_8 = 0xffffffff;
    *(undefined4 *)(in_ECX + 0xd4) = uVar3;
    if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_5c[0]);
    }
    local_48 = 0xf;
    local_4c = 0;
    local_5c[0] = local_5c[0] & 0xffffff00;
    FUN_00409350("invest",6);
    local_8 = 10;
    uVar3 = (**(code **)(**(int **)(in_ECX + 8) + 0x34))(local_5c);
    local_8 = 0xffffffff;
    *(undefined4 *)(in_ECX + 0x20) = uVar3;
    if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_5c[0]);
    }
    (**(code **)(*(int *)(*(int *)(in_ECX + 0x20) + 0x54) + 4))(in_ECX + 0x54);
    (**(code **)(**(int **)(in_ECX + 0x20) + 0xbc))();
    local_48 = 0xf;
    local_4c = 0;
    local_5c[0] = local_5c[0] & 0xffffff00;
    FUN_00409350(&DAT_00df8308,3);
    local_8 = 0xb;
    uVar3 = (**(code **)(**(int **)(in_ECX + 8) + 0x34))(local_5c);
    local_8 = 0xffffffff;
    *(undefined4 *)(in_ECX + 0x24) = uVar3;
    if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_5c[0]);
    }
    (**(code **)(*(int *)(*(int *)(in_ECX + 0x24) + 0x54) + 4))(in_ECX + 0x80);
    (**(code **)(**(int **)(in_ECX + 0x24) + 0xb8))();
    local_2c = 0xf;
    local_30 = 0;
    local_40[0] = local_40[0] & 0xffffff00;
    FUN_00409350("invest_project_window",0x15);
    local_8 = 0xc;
    (**(code **)(*(int *)(*(int *)(in_ECX + 8) + 0x18) + 0x78))(local_40);
    local_8 = 0xffffffff;
    if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_40[0]);
    }
    local_2c = 0xf;
    local_30 = 0;
    local_40[0] = local_40[0] & 0xffffff00;
    (**(code **)(*(int *)(*(int *)(in_ECX + 8) + 0x18) + 0x38))();
  }
  ExceptionList = local_10;
  return;
}

