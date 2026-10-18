// FUN_007735e0 @ 007735e0 body=[[007735e0, 0077375f] [00773763, 0077378f] [00773793, 007737b6] [007737ba, 007738c0] [007738c4, 007738f4] [007738f8, 00773958] [0077395c, 007739f6] [007739fa, 00773a18] [00773a1c, 00773a65] [00773a69, 00773a90] [00773a94, 00773ac4] [00773acd, 00773b9b] [00773b9f, 00773c25] [00773c29, 00773c47] [00773c4b, 00773c94] [00773c98, 00773cc2] [00773ccb, 00773d61] [00773d65, 00773d94] [00773d9d, 00774223]]


/* WARNING: Removing unreachable block (ram,0x00773ab9) */
/* WARNING: Removing unreachable block (ram,0x007737ab) */

undefined1 * FUN_007735e0(undefined1 *param_1,int *param_2)

{
  byte bVar1;
  int *piVar2;
  undefined4 *puVar3;
  char cVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  char *pcVar10;
  bool bVar11;
  undefined4 local_94;
  undefined4 local_90;
  undefined1 local_8c [8];
  undefined1 local_84 [4];
  int local_80;
  undefined4 local_7c;
  undefined4 local_78;
  uint local_70 [4];
  undefined4 local_60;
  uint local_5c;
  uint local_54 [4];
  undefined4 local_44;
  uint local_40;
  int local_38;
  undefined4 local_34;
  int local_30;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  piVar8 = param_2;
  puStack_c = &LAB_00b89e42;
  local_10 = ExceptionList;
  local_30 = 0;
  local_8 = 0;
  ExceptionList = &local_10;
  pbVar5 = (byte *)(**(code **)(*param_2 + 0x44))();
  iVar7 = DAT_012588e8;
  if (0xf < *(uint *)(pbVar5 + 0x14)) {
    pbVar5 = *(byte **)pbVar5;
  }
  pcVar10 = "play_button";
  do {
    bVar1 = *pbVar5;
    bVar11 = bVar1 < (byte)*pcVar10;
    if (bVar1 != *pcVar10) {
LAB_00773690:
      iVar6 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
      goto LAB_00773695;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar5[1];
    bVar11 = bVar1 < (byte)pcVar10[1];
    if (bVar1 != pcVar10[1]) goto LAB_00773690;
    pbVar5 = pbVar5 + 2;
    pcVar10 = pcVar10 + 2;
  } while (bVar1 != 0);
  iVar6 = 0;
LAB_00773695:
  if (iVar6 == 0) {
    FUN_00409350(&DAT_00ded94d,0);
    local_8._0_1_ = 1;
    if ((*(int *)(iVar7 + 0x20) < 2) && (DAT_012589ac != 0)) {
      local_18 = 0xf;
      local_1c = 0;
      local_2c[0] = (uint)local_2c[0]._1_3_ << 8;
      FUN_00409350("MP_FEW_PLAYERS",0xe);
      local_8._0_1_ = 2;
      FUN_009a8ee0(local_84,local_2c);
      local_8._0_1_ = 3;
      iVar7 = FUN_00475500();
      FUN_009a9880(*(undefined8 *)(iVar7 + 0x6c),*(undefined8 *)(iVar7 + 0x74));
      local_8._0_1_ = 4;
      FUN_00408ed0();
      if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_40 = 0xf;
      local_44 = 0;
      local_54[0] = local_54[0] & 0xffffff00;
      local_8._0_1_ = 2;
      FUN_009a9740();
      local_8 = CONCAT31(local_8._1_3_,1);
      if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      FUN_0040c830();
      FUN_00459820();
      ExceptionList = local_10;
      return param_1;
    }
    for (iVar7 = *(int *)(iVar7 + 0x18); iVar7 != 0; iVar7 = *(int *)(iVar7 + 0x3c)) {
      if (*(int *)(iVar7 + 0x24) == 0) {
        local_18 = 0xf;
        local_1c = 0;
        local_2c[0] = (uint)local_2c[0]._1_3_ << 8;
        FUN_00409350("NOT_SELECT",10);
        local_8._0_1_ = 5;
        FUN_009a8ee0(local_84,local_2c);
        local_8._0_1_ = 6;
        iVar7 = FUN_00475500();
        FUN_009a9880(*(undefined8 *)(iVar7 + 0x6c),*(undefined8 *)(iVar7 + 0x74));
        local_8._0_1_ = 7;
        FUN_00408ed0();
        if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_40 = 0xf;
        local_44 = 0;
        local_54[0] = local_54[0] & 0xffffff00;
        local_8._0_1_ = 8;
        FUN_009adb70();
        if (local_80 != 0) {
          FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_8._0_1_ = 1;
        local_80 = 0;
        local_7c = 0;
        local_78 = 0;
        if (0xf < local_18) {
LAB_00773a8c:
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        break;
      }
      iVar6 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar7 + 0x24) * 4);
      if ((int)(*(int *)(iVar6 + 0x9dc) - *(int *)(iVar6 + 0x9d8) & 0xfffffffcU) < 1) {
        local_40 = 0xf;
        local_44 = 0;
        local_54[0] = local_54[0] & 0xffffff00;
        FUN_00409350("NOT_EXIST",9);
        local_8._0_1_ = 9;
        FUN_009a8ee0(local_84,local_54);
        local_8._0_1_ = 0xb;
        if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_40 = 0xf;
        local_44 = 0;
        local_54[0] = local_54[0] & 0xffffff00;
        local_18 = 0xf;
        local_1c = 0;
        local_2c[0] = local_2c[0] & 0xffffff00;
        FUN_00409350(&DAT_00dfa9cc,3);
        local_8._0_1_ = 0xc;
        FUN_004f97a0();
        local_8._0_1_ = 0xd;
        param_2 = (int *)FUN_00aae9af();
        local_8._0_1_ = 0xe;
        if (param_2 == (int *)0x0) {
          param_2 = (int *)0x0;
        }
        else {
          param_2 = (int *)FUN_009a9ce0();
        }
        local_8._0_1_ = 0xd;
        FUN_009e6810(local_2c,&param_2);
        if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_8._0_1_ = 0xb;
        local_5c = 0xf;
        local_60 = 0;
        local_70[0] = local_70[0] & 0xffffff00;
        if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        iVar7 = FUN_00475500();
        FUN_009a9880(*(undefined8 *)(iVar7 + 0x6c),*(undefined8 *)(iVar7 + 0x74));
        local_8._0_1_ = 0xf;
        FUN_00408ed0();
        if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_8._0_1_ = 0x10;
        FUN_009adb70();
        local_8._0_1_ = 1;
        if (local_80 != 0) {
          FUN_009e6a80();
          goto LAB_00773a8c;
        }
        break;
      }
    }
    local_8._0_1_ = 1;
    FUN_00408ed0();
    local_8 = (uint)local_8._1_3_ << 8;
  }
  else {
    pbVar5 = (byte *)(**(code **)(*piVar8 + 0x44))();
    if (0xf < *(uint *)(pbVar5 + 0x14)) {
      pbVar5 = *(byte **)pbVar5;
    }
    pcVar10 = "shield";
    do {
      bVar1 = *pbVar5;
      bVar11 = bVar1 < (byte)*pcVar10;
      if (bVar1 != *pcVar10) {
LAB_00773b03:
        iVar7 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
        goto LAB_00773b08;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar5[1];
      bVar11 = bVar1 < (byte)pcVar10[1];
      if (bVar1 != pcVar10[1]) goto LAB_00773b03;
      pbVar5 = pbVar5 + 2;
      pcVar10 = pcVar10 + 2;
    } while (bVar1 != 0);
    iVar7 = 0;
LAB_00773b08:
    if (iVar7 == 0) {
      local_34 = 0x2d2d2d;
      piVar2 = *(int **)(local_38 + 0x314);
      local_30 = 0;
      puVar3 = *(undefined4 **)(local_38 + 0x324);
      for (; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[2]) {
        puVar9 = (undefined4 *)0x0;
        if (puVar3 != (undefined4 *)0x0) {
          if (piVar8 == (int *)*piVar2) {
            local_34 = *puVar3;
            local_30 = puVar3[1];
            break;
          }
          puVar9 = (undefined4 *)puVar3[3];
        }
        puVar3 = puVar9;
      }
      if (local_30 != 0) {
        local_40 = 0xf;
        local_44 = 0;
        local_54[0] = local_54[0] & 0xffffff00;
        FUN_00409350("SHORTCUT_SHIELD",0xf);
        local_8._0_1_ = 0x11;
        FUN_009a8ee0(local_84,local_54);
        local_8._0_1_ = 0x13;
        if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_40 = 0xf;
        local_44 = 0;
        local_54[0] = local_54[0] & 0xffffff00;
        local_18 = 0xf;
        local_1c = 0;
        local_2c[0] = local_2c[0] & 0xffffff00;
        FUN_00409350(&DAT_00dfa9cc,3);
        local_8._0_1_ = 0x14;
        FUN_0055dd40();
        local_8._0_1_ = 0x15;
        param_2 = (int *)FUN_00aae9af();
        local_8._0_1_ = 0x16;
        if (param_2 == (int *)0x0) {
          param_2 = (int *)0x0;
        }
        else {
          param_2 = (int *)FUN_009a9ce0();
        }
        local_8._0_1_ = 0x15;
        FUN_009e6810(local_2c,&param_2);
        if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_8._0_1_ = 0x13;
        local_5c = 0xf;
        local_60 = 0;
        local_70[0] = local_70[0] & 0xffffff00;
        if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        iVar7 = FUN_00475500();
        FUN_009a9880(*(undefined8 *)(iVar7 + 0x6c),*(undefined8 *)(iVar7 + 0x74));
        local_8._0_1_ = 0x17;
        FUN_00408ed0();
        if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_8._0_1_ = 0x18;
        FUN_009adb70();
        local_8 = (uint)local_8._1_3_ << 8;
        if (local_80 != 0) {
          FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
      }
    }
    else {
      (**(code **)(*piVar8 + 0x44))();
      cVar4 = FUN_0040b360();
      if (cVar4 == '\0') {
        (**(code **)(*piVar8 + 0x44))();
        cVar4 = FUN_0040b360();
        if (cVar4 == '\0') {
          (**(code **)(*piVar8 + 0x44))();
          cVar4 = FUN_0040b360();
          if (cVar4 == '\0') {
            (**(code **)(*piVar8 + 0x44))();
            cVar4 = FUN_0040b360();
            if (cVar4 != '\0') {
              (**(code **)(**(int **)(*(int *)(local_38 + 4) + 0x58) + 0x4c))();
              local_38 = 0;
              param_2 = (int *)0x0;
              cVar4 = FUN_009e0c90(local_94,local_90,&local_38,&param_2);
              if (cVar4 != '\0') {
                if (DAT_0131bb34 == 0) {
                  local_30 = FUN_00aae9af();
                  local_8._0_1_ = 0x23;
                  if (local_30 != 0) {
                    FUN_0041a160();
                  }
                  local_8 = (uint)local_8._1_3_ << 8;
                  FUN_00423700();
                }
                if (*(int *)(DAT_0131bb34 + 0x10) - *(int *)(DAT_0131bb34 + 0xc) >> 2 < local_38) {
                  piVar8 = (int *)FUN_0096bb70();
                }
                else {
                  piVar8 = *(int **)(*(int *)(DAT_0131bb34 + 0xc) + local_38 * 4);
                }
                if ((piVar8 != (int *)0x0) &&
                   (cVar4 = (**(code **)(*piVar8 + 0x18))(), cVar4 != '\0')) {
                  FUN_009885d0();
                  local_8._0_1_ = 0x24;
                  FUN_0096d650(piVar8,local_8c);
                  local_8._0_1_ = 0x25;
                  FUN_009888f0();
                  local_8._0_1_ = 0x26;
                  FUN_00988f20();
                  local_8._0_1_ = 0x27;
                  FUN_00988f20();
                  local_8._0_1_ = 0x28;
                  FUN_00408ed0();
                  FUN_00408ad0();
                  FUN_00408ad0();
                  FUN_00408ad0();
                  FUN_00408ad0();
                  local_8 = (uint)local_8._1_3_ << 8;
                  FUN_00408ad0();
                  FUN_0040c830();
                  FUN_00459820();
                  ExceptionList = local_10;
                  return param_1;
                }
                FUN_009885d0();
                local_8._0_1_ = 0x29;
                FUN_009885d0();
                local_8._0_1_ = 0x2a;
                FUN_009a8ee0(local_84,local_2c);
                local_8._0_1_ = 0x2b;
                iVar7 = FUN_00475500();
                FUN_009a9880(*(undefined8 *)(iVar7 + 0x6c),*(undefined8 *)(iVar7 + 0x74));
                local_8._0_1_ = 0x2c;
                FUN_009888f0();
                local_8._0_1_ = 0x2d;
                FUN_00988f20();
                local_8._0_1_ = 0x2e;
                FUN_00988f20();
                local_8._0_1_ = 0x2f;
                FUN_00408ed0();
                FUN_00408ad0();
                FUN_00408ad0();
                FUN_00408ad0();
                FUN_00408ad0();
                local_8._0_1_ = 0x2a;
                FUN_009a9740();
                FUN_00408ad0();
                local_8 = (uint)local_8._1_3_ << 8;
                FUN_00408ad0();
                FUN_0040c830();
                FUN_00459820();
                ExceptionList = local_10;
                return param_1;
              }
            }
            goto LAB_00773e34;
          }
          FUN_009885d0();
          local_8._0_1_ = 0x1f;
          (**(code **)(*piVar8 + 0x80))();
          FUN_004f97a0();
          local_8._0_1_ = 0x20;
          FUN_00988fa0();
          local_8._0_1_ = 0x21;
          FUN_00988f20();
          local_8 = CONCAT31(local_8._1_3_,0x22);
          FUN_00408ed0();
          FUN_00408ad0();
          FUN_00408ad0();
          FUN_00408ad0();
        }
        else {
          FUN_009885d0();
          local_8._0_1_ = 0x1c;
          FUN_009a8ee0(local_84,local_70);
          local_8._0_1_ = 0x1d;
          iVar7 = FUN_00475500();
          FUN_009a9880(*(undefined8 *)(iVar7 + 0x6c),*(undefined8 *)(iVar7 + 0x74));
          local_8._0_1_ = 0x1e;
          FUN_00408ed0();
          FUN_00408ad0();
          local_8 = CONCAT31(local_8._1_3_,0x1c);
          FUN_009a9740();
        }
        local_8 = local_8 & 0xffffff00;
        FUN_00408ad0();
      }
      else {
        local_18 = 0xf;
        local_1c = 0;
        local_2c[0] = local_2c[0] & 0xffffff00;
        FUN_00409350("TIP_KICK",8);
        local_8._0_1_ = 0x19;
        FUN_009a8ee0(local_84,local_2c);
        local_8._0_1_ = 0x1a;
        iVar7 = FUN_00475500();
        FUN_009a9880(*(undefined8 *)(iVar7 + 0x6c),*(undefined8 *)(iVar7 + 0x74));
        local_8._0_1_ = 0x1b;
        FUN_00408ed0();
        if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_5c = 0xf;
        local_60 = 0;
        local_70[0] = local_70[0] & 0xffffff00;
        local_8._0_1_ = 0x19;
        FUN_009a9740();
        local_8 = (uint)local_8._1_3_ << 8;
        if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
      }
    }
  }
LAB_00773e34:
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  FUN_00408ed0();
  local_8._0_1_ = 0x30;
  *(undefined4 *)(param_1 + 0x30) = 0xf;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  param_1[0x1c] = 0;
  FUN_00408ed0();
  local_8 = CONCAT31(local_8._1_3_,0x31);
  *(undefined4 *)(param_1 + 0x4c) = 0xf;
  *(undefined4 *)(param_1 + 0x48) = 0;
  param_1[0x38] = 0;
  FUN_00408ed0();
  *(undefined4 *)(param_1 + 0x54) = 0;
  param_1[0x58] = 1;
  FUN_00459820();
  ExceptionList = local_10;
  return param_1;
}

