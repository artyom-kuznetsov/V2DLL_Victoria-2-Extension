// FUN_006d2030 @ 006d2030 body=[[006d2030, 006d20cf] [006d20d3, 006d220c] [006d2210, 006d22ab] [006d22af, 006d2307] [006d230b, 006d23f0] [006d23f4, 006d241e] [006d2422, 006d2441] [006d2445, 006d2468] [006d246c, 006d251e]]


/* WARNING: Removing unreachable block (ram,0x006d2413) */

void FUN_006d2030(int param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *piVar5;
  code *pcVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  uint *extraout_ECX;
  float10 fVar10;
  uint *puStack_108;
  uint *puStack_104;
  char *pcStack_100;
  uint *puStack_fc;
  uint local_e8;
  uint local_d4;
  uint local_b0 [4];
  undefined4 local_a0;
  uint local_9c;
  uint local_94 [4];
  undefined4 local_84;
  uint local_80;
  uint local_78 [4];
  undefined4 local_68;
  uint local_64;
  uint *local_5c;
  undefined4 local_58;
  undefined4 *local_54;
  float local_50;
  undefined4 *local_4c;
  char local_48 [4];
  uint local_44 [4];
  undefined4 local_34;
  uint local_30;
  int local_28;
  int *local_24;
  int *local_20;
  uint local_1c;
  char local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b7e3d6;
  local_10 = ExceptionList;
  local_1c = 0;
  local_58 = *(undefined4 *)(DAT_012588e8 + 0xb5c);
  puVar3 = *(undefined4 **)(*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4);
  puStack_fc = (uint *)0xd;
  pcStack_100 = "party_listbox";
  local_80 = 0xf;
  local_84 = 0;
  local_94[0] = local_94[0] & 0xffffff00;
  puStack_104 = (undefined4 *)0x6d209b;
  ExceptionList = &local_10;
  local_54 = puVar3;
  FUN_00409350();
  local_8 = 0;
  puStack_fc = local_94;
  pcStack_100 = (char *)0x6d20b2;
  piVar2 = (int *)(**(code **)(**(int **)(param_1 + 0x20) + 0x7c))();
  local_8 = 0xffffffff;
  local_24 = piVar2;
  if (0xf < local_80) {
    pcStack_100 = (char *)local_94[0];
                    /* WARNING: Subroutine does not return */
    puStack_104 = (uint *)&UNK_006d20d0;
    FUN_00aae91b();
  }
  local_80 = 0xf;
  local_84 = 0;
  local_94[0] = local_94[0] & 0xffffff00;
  if (piVar2[0x41] == 0) {
    local_50 = DAT_00f092dc;
  }
  else {
    pcStack_100 = (char *)0x6d20fc;
    fVar10 = (float10)(**(code **)(*(int *)(piVar2[0x41] + 0x54) + 0x10))();
    local_50 = (float)fVar10;
  }
  pcStack_100 = (char *)0x6d2117;
  (**(code **)(*piVar2 + 0x54))();
  pcStack_100 = (char *)0x6d2120;
  (**(code **)(*piVar2 + 0x5c))();
  local_28 = 0;
  puVar3 = (undefined4 *)puVar3[0x20f];
  while( true ) {
    if (puVar3 == (undefined4 *)0x0) {
      pcStack_100 = (char *)0x6d2496;
      (**(code **)(*piVar2 + 0x6c))();
      iVar7 = piVar2[0x41];
      if ((iVar7 != 0) && (DAT_00f092dc < local_50)) {
        pcStack_100 = (char *)0x1;
        puStack_104 = (undefined4 *)0x1;
        local_54 = &puStack_108;
        puStack_108 = extraout_ECX;
        FUN_00401000((local_50 + 0.0005) * 1000.0);
        uVar4 = FUN_00b31c00();
        *local_54 = uVar4;
        (**(code **)(*(int *)(iVar7 + 0x54) + 0x1c))();
      }
      if (*(char *)(*(int *)(param_1 + 0x20) + 0x67) != '\0') {
        pcStack_100 = (char *)0x6d250c;
        (**(code **)(*piVar2 + 0x50))();
      }
      ExceptionList = local_10;
      return;
    }
    local_4c = (undefined4 *)puVar3[2];
    local_5c = (uint *)*puVar3;
    pcStack_100 = (char *)0x28;
    puStack_104 = (uint *)0x6d2148;
    puVar3 = (undefined4 *)FUN_00aae9af();
    local_8 = 1;
    local_20 = puVar3;
    if (puVar3 == (undefined4 *)0x0) {
      puStack_104 = (undefined4 *)0x0;
    }
    else {
      pcStack_100 = (char *)0xc;
      puStack_104 = (uint *)0xe0d9e8;
      local_30 = 0xf;
      local_34 = 0;
      local_44[0] = local_44[0] & 0xffffff00;
      puStack_108 = (uint *)0x6d217b;
      FUN_00409350();
      piVar2 = DAT_01258a80;
      local_8 = CONCAT31(local_8._1_3_,2);
      local_1c = local_1c | 1;
      pcStack_100 = (char *)0x6d219b;
      pcStack_100 = (char *)(**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x3c))();
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
      puStack_104 = local_44;
      puStack_108 = (uint *)0x6d21e3;
      uVar4 = (**(code **)(*piVar2 + 0x2c))();
      puVar3[8] = uVar4;
      puStack_104 = puVar3;
      piVar2 = local_24;
    }
    local_8 = 0xffffffff;
    if ((local_1c & 1) != 0) {
      local_1c = local_1c & 0xfffffffe;
      if (0xf < local_30) {
        pcStack_100 = (char *)local_44[0];
                    /* WARNING: Subroutine does not return */
        puStack_104 = (uint *)&UNK_006d220d;
        FUN_00aae91b();
      }
      local_30 = 0xf;
      local_34 = 0;
      local_44[0] = local_44[0] & 0xffffff00;
    }
    local_20 = (int *)puStack_104[8];
    pcStack_100 = (char *)0x0;
    puStack_108 = (uint *)0x6d222e;
    (**(code **)(*piVar2 + 0x10))();
    puStack_108 = local_5c;
    FUN_006d1450(1);
    puStack_108 = (uint *)0xa;
    local_30 = 0xf;
    local_34 = 0;
    local_44[0] = local_44[0] & 0xffffff00;
    FUN_00409350("party_name");
    local_8 = 8;
    puStack_108 = (uint *)0x6d226a;
    local_18 = FUN_005144c0();
    piVar2 = local_20;
    puStack_108 = local_44;
    piVar5 = (int *)(**(code **)(*local_20 + 0x34))();
    if (local_18 == '\0') {
      pcVar6 = *(code **)(*piVar5 + 0xbc);
    }
    else {
      pcVar6 = *(code **)(*piVar5 + 0xb8);
    }
    (*pcVar6)();
    local_8 = 0xffffffff;
    if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_44[0]);
    }
    local_30 = 0xf;
    local_34 = 0;
    local_44[0] = local_44[0] & 0xffffff00;
    FUN_00409350("party_name",10);
    local_8 = 9;
    iVar7 = (**(code **)(*piVar2 + 0x34))(local_44);
    (**(code **)(*(int *)(iVar7 + 0x54) + 4))(param_1 + 0x54);
    local_8 = 0xffffffff;
    if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_44[0]);
    }
    local_9c = 0xf;
    local_a0 = 0;
    local_b0[0] = local_b0[0] & 0xffffff00;
    FUN_00409350("party_name",10);
    local_8 = 10;
    piVar2 = (int *)(**(code **)(*piVar2 + 0x34))(local_b0);
    local_64 = 0xf;
    local_68 = 0;
    local_78[0] = local_78[0] & 0xffffff00;
    local_8._0_1_ = 0xb;
    pcVar8 = __itoa(local_28,local_48,10);
    pcVar9 = pcVar8;
    do {
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    FUN_00409350(pcVar8,(int)pcVar9 - (int)(pcVar8 + 1));
    local_8._0_1_ = 0xc;
    FUN_00409350("POLITICSVIEW_PARTY_BUTTON",0x19);
    local_8._0_1_ = 0xd;
    uVar4 = FUN_00988f20(local_78);
    local_8 = CONCAT31(local_8._1_3_,0xe);
    (**(code **)(*piVar2 + 0x78))(uVar4);
    if (0xf < local_d4) break;
    local_d4 = 0xf;
    local_e8 = local_e8 & 0xffffff00;
    if (0xf < local_64) {
      pcStack_100 = (char *)local_78[0];
                    /* WARNING: Subroutine does not return */
      puStack_104 = (uint *)&UNK_006d2442;
      FUN_00aae91b();
    }
    local_8 = 0xffffffff;
    local_64 = 0xf;
    local_68 = 0;
    local_78[0] = local_78[0] & 0xffffff00;
    if (0xf < local_9c) {
      pcStack_100 = (char *)local_b0[0];
                    /* WARNING: Subroutine does not return */
      puStack_104 = (uint *)&UNK_006d2469;
      FUN_00aae91b();
    }
    local_28 = local_28 + 1;
    local_9c = 0xf;
    local_a0 = 0;
    local_b0[0] = local_b0[0] & 0xffffff00;
    puVar3 = local_4c;
    piVar2 = local_24;
  }
                    /* WARNING: Subroutine does not return */
  puStack_104 = (uint *)&UNK_006d23f1;
  pcStack_100 = (char *)local_e8;
  FUN_00aae91b();
}

