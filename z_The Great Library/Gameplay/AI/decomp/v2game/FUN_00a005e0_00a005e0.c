// FUN_00a005e0 @ 00a005e0 body=[[00a005e0, 00a00671] [00a00675, 00a00a09] [00a00a6f, 00a00d2e] [00a00d94, 00a00ef8] [00a00efc, 00a0112e] [00a01132, 00a012a5] [00a012a9, 00a01459] [00a0145d, 00a0149d] [00a014a1, 00a014e1] [00a014e5, 00a01525] [00a01529, 00a0156c] [00a01570, 00a015cc] [00a015d0, 00a01618] [00a0161c, 00a0166d] [00a01671, 00a01691] [00a01712, 00a01896] [00a0189a, 00a01a0d] [00a01a11, 00a01a2a] [00a01a90, 00a01e6f] [00a01e73, 00a01e87] [00a01e8b, 00a01e9b]]


void FUN_00a005e0(void)

{
  uint *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int in_ECX;
  uint uVar8;
  uint uVar9;
  uint **ppuVar10;
  uint uStack_df0;
  undefined1 *puStack_dec;
  undefined1 *puStack_de8;
  uint uStack_de4;
  uint **ppuStack_de0;
  uint **ppuStack_ddc;
  int iStack_dd0;
  int iStack_dcc;
  undefined4 uStack_dc8;
  uint uStack_dc4;
  int iStack_dc0;
  undefined *local_dbc;
  uint *local_db8;
  undefined1 local_3f0 [140];
  undefined1 local_364 [244];
  undefined1 local_270 [80];
  undefined4 local_220;
  undefined4 local_21c;
  undefined4 local_218;
  undefined1 *local_214;
  uint local_210;
  int local_20c;
  uint local_208;
  undefined1 local_204 [16];
  undefined1 local_1f4 [16];
  uint local_1e4;
  undefined4 local_1d4;
  uint local_1d0;
  uint local_1c8;
  undefined4 local_1b8;
  uint local_1b4;
  uint local_1ac;
  undefined4 local_19c;
  uint local_198;
  uint local_190;
  undefined4 local_180;
  uint local_17c;
  uint local_174;
  undefined4 local_164;
  uint local_160;
  uint local_158;
  undefined4 local_148;
  uint local_144;
  uint local_13c;
  undefined4 local_12c;
  uint local_128;
  uint local_120;
  undefined4 local_110;
  uint local_10c;
  uint local_104;
  undefined4 local_f4;
  uint local_f0;
  uint local_e8;
  undefined4 local_d8;
  uint local_d4;
  uint local_cc [4];
  undefined4 local_bc;
  uint local_b8;
  undefined1 local_b0 [20];
  uint local_9c;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  uint local_6c;
  uint **local_64;
  int local_60;
  int local_5c;
  uint **local_58;
  undefined **local_54;
  undefined4 local_50;
  int local_4c;
  int local_48;
  undefined4 local_44;
  uint *local_3c;
  uint *local_38;
  undefined8 local_34;
  undefined1 local_29;
  int *local_28;
  uint local_24 [2];
  uint **local_1c;
  int *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b5671b;
  local_10 = ExceptionList;
  local_14 = &stack0xfffff24c;
  uVar8 = 0;
  local_24[1] = 0;
  local_dbc = (undefined *)0xa00614;
  ExceptionList = &local_10;
  local_5c = in_ECX;
  cVar2 = FUN_009fabb0();
  if (cVar2 == '\0') {
    ExceptionList = local_10;
    return;
  }
  local_db8 = (uint *)0xffffffff;
  local_dbc = (undefined *)0x0;
  iStack_dc0 = in_ECX + 8;
  local_b8 = 0xf;
  local_bc = 0;
  local_cc[0] = local_cc[0] & 0xffffff00;
  uStack_dc4 = 0xa00644;
  FUN_00408ed0();
  local_db8 = local_cc;
  local_8 = 0;
  local_dbc = (undefined *)0xa00653;
  local_60 = FUN_009c1bd0();
  piVar5 = DAT_01258b64;
  local_8 = 0xffffffff;
  if (0xf < local_b8) {
    local_db8 = (uint *)local_cc[0];
                    /* WARNING: Subroutine does not return */
    local_dbc = &UNK_00a00672;
    FUN_00aae91b();
  }
  local_b8 = 0xf;
  local_bc = 0;
  local_cc[0] = local_cc[0] & 0xffffff00;
  switch(*(undefined4 *)(in_ECX + 0x74)) {
  case 1:
    local_18 = (int *)&local_dbc;
    local_dbc = DAT_00f0d838;
    local_db8 = (uint *)DAT_00f0d83c;
    iStack_dc0 = 0xa006be;
    local_28 = (int *)FUN_009c16d0();
    iStack_dc0 = 0x50;
    uStack_dc4 = 0xa006c8;
    iVar4 = FUN_00aae9af();
    local_8 = 1;
    local_18 = (int *)iVar4;
    if (iVar4 == 0) {
      local_db8 = (uint *)0x0;
    }
    else {
      local_db8 = (uint *)local_204;
      local_dbc = (undefined *)local_28;
      iStack_dc0 = 0xa006eb;
      local_db8 = (uint *)FUN_00a71fa0();
      local_8 = CONCAT31(local_8._1_3_,2);
      local_dbc = (undefined *)(uint)*(ushort *)(in_ECX + 0x28);
      local_24[1] = 1;
      uStack_dc4 = 0xa00706;
      iStack_dc0 = iVar4;
      local_db8 = (uint *)FUN_00a021c0();
    }
    local_8 = 3;
    local_dbc = (undefined *)0xa0071f;
    (**(code **)(**(int **)(local_60 + 0x38) + 0x18))();
    if (iVar4 != 0) {
      local_dbc = (undefined *)0xa00733;
      FUN_00461f90();
      ExceptionList = local_10;
      return;
    }
    break;
  case 2:
    local_18 = (int *)&local_dbc;
    local_dbc = DAT_00f0d838;
    local_db8 = (uint *)DAT_00f0d83c;
    iStack_dc0 = 0xa00762;
    local_28 = (int *)FUN_009c16d0();
    iStack_dc0 = 0x54;
    uStack_dc4 = 0xa0076c;
    iVar4 = FUN_00aae9af();
    local_8 = 4;
    local_18 = (int *)iVar4;
    if (iVar4 == 0) {
      local_db8 = (uint *)0x0;
    }
    else {
      local_db8 = (uint *)local_1f4;
      local_dbc = (undefined *)local_28;
      iStack_dc0 = 0xa0078f;
      iStack_dc0 = FUN_00a72080();
      local_db8 = (uint *)0x1;
      local_8 = CONCAT31(local_8._1_3_,5);
      uStack_dc4 = (uint)*(ushort *)(in_ECX + 0x28);
      local_dbc = (undefined *)0x0;
      uStack_dc8 = *(undefined4 *)(in_ECX + 0x24);
      uVar8 = 2;
      local_24[1] = 2;
      iStack_dd0 = 0xa007af;
      iStack_dcc = iVar4;
      local_db8 = (uint *)FUN_00a04500();
    }
    local_8 = 6;
    local_dbc = (undefined *)0xa007c8;
    (**(code **)(**(int **)(local_60 + 0x38) + 0x18))();
    if (uVar8 != 0) {
      local_dbc = (undefined *)0xa007dc;
      FUN_00461f90();
      ExceptionList = local_10;
      return;
    }
    break;
  case 3:
    local_db8 = (uint *)0xa00802;
    cVar2 = FUN_0040b360();
    if (cVar2 == '\0') {
      local_db8 = (uint *)0xa00a7f;
      FUN_009885d0();
      local_8 = 0x12;
      local_db8 = (uint *)0xa00a92;
      cVar2 = FUN_00416db0();
      local_8 = 0xffffffff;
      local_db8 = (uint *)0xa00aa5;
      FUN_00408ad0();
      if (cVar2 != '\0') {
        ExceptionList = local_10;
        return;
      }
      local_db8 = (uint *)0xa00abd;
      FUN_009885d0();
      local_8 = 0x13;
      local_db8 = (uint *)0xa00ad4;
      FUN_009885d0();
      local_db8 = (uint *)&DAT_013f0670;
      local_8._0_1_ = 0x14;
      local_dbc = (undefined *)0xa00aea;
      FUN_00988f20();
      local_db8 = (uint *)local_270;
      local_8._0_1_ = 0x15;
      local_dbc = (undefined *)0xa00aff;
      FUN_00988f20();
      local_db8 = (uint *)0xa00b0a;
      FUN_00408ad0();
      local_db8 = (uint *)0xa00b15;
      FUN_00408ad0();
      local_db8 = (uint *)0xa00b20;
      FUN_00408ad0();
      local_18 = &iStack_dd0;
      local_8._0_1_ = 0x1a;
      FUN_00401320();
      (**(code **)(*piVar5 + 0x10))();
      local_3c = (uint *)0x0;
      local_38 = (uint *)0x0;
      local_34 = (double)((ulonglong)local_34._4_4_ << 0x20);
      local_8._0_1_ = 0x1c;
      for (uVar8 = 0; uVar8 < (uint)(local_48 - local_4c >> 4); uVar8 = uVar8 + 1) {
        ppuStack_ddc = (uint **)0xa00b73;
        FUN_00a714a0();
        cVar2 = FUN_0040b360();
        FUN_00408ad0();
        if (cVar2 == '\0') {
          ppuStack_ddc = (uint **)0xa00ba5;
          FUN_00a714a0();
          cVar2 = FUN_0040b360();
          FUN_00408ad0();
          local_1c = (uint **)(uint)(cVar2 != '\0');
        }
        else {
          local_1c = (uint **)0x2;
        }
        ppuStack_ddc = (uint **)0xa00bd4;
        FUN_00a714a0();
        cVar2 = FUN_0040b360();
        FUN_00408ad0();
        local_28 = (int *)(uint)(cVar2 != '\0');
        local_24[0] = local_24[0] & 0xffffff00;
        ppuStack_ddc = (uint **)0xa00c07;
        FUN_00a714a0();
        ppuStack_ddc = (uint **)0xa00c15;
        iVar4 = FUN_00aaf0c5();
        FUN_00408ad0();
        if (iVar4 == 1) {
          local_24[0] = CONCAT31(local_24[0]._1_3_,1);
        }
        ppuStack_ddc = (uint **)0xa00c43;
        FUN_00a714a0();
        local_8._0_1_ = 0x1d;
        ppuStack_ddc = (uint **)0xa00c5b;
        FUN_00a714a0();
        local_8._0_1_ = 0x1e;
        ppuStack_ddc = (uint **)0xa00c6d;
        uStack_de4 = FUN_00aaf0c5();
        ppuStack_ddc = (uint **)local_24[0];
        ppuStack_de0 = local_1c;
        puStack_de8 = (undefined1 *)0xa00c8a;
        FUN_00a17b40();
        local_8._0_1_ = 0x1f;
        ppuStack_ddc = (uint **)0xa00c99;
        FUN_00a12950();
        FUN_00a17ba0();
        FUN_00408ad0();
        local_8._0_1_ = 0x1c;
        FUN_00408ad0();
      }
      ppuStack_ddc = (uint **)0xa00cc5;
      local_18 = (int *)FUN_00aae9af();
      local_8._0_1_ = 0x20;
      if (local_18 != (int *)0x0) {
        ppuStack_ddc = &local_3c;
        ppuStack_de0 = (uint **)(uint)*(ushort *)(local_5c + 0x28);
        uStack_de4 = *(uint *)(local_5c + 0x24);
        puStack_dec = (undefined1 *)0xa00ceb;
        puStack_de8 = (undefined1 *)local_18;
        FUN_00a0a580();
      }
      local_8._0_1_ = 0x1c;
      ppuStack_ddc = (uint **)0xa00d01;
      (**(code **)(**(int **)(local_60 + 0x38) + 0x18))();
      local_8 = CONCAT31(local_8._1_3_,0x1b);
    }
    else {
      local_db8 = (uint *)0xa00817;
      FUN_009885d0();
      local_18 = &iStack_dd0;
      local_8._0_1_ = 8;
      local_8._1_3_ = 0;
      FUN_00401320();
      (**(code **)(*piVar5 + 0x10))();
      local_3c = (uint *)0x0;
      local_38 = (uint *)0x0;
      local_34 = (double)((ulonglong)local_34._4_4_ << 0x20);
      local_8._0_1_ = 10;
      for (uVar8 = 0; uVar8 < (uint)(local_48 - local_4c >> 4); uVar8 = uVar8 + 1) {
        ppuStack_ddc = (uint **)0xa00873;
        FUN_00a714a0();
        cVar2 = FUN_0040b360();
        FUN_00408ad0();
        if (cVar2 == '\0') {
          ppuStack_ddc = (uint **)0xa008a5;
          FUN_00a714a0();
          cVar2 = FUN_0040b360();
          FUN_00408ad0();
          local_1c = (uint **)(uint)(cVar2 != '\0');
        }
        else {
          local_1c = (uint **)0x2;
        }
        ppuStack_ddc = (uint **)0xa008d4;
        FUN_00a714a0();
        cVar2 = FUN_0040b360();
        FUN_00408ad0();
        local_28 = (int *)(uint)(cVar2 != '\0');
        local_24[0] = local_24[0] & 0xffffff00;
        ppuStack_ddc = (uint **)0xa00907;
        FUN_00a714a0();
        ppuStack_ddc = (uint **)0xa00915;
        iVar4 = FUN_00aaf0c5();
        FUN_00408ad0();
        if (iVar4 == 1) {
          local_24[0] = CONCAT31(local_24[0]._1_3_,1);
        }
        ppuStack_ddc = (uint **)0xa00943;
        FUN_00a714a0();
        local_8._0_1_ = 0xb;
        ppuStack_ddc = (uint **)0xa0095b;
        FUN_00a714a0();
        local_8._0_1_ = 0xc;
        ppuStack_ddc = (uint **)0xa0096d;
        uStack_de4 = FUN_00aaf0c5();
        ppuStack_ddc = (uint **)local_24[0];
        ppuStack_de0 = local_1c;
        puStack_de8 = (undefined1 *)0xa0098a;
        FUN_00a17b40();
        local_8._0_1_ = 0xd;
        ppuStack_ddc = (uint **)0xa00999;
        FUN_00a12950();
        FUN_00a17ba0();
        FUN_00408ad0();
        local_8._0_1_ = 10;
        FUN_00408ad0();
      }
      ppuStack_ddc = (uint **)0xa009c5;
      local_18 = (int *)FUN_00aae9af();
      local_8._0_1_ = 0xe;
      if (local_18 != (int *)0x0) {
        ppuStack_ddc = &local_3c;
        ppuStack_de0 = (uint **)(uint)*(ushort *)(local_5c + 0x28);
        uStack_de4 = *(uint *)(local_5c + 0x24);
        puStack_dec = (undefined1 *)0xa009eb;
        puStack_de8 = (undefined1 *)local_18;
        FUN_00a0a580();
      }
      local_8._0_1_ = 10;
      ppuStack_ddc = (uint **)0xa00a01;
      (**(code **)(**(int **)(local_60 + 0x38) + 0x18))();
      local_8 = CONCAT31(local_8._1_3_,9);
    }
    ppuStack_ddc = &local_3c;
    ppuStack_de0 = (uint **)0xa00d0e;
    FUN_00976940();
    ppuStack_ddc = (uint **)0xa00d16;
    FUN_009fc110();
    ppuStack_ddc = (uint **)0xa00d1e;
    FUN_00408ad0();
    ExceptionList = local_10;
    return;
  case 4:
    local_28 = DAT_01258b64;
    local_db8 = (uint *)0xa00dac;
    uVar6 = FUN_009885d0();
    local_8 = 0x24;
    local_db8 = (uint *)0xa00dc5;
    local_58 = (uint **)FUN_009885d0();
    local_8._0_1_ = 0x25;
    local_db8 = (uint *)0xa00ddc;
    FUN_009885d0();
    local_db8 = (uint *)&DAT_013f0670;
    local_8._0_1_ = 0x26;
    local_dbc = (undefined *)0xa00df2;
    FUN_00988f20();
    local_8._0_1_ = 0x27;
    local_db8 = (uint *)local_58;
    local_dbc = (undefined *)0xa00e07;
    FUN_00988f20();
    local_db8 = (uint *)(local_5c + 0x3c);
    local_8._0_1_ = 0x28;
    local_dbc = (undefined *)0xa00e1f;
    FUN_00988f20();
    local_8._0_1_ = 0x29;
    local_dbc = (undefined *)0xa00e2e;
    local_db8 = (uint *)uVar6;
    FUN_00988f20();
    local_db8 = (uint *)0xa00e39;
    FUN_00408ad0();
    local_db8 = (uint *)0xa00e44;
    FUN_00408ad0();
    local_db8 = (uint *)0xa00e4f;
    FUN_00408ad0();
    local_db8 = (uint *)0xa00e5a;
    FUN_00408ad0();
    local_db8 = (uint *)0xa00e65;
    FUN_00408ad0();
    local_db8 = (uint *)0xa00e70;
    FUN_00408ad0();
    local_18 = &iStack_dd0;
    local_8._0_1_ = 0x31;
    FUN_00401320();
    (**(code **)(*local_28 + 0x10))();
    local_3c = (uint *)0x0;
    local_38 = (uint *)0x0;
    local_34 = (double)((ulonglong)local_34._4_4_ << 0x20);
    local_8._0_1_ = 0x33;
    local_1c = (uint **)0x0;
    while (local_1c < (uint **)(local_48 - local_4c >> 4)) {
      local_58 = (uint **)CONCAT31(local_58._1_3_,1);
      ppuStack_ddc = (uint **)0xa00eca;
      FUN_00a714a0();
      ppuStack_ddc = (uint **)0xa00edc;
      iVar4 = FUN_00aaf0c5();
      local_29 = iVar4 == 0;
      if (0xf < local_1b4) {
                    /* WARNING: Subroutine does not return */
        ppuStack_ddc = (uint **)&UNK_00a00ef9;
        FUN_00aae91b();
      }
      uVar9 = 0;
      local_1b4 = 0xf;
      local_1b8 = 0;
      local_1c8 = local_1c8 & 0xffffff00;
      if ((bool)local_29) {
        local_58 = (uint **)((uint)local_58 & 0xffffff00);
      }
      ppuStack_ddc = (uint **)0xa00f29;
      local_18 = (int *)FUN_00aae9af();
      local_8._0_1_ = 0x34;
      if (local_18 != (int *)0x0) {
        ppuStack_ddc = (uint **)0xa00f4d;
        FUN_00a714a0();
        local_8 = CONCAT31(local_8._1_3_,0x35);
        local_24[1] = uVar8 | 4;
        ppuStack_ddc = (uint **)0xa00f63;
        FUN_009fa790();
        ppuStack_ddc = (uint **)0xa00f75;
        local_24[0] = FUN_00a714a0();
        local_8 = 0x36;
        local_24[1] = uVar8 | 0xc;
        ppuStack_ddc = (uint **)0xa00f97;
        local_64 = (uint **)FUN_00a714a0();
        local_8 = 0x37;
        local_24[1] = uVar8 | 0x1c;
        ppuStack_ddc = (uint **)0xa00fba;
        uVar9 = FUN_00a714a0();
        local_8 = 0x38;
        local_24[1] = uVar8 | 0x3c;
        ppuStack_ddc = (uint **)0xa00fdc;
        FUN_00a714a0();
        local_8 = 0x39;
        ppuStack_ddc = local_58;
        ppuStack_de0 = local_64;
        uVar8 = 0x7c;
        local_24[1] = 0x7c;
        puStack_de8 = (undefined1 *)0xa00ffb;
        uStack_de4 = uVar9;
        puStack_de8 = (undefined1 *)FUN_00a16a40();
        puStack_dec = (undefined1 *)local_18;
        uStack_df0 = 0xa0100f;
        uVar9 = FUN_00a15f70();
      }
      local_8 = 0x3e;
      local_24[0] = uVar9;
      if ((local_24 < local_38) && (local_3c <= local_24)) {
        iVar4 = (int)local_24 - (int)local_3c;
        if (local_38 == (uint *)local_34) {
          FUN_00a513f0();
        }
        puVar1 = local_38;
        if (local_38 != (uint *)0x0) {
          *local_38 = local_3c[iVar4 >> 2];
        }
      }
      else {
        if (local_38 == (uint *)local_34) {
          FUN_00a513f0();
        }
        puVar1 = local_38;
        if (local_38 != (uint *)0x0) {
          *local_38 = uVar9;
        }
      }
      local_38 = puVar1 + 1;
      if ((uVar8 & 0x40) != 0) {
        uVar8 = uVar8 & 0xffffffbf;
        local_24[1] = uVar8;
        FUN_00408ad0();
      }
      if ((uVar8 & 0x20) != 0) {
        uVar8 = uVar8 & 0xffffffdf;
        local_24[1] = uVar8;
        FUN_00408ad0();
      }
      if ((uVar8 & 0x10) != 0) {
        uVar8 = uVar8 & 0xffffffef;
        local_24[1] = uVar8;
        FUN_00408ad0();
      }
      if ((uVar8 & 8) != 0) {
        uVar8 = uVar8 & 0xfffffff7;
        local_24[1] = uVar8;
        FUN_00408ad0();
      }
      local_8._0_1_ = 0x33;
      local_8._1_3_ = 0;
      if ((uVar8 & 4) != 0) {
        uVar8 = uVar8 & 0xfffffffb;
        local_24[1] = uVar8;
        FUN_00408ad0();
      }
      ppuStack_ddc = (uint **)0xa01100;
      FUN_00a714a0();
      ppuStack_ddc = (uint **)0xa01112;
      uVar6 = FUN_00aaf0c5();
      *(undefined4 *)(*puVar1 + 0x68) = uVar6;
      if (0xf < local_17c) {
                    /* WARNING: Subroutine does not return */
        ppuStack_ddc = (uint **)&UNK_00a0112f;
        FUN_00aae91b();
      }
      local_1c = (uint **)((int)local_1c + 1);
      local_17c = 0xf;
      local_180 = 0;
      local_190 = local_190 & 0xffffff00;
      *(undefined4 *)(*puVar1 + 0x20) = 3;
    }
    cVar2 = FUN_0040b360();
    if (cVar2 != '\0') {
      FUN_009885d0();
      local_8._0_1_ = 0x3f;
      FUN_009885d0();
      local_8._0_1_ = 0x40;
      ppuStack_ddc = (uint **)0xa011b7;
      FUN_00988f20();
      local_8._0_1_ = 0x41;
      ppuStack_ddc = (uint **)0xa011c9;
      FUN_00988f20();
      FUN_00408ad0();
      FUN_00408ad0();
      local_8._0_1_ = 0x45;
      FUN_00408ad0();
      local_18 = (int *)&uStack_df0;
      ppuStack_ddc = (uint **)0xf;
      ppuStack_de0 = (uint **)0x0;
      uStack_df0 = uStack_df0 & 0xffffff00;
      FUN_00408ed0(local_b0,0,0xffffffff);
      iVar4 = (**(code **)(*local_28 + 0x10))(local_364);
      local_8._0_1_ = 0x46;
      local_50 = *(undefined4 *)(iVar4 + 4);
      FUN_00a11e60();
      local_8 = CONCAT31(local_8._1_3_,0x45);
      FUN_009fc110();
      local_1c = (uint **)0x0;
      while (local_1c < (uint **)(local_48 - local_4c >> 4)) {
        local_28 = (int *)CONCAT31(local_28._1_3_,1);
        ppuStack_ddc = (uint **)0xa01277;
        FUN_00a714a0();
        ppuStack_ddc = (uint **)0xa01289;
        iVar4 = FUN_00aaf0c5();
        local_29 = iVar4 == 0;
        if (0xf < local_128) {
                    /* WARNING: Subroutine does not return */
          ppuStack_ddc = (uint **)&UNK_00a012a6;
          FUN_00aae91b();
        }
        uVar9 = 0;
        local_128 = 0xf;
        local_12c = 0;
        local_13c = local_13c & 0xffffff00;
        if ((bool)local_29) {
          local_28 = (int *)((uint)local_28 & 0xffffff00);
        }
        ppuStack_ddc = (uint **)0xa012d6;
        local_58 = (uint **)FUN_00aae9af();
        local_8._0_1_ = 0x47;
        if (local_58 != (uint **)0x0) {
          ppuStack_ddc = (uint **)0xa012fa;
          FUN_00a714a0();
          local_8 = CONCAT31(local_8._1_3_,0x48);
          local_24[1] = uVar8 | 0x80;
          ppuStack_ddc = (uint **)0xa01313;
          FUN_009fa790();
          ppuStack_ddc = (uint **)0xa01325;
          local_18 = (int *)FUN_00a714a0();
          local_8 = 0x49;
          local_24[1] = uVar8 | 0x180;
          ppuStack_ddc = (uint **)0xa0134a;
          local_64 = (uint **)FUN_00a714a0();
          local_8 = 0x4a;
          local_24[1] = uVar8 | 0x380;
          ppuStack_ddc = (uint **)0xa01370;
          uVar9 = FUN_00a714a0();
          local_8 = 0x4b;
          local_24[1] = uVar8 | 0x780;
          ppuStack_ddc = (uint **)0xa01395;
          FUN_00a714a0();
          local_8 = 0x4c;
          ppuStack_ddc = (uint **)local_28;
          ppuStack_de0 = local_64;
          uVar8 = uVar8 | 0xf80;
          puStack_de8 = (undefined1 *)0xa013b7;
          uStack_de4 = uVar9;
          local_24[1] = uVar8;
          puStack_de8 = (undefined1 *)FUN_00a16a40();
          puStack_dec = (undefined1 *)local_58;
          uStack_df0 = 0xa013cb;
          uVar9 = FUN_00a15f70();
        }
        local_8 = 0x51;
        local_24[0] = uVar9;
        if ((local_24 < local_38) && (local_3c <= local_24)) {
          iVar4 = (int)local_24 - (int)local_3c;
          if (local_38 == (uint *)local_34) {
            FUN_00a513f0();
          }
          puVar1 = local_38;
          if (local_38 != (uint *)0x0) {
            *local_38 = local_3c[iVar4 >> 2];
          }
        }
        else {
          if (local_38 == (uint *)local_34) {
            FUN_00a513f0();
          }
          puVar1 = local_38;
          if (local_38 != (uint *)0x0) {
            *local_38 = uVar9;
          }
        }
        local_38 = puVar1 + 1;
        if ((uVar8 & 0x800) != 0) {
          uVar8 = uVar8 & 0xfffff7ff;
          local_24[1] = uVar8;
          if (0xf < local_160) {
                    /* WARNING: Subroutine does not return */
            ppuStack_ddc = (uint **)&UNK_00a0145a;
            FUN_00aae91b();
          }
          local_160 = 0xf;
          local_164 = 0;
          local_174 = local_174 & 0xffffff00;
        }
        if ((uVar8 & 0x400) != 0) {
          uVar8 = uVar8 & 0xfffffbff;
          local_24[1] = uVar8;
          if (0xf < local_198) {
                    /* WARNING: Subroutine does not return */
            ppuStack_ddc = (uint **)&UNK_00a0149e;
            FUN_00aae91b();
          }
          local_198 = 0xf;
          local_19c = 0;
          local_1ac = local_1ac & 0xffffff00;
        }
        if ((uVar8 & 0x200) != 0) {
          uVar8 = uVar8 & 0xfffffdff;
          local_24[1] = uVar8;
          if (0xf < local_1d0) {
                    /* WARNING: Subroutine does not return */
            ppuStack_ddc = (uint **)&UNK_00a014e2;
            FUN_00aae91b();
          }
          local_1d0 = 0xf;
          local_1d4 = 0;
          local_1e4 = local_1e4 & 0xffffff00;
        }
        if ((uVar8 & 0x100) != 0) {
          uVar8 = uVar8 & 0xfffffeff;
          local_24[1] = uVar8;
          if (0xf < local_d4) {
                    /* WARNING: Subroutine does not return */
            ppuStack_ddc = (uint **)&UNK_00a01526;
            FUN_00aae91b();
          }
          local_d4 = 0xf;
          local_d8 = 0;
          local_e8 = local_e8 & 0xffffff00;
        }
        local_8 = 0x45;
        if ((char)uVar8 < '\0') {
          uVar8 = uVar8 & 0xffffff7f;
          local_24[1] = uVar8;
          if (0xf < local_f0) {
                    /* WARNING: Subroutine does not return */
            ppuStack_ddc = (uint **)&UNK_00a0156d;
            FUN_00aae91b();
          }
          local_f0 = 0xf;
          local_f4 = 0;
          local_104 = local_104 & 0xffffff00;
        }
        ppuStack_ddc = (uint **)0xa0159e;
        FUN_00a714a0();
        ppuStack_ddc = (uint **)0xa015b0;
        uVar6 = FUN_00aaf0c5();
        *(undefined4 *)(*puVar1 + 0x68) = uVar6;
        if (0xf < local_10c) {
                    /* WARNING: Subroutine does not return */
          ppuStack_ddc = (uint **)&UNK_00a015cd;
          FUN_00aae91b();
        }
        local_1c = (uint **)((int)local_1c + 1);
        local_10c = 0xf;
        local_110 = 0;
        local_120 = local_120 & 0xffffff00;
        *(undefined4 *)(*puVar1 + 0x20) = 2;
      }
      local_8._0_1_ = 0x33;
      if (0xf < local_9c) {
                    /* WARNING: Subroutine does not return */
        ppuStack_ddc = (uint **)&UNK_00a01619;
        FUN_00aae91b();
      }
    }
    ppuStack_ddc = (uint **)0xa01623;
    local_18 = (int *)FUN_00aae9af();
    local_8._0_1_ = 0x52;
    if (local_18 != (int *)0x0) {
      ppuStack_ddc = (uint **)0x1;
      ppuStack_de0 = &local_3c;
      uStack_de4 = (uint)*(ushort *)(local_5c + 0x28);
      puStack_de8 = *(undefined1 **)(local_5c + 0x24);
      uStack_df0 = 0xa0164b;
      puStack_dec = (undefined1 *)local_18;
      FUN_00a04500();
    }
    local_8 = CONCAT31(local_8._1_3_,0x33);
    ppuStack_ddc = (uint **)0xa01661;
    (**(code **)(**(int **)(local_60 + 0x38) + 0x18))();
    if (local_3c != (uint *)0x0) {
      ppuStack_ddc = (uint **)local_3c;
                    /* WARNING: Subroutine does not return */
      ppuStack_de0 = (uint **)&UNK_00a0166e;
      FUN_00aae91b();
    }
    if (local_4c != 0) {
      ppuStack_ddc = (uint **)local_18;
      ppuStack_de0 = (uint **)local_48;
      uStack_de4 = 0xa01689;
      FUN_00463b30();
      uStack_de4 = local_4c;
                    /* WARNING: Subroutine does not return */
      puStack_de8 = &UNK_00a01692;
      FUN_00aae91b();
    }
    goto LAB_00a01a19;
  case 5:
    local_18 = (int *)&local_dbc;
    local_dbc = DAT_00f0d838;
    local_db8 = (uint *)DAT_00f0d83c;
    iStack_dc0 = 0xa01730;
    local_64 = (uint **)FUN_009c16d0();
    local_18 = DAT_01258b64;
    local_db8 = (uint *)0xa01750;
    uVar6 = FUN_009885d0();
    local_db8 = (uint *)(local_5c + 0x3c);
    local_8 = 0x56;
    local_dbc = (undefined *)0xa01768;
    FUN_00a727a0();
    local_db8 = (uint *)local_3f0;
    local_dbc = (undefined *)0xa01777;
    uVar7 = FUN_009888f0();
    local_8._0_1_ = 0x57;
    local_db8 = (uint *)0xa0178d;
    FUN_009885d0();
    local_8._0_1_ = 0x58;
    local_dbc = (undefined *)0xa0179f;
    local_db8 = (uint *)uVar7;
    FUN_00988f20();
    local_8._0_1_ = 0x59;
    local_dbc = (undefined *)0xa017ae;
    local_db8 = (uint *)uVar6;
    FUN_00988f20();
    local_db8 = (uint *)0xa017b9;
    FUN_00408ad0();
    local_db8 = (uint *)0xa017c4;
    FUN_00408ad0();
    local_db8 = (uint *)0xa017cf;
    FUN_00408ad0();
    local_db8 = (uint *)0xa017da;
    FUN_00408ad0();
    local_50 = 0x18d;
    local_54 = &PTR_FUN_00e3edcc;
    local_4c = 0;
    local_48 = 0;
    local_44 = 0;
    local_28 = &iStack_dd0;
    local_8._0_1_ = 0x60;
    FUN_00401320();
    iVar4 = (**(code **)(*local_18 + 0x10))();
    local_8._0_1_ = 0x61;
    local_50 = *(undefined4 *)(iVar4 + 4);
    FUN_00a11e60();
    FUN_009fc110();
    local_3c = (uint *)0x0;
    local_38 = (uint *)0x0;
    local_34 = (double)((ulonglong)local_34._4_4_ << 0x20);
    local_8._0_1_ = 0x62;
    for (local_1c = (uint **)0x0; local_1c < (uint **)(local_48 - local_4c >> 4);
        local_1c = (uint **)((int)local_1c + 1)) {
      ppuStack_ddc = (uint **)0xa0186b;
      FUN_00a714a0();
      ppuVar10 = local_64 + 0x1a;
      local_8._0_1_ = 99;
      ppuStack_de0 = (uint **)0xa0187c;
      ppuStack_ddc = ppuVar10;
      iVar4 = FUN_00a72680();
      local_8._0_1_ = 0x62;
      if (0xf < local_144) {
                    /* WARNING: Subroutine does not return */
        ppuStack_ddc = (uint **)&UNK_00a01897;
        FUN_00aae91b();
      }
      local_144 = 0xf;
      local_148 = 0;
      local_158 = local_158 & 0xffffff00;
      if (iVar4 != 0) {
        ppuStack_ddc = (uint **)0xa018cc;
        FUN_00a714a0();
        local_8._0_1_ = 100;
        ppuStack_ddc = (uint **)0xa018e5;
        FUN_00a714a0();
        local_8._0_1_ = 0x65;
        ppuStack_de0 = (uint **)0xa018f2;
        ppuStack_ddc = ppuVar10;
        iVar4 = FUN_00a72680();
        iVar4 = *(int *)(iVar4 + 0x68);
        ppuStack_ddc = (uint **)0xa01903;
        iVar3 = FUN_00aaf0c5();
        FUN_00408ad0();
        local_8._0_1_ = 0x62;
        FUN_00408ad0();
        if (iVar4 == iVar3) {
          ppuStack_ddc = (uint **)0xa01940;
          FUN_00a714a0();
          local_8 = CONCAT31(local_8._1_3_,0x66);
          ppuStack_de0 = (uint **)0xa0194b;
          ppuStack_ddc = ppuVar10;
          uVar8 = FUN_00a72680();
          local_24[0] = uVar8;
          if ((local_24 < local_38) && (local_3c <= local_24)) {
            iVar4 = (int)local_24 - (int)local_3c;
            if (local_38 == (uint *)local_34) {
              FUN_00a513f0();
            }
            if (local_38 != (uint *)0x0) {
              *local_38 = local_3c[iVar4 >> 2];
            }
          }
          else {
            if (local_38 == (uint *)local_34) {
              FUN_00a513f0();
            }
            if (local_38 != (uint *)0x0) {
              *local_38 = uVar8;
            }
          }
          local_38 = local_38 + 1;
          local_8._0_1_ = 0x62;
          FUN_00408ad0();
        }
      }
    }
    ppuStack_ddc = (uint **)0xa019c5;
    local_18 = (int *)FUN_00aae9af();
    local_8._0_1_ = 0x67;
    if (local_18 != (int *)0x0) {
      ppuStack_ddc = (uint **)0x0;
      ppuStack_de0 = &local_3c;
      uStack_de4 = (uint)*(ushort *)(local_5c + 0x28);
      puStack_de8 = *(undefined1 **)(local_5c + 0x24);
      uStack_df0 = 0xa019eb;
      puStack_dec = (undefined1 *)local_18;
      FUN_00a04500();
    }
    local_8 = CONCAT31(local_8._1_3_,0x62);
    ppuStack_ddc = (uint **)0xa01a01;
    (**(code **)(**(int **)(local_60 + 0x38) + 0x18))();
    if (local_3c != (uint *)0x0) {
      ppuStack_ddc = (uint **)local_3c;
                    /* WARNING: Subroutine does not return */
      ppuStack_de0 = (uint **)&UNK_00a01a0e;
      FUN_00aae91b();
    }
    ppuStack_ddc = (uint **)0xa01a19;
    FUN_009fc110();
LAB_00a01a19:
    if (0xf < local_6c) {
LAB_00a01e82:
                    /* WARNING: Subroutine does not return */
      ppuStack_de0 = (uint **)&UNK_00a01e88;
      FUN_00aae91b();
    }
    break;
  case 6:
    local_db8 = (uint *)0xa01aa6;
    FUN_009885d0();
    local_18 = &iStack_dd0;
    local_8._0_1_ = 0x6c;
    local_8._1_3_ = 0;
    FUN_00401320();
    (**(code **)(*piVar5 + 0x10))();
    uVar8 = 0;
    local_90 = 0;
    local_8c = 0;
    local_88 = 0;
    local_8._0_1_ = 0x6e;
    while ((uVar8 < (uint)(local_48 - local_4c >> 4) && (uVar8 < 0x14))) {
      ppuStack_ddc = (uint **)0xa01b11;
      FUN_00a714a0();
      cVar2 = FUN_0040b360();
      FUN_00408ad0();
      if (cVar2 == '\0') {
        ppuStack_ddc = (uint **)0xa01b43;
        FUN_00a714a0();
        cVar2 = FUN_0040b360();
        FUN_00408ad0();
        local_58 = (uint **)(uint)(cVar2 != '\0');
      }
      else {
        local_58 = (uint **)0x2;
      }
      ppuStack_ddc = (uint **)0xa01b72;
      FUN_00a714a0();
      cVar2 = FUN_0040b360();
      FUN_00408ad0();
      local_18 = (int *)(uint)(cVar2 != '\0');
      local_28 = (int *)((uint)local_28 & 0xffffff00);
      ppuStack_ddc = (uint **)0xa01ba5;
      FUN_00a714a0();
      ppuStack_ddc = (uint **)0xa01bb3;
      iVar4 = FUN_00aaf0c5();
      FUN_00408ad0();
      if (iVar4 == 1) {
        local_28 = (int *)CONCAT31(local_28._1_3_,1);
      }
      ppuStack_ddc = (uint **)0xa01be1;
      FUN_00a714a0();
      local_8._0_1_ = 0x6f;
      ppuStack_ddc = (uint **)0xa01bf9;
      FUN_00a714a0();
      local_8._0_1_ = 0x70;
      ppuStack_ddc = (uint **)0xa01c0b;
      uStack_de4 = FUN_00aaf0c5();
      ppuStack_ddc = (uint **)local_28;
      ppuStack_de0 = local_58;
      puStack_de8 = (undefined1 *)0xa01c28;
      FUN_00a17b40();
      FUN_00408ad0();
      local_8._0_1_ = 0x73;
      FUN_00408ad0();
      ppuStack_ddc = (uint **)0xa01c54;
      local_18 = (int *)FUN_00a714a0();
      local_8._0_1_ = 0x74;
      ppuStack_ddc = (uint **)0xa01c6d;
      FUN_00a714a0();
      local_8._0_1_ = 0x75;
      ppuStack_ddc = (uint **)0xa01c85;
      local_64 = (uint **)FUN_00a714a0();
      local_8._0_1_ = 0x76;
      ppuStack_ddc = (uint **)0xa01c9e;
      local_58 = (uint **)FUN_00a714a0();
      local_8._0_1_ = 0x77;
      ppuStack_ddc = (uint **)0xa01cb7;
      local_1c = (uint **)FUN_00a714a0();
      local_8._0_1_ = 0x78;
      ppuStack_ddc = (uint **)0xa01cd0;
      local_24[0] = FUN_00a714a0();
      piVar5 = local_18;
      if (0xf < *(uint *)((int)local_18 + 0x14)) {
        piVar5 = (int *)*local_18;
      }
      ppuStack_ddc = (uint **)0xa01ce8;
      local_34 = _atof((char *)piVar5);
      ppuStack_ddc = (uint **)0xa01cff;
      local_24[1] = FUN_00aaf0c5();
      ppuStack_ddc = (uint **)0xa01d15;
      local_18 = (int *)FUN_00aaf0c5();
      ppuStack_ddc = (uint **)0xa01d2b;
      uVar6 = FUN_00aaf0c5();
      ppuStack_ddc = (uint **)0xa01d40;
      uVar7 = FUN_00aaf0c5();
      ppuStack_ddc = (uint **)0xa01d58;
      local_220 = FUN_00aaf0c5();
      local_20c = (int)local_34;
      local_214 = (undefined1 *)local_18;
      uVar8 = uVar8 + 1;
      local_210 = local_24[1];
      local_21c = uVar7;
      local_218 = uVar6;
      local_208 = uVar8;
      FUN_00408ad0();
      FUN_00408ad0();
      FUN_00408ad0();
      FUN_00408ad0();
      FUN_00408ad0();
      local_8._0_1_ = 0x73;
      FUN_00408ad0();
      ppuStack_ddc = (uint **)0xa01de9;
      FUN_00a12950();
      local_8._0_1_ = 0x6e;
      FUN_00a17ba0();
    }
    ppuStack_ddc = (uint **)0xa01e04;
    local_18 = (int *)FUN_00aae9af();
    local_8._0_1_ = 0x79;
    if (local_18 != (int *)0x0) {
      ppuStack_ddc = (uint **)&local_90;
      ppuStack_de0 = (uint **)(uint)*(ushort *)(local_5c + 0x28);
      uStack_de4 = *(uint *)(local_5c + 0x24);
      puStack_dec = (undefined1 *)0xa01e2d;
      puStack_de8 = (undefined1 *)local_18;
      FUN_00a0a580();
    }
    local_8._0_1_ = 0x6e;
    ppuStack_ddc = (uint **)0xa01e43;
    (**(code **)(**(int **)(local_60 + 0x38) + 0x18))();
    ppuStack_ddc = (uint **)&local_90;
    local_8 = CONCAT31(local_8._1_3_,0x6d);
    ppuStack_de0 = (uint **)0xa01e53;
    FUN_00976940();
    if (local_4c != 0) {
      ppuStack_ddc = (uint **)local_18;
      ppuStack_de0 = (uint **)local_48;
      uStack_de4 = 0xa01e67;
      FUN_00463b30();
      uStack_de4 = local_4c;
                    /* WARNING: Subroutine does not return */
      puStack_de8 = &UNK_00a01e70;
      FUN_00aae91b();
    }
    if (local_9c < 0x10) {
      ExceptionList = local_10;
      return;
    }
    goto LAB_00a01e82;
  }
  ExceptionList = local_10;
  return;
}

