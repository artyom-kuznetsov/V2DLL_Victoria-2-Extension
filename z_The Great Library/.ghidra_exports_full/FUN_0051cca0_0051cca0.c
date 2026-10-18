// FUN_0051cca0 @ 0051cca0 body=[[0051cca0, 0051cd81] [0051cd85, 0051cf1b] [0051cf1f, 0051d0e1] [0051d0e5, 0051d104] [0051d108, 0051d11d] [0051d121, 0051d135]]


void FUN_0051cca0(void)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int in_ECX;
  int iVar9;
  uint *puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined1 auStack_148 [112];
  undefined4 uStack_d8;
  uint *puStack_d4;
  int *piStack_d0;
  uint *puStack_cc;
  int iStack_b8;
  undefined4 *local_b4;
  int iStack_b0;
  undefined1 *puStack_ac;
  uint local_a8 [4];
  undefined4 local_98;
  uint local_94;
  uint uStack_8c;
  undefined4 uStack_7c;
  uint uStack_78;
  uint auStack_70 [4];
  undefined4 uStack_60;
  uint uStack_5c;
  undefined1 auStack_54 [16];
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined1 *puStack_38;
  undefined4 auStack_34 [5];
  uint uStack_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  iVar9 = DAT_012586dc;
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b9c90c;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  *(undefined4 *)(in_ECX + 0x664) = *(undefined4 *)(DAT_012588e8 + 0xb0c);
  iVar9 = *(int *)(*(int *)(iVar9 + 0x40) + 0x40) / 1000;
  local_b4 = (undefined4 *)(iVar9 / 2);
  if (0 < (int)local_b4) {
    puStack_cc = (uint *)0x51cd0a;
    iVar3 = FUN_009b7d30();
    iVar9 = iVar9 - iVar3 % (int)local_b4;
  }
  iVar3 = DAT_012588e8;
  *(int *)(in_ECX + 0x98) = iVar9;
  if (*(int *)(iVar3 + 0xb60) == *(int *)(in_ECX + 0x20)) {
    puStack_cc = (uint *)0xe;
    piStack_d0 = (int *)0xdfe984;
    local_94 = 0xf;
    local_98 = 0;
    local_a8[0] = local_a8[0] & 0xffffff00;
    puStack_d4 = (uint *)0x51cd4c;
    FUN_00409350();
    local_c = 0;
    puStack_cc = (uint *)0x51cd58;
    piVar4 = (int *)FUN_009c7290();
    puStack_cc = local_a8;
    piStack_d0 = (int *)0x51cd66;
    (**(code **)(*piVar4 + 0x60))();
    local_c = 0xffffffff;
    if (0xf < local_94) {
      puStack_cc = (uint *)local_a8[0];
                    /* WARNING: Subroutine does not return */
      piStack_d0 = (int *)&UNK_0051cd82;
      FUN_00aae91b();
    }
    piStack_d0 = (int *)0x51cd8b;
    puVar5 = (undefined4 *)FUN_005061e0();
    iStack_b8 = *(int *)(in_ECX + 0x664);
    puStack_cc = (uint *)(*(int *)(*(int *)(DAT_012586dc + 0x40) + 0x4c) / 1000);
    piStack_d0 = (int *)0x51cdc2;
    local_b4 = puVar5;
    FUN_00424810();
    puStack_cc = auStack_34;
    piStack_d0 = &iStack_b8;
    puStack_d4 = (uint *)0x51cdd4;
    FUN_0043b700();
    local_c = 1;
    puStack_cc = (uint *)0x7;
    piStack_d0 = (int *)0xdfe994;
    local_94 = 0xf;
    local_98 = 0;
    local_a8[0] = local_a8[0] & 0xffffff00;
    puStack_d4 = (uint *)0x51cdff;
    FUN_00409350();
    puStack_cc = (uint *)0xffffffff;
    local_c._0_1_ = 2;
    piStack_d0 = (int *)0x0;
    puStack_d4 = local_a8;
    uStack_5c = 0xf;
    uStack_60 = 0;
    auStack_70[0] = auStack_70[0] & 0xffffff00;
    uStack_d8 = 0x51ce28;
    FUN_00408ed0();
    puStack_cc = (uint *)0xffffffff;
    piStack_d0 = (int *)0x0;
    puStack_d4 = auStack_34;
    local_c._0_1_ = 3;
    uStack_40 = 0xf;
    uStack_44 = 0;
    auStack_54[0] = 0;
    uStack_d8 = 0x51ce60;
    FUN_00408ed0();
    local_c._0_1_ = 4;
    iStack_b8 = puVar5[1];
    puStack_cc = (uint *)0x44;
    piStack_d0 = (int *)0x51ce76;
    puVar6 = (undefined1 *)FUN_00aae9af();
    local_c._0_1_ = 5;
    uVar2 = (undefined1)local_c;
    local_c._0_1_ = 5;
    puStack_ac = puVar6;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = (undefined1 *)0x0;
      local_c._0_1_ = uVar2;
    }
    else {
      puStack_cc = (uint *)0xffffffff;
      piStack_d0 = (int *)0x0;
      puStack_d4 = auStack_70;
      *(undefined4 *)(puVar6 + 0x14) = 0xf;
      *(undefined4 *)(puVar6 + 0x10) = 0;
      *puVar6 = 0;
      uStack_d8 = 0x51cea6;
      FUN_00408ed0();
      puStack_cc = (uint *)0xffffffff;
      local_c._0_1_ = 6;
      piStack_d0 = (int *)0x0;
      puStack_d4 = (uint *)auStack_54;
      *(undefined4 *)(puVar6 + 0x30) = 0xf;
      *(undefined4 *)(puVar6 + 0x2c) = 0;
      puVar6[0x1c] = 0;
      uStack_d8 = 0x51ceca;
      FUN_00408ed0();
      *(int *)(puVar6 + 0x38) = iStack_b8;
      *(undefined4 *)(puVar6 + 0x3c) = 0;
      puVar6[0x40] = 0;
    }
    iVar9 = local_b4[2];
    local_b4[1] = puVar6;
    local_b4[2] = iVar9 + 1;
    if (iVar9 == 0) {
      *local_b4 = puVar6;
    }
    else {
      *(undefined1 **)(iStack_b8 + 0x3c) = puVar6;
    }
    puStack_cc = (uint *)0x51cf03;
    FUN_00a39a80();
    local_c._0_1_ = 1;
    if (0xf < local_94) {
      puStack_cc = (uint *)local_a8[0];
                    /* WARNING: Subroutine does not return */
      piStack_d0 = (int *)&UNK_0051cf1c;
      FUN_00aae91b();
    }
    puStack_cc = (uint *)0x0;
    piStack_d0 = (int *)&DAT_00ded94d;
    uStack_5c = 0xf;
    uStack_60 = 0;
    auStack_70[0] = auStack_70[0] & 0xffffff00;
    puStack_d4 = (uint *)0x51cf3f;
    FUN_00409350();
    local_c._0_1_ = 7;
    puStack_cc = (uint *)0xd;
    piStack_d0 = (int *)0xdfe99c;
    uStack_78 = 0xf;
    uStack_7c = 0;
    uStack_8c = uStack_8c & 0xffffff00;
    puStack_d4 = (uint *)0x51cf63;
    FUN_00409350();
    local_c._0_1_ = 8;
    uVar2 = (undefined1)local_c;
    local_c._0_1_ = 8;
    puStack_ac = auStack_148;
    puStack_38 = auStack_148;
    iStack_b8 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(in_ECX + 0xbe4) * 4);
    puVar6 = auStack_148;
    puVar1 = auStack_148;
    if (DAT_01262ef4 == 0) {
      iStack_b0 = FUN_00aae9af(0x44);
      local_c._0_1_ = 9;
      if (iStack_b0 == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = FUN_006a4e30();
      }
      local_c._0_1_ = 8;
      FUN_006a59b0(uVar7);
      puVar6 = puStack_ac;
      puVar1 = puStack_38;
      uVar2 = (undefined1)local_c;
    }
    local_c._0_1_ = uVar2;
    puStack_38 = puVar1;
    puStack_ac = puVar6;
    uVar7 = *(undefined4 *)(in_ECX + 0x20);
    uVar12 = *(undefined4 *)(in_ECX + 0x1c);
    uVar11 = 0;
    puVar10 = auStack_70;
    puVar5 = local_b4;
    iVar9 = iStack_b8;
    uVar13 = uVar12;
    uVar14 = uVar7;
    uVar8 = FUN_006a55b0(local_b4,iStack_b8,puVar10,0,uVar12,uVar7,uVar12,uVar7);
    FUN_006a7ed0(puStack_ac,uVar8,puVar5,iVar9,puVar10,uVar11,uVar12,uVar7,uVar13,uVar14);
    local_c._0_1_ = 10;
    uVar2 = (undefined1)local_c;
    local_c._0_1_ = 10;
    if (DAT_01262ef4 == 0) {
      iStack_b0 = FUN_00aae9af();
      local_c._0_1_ = 0xb;
      if (iStack_b0 != 0) {
        FUN_006a4e30();
      }
      local_c._0_1_ = 10;
      FUN_006a59b0();
      uVar2 = (undefined1)local_c;
    }
    local_c._0_1_ = uVar2;
    if (DAT_01262ef4 == 0) {
      iStack_b0 = FUN_00aae9af();
      local_c._0_1_ = 0xc;
      if (iStack_b0 != 0) {
        FUN_006a4e30();
      }
      local_c._0_1_ = 10;
      FUN_006a59b0();
    }
    local_c = CONCAT31(local_c._1_3_,8);
    FUN_004e9540(DAT_01262ef4);
    if (0xf < uStack_78) {
      puStack_cc = (uint *)uStack_8c;
                    /* WARNING: Subroutine does not return */
      piStack_d0 = (int *)&UNK_0051d0e2;
      FUN_00aae91b();
    }
    uStack_78 = 0xf;
    uStack_7c = 0;
    uStack_8c = uStack_8c & 0xffffff00;
    if (0xf < uStack_5c) {
      puStack_cc = (uint *)auStack_70[0];
                    /* WARNING: Subroutine does not return */
      piStack_d0 = (int *)&UNK_0051d105;
      FUN_00aae91b();
    }
    if (0xf < uStack_20) {
      puStack_cc = (uint *)auStack_34[0];
                    /* WARNING: Subroutine does not return */
      piStack_d0 = (int *)&UNK_0051d11e;
      FUN_00aae91b();
    }
  }
  ExceptionList = local_14;
  return;
}

