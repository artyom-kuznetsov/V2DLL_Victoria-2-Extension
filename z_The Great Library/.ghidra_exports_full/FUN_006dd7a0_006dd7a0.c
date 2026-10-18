// FUN_006dd7a0 @ 006dd7a0 body=[[006dd7a0, 006dd811] [006dd815, 006dd93d] [006dd941, 006dd9ac] [006dd9b0, 006dd9ff]]


void FUN_006dd7a0(int param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *piVar5;
  uint local_78 [4];
  undefined4 local_68;
  uint local_64;
  uint local_5c [4];
  undefined4 local_4c;
  uint local_48;
  uint local_40 [4];
  undefined4 local_30;
  uint local_2c;
  undefined4 local_24;
  undefined4 *local_20;
  int local_1c;
  int *local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b447aa;
  local_10 = ExceptionList;
  local_14 = 0;
  local_2c = 0xf;
  local_30 = 0;
  local_40[0] = local_40[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("country_modifier_overlappingbox",0x1f);
  local_8 = 0;
  piVar2 = (int *)(**(code **)(**(int **)(param_1 + 0x4c) + 0x9c))(local_40);
  local_8 = 0xffffffff;
  local_18 = piVar2;
  if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_40[0]);
  }
  local_2c = 0xf;
  local_30 = 0;
  local_40[0] = local_40[0] & 0xffffff00;
  (**(code **)(*piVar2 + 0x38))();
  (**(code **)(*piVar2 + 0xc0))();
  local_24 = *(undefined4 *)(DAT_012588e8 + 0xb5c);
  piVar1 = *(int **)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4) +
                    0x4d8);
  while( true ) {
    if (piVar1 == (int *)0x0) {
      (**(code **)(*piVar2 + 0x34))();
      ExceptionList = local_10;
      return;
    }
    piVar2 = (int *)piVar1[2];
    local_1c = *piVar1;
    puVar3 = (undefined4 *)FUN_00aae9af(0x28);
    local_8 = 1;
    local_20 = puVar3;
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      local_48 = 0xf;
      local_4c = 0;
      local_5c[0] = local_5c[0] & 0xffffff00;
      FUN_00409350("country_modifier_item",0x15);
      piVar1 = DAT_01258a80;
      local_8 = CONCAT31(local_8._1_3_,2);
      local_14 = local_14 | 1;
      uVar4 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x3c))();
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *(undefined1 *)(puVar3 + 4) = 0;
      DAT_013f08e0 = DAT_013f08e0 + 1;
      *(undefined1 *)(puVar3 + 5) = 0;
      *(undefined1 *)(puVar3 + 6) = 0;
      puVar3[7] = &PTR_FUN_00e39158;
      local_8 = 6;
      *puVar3 = &PTR_FUN_00e392f0;
      puVar3[7] = &PTR_FUN_00e39320;
      *(undefined1 *)(puVar3 + 9) = 0;
      uVar4 = (**(code **)(*piVar1 + 0x2c))(local_5c,uVar4);
      puVar3[8] = uVar4;
    }
    local_8 = 0xffffffff;
    if ((local_14 & 1) != 0) {
      local_14 = local_14 & 0xfffffffe;
      if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_5c[0]);
      }
      local_48 = 0xf;
      local_4c = 0;
      local_5c[0] = local_5c[0] & 0xffffff00;
    }
    piVar1 = (int *)puVar3[8];
    local_64 = 0xf;
    local_68 = 0;
    local_78[0] = local_78[0] & 0xffffff00;
    FUN_00409350("country_modifier_icon",0x15);
    local_8 = 8;
    piVar5 = (int *)(**(code **)(*piVar1 + 0x44))(local_78);
    (**(code **)(*piVar5 + 0x48))(*(int *)(*(int *)(local_1c + 8) + 0x28) + 2);
    local_8 = 0xffffffff;
    if (0xf < local_64) break;
    local_64 = 0xf;
    local_68 = 0;
    local_78[0] = local_78[0] & 0xffffff00;
    (**(code **)(piVar1[6] + 0x34))();
    (**(code **)(*local_18 + 0xb4))(puVar3,1);
    piVar1 = piVar2;
    piVar2 = local_18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_78[0]);
}

