// FUN_00677ed0 @ 00677ed0 body=[[00677ed0, 00677fa1] [00677fa5, 00677fce] [00677fd2, 0067804b] [00678054, 00678131] [00678135, 0067832e] [00678332, 006783fd] [00678401, 00678425] [00678429, 00678444] [00678448, 00678467] [0067846b, 00678495] [00678499, 006784ad]]


void FUN_00677ed0(void)

{
  byte bVar1;
  undefined1 *puVar2;
  int *piVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined1 *in_ECX;
  byte *pbVar10;
  bool bVar11;
  uint3 uVar12;
  int *piStack_11c;
  undefined1 *local_110;
  undefined1 *puStack_10c;
  int iStack_108;
  undefined1 local_104 [4];
  undefined4 uStack_100;
  uint uStack_fc;
  undefined1 *local_f4;
  uint local_f0;
  uint auStack_ec [2];
  undefined4 local_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  uint uStack_d8;
  uint uStack_d4;
  uint auStack_d0 [3];
  undefined4 uStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  uint uStack_b4;
  undefined1 auStack_ac [4];
  undefined1 local_a8;
  undefined4 uStack_a4;
  uint uStack_a0;
  undefined1 auStack_9c [4];
  uint local_98;
  undefined4 local_94;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  uint uStack_84;
  undefined4 *puStack_7c;
  undefined4 uStack_78;
  undefined1 auStack_74 [16];
  uint uStack_64;
  uint auStack_5c [4];
  undefined4 uStack_4c;
  uint uStack_48;
  undefined4 uStack_38;
  void *pvStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b8bd7e;
  pvStack_14 = ExceptionList;
  local_e4 = 0;
  local_94 = 0xf;
  local_98 = 0;
  local_a8 = 0;
  ExceptionList = &pvStack_14;
  local_110 = in_ECX;
  FUN_00409350("chat_message",0xc);
  local_c = 0;
  local_f0 = 0xf;
  local_f4 = (undefined1 *)0x0;
  local_104[0] = 0;
  FUN_00409350("chat_window",0xb);
  local_c = CONCAT31(local_c._1_3_,1);
  piVar3 = (int *)(**(code **)(**(int **)(in_ECX + 0x1630) + 0x6c))(local_104);
  iVar4 = (**(code **)(*piVar3 + 0x40))(auStack_ac);
  (**(code **)(*(int *)(iVar4 + 0x54) + 0x4c))(auStack_74);
  if (0xf < uStack_fc) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_110);
  }
  uStack_fc = 0xf;
  uStack_100 = 0;
  local_110 = (undefined1 *)((uint)local_110 & 0xffffff00);
  uStack_18._0_1_ = 4;
  if (0xf < uStack_a0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_b4);
  }
  uStack_a0 = 0xf;
  uStack_a4 = 0;
  uStack_b4 = uStack_b4 & 0xffffff00;
  pbVar5 = (byte *)FUN_00989330(auStack_d0);
  if (0xf < *(uint *)(pbVar5 + 0x14)) {
    pbVar5 = *(byte **)pbVar5;
  }
  pbVar10 = &DAT_00ded94d;
  do {
    bVar1 = *pbVar5;
    bVar11 = bVar1 < *pbVar10;
    if (bVar1 != *pbVar10) {
LAB_00678030:
      iVar4 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
      goto LAB_00678035;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar5[1];
    bVar11 = bVar1 < pbVar10[1];
    if (bVar1 != pbVar10[1]) goto LAB_00678030;
    pbVar5 = pbVar5 + 2;
    pbVar10 = pbVar10 + 2;
  } while (bVar1 != 0);
  iVar4 = 0;
LAB_00678035:
  if (0xf < uStack_bc) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(auStack_d0[0]);
  }
  uStack_bc = 0xf;
  uStack_c0 = 0;
  auStack_d0[0] = auStack_d0[0] & 0xffffff00;
  if (iVar4 != 0) {
    FUN_0068b610(DAT_012588e8);
    FUN_0064a460();
    local_110 = (undefined1 *)0x0;
    puStack_10c = (undefined1 *)0x0;
    iStack_108 = 0;
    local_104[0] = 0;
    iVar4 = *(int *)(DAT_012588e8 + 0x18);
    for (puVar8 = (undefined4 *)piStack_11c[0x586]; iVar6 = iVar4, puVar8 != (undefined4 *)0x0;
        puVar8 = (undefined4 *)puVar8[2]) {
      uStack_18._0_1_ = 6;
      iVar6 = 0;
      if (iVar4 == 0) break;
      uStack_d8 = 0xf;
      uStack_dc = 0;
      auStack_ec[0] = auStack_ec[0] & 0xffffff00;
      FUN_00409350("shield",6);
      uStack_18._0_1_ = 7;
      iVar6 = (**(code **)(*(int *)*puVar8 + 0x48))(auStack_ec);
      puVar2 = puStack_10c;
      uStack_18._0_1_ = 6;
      if (0xf < uStack_d8) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(auStack_ec[0]);
      }
      puVar7 = local_110;
      if (*(int *)(iVar6 + 0x6c) != 1) {
        puVar7 = (undefined1 *)FUN_00aae9af(0x28);
        uStack_18._0_1_ = 8;
        local_f4 = puVar7;
        if (puVar7 == (undefined1 *)0x0) {
          puStack_10c = (undefined1 *)0x0;
        }
        else {
          *(undefined4 *)(puVar7 + 0x14) = 0xf;
          *(undefined4 *)(puVar7 + 0x10) = 0;
          *puVar7 = 0;
          FUN_00408ed0(iVar4,0,0xffffffff);
          *(undefined1 **)(puVar7 + 0x1c) = puStack_10c;
          *(undefined4 *)(puVar7 + 0x20) = 0;
          puVar7[0x24] = 0;
          puStack_10c = puVar7;
        }
        iVar6 = iStack_108 + 1;
        bVar11 = iStack_108 != 0;
        puVar7 = puStack_10c;
        iStack_108 = iVar6;
        if (bVar11) {
          *(undefined1 **)(puVar2 + 0x20) = puStack_10c;
          puVar7 = local_110;
        }
      }
      local_110 = puVar7;
      iVar4 = *(int *)(iVar4 + 0x3c);
    }
    uStack_18._0_1_ = 6;
    uVar12 = (uint3)((uint)iVar6 >> 8);
    iVar4 = CONCAT31(uVar12,1);
    if (iStack_108 < piStack_11c[0x588]) {
      iVar4 = (uint)uVar12 << 8;
    }
    local_f4 = (undefined1 *)FUN_00aae9af(0x68);
    uStack_18._0_1_ = 9;
    if (local_f4 == (undefined1 *)0x0) {
      uVar9 = 0;
    }
    else {
      puVar8 = (undefined4 *)FUN_00aae9af(0x74);
      uStack_18._0_1_ = 10;
      puStack_7c = puVar8;
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        uVar9 = FUN_0055dd40();
        uStack_18 = CONCAT31(uStack_18._1_3_,0xb);
        local_f0 = 1;
        FUN_009f2a50(puVar8,&uStack_78,auStack_5c,&local_110,iVar4);
        uStack_18 = 0xc;
        *puVar8 = &PTR_FUN_00e3d08c;
        puVar8[0x15] = uStack_38;
        puVar8[0x1b] = 0xf;
        puVar8[0x1a] = 0;
        *(undefined1 *)(puVar8 + 0x16) = 0;
        FUN_00408ed0(uVar9,0,0xffffffff);
      }
      uStack_18 = 0xd;
      iVar4 = (**(code **)(*piStack_11c + 0x44))();
      uVar9 = FUN_009f4240(local_f4,puVar8,piStack_11c[0x74a],iVar4 + 0xbc);
    }
    uStack_18._0_1_ = 0xe;
    uStack_18._1_3_ = 0;
    iVar4 = (**(code **)(*piStack_11c + 0x44))();
    (**(code **)(**(int **)(iVar4 + 0x38) + 0x18))(uVar9);
    uStack_1c = 6;
    if ((((uint)local_f4 & 1) != 0) && (0xf < uStack_c0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_d4);
    }
    uStack_c0 = 0xf;
    uStack_c4 = 0;
    uStack_d4 = uStack_d4 & 0xffffff00;
    FUN_00409350(&DAT_00ded94d,0);
    uStack_1c._0_1_ = 0xf;
    uStack_dc = 0xf;
    uStack_e0 = 0;
    local_f0 = local_f0 & 0xffffff00;
    FUN_00409350("chat_message",0xc);
    uStack_1c._0_1_ = 0x10;
    uStack_88 = 0xf;
    uStack_8c = 0;
    auStack_9c[0] = 0;
    FUN_00409350("chat_window",0xb);
    uStack_1c = CONCAT31(uStack_1c._1_3_,0x11);
    piVar3 = (int *)(**(code **)(*(int *)piStack_11c[0x58c] + 0x6c))(auStack_9c);
    iVar4 = (**(code **)(*piVar3 + 0x40))(&local_f4);
    (**(code **)(*(int *)(iVar4 + 0x54) + 0x40))(&uStack_dc);
    if (0xf < uStack_84) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_98);
    }
    uStack_84 = 0xf;
    uStack_88 = 0;
    local_98 = local_98 & 0xffffff00;
    if (0xf < uStack_d8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(auStack_ec[0]);
    }
    uStack_d8 = 0xf;
    uStack_dc = 0;
    auStack_ec[0] = auStack_ec[0] & 0xffffff00;
    if (0xf < uStack_bc) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(auStack_d0[0]);
    }
    FUN_004097a0(&local_110);
    if (0xf < uStack_48) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(auStack_5c[0]);
    }
    uStack_48 = 0xf;
    uStack_4c = 0;
    auStack_5c[0] = auStack_5c[0] & 0xffffff00;
  }
  if (uStack_64 < 0x10) {
    ExceptionList = pvStack_20;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(uStack_78);
}

