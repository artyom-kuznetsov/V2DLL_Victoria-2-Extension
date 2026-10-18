// FUN_00580480 @ 00580480 body=[[00580480, 005806a9] [005806b1, 005807b9] [005807c0, 0058092f] [00580933, 0058098e] [00580992, 00580b84] [00580b88, 00580c92] [00580c96, 00580cb1] [00580cb5, 00580cd0]]


void FUN_00580480(void)

{
  int *piVar1;
  int **ppiVar2;
  byte bVar3;
  byte *pbVar4;
  byte **ppbVar5;
  char cVar6;
  int *piVar7;
  byte *pbVar8;
  int iVar9;
  undefined4 uVar10;
  int in_ECX;
  char *pcVar11;
  bool bVar12;
  byte **ppbVar13;
  undefined4 uVar14;
  byte ***pppbVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined1 auStack_118 [120];
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  byte **ppbStack_98;
  byte **local_94;
  int *local_7c [3];
  int iStack_70;
  byte *local_6c;
  undefined1 *local_64;
  byte *local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined1 local_54;
  byte **local_50;
  undefined4 local_40;
  uint local_3c;
  byte **local_34 [4];
  undefined4 local_24;
  uint local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  iVar9 = DAT_012587e4;
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b9fc38;
  local_14 = ExceptionList;
  piVar1 = (int *)(in_ECX + 0x3c);
  ExceptionList = &local_14;
  *(undefined1 *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x40) * 4) + 0x120) =
       *(undefined1 *)(in_ECX + 0x44);
  local_94 = *(byte ***)(*(int *)(iVar9 + 4) + *(int *)(in_ECX + 0x40) * 4);
  local_6c = (byte *)*piVar1;
  ppbStack_98 = (byte **)0x5804dc;
  local_64 = (undefined1 *)in_ECX;
  FUN_00515490();
  local_6c = (byte *)*piVar1;
  iVar9 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x40) * 4);
  if (*(char *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x40) * 4) + 0x120) == '\0')
  {
    piVar7 = *(int **)(iVar9 + 0x7b4);
    while (piVar7 != (int *)0x0) {
      ppbVar13 = (byte **)*piVar7;
      local_7c[0] = (int *)piVar7[2];
      local_94 = (byte **)0x5805dc;
      cVar6 = (**(code **)(*ppbVar13 + 0x38))();
      piVar7 = local_7c[0];
      if (cVar6 != '\0') {
        bVar12 = false;
        pbVar8 = ppbVar13[0xe];
        if (ppbVar13[0xe] != (byte *)0x0) {
          do {
            pbVar4 = *(byte **)(pbVar8 + 8);
            ppbVar5 = *(byte ***)pbVar8;
            if ((ppbVar5[0xc] != (byte *)0x0) &&
               (*(char *)(*(int *)(ppbVar5[0xc] + 0x68) + 0x42) == '\0')) {
              local_6c = ppbVar13[0x1d];
              if (local_6c != (byte *)0x0) {
                ppbStack_98 = (byte **)0x580629;
                local_94 = ppbVar5;
                (**(code **)(**(int **)(local_6c + 0x10) + 0x34))();
                uStack_9c = 0x580638;
                ppbStack_98 = ppbVar5;
                (**(code **)(**(int **)(iStack_70 + 0x14) + 0x34))();
              }
              ppbStack_98 = (byte **)0x580649;
              local_94 = ppbVar5;
              FUN_0068a900();
              bVar12 = true;
            }
            pbVar8 = pbVar4;
          } while (pbVar4 != (byte *)0x0);
          piVar7 = local_7c[0];
          if ((bVar12) && (ppbVar13[0x10] == (byte *)0x0)) {
            ppbStack_98 = (byte **)0x58066d;
            local_94 = ppbVar13;
            FUN_0068aa10();
            piVar7 = local_7c[0];
          }
        }
      }
    }
    local_6c = *(byte **)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x40) * 4);
    ppiVar2 = (int **)((int)local_6c + 0x15dc);
    if (ppiVar2 != local_7c) {
      local_94 = (byte **)*ppiVar2;
      if (local_94 != (byte **)0x0) {
                    /* WARNING: Subroutine does not return */
        ppbStack_98 = (byte **)&UNK_005806aa;
        FUN_00aae91b();
      }
      *ppiVar2 = (int *)0x0;
      *(undefined4 *)((int)local_6c + 0x15e0) = 0;
      *(undefined4 *)((int)local_6c + 0x15e4) = 0;
    }
    local_c = 0xffffffff;
    if (*(int *)(DAT_012588e8 + 0xb60) == *(int *)((int)local_6c + 0x20)) {
      *(undefined4 *)(*(int *)(*(int *)(DAT_012588e8 + 0xb24) + 0x24) + 0x20) = 1;
    }
    local_7c[0] = (int *)(DAT_012587e4 + 4);
    if (*(int *)(*(int *)(*local_7c[0] + *(int *)(in_ECX + 0x40) * 4) + 0x208) != 0) {
      iVar9 = *(int *)(*(int *)(*(int *)(*local_7c[0] + *(int *)(in_ECX + 0x40) * 4) + 0x208) + 0x38
                      );
      *(undefined1 *)(iVar9 + 0x1bd) = 1;
      *(undefined4 *)(iVar9 + 0x1c0) = 0;
    }
  }
  else {
    local_94 = (byte **)0x1;
    uStack_9c = 0x580515;
    ppbStack_98 = (byte **)iVar9;
    FUN_00514f20();
    local_6c = (byte *)*piVar1;
    local_7c[0] = (int *)(DAT_012587e4 + 4);
    if (*(int *)(*(int *)(*local_7c[0] + *(int *)(in_ECX + 0x40) * 4) + 0x208) != 0) {
      iVar9 = *(int *)(*(int *)(*(int *)(*local_7c[0] + *(int *)(in_ECX + 0x40) * 4) + 0x208) + 0x38
                      );
      *(undefined1 *)(iVar9 + 0x1bd) = 1;
      *(undefined4 *)(iVar9 + 0x1c0) = 0;
    }
    if (*(int *)(*(int *)(DAT_012588e8 + 0xcf8) + 8) != 0) {
      local_94 = (byte **)0x580575;
      cVar6 = FUN_0042b220();
      if (cVar6 != '\0') {
        local_94 = (byte **)0x580587;
        cVar6 = FUN_0042bb00();
        if (cVar6 == '\0') {
          local_94 = *(byte ***)(*(int *)(DAT_012586dc + 0x30) + 0x4dc);
          local_6c = (byte *)&local_94;
          ppbStack_98 = (byte **)0x5805ad;
          FUN_00428d40();
        }
      }
    }
  }
  local_6c = *(byte **)(DAT_012588e8 + 0xb5c);
  local_94 = (byte **)(*(int *)(*local_7c[0] + *(int *)(DAT_012588e8 + 0xb60) * 4) + 0x54);
  ppbStack_98 = (byte **)0x580750;
  FUN_0042b9f0();
  local_6c = *(byte **)(DAT_012588e8 + 0xb5c);
  local_94 = *(byte ***)(*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4);
  ppbStack_98 = (byte **)0x580777;
  piVar7 = (int *)FUN_005061e0();
  local_60 = (byte *)0x0;
  local_5c = 0;
  local_58 = 0;
  local_54 = 0;
  local_94 = (byte **)*piVar7;
  while (local_94 != (byte **)0x0) {
    ppbVar13 = (byte **)local_94[0xf];
    ppbStack_98 = (byte **)0x58079d;
    FUN_0042b730();
    local_94 = ppbVar13;
  }
  local_c._0_1_ = 3;
  local_c._1_3_ = 0;
  pbVar8 = local_6c;
  pbVar4 = local_60;
  do {
    local_6c = pbVar4;
    if (local_6c == (byte *)0x0) goto LAB_0058080c;
    pbVar8 = local_6c;
    if (0xf < *(uint *)(local_6c + 0x14)) {
      pbVar8 = *(byte **)local_6c;
    }
    pcVar11 = "COUNTRY";
    do {
      bVar3 = *pbVar8;
      bVar12 = bVar3 < (byte)*pcVar11;
      if (bVar3 != *pcVar11) {
LAB_005807f6:
        iVar9 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
        goto LAB_005807fb;
      }
      if (bVar3 == 0) break;
      bVar3 = pbVar8[1];
      bVar12 = bVar3 < (byte)pcVar11[1];
      if (bVar3 != pcVar11[1]) goto LAB_005807f6;
      pbVar8 = pbVar8 + 2;
      pcVar11 = pcVar11 + 2;
    } while (bVar3 != 0);
    iVar9 = 0;
LAB_005807fb:
    pbVar8 = local_6c;
    pbVar4 = *(byte **)(local_6c + 0x3c);
  } while (iVar9 != 0);
  local_94 = (byte **)0x58095e;
  uStack_9c = FUN_0055dd40();
  local_94 = (byte **)0xffffffff;
  local_c._0_1_ = 4;
  ppbStack_98 = (byte **)0x0;
  uStack_a0 = 0x580976;
  FUN_00408ed0();
  local_c._0_1_ = 3;
  if (0xf < local_20) {
    local_94 = local_34[0];
                    /* WARNING: Subroutine does not return */
    ppbStack_98 = (byte **)&UNK_0058098f;
    FUN_00aae91b();
  }
  local_34[0] = (byte **)((uint)local_34[0] & 0xffffff00);
  pbVar8 = local_6c;
