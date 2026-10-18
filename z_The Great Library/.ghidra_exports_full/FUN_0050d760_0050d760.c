// FUN_0050d760 @ 0050d760 body=[[0050d760, 0050d85b] [0050d85f, 0050d885] [0050d889, 0050d96c] [0050d970, 0050d996] [0050d99a, 0050d9cc] [0050d9d0, 0050daf5] [0050daf9, 0050db28] [0050db2c, 0050db56] [0050db5a, 0050db84] [0050db88, 0050dbaf] [0050dbb3, 0050dbd4] [0050dbd8, 0050dbf3] [0050dbf7, 0050dc19] [0050dc1d, 0050dcef] [0050dcf3, 0050dd86] [0050dd8a, 0050ddad] [0050ddb1, 0050ddd2] [0050ddd6, 0050ddec] [0050ddf0, 0050df1f] [0050df23, 0050df46] [0050df4a, 0050df71] [0050df75, 0050df9f] [0050dfa3, 0050dfcd] [0050dfd1, 0050dffc] [0050e000, 0050e0bb] [0050e0bf, 0050e0e2] [0050e0e6, 0050e10d] [0050e111, 0050e13c] [0050e140, 0050e176] [0050e17a, 0050e192]]


undefined1 * FUN_0050d760(int param_1,undefined1 *param_2)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  char *pcVar7;
  undefined8 uVar8;
  int local_11c;
  char local_115;
  uint local_114 [4];
  undefined4 local_104;
  uint local_100;
  uint local_f8 [4];
  undefined4 local_e8;
  uint local_e4;
  uint local_dc;
  undefined4 local_cc;
  uint local_c8;
  uint local_c0 [4];
  undefined4 local_b0;
  uint local_ac;
  uint auStack_a4 [4];
  undefined4 uStack_94;
  uint uStack_90;
  uint local_88 [4];
  undefined4 local_78;
  uint local_74;
  uint auStack_6c [4];
  undefined4 uStack_5c;
  uint uStack_58;
  uint uStack_50;
  undefined4 uStack_40;
  uint uStack_3c;
  uint uStack_34;
  undefined4 uStack_24;
  uint uStack_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined1 local_c;
  undefined3 uStack_b;
  
  puStack_10 = &LAB_00b81ec2;
  local_14 = ExceptionList;
  local_74 = 0xf;
  local_78 = 0;
  local_88[0] = local_88[0] & 0xffffff00;
  local_c = 0;
  uStack_b = 0;
  if (*(int *)(param_1 + 0x156c) == 0) {
    ExceptionList = &local_14;
    *(undefined4 *)(param_2 + 0x14) = 0xf;
    *(undefined4 *)(param_2 + 0x10) = 0;
    *param_2 = 0;
    FUN_00408ed0(local_88);
  }
  else {
    ExceptionList = &local_14;
    if (0 < *(int *)(*(int *)(param_1 + 0xbcc) + 0x58)) {
      ExceptionList = &local_14;
      FUN_009c8c30(local_f8);
      local_c = 1;
      uVar3 = FUN_0042c180();
      local_c = 2;
      FUN_00448aa0(uVar3);
      if (0xf < local_100) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_c = 0;
      local_100 = 0xf;
      local_104 = 0;
      local_114[0] = local_114[0] & 0xffffff00;
      if (0xf < local_e4) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      FUN_00448740();
    }
    local_11c = 0;
    if ((((*(int *)(param_1 + 0x156c) != 0) &&
         (iVar4 = *(int *)(*(int *)(param_1 + 0xbe8) +
                          *(int *)(*(int *)(param_1 + 0x156c) + 0x14) * 4), iVar4 != 0)) &&
        (iVar4 = *(int *)(iVar4 + 0x34), iVar4 != 0)) && (*(char *)(iVar4 + 0xfc) != '\0')) {
      local_11c = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x4a0);
    }
    if (*(int *)(DAT_012588e8 + 0xb60) == *(int *)(param_1 + 0x20)) {
      local_c8 = 0xf;
      local_cc = 0;
      local_dc = local_dc & 0xffffff00;
      FUN_00409350();
      local_c = 3;
      uVar3 = (**(code **)(*(int *)(param_1 + 0xa48) + 0x24))(local_114,0x6b);
      local_c = 4;
      FUN_00448aa0(uVar3);
      if (0xf < local_100) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_c = 0;
      local_100 = 0xf;
      local_104 = 0;
      uVar2 = local_114[0] >> 8;
      local_114[0] = uVar2 << 8;
      if (0xf < local_c8) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      if (local_11c != 0) {
        pcVar7 = "+";
        if (local_11c < 1) {
          pcVar7 = "-";
        }
        local_100 = 0xf;
        local_104 = 0;
        local_114[0] = uVar2 << 8;
        do {
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        FUN_00409350();
        local_c = 5;
        local_c8 = 0xf;
        local_cc = 0;
        local_dc = local_dc & 0xffffff00;
        FUN_00409350();
        local_c = 6;
        FUN_009c8ea0(local_f8);
        local_c = 7;
        FUN_0055dd40();
        local_c = 8;
        FUN_0042c180();
        local_c = 9;
        FUN_00988f20();
        local_c = 10;
        FUN_00988f20();
        local_c = 0xb;
        uVar3 = FUN_00988f20();
        local_c = 0xc;
        FUN_00448aa0(uVar3);
        if (0xf < uStack_20) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        uStack_20 = 0xf;
        uStack_24 = 0;
        uStack_34 = uStack_34 & 0xffffff00;
        if (0xf < uStack_58) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        uStack_58 = 0xf;
        uStack_5c = 0;
        auStack_6c[0] = auStack_6c[0] & 0xffffff00;
        if (0xf < uStack_3c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        uStack_3c = 0xf;
        uStack_40 = 0;
        uStack_50 = uStack_50 & 0xffffff00;
        if (0xf < uStack_90) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        uStack_90 = 0xf;
        uStack_94 = 0;
        auStack_a4[0] = auStack_a4[0] & 0xffffff00;
        if (0xf < local_ac) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_ac = 0xf;
        local_b0 = 0;
        local_c0[0] = local_c0[0] & 0xffffff00;
        if (0xf < local_e4) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_e4 = 0xf;
        local_e8 = 0;
        local_f8[0] = local_f8[0] & 0xffffff00;
        if (0xf < local_c8) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_c = 0;
        local_c8 = 0xf;
        local_cc = 0;
        local_dc = local_dc & 0xffffff00;
        if (0xf < local_100) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
      }
      local_c = 0;
      FUN_00448740();
    }
    else {
      local_11c = *(int *)(*(int *)(param_1 + 0xa60) + 0x358) + local_11c;
      uVar8 = __allmul(local_11c,local_11c >> 0x1f);
      iVar4 = __alldiv(uVar8);
      local_c8 = 0xf;
      local_cc = 0;
      local_dc = local_dc & 0xffffff00;
      FUN_00409350();
      local_c = 0xd;
      if ((iVar4 < 0) || (0 < iVar4)) {
        FUN_00409350();
      }
      uVar3 = FUN_00988a50(local_f8);
      local_c = 0xe;
      FUN_00448aa0(uVar3);
      local_c = 0xd;
      if (0xf < local_e4) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      FUN_00448740();
      local_100 = 0xf;
      local_104 = 0;
      local_114[0] = local_114[0] & 0xffffff00;
      FUN_00409350();
      local_c = 0xf;
      FUN_0042c180();
      local_c = 0x10;
      uVar3 = FUN_00988f20();
      local_c = 0x11;
      FUN_00448aa0(uVar3);
      if (0xf < local_e4) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_e4 = 0xf;
      local_e8 = 0;
      local_f8[0] = local_f8[0] & 0xffffff00;
      if (0xf < local_ac) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_ac = 0xf;
      local_b0 = 0;
      local_c0[0] = local_c0[0] & 0xffffff00;
      if (0xf < local_100) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_c = 0;
      if (0xf < local_c8) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
    piVar5 = (int *)FUN_00540ad0();
    if (piVar5 != (int *)0x0) {
      local_100 = 0xf;
      local_104 = 0;
      local_114[0] = local_114[0] & 0xffffff00;
      FUN_00409350();
      local_c = 0x12;
      FUN_009c8c30(auStack_6c);
      local_c = 0x13;
      uVar3 = (**(code **)(*piVar5 + 0x18))();
      local_c = 0x14;
      uVar6 = FUN_0055dd40();
      local_c = 0x15;
      FUN_0043e9a0(local_c0,"COUNTRY",uVar6,"REGION",uVar3);
      local_c = 0x16;
      uVar3 = FUN_00988f20();
      local_c = 0x17;
      FUN_00448aa0(uVar3);
      if (0xf < local_e4) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_e4 = 0xf;
      local_e8 = 0;
      local_f8[0] = local_f8[0] & 0xffffff00;
      if (0xf < local_ac) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_ac = 0xf;
      local_b0 = 0;
      local_c0[0] = local_c0[0] & 0xffffff00;
      if (0xf < uStack_90) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      uStack_90 = 0xf;
      uStack_94 = 0;
      auStack_a4[0] = auStack_a4[0] & 0xffffff00;
      if (0xf < uStack_3c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      uStack_3c = 0xf;
      uStack_40 = 0;
      uStack_50 = uStack_50 & 0xffffff00;
      if (0xf < uStack_58) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_c = 0;
      uStack_58 = 0xf;
      uStack_5c = 0;
      auStack_6c[0] = auStack_6c[0] & 0xffffff00;
      if (0xf < local_100) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      if (local_115 != '\0') {
        local_100 = 0xf;
        local_104 = 0;
        local_114[0] = local_114[0] & 0xffffff00;
        FUN_00409350();
        local_c = 0x18;
        FUN_009c8c30(auStack_a4);
        local_c = 0x19;
        FUN_0042c180();
        local_c = 0x1a;
        uVar3 = FUN_00988f20();
        local_c = 0x1b;
        FUN_00448aa0(uVar3);
        if (0xf < local_e4) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_e4 = 0xf;
        local_e8 = 0;
        local_f8[0] = local_f8[0] & 0xffffff00;
        if (0xf < local_ac) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_ac = 0xf;
        local_b0 = 0;
        local_c0[0] = local_c0[0] & 0xffffff00;
        if (0xf < uStack_90) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_c = 0;
        uStack_90 = 0xf;
        uStack_94 = 0;
        auStack_a4[0] = auStack_a4[0] & 0xffffff00;
        if (0xf < local_100) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
      }
    }
    *(undefined4 *)(param_2 + 0x14) = 0xf;
    *(undefined4 *)(param_2 + 0x10) = 0;
    *param_2 = 0;
    FUN_00408ed0(local_88);
  }
  if (local_74 < 0x10) {
    ExceptionList = local_14;
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

