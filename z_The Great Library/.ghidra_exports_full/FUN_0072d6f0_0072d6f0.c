// FUN_0072d6f0 @ 0072d6f0 body=[[0072d6f0, 0072d881] [0072d885, 0072d8ad] [0072d8b1, 0072da00] [0072da04, 0072da26] [0072da2a, 0072db7b] [0072db7f, 0072dba1] [0072dba5, 0072dd1e] [0072dd22, 0072dd3d] [0072dd41, 0072dd95]]


void FUN_0072d6f0(void)

{
  int iVar1;
  int *piVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int in_ECX;
  undefined1 **ppuVar8;
  undefined4 uVar9;
  uint *puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int local_148;
  undefined4 local_144;
  undefined1 auStack_140 [112];
  undefined4 uStack_d0;
  uint *puStack_cc;
  char *pcStack_c8;
  undefined1 **ppuStack_c4;
  undefined1 *local_b4;
  undefined1 *local_b0;
  uint local_ac [4];
  undefined4 local_9c;
  uint local_98;
  undefined4 local_90;
  uint local_88 [4];
  undefined4 local_78;
  uint local_74;
  int local_6c;
  undefined1 *local_68;
  undefined1 *local_64;
  undefined4 local_60;
  undefined1 local_5c;
  undefined1 *local_58;
  undefined1 local_54 [16];
  undefined4 local_44;
  undefined4 local_40;
  undefined1 local_38 [16];
  undefined4 local_28;
  undefined4 local_24;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00bacb57;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (*(int *)(in_ECX + 0x40) == *(int *)(DAT_012588e8 + 0xb60)) {
    local_68 = (undefined1 *)0x0;
    local_64 = (undefined1 *)0x0;
    local_60 = 0;
    local_5c = 0;
    local_c = 0;
    ppuStack_c4 = (undefined1 **)0x7;
    pcStack_c8 = "COUNTRY";
    local_98 = 0xf;
    local_9c = 0;
    local_ac[0] = local_ac[0] & 0xffffff00;
    puStack_cc = (uint *)0x72d767;
    ExceptionList = &local_14;
    local_6c = in_ECX;
    FUN_00409350();
    local_c._0_1_ = 1;
    ppuStack_c4 = (undefined1 **)0x72d77b;
    puVar4 = (undefined1 *)FUN_0055dd40();
    ppuStack_c4 = (undefined1 **)0xffffffff;
    pcStack_c8 = (char *)0x0;
    puStack_cc = local_ac;
    local_c._0_1_ = 2;
    local_40 = 0xf;
    local_44 = 0;
    local_54[0] = 0;
    uStack_d0 = 0x72d7ac;
    FUN_00408ed0();
    ppuStack_c4 = (undefined1 **)0xffffffff;
    local_c._0_1_ = 3;
    pcStack_c8 = (char *)0x0;
    local_24 = 0xf;
    local_28 = 0;
    local_38[0] = 0;
    uStack_d0 = 0x72d7dd;
    puStack_cc = (uint *)puVar4;
    FUN_00408ed0();
    ppuStack_c4 = (undefined1 **)0x44;
    local_c._0_1_ = 4;
    pcStack_c8 = (char *)0x72d7ec;
    local_b0 = (undefined1 *)FUN_00aae9af();
    local_c._0_1_ = 5;
    uVar3 = (undefined1)local_c;
    local_c._0_1_ = 5;
    if (local_b0 == (undefined1 *)0x0) {
      local_b0 = (undefined1 *)0x0;
      local_c._0_1_ = uVar3;
    }
    else {
      ppuStack_c4 = (undefined1 **)0xffffffff;
      pcStack_c8 = (char *)0x0;
      puStack_cc = (uint *)local_54;
      *(undefined4 *)(local_b0 + 0x14) = 0xf;
      *(undefined4 *)(local_b0 + 0x10) = 0;
      *local_b0 = 0;
      uStack_d0 = 0x72d81c;
      FUN_00408ed0();
      ppuStack_c4 = (undefined1 **)0xffffffff;
      local_c._0_1_ = 6;
      pcStack_c8 = (char *)0x0;
      puStack_cc = (uint *)local_38;
      *(undefined4 *)(local_b0 + 0x30) = 0xf;
      *(undefined4 *)(local_b0 + 0x2c) = 0;
      local_b0[0x1c] = 0;
      uStack_d0 = 0x72d843;
      FUN_00408ed0();
      *(undefined4 *)(local_b0 + 0x38) = 0;
      *(undefined4 *)(local_b0 + 0x3c) = 0;
      local_b0[0x40] = 0;
    }
    local_60 = 1;
    ppuStack_c4 = (undefined1 **)0x72d871;
    local_68 = local_b0;
    local_64 = local_b0;
    FUN_00a39a80();
    if (0xf < local_74) {
      ppuStack_c4 = (undefined1 **)local_88[0];
                    /* WARNING: Subroutine does not return */
      pcStack_c8 = &UNK_0072d882;
      FUN_00aae91b();
    }
    local_c._0_1_ = 0;
    local_74 = 0xf;
    local_78 = 0;
    local_88[0] = local_88[0] & 0xffffff00;
    if (0xf < local_98) {
      ppuStack_c4 = (undefined1 **)local_ac[0];
                    /* WARNING: Subroutine does not return */
      pcStack_c8 = &UNK_0072d8ae;
      FUN_00aae91b();
    }
    ppuStack_c4 = (undefined1 **)0x7;
    pcStack_c8 = "MISSION";
    local_98 = 0xf;
    local_9c = 0;
    local_ac[0] = local_ac[0] & 0xffffff00;
    puStack_cc = (uint *)0x72d8cd;
    FUN_00409350();
    local_c._0_1_ = 7;
    local_90 = *(undefined4 *)(in_ECX + 0x3c);
    ppuStack_c4 = (undefined1 **)0x72d8fa;
    puVar4 = (undefined1 *)FUN_008b1c70();
    ppuStack_c4 = (undefined1 **)0xffffffff;
    local_c._0_1_ = 8;
    pcStack_c8 = (char *)0x0;
    puStack_cc = local_ac;
    local_40 = 0xf;
    local_44 = 0;
    local_54[0] = 0;
    uStack_d0 = 0x72d92c;
    FUN_00408ed0();
    ppuStack_c4 = (undefined1 **)0xffffffff;
    local_c._0_1_ = 9;
    pcStack_c8 = (char *)0x0;
    local_24 = 0xf;
    local_28 = 0;
    local_38[0] = 0;
    uStack_d0 = 0x72d959;
    puStack_cc = (uint *)puVar4;
    FUN_00408ed0();
    ppuStack_c4 = (undefined1 **)0x44;
    local_c._0_1_ = 10;
    pcStack_c8 = (char *)0x72d968;
    local_b4 = (undefined1 *)FUN_00aae9af();
    local_c._0_1_ = 0xb;
    uVar3 = (undefined1)local_c;
    local_c._0_1_ = 0xb;
    if (local_b4 == (undefined1 *)0x0) {
      local_b4 = (undefined1 *)0x0;
      local_c._0_1_ = uVar3;
    }
    else {
      ppuStack_c4 = (undefined1 **)0xffffffff;
      pcStack_c8 = (char *)0x0;
      puStack_cc = (uint *)local_54;
      *(undefined4 *)(local_b4 + 0x14) = 0xf;
      *(undefined4 *)(local_b4 + 0x10) = 0;
      *local_b4 = 0;
      uStack_d0 = 0x72d994;
      FUN_00408ed0();
      ppuStack_c4 = (undefined1 **)0xffffffff;
      local_c._0_1_ = 0xc;
      pcStack_c8 = (char *)0x0;
      puStack_cc = (uint *)local_38;
      *(undefined4 *)(local_b4 + 0x30) = 0xf;
      *(undefined4 *)(local_b4 + 0x2c) = 0;
      local_b4[0x1c] = 0;
      uStack_d0 = 0x72d9b7;
      FUN_00408ed0();
      *(undefined1 **)(local_b4 + 0x38) = local_b0;
      *(undefined4 *)(local_b4 + 0x3c) = 0;
      local_b4[0x40] = 0;
    }
    *(undefined1 **)(local_b0 + 0x3c) = local_b4;
    local_60 = 2;
    ppuStack_c4 = (undefined1 **)0x72d9ec;
    local_64 = local_b4;
    FUN_00a39a80();
    if (0xf < local_74) {
      ppuStack_c4 = (undefined1 **)local_88[0];
                    /* WARNING: Subroutine does not return */
      pcStack_c8 = &UNK_0072da01;
      FUN_00aae91b();
    }
    local_c._0_1_ = 0;
    local_74 = 0xf;
    local_78 = 0;
    local_88[0] = local_88[0] & 0xffffff00;
    if (0xf < local_98) {
      ppuStack_c4 = (undefined1 **)local_ac[0];
                    /* WARNING: Subroutine does not return */
      pcStack_c8 = &UNK_0072da27;
      FUN_00aae91b();
    }
    ppuStack_c4 = (undefined1 **)0x4;
    pcStack_c8 = "DESC";
    local_98 = 0xf;
    local_9c = 0;
    local_ac[0] = local_ac[0] & 0xffffff00;
    puStack_cc = (uint *)0x72da46;
    FUN_00409350();
    iVar1 = local_6c;
    local_c._0_1_ = 0xd;
    local_90 = *(undefined4 *)(local_6c + 0x3c);
    puVar5 = (undefined4 *)(local_6c + 0x3c);
    ppuStack_c4 = (undefined1 **)local_88;
    pcStack_c8 = (char *)0x72da7f;
    puVar4 = (undefined1 *)FUN_008b2080();
    ppuStack_c4 = (undefined1 **)0xffffffff;
    local_c._0_1_ = 0xe;
    pcStack_c8 = (char *)0x0;
    puStack_cc = local_ac;
    local_40 = 0xf;
    local_44 = 0;
    local_54[0] = 0;
    uStack_d0 = 0x72daac;
    FUN_00408ed0();
    ppuStack_c4 = (undefined1 **)0xffffffff;
    local_c._0_1_ = 0xf;
    pcStack_c8 = (char *)0x0;
    local_24 = 0xf;
    local_28 = 0;
    local_38[0] = 0;
    uStack_d0 = 0x72dad9;
    puStack_cc = (uint *)puVar4;
    FUN_00408ed0();
    ppuStack_c4 = (undefined1 **)0x44;
    local_c._0_1_ = 0x10;
    pcStack_c8 = (char *)0x72dae8;
    puVar4 = (undefined1 *)FUN_00aae9af();
    local_c._0_1_ = 0x11;
    uVar3 = (undefined1)local_c;
    local_c._0_1_ = 0x11;
    local_1c = puVar4;
    if (puVar4 == (undefined1 *)0x0) {
      local_64 = (undefined1 *)0x0;
      local_c._0_1_ = uVar3;
    }
    else {
      ppuStack_c4 = (undefined1 **)0xffffffff;
      pcStack_c8 = (char *)0x0;
      puStack_cc = (uint *)local_54;
      *(undefined4 *)(puVar4 + 0x14) = 0xf;
      *(undefined4 *)(puVar4 + 0x10) = 0;
      *puVar4 = 0;
      uStack_d0 = 0x72db17;
      FUN_00408ed0();
      ppuStack_c4 = (undefined1 **)0xffffffff;
      local_c._0_1_ = 0x12;
      pcStack_c8 = (char *)0x0;
      puStack_cc = (uint *)local_38;
      *(undefined4 *)(puVar4 + 0x30) = 0xf;
      *(undefined4 *)(puVar4 + 0x2c) = 0;
      puVar4[0x1c] = 0;
      uStack_d0 = 0x72db3a;
      FUN_00408ed0();
      *(undefined1 **)(puVar4 + 0x38) = local_b4;
      *(undefined4 *)(puVar4 + 0x3c) = 0;
      puVar4[0x40] = 0;
      local_64 = puVar4;
    }
    *(undefined1 **)(local_b4 + 0x3c) = local_64;
    local_60 = 3;
    ppuStack_c4 = (undefined1 **)0x72db67;
    FUN_00a39a80();
    if (0xf < local_74) {
      ppuStack_c4 = (undefined1 **)local_88[0];
                    /* WARNING: Subroutine does not return */
      pcStack_c8 = &UNK_0072db7c;
      FUN_00aae91b();
    }
    local_c._0_1_ = 0;
    local_74 = 0xf;
    local_78 = 0;
    local_88[0] = local_88[0] & 0xffffff00;
    if (0xf < local_98) {
      ppuStack_c4 = (undefined1 **)local_ac[0];
                    /* WARNING: Subroutine does not return */
      pcStack_c8 = &UNK_0072dba2;
      FUN_00aae91b();
    }
    ppuStack_c4 = (undefined1 **)0x0;
    pcStack_c8 = "";
    local_98 = 0xf;
    local_9c = 0;
    local_ac[0] = local_ac[0] & 0xffffff00;
    puStack_cc = (uint *)0x72dbc0;
    FUN_00409350();
    local_c._0_1_ = 0x13;
    ppuStack_c4 = (undefined1 **)0xf;
    pcStack_c8 = "MISSIONCANCELUS";
    local_74 = 0xf;
    local_78 = 0;
    local_88[0] = local_88[0] & 0xffffff00;
    puStack_cc = (uint *)0x72dbe3;
    FUN_00409350();
    local_c._0_1_ = 0x14;
    uVar3 = (undefined1)local_c;
    local_c._0_1_ = 0x14;
    local_1c = auStack_140;
    local_58 = (undefined1 *)&local_148;
    local_148 = 0;
    local_144 = 0;
    local_90 = 0x2d2d2d;
    piVar2 = &local_148;
    puVar4 = auStack_140;
    if (DAT_01262ef4 == 0) {
      local_58 = (undefined1 *)FUN_00aae9af(0x44);
      local_c._0_1_ = 0x15;
      if (local_58 == (undefined1 *)0x0) {
        uVar6 = 0;
      }
      else {
        uVar6 = FUN_006a4e30();
      }
      local_c._0_1_ = 0x14;
      FUN_006a59b0(uVar6);
      piVar2 = (int *)local_58;
      puVar4 = local_1c;
      uVar3 = (undefined1)local_c;
    }
    local_c._0_1_ = uVar3;
    local_1c = puVar4;
    local_58 = (undefined1 *)piVar2;
    uVar6 = *(undefined4 *)(iVar1 + 0x40);
    uVar12 = *puVar5;
    uVar14 = 0;
    uVar11 = 0;
    puVar10 = local_ac;
    uVar9 = 0;
    ppuVar8 = &local_68;
    uVar13 = local_90;
    uVar7 = FUN_006a55b0(ppuVar8,0,puVar10,0,uVar12,uVar6,local_90,0);
    FUN_006a7ed0(auStack_140,uVar7,ppuVar8,uVar9,puVar10,uVar11,uVar12,uVar6,uVar13,uVar14);
    local_c._0_1_ = 0x16;
    if (DAT_01262ef4 == 0) {
      local_144 = 0x44;
      local_148 = 0x72dcbe;
      local_58 = (undefined1 *)FUN_00aae9af();
      local_c._0_1_ = 0x17;
      if (local_58 == (undefined1 *)0x0) {
        local_144 = 0;
      }
      else {
        local_144 = 0x72dcdb;
        local_144 = FUN_006a4e30();
      }
      local_c._0_1_ = 0x16;
      local_148 = 0x72dcf2;
      FUN_006a59b0();
    }
    local_144 = 0;
    local_148 = local_6c;
    local_c = CONCAT31(local_c._1_3_,0x14);
    FUN_0072de80(DAT_01262ef4);
    if (0xf < local_74) {
      ppuStack_c4 = (undefined1 **)local_88[0];
                    /* WARNING: Subroutine does not return */
      pcStack_c8 = &UNK_0072dd1f;
      FUN_00aae91b();
    }
    local_74 = 0xf;
    local_78 = 0;
    local_88[0] = local_88[0] & 0xffffff00;
    if (0xf < local_98) {
      ppuStack_c4 = (undefined1 **)local_ac[0];
                    /* WARNING: Subroutine does not return */
      pcStack_c8 = &UNK_0072dd3e;
      FUN_00aae91b();
    }
    ppuStack_c4 = &local_68;
    local_98 = 0xf;
    local_9c = 0;
    local_ac[0] = local_ac[0] & 0xffffff00;
    local_c = 0xffffffff;
    pcStack_c8 = (char *)0x72dd62;
    FUN_0042b9f0();
    in_ECX = local_6c;
  }
  local_90 = *(undefined4 *)(in_ECX + 0x3c);
  ppuStack_c4 = (undefined1 **)0x72dd81;
  FUN_00519ec0();
  ExceptionList = local_14;
  return;
}

