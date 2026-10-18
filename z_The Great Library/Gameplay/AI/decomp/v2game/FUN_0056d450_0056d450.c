// FUN_0056d450 @ 0056d450 body=[[0056d450, 0056d5d6] [0056d5e0, 0056def8] [0056df00, 0056e228] [0056e230, 0056e558] [0056e560, 0056e6f6] [0056e700, 0056f349] [0056f352, 0056f45a] [0056f45e, 0056f483] [0056f49e, 0056f4f5]]


void FUN_0056d450(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  char *pcVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int in_ECX;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  char *pcVar9;
  int *piVar10;
  undefined4 uVar11;
  int local_de0;
  undefined1 local_ddc [4];
  int local_dd8 [4];
  undefined4 local_dc8;
  uint local_dc4;
  uint local_dbc [4];
  undefined4 local_dac;
  uint local_da8;
  undefined1 local_da0 [4];
  undefined1 local_d9c [4];
  undefined1 local_d98 [4];
  undefined1 local_d94 [4];
  undefined1 auStack_d90 [4];
  undefined1 local_d8c [4];
  undefined1 auStack_d88 [4];
  undefined1 local_d84 [4];
  undefined1 auStack_d80 [4];
  undefined1 local_d7c [4];
  undefined1 auStack_d78 [4];
  undefined1 local_d74 [4];
  undefined1 auStack_d70 [4];
  undefined1 local_d6c [4];
  undefined1 local_d68 [4];
  undefined1 local_d64 [4];
  undefined1 local_d60 [4];
  undefined1 local_d5c [4];
  undefined1 local_d58 [4];
  undefined1 local_d54 [4];
  undefined1 local_d50 [4];
  undefined1 local_d4c [4];
  undefined1 local_d48 [4];
  undefined1 local_d44 [4];
  undefined1 auStack_d40 [4];
  undefined1 local_d3c [4];
  undefined1 auStack_d38 [4];
  undefined1 local_d34 [4];
  undefined1 local_d30 [4];
  undefined1 local_d2c [4];
  undefined1 local_d28 [4];
  undefined1 local_d24 [4];
  undefined1 local_d20 [4];
  undefined1 auStack_d1c [4];
  undefined1 local_d18 [4];
  undefined1 local_d14 [4];
  undefined1 local_d10 [4];
  undefined1 auStack_d0c [4];
  undefined1 local_d08 [4];
  undefined1 auStack_d04 [4];
  undefined1 local_d00 [4];
  undefined4 local_cfc [5];
  uint uStack_ce8;
  undefined1 local_ce0 [8];
  undefined1 local_cd8 [8];
  undefined1 local_cd0 [8];
  undefined1 local_cc8 [8];
  undefined1 local_cc0 [8];
  undefined1 local_cb8 [8];
  undefined1 local_cb0 [8];
  undefined1 local_ca8 [8];
  undefined1 local_ca0 [8];
  undefined1 local_c98 [8];
  undefined1 local_c90 [8];
  undefined1 auStack_c88 [28];
  undefined1 auStack_c6c [28];
  undefined1 auStack_c50 [28];
  undefined1 auStack_c34 [28];
  undefined1 auStack_c18 [28];
  undefined1 auStack_bfc [28];
  undefined1 auStack_be0 [28];
  undefined1 auStack_bc4 [28];
  undefined1 local_ba8 [28];
  undefined1 auStack_b8c [28];
  undefined1 auStack_b70 [28];
  undefined1 auStack_b54 [28];
  undefined1 auStack_b38 [28];
  undefined1 auStack_b1c [28];
  undefined1 auStack_b00 [28];
  undefined1 auStack_ae4 [28];
  undefined1 auStack_ac8 [28];
  undefined1 auStack_aac [28];
  undefined1 auStack_a90 [28];
  undefined1 auStack_a74 [28];
  undefined1 local_a58 [28];
  undefined1 auStack_a3c [28];
  int aiStack_a20 [96];
  undefined **appuStack_8a0 [48];
  undefined **appuStack_7e0 [499];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b95e72;
  local_14 = ExceptionList;
  if (0x2f9 < param_2) {
    if (param_2 < 0x5e1) {
      if (param_2 == 0x5e0) {
        ExceptionList = &local_14;
        puVar3 = (undefined4 *)FUN_0098fb60(param_1 + 0x228,local_d50);
        *(undefined4 *)(in_ECX + 0x30) = *puVar3;
        ExceptionList = local_14;
        return;
      }
      if (param_2 < 0x3ee) {
        if (param_2 == 0x3ed) {
          ExceptionList = &local_14;
          puVar3 = (undefined4 *)FUN_0098fb60(param_1 + 0x228,local_d14);
          *(undefined4 *)(in_ECX + 0x288) = *puVar3;
          ExceptionList = local_14;
          return;
        }
        if (param_2 == 0x2fb) {
          ExceptionList = &local_14;
          puVar3 = (undefined4 *)FUN_0098fb60(param_1 + 0x228,local_d60);
          *(undefined4 *)(in_ECX + 0x3c) = *puVar3;
          ExceptionList = local_14;
          return;
        }
        if (param_2 == 0x376) {
          ExceptionList = &local_14;
          puVar3 = (undefined4 *)FUN_0098fb60(param_1 + 0x228,local_d30);
          *(undefined4 *)(in_ECX + 0x2c) = *puVar3;
          ExceptionList = local_14;
          return;
        }
        if (param_2 == 0x39f) {
          ExceptionList = &local_14;
          puVar3 = (undefined4 *)FUN_0098fb60(param_1 + 0x228,local_d68);
          *(undefined4 *)(in_ECX + 0x6c) = *puVar3;
          ExceptionList = local_14;
          return;
        }
      }
      else {
        if (param_2 == 0x50e) {
          ExceptionList = &local_14;
          puVar3 = (undefined4 *)FUN_0098fb60(param_1 + 0x228,local_da0);
          *(undefined4 *)(in_ECX + 0x78) = *puVar3;
          ExceptionList = local_14;
          return;
        }
        if (param_2 == 0x516) {
          ExceptionList = &local_14;
          puVar3 = (undefined4 *)FUN_0098fb60(param_1 + 0x228,local_d58);
          *(undefined4 *)(in_ECX + 0x1c) = *puVar3;
          ExceptionList = local_14;
          return;
        }
        if (param_2 == 0x556) {
          ExceptionList = &local_14;
          FUN_009a1ce0();
          ExceptionList = local_14;
          return;
        }
      }
    }
    else if (param_2 < 0x845) {
      if (param_2 == 0x844) {
        ExceptionList = &local_14;
        puVar3 = (undefined4 *)FUN_0098fdd0(param_1 + 0x228,local_ce0);
        *(undefined4 *)(in_ECX + 0x100) = *puVar3;
        *(undefined4 *)(in_ECX + 0x104) = puVar3[1];
        ExceptionList = local_14;
        return;
      }
      switch(param_2) {
      case 0x613:
        ExceptionList = &local_14;
        FUN_009a1ce0();
        ExceptionList = local_14;
        return;
      case 0x661:
        ExceptionList = &local_14;
        FUN_009a1ce0();
        ExceptionList = local_14;
        return;
      case 0x66d:
        ExceptionList = &local_14;
        puVar3 = (undefined4 *)FUN_0098fb60(param_1 + 0x228,local_d28);
        *(undefined4 *)(in_ECX + 0x40) = *puVar3;
        ExceptionList = local_14;
        return;
      case 0x66e:
        ExceptionList = &local_14;
        puVar3 = (undefined4 *)FUN_0098fb60(param_1 + 0x228,local_d9c);
        *(undefined4 *)(in_ECX + 0x44) = *puVar3;
        ExceptionList = local_14;
        return;
      case 0x66f:
        ExceptionList = &local_14;
        puVar3 = (undefined4 *)FUN_0098fb60(param_1 + 0x228,local_d94);
        *(undefined4 *)(in_ECX + 0x48) = *puVar3;
        ExceptionList = local_14;
        return;
      case 0x670:
        ExceptionList = &local_14;
        puVar3 = (undefined4 *)FUN_0098fb60(param_1 + 0x228,local_d8c);
        *(undefined4 *)(in_ECX + 0x4c) = *puVar3;
        ExceptionList = local_14;
        return;
      case 0x671:
        ExceptionList = &local_14;
        puVar3 = (undefined4 *)FUN_0098fb60(param_1 + 0x228,local_d84);
        *(undefined4 *)(in_ECX + 0x50) = *puVar3;
        ExceptionList = local_14;
        return;
      case 0x673:
        ExceptionList = &local_14;
        puVar3 = (undefined4 *)FUN_0098fb60(param_1 + 0x228,local_d7c);
        *(undefined4 *)(in_ECX + 0x54) = *puVar3;
        ExceptionList = local_14;
        return;
      case 0x675:
        ExceptionList = &local_14;
        puVar3 = (undefined4 *)FUN_0098fb60(param_1 + 0x228,local_d74);
        *(undefined4 *)(in_ECX + 0x60) = *puVar3;
        ExceptionList = local_14;
        return;
      case 0x676:
        ExceptionList = &local_14;
        puVar3 = (undefined4 *)FUN_0098fb60(param_1 + 0x228,local_d6c);
        *(undefined4 *)(in_ECX + 100) = *puVar3;
        ExceptionList = local_14;
        return;
      case 0x67d:
        ExceptionList = &local_14;
        puVar3 = (undefined4 *)FUN_0098fb60(param_1 + 0x228,local_d64);
        *(undefined4 *)(in_ECX + 0x70) = *puVar3;
        ExceptionList = local_14;
        return;
      case 0x689:
        ExceptionList = &local_14;
        puVar3 = (undefined4 *)FUN_0098fb60(param_1 + 0x228,local_d5c);
        *(undefined4 *)(in_ECX + 0x74) = *puVar3;
        ExceptionList = local_14;
        return;
      case 0x68d:
        ExceptionList = &local_14;
        puVar3 = (undefined4 *)FUN_0098fb60(param_1 + 0x228,local_d3c);
        *(undefined4 *)(in_ECX + 0x28) = *puVar3;
        ExceptionList = local_14;
        return;
      case 0x6aa:
        *(bool *)(in_ECX + 0x2a4) = *(int *)(param_1 + 0x228) == 0x29f;
        return;
      case 0x6ab:
        *(bool *)(in_ECX + 0x2a5) = *(int *)(param_1 + 0x228) == 0x29f;
        return;
      case 0x6be:
        ExceptionList = &local_14;
        puVar3 = (undefined4 *)FUN_0098fb60(param_1 + 0x228,local_d54);
        *(undefined4 *)(in_ECX + 0x7c) = *puVar3;
        ExceptionList = local_14;
        return;
      case 0x70e:
        ExceptionList = &local_14;
        puVar3 = (undefined4 *)FUN_0098fb60(param_1 + 0x228,local_d4c);
        *(undefined4 *)(in_ECX + 0x20) = *puVar3;
        ExceptionList = local_14;
        return;
      case 0x70f:
        ExceptionList = &local_14;
        puVar3 = (undefined4 *)FUN_0098fb60(param_1 + 0x228,local_d44);
        *(undefined4 *)(in_ECX + 0x24) = *puVar3;
        ExceptionList = local_14;
        return;
      }
    }
    else if (param_2 < 0x961) {
      if (param_2 == 0x960) {
        ExceptionList = &local_14;
        FUN_009a1ce0();
        ExceptionList = local_14;
        return;
      }
      switch(param_2) {
      case 0x845:
        ExceptionList = &local_14;
        puVar3 = (undefined4 *)FUN_0098fdd0(param_1 + 0x228,local_c90);
        *(undefined4 *)(in_ECX + 0x108) = *puVar3;
        *(undefined4 *)(in_ECX + 0x10c) = puVar3[1];
        ExceptionList = local_14;
        return;
      case 0x846:
        ExceptionList = &local_14;
        puVar3 = (undefined4 *)FUN_0098fdd0(param_1 + 0x228,local_c98);
        *(undefined4 *)(in_ECX + 0x110) = *puVar3;
        *(undefined4 *)(in_ECX + 0x114) = puVar3[1];
        ExceptionList = local_14;
        return;
      case 0x847:
        ExceptionList = &local_14;
        puVar3 = (undefined4 *)FUN_0098fdd0(param_1 + 0x228,local_cc8);
        *(undefined4 *)(in_ECX + 0xe0) = *puVar3;
        *(undefined4 *)(in_ECX + 0xe4) = puVar3[1];
        ExceptionList = local_14;
        return;
      case 0x848:
        ExceptionList = &local_14;
        puVar3 = (undefined4 *)FUN_0098fdd0(param_1 + 0x228,local_ca8);
        *(undefined4 *)(in_ECX + 0xe8) = *puVar3;
        *(undefined4 *)(in_ECX + 0xec) = puVar3[1];
        ExceptionList = local_14;
        return;
      case 0x849:
        ExceptionList = &local_14;
        puVar3 = (undefined4 *)FUN_0098fdd0(param_1 + 0x228,local_cb8);
        *(undefined4 *)(in_ECX + 0xf0) = *puVar3;
        *(undefined4 *)(in_ECX + 0xf4) = puVar3[1];
        ExceptionList = local_14;
        return;
      case 0x84a:
        ExceptionList = &local_14;
        puVar3 = (undefined4 *)FUN_0098fdd0(param_1 + 0x228,local_cd8);
        *(undefined4 *)(in_ECX + 0x120) = *puVar3;
        *(undefined4 *)(in_ECX + 0x124) = puVar3[1];
        ExceptionList = local_14;
        return;
      case 0x84b:
        ExceptionList = &local_14;
        puVar3 = (undefined4 *)FUN_0098fdd0(param_1 + 0x228,local_cd0);
        *(undefined4 *)(in_ECX + 0x128) = *puVar3;
        *(undefined4 *)(in_ECX + 300) = puVar3[1];
        ExceptionList = local_14;
        return;
      case 0x84c:
        ExceptionList = &local_14;
        puVar3 = (undefined4 *)FUN_0098fdd0(param_1 + 0x228,local_cc0);
        *(undefined4 *)(in_ECX + 0x130) = *puVar3;
        *(undefined4 *)(in_ECX + 0x134) = puVar3[1];
        ExceptionList = local_14;
        return;
      case 0x8cc:
        ExceptionList = &local_14;
        puVar3 = (undefined4 *)FUN_0098fb60(param_1 + 0x228,local_d18);
        *(undefined4 *)(in_ECX + 0x298) = *puVar3;
        ExceptionList = local_14;
        return;
      case 0x8e8:
        ExceptionList = &local_14;
        puVar3 = (undefined4 *)FUN_0098fb60(param_1 + 0x228,local_d2c);
        *(undefined4 *)(in_ECX + 0x28c) = *puVar3;
        ExceptionList = local_14;
        return;
      case 0x8e9:
        ExceptionList = &local_14;
        puVar3 = (undefined4 *)FUN_0098fb60(param_1 + 0x228,local_d20);
        *(undefined4 *)(in_ECX + 0x290) = *puVar3;
        ExceptionList = local_14;
        return;
      case 0x937:
        ExceptionList = &local_14;
        puVar3 = (undefined4 *)FUN_0098fb60(param_1 + 0x228,local_d34);
        *(undefined4 *)(in_ECX + 0x58) = *puVar3;
        ExceptionList = local_14;
        return;
      }
    }
    else {
      if (param_2 == 0xa06) {
        ExceptionList = &local_14;
        puVar3 = (undefined4 *)FUN_0098fb60(param_1 + 0x228,local_d10);
        *(undefined4 *)(in_ECX + 0x5c) = *puVar3;
        ExceptionList = local_14;
        return;
      }
      if (param_2 == 0xa85) {
        ExceptionList = &local_14;
        FUN_009a1ce0();
        ExceptionList = local_14;
        return;
      }
    }
switchD_0056d4a3_caseD_1e7:
    pcVar9 = (char *)(param_1 + 0x24);
    local_dc4 = 0xf;
    local_dc8 = 0;
    local_dd8[0] = (uint)local_dd8[0]._1_3_ << 8;
    pcVar4 = pcVar9;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    ExceptionList = &local_14;
    FUN_00409350(pcVar9,(int)pcVar4 - (param_1 + 0x25));
    local_c = 0x20;
    local_ddc[0] = 0x5f;
    iVar5 = FUN_005484e0(local_dd8,local_ddc,1);
    if (iVar5 < 1) {
      local_da8 = 0xf;
      local_dac = 0;
      local_dbc[0] = local_dbc[0] & 0xffffff00;
      FUN_00409350("technology.cpp",0xe);
      local_c._0_1_ = 0x24;
      uVar7 = FUN_004015b0(local_dbc,0x5ff,0x10004);
      local_c._0_1_ = 0x25;
      iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + 4);
      uVar8 = 0;
      piVar6 = (int *)(iVar5 + 0x14);
      FUN_00987d50(uVar7,"Unkown token \'",0xe,0);
      uVar7 = FUN_00418e30(uVar7,pcVar9,extraout_ECX_01,"\' in ");
      uVar7 = FUN_00418e30(uVar7);
      if (0xf < *(uint *)(iVar5 + 0x28)) {
        piVar6 = (int *)*piVar6;
      }
      uVar7 = FUN_00418e30(uVar7,piVar6);
      uVar7 = FUN_00418e30(uVar7,&DAT_00e004e4,extraout_ECX_02,uVar8);
      uVar7 = FUN_00455470(uVar7);
      FUN_00401280(uVar7);
      local_c = CONCAT31(local_c._1_3_,0x24);
      FUN_00987ac0(appuStack_7e0);
      appuStack_7e0[0] = std::ios_base::vftable;
      FUN_00aad52d(appuStack_7e0);
      if (0xf < local_da8) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_dbc[0]);
      }
      local_da8 = 0xf;
      local_dac = 0;
      local_dbc[0] = local_dbc[0] & 0xffffff00;
    }
    else {
      FUN_009895f0(local_dc8);
      local_c = CONCAT31(local_c._1_3_,0x21);
      FUN_004dad40();
      piVar6 = (int *)FUN_004dc420(local_cfc);
      if (piVar6 == (int *)0x0) {
        piVar6 = (int *)FUN_004dacc0();
      }
      if ((piVar6 == (int *)0x0) || (cVar1 = (**(code **)(*piVar6 + 0x24))(), cVar1 == '\0')) {
        FUN_009885d0();
        local_c._0_1_ = 0x22;
        uVar8 = FUN_004015b0(local_ba8,0x5fb,0x10004);
        uVar11 = 0;
        local_c._0_1_ = 0x23;
        iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + 4);
        uVar7 = *(undefined4 *)(iVar5 + 8);
        piVar6 = (int *)(iVar5 + 0x14);
        FUN_00987d50(uVar8,"Unkown token \'",0xe,0);
        uVar8 = FUN_00418e30(uVar8,uVar11,extraout_ECX,"\' in ");
        uVar8 = FUN_00418e30(uVar8);
        if (0xf < *(uint *)(iVar5 + 0x28)) {
          piVar6 = (int *)*piVar6;
        }
        uVar8 = FUN_00418e30(uVar8,piVar6);
        uVar7 = FUN_00418e30(uVar8,&DAT_00e004e4,extraout_ECX_00,uVar7);
        uVar7 = FUN_00455470(uVar7);
        FUN_00401280(uVar7);
        local_c = CONCAT31(local_c._1_3_,0x22);
        FUN_00987ac0(appuStack_8a0);
        appuStack_8a0[0] = std::ios_base::vftable;
        FUN_00aad52d(appuStack_8a0);
        FUN_00408ad0();
      }
      else {
        uVar7 = FUN_00aaf0c5(param_1 + 0x22c);
        *(undefined4 *)(*(int *)(in_ECX + 8) + piVar6[0x16] * 4) = uVar7;
      }
      if (0xf < uStack_ce8) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_cfc[0]);
      }
    }
    if (local_dc4 < 0x10) {
      ExceptionList = local_14;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_dd8[0]);
  }
  if (param_2 == 0x2f9) {
    ExceptionList = &local_14;
    uVar7 = FUN_00aaf0c5(param_1 + 0x22c);
    *(undefined4 *)(in_ECX + 0x284) = uVar7;
    ExceptionList = local_14;
    return;
  }
  local_de0 = in_ECX;
  switch(param_2) {
  case 0x1e6:
    ExceptionList = &local_14;
    puVar3 = (undefined4 *)FUN_0098fb60(param_1 + 0x228,local_d08);
    *(undefined4 *)(in_ECX + 0x68) = *puVar3;
    ExceptionList = local_14;
    return;
  default:
    goto switchD_0056d4a3_caseD_1e7;
  case 0x1eb:
    ExceptionList = &local_14;
    FUN_009885d0();
    local_c = 0;
    iVar5 = FUN_00973bd0(local_a58);
    *(undefined4 *)(*(int *)(in_ECX + 0x98) + *(int *)(iVar5 + 8) * 4) = 1;
    FUN_00408ad0();
    ExceptionList = local_14;
    return;
  case 0x1f2:
    ExceptionList = &local_14;
    puVar3 = (undefined4 *)FUN_0098fdd0(param_1 + 0x228,local_ca0);
    *(undefined4 *)(in_ECX + 0xd8) = *puVar3;
    *(undefined4 *)(in_ECX + 0xdc) = puVar3[1];
    ExceptionList = local_14;
    return;
  case 0x203:
    ExceptionList = &local_14;
    puVar3 = (undefined4 *)FUN_0098fb60(param_1 + 0x228,local_d98);
    *(undefined4 *)(in_ECX + 0x27c) = *puVar3;
    ExceptionList = local_14;
    return;
  case 0x204:
    ExceptionList = &local_14;
    puVar3 = (undefined4 *)FUN_0098fb60(param_1 + 0x228,local_d48);
    *(undefined4 *)(in_ECX + 0x278) = *puVar3;
    ExceptionList = local_14;
    return;
  case 0x205:
    ExceptionList = &local_14;
    puVar3 = (undefined4 *)FUN_0098fb60(param_1 + 0x228,local_d00);
    *(undefined4 *)(in_ECX + 0x274) = *puVar3;
    ExceptionList = local_14;
    return;
  case 0x206:
    ExceptionList = &local_14;
    puVar3 = (undefined4 *)FUN_0098fb60(param_1 + 0x228,local_d24);
    *(undefined4 *)(in_ECX + 0x270) = *puVar3;
    ExceptionList = local_14;
    return;
  case 0x207:
    ExceptionList = &local_14;
    while( true ) {
      piVar6 = *(int **)(param_1 + 0x1c);
      if ((char)piVar6[0x44] == '\0') {
        iVar5 = (**(code **)(*piVar6 + 4))();
        piVar6[2] = iVar5;
        if (iVar5 == 0) {
          piVar6[3] = 0x13;
        }
        *(undefined1 *)(piVar6 + 0x44) = 1;
      }
      piVar6 = piVar6 + 3;
      piVar10 = aiStack_a20;
      for (iVar5 = 0x41; iVar5 != 0; iVar5 = iVar5 + -1) {
        *piVar10 = *piVar6;
        piVar6 = piVar6 + 1;
        piVar10 = piVar10 + 1;
      }
      if ((aiStack_a20[0] == 4) || (aiStack_a20[0] == 0x13)) break;
      FUN_009a1440(param_1);
      FUN_009885d0();
      local_c = 2;
      iVar5 = FUN_00973bd0(auStack_b1c);
      local_c = 0xffffffff;
      FUN_00408ad0();
      if ((iVar5 == 0) || (cVar1 = FUN_005613f0(), cVar1 == '\0')) {
        FUN_009885d0();
        local_c = 3;
        FUN_004015b0(auStack_c34,0x51b,0x10004);
        local_c._0_1_ = 4;
        iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + 4);
        uVar7 = FUN_00987d20(iVar5," line ",iVar5,*(undefined4 *)(iVar5 + 8));
        uVar7 = FUN_00989050(uVar7);
        uVar7 = FUN_00418e30(uVar7);
        uVar7 = FUN_00455470(uVar7);
        FUN_00401280(uVar7);
        local_c = CONCAT31(local_c._1_3_,3);
        FUN_00401650();
        local_c = 0xffffffff;
        FUN_00408ad0();
      }
      else {
        iVar5 = *(int *)(iVar5 + 8);
        iVar2 = *(int *)(local_de0 + 0x160);
        puVar3 = (undefined4 *)FUN_0098fb60(param_1 + 0x228,auStack_d90);
        *(undefined4 *)(iVar2 + iVar5 * 4) = *puVar3;
      }
    }
    break;
  case 0x209:
    ExceptionList = &local_14;
    while( true ) {
      piVar6 = *(int **)(param_1 + 0x1c);
      if ((char)piVar6[0x44] == '\0') {
        iVar5 = (**(code **)(*piVar6 + 4))();
        piVar6[2] = iVar5;
        if (iVar5 == 0) {
          piVar6[3] = 0x13;
        }
        *(undefined1 *)(piVar6 + 0x44) = 1;
      }
      piVar6 = piVar6 + 3;
      piVar10 = aiStack_a20;
      for (iVar5 = 0x41; iVar5 != 0; iVar5 = iVar5 + -1) {
        *piVar10 = *piVar6;
        piVar6 = piVar6 + 1;
        piVar10 = piVar10 + 1;
      }
      if ((aiStack_a20[0] == 4) || (aiStack_a20[0] == 0x13)) break;
      FUN_009a1440(param_1);
      FUN_009885d0();
      local_c = 5;
      iVar5 = FUN_00973bd0(auStack_ae4);
      local_c = 0xffffffff;
      FUN_00408ad0();
      if ((iVar5 == 0) || (cVar1 = FUN_005613f0(), cVar1 == '\0')) {
        FUN_009885d0();
        local_c = 6;
        FUN_004015b0(auStack_bfc,0x530,0x10004);
        local_c._0_1_ = 7;
        iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + 4);
        uVar7 = FUN_00987d20(iVar5," line ",iVar5,*(undefined4 *)(iVar5 + 8));
        uVar7 = FUN_00989050(uVar7);
        uVar7 = FUN_00418e30(uVar7);
        uVar7 = FUN_00455470(uVar7);
        FUN_00401280(uVar7);
        local_c = CONCAT31(local_c._1_3_,6);
        FUN_00401650();
        local_c = 0xffffffff;
        FUN_00408ad0();
      }
      else {
        iVar5 = *(int *)(iVar5 + 8);
        iVar2 = *(int *)(in_ECX + 0x1b0);
        puVar3 = (undefined4 *)FUN_0098fb60(param_1 + 0x228,auStack_d04);
        *(undefined4 *)(iVar2 + iVar5 * 4) = *puVar3;
      }
    }
    (**(code **)(**(int **)(param_1 + 0x1c) + 4))();
    ExceptionList = local_14;
    return;
  case 0x20a:
    ExceptionList = &local_14;
    while( true ) {
      piVar6 = *(int **)(param_1 + 0x1c);
      if ((char)piVar6[0x44] == '\0') {
        iVar5 = (**(code **)(*piVar6 + 4))();
        piVar6[2] = iVar5;
        if (iVar5 == 0) {
          piVar6[3] = 0x13;
        }
        *(undefined1 *)(piVar6 + 0x44) = 1;
      }
      piVar6 = piVar6 + 3;
      piVar10 = aiStack_a20;
      for (iVar5 = 0x41; iVar5 != 0; iVar5 = iVar5 + -1) {
        *piVar10 = *piVar6;
        piVar6 = piVar6 + 1;
        piVar10 = piVar10 + 1;
      }
      if ((aiStack_a20[0] == 4) || (aiStack_a20[0] == 0x13)) break;
      FUN_009a1440(param_1);
      FUN_009885d0();
      local_c = 8;
      iVar5 = FUN_00973bd0(auStack_aac);
      local_c = 0xffffffff;
      FUN_00408ad0();
      if ((iVar5 == 0) || (cVar1 = FUN_005613f0(), cVar1 == '\0')) {
        FUN_009885d0();
        local_c = 9;
        FUN_004015b0(auStack_bc4,0x545,0x10004);
        local_c._0_1_ = 10;
        iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + 4);
        uVar7 = FUN_00987d20(iVar5," line ",iVar5,*(undefined4 *)(iVar5 + 8));
        uVar7 = FUN_00989050(uVar7);
        uVar7 = FUN_00418e30(uVar7);
        uVar7 = FUN_00455470(uVar7);
        FUN_00401280(uVar7);
        local_c = CONCAT31(local_c._1_3_,9);
        FUN_00401650();
        local_c = 0xffffffff;
        FUN_00408ad0();
      }
      else {
        iVar5 = *(int *)(iVar5 + 8);
        iVar2 = *(int *)(local_de0 + 0x1c0);
        puVar3 = (undefined4 *)FUN_0098fb60(param_1 + 0x228,auStack_d88);
        *(undefined4 *)(iVar2 + iVar5 * 4) = *puVar3;
      }
    }
    break;
  case 0x20b:
    ExceptionList = &local_14;
    while( true ) {
      piVar6 = *(int **)(param_1 + 0x1c);
      if ((char)piVar6[0x44] == '\0') {
        iVar5 = (**(code **)(*piVar6 + 4))();
        piVar6[2] = iVar5;
        if (iVar5 == 0) {
          piVar6[3] = 0x13;
        }
        *(undefined1 *)(piVar6 + 0x44) = 1;
      }
      piVar6 = piVar6 + 3;
      piVar10 = aiStack_a20;
      for (iVar5 = 0x41; iVar5 != 0; iVar5 = iVar5 + -1) {
        *piVar10 = *piVar6;
        piVar6 = piVar6 + 1;
        piVar10 = piVar10 + 1;
      }
      if ((aiStack_a20[0] == 4) || (aiStack_a20[0] == 0x13)) break;
      FUN_009a1440(param_1);
      FUN_009885d0();
      local_c = 0xb;
      iVar5 = FUN_00973bd0(auStack_a74);
      local_c = 0xffffffff;
      FUN_00408ad0();
      if ((iVar5 == 0) || (cVar1 = FUN_005613f0(), cVar1 == '\0')) {
        FUN_009885d0();
        local_c = 0xc;
        FUN_004015b0(auStack_b8c,0x55a,0x10004);
        local_c._0_1_ = 0xd;
        iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + 4);
        uVar7 = FUN_00987d20(iVar5," line ",iVar5,*(undefined4 *)(iVar5 + 8));
        uVar7 = FUN_00989050(uVar7);
        uVar7 = FUN_00418e30(uVar7);
        uVar7 = FUN_00455470(uVar7);
        FUN_00401280(uVar7);
        local_c = CONCAT31(local_c._1_3_,0xc);
        FUN_00401650();
        local_c = 0xffffffff;
        FUN_00408ad0();
      }
      else {
        iVar5 = *(int *)(iVar5 + 8);
        iVar2 = *(int *)(local_de0 + 0x1d0);
        puVar3 = (undefined4 *)FUN_0098fb60(param_1 + 0x228,auStack_d40);
        *(undefined4 *)(iVar2 + iVar5 * 4) = *puVar3;
      }
    }
    break;
  case 0x20c:
    ExceptionList = &local_14;
    while( true ) {
      piVar6 = *(int **)(param_1 + 0x1c);
      if ((char)piVar6[0x44] == '\0') {
        iVar5 = (**(code **)(*piVar6 + 4))();
        piVar6[2] = iVar5;
        if (iVar5 == 0) {
          piVar6[3] = 0x13;
        }
        *(undefined1 *)(piVar6 + 0x44) = 1;
      }
      piVar6 = piVar6 + 3;
      piVar10 = aiStack_a20;
      for (iVar5 = 0x41; iVar5 != 0; iVar5 = iVar5 + -1) {
        *piVar10 = *piVar6;
        piVar6 = piVar6 + 1;
        piVar10 = piVar10 + 1;
      }
      if ((aiStack_a20[0] == 4) || (aiStack_a20[0] == 0x13)) break;
      FUN_009a1440(param_1);
      FUN_009885d0();
      local_c = 0xe;
      iVar5 = FUN_00973bd0(auStack_a3c);
      local_c = 0xffffffff;
      FUN_00408ad0();
      if ((iVar5 == 0) || (cVar1 = FUN_005613f0(), cVar1 == '\0')) {
        FUN_009885d0();
        local_c = 0xf;
        FUN_004015b0(auStack_b38,0x56f,0x10004);
        local_c._0_1_ = 0x10;
        iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + 4);
        uVar7 = FUN_00987d20(iVar5," line ",iVar5,*(undefined4 *)(iVar5 + 8));
        uVar7 = FUN_00989050(uVar7);
        uVar7 = FUN_00418e30(uVar7);
        uVar7 = FUN_00455470(uVar7);
        FUN_00401280(uVar7);
        local_c = CONCAT31(local_c._1_3_,0xf);
        FUN_00401650();
        local_c = 0xffffffff;
        FUN_00408ad0();
      }
      else {
        iVar5 = *(int *)(iVar5 + 8);
        iVar2 = *(int *)(local_de0 + 0x170);
        puVar3 = (undefined4 *)FUN_0098fb60(param_1 + 0x228,auStack_d80);
        *(undefined4 *)(iVar2 + iVar5 * 4) = *puVar3;
      }
    }
    break;
  case 0x20d:
    ExceptionList = &local_14;
    while( true ) {
      piVar6 = *(int **)(param_1 + 0x1c);
      if ((char)piVar6[0x44] == '\0') {
        iVar5 = (**(code **)(*piVar6 + 4))();
        piVar6[2] = iVar5;
        if (iVar5 == 0) {
          piVar6[3] = 0x13;
        }
        *(undefined1 *)(piVar6 + 0x44) = 1;
      }
      piVar6 = piVar6 + 3;
      piVar10 = aiStack_a20;
      for (iVar5 = 0x41; iVar5 != 0; iVar5 = iVar5 + -1) {
        *piVar10 = *piVar6;
        piVar6 = piVar6 + 1;
        piVar10 = piVar10 + 1;
      }
      if ((aiStack_a20[0] == 4) || (aiStack_a20[0] == 0x13)) break;
      FUN_009a1440(param_1);
      FUN_009885d0();
      local_c = 0x11;
      iVar5 = FUN_00973bd0(auStack_b54);
      local_c = 0xffffffff;
      FUN_00408ad0();
      if ((iVar5 == 0) || (cVar1 = FUN_005613f0(), cVar1 == '\0')) {
        FUN_009885d0();
        local_c = 0x12;
        FUN_004015b0(auStack_c88,0x584,0x10004);
        local_c._0_1_ = 0x13;
        iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + 4);
        uVar7 = FUN_00987d20(iVar5," line ",iVar5,*(undefined4 *)(iVar5 + 8));
        uVar7 = FUN_00989050(uVar7);
        uVar7 = FUN_00418e30(uVar7);
        uVar7 = FUN_00455470(uVar7);
        FUN_00401280(uVar7);
        local_c = CONCAT31(local_c._1_3_,0x12);
        FUN_00401650();
        local_c = 0xffffffff;
        FUN_00408ad0();
      }
      else {
        iVar5 = *(int *)(iVar5 + 8);
        iVar2 = *(int *)(local_de0 + 0x180);
        puVar3 = (undefined4 *)FUN_0098fb60(param_1 + 0x228,auStack_d1c);
        *(undefined4 *)(iVar2 + iVar5 * 4) = *puVar3;
      }
    }
    break;
  case 0x20e:
    ExceptionList = &local_14;
    while( true ) {
      piVar6 = *(int **)(param_1 + 0x1c);
      if ((char)piVar6[0x44] == '\0') {
        iVar5 = (**(code **)(*piVar6 + 4))();
        piVar6[2] = iVar5;
        if (iVar5 == 0) {
          piVar6[3] = 0x13;
        }
        *(undefined1 *)(piVar6 + 0x44) = 1;
      }
      piVar6 = piVar6 + 3;
      piVar10 = aiStack_a20;
      for (iVar5 = 0x41; iVar5 != 0; iVar5 = iVar5 + -1) {
        *piVar10 = *piVar6;
        piVar6 = piVar6 + 1;
        piVar10 = piVar10 + 1;
      }
      if ((aiStack_a20[0] == 4) || (aiStack_a20[0] == 0x13)) break;
      FUN_009a1440(param_1);
      FUN_009885d0();
      local_c = 0x14;
      iVar5 = FUN_00973bd0(auStack_b00);
      local_c = 0xffffffff;
      FUN_00408ad0();
      if ((iVar5 == 0) || (cVar1 = FUN_005613f0(), cVar1 == '\0')) {
        FUN_009885d0();
        local_c = 0x15;
        FUN_004015b0(auStack_a90,0x599,0x10004);
        local_c._0_1_ = 0x16;
        iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + 4);
        uVar7 = FUN_00987d20(iVar5," line ",iVar5,*(undefined4 *)(iVar5 + 8));
        uVar7 = FUN_00989050(uVar7);
        uVar7 = FUN_00418e30(uVar7);
        uVar7 = FUN_00455470(uVar7);
        FUN_00401280(uVar7);
        local_c = CONCAT31(local_c._1_3_,0x15);
        FUN_00401650();
        local_c = 0xffffffff;
        FUN_00408ad0();
      }
      else {
        iVar5 = *(int *)(iVar5 + 8);
        iVar2 = *(int *)(local_de0 + 400);
        puVar3 = (undefined4 *)FUN_0098fb60(param_1 + 0x228,auStack_d78);
        *(undefined4 *)(iVar2 + iVar5 * 4) = *puVar3;
      }
    }
    break;
  case 0x20f:
    ExceptionList = &local_14;
    while( true ) {
      piVar6 = *(int **)(param_1 + 0x1c);
      if ((char)piVar6[0x44] == '\0') {
        iVar5 = (**(code **)(*piVar6 + 4))();
        piVar6[2] = iVar5;
        if (iVar5 == 0) {
          piVar6[3] = 0x13;
        }
        *(undefined1 *)(piVar6 + 0x44) = 1;
      }
      piVar6 = piVar6 + 3;
      piVar10 = aiStack_a20;
      for (iVar5 = 0x41; iVar5 != 0; iVar5 = iVar5 + -1) {
        *piVar10 = *piVar6;
        piVar6 = piVar6 + 1;
        piVar10 = piVar10 + 1;
      }
      if ((aiStack_a20[0] == 4) || (aiStack_a20[0] == 0x13)) break;
      FUN_009a1440(param_1);
      FUN_009885d0();
      local_c = 0x17;
      iVar5 = FUN_00973bd0(auStack_ac8);
      local_c = 0xffffffff;
      FUN_00408ad0();
      if ((iVar5 == 0) || (cVar1 = FUN_005613f0(), cVar1 == '\0')) {
        FUN_009885d0();
        local_c = 0x18;
        FUN_004015b0(auStack_b70,0x5ae,0x10004);
        local_c._0_1_ = 0x19;
        iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + 4);
        uVar7 = FUN_00987d20(iVar5," line ",iVar5,*(undefined4 *)(iVar5 + 8));
        uVar7 = FUN_00989050(uVar7);
        uVar7 = FUN_00418e30(uVar7);
        uVar7 = FUN_00455470(uVar7);
        FUN_00401280(uVar7);
        local_c = CONCAT31(local_c._1_3_,0x18);
        FUN_00401650();
        local_c = 0xffffffff;
        FUN_00408ad0();
      }
      else {
        iVar5 = *(int *)(iVar5 + 8);
        iVar2 = *(int *)(local_de0 + 0x1f0);
        puVar3 = (undefined4 *)FUN_0098fb60(param_1 + 0x228,auStack_d38);
        *(undefined4 *)(iVar2 + iVar5 * 4) = *puVar3;
      }
    }
    break;
  case 0x210:
    ExceptionList = &local_14;
    while( true ) {
      piVar6 = *(int **)(param_1 + 0x1c);
      if ((char)piVar6[0x44] == '\0') {
        iVar5 = (**(code **)(*piVar6 + 4))();
        piVar6[2] = iVar5;
        if (iVar5 == 0) {
          piVar6[3] = 0x13;
        }
        *(undefined1 *)(piVar6 + 0x44) = 1;
      }
      piVar6 = piVar6 + 3;
      piVar10 = aiStack_a20;
      for (iVar5 = 0x41; iVar5 != 0; iVar5 = iVar5 + -1) {
        *piVar10 = *piVar6;
        piVar6 = piVar6 + 1;
        piVar10 = piVar10 + 1;
      }
      if ((aiStack_a20[0] == 4) || (aiStack_a20[0] == 0x13)) break;
      FUN_009a1440(param_1);
      FUN_009885d0();
      local_c = 0x1a;
      iVar5 = FUN_00973bd0(auStack_c6c);
      local_c = 0xffffffff;
      FUN_00408ad0();
      if ((iVar5 == 0) || (cVar1 = FUN_005613f0(), cVar1 == '\0')) {
        FUN_009885d0();
        local_c = 0x1b;
        FUN_004015b0(auStack_c50,0x5c3,0x10004);
        local_c._0_1_ = 0x1c;
        iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + 4);
        uVar7 = FUN_00987d20(iVar5," line ",iVar5,*(undefined4 *)(iVar5 + 8));
        uVar7 = FUN_00989050(uVar7);
        uVar7 = FUN_00418e30(uVar7);
        uVar7 = FUN_00455470(uVar7);
        FUN_00401280(uVar7);
        local_c = CONCAT31(local_c._1_3_,0x1b);
        FUN_00401650();
        local_c = 0xffffffff;
        FUN_00408ad0();
      }
      else {
        iVar5 = *(int *)(iVar5 + 8);
        iVar2 = *(int *)(local_de0 + 0x200);
        puVar3 = (undefined4 *)FUN_0098fb60(param_1 + 0x228,auStack_d70);
        *(undefined4 *)(iVar2 + iVar5 * 4) = *puVar3;
      }
    }
    break;
  case 0x211:
    ExceptionList = &local_14;
    while( true ) {
      piVar6 = *(int **)(param_1 + 0x1c);
      if ((char)piVar6[0x44] == '\0') {
        iVar5 = (**(code **)(*piVar6 + 4))();
        piVar6[2] = iVar5;
        if (iVar5 == 0) {
          piVar6[3] = 0x13;
        }
        *(undefined1 *)(piVar6 + 0x44) = 1;
      }
      piVar6 = piVar6 + 3;
      piVar10 = aiStack_a20;
      for (iVar5 = 0x41; iVar5 != 0; iVar5 = iVar5 + -1) {
        *piVar10 = *piVar6;
        piVar6 = piVar6 + 1;
        piVar10 = piVar10 + 1;
      }
      if ((aiStack_a20[0] == 4) || (aiStack_a20[0] == 0x13)) break;
      FUN_009a1440(param_1);
      FUN_009885d0();
      local_c = 0x1d;
      iVar5 = FUN_00973bd0(auStack_c18);
      local_c = 0xffffffff;
      FUN_00408ad0();
      if ((iVar5 == 0) || (cVar1 = FUN_005613f0(), cVar1 == '\0')) {
        FUN_009885d0();
        local_c = 0x1e;
        FUN_004015b0(auStack_be0,0x5d8,0x10004);
        local_c._0_1_ = 0x1f;
        iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + 4);
        uVar7 = FUN_00987d20(iVar5," line ",iVar5,*(undefined4 *)(iVar5 + 8));
        uVar7 = FUN_00989050(uVar7);
        uVar7 = FUN_00418e30(uVar7);
        uVar7 = FUN_00455470(uVar7);
        FUN_00401280(uVar7);
        local_c = CONCAT31(local_c._1_3_,0x1e);
        FUN_00401650();
        local_c = 0xffffffff;
        FUN_00408ad0();
      }
      else {
        iVar5 = *(int *)(iVar5 + 8);
        iVar2 = *(int *)(local_de0 + 0x200);
        puVar3 = (undefined4 *)FUN_0098fb60(param_1 + 0x228,auStack_d0c);
        *(undefined4 *)(iVar2 + iVar5 * 4) = *puVar3;
      }
    }
    break;
  case 0x21e:
    ExceptionList = &local_14;
    uVar7 = FUN_00aaf0c5(param_1 + 0x22c);
    *(undefined4 *)(in_ECX + 0x280) = uVar7;
    ExceptionList = local_14;
    return;
  case 0x236:
    ExceptionList = &local_14;
    puVar3 = (undefined4 *)FUN_0098fdd0(param_1 + 0x228,local_cb0);
    *(undefined4 *)(in_ECX + 0x80) = *puVar3;
    *(undefined4 *)(in_ECX + 0x84) = puVar3[1];
    ExceptionList = local_14;
    return;
  case 0x237:
    local_dc4 = 0xf;
    local_dc8 = 0;
    local_dd8[0] = (uint)local_dd8[0]._1_3_ << 8;
    local_c = 1;
    ExceptionList = &local_14;
    while( true ) {
      piVar6 = *(int **)(param_1 + 0x1c);
      if ((char)piVar6[0x44] == '\0') {
        iVar5 = (**(code **)(*piVar6 + 4))();
        piVar6[2] = iVar5;
        if (iVar5 == 0) {
          piVar6[3] = 0x13;
        }
        *(undefined1 *)(piVar6 + 0x44) = 1;
      }
      piVar6 = piVar6 + 3;
      piVar10 = aiStack_a20;
      for (iVar5 = 0x41; iVar5 != 0; iVar5 = iVar5 + -1) {
        *piVar10 = *piVar6;
        piVar6 = piVar6 + 1;
        piVar10 = piVar10 + 1;
      }
      if ((aiStack_a20[0] == 4) || (aiStack_a20[0] == 0x13)) break;
      FUN_009a1440(param_1);
      if (*(int *)(param_1 + 0x20) == 0x7b0) {
        FUN_004012f0(local_dd8);
      }
      else if (*(int *)(param_1 + 0x20) == 0x344) {
        FUN_0098fb60(param_1 + 0x228,&local_de0);
        iVar5 = FUN_004ebcb0();
        piVar6 = (int *)(in_ECX + 0x88);
        FUN_004d5f50();
        cVar1 = FUN_0040b360();
        if (cVar1 == '\0') {
          FUN_004ebcb0();
          iVar5 = FUN_005677b0(local_dd8);
          if (*(int *)(iVar5 + 8) < *(int *)(in_ECX + 0x8c) - *piVar6 >> 2) {
            FUN_004ebcb0();
            iVar5 = FUN_005677b0(local_dd8);
            piVar6 = (int *)(*piVar6 + *(int *)(iVar5 + 8) * 4);
            *piVar6 = *piVar6 + local_de0;
          }
        }
        else {
          iVar2 = 0;
          if (0 < (int)(*(int *)(iVar5 + 0x10) - *(int *)(iVar5 + 0xc) & 0xfffffffcU)) {
            do {
              piVar10 = (int *)(*piVar6 + iVar2 * 4);
              *piVar10 = *piVar10 + local_de0;
              iVar2 = iVar2 + 1;
            } while (iVar2 < *(int *)(iVar5 + 0x10) - *(int *)(iVar5 + 0xc) >> 2);
          }
        }
      }
    }
    (**(code **)(**(int **)(param_1 + 0x1c) + 4))();
    FUN_00408ad0();
    ExceptionList = local_14;
    return;
  }
  (**(code **)(**(int **)(param_1 + 0x1c) + 4))();
  ExceptionList = local_14;
  return;
}

