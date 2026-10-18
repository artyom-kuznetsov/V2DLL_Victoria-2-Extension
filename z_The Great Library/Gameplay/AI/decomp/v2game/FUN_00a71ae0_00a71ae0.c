// FUN_00a71ae0 @ 00a71ae0 body=[[00a71ae0, 00a71bde] [00a71be2, 00a71c03] [00a71c07, 00a71c31] [00a71c35, 00a71c59] [00a71c5d, 00a71c80] [00a71c84, 00a71d5d] [00a71d61, 00a71d8b] [00a71d8f, 00a71dbb] [00a71dc1, 00a71e17] [00a71e1b, 00a71e7d] [00a71e81, 00a71e97]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a71ae0(undefined4 param_1,undefined4 *param_2)

{
  byte bVar1;
  int *piVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  char *pcVar7;
  undefined4 unaff_EDI;
  bool bVar8;
  undefined4 uStack_138;
  uint *puStack_12c;
  uint local_114 [4];
  undefined4 local_104;
  uint local_100;
  uint local_f8;
  undefined4 local_e8;
  uint local_e4;
  uint local_dc [4];
  undefined4 local_cc;
  uint local_c8;
  uint local_c0;
  undefined4 local_b0;
  uint local_ac;
  uint local_a4;
  undefined4 local_94;
  uint local_90;
  uint local_88;
  undefined4 local_78;
  uint local_74;
  uint local_6c;
  undefined4 local_5c;
  uint local_58;
  uint local_50;
  undefined4 local_40;
  uint local_3c;
  undefined1 local_34 [20];
  uint uStack_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  piVar2 = DAT_01258b64;
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b77b97;
  local_14 = ExceptionList;
  if (param_2 != (undefined4 *)0x0) {
    local_c8 = 0xf;
    local_cc = 0;
    local_dc[0] = local_dc[0] & 0xffffff00;
    ExceptionList = &local_14;
    FUN_00409350();
    local_c = 0;
    local_e4 = 0xf;
    local_e8 = 0;
    local_f8 = local_f8 & 0xffffff00;
    FUN_00409350();
    local_c._0_1_ = 1;
    FUN_00988fa0();
    local_c._0_1_ = 2;
    FUN_00988f20();
    local_c._0_1_ = 3;
    FUN_00988f20();
    puStack_12c = local_dc;
    local_c._0_1_ = 4;
    FUN_00988f20();
    if (0xf < local_ac) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_ac = 0xf;
    local_b0 = 0;
    local_c0 = local_c0 & 0xffffff00;
    if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_74 = 0xf;
    local_78 = 0;
    local_88 = local_88 & 0xffffff00;
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_3c = 0xf;
    local_40 = 0;
    local_50 = local_50 & 0xffffff00;
    if (0xf < local_e4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_e4 = 0xf;
    local_e8 = 0;
    local_f8 = local_f8 & 0xffffff00;
    local_c._0_1_ = 10;
    if (0xf < local_c8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_c8 = 0xf;
    local_cc = 0;
    local_dc[0] = local_dc[0] & 0xffffff00;
    pbVar3 = _DAT_013f0670;
    if (DAT_013f0684 < 0x10) {
      pbVar3 = &DAT_013f0670;
    }
    pcVar7 = "diplomacy";
    do {
      bVar1 = *pbVar3;
      bVar8 = bVar1 < (byte)*pcVar7;
      if (bVar1 != *pcVar7) {
LAB_00a71cc7:
        iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
        goto LAB_00a71ccc;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar8 = bVar1 < (byte)pcVar7[1];
      if (bVar1 != pcVar7[1]) goto LAB_00a71cc7;
      pbVar3 = pbVar3 + 2;
      pcVar7 = pcVar7 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_00a71ccc:
    if (iVar4 == 0) {
      local_100 = 0xf;
      local_104 = 0;
      local_114[0] = local_114[0] & 0xffffff00;
      FUN_00409350();
      local_c._0_1_ = 0xb;
      FUN_00988fa0();
      local_c._0_1_ = 0xc;
      FUN_00988f20();
      puStack_12c = (uint *)0xffffffff;
      local_c._0_1_ = 0xd;
      uStack_138 = 0xa71d43;
      FUN_00408ed0();
      if (0xf < local_90) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_90 = 0xf;
      local_94 = 0;
      local_a4 = local_a4 & 0xffffff00;
      if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_c._0_1_ = 10;
      local_58 = 0xf;
      local_5c = 0;
      local_6c = local_6c & 0xffffff00;
      if (0xf < local_100) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
    local_c._0_1_ = 10;
    FUN_00408ed0(local_34,0,0xffffffff);
    (**(code **)(*piVar2 + 0x10))(local_114);
    if (puStack_12c != (uint *)0x0) {
      FUN_00463b30(unaff_EDI,uStack_138);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(puStack_12c);
    }
    uVar5 = FUN_00418e30(&DAT_00f1f9c8,"User ");
    puVar6 = param_2;
    if (0xf < (uint)param_2[5]) {
      puVar6 = (undefined4 *)*param_2;
    }
    uVar5 = FUN_00418e30(uVar5,puVar6);
    uVar5 = FUN_00418e30(uVar5," logged out.");
    FUN_00401280(uVar5);
    FUN_00a72210(param_1,param_2);
    FUN_00a71a70(param_1);
    if (0xf < uStack_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  ExceptionList = local_14;
  return;
}

