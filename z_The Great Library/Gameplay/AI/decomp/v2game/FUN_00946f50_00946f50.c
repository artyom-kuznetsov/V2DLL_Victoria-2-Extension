// FUN_00946f50 @ 00946f50 body=[[00946f50, 00946fbc] [00946fc0, 0094701d] [00947021, 0094713b] [0094713f, 00947163] [00947167, 009471d5] [009471d9, 00947208]]


void FUN_00946f50(int *param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  int in_ECX;
  uint local_b8 [4];
  undefined4 local_a8;
  uint local_a4;
  int local_9c;
  uint local_98 [4];
  undefined4 local_88;
  uint local_84;
  uint local_7c [4];
  undefined4 local_6c;
  uint local_68;
  uint local_60 [4];
  undefined4 local_50;
  uint local_4c;
  uint local_44 [4];
  undefined4 local_34;
  uint local_30;
  int local_28;
  int *local_24;
  int *local_20;
  int local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00bab51c;
  local_10 = ExceptionList;
  local_68 = 0xf;
  local_6c = 0;
  local_7c[0] = local_7c[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("setup_goals",0xb);
  local_8 = 0;
  piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 4) + 0x6c))(local_7c);
  local_8 = 0xffffffff;
  local_24 = piVar2;
  if (0xf < local_68) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_7c[0]);
  }
  local_68 = 0xf;
  local_1c = *(int *)(in_ECX + 0x6c) + 0x28;
  local_30 = 0xf;
  local_6c = 0;
  local_7c[0] = local_7c[0] & 0xffffff00;
  local_34 = 0;
  local_44[0] = local_44[0] & 0xffffff00;
  FUN_00409350("wargoal_list",0xc);
  local_8 = 1;
  piVar2 = (int *)(**(code **)(*piVar2 + 0x7c))(local_44);
  local_8 = 0xffffffff;
  local_20 = piVar2;
  if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_44[0]);
  }
  local_30 = 0xf;
  local_34 = 0;
  local_44[0] = local_44[0] & 0xffffff00;
  (**(code **)(*piVar2 + 0x5c))();
  local_18 = 0;
  local_28 = param_1[1] - *param_1 >> 6;
  if (0 < local_28) {
    local_14 = 0;
    do {
      local_9c = FUN_00aae9af(0x70);
      local_8 = 2;
      if (local_9c == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_00948080(local_9c,local_1c,*param_1 + local_14,local_18,0);
      }
      local_8 = 0xffffffff;
      (**(code **)(*piVar2 + 0x10))(uVar3,1);
      cVar1 = FUN_00928eb0();
      if (cVar1 != '\0') {
        local_a4 = 0xf;
        local_a8 = 0;
        local_b8[0] = local_b8[0] & 0xffffff00;
        FUN_00409350("offer_button",0xc);
        local_8 = 3;
        local_4c = 0xf;
        local_50 = 0;
        local_60[0] = local_60[0] & 0xffffff00;
        FUN_00409350("pick_side",9);
        local_8 = CONCAT31(local_8._1_3_,4);
        piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 4) + 0x6c))(local_60);
        piVar2 = (int *)(**(code **)(*piVar2 + 0x34))(local_b8);
        (**(code **)(*piVar2 + 0xbc))();
        if (0xf < local_4c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_60[0]);
        }
        local_8 = 0xffffffff;
        local_4c = 0xf;
        local_50 = 0;
        local_60[0] = local_60[0] & 0xffffff00;
        if (0xf < local_a4) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_b8[0]);
        }
      }
      local_14 = local_14 + 0x40;
      local_18 = local_18 + 1;
      piVar2 = local_20;
    } while (local_18 < local_28);
  }
  local_84 = 0xf;
  local_88 = 0;
  local_98[0] = local_98[0] & 0xffffff00;
  FUN_00409350("message_dialog",0xe);
  local_8 = 5;
  (**(code **)(piVar2[1] + 0x78))(local_98);
  local_8 = 0xffffffff;
  if (0xf < local_84) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_98[0]);
  }
  local_84 = 0xf;
  local_88 = 0;
  local_98[0] = local_98[0] & 0xffffff00;
  (**(code **)(local_24[6] + 0x34))();
  ExceptionList = local_10;
  return;
}

