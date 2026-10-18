// FUN_00440d70 @ 00440d70 body=[[00440d70, 00440dd7] [00440ddb, 00440e21] [00440e25, 00440e6b] [00440e6f, 00440eb5] [00440eb9, 00440eff] [00440f03, 00440f49] [00440f4d, 00440f93] [00440f97, 0044116b]]


undefined4 FUN_00440d70(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  undefined8 uVar4;
  undefined *puStack_68;
  char *pcStack_64;
  uint *puStack_60;
  uint *puStack_5c;
  uint *puStack_58;
  uint *puStack_54;
  uint *puStack_50;
  uint *puStack_4c;
  uint *puStack_48;
  uint local_38 [4];
  undefined4 local_28;
  uint local_24;
  int local_1c;
  undefined *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4d828;
  local_10 = ExceptionList;
  puStack_48 = (uint *)0xf;
  puStack_4c = (uint *)0xdf8488;
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  puStack_50 = (uint *)0x440daf;
  ExceptionList = &local_10;
  FUN_00409350();
  local_8 = 0;
  puStack_48 = local_38;
  puStack_4c = (uint *)0x440dc0;
  uVar3 = (**(code **)(**(int **)(in_ECX + 0x10) + 0x34))();
  local_8 = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x28) = uVar3;
  if (0xf < local_24) {
    puStack_4c = (uint *)local_38[0];
                    /* WARNING: Subroutine does not return */
    puStack_50 = (uint *)&UNK_00440dd8;
    FUN_00aae91b();
  }
  puStack_4c = (uint *)0xe;
  puStack_50 = (uint *)0xdf8498;
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  puStack_54 = (uint *)0x440df8;
  FUN_00409350();
  local_8 = 1;
  puStack_4c = local_38;
  puStack_50 = (uint *)0x440e0d;
  uVar3 = (**(code **)(**(int **)(in_ECX + 0x10) + 0x3c))();
  local_8 = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x2c) = uVar3;
  if (0xf < local_24) {
    puStack_50 = (uint *)local_38[0];
                    /* WARNING: Subroutine does not return */
    puStack_54 = (uint *)&UNK_00440e22;
    FUN_00aae91b();
  }
  puStack_50 = (uint *)0xe;
  puStack_54 = (uint *)0xdf84a8;
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  puStack_58 = (uint *)0x440e42;
  FUN_00409350();
  local_8 = 2;
  puStack_50 = local_38;
  puStack_54 = (uint *)0x440e57;
  uVar3 = (**(code **)(**(int **)(in_ECX + 0x10) + 0x3c))();
  local_8 = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x30) = uVar3;
  if (0xf < local_24) {
    puStack_54 = (uint *)local_38[0];
                    /* WARNING: Subroutine does not return */
    puStack_58 = (uint *)&UNK_00440e6c;
    FUN_00aae91b();
  }
  puStack_54 = (uint *)0x13;
  puStack_58 = (uint *)0xdf84b8;
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  puStack_5c = (uint *)0x440e8c;
  FUN_00409350();
  local_8 = 3;
  puStack_54 = local_38;
  puStack_58 = (uint *)0x440ea1;
  uVar3 = (**(code **)(**(int **)(in_ECX + 0x10) + 0x44))();
  local_8 = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x34) = uVar3;
  if (0xf < local_24) {
    puStack_58 = (uint *)local_38[0];
                    /* WARNING: Subroutine does not return */
    puStack_5c = (uint *)&UNK_00440eb6;
    FUN_00aae91b();
  }
  puStack_58 = (uint *)0x13;
  puStack_5c = (uint *)0xdf84cc;
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  puStack_60 = (uint *)0x440ed6;
  FUN_00409350();
  local_8 = 4;
  puStack_58 = local_38;
  puStack_5c = (uint *)0x440eeb;
  uVar3 = (**(code **)(**(int **)(in_ECX + 0x10) + 0x44))();
  local_8 = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x38) = uVar3;
  if (0xf < local_24) {
    puStack_5c = (uint *)local_38[0];
                    /* WARNING: Subroutine does not return */
    puStack_60 = (uint *)&UNK_00440f00;
    FUN_00aae91b();
  }
  puStack_5c = (uint *)0x14;
  puStack_60 = (uint *)0xdf84e0;
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  pcStack_64 = (char *)0x440f20;
  FUN_00409350();
  local_8 = 5;
  puStack_5c = local_38;
  puStack_60 = (uint *)0x440f35;
  uVar3 = (**(code **)(**(int **)(in_ECX + 0x10) + 0x34))();
  local_8 = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x3c) = uVar3;
  if (0xf < local_24) {
    puStack_60 = (uint *)local_38[0];
                    /* WARNING: Subroutine does not return */
    pcStack_64 = &UNK_00440f4a;
    FUN_00aae91b();
  }
  puStack_60 = (uint *)0x14;
  pcStack_64 = "combat_country_flagR";
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  puStack_68 = (undefined *)0x440f6a;
  FUN_00409350();
  local_8 = 6;
  puStack_60 = local_38;
  pcStack_64 = (char *)0x440f7f;
  uVar3 = (**(code **)(**(int **)(in_ECX + 0x10) + 0x34))();
  local_8 = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x40) = uVar3;
  if (0xf < local_24) {
    pcStack_64 = (char *)local_38[0];
                    /* WARNING: Subroutine does not return */
    puStack_68 = &UNK_00440f94;
    FUN_00aae91b();
  }
  if ((((*(int *)(in_ECX + 0x2c) != 0) && (*(int *)(in_ECX + 0x30) != 0)) &&
      (*(int *)(in_ECX + 0x34) != 0)) &&
     ((*(int *)(in_ECX + 0x38) != 0 && (*(int *)(in_ECX + 0x28) != 0)))) {
    pcStack_64 = (char *)0x440fce;
    FUN_0043e950();
    pcStack_64 = (char *)(in_ECX + 0x44);
    puStack_68 = (undefined *)0x440fe0;
    (**(code **)(*(int *)(*(int *)(in_ECX + 0x28) + 0x54) + 4))();
    local_14 = (undefined1 *)&puStack_68;
    puStack_68 = *(undefined **)(in_ECX + 0xcc);
    FUN_0043f570(local_38);
    local_8 = 7;
    puStack_68 = (undefined *)0x0;
    FUN_009a67d0();
    local_8 = 0xffffffff;
    puStack_68 = (undefined *)0x441016;
    FUN_00408ad0();
    local_14 = (undefined1 *)&puStack_68;
    puStack_68 = *(undefined **)(in_ECX + 200);
    FUN_0043f570(local_38);
    local_8 = 8;
    puStack_68 = (undefined *)0x0;
    FUN_009a67d0();
    local_8 = 0xffffffff;
    puStack_68 = (undefined *)0x44104c;
    FUN_00408ad0();
    piVar1 = *(int **)(*(int *)(in_ECX + 0x34) + 0x94);
    puStack_68 = (undefined *)0x47c35040;
    FUN_00401000();
    puStack_68 = (undefined *)0x441070;
    local_1c = FUN_00b31c00();
    puStack_68 = (undefined *)(local_1c >> 0x1f);
    local_18 = puStack_68;
    uVar4 = __allmul(*(int *)(in_ECX + 0xd0),*(int *)(in_ECX + 0xd0) >> 0x1f,local_1c);
    puStack_68 = (undefined *)0x0;
    local_14 = (undefined1 *)__alldiv(uVar4,1000);
    iVar2 = *piVar1;
    puStack_68 = (undefined *)0x4410a6;
    puStack_68 = (undefined *)FUN_009cd680();
    (**(code **)(iVar2 + 0x5c))();
    piVar1 = *(int **)(*(int *)(in_ECX + 0x38) + 0x94);
    uVar4 = __allmul(*(int *)(in_ECX + 0xd4),*(int *)(in_ECX + 0xd4) >> 0x1f,local_1c,local_18);
    local_14 = (undefined1 *)__alldiv(uVar4,1000,0);
    iVar2 = *piVar1;
    uVar3 = FUN_009cd680();
    (**(code **)(iVar2 + 0x5c))(uVar3);
    if ((*(int *)(in_ECX + 0x3c) != 0) && (*(int *)(in_ECX + 0x40) != 0)) {
      *(undefined4 *)(in_ECX + 0xd8) = 0xffffffff;
      *(undefined4 *)(in_ECX + 0xdc) = 0xffffffff;
      FUN_0043e950();
      FUN_0043e950();
      (**(code **)(*(int *)(*(int *)(in_ECX + 0x3c) + 0x54) + 4))(in_ECX + 0x70);
      (**(code **)(*(int *)(*(int *)(in_ECX + 0x40) + 0x54) + 4))(in_ECX + 0x9c);
      ExceptionList = local_10;
      return 1;
    }
  }
  ExceptionList = local_10;
  return 0;
}

