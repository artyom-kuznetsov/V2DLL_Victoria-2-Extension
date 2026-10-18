// FUN_00670bd0 @ 00670bd0 body=[[00670bd0, 00670d1b] [00670d1f, 00670e66] [00670e6a, 00670e9d] [00670ea1, 00670eb7] [00670ebb, 00670f8c] [00670f90, 00670fc4] [00670fc8, 00670fe3] [00670fe7, 00671001] [00671005, 00671051] [00671055, 0067107e] [00671082, 0067109c] [006710a0, 00671727] [0067172b, 00671865] [00671869, 0067189d] [006718a1, 006718bc] [006718c0, 00671991] [00671995, 006719c0] [006719c4, 006719de] [006719e2, 00671a2e] [00671a32, 00671a58] [00671a5c, 00671a71]]


undefined1 * FUN_00670bd0(int param_1,undefined1 *param_2,int *param_3)

{
  byte bVar1;
  undefined1 *puVar2;
  char cVar3;
  byte *pbVar4;
  int iVar5;
  char *pcVar6;
  int *piVar7;
  bool bVar8;
  uint local_ac [4];
  undefined4 local_9c;
  uint local_98;
  uint local_90 [4];
  undefined4 local_80;
  uint local_7c;
  int local_74;
  undefined1 local_70 [4];
  int local_6c;
  uint local_5c [4];
  undefined4 local_4c;
  uint local_48;
  uint local_40 [4];
  undefined4 local_30;
  uint local_2c;
  undefined1 local_24 [4];
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  piVar7 = param_3;
  puStack_c = &LAB_00b6f9bc;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *(undefined4 *)(param_2 + 0x14) = 0xf;
  *param_2 = 0;
  *(undefined4 *)(param_2 + 0x30) = 0xf;
  *(undefined4 *)(param_2 + 0x2c) = 0;
  param_2[0x1c] = 0;
  *(undefined4 *)(param_2 + 0x4c) = 0xf;
  *(undefined4 *)(param_2 + 0x48) = 0;
  param_2[0x38] = 0;
  *(undefined4 *)(param_2 + 0x54) = 0;
  param_2[0x58] = 1;
  local_8 = 0;
  pbVar4 = (byte *)(**(code **)(*param_3 + 0x44))();
  if (0xf < *(uint *)(pbVar4 + 0x14)) {
    pbVar4 = *(byte **)pbVar4;
  }
  pcVar6 = "messageicon_log";
  do {
    bVar1 = *pbVar4;
    bVar8 = bVar1 < (byte)*pcVar6;
    if (bVar1 != *pcVar6) {
LAB_00670c70:
      iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_00670c75;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar4[1];
    bVar8 = bVar1 < (byte)pcVar6[1];
    if (bVar1 != pcVar6[1]) goto LAB_00670c70;
    pbVar4 = pbVar4 + 2;
    pcVar6 = pcVar6 + 2;
  } while (bVar1 != 0);
  iVar5 = 0;
LAB_00670c75:
  if (iVar5 == 0) {
LAB_00670cc0:
    local_98 = 0xf;
    local_9c = 0;
    local_ac[0] = local_ac[0] & 0xffffff00;
    FUN_00409350("MESSAGE_IS_LOG",0xe);
    local_8 = 1;
    FUN_009a8ee0(local_70,local_ac);
    local_8._0_1_ = 3;
    if (0xf < local_98) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_98 = 0xf;
    local_9c = 0;
    local_ac[0] = local_ac[0] & 0xffffff00;
    pbVar4 = (byte *)(**(code **)(*piVar7 + 0x44))();
    if (0xf < *(uint *)(pbVar4 + 0x14)) {
      pbVar4 = *(byte **)pbVar4;
    }
    pcVar6 = "messageicon_log_interesting";
    do {
      bVar1 = *pbVar4;
      bVar8 = bVar1 < (byte)*pcVar6;
      if (bVar1 != *pcVar6) {
LAB_00670d70:
        iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
        goto LAB_00670d75;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar8 = bVar1 < (byte)pcVar6[1];
      if (bVar1 != pcVar6[1]) goto LAB_00670d70;
      pbVar4 = pbVar4 + 2;
      pcVar6 = pcVar6 + 2;
    } while (bVar1 != 0);
    iVar5 = 0;
LAB_00670d75:
    if (iVar5 == 0) {
      iVar5 = *(int *)(*(int *)(param_1 + 0x28) + 0x38);
    }
    else {
      iVar5 = *(int *)(param_1 + 0x28);
    }
    local_4c = 0;
    local_5c[0] = local_5c[0] & 0xffffff00;
    local_48 = 0xf;
    if (*(char *)(iVar5 + 0xd) == '\0') {
      FUN_00409350("MESSAGE_SETTING_FALSE",0x15);
      local_8._0_1_ = 10;
      local_2c = 0xf;
      local_30 = 0;
      local_40[0] = local_40[0] & 0xffffff00;
      FUN_00409350("TRUTH",5);
      local_8._0_1_ = 0xb;
      FUN_009a8ee0(local_24,local_5c);
      local_8._0_1_ = 0xc;
      iVar5 = FUN_00475500();
      FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c),*(undefined8 *)(iVar5 + 0x74));
      local_8._0_1_ = 0xd;
      local_74 = FUN_00aae9af();
      local_8._0_1_ = 0xe;
      if (local_74 == 0) {
        local_74 = 0;
      }
      else {
        local_74 = FUN_009a9ce0();
      }
      local_8._0_1_ = 0xd;
      FUN_009e6810(local_40,&local_74);
      if (0xf < local_7c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_7c = 0xf;
      local_80 = 0;
      local_90[0] = local_90[0] & 0xffffff00;
      local_8._0_1_ = 0xf;
      FUN_009adb70();
      if (local_20 != 0) {
        FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_20 = 0;
      local_1c = 0;
      local_18 = 0;
      if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
    else {
      FUN_00409350("MESSAGE_SETTING_TRUE",0x14);
      local_8._0_1_ = 4;
      local_2c = 0xf;
      local_30 = 0;
      local_40[0] = local_40[0] & 0xffffff00;
      FUN_00409350("TRUTH",5);
      local_8._0_1_ = 5;
      FUN_009a8ee0(local_24,local_5c);
      local_8._0_1_ = 6;
      iVar5 = FUN_00475500();
      FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c),*(undefined8 *)(iVar5 + 0x74));
      local_8._0_1_ = 7;
      local_74 = FUN_00aae9af();
      local_8._0_1_ = 8;
      if (local_74 == 0) {
        local_74 = 0;
      }
      else {
        local_74 = FUN_009a9ce0();
      }
      local_8._0_1_ = 7;
      FUN_009e6810(local_40,&local_74);
      if (0xf < local_7c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_7c = 0xf;
      local_80 = 0;
      local_90[0] = local_90[0] & 0xffffff00;
      local_8._0_1_ = 9;
      FUN_009adb70();
      if (local_20 != 0) {
        FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_20 = 0;
      local_1c = 0;
      local_18 = 0;
      if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
    local_8._0_1_ = 3;
    local_18 = 0;
    local_1c = 0;
    local_20 = 0;
    local_2c = 0xf;
    local_40[0] = local_40[0] & 0xffffff00;
    local_30 = 0;
    if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    iVar5 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c),*(undefined8 *)(iVar5 + 0x74));
    local_8 = CONCAT31(local_8._1_3_,0x10);
    FUN_00408ed0();
    if (0xf < local_7c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = 0x11;
    FUN_009adb70();
    local_8 = local_8 & 0xffffff00;
    if (local_6c != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  else {
    pbVar4 = (byte *)(**(code **)(*piVar7 + 0x44))();
    if (0xf < *(uint *)(pbVar4 + 0x14)) {
      pbVar4 = *(byte **)pbVar4;
    }
    pcVar6 = "messageicon_log_interesting";
    do {
      bVar1 = *pbVar4;
      bVar8 = bVar1 < (byte)*pcVar6;
      if (bVar1 != *pcVar6) {
LAB_00670cb0:
        iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
        goto LAB_00670cb5;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar8 = bVar1 < (byte)pcVar6[1];
      if (bVar1 != pcVar6[1]) goto LAB_00670cb0;
      pbVar4 = pbVar4 + 2;
      pcVar6 = pcVar6 + 2;
    } while (bVar1 != 0);
    iVar5 = 0;
LAB_00670cb5:
    piVar7 = param_3;
    if (iVar5 == 0) goto LAB_00670cc0;
  }
  piVar7 = param_3;
  pbVar4 = (byte *)(**(code **)(*param_3 + 0x44))();
  if (0xf < *(uint *)(pbVar4 + 0x14)) {
    pbVar4 = *(byte **)pbVar4;
  }
  pcVar6 = "messageicon_pause";
  do {
    bVar1 = *pbVar4;
    bVar8 = bVar1 < (byte)*pcVar6;
    if (bVar1 != *pcVar6) {
LAB_006710c0:
      iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_006710c5;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar4[1];
    bVar8 = bVar1 < (byte)pcVar6[1];
    if (bVar1 != pcVar6[1]) goto LAB_006710c0;
    pbVar4 = pbVar4 + 2;
    pcVar6 = pcVar6 + 2;
  } while (bVar1 != 0);
  iVar5 = 0;
LAB_006710c5:
  if (iVar5 == 0) {
LAB_006716cf:
    local_98 = 0xf;
    local_9c = 0;
    local_ac[0] = local_ac[0] & 0xffffff00;
    FUN_00409350("MESSAGE_IS_PAUSE",0x10);
    local_8 = 0x12;
    FUN_009a8ee0(local_70,local_ac);
    local_8._0_1_ = 0x14;
    if (0xf < local_98) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_98 = 0xf;
    local_9c = 0;
    local_ac[0] = local_ac[0] & 0xffffff00;
    pbVar4 = (byte *)(**(code **)(*piVar7 + 0x44))();
    if (0xf < *(uint *)(pbVar4 + 0x14)) {
      pbVar4 = *(byte **)pbVar4;
    }
    pcVar6 = "messageicon_pause_interesting";
    do {
      bVar1 = *pbVar4;
      bVar8 = bVar1 < (byte)*pcVar6;
      if (bVar1 != *pcVar6) {
LAB_00671773:
        iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
        goto LAB_00671778;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar8 = bVar1 < (byte)pcVar6[1];
      if (bVar1 != pcVar6[1]) goto LAB_00671773;
      pbVar4 = pbVar4 + 2;
      pcVar6 = pcVar6 + 2;
    } while (bVar1 != 0);
    iVar5 = 0;
LAB_00671778:
    if (iVar5 == 0) {
      iVar5 = *(int *)(*(int *)(param_1 + 0x28) + 0x38);
    }
    else {
      iVar5 = *(int *)(param_1 + 0x28);
    }
    local_4c = 0;
    local_5c[0] = local_5c[0] & 0xffffff00;
    local_48 = 0xf;
    if (*(char *)(iVar5 + 0x10) == '\0') {
      FUN_00409350("MESSAGE_SETTING_FALSE",0x15);
      local_8._0_1_ = 0x1b;
      local_2c = 0xf;
      local_30 = 0;
      local_40[0] = local_40[0] & 0xffffff00;
      FUN_00409350("TRUTH",5);
      local_8._0_1_ = 0x1c;
      FUN_009a8ee0(local_24,local_5c);
      local_8._0_1_ = 0x1d;
      iVar5 = FUN_00475500();
      FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c),*(undefined8 *)(iVar5 + 0x74));
      local_8._0_1_ = 0x1e;
      param_1 = FUN_00aae9af();
      local_8._0_1_ = 0x1f;
      if (param_1 == 0) {
        param_1 = 0;
      }
      else {
        param_1 = FUN_009a9ce0();
      }
      local_8._0_1_ = 0x1e;
      FUN_009e6810(local_40,&param_1);
      if (0xf < local_7c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_7c = 0xf;
      local_80 = 0;
      local_90[0] = local_90[0] & 0xffffff00;
      local_8._0_1_ = 0x1c;
      FUN_009a9740();
      if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
    else {
      FUN_00409350("MESSAGE_SETTING_TRUE",0x14);
      local_8._0_1_ = 0x15;
      local_2c = 0xf;
      local_30 = 0;
      local_40[0] = local_40[0] & 0xffffff00;
      FUN_00409350("TRUTH",5);
      local_8._0_1_ = 0x16;
      FUN_009a8ee0(local_24,local_5c);
      local_8._0_1_ = 0x17;
      iVar5 = FUN_00475500();
      FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c),*(undefined8 *)(iVar5 + 0x74));
      local_8._0_1_ = 0x18;
      param_1 = FUN_00aae9af();
      local_8._0_1_ = 0x19;
      if (param_1 == 0) {
        param_1 = 0;
      }
      else {
        param_1 = FUN_009a9ce0();
      }
      local_8._0_1_ = 0x18;
      FUN_009e6810(local_40,&param_1);
      if (0xf < local_7c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_7c = 0xf;
      local_80 = 0;
      local_90[0] = local_90[0] & 0xffffff00;
      local_8._0_1_ = 0x1a;
      FUN_009adb70();
      if (local_20 != 0) {
        FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_20 = 0;
      local_1c = 0;
      local_18 = 0;
      if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
    local_8._0_1_ = 0x14;
    local_2c = 0xf;
    local_40[0] = local_40[0] & 0xffffff00;
    local_30 = 0;
    if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    iVar5 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c),*(undefined8 *)(iVar5 + 0x74));
    local_8 = CONCAT31(local_8._1_3_,0x20);
    FUN_00408ed0();
    if (local_7c < 0x10) {
      local_8 = 0x21;
      FUN_009adb70();
      if (local_6c == 0) {
        ExceptionList = local_10;
        return param_2;
      }
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  pbVar4 = (byte *)(**(code **)(*piVar7 + 0x44))();
  if (0xf < *(uint *)(pbVar4 + 0x14)) {
    pbVar4 = *(byte **)pbVar4;
  }
  pcVar6 = "messageicon_pause_interesting";
  do {
    bVar1 = *pbVar4;
    bVar8 = bVar1 < (byte)*pcVar6;
    if (bVar1 != *pcVar6) {
LAB_00671103:
      iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_00671108;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar4[1];
    bVar8 = bVar1 < (byte)pcVar6[1];
    if (bVar1 != pcVar6[1]) goto LAB_00671103;
    pbVar4 = pbVar4 + 2;
    pcVar6 = pcVar6 + 2;
  } while (bVar1 != 0);
  iVar5 = 0;
LAB_00671108:
  if (iVar5 == 0) goto LAB_006716cf;
  (**(code **)(*piVar7 + 0x44))();
  cVar3 = FUN_0040b360();
  if (cVar3 == '\0') {
    (**(code **)(*piVar7 + 0x44))();
    cVar3 = FUN_0040b360();
    if (cVar3 == '\0') {
      (**(code **)(*piVar7 + 0x44))();
      cVar3 = FUN_0040b360();
      if (cVar3 == '\0') {
        (**(code **)(*piVar7 + 0x44))();
        cVar3 = FUN_0040b360();
        if (cVar3 == '\0') {
          (**(code **)(*piVar7 + 0x44))();
          cVar3 = FUN_0040b360();
          if (cVar3 == '\0') {
            (**(code **)(*piVar7 + 0x44))();
            cVar3 = FUN_0040b360();
            if (cVar3 == '\0') {
              ExceptionList = local_10;
              return param_2;
            }
          }
          FUN_009885d0();
          local_8 = 0x3a;
          FUN_009a8ee0(local_24,local_90);
          local_8._0_1_ = 0x3c;
          FUN_00408ad0();
          (**(code **)(*param_3 + 0x44))();
          cVar3 = FUN_0040b360();
          if (cVar3 == '\0') {
            iVar5 = *(int *)(param_1 + 0x28);
          }
          else {
            iVar5 = *(int *)(*(int *)(param_1 + 0x28) + 0x38);
          }
          if (*(char *)(iVar5 + 0x11) == '\0') {
            FUN_009885d0();
            local_8._0_1_ = 0x41;
            FUN_009885d0();
            local_8._0_1_ = 0x42;
            FUN_009a8ee0(local_70,local_ac);
            local_8._0_1_ = 0x43;
            iVar5 = FUN_00475500();
            FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c),*(undefined8 *)(iVar5 + 0x74));
            local_8._0_1_ = 0x44;
            FUN_009a9980();
            FUN_00408ad0();
            local_8._0_1_ = 0x42;
          }
          else {
            FUN_009885d0();
            local_8._0_1_ = 0x3d;
            FUN_009885d0();
            local_8._0_1_ = 0x3e;
            FUN_009a8ee0(local_70,local_ac);
            local_8._0_1_ = 0x3f;
            iVar5 = FUN_00475500();
            FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c),*(undefined8 *)(iVar5 + 0x74));
            local_8._0_1_ = 0x40;
            FUN_009a9980();
            FUN_00408ad0();
            local_8._0_1_ = 0x3e;
          }
          FUN_009a9740();
          FUN_00408ad0();
          local_8._0_1_ = 0x3c;
          FUN_00408ad0();
          iVar5 = FUN_00475500();
          FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c),*(undefined8 *)(iVar5 + 0x74));
          local_8._0_1_ = 0x45;
          goto LAB_006714f3;
        }
      }
      FUN_009885d0();
      local_8 = 0x2e;
      FUN_009a8ee0(local_24,local_90);
      local_8._0_1_ = 0x30;
      FUN_00408ad0();
      (**(code **)(*param_3 + 0x44))();
      cVar3 = FUN_0040b360();
      if (cVar3 == '\0') {
        iVar5 = *(int *)(param_1 + 0x28);
      }
      else {
        iVar5 = *(int *)(*(int *)(param_1 + 0x28) + 0x38);
      }
      if (*(char *)(iVar5 + 0xc) == '\0') {
        FUN_009885d0();
        local_8._0_1_ = 0x35;
        FUN_009885d0();
        local_8._0_1_ = 0x36;
        FUN_009a8ee0(local_70,local_ac);
        local_8._0_1_ = 0x37;
        iVar5 = FUN_00475500();
        FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c),*(undefined8 *)(iVar5 + 0x74));
        local_8._0_1_ = 0x38;
        FUN_009a9980();
        FUN_00408ad0();
        local_8._0_1_ = 0x36;
      }
      else {
        FUN_009885d0();
        local_8._0_1_ = 0x31;
        FUN_009885d0();
        local_8._0_1_ = 0x32;
        FUN_009a8ee0(local_70,local_ac);
        local_8._0_1_ = 0x33;
        iVar5 = FUN_00475500();
        FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c),*(undefined8 *)(iVar5 + 0x74));
        local_8._0_1_ = 0x34;
        FUN_009a9980();
        FUN_00408ad0();
        local_8._0_1_ = 0x32;
      }
      FUN_009a9740();
      FUN_00408ad0();
      local_8._0_1_ = 0x30;
      FUN_00408ad0();
      iVar5 = FUN_00475500();
      FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c),*(undefined8 *)(iVar5 + 0x74));
      local_8._0_1_ = 0x39;
      goto LAB_006714f3;
    }
  }
  FUN_009885d0();
  local_8 = 0x22;
  FUN_009a8ee0(local_24,local_90);
  local_8._0_1_ = 0x24;
  FUN_00408ad0();
  (**(code **)(*param_3 + 0x44))();
  cVar3 = FUN_0040b360();
  if (cVar3 == '\0') {
    iVar5 = *(int *)(param_1 + 0x28);
  }
  else {
    iVar5 = *(int *)(*(int *)(param_1 + 0x28) + 0x38);
  }
  if (*(char *)(iVar5 + 0xe) == '\0') {
    FUN_009885d0();
    local_8._0_1_ = 0x29;
    FUN_009885d0();
    local_8._0_1_ = 0x2a;
    FUN_009a8ee0(local_70,local_ac);
    local_8._0_1_ = 0x2b;
    iVar5 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c),*(undefined8 *)(iVar5 + 0x74));
    local_8._0_1_ = 0x2c;
    FUN_009a9980();
    FUN_00408ad0();
    local_8._0_1_ = 0x2a;
  }
  else {
    FUN_009885d0();
    local_8._0_1_ = 0x25;
    FUN_009885d0();
    local_8._0_1_ = 0x26;
    FUN_009a8ee0(local_70,local_ac);
    local_8._0_1_ = 0x27;
    iVar5 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c),*(undefined8 *)(iVar5 + 0x74));
    local_8._0_1_ = 0x28;
    FUN_009a9980();
    FUN_00408ad0();
    local_8._0_1_ = 0x26;
  }
  FUN_009a9740();
  FUN_00408ad0();
  local_8._0_1_ = 0x24;
  FUN_00408ad0();
  iVar5 = FUN_00475500();
  FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c),*(undefined8 *)(iVar5 + 0x74));
  local_8._0_1_ = 0x2d;
LAB_006714f3:
  puVar2 = param_2;
  FUN_00408ed0();
  FUN_00408ad0();
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_009a9740();
  ExceptionList = local_10;
  return puVar2;
}

