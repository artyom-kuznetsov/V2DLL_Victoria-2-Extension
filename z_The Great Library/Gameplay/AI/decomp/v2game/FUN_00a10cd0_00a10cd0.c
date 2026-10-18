// FUN_00a10cd0 @ 00a10cd0 body=[[00a10cd0, 00a10d93] [00a10d97, 00a10dc3] [00a10dc7, 00a10dee] [00a10df2, 00a10ec3] [00a10ec7, 00a11077] [00a1107b, 00a110bb] [00a110bf, 00a110f3] [00a110f7, 00a1112b] [00a1112f, 00a11164] [00a11168, 00a111a2] [00a111a6, 00a111d3] [00a111d7, 00a1122e] [00a11232, 00a11292] [00a11296, 00a112b2] [00a112b6, 00a112ce] [00a113f1, 00a11401]]


void FUN_00a10cd0(void)

{
  byte bVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  byte *pbVar6;
  int in_ECX;
  char *pcVar7;
  bool bVar8;
  undefined1 local_25c [16];
  undefined4 local_24c;
  char *local_248;
  uint *puStack_244;
  uint local_174;
  uint local_160;
  uint local_158;
  uint local_144;
  uint local_13c;
  uint local_128;
  uint local_10c;
  undefined4 local_104 [5];
  uint local_f0;
  uint local_e8;
  undefined4 local_d8;
  uint local_d4;
  uint local_cc;
  undefined4 local_bc;
  uint local_b8;
  uint local_b0 [4];
  undefined4 local_a0;
  uint local_9c;
  uint local_94 [2];
  undefined1 local_8c [8];
  undefined4 local_84;
  uint local_80;
  undefined4 local_78;
  undefined4 local_74;
  uint local_60;
  undefined1 local_58 [8];
  int local_50;
  int local_4c;
  int local_40;
  undefined1 *local_3c;
  undefined4 *local_38;
  undefined4 *local_34;
  undefined4 *local_30;
  undefined1 *local_28;
  int *local_24;
  undefined4 local_20;
  undefined1 local_19;
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b551cc;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffdc0;
  local_18 = 0;
  puStack_244 = (uint *)0x2;
  local_248 = "\";";
  local_9c = 0xf;
  local_a0 = 0;
  local_b0[0] = local_b0[0] & 0xffffff00;
  local_24c = 0xa10d27;
  ExceptionList = &local_10;
  local_40 = in_ECX;
  FUN_00409350();
  local_8 = 0;
  puStack_244 = (uint *)0x37;
  local_248 = "SELECT * FROM created_diplomacy_games WHERE creator = \"";
  local_b8 = 0xf;
  local_bc = 0;
  local_cc = local_cc & 0xffffff00;
  local_24c = 0xa10d4e;
  FUN_00409350();
  puStack_244 = (uint *)(in_ECX + 0x74);
  local_8._0_1_ = 1;
  local_248 = (char *)0xa10d67;
  FUN_00988f20();
  puStack_244 = local_b0;
  local_8._0_1_ = 2;
  local_248 = (char *)0xa10d7f;
  FUN_00988f20();
  if (0xf < local_10c) {
                    /* WARNING: Subroutine does not return */
    local_248 = &UNK_00a10d94;
    FUN_00aae91b();
  }
  if (0xf < local_b8) {
    puStack_244 = (uint *)local_cc;
                    /* WARNING: Subroutine does not return */
    local_248 = &UNK_00a10dc4;
    FUN_00aae91b();
  }
  local_b8 = 0xf;
  local_bc = 0;
  local_cc = local_cc & 0xffffff00;
  if (0xf < local_9c) {
    puStack_244 = (uint *)local_b0[0];
                    /* WARNING: Subroutine does not return */
    local_248 = &UNK_00a10def;
    FUN_00aae91b();
  }
  local_28 = local_25c;
  local_8._0_1_ = 7;
  local_248 = (char *)0xf;
  local_24c = 0;
  local_9c = 0xf;
  local_a0 = 0;
  local_b0[0] = local_b0[0] & 0xffffff00;
  local_24 = DAT_01258b64;
  local_25c[0] = 0;
  FUN_00408ed0(local_104,0,0xffffffff);
  (**(code **)(*local_24 + 0x10))(local_58);
  local_8 = CONCAT31(local_8._1_3_,8);
  iVar2 = local_4c - local_50 >> 4;
  if (iVar2 != 0) {
    local_38 = (undefined4 *)0x0;
    local_34 = (undefined4 *)0x0;
    local_30 = (undefined4 *)0x0;
    local_8 = CONCAT31(local_8._1_3_,9);
    FUN_004bf300(iVar2);
    iVar2 = local_4c - local_50 >> 4;
    while (iVar2 = iVar2 + -1, iVar2 != 0) {
      local_24 = (int *)CONCAT31(local_24._1_3_,1);
      puVar3 = (undefined4 *)FUN_00a714a0(4);
      if (0xf < (uint)puVar3[5]) {
        puVar3 = (undefined4 *)*puVar3;
      }
      iVar4 = FUN_00aaf0c5(puVar3);
      local_19 = iVar4 == 0;
      if (0xf < local_d4) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_e8);
      }
      if ((bool)local_19) {
        local_24 = (int *)((uint)local_24 & 0xffffff00);
      }
      local_3c = (undefined1 *)FUN_00aae9af(0xa0);
      local_8._0_1_ = 10;
      local_28 = local_3c;
      if (local_3c == (undefined1 *)0x0) {
        uVar5 = 0;
      }
      else {
        FUN_00a714a0(6);
        local_8 = CONCAT31(local_8._1_3_,0xb);
        local_18 = local_18 | 1;
        FUN_009fa790(local_8c);
        local_20 = FUN_00a714a0(5);
        local_8 = 0xc;
        local_18 = local_18 | 2;
        local_78 = FUN_00a714a0(2);
        local_8 = 0xd;
        local_18 = local_18 | 4;
        uVar5 = FUN_00a714a0(1);
        local_8 = 0xe;
        local_18 = local_18 | 8;
        pbVar6 = (byte *)FUN_00a714a0(7);
        local_8 = 0xf;
        local_18 = local_18 | 0x10;
        if (0xf < *(uint *)(pbVar6 + 0x14)) {
          pbVar6 = *(byte **)pbVar6;
        }
        pcVar7 = "DIPLOMACY_TOURNY";
        do {
          bVar1 = *pbVar6;
          bVar8 = bVar1 < (byte)*pcVar7;
          if (bVar1 != *pcVar7) {
LAB_00a10fc0:
            iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
            goto LAB_00a10fc5;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar6[1];
          bVar8 = bVar1 < (byte)pcVar7[1];
          if (bVar1 != pcVar7[1]) goto LAB_00a10fc0;
          pbVar6 = pbVar6 + 2;
          pcVar7 = pcVar7 + 2;
        } while (bVar1 != 0);
        iVar4 = 0;
LAB_00a10fc5:
        uVar5 = FUN_00a15f70(local_28,(iVar4 == 0) * '\x02' + '\x01',uVar5,local_78,local_24,
                             local_20);
      }
      local_8 = 0x14;
      local_20 = uVar5;
      if ((&local_20 < local_34) && (local_38 <= &local_20)) {
        iVar4 = (int)&local_20 - (int)local_38;
        if (local_34 == local_30) {
          FUN_00a513f0();
        }
        if (local_34 != (undefined4 *)0x0) {
          *local_34 = local_38[iVar4 >> 2];
        }
      }
      else {
        if (local_34 == local_30) {
          FUN_00a513f0();
        }
        if (local_34 != (undefined4 *)0x0) {
          *local_34 = uVar5;
        }
      }
      local_34 = local_34 + 1;
      if ((local_18 & 0x10) != 0) {
        local_18 = local_18 & 0xffffffef;
        if (0xf < local_128) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_13c);
        }
        local_128 = 0xf;
        local_13c = local_13c & 0xffffff00;
      }
      if ((local_18 & 8) != 0) {
        local_18 = local_18 & 0xfffffff7;
        if (0xf < local_144) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_158);
        }
        local_144 = 0xf;
        local_158 = local_158 & 0xffffff00;
      }
      if ((local_18 & 4) != 0) {
        local_18 = local_18 & 0xfffffffb;
        if (0xf < local_160) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_174);
        }
        local_160 = 0xf;
        local_174 = local_174 & 0xffffff00;
      }
      if ((local_18 & 2) != 0) {
        local_18 = local_18 & 0xfffffffd;
        if (0xf < local_d4) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_e8);
        }
        local_d4 = 0xf;
        local_d8 = 0;
        local_e8 = local_e8 & 0xffffff00;
      }
      local_8 = 9;
      if (((local_18 & 1) != 0) && (local_18 = local_18 & 0xfffffffe, 0xf < local_60)) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_74);
      }
      puVar3 = (undefined4 *)FUN_00a714a0(0);
      if (0xf < (uint)puVar3[5]) {
        puVar3 = (undefined4 *)*puVar3;
      }
      uVar5 = FUN_00aaf0c5(puVar3);
      *(undefined4 *)(local_34[-1] + 0x68) = uVar5;
      if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_74);
      }
      FUN_00a714a0(3);
      uVar5 = FUN_00a16a90();
      *(undefined4 *)(local_34[-1] + 0x20) = uVar5;
      in_ECX = local_40;
      if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_74);
      }
    }
    local_80 = 0xf;
    local_84 = 0;
    local_94[0] = local_94[0] & 0xffffff00;
    FUN_00408ed0(in_ECX + 8,0,0xffffffff);
    local_8._0_1_ = 0x15;
    iVar2 = FUN_009c1bd0(local_94);
    local_8._0_1_ = 9;
    if (0xf < local_80) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_94[0]);
    }
    local_80 = 0xf;
    local_84 = 0;
    local_94[0] = local_94[0] & 0xffffff00;
    local_3c = (undefined1 *)FUN_00aae9af(0x54);
    local_8._0_1_ = 0x16;
    if (local_3c == (undefined1 *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_00a04500(local_3c,*(undefined4 *)(in_ECX + 0x24),*(undefined2 *)(in_ECX + 0x28),
                           &local_38,1,2);
    }
    local_8 = CONCAT31(local_8._1_3_,9);
    (**(code **)(**(int **)(iVar2 + 0x38) + 0x18))(uVar5);
    if (local_38 != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_38);
    }
  }
  if (local_50 != 0) {
    FUN_00463b30(local_4c,local_3c);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50);
  }
  if (local_f0 < 0x10) {
    ExceptionList = local_10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_104[0]);
}