LAB_0058080c:
  local_6c = pbVar8;
  local_c._0_1_ = 3;
  local_94 = (byte **)0x0;
  ppbStack_98 = (byte **)&DAT_00ded94d;
  if (*(char *)((int)local_64 + 0x44) == '\0') {
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = (byte **)((uint)local_34[0]._1_3_ << 8);
    if (*(int *)(DAT_012588e8 + 0xb60) == *(int *)((int)local_64 + 0x40)) {
      uStack_9c = 0x580a9e;
      FUN_00409350();
      local_c._0_1_ = 0xb;
      local_94 = (byte **)0xd;
      ppbStack_98 = (byte **)0xe00dcc;
      local_3c = 0xf;
      local_40 = 0;
      local_50 = (byte **)((uint)local_50 & 0xffffff00);
      uStack_9c = 0x580ac2;
      FUN_00409350();
      local_94 = (byte **)0x0;
      local_c._0_1_ = 0xc;
      ppbStack_98 = (byte **)&LAB_0055a780;
      local_6c = auStack_118;
      local_64 = auStack_118;
      uVar19 = 0;
      uVar17 = *(undefined4 *)(in_ECX + 0x40);
      iVar9 = *piVar1;
      local_7c[0] = (int *)0x2d2d2d;
      uVar18 = 0x2d2d2d;
      uVar16 = 0;
      pppbVar15 = local_34;
      ppbVar13 = &local_60;
      uVar14 = 0;
      FUN_006a4f40(ppbVar13,0,pppbVar15,0,iVar9,uVar17,0x2d2d2d,0);
      uVar10 = FUN_006a55b0();
      FUN_006a7ed0(local_64,uVar10,ppbVar13,uVar14,pppbVar15,uVar16,iVar9,uVar17,uVar18,uVar19);
      local_c._0_1_ = 0xd;
      FUN_006a4f40();
      local_c = CONCAT31(local_c._1_3_,0xc);
      FUN_004933c0();
      if (0xf < local_3c) {
        local_94 = local_50;
                    /* WARNING: Subroutine does not return */
        ppbStack_98 = (byte **)&UNK_00580b85;
        FUN_00aae91b();
      }
      goto joined_r0x00580943;
    }
    uStack_9c = 0x580bad;
    FUN_00409350();
    local_c._0_1_ = 0xe;
    local_94 = (byte **)0x10;
    ppbStack_98 = (byte **)0xe00ddc;
    local_3c = 0xf;
    local_40 = 0;
    local_50 = (byte **)((uint)local_50 & 0xffffff00);
    uStack_9c = 0x580bd1;
    FUN_00409350();
    local_94 = (byte **)0x0;
    local_c._0_1_ = 0xf;
    ppbStack_98 = (byte **)&LAB_0055a780;
    local_6c = auStack_118;
    local_64 = auStack_118;
    uVar19 = 0;
    local_7c[0] = (int *)0x2d2d2d;
    uVar18 = 0x2d2d2d;
    uVar17 = *(undefined4 *)(in_ECX + 0x40);
    iVar9 = *piVar1;
    uVar16 = 0;
    pppbVar15 = local_34;
    ppbVar13 = &local_60;
    uVar14 = 0;
    FUN_006a4f40(ppbVar13,0,pppbVar15,0,iVar9,uVar17,0x2d2d2d,0);
    uVar10 = FUN_006a55b0();
    FUN_006a7ed0(local_64,uVar10,ppbVar13,uVar14,pppbVar15,uVar16,iVar9,uVar17,uVar18,uVar19);
    local_c._0_1_ = 0x10;
    FUN_006a4f40();
    local_c = CONCAT31(local_c._1_3_,0xf);
  }
  else {
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = (byte **)((uint)local_34[0]._1_3_ << 8);
    if (*(int *)(DAT_012588e8 + 0xb60) == *(int *)((int)local_64 + 0x40)) {
      uStack_9c = 0x580849;
      FUN_00409350();
      local_c._0_1_ = 5;
      local_94 = (byte **)0xb;
      ppbStack_98 = (byte **)0xe00db0;
      local_3c = 0xf;
      local_40 = 0;
      local_50 = (byte **)((uint)local_50 & 0xffffff00);
      uStack_9c = 0x58086d;
      FUN_00409350();
      local_94 = (byte **)0x0;
      local_c._0_1_ = 6;
      ppbStack_98 = (byte **)&LAB_0055a780;
      local_6c = auStack_118;
      local_64 = auStack_118;
      uVar19 = 0;
      uVar17 = *(undefined4 *)(in_ECX + 0x40);
      iVar9 = *piVar1;
      local_7c[0] = (int *)0x2d2d2d;
      uVar18 = 0x2d2d2d;
      uVar16 = 0;
      pppbVar15 = local_34;
      ppbVar13 = &local_60;
      uVar14 = 0;
      FUN_006a4f40(ppbVar13,0,pppbVar15,0,iVar9,uVar17,0x2d2d2d,0);
      uVar10 = FUN_006a55b0();
      FUN_006a7ed0(local_64,uVar10,ppbVar13,uVar14,pppbVar15,uVar16,iVar9,uVar17,uVar18,uVar19);
      local_c._0_1_ = 7;
      FUN_006a4f40();
      local_c = CONCAT31(local_c._1_3_,6);
      FUN_004933c0();
      if (0xf < local_3c) {
        local_94 = local_50;
                    /* WARNING: Subroutine does not return */
        ppbStack_98 = (byte **)&UNK_00580930;
        FUN_00aae91b();
      }
      goto joined_r0x00580943;
    }
    uStack_9c = 0x5809ad;
    FUN_00409350();
    local_c._0_1_ = 8;
    local_94 = (byte **)0xe;
    ppbStack_98 = (byte **)0xe00dbc;
    local_3c = 0xf;
    local_40 = 0;
    local_50 = (byte **)((uint)local_50 & 0xffffff00);
    uStack_9c = 0x5809d1;
    FUN_00409350();
    local_94 = (byte **)0x0;
    local_c._0_1_ = 9;
    ppbStack_98 = (byte **)&LAB_0055a780;
    local_6c = auStack_118;
    local_64 = auStack_118;
    uVar19 = 0;
    local_7c[0] = (int *)0x2d2d2d;
    uVar18 = 0x2d2d2d;
    uVar17 = *(undefined4 *)(in_ECX + 0x40);
    iVar9 = *piVar1;
    uVar16 = 0;
    pppbVar15 = local_34;
    ppbVar13 = &local_60;
    uVar14 = 0;
    FUN_006a4f40(ppbVar13,0,pppbVar15,0,iVar9,uVar17,0x2d2d2d,0);
    uVar10 = FUN_006a55b0();
    FUN_006a7ed0(local_64,uVar10,ppbVar13,uVar14,pppbVar15,uVar16,iVar9,uVar17,uVar18,uVar19);
    local_c._0_1_ = 10;
    FUN_006a4f40();
    local_c = CONCAT31(local_c._1_3_,9);
  }
  FUN_004933c0();
  if (0xf < local_3c) {
    local_94 = local_50;
                    /* WARNING: Subroutine does not return */
    ppbStack_98 = (byte **)&UNK_00580c93;
    FUN_00aae91b();
  }
joined_r0x00580943:
  local_50 = (byte **)((uint)local_50 & 0xffffff00);
  if (local_20 < 0x10) {
    local_3c = 0xf;
    local_40 = 0;
    local_94 = &local_60;
    ppbStack_98 = (byte **)0x580cbf;
    FUN_0042b9f0();
    ExceptionList = local_14;
    return;
  }
  local_3c = 0xf;
  local_40 = 0;
                    /* WARNING: Subroutine does not return */
  ppbStack_98 = (byte **)&UNK_00580cb2;
  local_94 = local_34[0];
  FUN_00aae91b();
}

