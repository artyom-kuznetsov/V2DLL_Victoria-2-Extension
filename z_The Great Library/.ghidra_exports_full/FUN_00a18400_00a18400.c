// FUN_00a18400 @ 00a18400 body=[[00a18400, 00a18459] [00a1845d, 00a18538] [00a18541, 00a18571] [00a18575, 00a18711] [00a18715, 00a18848] [00a1884c, 00a1887b] [00a1887f, 00a188a8] [00a188ac, 00a188cc] [00a188d0, 00a188f9] [00a188fd, 00a18a18] [00a18a1c, 00a18a40] [00a18a44, 00a18a5d] [00a18a63, 00a18aa4] [00a18aa8, 00a18aba]]


void FUN_00a18400(int param_1,char *param_2)

{
  undefined1 uVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int in_stack_00000018;
  uint in_stack_0000001c;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined1 local_1f0 [8];
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 ***local_1e0;
  char *local_1dc;
  undefined4 ***local_1d8;
  undefined **local_14c [19];
  uint local_100;
  undefined4 local_f0;
  uint local_ec;
  uint local_e4;
  undefined4 local_d4;
  uint local_d0;
  uint local_c8;
  undefined4 local_b8;
  uint local_b4;
  undefined1 *local_ac;
  undefined4 ***local_a8 [4];
  undefined4 local_98;
  uint local_94;
  undefined4 ***local_8c [4];
  undefined4 local_7c;
  uint local_78;
  uint local_70 [4];
  undefined4 local_60;
  uint local_5c;
  undefined4 ***local_54 [4];
  undefined4 local_44;
  uint local_40;
  uint local_38 [4];
  undefined4 local_28;
  uint local_24;
  undefined1 *local_1c;
  undefined1 *local_18;
  char local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b610ca;
  local_10 = ExceptionList;
  local_18 = (undefined1 *)0x0;
  local_1d8 = (undefined4 ***)local_38;
  local_8 = 0;
  local_1dc = (char *)0xa18435;
  ExceptionList = &local_10;
  local_1e0 = (undefined4 ***)FUN_00989330();
  local_1d8 = (undefined4 ***)0xffffffff;
  local_1dc = (char *)0x0;
  local_8._0_1_ = 1;
  uStack_1e4 = 0xa18444;
  FUN_00408ed0();
  local_8._0_1_ = 0;
  uVar1 = (undefined1)local_8;
  local_8._0_1_ = 0;
  if (0xf < local_24) {
    local_1d8 = (undefined4 ***)local_38[0];
                    /* WARNING: Subroutine does not return */
    local_1dc = &UNK_00a1845a;
    FUN_00aae91b();
  }
  if (0 < in_stack_00000018) {
    pcVar3 = param_2;
    if (in_stack_0000001c < 0x10) {
      pcVar3 = (char *)&param_2;
    }
    if (*pcVar3 == '/') {
      local_1d8 = (undefined4 ***)0x1;
      local_1dc = local_14;
      local_1e0 = (undefined4 ***)&param_2;
      local_14[0] = ' ';
      uStack_1e4 = 0xa1848f;
      iVar4 = FUN_005484e0();
      local_1d8 = (undefined4 ***)0x0;
      local_1dc = "";
      local_78 = 0xf;
      local_7c = 0;
      local_8c[0] = (undefined4 ***)((uint)local_8c[0] & 0xffffff00);
      local_1e0 = (undefined4 ***)0xa184b3;
      FUN_00409350();
      local_8._0_1_ = 2;
      local_1d8 = (undefined4 ***)0x0;
      local_1dc = "";
      local_40 = 0xf;
      local_44 = 0;
      local_54[0] = (undefined4 ***)((uint)local_54[0] & 0xffffff00);
      local_1e0 = (undefined4 ***)0xa184ce;
      FUN_00409350();
      local_8._0_1_ = 3;
      local_1d8 = (undefined4 ***)0x0;
      local_1dc = "";
      local_94 = 0xf;
      local_98 = 0;
      local_a8[0] = (undefined4 ***)((uint)local_a8[0] & 0xffffff00);
      local_1e0 = (undefined4 ***)0xa184f5;
      FUN_00409350();
      local_8._0_1_ = 4;
      uVar1 = (undefined1)local_8;
      local_8._0_1_ = 4;
      if (iVar4 == -1) {
        local_1d8 = (undefined4 ***)in_stack_00000018;
        local_1dc = (char *)0xa18510;
        local_1e0 = (undefined4 ***)FUN_009895f0();
        local_1dc = (char *)0x0;
        local_8._0_1_ = 5;
        uStack_1e4 = 0xa18522;
        local_1d8 = (undefined4 ***)iVar4;
        FUN_00408ed0();
        local_8._0_1_ = 4;
        uVar1 = (undefined1)local_8;
        local_8._0_1_ = 4;
        if (0xf < local_24) {
          local_1d8 = (undefined4 ***)local_38[0];
                    /* WARNING: Subroutine does not return */
          local_1dc = &UNK_00a18539;
          FUN_00aae91b();
        }
      }
      else {
        local_1dc = (char *)0xa1854c;
        local_1d8 = (undefined4 ***)iVar4;
        local_8._0_1_ = uVar1;
        local_1e0 = (undefined4 ***)FUN_009895f0();
        local_1d8 = (undefined4 ***)0xffffffff;
        local_1dc = (char *)0x0;
        local_8._0_1_ = 6;
        uStack_1e4 = 0xa1855f;
        FUN_00408ed0();
        local_8._0_1_ = 4;
        if (0xf < local_24) {
          local_1d8 = (undefined4 ***)local_38[0];
                    /* WARNING: Subroutine does not return */
          local_1dc = &UNK_00a18572;
          FUN_00aae91b();
        }
        uVar1 = (undefined1)local_8;
        if (iVar4 + 1 < in_stack_00000018) {
          local_1d8 = (undefined4 ***)in_stack_00000018;
          local_1dc = (char *)0xa1858f;
          local_1e0 = (undefined4 ***)FUN_009895f0();
          local_1d8 = (undefined4 ***)0xffffffff;
          local_1dc = (char *)0x0;
          local_8._0_1_ = 7;
          uStack_1e4 = 0xa1859f;
          FUN_00408ed0();
          local_8._0_1_ = 4;
          local_1d8 = (undefined4 ***)0xa185aa;
          FUN_00408ad0();
          local_1d8 = (undefined4 ***)0x1;
          local_1dc = local_14;
          local_1e0 = local_54;
          local_14[0] = ' ';
          uStack_1e4 = 0xa185bf;
          iVar4 = FUN_005484e0();
          uVar1 = (undefined1)local_8;
          if (iVar4 != -1) {
            local_1d8 = (undefined4 ***)in_stack_00000018;
            local_1dc = (char *)0xa185d8;
            local_1e0 = (undefined4 ***)FUN_009895f0();
            local_1d8 = (undefined4 ***)0xffffffff;
            local_1dc = (char *)0x0;
            local_8._0_1_ = 8;
            uStack_1e4 = 0xa185eb;
            FUN_00408ed0();
            local_8._0_1_ = 4;
            local_1d8 = (undefined4 ***)0xa185f6;
            FUN_00408ad0();
            local_1dc = (char *)0xa18604;
            local_1d8 = (undefined4 ***)iVar4;
            local_1e0 = (undefined4 ***)FUN_009895f0();
            local_1d8 = (undefined4 ***)0xffffffff;
            local_1dc = (char *)0x0;
            local_8._0_1_ = 9;
            uStack_1e4 = 0xa18614;
            FUN_00408ed0();
            local_8._0_1_ = 4;
            local_1d8 = (undefined4 ***)0xa1861f;
            FUN_00408ad0();
            uVar1 = (undefined1)local_8;
          }
        }
      }
      local_8._0_1_ = uVar1;
      local_1d8 = (undefined4 ***)0x12;
      local_1dc = "metaserveruser.cpp";
      local_5c = 0xf;
      local_60 = 0;
      local_70[0] = local_70[0] & 0xffffff00;
      local_1e0 = (undefined4 ***)0xa1863b;
      FUN_00409350();
      local_1d8 = (undefined4 ***)0x4;
      local_1e0 = (undefined4 ***)local_70;
      local_1dc = (char *)0x13c;
      local_8._0_1_ = 10;
      uStack_1e4 = 0xa18655;
      FUN_004015b0();
      local_8._0_1_ = 0xb;
      local_1d8 = (undefined4 ***)0xa18668;
      local_1dc = (char *)FUN_00987d20();
      local_1d8 = local_8c[0];
      if (local_78 < 0x10) {
        local_1d8 = local_8c;
      }
      local_1e0 = (undefined4 ***)0xa18685;
      uStack_1e4 = FUN_00418e30();
      local_1e0 = (undefined4 ***)&DAT_00ded950;
      uStack_1e8 = 0xa18690;
      local_1dc = (char *)FUN_00418e30();
      local_1d8 = local_54[0];
      if (local_40 < 0x10) {
        local_1d8 = local_54;
      }
      local_1e0 = (undefined4 ***)0xa186a5;
      uStack_1e4 = FUN_00418e30();
      local_1e0 = (undefined4 ***)&DAT_00ded950;
      uStack_1e8 = 0xa186b0;
      local_1dc = (char *)FUN_00418e30();
      local_1d8 = local_a8[0];
      if (local_94 < 0x10) {
        local_1d8 = local_a8;
      }
      local_1e0 = (undefined4 ***)0xa186ce;
      local_1e0 = (undefined4 ***)FUN_00418e30();
      uStack_1e4 = 0xa186d4;
      FUN_00401280();
      local_1d8 = (undefined4 ***)local_14c;
      local_8._0_1_ = 10;
      local_1dc = (char *)0xa186e7;
      FUN_00987ac0();
      local_1d8 = (undefined4 ***)local_14c;
      local_14c[0] = std::ios_base::vftable;
      local_1dc = (char *)0xa186fd;
      FUN_00aad52d();
      local_8._0_1_ = 4;
      if (0xf < local_5c) {
        local_1d8 = (undefined4 ***)local_70[0];
                    /* WARNING: Subroutine does not return */
        local_1dc = &UNK_00a18712;
        FUN_00aae91b();
      }
      local_1d8 = (undefined4 ***)0x4;
      local_1dc = "join";
      local_b4 = 0xf;
      local_b8 = 0;
      local_c8 = local_c8 & 0xffffff00;
      local_1e0 = (undefined4 ***)0xa1873e;
      FUN_00409350();
      local_8 = CONCAT31(local_8._1_3_,0xc);
      local_18 = (undefined1 *)0x1;
      local_1d8 = (undefined4 ***)0xa1875a;
      cVar2 = FUN_00416db0();
      if (cVar2 == '\0') {
        local_1d8 = (undefined4 ***)0x4;
        local_1dc = "Join";
        local_5c = 0xf;
        local_60 = 0;
        local_70[0] = local_70[0] & 0xffffff00;
        local_1e0 = (undefined4 ***)0xa1877a;
        FUN_00409350();
        local_8 = 0xd;
        local_18 = (undefined1 *)0x3;
        local_1d8 = (undefined4 ***)0xa18796;
        cVar2 = FUN_00416db0();
        if (cVar2 != '\0') goto LAB_00a18827;
        local_1d8 = (undefined4 ***)0xa187ab;
        FUN_009885d0();
        local_8 = 0xe;
        local_18 = (undefined1 *)0x7;
        local_1d8 = (undefined4 ***)0xa187c4;
        cVar2 = FUN_00416db0();
        if (cVar2 != '\0') goto LAB_00a18827;
        local_1d8 = (undefined4 ***)0xa187d8;
        FUN_009885d0();
        local_8 = 0xf;
        local_18 = (undefined1 *)0xf;
        local_1d8 = (undefined4 ***)0xa187e9;
        cVar2 = FUN_00416db0();
        if (cVar2 != '\0') goto LAB_00a18827;
        local_1d8 = (undefined4 ***)0xa187fd;
        FUN_009885d0();
        local_8 = 0x10;
        local_18 = (undefined1 *)0x1f;
        local_1d8 = (undefined4 ***)0xa18816;
        cVar2 = FUN_00416db0();
        if (cVar2 != '\0') goto LAB_00a18827;
        local_14[0] = '\0';
      }
      else {
LAB_00a18827:
        local_14[0] = '\x01';
      }
      if (((uint)local_18 & 0x10) != 0) {
        local_18 = (undefined1 *)((uint)local_18 & 0xffffffef);
        if (0xf < local_ec) {
          local_1d8 = (undefined4 ***)local_100;
                    /* WARNING: Subroutine does not return */
          local_1dc = &UNK_00a18849;
          FUN_00aae91b();
        }
        local_ec = 0xf;
        local_f0 = 0;
        local_100 = local_100 & 0xffffff00;
      }
      if (((uint)local_18 & 8) != 0) {
        local_18 = (undefined1 *)((uint)local_18 & 0xfffffff7);
        if (0xf < local_d0) {
          local_1d8 = (undefined4 ***)local_e4;
                    /* WARNING: Subroutine does not return */
          local_1dc = &UNK_00a1887c;
          FUN_00aae91b();
        }
        local_d0 = 0xf;
        local_d4 = 0;
        local_e4 = local_e4 & 0xffffff00;
      }
      if (((uint)local_18 & 4) != 0) {
        local_18 = (undefined1 *)((uint)local_18 & 0xfffffffb);
        if (0xf < local_24) {
          local_1d8 = (undefined4 ***)local_38[0];
                    /* WARNING: Subroutine does not return */
          local_1dc = &UNK_00a188a9;
          FUN_00aae91b();
        }
        local_24 = 0xf;
        local_28 = 0;
        local_38[0] = local_38[0] & 0xffffff00;
      }
      if (((uint)local_18 & 2) != 0) {
        local_18 = (undefined1 *)((uint)local_18 & 0xfffffffd);
        if (0xf < local_5c) {
          local_1d8 = (undefined4 ***)local_70[0];
                    /* WARNING: Subroutine does not return */
          local_1dc = &UNK_00a188cd;
          FUN_00aae91b();
        }
        local_5c = 0xf;
        local_60 = 0;
        local_70[0] = local_70[0] & 0xffffff00;
      }
      local_8._0_1_ = 4;
      local_8._1_3_ = 0;
      if ((((uint)local_18 & 1) != 0) && (0xf < local_b4)) {
        local_1d8 = (undefined4 ***)local_c8;
                    /* WARNING: Subroutine does not return */
        local_1dc = &UNK_00a188fa;
        FUN_00aae91b();
      }
      if (local_14[0] == '\0') {
        if (*(int *)(param_1 + 0x78) != 0) {
          uStack_1f4 = 0xa189f5;
          FUN_00401320();
          uStack_1f4 = *(undefined4 *)(param_1 + 0x78);
          uStack_1f8 = 0xa18a00;
          FUN_00a17880();
        }
      }
      else {
        local_18 = (undefined1 *)&local_1dc;
        local_1dc = DAT_00f0d838;
        local_1d8 = (undefined4 ***)DAT_00f0d83c;
        local_1e0 = (undefined4 ***)0xa18924;
        puVar5 = (undefined1 *)FUN_009c16d0();
        local_1c = local_1f0;
        uStack_1f4 = 0xffffffff;
        uStack_1f8 = 0;
        local_1dc = (char *)0xf;
        local_1e0 = (undefined4 ***)0x0;
        local_1f0[0] = 0;
        local_18 = puVar5;
        FUN_00408ed0(local_54);
        uStack_1f4 = 0xa1894c;
        iVar4 = FUN_00a71ea0();
        if (iVar4 == 0) {
          local_1d8 = (undefined4 ***)0x58;
          local_1dc = (char *)0xa1897b;
          puVar6 = (undefined1 *)FUN_00aae9af();
          local_8._0_1_ = 0x11;
          local_1c = puVar6;
          if (puVar6 != (undefined1 *)0x0) {
            local_1d8 = (undefined4 ***)0x1;
            local_1dc = (char *)0x0;
            local_ac = (undefined1 *)&uStack_1f8;
            FUN_00401320();
            FUN_00a16ee0(puVar6);
            puVar5 = local_18;
          }
          local_8._0_1_ = 4;
          local_1dc = (char *)0xa189bc;
          local_1d8 = (undefined4 ***)puVar5;
          FUN_00a71f00();
          local_ac = local_1f0;
          uStack_1f4 = 0xa189d1;
          FUN_009885d0();
          uStack_1f4 = 0xa189db;
          FUN_00a182a0();
        }
        else {
          local_1c = local_1f0;
          uStack_1f4 = 0xa18965;
          FUN_00401320();
          uStack_1f4 = 0xa1896f;
          FUN_00a182a0();
        }
      }
      if (0xf < local_94) {
        local_1d8 = local_a8[0];
                    /* WARNING: Subroutine does not return */
        local_1dc = &UNK_00a18a19;
        FUN_00aae91b();
      }
      local_94 = 0xf;
      local_98 = 0;
      local_a8[0] = (undefined4 ***)((uint)local_a8[0] & 0xffffff00);
      if (0xf < local_40) {
        local_1d8 = local_54[0];
                    /* WARNING: Subroutine does not return */
        local_1dc = &UNK_00a18a41;
        FUN_00aae91b();
      }
      local_40 = 0xf;
      local_44 = 0;
      local_54[0] = (undefined4 ***)((uint)local_54[0] & 0xffffff00);
      if (0xf < local_78) {
        local_1d8 = local_8c[0];
                    /* WARNING: Subroutine does not return */
        local_1dc = &UNK_00a18a5e;
        FUN_00aae91b();
      }
      goto LAB_00a18a96;
    }
  }
  local_8._0_1_ = uVar1;
  if (*(int *)(param_1 + 0x78) != 0) {
    uStack_1f4 = 0xffffffff;
    uStack_1f8 = 0;
    local_1dc = (char *)0xf;
    local_1e0 = (undefined4 ***)0x0;
    local_1f0[0] = 0;
    FUN_00408ed0(&param_2);
    uStack_1f4 = *(undefined4 *)(param_1 + 0x78);
    uStack_1f8 = 0xa18a96;
    FUN_00a17880();
  }
LAB_00a18a96:
  if (in_stack_0000001c < 0x10) {
    ExceptionList = local_10;
    return;
  }
  local_1d8 = (undefined4 ***)param_2;
                    /* WARNING: Subroutine does not return */
  local_1dc = &UNK_00a18aa5;
  FUN_00aae91b();
}

