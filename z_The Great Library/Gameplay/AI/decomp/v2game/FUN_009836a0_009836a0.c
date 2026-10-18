// FUN_009836a0 @ 009836a0 body=[[009836a0, 00983713] [00983717, 00983766] [0098376a, 009837b9] [009837bd, 009838a3] [009838a7, 009838fe] [00983902, 00983959] [0098395d, 009839b4] [009839b8, 00983a0f] [00983a13, 00983a6a] [00983a6e, 00983ca5]]


void FUN_009836a0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  void *pvVar7;
  uint *puVar8;
  uint local_40 [4];
  undefined4 local_30;
  uint local_2c;
  int *local_24;
  uint *local_1c;
  void *local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4a639;
  local_10 = ExceptionList;
  local_2c = 0xf;
  local_30 = 0;
  local_40[0] = local_40[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("life_needs_list",0xf);
  iVar3 = param_1;
  local_8 = 0;
  piVar4 = (int *)(**(code **)(**(int **)(param_1 + 0x20) + 0x7c))(local_40);
  (**(code **)(*piVar4 + 0x5c))();
  local_8 = 0xffffffff;
  if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_40[0]);
  }
  local_2c = 0xf;
  local_30 = 0;
  local_40[0] = local_40[0] & 0xffffff00;
  FUN_00409350("everyday_needs_list",0x13);
  local_8 = 1;
  piVar4 = (int *)(**(code **)(**(int **)(iVar3 + 0x20) + 0x7c))(local_40);
  (**(code **)(*piVar4 + 0x5c))();
  local_8 = 0xffffffff;
  if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_40[0]);
  }
  local_2c = 0xf;
  local_30 = 0;
  local_40[0] = local_40[0] & 0xffffff00;
  FUN_00409350("luxuary_needs_list",0x12);
  local_8 = 2;
  piVar4 = (int *)(**(code **)(**(int **)(iVar3 + 0x20) + 0x7c))(local_40);
  (**(code **)(*piVar4 + 0x5c))();
  local_8 = 0xffffffff;
  if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_40[0]);
  }
  local_18 = *(void **)(iVar3 + 0x34);
  if (local_18 != *(void **)(iVar3 + 0x38)) {
    local_1c = (uint *)0x0;
    FID_conflict__memcpy(local_18,*(void **)(iVar3 + 0x38),0);
    *(int *)(iVar3 + 0x38) = (int)local_1c + (int)local_18;
  }
  local_18 = *(void **)(iVar3 + 0x44);
  if (local_18 != *(void **)(iVar3 + 0x48)) {
    local_1c = (uint *)0x0;
    FID_conflict__memcpy(local_18,*(void **)(iVar3 + 0x48),0);
    *(int *)(iVar3 + 0x48) = (int)local_1c + (int)local_18;
  }
  pvVar7 = *(void **)(iVar3 + 0x54);
  if (pvVar7 != *(void **)(iVar3 + 0x58)) {
    local_1c = (uint *)0x0;
    FID_conflict__memcpy(pvVar7,*(void **)(iVar3 + 0x58),0);
    *(int *)(param_1 + 0x58) = (int)local_1c + (int)pvVar7;
  }
  local_2c = 0xf;
  local_30 = 0;
  local_40[0] = local_40[0] & 0xffffff00;
  FUN_00409350("needs_life_sort_by_goods",0x18);
  iVar3 = param_1;
  local_8 = 3;
  iVar5 = (**(code **)(**(int **)(param_1 + 0x20) + 0x34))(local_40);
  (**(code **)(*(int *)(iVar5 + 0x54) + 4))(iVar3 + 0xa0);
  local_8 = 0xffffffff;
  if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_40[0]);
  }
  local_2c = 0xf;
  local_30 = 0;
  local_40[0] = local_40[0] & 0xffffff00;
  FUN_00409350("needs_life_sort_by_value",0x18);
  local_8 = 4;
  iVar5 = (**(code **)(**(int **)(iVar3 + 0x20) + 0x34))(local_40);
  (**(code **)(*(int *)(iVar5 + 0x54) + 4))(iVar3 + 0xcc);
  local_8 = 0xffffffff;
  if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_40[0]);
  }
  local_2c = 0xf;
  local_30 = 0;
  local_40[0] = local_40[0] & 0xffffff00;
  FUN_00409350("needs_everyday_sort_by_goods",0x1c);
  local_8 = 5;
  iVar5 = (**(code **)(**(int **)(iVar3 + 0x20) + 0x34))(local_40);
  (**(code **)(*(int *)(iVar5 + 0x54) + 4))(iVar3 + 0xf8);
  local_8 = 0xffffffff;
  if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_40[0]);
  }
  local_2c = 0xf;
  local_30 = 0;
  local_40[0] = local_40[0] & 0xffffff00;
  FUN_00409350("needs_everyday_sort_by_value",0x1c);
  local_8 = 6;
  iVar5 = (**(code **)(**(int **)(iVar3 + 0x20) + 0x34))(local_40);
  (**(code **)(*(int *)(iVar5 + 0x54) + 4))(iVar3 + 0x124);
  local_8 = 0xffffffff;
  if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_40[0]);
  }
  local_2c = 0xf;
  local_30 = 0;
  local_40[0] = local_40[0] & 0xffffff00;
  FUN_00409350("needs_luxuary_sort_by_goods",0x1b);
  local_8 = 7;
  iVar5 = (**(code **)(**(int **)(iVar3 + 0x20) + 0x34))(local_40);
  (**(code **)(*(int *)(iVar5 + 0x54) + 4))(iVar3 + 0x150);
  local_8 = 0xffffffff;
  if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_40[0]);
  }
  local_2c = 0xf;
  local_30 = 0;
  local_40[0] = local_40[0] & 0xffffff00;
  FUN_00409350("needs_luxuary_sort_by_value",0x1b);
  local_8 = 8;
  iVar5 = (**(code **)(**(int **)(iVar3 + 0x20) + 0x34))(local_40);
  (**(code **)(*(int *)(iVar5 + 0x54) + 4))(iVar3 + 0x17c);
  local_8 = 0xffffffff;
  if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_40[0]);
  }
  local_1c = (uint *)(DAT_012587f0 + 0xc);
  local_2c = 0xf;
  local_30 = 0;
  local_40[0] = local_40[0] & 0xffffff00;
  local_24 = (int *)*local_1c;
  puVar8 = local_1c;
