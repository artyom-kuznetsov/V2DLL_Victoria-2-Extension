// FUN_008892f0 @ 008892f0 body=[[008892f0, 008894b7] [008894bb, 008894df] [008894e3, 008894ff] [00889503, 00889522] [00889526, 0088953f] [00889543, 0088955f] [00889563, 00889587] [00889590, 0088959e] [008895a2, 008895b7]]


undefined1 * FUN_008892f0(undefined1 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  uint in_stack_00000024;
  undefined4 in_stack_0000002c;
  undefined1 auStack_160 [16];
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined *puStack_148;
  uint *puStack_144;
  undefined1 local_134 [8];
  undefined4 local_12c;
  int local_128;
  undefined4 local_ec [5];
  uint local_d8;
  uint local_d0;
  undefined4 local_c0;
  uint local_bc;
  uint local_b4;
  undefined4 local_a4;
  uint local_a0;
  uint local_98;
  undefined4 local_88;
  uint local_84;
  uint local_7c;
  undefined4 local_6c;
  uint local_68;
  undefined1 *local_60;
  uint local_5c;
  undefined4 local_4c;
  uint local_48;
  uint local_40 [4];
  undefined4 local_30;
  uint local_2c;
  undefined4 *local_24;
  int local_1c;
  undefined4 local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b87b95;
  local_10 = ExceptionList;
  local_8 = 1;
  uStack_7 = 0;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  local_18 = 1;
  puStack_144 = (uint *)0x889343;
  FUN_008a88d0();
  local_24 = *(undefined4 **)(param_2 + 8);
  local_1c = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_2 + 0xc) * 4);
  puVar5 = *(undefined4 **)(local_1c + 0xd88);
  while( true ) {
    do {
      if ((puVar5 < *(undefined4 **)(local_1c + 0xd88)) ||
         (*(undefined4 **)(local_1c + 0xd8c) <= puVar5)) {
        if (in_stack_00000024 < 0x10) {
          ExceptionList = local_10;
          return param_1;
        }
        puStack_144 = (uint *)param_4;
                    /* WARNING: Subroutine does not return */
        puStack_148 = &UNK_0088959f;
        FUN_00aae91b();
      }
      local_12c = *puVar5;
      iVar1 = puVar5[1];
      puStack_144 = (uint *)local_134;
      puVar5 = puVar5 + 2;
      puStack_148 = (undefined *)0x8893af;
      local_128 = iVar1;
      local_24 = puVar5;
      cVar2 = (**(code **)(*(int *)(local_14 + 0x20) + 0x18))();
    } while ((cVar2 != '\x01') || (iVar1 == *(int *)(param_2 + 0xc)));
    puStack_144 = (uint *)in_stack_0000002c;
    local_60 = auStack_160;
    uStack_14c = 0xf;
    uStack_150 = 0;
    auStack_160[0] = 0;
    FUN_00408ed0(&param_4,0,0xffffffff);
    uVar3 = FUN_0087a6c0(local_ec,local_134,param_3);
    local_8 = 2;
    puStack_144 = (uint *)0x4;
    puStack_148 = &DAT_00e29e24;
    local_2c = 0xf;
    local_30 = 0;
    local_40[0] = local_40[0] & 0xffffff00;
    uStack_14c = 0x88941b;
    FUN_00409350();
    local_8 = 3;
    puStack_144 = (uint *)0x889436;
    uVar4 = FUN_004f97a0();
    local_8 = 4;
    puStack_144 = (uint *)0x1;
    puStack_148 = &DAT_00defdf4;
    local_48 = 0xf;
    local_4c = 0;
    local_5c = local_5c & 0xffffff00;
    uStack_14c = 0x889458;
    FUN_00409350();
    local_8 = 5;
    puStack_148 = (undefined *)0x88946b;
    puStack_144 = (uint *)uVar4;
    FUN_00988f20();
    puStack_144 = local_40;
    local_8 = 6;
    puStack_148 = (undefined *)0x88947d;
    FUN_00988f20();
    local_8 = 7;
    puStack_148 = (undefined *)0x88948f;
    puStack_144 = (uint *)uVar3;
    uStack_14c = FUN_00988f20();
    puStack_144 = (uint *)0xffffffff;
    puStack_148 = (undefined *)0x0;
    local_8 = 8;
    uStack_150 = 0x88949f;
    FUN_00448aa0();
    if (0xf < local_a0) {
      puStack_144 = (uint *)local_b4;
                    /* WARNING: Subroutine does not return */
      puStack_148 = &UNK_008894b8;
      FUN_00aae91b();
    }
    local_a0 = 0xf;
    local_a4 = 0;
    local_b4 = local_b4 & 0xffffff00;
    if (0xf < local_68) {
      puStack_144 = (uint *)local_7c;
                    /* WARNING: Subroutine does not return */
      puStack_148 = &UNK_008894e0;
      FUN_00aae91b();
    }
    local_68 = 0xf;
    local_6c = 0;
    local_7c = local_7c & 0xffffff00;
    if (0xf < local_bc) {
      puStack_144 = (uint *)local_d0;
                    /* WARNING: Subroutine does not return */
      puStack_148 = &UNK_00889500;
      FUN_00aae91b();
    }
    local_bc = 0xf;
    local_c0 = 0;
    local_d0 = local_d0 & 0xffffff00;
    if (0xf < local_48) {
      puStack_144 = (uint *)local_5c;
                    /* WARNING: Subroutine does not return */
      puStack_148 = &UNK_00889523;
      FUN_00aae91b();
    }
    local_48 = 0xf;
    local_4c = 0;
    local_5c = local_5c & 0xffffff00;
    if (0xf < local_84) {
      puStack_144 = (uint *)local_98;
                    /* WARNING: Subroutine does not return */
      puStack_148 = &UNK_00889540;
      FUN_00aae91b();
    }
    local_84 = 0xf;
    local_88 = 0;
    local_98 = local_98 & 0xffffff00;
    if (0xf < local_2c) break;
    local_8 = 1;
    local_2c = 0xf;
    local_30 = 0;
    local_40[0] = local_40[0] & 0xffffff00;
    puVar5 = local_24;
    if (0xf < local_d8) {
      puStack_144 = (uint *)local_ec[0];
                    /* WARNING: Subroutine does not return */
      puStack_148 = &UNK_00889588;
      FUN_00aae91b();
    }
  }
  puStack_144 = (uint *)local_40[0];
                    /* WARNING: Subroutine does not return */
  puStack_148 = &UNK_00889560;
  FUN_00aae91b();
}

