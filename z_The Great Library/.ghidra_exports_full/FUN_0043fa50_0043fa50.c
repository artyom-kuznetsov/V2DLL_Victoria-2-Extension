// FUN_0043fa50 @ 0043fa50 body=[[0043fa50, 0043fabb] [0043fabf, 0043fb08] [0043fb0c, 0043fb58] [0043fb5c, 0043fba8] [0043fbac, 0043fbf7] [0043fbfb, 0043fc47] [0043fc4b, 0043fdb9]]


undefined4 FUN_0043fa50(void)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int in_ECX;
  undefined4 uStack_60;
  undefined *puStack_5c;
  char *pcStack_58;
  uint *puStack_54;
  uint *puStack_50;
  uint *puStack_4c;
  uint *puStack_48;
  uint *puStack_44;
  uint *puStack_40;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4d878;
  local_10 = ExceptionList;
  puStack_40 = (uint *)0xd;
  puStack_44 = (uint *)0xdf8408;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  puStack_48 = (uint *)0x43fa8e;
  ExceptionList = &local_10;
  FUN_00409350();
  local_8 = 0;
  puStack_40 = local_30;
  puStack_44 = (uint *)0x43fa9f;
  uVar2 = (**(code **)(**(int **)(in_ECX + 0x10) + 0x34))();
  local_8 = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x24) = uVar2;
  if (0xf < local_1c) {
    puStack_44 = (uint *)local_30[0];
                    /* WARNING: Subroutine does not return */
    puStack_48 = (uint *)&UNK_0043fabc;
    FUN_00aae91b();
  }
  puStack_44 = (uint *)0xd;
  puStack_48 = (uint *)0xdf8418;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  puStack_4c = (uint *)0x43fadc;
  FUN_00409350();
  local_8 = 1;
  puStack_44 = local_30;
  puStack_48 = (uint *)0x43faf1;
  uVar2 = (**(code **)(**(int **)(in_ECX + 0x10) + 0x3c))();
  local_8 = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x28) = uVar2;
  if (0xf < local_1c) {
    puStack_48 = (uint *)local_30[0];
                    /* WARNING: Subroutine does not return */
    puStack_4c = (uint *)&UNK_0043fb09;
    FUN_00aae91b();
  }
  puStack_48 = (uint *)0x12;
  puStack_4c = (uint *)0xdf8428;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  puStack_50 = (uint *)0x43fb29;
  FUN_00409350();
  local_8 = 2;
  puStack_48 = local_30;
  puStack_4c = (uint *)0x43fb3e;
  uVar2 = (**(code **)(**(int **)(in_ECX + 0x10) + 0x44))();
  local_8 = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x84) = uVar2;
  if (0xf < local_1c) {
    puStack_4c = (uint *)local_30[0];
                    /* WARNING: Subroutine does not return */
    puStack_50 = (uint *)&UNK_0043fb59;
    FUN_00aae91b();
  }
  puStack_4c = (uint *)0x17;
  puStack_50 = (uint *)0xdf843c;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  puStack_54 = (uint *)0x43fb79;
  FUN_00409350();
  local_8 = 3;
  puStack_4c = local_30;
  puStack_50 = (uint *)0x43fb8e;
  uVar2 = (**(code **)(**(int **)(in_ECX + 0x10) + 0x34))();
  local_8 = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x90) = uVar2;
  if (0xf < local_1c) {
    puStack_50 = (uint *)local_30[0];
                    /* WARNING: Subroutine does not return */
    puStack_54 = (uint *)&UNK_0043fba9;
    FUN_00aae91b();
  }
  puStack_50 = (uint *)0x10;
  puStack_54 = (uint *)0xdf8454;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  pcStack_58 = (char *)0x43fbc8;
  FUN_00409350();
  local_8 = 4;
  puStack_50 = local_30;
  puStack_54 = (uint *)0x43fbdd;
  uVar2 = (**(code **)(**(int **)(in_ECX + 0x10) + 0x44))();
  local_8 = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x88) = uVar2;
  if (0xf < local_1c) {
    puStack_54 = (uint *)local_30[0];
                    /* WARNING: Subroutine does not return */
    pcStack_58 = &UNK_0043fbf8;
    FUN_00aae91b();
  }
  puStack_54 = (uint *)0xf;
  pcStack_58 = "unit_panel_attr";
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  puStack_5c = (undefined *)0x43fc18;
  FUN_00409350();
  local_8 = 5;
  puStack_54 = local_30;
  pcStack_58 = (char *)0x43fc2d;
  uVar2 = (**(code **)(**(int **)(in_ECX + 0x10) + 0x44))();
  local_8 = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x8c) = uVar2;
  if (0xf < local_1c) {
    pcStack_58 = (char *)local_30[0];
                    /* WARNING: Subroutine does not return */
    puStack_5c = &UNK_0043fc48;
    FUN_00aae91b();
  }
  if ((((*(int *)(in_ECX + 0x28) != 0) && (*(int *)(in_ECX + 0x84) != 0)) &&
      (*(int *)(in_ECX + 0x90) != 0)) &&
     (((*(int *)(in_ECX + 0x24) != 0 && (*(int *)(in_ECX + 0x88) != 0)) &&
      (*(int *)(in_ECX + 0x8c) != 0)))) {
    pcStack_58 = (char *)0x43fc97;
    FUN_0043e950();
    pcStack_58 = (char *)(in_ECX + 0x58);
    puStack_5c = (undefined *)0x43fca9;
    (**(code **)(*(int *)(*(int *)(in_ECX + 0x24) + 0x54) + 4))();
    puStack_5c = (undefined *)0x0;
    uStack_60 = 0x43fcb4;
    (**(code **)(**(int **)(in_ECX + 0x24) + 0x48))();
    local_14 = (undefined1 *)&uStack_60;
    uStack_60 = *(undefined4 *)(in_ECX + 0xa4);
    FUN_0043f570(local_30);
    local_8 = 6;
    uStack_60 = 0;
    FUN_009a67d0();
    local_8 = 0xffffffff;
    uStack_60 = 0x43fced;
    FUN_00408ad0();
    piVar1 = *(int **)(*(int *)(in_ECX + 0x84) + 0x94);
    uStack_60 = 0x47c35040;
    FUN_00401000();
    uStack_60 = 0x43fd14;
    iVar3 = FUN_00b31c00();
    uStack_60 = 0;
    local_14 = (undefined1 *)__alldiv((longlong)*(int *)(in_ECX + 0xa8) * (longlong)iVar3,1000);
    iVar3 = *piVar1;
    uStack_60 = 0x43fd39;
    uStack_60 = FUN_009cd680();
    (**(code **)(iVar3 + 0x5c))();
    (**(code **)(**(int **)(in_ECX + 0x8c) + 0x104))();
    *(undefined4 *)(in_ECX + 0xac) = 0xffffffff;
    *(undefined4 *)(in_ECX + 0xb0) = 0xffffffff;
    FUN_0043e950();
    (**(code **)(*(int *)(*(int *)(in_ECX + 0x90) + 0x54) + 4))(in_ECX + 0x2c);
    (**(code **)(**(int **)(in_ECX + 0x88) + 0x48))();
    ExceptionList = local_10;
    return 1;
  }
  ExceptionList = local_10;
  return 0;
}