LAB_00983a90:
  do {
    do {
      if ((local_24 < (int *)*puVar8) || ((int *)puVar8[1] <= local_24)) {
        ExceptionList = local_10;
        return;
      }
      pvVar7 = (void *)*local_24;
      piVar4 = (int *)(*(int *)(*(int *)(DAT_012588e8 + 0xbcc) + 0x3e4) +
                      (uint)*(byte *)(*(int *)((int)pvVar7 + 8) + 0x3a4 +
                                     *(int *)(DAT_012588e8 + 0xbcc)) * 8);
      local_24 = local_24 + 1;
      iVar5 = piVar4[1];
    } while ((iVar5 < 0) || ((iVar5 < 1 && (*piVar4 == 0))));
    local_18 = pvVar7;
    param_1 = FUN_00aae9af(0x40);
    local_8 = 9;
    if (param_1 == 0) {
      local_14 = 0;
    }
    else {
      local_14 = FUN_0097e1c0(param_1,pvVar7);
    }
    local_8 = 0xffffffff;
    puVar1 = *(undefined4 **)(iVar3 + 0x38);
    param_1 = local_14;
    if ((&param_1 < puVar1) && (puVar2 = *(undefined4 **)(iVar3 + 0x34), puVar2 <= &param_1)) {
      if (puVar1 == *(undefined4 **)(iVar3 + 0x3c)) {
        FUN_00a513f0();
      }
      pvVar7 = local_18;
      if (*(undefined4 **)(iVar3 + 0x38) != (undefined4 *)0x0) {
        **(undefined4 **)(iVar3 + 0x38) =
             *(undefined4 *)(*(int *)(iVar3 + 0x34) + ((int)&param_1 - (int)puVar2 >> 2) * 4);
      }
    }
    else {
      if (puVar1 == *(undefined4 **)(iVar3 + 0x3c)) {
        FUN_00a513f0();
      }
      if (*(undefined4 **)(iVar3 + 0x38) != (undefined4 *)0x0) {
        **(undefined4 **)(iVar3 + 0x38) = local_14;
      }
    }
    *(int *)(iVar3 + 0x38) = *(int *)(iVar3 + 0x38) + 4;
    param_1 = FUN_00aae9af(0x40);
    local_8 = 10;
    if (param_1 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = FUN_0097e1c0(param_1,pvVar7);
    }
    local_8 = 0xffffffff;
    puVar1 = *(undefined4 **)(iVar3 + 0x48);
    param_1 = uVar6;
    if (&param_1 < puVar1) {
      puVar2 = *(undefined4 **)(iVar3 + 0x44);
      if (&param_1 < puVar2) goto LAB_00983bd9;
      if (puVar1 == *(undefined4 **)(iVar3 + 0x4c)) {
        FUN_00a513f0();
      }
      if (*(undefined4 **)(iVar3 + 0x48) != (undefined4 *)0x0) {
        **(undefined4 **)(iVar3 + 0x48) =
             *(undefined4 *)(*(int *)(iVar3 + 0x44) + ((int)&param_1 - (int)puVar2 >> 2) * 4);
      }
    }
    else {
LAB_00983bd9:
      if (puVar1 == *(undefined4 **)(iVar3 + 0x4c)) {
        FUN_00a513f0();
      }
      if (*(undefined4 **)(iVar3 + 0x48) != (undefined4 *)0x0) {
        **(undefined4 **)(iVar3 + 0x48) = uVar6;
      }
    }
    *(int *)(iVar3 + 0x48) = *(int *)(iVar3 + 0x48) + 4;
    param_1 = FUN_00aae9af(0x40);
    local_8 = 0xb;
    if (param_1 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_0097e1c0(param_1,local_18);
    }
    local_8 = 0xffffffff;
    puVar1 = *(undefined4 **)(iVar3 + 0x58);
    param_1 = iVar5;
    if (puVar1 <= &param_1) {
LAB_00983c6e:
      if (puVar1 == *(undefined4 **)(iVar3 + 0x5c)) {
        FUN_00a513f0();
      }
      if (*(int **)(iVar3 + 0x58) != (int *)0x0) {
        **(int **)(iVar3 + 0x58) = iVar5;
      }
      *(int *)(iVar3 + 0x58) = *(int *)(iVar3 + 0x58) + 4;
      puVar8 = local_1c;
      goto LAB_00983a90;
    }
    puVar2 = *(undefined4 **)(iVar3 + 0x54);
    if (&param_1 < puVar2) goto LAB_00983c6e;
    if (puVar1 == *(undefined4 **)(iVar3 + 0x5c)) {
      FUN_00a513f0();
    }
    if (*(undefined4 **)(iVar3 + 0x58) != (undefined4 *)0x0) {
      **(undefined4 **)(iVar3 + 0x58) =
           *(undefined4 *)(*(int *)(iVar3 + 0x54) + ((int)&param_1 - (int)puVar2 >> 2) * 4);
    }
    *(int *)(iVar3 + 0x58) = *(int *)(iVar3 + 0x58) + 4;
    puVar8 = local_1c;
  } while( true );
}

